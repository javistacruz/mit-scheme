/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:52-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define ENVIRONMENT_LABEL_1_3 19
#define DEBUGGING_LABEL_1_2 18
#define OBJECT_1_2 17
#define OBJECT_1_1 16
#define OBJECT_1_0 15
#define EXECUTE_CACHE_1_9 11
#define EXECUTE_CACHE_1_8 13
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_1_4);
      goto file_exists_directP_5;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_exists_directP_8)
DEFLABEL (file_exists_directP_5)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  if (Rvl == (current_block [OBJECT_1_0]))
    goto label_10;
  Rvl = Rvl;
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_1_1]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define ENVIRONMENT_LABEL_2_3 18
#define DEBUGGING_LABEL_2_2 17
#define OBJECT_2_1 16
#define OBJECT_2_0 15
#define EXECUTE_CACHE_2_9 11
#define EXECUTE_CACHE_2_8 13
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_2_4);
      goto file_exists_indirectP_5;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_exists_indirectP_8)
DEFLABEL (file_exists_indirectP_5)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  if (Rvl == (current_block [OBJECT_2_0]))
    goto label_10;
  Rvl = Rvl;
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 12
#define DEBUGGING_LABEL_3_2 11
#define OBJECT_3_1 10
#define OBJECT_3_0 9
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_regularP_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_regularP_4)
DEFLABEL (file_regularP_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == (current_block [OBJECT_3_0]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_3_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define OBJECT_4_1 10
#define OBJECT_4_0 9
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_directoryP_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_directoryP_4)
DEFLABEL (file_directoryP_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == (current_block [OBJECT_4_0]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_4_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define ENVIRONMENT_LABEL_5_3 15
#define DEBUGGING_LABEL_5_2 14
#define OBJECT_5_0 13
#define EXECUTE_CACHE_5_8 9
#define EXECUTE_CACHE_5_7 11
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto file_symbolic_linkP_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_symbolic_linkP_5)
DEFLABEL (file_symbolic_linkP_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define ENVIRONMENT_LABEL_6_3 15
#define DEBUGGING_LABEL_6_2 14
#define OBJECT_6_0 13
#define EXECUTE_CACHE_6_8 9
#define EXECUTE_CACHE_6_7 11
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto file_access_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_access_5)
DEFLABEL (file_access_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 2);

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
sfile_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_readableP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_readableP_3)
DEFLABEL (file_readableP_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_8 5
#define LABEL_8_5 7
#define LABEL_8_6 9
#define LABEL_8_10 11
#define ENVIRONMENT_LABEL_8_3 23
#define DEBUGGING_LABEL_8_2 22
#define OBJECT_8_2 21
#define OBJECT_8_1 20
#define OBJECT_8_0 19
#define EXECUTE_CACHE_8_11 13
#define EXECUTE_CACHE_8_9 15
#define EXECUTE_CACHE_8_7 17
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_8_4);
      goto file_writeableP_6;

    case 1:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_writeableP_9)
DEFLABEL (file_writeableP_6)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (label_10)
  (Wrd9.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_11)
  (Wrd5.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 9
#define DEBUGGING_LABEL_9_2 8
#define OBJECT_9_0 7
#define EXECUTE_CACHE_9_5 5
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto file_executableP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_executableP_3)
DEFLABEL (file_executableP_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define ENVIRONMENT_LABEL_10_3 15
#define DEBUGGING_LABEL_10_2 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_8 9
#define EXECUTE_CACHE_10_7 11
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto file_touch_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_touch_5)
DEFLABEL (file_touch_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define ENVIRONMENT_LABEL_11_3 19
#define DEBUGGING_LABEL_11_2 18
#define OBJECT_11_0 17
#define EXECUTE_CACHE_11_10 11
#define EXECUTE_CACHE_11_9 13
#define EXECUTE_CACHE_11_8 15
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_11_4);
      goto make_directory_3;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_directory_6)
DEFLABEL (make_directory_3)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define ENVIRONMENT_LABEL_12_3 19
#define DEBUGGING_LABEL_12_2 18
#define OBJECT_12_0 17
#define EXECUTE_CACHE_12_10 11
#define EXECUTE_CACHE_12_9 13
#define EXECUTE_CACHE_12_8 15
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_12_4);
      goto delete_directory_3;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_directory_6)
DEFLABEL (delete_directory_3)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_8 9
#define LABEL_13_9 11
#define ENVIRONMENT_LABEL_13_3 19
#define DEBUGGING_LABEL_13_2 18
#define OBJECT_13_0 17
#define EXECUTE_CACHE_13_10 13
#define EXECUTE_CACHE_13_7 15
#define FREE_REFERENCES_LABEL_13_0 12
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_13_4);
      goto rename_file_4;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rename_file_7)
DEFLABEL (rename_file_4)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define ENVIRONMENT_LABEL_14_3 15
#define DEBUGGING_LABEL_14_2 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_8 9
#define EXECUTE_CACHE_14_7 11
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_14_4);
      goto delete_file_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_file_5)
DEFLABEL (delete_file_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_8 9
#define LABEL_15_9 11
#define ENVIRONMENT_LABEL_15_3 19
#define DEBUGGING_LABEL_15_2 18
#define OBJECT_15_0 17
#define EXECUTE_CACHE_15_10 13
#define EXECUTE_CACHE_15_7 15
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_15_4);
      goto hard_link_file_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hard_link_file_7)
DEFLABEL (hard_link_file_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_8 9
#define ENVIRONMENT_LABEL_16_3 17
#define DEBUGGING_LABEL_16_2 16
#define OBJECT_16_0 15
#define EXECUTE_CACHE_16_9 11
#define EXECUTE_CACHE_16_6 13
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_16_4);
      goto soft_link_file_3;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (soft_link_file_6)
DEFLABEL (soft_link_file_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define TAG_17_6 1
#define LABEL_17_8 7
#define LABEL_17_9 9
#define LABEL_17_10 11
#define TAG_17_11 4
#define LABEL_17_12 13
#define TAG_17_13 5
#define LABEL_17_15 15
#define ENVIRONMENT_LABEL_17_3 29
#define DEBUGGING_LABEL_17_2 28
#define OBJECT_17_1 27
#define OBJECT_17_0 26
#define EXECUTE_CACHE_17_16 17
#define EXECUTE_CACHE_17_14 19
#define EXECUTE_CACHE_17_7 21
#define FREE_REFERENCE_17_1 24
#define FREE_REFERENCE_17_0 25
#define FREE_REFERENCES_LABEL_17_0 16
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_17_4);
      goto delete_file_no_errors_6;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_17_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_17_12);
      goto lambda_14;

    case 6:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_file_no_errors_11)
DEFLABEL (delete_file_no_errors_6)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_18;
  Wrd6 = Wrd10;

DEFLABEL (label_17)
  (Wrd15.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_16;
  Wrd17 = Wrd21;

DEFLABEL (label_15)
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_10])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd30 = Wrd29;
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  ((Wrd30.pObj) [2]) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_12])));
  Rhp += 1;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd37 = Wrd36;
  (Wrd38.Obj) = (Rsp [2]);
  ((Wrd37.pObj) [2]) = (Wrd38.Obj);
  (Rsp [1]) = (Wrd35.Obj);
  (Rsp [2]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_9])), (Wrd18.pObj));

DEFLABEL (label_9)
  (Wrd17.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_8])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_17_10);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_15);
  Rvl = (current_block [OBJECT_17_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_17_12);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define ENVIRONMENT_LABEL_18_3 19
#define DEBUGGING_LABEL_18_2 18
#define OBJECT_18_0 17
#define EXECUTE_CACHE_18_10 13
#define EXECUTE_CACHE_18_7 15
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_18_4);
      goto file_eqP_4;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_eqP_7)
DEFLABEL (file_eqP_4)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define EXECUTE_CACHE_19_6 7
#define FREE_REFERENCE_19_0 10
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto current_file_time_0;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_file_time_4)
DEFLABEL (current_file_time_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define LABEL_20_11 11
#define LABEL_20_14 13
#define LABEL_20_15 15
#define LABEL_20_12 17
#define LABEL_20_17 19
#define ENVIRONMENT_LABEL_20_3 39
#define DEBUGGING_LABEL_20_2 38
#define OBJECT_20_4 37
#define OBJECT_20_3 36
#define OBJECT_20_2 35
#define OBJECT_20_1 34
#define OBJECT_20_0 33
#define EXECUTE_CACHE_20_18 21
#define EXECUTE_CACHE_20_16 23
#define EXECUTE_CACHE_20_13 25
#define EXECUTE_CACHE_20_10 27
#define EXECUTE_CACHE_20_9 29
#define EXECUTE_CACHE_20_8 31
#define FREE_REFERENCES_LABEL_20_0 20
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_20_4);
      goto directory_file_names_15;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_20_11);
      goto loop_12;

    case 5:
      current_block = (Rpc - LABEL_20_14);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_20_15);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_20_12);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_20_17);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_file_names_18)
DEFLABEL (directory_file_names_15)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == (current_block [OBJECT_20_0]))
    goto label_21;
  Wrd8 = Wrd6;
  goto label_20;

DEFLABEL (label_21)
  (Wrd8.Obj) = (current_block [OBJECT_20_1]);

DEFLABEL (label_20)
DEFLABEL (label_22)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_12;

DEFLABEL (loop_19)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_20_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_12);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_17);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd7.Obj) = (Rsp [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_25;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd19.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_20_3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;

DEFLABEL (label_26)
  (Wrd9.Obj) = (Rsp [1]);
  goto label_24;

DEFLABEL (label_25)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_24)
DEFLABEL (label_27)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define ENVIRONMENT_LABEL_21_3 16
#define DEBUGGING_LABEL_21_2 15
#define EXECUTE_CACHE_21_9 9
#define EXECUTE_CACHE_21_8 11
#define EXECUTE_CACHE_21_6 13
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_21_4);
      goto file_processedP_2;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_processedP_5)
DEFLABEL (file_processedP_2)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define ENVIRONMENT_LABEL_22_3 14
#define DEBUGGING_LABEL_22_2 13
#define OBJECT_22_1 12
#define OBJECT_22_0 11
#define EXECUTE_CACHE_22_6 9
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_22_4);
      goto file_modification_time_P_6;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_modification_time_P_9)
DEFLABEL (file_modification_time_P_6)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd8.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_11)
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);

DEFLABEL (label_10)
DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd8.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_13)
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);

DEFLABEL (label_12)
DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 26)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_15)
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_14;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd15.Lng) < (Wrd17.Lng))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_16;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_22_1]);

DEFLABEL (label_16)
DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_8 9
#define ENVIRONMENT_LABEL_23_3 16
#define DEBUGGING_LABEL_23_2 15
#define OBJECT_23_1 14
#define OBJECT_23_0 13
#define EXECUTE_CACHE_23_6 11
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
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
      goto file_modification_time__P_7;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_modification_time__P_11)
DEFLABEL (file_modification_time__P_7)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_13)
  (Wrd14.Obj) = (current_block [OBJECT_23_0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_12)
DEFLABEL (label_22)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd8.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_15)
  (Wrd8.Obj) = (current_block [OBJECT_23_0]);

DEFLABEL (label_14)
DEFLABEL (label_21)
  Rsp = (& (Rsp [1]));
  (Wrd9.Obj) = (* (Rsp++));
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_20;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_20;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd22.Lng) > (Wrd23.Lng))
    goto label_17;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_23_1]);
  goto label_16;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_16)
DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_8 7
#define ENVIRONMENT_LABEL_24_3 14
#define DEBUGGING_LABEL_24_2 13
#define EXECUTE_CACHE_24_9 9
#define EXECUTE_CACHE_24_7 11
#define FREE_REFERENCES_LABEL_24_0 8
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_24_4);
      goto call_with_temporary_filename_2;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_temporary_filename_5)
DEFLABEL (call_with_temporary_filename_2)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_8 9
#define TAG_25_9 3
#define LABEL_25_10 11
#define TAG_25_11 4
#define ENVIRONMENT_LABEL_25_3 21
#define DEBUGGING_LABEL_25_2 20
#define OBJECT_25_0 19
#define EXECUTE_CACHE_25_13 13
#define EXECUTE_CACHE_25_12 15
#define EXECUTE_CACHE_25_6 17
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_25_4);
      goto call_with_temporary_file_pathname_5;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_25_8);
      goto lambda_9;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_temporary_file_pathname_8)
DEFLABEL (call_with_temporary_file_pathname_5)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_8])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_10])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  ((Wrd17.pObj) [3]) = Rvl;
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_12]));

DEFLABEL (lambda_11)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_25_7);
  Rvl = (current_block [OBJECT_25_0]);
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_25_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_25_10);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define LABEL_26_9 9
#define LABEL_26_11 11
#define LABEL_26_12 13
#define TAG_26_13 5
#define LABEL_26_15 15
#define LABEL_26_17 17
#define LABEL_26_18 19
#define LABEL_26_19 21
#define ENVIRONMENT_LABEL_26_3 40
#define DEBUGGING_LABEL_26_2 39
#define OBJECT_26_5 38
#define OBJECT_26_4 37
#define OBJECT_26_3 36
#define OBJECT_26_2 35
#define OBJECT_26_1 34
#define OBJECT_26_0 33
#define EXECUTE_CACHE_26_16 23
#define EXECUTE_CACHE_26_14 25
#define EXECUTE_CACHE_26_10 27
#define EXECUTE_CACHE_26_8 29
#define EXECUTE_CACHE_26_6 31
#define FREE_REFERENCES_LABEL_26_0 22
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_26_4);
      goto allocate_temporary_file_11;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_26_12);
      goto lambda_17;

    case 6:
      current_block = (Rpc - LABEL_26_15);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_26_17);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_26_18);
      goto label_14;

    case 9:
      current_block = (Rpc - LABEL_26_19);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_temporary_file_16)
DEFLABEL (allocate_temporary_file_11)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 0);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_12])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_14]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_26_12);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [5]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_23;
  (Wrd19.Obj) = ((Wrd32.pObj) [4]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_23;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_23;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd16.pObj) = (& ((Wrd28.pObj) [(Wrd11.Lng)]));
  (Wrd7.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_22)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [3]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd81.Obj) = ((Wrd48.pObj) [5]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 10))
    goto label_21;
  (Wrd67.Obj) = ((Wrd48.pObj) [4]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_21;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if (! (((unsigned long) (Wrd72.Lng)) < ((unsigned long) (Wrd78.Lng))))
    goto label_21;
  (Wrd59.uLng) = (OBJECT_DATUM (Wrd67.Obj));
  (Wrd64.pObj) = (& ((Wrd76.pObj) [(Wrd59.Lng)]));
  ((Wrd64.pObj) [1]) = (Wrd44.Obj);

DEFLABEL (label_20)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_19]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [5]);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 1);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_26_19);
  Rvl = (current_block [OBJECT_26_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd83.Obj) = ((Wrd85.pObj) [5]);
  (Wrd86.Obj) = ((Wrd85.pObj) [4]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 3);

DEFLABEL (label_14)
  goto label_20;

DEFLABEL (label_23)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [5]);
  (Wrd38.Obj) = ((Wrd37.pObj) [4]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define LABEL_27_9 9
#define LABEL_27_10 11
#define LABEL_27_12 13
#define TAG_27_13 5
#define LABEL_27_16 15
#define LABEL_27_15 17
#define LABEL_27_18 19
#define ENVIRONMENT_LABEL_27_3 37
#define DEBUGGING_LABEL_27_2 36
#define OBJECT_27_4 35
#define OBJECT_27_3 34
#define OBJECT_27_2 33
#define OBJECT_27_1 32
#define OBJECT_27_0 31
#define EXECUTE_CACHE_27_17 21
#define EXECUTE_CACHE_27_14 23
#define EXECUTE_CACHE_27_11 25
#define EXECUTE_CACHE_27_8 27
#define EXECUTE_CACHE_27_6 29
#define FREE_REFERENCES_LABEL_27_0 20
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
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
      goto deallocate_temporary_file_9;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_27_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_27_12);
      goto lambda_15;

    case 6:
      current_block = (Rpc - LABEL_27_16);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_27_15);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_27_18);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (deallocate_temporary_file_14)
DEFLABEL (deallocate_temporary_file_9)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 0);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_10);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_12])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  ((Wrd13.pObj) [2]) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_14]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_27_12);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [4]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_19;
  (Wrd20.Obj) = ((Wrd33.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_19;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd25.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_19;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd20.Obj));
  (Wrd16.pObj) = (& ((Wrd29.pObj) [(Wrd11.Lng)]));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_18)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_27_15);
  (Wrd5.Obj) = Rvl;
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [4]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_17;
  (Wrd20.Obj) = ((Wrd33.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd25.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_17;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd20.Obj));
  (Wrd17.pObj) = (& ((Wrd29.pObj) [(Wrd12.Lng)]));
  ((Wrd17.pObj) [1]) = Rvl;

DEFLABEL (label_16)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [0]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 1);

DEFLABEL (label_17)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [4]);
  (Wrd39.Obj) = ((Wrd38.pObj) [3]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 3);

DEFLABEL (label_12)
  goto label_16;

DEFLABEL (label_19)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [4]);
  (Wrd39.Obj) = ((Wrd38.pObj) [3]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 14
#define DEBUGGING_LABEL_28_2 13
#define OBJECT_28_1 12
#define OBJECT_28_0 11
#define EXECUTE_CACHE_28_7 7
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto guarantee_init_file_specifier_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_init_file_specifier_4)
DEFLABEL (guarantee_init_file_specifier_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_9 9
#define ENVIRONMENT_LABEL_29_3 19
#define DEBUGGING_LABEL_29_2 18
#define OBJECT_29_0 17
#define EXECUTE_CACHE_29_10 11
#define EXECUTE_CACHE_29_8 13
#define EXECUTE_CACHE_29_6 15
#define FREE_REFERENCES_LABEL_29_0 10
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_29_4);
      goto init_file_specifierP_4;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto lambda_3;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (init_file_specifierP_7)
DEFLABEL (init_file_specifierP_4)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_29_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_29_0]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_8 5
#define LABEL_30_5 7
#define LABEL_30_6 9
#define LABEL_30_11 11
#define LABEL_30_12 13
#define LABEL_30_14 15
#define LABEL_30_15 17
#define LABEL_30_16 19
#define ENVIRONMENT_LABEL_30_3 36
#define DEBUGGING_LABEL_30_2 35
#define OBJECT_30_1 34
#define OBJECT_30_0 33
#define EXECUTE_CACHE_30_18 21
#define EXECUTE_CACHE_30_17 23
#define EXECUTE_CACHE_30_13 25
#define EXECUTE_CACHE_30_10 27
#define EXECUTE_CACHE_30_9 29
#define EXECUTE_CACHE_30_7 31
#define FREE_REFERENCES_LABEL_30_0 20
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_30_4);
      goto guarantee_init_file_directory_12;

    case 1:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_30_11);
      goto loop_10;

    case 5:
      current_block = (Rpc - LABEL_30_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_30_14);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_30_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_30_16);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_init_file_directory_15)
DEFLABEL (guarantee_init_file_directory_12)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_18)
  goto loop_10;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_5);
  goto label_18;

DEFLABEL (loop_16)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_30_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_12);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (current_block [OBJECT_30_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_30_16);
  (* (--Rsp)) = Rvl;
  goto loop_10;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_15);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_18]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 12
#define DEBUGGING_LABEL_31_2 11
#define EXECUTE_CACHE_31_7 7
#define EXECUTE_CACHE_31_6 9
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto open_input_init_file_1;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_input_init_file_4)
DEFLABEL (open_input_init_file_1)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
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
#define LABEL_32_7 7
#define ENVIRONMENT_LABEL_32_3 18
#define DEBUGGING_LABEL_32_2 17
#define OBJECT_32_1 16
#define OBJECT_32_0 15
#define EXECUTE_CACHE_32_9 9
#define EXECUTE_CACHE_32_8 11
#define EXECUTE_CACHE_32_6 13
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      goto open_output_init_file_5;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_output_init_file_8)
DEFLABEL (open_output_init_file_5)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  if ((Wrd6.Obj) == (current_block [OBJECT_32_0]))
    goto label_10;
  Wrd8 = Wrd6;
  goto label_9;

DEFLABEL (label_10)
  (Wrd8.Obj) = (current_block [OBJECT_32_1]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

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
sfile_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pathname_mime_type_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_mime_type_4)
DEFLABEL (pathname_mime_type_1)
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
#define LABEL_34_6 5
#define LABEL_34_5 7
#define LABEL_34_10 9
#define LABEL_34_8 11
#define ENVIRONMENT_LABEL_34_3 24
#define DEBUGGING_LABEL_34_2 23
#define EXECUTE_CACHE_34_12 13
#define EXECUTE_CACHE_34_11 15
#define EXECUTE_CACHE_34_9 17
#define EXECUTE_CACHE_34_7 19
#define FREE_REFERENCE_34_0 22
#define FREE_REFERENCES_LABEL_34_0 12
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_34_4);
      goto pathname_type__mime_type_6;

    case 1:
      current_block = (Rpc - LABEL_34_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_34_10);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_type__mime_type_10)
DEFLABEL (pathname_type__mime_type_6)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_18;
  Wrd14 = Wrd18;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (Rsp [0]);
  goto label_12;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_6])), (Wrd15.pObj));

DEFLABEL (label_8)
  (Wrd14.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_9 9
#define ENVIRONMENT_LABEL_35_3 21
#define DEBUGGING_LABEL_35_2 20
#define OBJECT_35_0 19
#define EXECUTE_CACHE_35_10 11
#define EXECUTE_CACHE_35_8 13
#define EXECUTE_CACHE_35_6 15
#define FREE_REFERENCE_35_0 18
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto associate_pathname_type_with_mime_type_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_35_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (associate_pathname_type_with_mime_type_6)
DEFLABEL (associate_pathname_type_with_mime_type_2)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_9])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define ENVIRONMENT_LABEL_36_3 18
#define DEBUGGING_LABEL_36_2 17
#define OBJECT_36_1 16
#define OBJECT_36_0 15
#define EXECUTE_CACHE_36_8 9
#define EXECUTE_CACHE_36_6 11
#define FREE_REFERENCE_36_0 14
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_36_4);
      goto disassociate_pathname_type_from_mime_type_1;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (disassociate_pathname_type_from_mime_type_5)
DEFLABEL (disassociate_pathname_type_from_mime_type_1)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_7;
  Wrd6 = Wrd10;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_36_1]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_7])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define ENVIRONMENT_LABEL_37_3 15
#define DEBUGGING_LABEL_37_2 14
#define OBJECT_37_0 13
#define EXECUTE_CACHE_37_8 9
#define EXECUTE_CACHE_37_6 11
#define FREE_REFERENCES_LABEL_37_0 8
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto make_mime_type_2;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_mime_type_5)
DEFLABEL (make_mime_type_2)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_7 5
#define LABEL_38_8 7
#define LABEL_38_5 9
#define TAG_38_6 3
#define LABEL_38_10 11
#define LABEL_38_11 13
#define LABEL_38_12 15
#define LABEL_38_13 17
#define LABEL_38_14 19
#define LABEL_38_15 21
#define ENVIRONMENT_LABEL_38_3 35
#define DEBUGGING_LABEL_38_2 34
#define OBJECT_38_2 33
#define OBJECT_38_1 32
#define OBJECT_38_0 31
#define EXECUTE_CACHE_38_16 23
#define EXECUTE_CACHE_38_9 25
#define FREE_REFERENCE_38_2 28
#define FREE_REFERENCE_38_1 29
#define FREE_REFERENCE_38_0 30
#define FREE_REFERENCES_LABEL_38_0 22
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd81;
  machine_word Wrd14;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd75;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd43;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_38_4);
      goto Z__make_mime_type_12;

    case 1:
      current_block = (Rpc - LABEL_38_7);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_38_8);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_38_5);
      goto lambda_23;

    case 4:
      current_block = (Rpc - LABEL_38_10);
      goto loop_9;

    case 5:
      current_block = (Rpc - LABEL_38_11);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_38_12);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_38_13);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_38_14);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_38_15);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_mime_type_22)
DEFLABEL (Z__make_mime_type_12)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_5])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_28;
  Wrd12 = Wrd16;

DEFLABEL (label_27)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_26;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_25)
  (Wrd27.Obj) = (current_block [OBJECT_38_1]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto loop_9;

DEFLABEL (label_26)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_7])), (Wrd13.pObj));

DEFLABEL (label_14)
  (Wrd12.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_38_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

DEFLABEL (loop_24)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_38_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_32;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_2]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_31;
  Wrd16 = Wrd20;

DEFLABEL (label_30)
  (Rsp [3]) = (Wrd16.Obj);

DEFLABEL (label_29)
  (Wrd81.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd81.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_16]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_15])), (Wrd17.pObj));

DEFLABEL (label_16)
  (Wrd16.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_41;
  Wrd25 = Wrd29;

DEFLABEL (label_40)
  Wrd24 = Wrd25;
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_39;
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_39;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd39.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_39;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd35.pObj) = (& ((Wrd40.pObj) [(Wrd33.Lng)]));
  (Wrd31.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_38)
  (Wrd49.Obj) = (Rsp [3]);
  if ((Wrd31.Obj) == (Wrd49.Obj))
    goto label_33;
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd53.Lng) = ((Wrd52.Lng) + 1L);
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd53.Lng));
  (Rsp [0]) = (Wrd50.Obj);
  goto loop_9;

DEFLABEL (label_33)
  (Wrd54.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd55.Obj);
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_37;
  Wrd57 = Wrd61;

DEFLABEL (label_36)
  Wrd56 = Wrd57;
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd75.uLng) == 10))
    goto label_35;
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_35;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) (Wrd71.Lng)) < ((unsigned long) (Wrd74.Lng))))
    goto label_35;
  (Wrd65.uLng) = (OBJECT_DATUM (Wrd68.Obj));
  (Wrd67.pObj) = (& ((Wrd72.pObj) [(Wrd65.Lng)]));
  (Wrd63.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_34)
  (Rsp [3]) = (Wrd63.Obj);
  goto label_29;

DEFLABEL (label_35)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_14]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 2);

DEFLABEL (label_20)
  (Wrd63.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_13])), (Wrd58.pObj));

DEFLABEL (label_19)
  (Wrd57.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 2);

DEFLABEL (label_18)
  (Wrd31.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_11])), (Wrd26.pObj));

DEFLABEL (label_17)
  (Wrd25.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define ENVIRONMENT_LABEL_39_3 17
#define DEBUGGING_LABEL_39_2 16
#define OBJECT_39_0 15
#define EXECUTE_CACHE_39_9 9
#define EXECUTE_CACHE_39_8 11
#define EXECUTE_CACHE_39_6 13
#define FREE_REFERENCES_LABEL_39_0 8
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_6 5
#define LABEL_40_5 7
#define LABEL_40_9 9
#define LABEL_40_7 11
#define LABEL_40_10 13
#define LABEL_40_13 15
#define LABEL_40_14 17
#define LABEL_40_17 19
#define LABEL_40_15 21
#define LABEL_40_18 23
#define LABEL_40_22 25
#define LABEL_40_20 27
#define LABEL_40_23 29
#define LABEL_40_24 31
#define ENVIRONMENT_LABEL_40_3 66
#define DEBUGGING_LABEL_40_2 65
#define OBJECT_40_6 64
#define OBJECT_40_5 63
#define OBJECT_40_4 62
#define OBJECT_40_3 61
#define OBJECT_40_2 60
#define OBJECT_40_1 59
#define OBJECT_40_0 58
#define EXECUTE_CACHE_40_27 33
#define EXECUTE_CACHE_40_26 35
#define EXECUTE_CACHE_40_25 37
#define EXECUTE_CACHE_40_21 39
#define EXECUTE_CACHE_40_19 41
#define EXECUTE_CACHE_40_16 43
#define EXECUTE_CACHE_40_12 45
#define EXECUTE_CACHE_40_11 47
#define EXECUTE_CACHE_40_8 49
#define FREE_REFERENCE_40_0 52
#define FREE_ASSIGNMENT_40_3 54
#define FREE_ASSIGNMENT_40_2 55
#define FREE_ASSIGNMENT_40_1 56
#define FREE_ASSIGNMENT_40_0 57
#define FREE_REFERENCES_LABEL_40_0 32
#define NUMBER_OF_LINKER_SECTIONS_40_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_40_4);
      goto initialize_packageB_9;

    case 1:
      current_block = (Rpc - LABEL_40_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_40_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_40_7);
      goto lambda_0;

    case 5:
      current_block = (Rpc - LABEL_40_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_40_13);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_40_14);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_40_17);
      goto label_14;

    case 9:
      current_block = (Rpc - LABEL_40_15);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_40_18);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_40_22);
      goto label_15;

    case 12:
      current_block = (Rpc - LABEL_40_20);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_40_23);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_40_24);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_17)
DEFLABEL (initialize_packageB_9)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_32;
  Wrd8 = Wrd12;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_40_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_28)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_40_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_40_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_40_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_22)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_40_18);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_40_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_24]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_40_3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_40_4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_25]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_40_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_40_23);
  Rvl = (current_block [OBJECT_40_5]);
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_40_22])), (Wrd6.pObj), Rvl);

DEFLABEL (label_15)
  goto label_19;

DEFLABEL (label_24)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_40_17])), (Wrd6.pObj), Rvl);

DEFLABEL (label_14)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_40_13])), (Wrd6.pObj), Rvl);

DEFLABEL (label_13)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_40_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_12)
  goto label_28;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_6])), (Wrd9.pObj));

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_18)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_40_7);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define TAG_41_6 1
#define ENVIRONMENT_LABEL_41_3 12
#define DEBUGGING_LABEL_41_2 11
#define EXECUTE_CACHE_41_8 7
#define EXECUTE_CACHE_41_7 9
#define FREE_REFERENCES_LABEL_41_0 6
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_41_4);
      goto mime_type__string_1;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mime_type__string_4)
DEFLABEL (mime_type__string_1)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_41_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define LABEL_42_8 9
#define LABEL_42_9 11
#define LABEL_42_11 13
#define LABEL_42_14 15
#define LABEL_42_15 17
#define ENVIRONMENT_LABEL_42_3 32
#define DEBUGGING_LABEL_42_2 31
#define OBJECT_42_1 30
#define OBJECT_42_0 29
#define EXECUTE_CACHE_42_16 19
#define EXECUTE_CACHE_42_13 21
#define EXECUTE_CACHE_42_12 23
#define EXECUTE_CACHE_42_10 25
#define EXECUTE_CACHE_42_6 27
#define FREE_REFERENCES_LABEL_42_0 18
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_42_4);
      goto write_mime_type_7;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_42_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_42_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_42_14);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_42_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_mime_type_10)
DEFLABEL (write_mime_type_7)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_42_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_42_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_42_14);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_7 5
#define LABEL_43_6 7
#define LABEL_43_5 9
#define ENVIRONMENT_LABEL_43_3 21
#define DEBUGGING_LABEL_43_2 20
#define OBJECT_43_2 19
#define OBJECT_43_1 18
#define OBJECT_43_0 17
#define EXECUTE_CACHE_43_9 11
#define EXECUTE_CACHE_43_8 13
#define FREE_REFERENCE_43_0 16
#define FREE_REFERENCES_LABEL_43_0 10
#define NUMBER_OF_LINKER_SECTIONS_43_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_43_4);
      goto string__mime_type_3;

    case 1:
      current_block = (Rpc - LABEL_43_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__mime_type_7)
DEFLABEL (string__mime_type_3)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_13;
  Wrd14 = Wrd18;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_43_0]);
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_9]));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_43_1]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 2);

DEFLABEL (label_10)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_9;
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_7])), (Wrd15.pObj));

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_12;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 8
#define DEBUGGING_LABEL_44_2 7
#define EXECUTE_CACHE_44_5 5
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto mime_type_stringP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mime_type_stringP_4)
DEFLABEL (mime_type_stringP_1)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define ENVIRONMENT_LABEL_45_3 12
#define DEBUGGING_LABEL_45_2 11
#define EXECUTE_CACHE_45_6 7
#define FREE_REFERENCE_45_0 10
#define FREE_REFERENCES_LABEL_45_0 6
#define NUMBER_OF_LINKER_SECTIONS_45_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto string_is_mime_typeP_0;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_is_mime_typeP_4)
DEFLABEL (string_is_mime_typeP_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_7 7
#define ENVIRONMENT_LABEL_46_3 16
#define DEBUGGING_LABEL_46_2 15
#define EXECUTE_CACHE_46_9 9
#define EXECUTE_CACHE_46_8 11
#define EXECUTE_CACHE_46_6 13
#define FREE_REFERENCES_LABEL_46_0 8
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_46_4);
      goto mime_tokenP_2;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mime_tokenP_5)
DEFLABEL (mime_tokenP_2)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 8
#define DEBUGGING_LABEL_47_2 7
#define EXECUTE_CACHE_47_5 5
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto mime_token_stringP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mime_token_stringP_4)
DEFLABEL (mime_token_stringP_1)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define ENVIRONMENT_LABEL_48_3 12
#define DEBUGGING_LABEL_48_2 11
#define EXECUTE_CACHE_48_6 7
#define FREE_REFERENCE_48_0 10
#define FREE_REFERENCES_LABEL_48_0 6
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto string_is_mime_tokenP_0;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_is_mime_tokenP_4)
DEFLABEL (string_is_mime_tokenP_0)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_9 7
#define LABEL_49_7 9
#define LABEL_49_11 11
#define LABEL_49_10 13
#define LABEL_49_15 15
#define LABEL_49_16 17
#define LABEL_49_18 19
#define LABEL_49_19 21
#define LABEL_49_14 23
#define ENVIRONMENT_LABEL_49_3 42
#define DEBUGGING_LABEL_49_2 41
#define OBJECT_49_3 40
#define OBJECT_49_2 39
#define OBJECT_49_1 38
#define OBJECT_49_0 37
#define EXECUTE_CACHE_49_20 25
#define EXECUTE_CACHE_49_17 27
#define EXECUTE_CACHE_49_13 29
#define EXECUTE_CACHE_49_12 31
#define EXECUTE_CACHE_49_8 33
#define EXECUTE_CACHE_49_6 35
#define FREE_REFERENCES_LABEL_49_0 24
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
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
      goto parser_mime_type_14;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_49_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_49_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_49_15);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_49_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_49_18);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_49_19);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_49_14);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_mime_type_19)
DEFLABEL (parser_mime_type_14)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_49_16);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_21;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_21;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_20]));

DEFLABEL (label_21)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_49_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 2);

DEFLABEL (label_17)
  (Wrd21.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_49_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_49_14);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_49_11);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_49_15);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_9 7
#define LABEL_50_10 9
#define LABEL_50_7 11
#define LABEL_50_11 13
#define ENVIRONMENT_LABEL_50_3 26
#define DEBUGGING_LABEL_50_2 25
#define OBJECT_50_1 24
#define OBJECT_50_0 23
#define EXECUTE_CACHE_50_13 15
#define EXECUTE_CACHE_50_12 17
#define EXECUTE_CACHE_50_8 19
#define EXECUTE_CACHE_50_6 21
#define FREE_REFERENCES_LABEL_50_0 14
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_50_4);
      goto matcher_mime_type_6;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_50_10);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (matcher_mime_type_9)
DEFLABEL (matcher_mime_type_6)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (current_block [OBJECT_50_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_50_11);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_7 7
#define LABEL_51_11 9
#define LABEL_51_13 11
#define LABEL_51_9 13
#define ENVIRONMENT_LABEL_51_3 28
#define DEBUGGING_LABEL_51_2 27
#define EXECUTE_CACHE_51_14 15
#define EXECUTE_CACHE_51_12 17
#define EXECUTE_CACHE_51_10 19
#define EXECUTE_CACHE_51_8 21
#define EXECUTE_CACHE_51_6 23
#define FREE_REFERENCE_51_0 26
#define FREE_REFERENCES_LABEL_51_0 14
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_51_4);
      goto parser_mime_token_7;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_51_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_51_13);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_51_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_mime_token_11)
DEFLABEL (parser_mime_token_7)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_51_11);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_13;
  Wrd12 = Wrd16;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_14]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_13])), (Wrd13.pObj));

DEFLABEL (label_9)
  (Wrd12.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_14)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_9);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define LABEL_52_9 9
#define LABEL_52_8 11
#define LABEL_52_11 13
#define ENVIRONMENT_LABEL_52_3 25
#define DEBUGGING_LABEL_52_2 24
#define OBJECT_52_0 23
#define EXECUTE_CACHE_52_12 15
#define EXECUTE_CACHE_52_10 17
#define EXECUTE_CACHE_52_7 19
#define FREE_REFERENCE_52_0 22
#define FREE_REFERENCES_LABEL_52_0 14
#define NUMBER_OF_LINKER_SECTIONS_52_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_52_4);
      goto matcher_mime_token_7;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto Z___ks2__5;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_52_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_52_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_52_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (matcher_mime_token_11)
DEFLABEL (matcher_mime_token_7)
  INTERRUPT_CHECK (26, LABEL_52_4);
  goto Z___ks2__5;

DEFLABEL (Z___ks2__12)
DEFLABEL (Z___ks2__5)
  INTERRUPT_CHECK (26, LABEL_52_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_15;
  Wrd8 = Wrd12;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rsp = (& (Rsp [1]));
  goto Z___ks2__5;

DEFLABEL (label_13)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_52_11);
  Rvl = (current_block [OBJECT_52_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_9])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_14;

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
sfile_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_mime_type_1;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_mime_type_4)
DEFLABEL (guarantee_mime_type_1)
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
sfile_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto error_not_mime_type_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_mime_type_5)
DEFLABEL (error_not_mime_type_2)
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

#define LABEL_55_4 3
#define LABEL_55_5 5
#define ENVIRONMENT_LABEL_55_3 13
#define DEBUGGING_LABEL_55_2 12
#define OBJECT_55_0 11
#define EXECUTE_CACHE_55_7 7
#define EXECUTE_CACHE_55_6 9
#define FREE_REFERENCES_LABEL_55_0 6
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto guarantee_mime_type_string_1;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_mime_type_string_4)
DEFLABEL (guarantee_mime_type_string_1)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_55_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 11
#define DEBUGGING_LABEL_56_2 10
#define OBJECT_56_2 9
#define OBJECT_56_1 8
#define OBJECT_56_0 7
#define EXECUTE_CACHE_56_5 5
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto error_not_mime_type_string_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_mime_type_string_5)
DEFLABEL (error_not_mime_type_string_2)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_56_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_56_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define ENVIRONMENT_LABEL_57_3 13
#define DEBUGGING_LABEL_57_2 12
#define OBJECT_57_0 11
#define EXECUTE_CACHE_57_7 7
#define EXECUTE_CACHE_57_6 9
#define FREE_REFERENCES_LABEL_57_0 6
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto guarantee_mime_token_1;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_mime_token_4)
DEFLABEL (guarantee_mime_token_1)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_57_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define ENVIRONMENT_LABEL_58_3 11
#define DEBUGGING_LABEL_58_2 10
#define OBJECT_58_2 9
#define OBJECT_58_1 8
#define OBJECT_58_0 7
#define EXECUTE_CACHE_58_5 5
#define FREE_REFERENCES_LABEL_58_0 4
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto error_not_mime_token_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_mime_token_5)
DEFLABEL (error_not_mime_token_2)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_58_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_58_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define ENVIRONMENT_LABEL_59_3 13
#define DEBUGGING_LABEL_59_2 12
#define OBJECT_59_0 11
#define EXECUTE_CACHE_59_7 7
#define EXECUTE_CACHE_59_6 9
#define FREE_REFERENCES_LABEL_59_0 6
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto guarantee_mime_token_string_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_mime_token_string_4)
DEFLABEL (guarantee_mime_token_string_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_59_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define ENVIRONMENT_LABEL_60_3 11
#define DEBUGGING_LABEL_60_2 10
#define OBJECT_60_2 9
#define OBJECT_60_1 8
#define OBJECT_60_0 7
#define EXECUTE_CACHE_60_5 5
#define FREE_REFERENCES_LABEL_60_0 4
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sfile_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto error_not_mime_token_string_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_mime_token_string_5)
DEFLABEL (error_not_mime_token_string_2)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_60_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_60_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_14 17
#define LABEL_12 19
#define LABEL_18 21
#define LABEL_13 23
#define LABEL_15 25
#define TAG_16 11
#define LABEL_17 27
#define LABEL_19 29
#define LABEL_20 31
#define LABEL_21 33
#define LABEL_23 35
#define LABEL_26 37
#define LABEL_25 39
#define LABEL_27 41
#define LABEL_28 43
#define LABEL_33 45
#define LABEL_29 47
#define LABEL_31 49
#define LABEL_37 51
#define LABEL_32 53
#define LABEL_35 55
#define LABEL_41 57
#define LABEL_36 59
#define LABEL_39 61
#define LABEL_45 63
#define LABEL_40 65
#define LABEL_43 67
#define LABEL_44 69
#define LABEL_46 71
#define LABEL_47 73
#define LABEL_48 75
#define LABEL_50 77
#define LABEL_52 79
#define LABEL_53 81
#define LABEL_54 83
#define ENVIRONMENT_LABEL_3 148
#define DEBUGGING_LABEL_2 147
#define PURIFICATION_ROOT 146
#define OBJECT_36 145
#define OBJECT_35 144
#define OBJECT_34 143
#define OBJECT_33 142
#define OBJECT_32 141
#define OBJECT_31 140
#define OBJECT_30 139
#define OBJECT_29 138
#define OBJECT_28 137
#define OBJECT_27 136
#define OBJECT_26 135
#define OBJECT_25 134
#define OBJECT_24 133
#define OBJECT_23 132
#define OBJECT_22 131
#define OBJECT_21 130
#define OBJECT_20 129
#define OBJECT_19 128
#define OBJECT_18 127
#define OBJECT_17 126
#define OBJECT_16 125
#define OBJECT_15 124
#define OBJECT_14 123
#define OBJECT_13 122
#define OBJECT_12 121
#define OBJECT_11 120
#define OBJECT_10 119
#define OBJECT_9 118
#define OBJECT_8 117
#define OBJECT_7 116
#define OBJECT_6 115
#define OBJECT_5 114
#define OBJECT_4 113
#define OBJECT_3 112
#define OBJECT_2 111
#define OBJECT_1 110
#define OBJECT_0 109
#define EXECUTE_CACHE_51 85
#define EXECUTE_CACHE_49 87
#define EXECUTE_CACHE_42 89
#define EXECUTE_CACHE_38 91
#define EXECUTE_CACHE_34 93
#define EXECUTE_CACHE_30 95
#define EXECUTE_CACHE_24 97
#define EXECUTE_CACHE_22 99
#define FREE_REFERENCE_3 102
#define FREE_REFERENCE_2 103
#define FREE_REFERENCE_1 104
#define FREE_REFERENCE_0 105
#define GLOBAL_EXECUTE_CACHE_5 107
#define FREE_REFERENCES_LABEL_0 84
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
sfile_so_d15ea84eaefee94b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7);
      goto label_37;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto lambda_11;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_18);
      goto label_38;

    case 10:
      current_block = (Rpc - LABEL_13);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_15);
      goto lambda_47;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_4;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto continuation_3;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto label_39;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto continuation_20;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_21;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_23;

    case 21:
      current_block = (Rpc - LABEL_33);
      goto label_40;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_37);
      goto label_41;

    case 25:
      current_block = (Rpc - LABEL_32);
      goto continuation_24;

    case 26:
      current_block = (Rpc - LABEL_35);
      goto continuation_27;

    case 27:
      current_block = (Rpc - LABEL_41);
      goto label_42;

    case 28:
      current_block = (Rpc - LABEL_36);
      goto continuation_26;

    case 29:
      current_block = (Rpc - LABEL_39);
      goto continuation_29;

    case 30:
      current_block = (Rpc - LABEL_45);
      goto label_43;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto continuation_28;

    case 32:
      current_block = (Rpc - LABEL_43);
      goto continuation_31;

    case 33:
      current_block = (Rpc - LABEL_44);
      goto continuation_30;

    case 34:
      current_block = (Rpc - LABEL_46);
      goto continuation_32;

    case 35:
      current_block = (Rpc - LABEL_47);
      goto continuation_34;

    case 36:
      current_block = (Rpc - LABEL_48);
      goto continuation_33;

    case 37:
      current_block = (Rpc - LABEL_50);
      goto label_44;

    case 38:
      current_block = (Rpc - LABEL_52);
      goto label_49;

    case 39:
      current_block = (Rpc - LABEL_53);
      goto label_50;

    case 40:
      current_block = (Rpc - LABEL_54);
      goto expression_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_36)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_53])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_50)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_49)
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
	2,
	2,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	2,
	1,
	1,
	3,
	1,
	2,
	1,
	2,
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
	1,
	1,
	1,
	2,
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
    if (counter > 60)
      goto label_48;
    blocks = (current_block [OBJECT_36]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_52])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_48)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_52;
  Wrd8 = Wrd12;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_11;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_11;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_37)
  (Wrd8.Obj) = Rvl;
  goto label_51;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_66;
  Wrd8 = Wrd12;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_64;
  Wrd8 = Wrd12;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_62;
  Wrd12 = Wrd16;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_60;
  Wrd11 = Wrd15;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_58;
  Wrd12 = Wrd16;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_56;
  Wrd12 = Wrd16;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_48);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_54;
  Wrd5 = Wrd9;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_35]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd6.pObj));

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45])), (Wrd13.pObj));

DEFLABEL (label_43)
  (Wrd12.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd13.pObj));

DEFLABEL (label_42)
  (Wrd12.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd12.pObj));

DEFLABEL (label_41)
  (Wrd11.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd13.pObj));

DEFLABEL (label_40)
  (Wrd12.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd9.pObj));

DEFLABEL (label_39)
  (Wrd8.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd9.pObj));

DEFLABEL (label_38)
  (Wrd8.Obj) = Rvl;
  goto label_65;

DEFLABEL (lambda_46)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_14);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_15);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd9.Lng) < 9L)
    goto label_68;
  Rvl = (current_block [OBJECT_18]);

DEFLABEL (label_67)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd14.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 26)
    goto label_70;

DEFLABEL (label_69)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17]), 2);

DEFLABEL (label_70)
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd9.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_69;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd6.Obj));
  (Wrd20.pObj) = (& ((Wrd27.pObj) [(Wrd17.Lng)]));
  Rvl = ((Wrd20.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_67;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_sfile_so_d15ea84eaefee94b [60] =
  {
    { "sfile_so_code_1", 4, sfile_so_code_1 },
    { "sfile_so_code_2", 4, sfile_so_code_2 },
    { "sfile_so_code_3", 2, sfile_so_code_3 },
    { "sfile_so_code_4", 2, sfile_so_code_4 },
    { "sfile_so_code_5", 3, sfile_so_code_5 },
    { "sfile_so_code_6", 3, sfile_so_code_6 },
    { "sfile_so_code_7", 1, sfile_so_code_7 },
    { "sfile_so_code_8", 5, sfile_so_code_8 },
    { "sfile_so_code_9", 1, sfile_so_code_9 },
    { "sfile_so_code_10", 3, sfile_so_code_10 },
    { "sfile_so_code_11", 4, sfile_so_code_11 },
    { "sfile_so_code_12", 4, sfile_so_code_12 },
    { "sfile_so_code_13", 5, sfile_so_code_13 },
    { "sfile_so_code_14", 3, sfile_so_code_14 },
    { "sfile_so_code_15", 5, sfile_so_code_15 },
    { "sfile_so_code_16", 4, sfile_so_code_16 },
    { "sfile_so_code_17", 7, sfile_so_code_17 },
    { "sfile_so_code_18", 5, sfile_so_code_18 },
    { "sfile_so_code_19", 2, sfile_so_code_19 },
    { "sfile_so_code_20", 9, sfile_so_code_20 },
    { "sfile_so_code_21", 3, sfile_so_code_21 },
    { "sfile_so_code_22", 3, sfile_so_code_22 },
    { "sfile_so_code_23", 4, sfile_so_code_23 },
    { "sfile_so_code_24", 3, sfile_so_code_24 },
    { "sfile_so_code_25", 5, sfile_so_code_25 },
    { "sfile_so_code_26", 10, sfile_so_code_26 },
    { "sfile_so_code_27", 9, sfile_so_code_27 },
    { "sfile_so_code_28", 2, sfile_so_code_28 },
    { "sfile_so_code_29", 4, sfile_so_code_29 },
    { "sfile_so_code_30", 9, sfile_so_code_30 },
    { "sfile_so_code_31", 2, sfile_so_code_31 },
    { "sfile_so_code_32", 3, sfile_so_code_32 },
    { "sfile_so_code_33", 2, sfile_so_code_33 },
    { "sfile_so_code_34", 5, sfile_so_code_34 },
    { "sfile_so_code_35", 4, sfile_so_code_35 },
    { "sfile_so_code_36", 3, sfile_so_code_36 },
    { "sfile_so_code_37", 3, sfile_so_code_37 },
    { "sfile_so_code_38", 10, sfile_so_code_38 },
    { "sfile_so_code_39", 3, sfile_so_code_39 },
    { "sfile_so_code_40", 15, sfile_so_code_40 },
    { "sfile_so_code_41", 2, sfile_so_code_41 },
    { "sfile_so_code_42", 8, sfile_so_code_42 },
    { "sfile_so_code_43", 4, sfile_so_code_43 },
    { "sfile_so_code_44", 1, sfile_so_code_44 },
    { "sfile_so_code_45", 2, sfile_so_code_45 },
    { "sfile_so_code_46", 3, sfile_so_code_46 },
    { "sfile_so_code_47", 1, sfile_so_code_47 },
    { "sfile_so_code_48", 2, sfile_so_code_48 },
    { "sfile_so_code_49", 11, sfile_so_code_49 },
    { "sfile_so_code_50", 6, sfile_so_code_50 },
    { "sfile_so_code_51", 6, sfile_so_code_51 },
    { "sfile_so_code_52", 6, sfile_so_code_52 },
    { "sfile_so_code_53", 2, sfile_so_code_53 },
    { "sfile_so_code_54", 1, sfile_so_code_54 },
    { "sfile_so_code_55", 2, sfile_so_code_55 },
    { "sfile_so_code_56", 1, sfile_so_code_56 },
    { "sfile_so_code_57", 2, sfile_so_code_57 },
    { "sfile_so_code_58", 1, sfile_so_code_58 },
    { "sfile_so_code_59", 2, sfile_so_code_59 },
    { "sfile_so_code_60", 1, sfile_so_code_60 }
  };

int
decl_sfile_so_d15ea84eaefee94b (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_sfile_so_d15ea84eaefee94b);
  return (0);
}

DECLARE_COMPILED_CODE ("sfile.so", 41, decl_sfile_so_d15ea84eaefee94b, sfile_so_d15ea84eaefee94b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_sfile_so_data_d15ea84eaefee94b [7814] =
  "\x95\x01\x71\xed\x0e\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\x07\x80"
  "\x28\x0d\xb9\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbb\x1d\xb0\x82\x88\xc1\xbc\x80\x28\xb1\x28\xb2\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x83\x88\x07"
  "\x0d\xbe\x28\x0d\xbf\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x84\x88\x07\x0d\x1c\x28\xb7\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\xc1\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xc2\x1c\x28\xb1\x28\xb2\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x28\x0d"
  "\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x82\x28"
  "\xb1\x28\x0d\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x28\x1b\x23\x22\x29\x21\x17"
  "\x2b\xbc\x1d\xb0\x02\x88\xc1\x28\xb1\x28\xb2\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x28\xb1\x28\xb2\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc1\x28\xb1\x28\xb2\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x28\xb1\x28\xb2"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc1\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x28\xb1\x28\xb2\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x28\xb2\x28\xb1\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x08\x0d\x0d\x24\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x28\xb1\x28\xb2\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x08\x06\x1d\x28\x0d\x28\x0d\x28\xb2\x28\x0d"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x87\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x87\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xc1\x1c\xc3\x1c"
  "\xc2\x1c\xc0\x1c\x0d\x1c\x28\x0d\x1c\x28\xb2\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x1b\x1b\x1b\x28\x0d\x1c\x28\x1b\x28\xb2\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x28\x1b\x28\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d"
  "\x1c\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\xc1"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x1d\x0d\x1c\x0d\x02\x02\x0c\x1b\x1b\x0d\x1c\x1b\x25\x1b"
  "\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x80\x1b\x0d\x1c\x24\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x1b\x80\x0f\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x07\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x24\x28\x1b\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d"
  "\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17"
  "\x2b\x1c\x17\xb8\x88\xb0\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1e\x1e\x1e\x1e\x17\x1b\x0d\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x17\x0d"
  "\x1b\x2a\x1b\x1b\x1b\x1b\x9a\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x9e\x1b"
  "\x2a\x1b\x2a\x9a\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x1b\x08"
  "\x89\x1b\x1b\x1b\x0d\x0d\x0d\x1b\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d"
  "\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x1b\x0d\x0d\x1b\x1b\x0d\x17\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\xb4\x2a\x17\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x1b\xb6\x17\x0d\x1c\x0d\x1b\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a"
  "\xb7\x0d\xc3\x0d\x1c\xc1\x0d\x1c\x1b\x0d\x9a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x9a\xc1\xb7\x1b\x99\x1e\x1e\x99\xc3\x1b\x0d\x1c\x0d\x99\xb5"
  "\x2a\xb3\x2a\x99\x28\x0d\x26\x1b\x1b\x1b\x1b\x24\x28\xb1\x28\xb2"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x54\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x66\x69"
  "\x6c\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x14\x66\x69\x6c"
  "\x65\x2d\x65\x78\x69\x73\x74\x73\x2d\x64\x69\x72\x65\x63\x74\x3f"
  "\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x73\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x03"
  "\x2d\x0a\x81\x87\x02\x2c\x08\x81\x85\x02\x2b\x06\x81\x83\x02\x2a"
  "\x04\x83\x04\x09\x14\x02\x0d\x66\x69\x6c\x65\x2d\x65\x78\x69\x73"
  "\x74\x73\x3f\x03\x03\x03\x31\x0a\x81\x87\x02\x30\x08\x81\x85\x02"
  "\x2f\x06\x81\x83\x02\x2e\x04\x83\x04\x09\x13\x02\x08\x72\x65\x67"
  "\x75\x6c\x61\x72\x03\x13\x66\x69\x6c\x65\x2d\x74\x79\x70\x65\x2d"
  "\x69\x6e\x64\x69\x72\x65\x63\x74\x02\x33\x06\x81\x83\x02\x32\x04"
  "\x83\x04\x05\x0d\x09\x02\x0a\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x0a\x03\x02\x35\x06\x81\x83\x02\x34\x04\x83\x04\x05\x0d\x0b\x02"
  "\x10\x66\x69\x6c\x65\x2d\x73\x6f\x66\x74\x2d\x6c\x69\x6e\x6b\x3f"
  "\x03\x03\x03\x38\x08\x81\x85\x02\x37\x06\x81\x83\x02\x36\x04\x83"
  "\x04\x07\x10\x0c\x02\x0c\x66\x69\x6c\x65\x2d\x61\x63\x63\x65\x73"
  "\x73\x0d\x03\x03\x03\x3b\x08\x81\x87\x02\x3a\x06\x81\x85\x02\x39"
  "\x04\x84\x06\x07\x10\x0e\x02\x08\x04\x0c\x66\x69\x6c\x65\x2d\x61"
  "\x63\x63\x65\x73\x73\x0f\x02\x3c\x04\x83\x04\x03\x0a\x10\x02\x09"
  "\x0d\x03\x03\x15\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x6e\x61"
  "\x6d\x65\x73\x74\x72\x69\x6e\x67\x03\x04\x41\x0c\x81\x83\x02\x40"
  "\x0a\x81\x85\x02\x3f\x08\x81\x83\x02\x3e\x06\x81\x85\x02\x3d\x04"
  "\x83\x04\x0b\x18\x0d\x02\x0a\x04\x0f\x02\x42\x04\x83\x04\x03\x0a"
  "\x02\x0b\x0b\x66\x69\x6c\x65\x2d\x74\x6f\x75\x63\x68\x03\x03\x03"
  "\x45\x08\x81\x85\x02\x44\x06\x81\x83\x02\x43\x04\x83\x04\x07\x10"
  "\x11\x02\x0c\x0f\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x6d\x61"
  "\x6b\x65\x03\x03\x03\x1b\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x66\x69\x6c\x65"
  "\x12\x04\x49\x0a\x81\x87\x02\x48\x08\x81\x85\x02\x47\x06\x81\x83"
  "\x02\x46\x04\x83\x04\x09\x14\x13\x02\x0d\x11\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x64\x65\x6c\x65\x74\x65\x03\x03\x03\x12\x04"
  "\x4d\x0a\x81\x87\x02\x4c\x08\x81\x85\x02\x4b\x06\x81\x83\x02\x4a"
  "\x04\x83\x04\x09\x14\x14\x02\x0e\x0c\x66\x69\x6c\x65\x2d\x72\x65"
  "\x6e\x61\x6d\x65\x03\x03\x03\x52\x0c\x81\x87\x02\x51\x0a\x81\x85"
  "\x02\x50\x08\x81\x87\x02\x4f\x06\x81\x85\x02\x4e\x04\x84\x06\x0b"
  "\x14\x15\x02\x0f\x0c\x66\x69\x6c\x65\x2d\x72\x65\x6d\x6f\x76\x65"
  "\x03\x03\x03\x55\x08\x81\x85\x02\x54\x06\x81\x83\x02\x53\x04\x83"
  "\x04\x07\x10\x16\x02\x10\x0f\x66\x69\x6c\x65\x2d\x6c\x69\x6e\x6b"
  "\x2d\x68\x61\x72\x64\x03\x03\x03\x5a\x0c\x81\x87\x02\x59\x0a\x81"
  "\x85\x02\x58\x08\x81\x87\x02\x57\x06\x81\x85\x02\x56\x04\x84\x06"
  "\x0b\x14\x17\x02\x11\x0f\x66\x69\x6c\x65\x2d\x6c\x69\x6e\x6b\x2d"
  "\x73\x6f\x66\x74\x03\x03\x03\x5e\x0a\x81\x87\x02\x5d\x08\x81\x85"
  "\x02\x5c\x06\x81\x85\x02\x5b\x04\x84\x06\x09\x12\x18\x02\x12\x1a"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x70"
  "\x6f\x72\x74\x2d\x65\x72\x72\x6f\x72\x1a\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x66\x69\x6c\x65\x2d\x65\x72"
  "\x72\x6f\x72\x03\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d"
  "\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x05\x17\x62\x69\x6e\x64\x2d\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\x03\x0c\x64\x65"
  "\x6c\x65\x74\x65\x2d\x66\x69\x6c\x65\x19\x04\x65\x10\x81\x83\x02"
  "\x64\x0e\x81\x85\x02\x63\x0c\x81\x83\x02\x62\x0a\x81\x87\x02\x61"
  "\x08\x81\x85\x02\x60\x06\x81\x85\x02\x5f\x04\x83\x04\x0f\x1e\x1a"
  "\x02\x13\x09\x66\x69\x6c\x65\x2d\x65\x71\x3f\x03\x03\x03\x6a\x0c"
  "\x81\x87\x02\x69\x0a\x81\x85\x02\x68\x08\x81\x87\x02\x67\x06\x81"
  "\x85\x02\x66\x04\x84\x06\x0b\x14\x1b\x02\x14\x17\x66\x69\x6c\x65"
  "\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69"
  "\x6d\x65\x1c\x02\x03\x22\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d"
  "\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x1d\x02\x6c\x06\x81\x81\x02\x6b\x04"
  "\x82\x02\x05\x0d\x1e\x02\x15\x02\x2e\x03\x2e\x2e\x08\x03\x16\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x03\x17\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x6f\x70\x65\x6e\x03\x03\x17\x64"
  "\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x63\x68\x61\x6e\x6e\x65\x6c"
  "\x2d\x72\x65\x61\x64\x04\x09\x73\x74\x72\x69\x6e\x67\x3d\x3f\x03"
  "\x18\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x63\x68\x61\x6e\x6e"
  "\x65\x6c\x2d\x63\x6c\x6f\x73\x65\x07\x75\x14\x81\x89\x02\x74\x12"
  "\x81\x87\x02\x73\x10\x81\x89\x02\x72\x0e\x81\x89\x02\x71\x0c\x81"
  "\x87\x02\x70\x0a\x81\x89\x02\x6f\x08\x81\x87\x02\x6e\x06\x81\x85"
  "\x02\x6d\x04\x84\x04\x13\x28\x1f\x02\x16\x04\x16\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x74\x79\x70"
  "\x65\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d"
  "\x74\x79\x70\x65\x04\x1a\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x3c\x3d\x3f\x20"
  "\x04\x78\x08\x81\x87\x02\x77\x06\x81\x87\x02\x76\x04\x85\x08\x07"
  "\x11\x21\x02\x17\x03\x1c\x02\x7b\x08\x81\x85\x02\x7a\x06\x81\x85"
  "\x02\x79\x04\x84\x06\x07\x0f\x22\x02\x18\x03\x1c\x02\x7f\x0a\x81"
  "\x85\x02\x7e\x08\x81\x87\x02\x7d\x06\x81\x85\x02\x7c\x04\x84\x06"
  "\x09\x11\x1c\x02\x19\x03\x1d\x03\x03\x82\x01\x08\x81\x85\x02\x81"
  "\x01\x06\x81\x85\x02\x80\x01\x04\x83\x04\x07\x0f\x23\x02\x1a\x02"
  "\x02\x18\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65"
  "\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x05\x0d\x64\x79\x6e\x61\x6d"
  "\x69\x63\x2d\x77\x69\x6e\x64\x03\x1a\x64\x65\x61\x6c\x6c\x6f\x63"
  "\x61\x74\x65\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69"
  "\x6c\x65\x24\x04\x87\x01\x0c\x81\x83\x02\x86\x01\x0a\x81\x83\x02"
  "\x85\x01\x08\x82\x02\x84\x01\x06\x81\x83\x02\x83\x01\x04\x83\x04"
  "\x0b\x16\x25\x02\x1b\x1a\x73\x65\x74\x2d\x66\x69\x78\x65\x64\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74\x6f\x72\x21\x26"
  "\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x27\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x28\x19\x67\x65\x74\x2d\x66\x69"
  "\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74"
  "\x6f\x72\x29\x10\x66\x69\x6c\x65\x73\x2d\x74\x6f\x2d\x64\x65\x6c"
  "\x65\x74\x65\x2a\x03\x0d\x66\x69\x6c\x65\x2d\x65\x78\x69\x73\x74"
  "\x73\x3f\x2b\x03\x03\x1a\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x73\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x6c\x6f\x74\x2c"
  "\x03\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x73\x2d\x03\x0b\x66\x69\x6c\x65\x2d\x74\x6f\x75\x63"
  "\x68\x2e\x06\x91\x01\x16\x81\x83\x02\x90\x01\x14\x81\x83\x02\x8f"
  "\x01\x12\x81\x83\x02\x8e\x01\x10\x81\x83\x02\x8d\x01\x0e\x81\x83"
  "\x02\x8c\x01\x0c\x81\x87\x02\x8b\x01\x0a\x81\x85\x02\x8a\x01\x08"
  "\x81\x83\x02\x89\x01\x06\x81\x83\x02\x88\x01\x04\x83\x04\x15\x29"
  "\x2f\x02\x1c\x26\x27\x28\x29\x2a\x03\x16\x64\x65\x6c\x65\x74\x65"
  "\x2d\x66\x69\x6c\x65\x2d\x6e\x6f\x2d\x65\x72\x72\x6f\x72\x73\x2a"
  "\x03\x2c\x03\x03\x2d\x04\x08\x64\x65\x6c\x65\x74\x65\x21\x06\x9a"
  "\x01\x14\x81\x83\x02\x99\x01\x12\x81\x83\x02\x98\x01\x10\x81\x85"
  "\x02\x97\x01\x0e\x81\x83\x02\x96\x01\x0c\x81\x87\x02\x95\x01\x0a"
  "\x81\x85\x02\x94\x01\x08\x81\x83\x02\x93\x01\x06\x81\x83\x02\x92"
  "\x01\x04\x83\x04\x13\x26\x2d\x02\x1d\x02\x14\x69\x6e\x69\x74\x2d"
  "\x66\x69\x6c\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x72\x03\x15"
  "\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x2d\x73\x70\x65\x63\x69\x66"
  "\x69\x65\x72\x3f\x2c\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f"
  "\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x29\x03\x9c\x01\x06\x81\x85\x02\x9b\x01\x04\x84\x06\x05\x0f\x27"
  "\x02\x1e\x03\x06\x6c\x69\x73\x74\x3f\x04\x09\x66\x6f\x72\x2d\x61"
  "\x6c\x6c\x3f\x03\x0d\x73\x74\x72\x69\x6e\x67\x2d\x6e\x75\x6c\x6c"
  "\x3f\x04\xa0\x01\x0a\x81\x83\x02\x9f\x01\x08\x83\x04\x9e\x01\x06"
  "\x81\x83\x02\x9d\x01\x04\x83\x04\x09\x14\x26\x02\x1f\x02\x1e\x48"
  "\x6f\x6d\x65\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x20\x64\x6f"
  "\x65\x73\x6e\x27\x74\x20\x65\x78\x69\x73\x74\x3a\x02\x16\x75\x73"
  "\x65\x72\x2d\x68\x6f\x6d\x65\x64\x69\x72\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x04\x06\x65\x72\x72\x6f\x72\x03\x10\x66\x69\x6c\x65"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x3f\x30\x03\x13\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x03\x12\x03\x0f\x6d\x61\x6b\x65\x2d\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x12\x07\xa9\x01\x14\x81\x85\x02\xa8\x01\x12\x81\x83\x02"
  "\xa7\x01\x10\x81\x83\x02\xa6\x01\x0e\x81\x83\x02\xa5\x01\x0c\x81"
  "\x83\x02\xa4\x01\x0a\x81\x85\x02\xa3\x01\x08\x81\x83\x02\xa2\x01"
  "\x06\x81\x83\x02\xa1\x01\x04\x83\x04\x13\x25\x31\x02\x20\x03\x1e"
  "\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x2d\x73\x70\x65\x63\x69\x66"
  "\x69\x65\x72\x2d\x3e\x70\x61\x74\x68\x6e\x61\x6d\x65\x32\x03\x10"
  "\x6f\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x66\x69\x6c\x65\x03"
  "\xab\x01\x06\x81\x83\x02\xaa\x01\x04\x83\x04\x05\x0d\x33\x02\x21"
  "\x08\x03\x32\x03\x1e\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x69"
  "\x6e\x69\x74\x2d\x66\x69\x6c\x65\x2d\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x32\x04\x11\x6f\x70\x65\x6e\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x66\x69\x6c\x65\x04\xae\x01\x08\x81\x87\x02\xad\x01\x06\x81"
  "\x85\x02\xac\x01\x04\x84\x04\x07\x13\x34\x02\x22\x03\x0e\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x03\x19\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x2d\x3e\x6d\x69\x6d\x65"
  "\x2d\x74\x79\x70\x65\x35\x03\xb0\x01\x06\x81\x83\x02\xaf\x01\x04"
  "\x83\x04\x05\x0d\x36\x02\x23\x0f\x6c\x6f\x63\x61\x6c\x2d\x74\x79"
  "\x70\x65\x2d\x6d\x61\x70\x37\x02\x05\x0f\x68\x61\x73\x68\x2d\x74"
  "\x61\x62\x6c\x65\x2f\x67\x65\x74\x03\x14\x6f\x73\x2f\x73\x75\x66"
  "\x66\x69\x78\x2d\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x03\x0b\x6d"
  "\x69\x6d\x65\x2d\x74\x79\x70\x65\x3f\x38\x03\x12\x73\x74\x72\x69"
  "\x6e\x67\x2d\x3e\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x39\x05\xb5"
  "\x01\x0c\x81\x85\x02\xb4\x01\x0a\x81\x85\x02\xb3\x01\x08\x81\x83"
  "\x02\xb2\x01\x06\x81\x89\x02\xb1\x01\x04\x83\x04\x0b\x19\x3a\x02"
  "\x24\x27\x61\x73\x73\x6f\x63\x69\x61\x74\x65\x2d\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x2d\x77\x69\x74\x68\x2d\x6d"
  "\x69\x6d\x65\x2d\x74\x79\x70\x65\x3b\x37\x02\x04\x11\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x2d\x73\x74\x72\x69\x6e\x67\x3c\x04\x14"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6d\x69\x6d\x65\x2d\x74"
  "\x79\x70\x65\x3d\x05\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x2f\x70\x75\x74\x21\x3e\x04\xb9\x01\x0a\x81\x85\x02\xb8\x01\x08"
  "\x81\x85\x02\xb7\x01\x06\x81\x85\x02\xb6\x01\x04\x84\x06\x09\x16"
  "\x3f\x02\x25\x0e\x64\x69\x73\x61\x73\x73\x6f\x63\x69\x61\x74\x65"
  "\x64\x2a\x64\x69\x73\x61\x73\x73\x6f\x63\x69\x61\x74\x65\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x2d\x66\x72\x6f"
  "\x6d\x2d\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x40\x37\x02\x04\x3c"
  "\x05\x3e\x03\xbc\x01\x08\x81\x85\x02\xbb\x01\x06\x81\x83\x02\xba"
  "\x01\x04\x83\x04\x07\x13\x3e\x02\x26\x0f\x6d\x61\x6b\x65\x2d\x6d"
  "\x69\x6d\x65\x2d\x74\x79\x70\x65\x3c\x04\x15\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x6d\x69\x6d\x65\x2d\x74\x6f\x6b\x65\x6e\x41"
  "\x04\x10\x25\x6d\x61\x6b\x65\x2d\x6d\x69\x6d\x65\x2d\x74\x79\x70"
  "\x65\x42\x03\xbf\x01\x08\x81\x85\x02\xbe\x01\x06\x81\x85\x02\xbd"
  "\x01\x04\x84\x06\x07\x10\x43\x02\x27\x28\x0e\x76\x65\x63\x74\x6f"
  "\x72\x2d\x6c\x65\x6e\x67\x74\x68\x15\x74\x6f\x70\x2d\x6c\x65\x76"
  "\x65\x6c\x2d\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x73\x44\x14\x69"
  "\x6e\x74\x65\x72\x6e\x65\x64\x2d\x6d\x69\x6d\x65\x2d\x74\x79\x70"
  "\x65\x73\x45\x1c\x75\x6e\x75\x73\x75\x61\x6c\x2d\x69\x6e\x74\x65"
  "\x72\x6e\x65\x64\x2d\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x73\x46"
  "\x04\x04\x11\x25\x25\x6d\x61\x6b\x65\x2d\x6d\x69\x6d\x65\x2d\x74"
  "\x79\x70\x65\x47\x05\x13\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x2f\x69\x6e\x74\x65\x72\x6e\x21\x03\xc9\x01\x16\x81\x8d\x02\xc8"
  "\x01\x14\x81\x8d\x02\xc7\x01\x12\x81\x8d\x02\xc6\x01\x10\x81\x8b"
  "\x02\xc5\x01\x0e\x81\x8b\x02\xc4\x01\x0c\x81\x8b\x02\xc3\x01\x0a"
  "\x81\x83\x02\xc2\x01\x08\x81\x87\x02\xc1\x01\x06\x81\x87\x02\xc0"
  "\x01\x04\x84\x06\x15\x24\x48\x02\x28\x01\x21\x04\x0b\x77\x72\x69"
  "\x74\x65\x2d\x63\x68\x61\x72\x03\x12\x6d\x69\x6d\x65\x2d\x74\x79"
  "\x70\x65\x2d\x3e\x73\x74\x72\x69\x6e\x67\x49\x04\x0d\x77\x72\x69"
  "\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x4a\x04\xcc\x01\x08\x81\x85"
  "\x02\xcb\x01\x06\x81\x85\x02\xca\x01\x04\x84\x06\x07\x12\x4b\x02"
  "\x29\x04\x73\x63\x6d\x02\x05\x74\x65\x78\x74\x4c\x09\x78\x2d\x73"
  "\x63\x68\x65\x6d\x65\x22\x80\x01\x10\x28\x29\x3c\x3e\x40\x2c\x3b"
  "\x3a\x5c\x22\x2f\x5b\x5d\x3f\x3d\x45\x46\x14\x63\x68\x61\x72\x2d"
  "\x73\x65\x74\x3a\x6d\x69\x6d\x65\x2d\x74\x6f\x6b\x65\x6e\x4d\x37"
  "\x05\x44\x02\x04\x0b\x76\x65\x63\x74\x6f\x72\x2d\x6d\x61\x70\x4e"
  "\x02\x16\x6d\x61\x6b\x65\x2d\x65\x71\x75\x61\x6c\x2d\x68\x61\x73"
  "\x68\x2d\x74\x61\x62\x6c\x65\x02\x1a\x6d\x61\x6b\x65\x2d\x73\x74"
  "\x72\x6f\x6e\x67\x2d\x65\x71\x2d\x68\x61\x73\x68\x2d\x74\x61\x62"
  "\x6c\x65\x03\x11\x73\x74\x72\x69\x6e\x67\x2d\x3e\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\x02\x17\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x04\x16\x61\x73"
  "\x63\x69\x69\x2d\x72\x61\x6e\x67\x65\x2d\x3e\x63\x68\x61\x72\x2d"
  "\x73\x65\x74\x04\x3c\x04\x14\x63\x68\x61\x72\x2d\x73\x65\x74\x2d"
  "\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x04\x3b\x0a\xdb\x01\x20"
  "\x81\x83\x02\xda\x01\x1e\x81\x81\x02\xd9\x01\x1c\x81\x85\x02\xd8"
  "\x01\x1a\x81\x81\x02\xd7\x01\x18\x81\x81\x02\xd6\x01\x16\x81\x83"
  "\x02\xd5\x01\x14\x81\x81\x02\xd4\x01\x12\x81\x81\x02\xd3\x01\x10"
  "\x81\x81\x02\xd2\x01\x0e\x81\x81\x02\xd1\x01\x0c\x83\x04\xd0\x01"
  "\x0a\x81\x81\x02\xcf\x01\x08\x81\x81\x02\xce\x01\x06\x81\x83\x02"
  "\xcd\x01\x04\x82\x02\x1f\x43\x4f\x02\x2a\x03\x18\x63\x61\x6c\x6c"
  "\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x04\x10\x77\x72\x69\x74\x65\x2d\x6d\x69\x6d\x65\x2d"
  "\x74\x79\x70\x65\x50\x03\xdd\x01\x06\x81\x85\x02\xdc\x01\x04\x83"
  "\x04\x05\x0d\x51\x02\x2b\x02\x2f\x50\x04\x3d\x03\x14\x6d\x69\x6d"
  "\x65\x2d\x74\x79\x70\x65\x2f\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c"
  "\x52\x04\x4a\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65"
  "\x4a\x03\x12\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x2f\x73\x75\x62"
  "\x74\x79\x70\x65\x53\x06\xe5\x01\x12\x81\x87\x02\xe4\x01\x10\x81"
  "\x85\x02\xe3\x01\x0e\x81\x85\x02\xe2\x01\x0c\x81\x8b\x02\xe1\x01"
  "\x0a\x81\x89\x02\xe0\x01\x08\x81\x85\x02\xdf\x01\x06\x81\x85\x02"
  "\xde\x01\x04\x84\x06\x11\x21\x54\x02\x2c\x28\x39\x11\x70\x61\x72"
  "\x73\x65\x72\x3a\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x55\x02\x06"
  "\x0e\x2a\x70\x61\x72\x73\x65\x2d\x73\x74\x72\x69\x6e\x67\x04\x1b"
  "\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x6d\x69\x6d\x65\x2d\x74"
  "\x79\x70\x65\x2d\x73\x74\x72\x69\x6e\x67\x56\x03\xe9\x01\x0a\x81"
  "\x87\x02\xe8\x01\x08\x81\x89\x02\xe7\x01\x06\x81\x91\x02\xe6\x01"
  "\x04\x85\x04\x09\x16\x57\x02\x2d\x03\x15\x73\x74\x72\x69\x6e\x67"
  "\x2d\x69\x73\x2d\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x3f\x58\x02"
  "\xea\x01\x04\x83\x04\x03\x59\x02\x2e\x12\x6d\x61\x74\x63\x68\x65"
  "\x72\x3a\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x5a\x02\x06\x0e\x2a"
  "\x6d\x61\x74\x63\x68\x2d\x73\x74\x72\x69\x6e\x67\x5b\x02\xec\x01"
  "\x06\x81\x87\x02\xeb\x01\x04\x85\x04\x05\x0d\x5c\x02\x2f\x03\x11"
  "\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x3f"
  "\x03\x4a\x03\x16\x73\x74\x72\x69\x6e\x67\x2d\x69\x73\x2d\x6d\x69"
  "\x6d\x65\x2d\x74\x6f\x6b\x65\x6e\x3f\x4a\x04\xef\x01\x08\x81\x83"
  "\x02\xee\x01\x06\x81\x83\x02\xed\x01\x04\x83\x04\x07\x11\x5d\x02"
  "\x30\x03\x4a\x02\xf0\x01\x04\x83\x04\x03\x5e\x02\x31\x13\x6d\x61"
  "\x74\x63\x68\x65\x72\x3a\x6d\x69\x6d\x65\x2d\x74\x6f\x6b\x65\x6e"
  "\x5f\x02\x06\x5b\x02\xf2\x01\x06\x81\x87\x02\xf1\x01\x04\x85\x04"
  "\x05\x0d\x5b\x02\x32\x28\x01\x30\x03\x1a\x67\x65\x74\x2d\x70\x61"
  "\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x60\x03\x12\x70\x61\x72\x73\x65\x72\x3a\x6d\x69\x6d"
  "\x65\x2d\x74\x6f\x6b\x65\x6e\x61\x04\x1b\x73\x65\x74\x2d\x70\x61"
  "\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x21\x62\x04\x19\x6d\x61\x74\x63\x68\x2d\x70\x61\x72"
  "\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x63"
  "\x04\x0e\x76\x65\x63\x74\x6f\x72\x2d\x61\x70\x70\x65\x6e\x64\x04"
  "\x42\x07\xfd\x01\x18\x81\x89\x02\xfc\x01\x16\x81\x85\x02\xfb\x01"
  "\x14\x81\x83\x02\xfa\x01\x12\x81\x8b\x02\xf9\x01\x10\x81\x89\x02"
  "\xf8\x01\x0e\x81\x87\x02\xf7\x01\x0c\x81\x87\x02\xf6\x01\x0a\x81"
  "\x85\x02\xf5\x01\x08\x81\x87\x02\xf4\x01\x06\x81\x83\x02\xf3\x01"
  "\x04\x83\x04\x17\x2b\x64\x02\x33\x01\x30\x03\x60\x03\x5f\x04\x62"
  "\x04\x63\x05\x83\x02\x0e\x81\x85\x02\x82\x02\x0c\x81\x85\x02\x81"
  "\x02\x0a\x81\x85\x02\x80\x02\x08\x81\x85\x02\xff\x01\x06\x81\x83"
  "\x02\xfe\x01\x04\x83\x04\x0d\x1b\x63\x02\x34\x07\x69\x6e\x74\x65"
  "\x72\x6e\x02\x03\x60\x03\x5f\x04\x62\x04\x17\x67\x65\x74\x2d\x70"
  "\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x74\x61\x69"
  "\x6c\x04\x4e\x06\x89\x02\x0e\x81\x85\x02\x88\x02\x0c\x81\x83\x02"
  "\x87\x02\x0a\x81\x85\x02\x86\x02\x08\x81\x85\x02\x85\x02\x06\x81"
  "\x83\x02\x84\x02\x04\x83\x04\x0d\x1d\x4e\x02\x35\x4d\x02\x03\x60"
  "\x04\x20\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62"
  "\x75\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x2d\x69\x6e\x2d\x73\x65"
  "\x74\x04\x62\x04\x8f\x02\x0e\x81\x85\x02\x8e\x02\x0c\x81\x85\x02"
  "\x8d\x02\x0a\x81\x87\x02\x8c\x02\x08\x81\x83\x02\x8b\x02\x06\x81"
  "\x83\x02\x8a\x02\x04\x83\x04\x0d\x1a\x62\x02\x36\x02\x03\x38\x04"
  "\x14\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x6d\x69\x6d\x65\x2d"
  "\x74\x79\x70\x65\x60\x03\x91\x02\x06\x81\x85\x02\x90\x02\x04\x84"
  "\x04\x05\x0e\x65\x02\x37\x08\x0a\x4d\x49\x4d\x45\x20\x74\x79\x70"
  "\x65\x05\x29\x02\x92\x02\x04\x84\x04\x03\x0c\x66\x02\x38\x02\x03"
  "\x12\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x3f\x67\x04\x56\x03\x94\x02\x06\x81\x85\x02\x93\x02\x04\x84"
  "\x04\x05\x0e\x68\x02\x39\x08\x11\x4d\x49\x4d\x45\x20\x74\x79\x70"
  "\x65\x20\x73\x74\x72\x69\x6e\x67\x05\x29\x02\x95\x02\x04\x84\x04"
  "\x03\x0c\x69\x02\x3a\x02\x03\x0c\x6d\x69\x6d\x65\x2d\x74\x6f\x6b"
  "\x65\x6e\x3f\x6a\x04\x15\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d"
  "\x6d\x69\x6d\x65\x2d\x74\x6f\x6b\x65\x6e\x6b\x03\x97\x02\x06\x81"
  "\x85\x02\x96\x02\x04\x84\x04\x05\x0e\x6c\x02\x3b\x08\x0b\x4d\x49"
  "\x4d\x45\x20\x74\x6f\x6b\x65\x6e\x05\x29\x02\x98\x02\x04\x84\x04"
  "\x03\x0c\x6d\x02\x3c\x02\x03\x13\x6d\x69\x6d\x65\x2d\x74\x6f\x6b"
  "\x65\x6e\x2d\x73\x74\x72\x69\x6e\x67\x3f\x6e\x04\x1c\x65\x72\x72"
  "\x6f\x72\x3a\x6e\x6f\x74\x2d\x6d\x69\x6d\x65\x2d\x74\x6f\x6b\x65"
  "\x6e\x2d\x73\x74\x72\x69\x6e\x67\x6f\x03\x9a\x02\x06\x81\x85\x02"
  "\x99\x02\x04\x84\x04\x05\x0e\x70\x02\x3d\x08\x12\x4d\x49\x4d\x45"
  "\x20\x74\x6f\x6b\x65\x6e\x20\x73\x74\x72\x69\x6e\x67\x05\x29\x02"
  "\x9b\x02\x04\x84\x04\x03\x0c\x29\x3d\x29\x04\x70\x04\x6d\x04\x6c"
  "\x04\x69\x04\x68\x04\x66\x04\x65\x04\x62\x04\x4e\x04\x63\x04\x64"
  "\x04\x5b\x04\x5e\x04\x5d\x04\x5c\x04\x59\x04\x57\x04\x54\x04\x51"
  "\x04\x4f\x04\x1a\x6f\x1c\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x6d\x69\x6d\x65\x2d\x74\x6f\x6b\x65\x6e\x2d\x73\x74\x72\x69\x6e"
  "\x67\x6b\x41\x56\x1b\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6d"
  "\x69\x6d\x65\x2d\x74\x79\x70\x65\x2d\x73\x74\x72\x69\x6e\x67\x60"
  "\x3d\x5f\x61\x5a\x55\x4a\x6e\x6a\x58\x67\x39\x50\x49\x14\x69\x6e"
  "\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65"
  "\x21\x37\x4d\x46\x45\x1a\x0a\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65"
  "\x4b\x04\x53\x44\x42\x3c\x08\x6d\x65\x73\x73\x61\x67\x65\x0a\x6d"
  "\x75\x6c\x74\x69\x70\x61\x72\x74\x0c\x61\x70\x70\x6c\x69\x63\x61"
  "\x74\x69\x6f\x6e\x06\x76\x69\x64\x65\x6f\x06\x61\x75\x64\x69\x6f"
  "\x06\x69\x6d\x61\x67\x65\x4c\x48\x04\x43\x04\x52\x08\x73\x75\x62"
  "\x74\x79\x70\x65\x70\x38\x0a\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c"
  "\x6f\x47\x0c\x3c\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x3e\x6e\x6f"
  "\x70\x40\x3b\x35\x13\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6d\x69"
  "\x6d\x65\x2d\x74\x79\x70\x65\x16\x6f\x70\x65\x6e\x2d\x6f\x75\x74"
  "\x70\x75\x74\x2d\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x15\x6f\x70"
  "\x65\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x69\x6e\x69\x74\x2d\x66\x69"
  "\x6c\x65\x32\x2c\x1e\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x69"
  "\x6e\x69\x74\x2d\x66\x69\x6c\x65\x2d\x73\x70\x65\x63\x69\x66\x69"
  "\x65\x72\x24\x18\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x74\x65\x6d"
  "\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65\x1d\x1d\x63\x61\x6c"
  "\x6c\x2d\x77\x69\x74\x68\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79"
  "\x2d\x66\x69\x6c\x65\x6e\x61\x6d\x65\x20\x19\x66\x69\x6c\x65\x2d"
  "\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d"
  "\x65\x3c\x3f\x10\x66\x69\x6c\x65\x2d\x70\x72\x6f\x63\x65\x73\x73"
  "\x65\x64\x3f\x15\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x66\x69"
  "\x6c\x65\x2d\x6e\x61\x6d\x65\x73\x12\x63\x75\x72\x72\x65\x6e\x74"
  "\x2d\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x09\x66\x69\x6c\x65\x2d"
  "\x65\x71\x3f\x2a\x0f\x73\x6f\x66\x74\x2d\x6c\x69\x6e\x6b\x2d\x66"
  "\x69\x6c\x65\x0f\x68\x61\x72\x64\x2d\x6c\x69\x6e\x6b\x2d\x66\x69"
  "\x6c\x65\x19\x0c\x72\x65\x6e\x61\x6d\x65\x2d\x66\x69\x6c\x65\x11"
  "\x64\x65\x6c\x65\x74\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x12\x2e\x11\x66\x69\x6c\x65\x2d\x65\x78\x65\x63\x75\x74\x61\x62"
  "\x6c\x65\x3f\x1d\x3e\x04\x3f\x04\x3a\x04\x36\x04\x34\x04\x33\x04"
  "\x31\x04\x26\x04\x27\x04\x2d\x04\x2f\x04\x25\x04\x23\x04\x1c\x04"
  "\x22\x04\x21\x04\x1f\x04\x1e\x04\x1b\x04\x1a\x04\x18\x04\x17\x04"
  "\x16\x04\x15\x04\x14\x04\x13\x04\x11\x04\x04\x1d\x0f\x66\x69\x6c"
  "\x65\x2d\x77\x72\x69\x74\x61\x62\x6c\x65\x3f\x08\x75\x6e\x6b\x6e"
  "\x6f\x77\x6e\x28\x11\x77\x69\x6e\x33\x32\x2d\x6e\x61\x6d\x65\x64"
  "\x2d\x70\x69\x70\x65\x0f\x6f\x73\x32\x2d\x6e\x61\x6d\x65\x64\x2d"
  "\x70\x69\x70\x65\x0c\x75\x6e\x69\x78\x2d\x73\x6f\x63\x6b\x65\x74"
  "\x10\x75\x6e\x69\x78\x2d\x6e\x61\x6d\x65\x64\x2d\x70\x69\x70\x65"
  "\x12\x75\x6e\x69\x78\x2d\x62\x6c\x6f\x63\x6b\x2d\x64\x65\x76\x69"
  "\x63\x65\x16\x75\x6e\x69\x78\x2d\x63\x68\x61\x72\x61\x63\x74\x65"
  "\x72\x2d\x64\x65\x76\x69\x63\x65\x13\x75\x6e\x69\x78\x2d\x73\x79"
  "\x6d\x62\x6f\x6c\x69\x63\x2d\x6c\x69\x6e\x6b\x0a\x0a\x10\x66\x69"
  "\x6c\x65\x2d\x77\x72\x69\x74\x65\x61\x62\x6c\x65\x3f\x70\x0f\x66"
  "\x69\x6c\x65\x2d\x72\x65\x61\x64\x61\x62\x6c\x65\x3f\x0f\x0d\x04"
  "\x10\x04\x0e\x04\x10\x66\x69\x6c\x65\x2d\x73\x6f\x66\x74\x2d\x6c"
  "\x69\x6e\x6b\x3f\x13\x6c\x65\x78\x69\x63\x61\x6c\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x11\x66\x69\x6c\x65\x2d\x74\x79\x70"
  "\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x13\x66\x69\x6c\x65\x2d\x74"
  "\x79\x70\x65\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x14\x66\x69\x6c"
  "\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x69\x63\x2d\x6c\x69\x6e\x6b\x3f"
  "\x6d\x30\x0e\x66\x69\x6c\x65\x2d\x72\x65\x67\x75\x6c\x61\x72\x3f"
  "\x0c\x04\x0b\x04\x09\x04\x11\x66\x69\x6c\x65\x2d\x74\x79\x70\x65"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2b\x16\x66\x69\x6c\x65\x2d"
  "\x65\x78\x69\x73\x74\x73\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x3f"
  "\x6f\x14\x66\x69\x6c\x65\x2d\x65\x78\x69\x73\x74\x73\x2d\x64\x69"
  "\x72\x65\x63\x74\x3f\x04\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x6f\x6d\x70\x6e\x05\x03\x03"
  "\x04\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x04\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74"
  "\x72\x75\x63\x74\x6f\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d\x70"
  "\x72\x65\x64\x69\x63\x61\x74\x65\x04\x10\x72\x65\x63\x6f\x72\x64"
  "\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x04\x19\x73\x74\x61\x6e\x64"
  "\x61\x72\x64\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74"
  "\x68\x6f\x64\x04\x21\x73\x65\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d"
  "\x74\x79\x70\x65\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65"
  "\x74\x68\x6f\x64\x21\x09\x29\x54\x80\x80\x04\x28\x52\x81\x81\x02"
  "\x27\x50\x81\x81\x02\x26\x4e\x81\x87\x02\x25\x4c\x81\x85\x02\x24"
  "\x4a\x81\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81\x85\x02\x21\x44"
  "\x81\x83\x02\x20\x42\x81\x85\x02\x1f\x40\x81\x89\x02\x1e\x3e\x81"
  "\x83\x02\x1d\x3c\x81\x85\x02\x1c\x3a\x81\x89\x02\x1b\x38\x81\x83"
  "\x02\x1a\x36\x81\x85\x02\x19\x34\x81\x87\x02\x18\x32\x81\x83\x02"
  "\x17\x30\x81\x85\x02\x16\x2e\x81\x89\x02\x15\x2c\x81\x83\x02\x14"
  "\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81\x85\x02\x11\x24"
  "\x81\x83\x02\x10\x22\x81\x89\x02\x0f\x20\x81\x87\x02\x0e\x1e\x81"
  "\x85\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x81"
  "\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02"
  "\x07\x10\x81\x83\x02\x06\x0e\x81\x81\x02\x05\x0c\x81\x83\x02\x04"
  "\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81\x85\x02\x01\x04"
  "\x81\x83\x02\x53\x95\x01";

SCHEME_OBJECT *
sfile_so_data_d15ea84eaefee94b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_sfile_so_data_d15ea84eaefee94b [0]))), (sizeof (prog_sfile_so_data_d15ea84eaefee94b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_54]));
}

DECLARE_COMPILED_DATA_NS ("sfile.so", sfile_so_data_d15ea84eaefee94b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("sfile.so", "859155de6e775304")
