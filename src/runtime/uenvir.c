/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:58-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define ENVIRONMENT_LABEL_1_3 17
#define DEBUGGING_LABEL_1_2 16
#define OBJECT_1_2 15
#define OBJECT_1_1 14
#define OBJECT_1_0 13
#define EXECUTE_CACHE_1_8 9
#define EXECUTE_CACHE_1_7 11
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_1_4);
      goto environmentP_5;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environmentP_9)
DEFLABEL (environmentP_5)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  (Wrd32.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_10)
DEFLABEL (label_18)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (Wrd8.Obj);

DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd22.Obj) = (current_block [OBJECT_1_1]);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd25.Lng))))
    goto label_17;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd13.Obj) == (Wrd15.Obj))
    goto label_16;

DEFLABEL (label_15)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_1_0]);
  goto label_12;

DEFLABEL (label_17)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 13
#define DEBUGGING_LABEL_2_2 12
#define OBJECT_2_0 11
#define EXECUTE_CACHE_2_7 7
#define EXECUTE_CACHE_2_6 9
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_environment_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_environment_4)
DEFLABEL (guarantee_environment_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 9
#define DEBUGGING_LABEL_3_2 8
#define OBJECT_3_0 7
#define EXECUTE_CACHE_3_5 5
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto illegal_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (illegal_environment_3)
DEFLABEL (illegal_environment_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_9 9
#define ENVIRONMENT_LABEL_4_3 27
#define DEBUGGING_LABEL_4_2 26
#define OBJECT_4_2 25
#define OBJECT_4_1 24
#define OBJECT_4_0 23
#define EXECUTE_CACHE_4_13 11
#define EXECUTE_CACHE_4_12 13
#define EXECUTE_CACHE_4_11 15
#define EXECUTE_CACHE_4_10 17
#define EXECUTE_CACHE_4_8 19
#define EXECUTE_CACHE_4_7 21
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd15;
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
      goto environment_has_parentP_3;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_has_parentP_7)
DEFLABEL (environment_has_parentP_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd15.Obj) = (current_block [OBJECT_4_0]);
  (Wrd18.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd18.Lng))))
    goto label_13;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.Obj) == (Wrd10.Obj)))
    goto label_10;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (label_12)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (label_13)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_7 7
#define LABEL_5_10 9
#define ENVIRONMENT_LABEL_5_3 29
#define DEBUGGING_LABEL_5_2 28
#define OBJECT_5_2 27
#define OBJECT_5_1 26
#define OBJECT_5_0 25
#define EXECUTE_CACHE_5_14 11
#define EXECUTE_CACHE_5_13 13
#define EXECUTE_CACHE_5_12 15
#define EXECUTE_CACHE_5_11 17
#define EXECUTE_CACHE_5_9 19
#define EXECUTE_CACHE_5_8 21
#define EXECUTE_CACHE_5_5 23
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd26;
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
      goto environment_parent_3;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_parent_7)
DEFLABEL (environment_parent_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_5]));

DEFLABEL (label_8)
  (Wrd15.Obj) = (current_block [OBJECT_5_1]);
  (Wrd18.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd18.Lng))))
    goto label_13;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.Obj) == (Wrd10.Obj)))
    goto label_10;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (label_12)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (label_13)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_7 7
#define LABEL_6_10 9
#define ENVIRONMENT_LABEL_6_3 29
#define DEBUGGING_LABEL_6_2 28
#define OBJECT_6_2 27
#define OBJECT_6_1 26
#define OBJECT_6_0 25
#define EXECUTE_CACHE_6_14 11
#define EXECUTE_CACHE_6_13 13
#define EXECUTE_CACHE_6_12 15
#define EXECUTE_CACHE_6_11 17
#define EXECUTE_CACHE_6_9 19
#define EXECUTE_CACHE_6_8 21
#define EXECUTE_CACHE_6_5 23
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd15;
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
      goto environment_bound_names_3;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_bound_names_7)
DEFLABEL (environment_bound_names_3)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

DEFLABEL (label_8)
  (Wrd15.Obj) = (current_block [OBJECT_6_0]);
  (Wrd18.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd18.Lng))))
    goto label_13;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.Obj) == (Wrd10.Obj)))
    goto label_10;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (label_12)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (label_13)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_10 7
#define LABEL_7_7 9
#define ENVIRONMENT_LABEL_7_3 26
#define DEBUGGING_LABEL_7_2 25
#define OBJECT_7_3 24
#define OBJECT_7_2 23
#define OBJECT_7_1 22
#define OBJECT_7_0 21
#define EXECUTE_CACHE_7_12 11
#define EXECUTE_CACHE_7_11 13
#define EXECUTE_CACHE_7_9 15
#define EXECUTE_CACHE_7_8 17
#define EXECUTE_CACHE_7_5 19
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_7_4);
      goto environment_macro_names_3;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_macro_names_7)
DEFLABEL (environment_macro_names_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_5]));

DEFLABEL (label_8)
  (Wrd15.Obj) = (current_block [OBJECT_7_0]);
  (Wrd18.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd18.Lng))))
    goto label_13;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.Obj) == (Wrd10.Obj)))
    goto label_10;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_7_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd15.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_7_2]);
  (Rsp [1]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (label_13)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_9 9
#define LABEL_8_12 11
#define LABEL_8_8 13
#define LABEL_8_13 15
#define LABEL_8_10 17
#define ENVIRONMENT_LABEL_8_3 31
#define DEBUGGING_LABEL_8_2 30
#define OBJECT_8_4 29
#define OBJECT_8_3 28
#define OBJECT_8_2 27
#define OBJECT_8_1 26
#define OBJECT_8_0 25
#define EXECUTE_CACHE_8_14 19
#define EXECUTE_CACHE_8_11 21
#define EXECUTE_CACHE_8_6 23
#define FREE_REFERENCES_LABEL_8_0 18
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_8_4);
      goto environment_bindings_18;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto do_loop_15;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_8_13);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_bindings_23)
DEFLABEL (environment_bindings_18)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  goto do_loop_15;

DEFLABEL (do_loop_24)
DEFLABEL (do_loop_15)
  INTERRUPT_CHECK (26, LABEL_8_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_26;
  (Wrd7.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_25;

DEFLABEL (label_26)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_25)
DEFLABEL (label_37)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_36;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_35)
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_8_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd18.Obj) = (current_block [OBJECT_8_2]);
  goto label_28;

DEFLABEL (label_29)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_8_2]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));

DEFLABEL (label_28)
DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  (Wrd22.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Rsp [1]) = (Wrd19.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 1)
    goto label_30;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 2);

DEFLABEL (label_30)
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd25.pObj) [0]) = (Wrd19.Obj);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_33)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_32;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_15;

DEFLABEL (label_32)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_36)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_8);
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_9 7
#define LABEL_9_6 9
#define ENVIRONMENT_LABEL_9_3 26
#define DEBUGGING_LABEL_9_2 25
#define OBJECT_9_3 24
#define OBJECT_9_2 23
#define OBJECT_9_1 22
#define OBJECT_9_0 21
#define EXECUTE_CACHE_9_12 11
#define EXECUTE_CACHE_9_11 13
#define EXECUTE_CACHE_9_10 15
#define EXECUTE_CACHE_9_8 17
#define EXECUTE_CACHE_9_7 19
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd13;
  INVOKE_INTERFACE_DECLS
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
      goto environment_arguments_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_arguments_7)
DEFLABEL (environment_arguments_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd13.Obj) = (current_block [OBJECT_9_0]);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_9;

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (label_10)
  (Wrd7.Obj) = (Rsp [0]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_9_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd17.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_9_2]);
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (label_13)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 12
#define DEBUGGING_LABEL_10_2 11
#define EXECUTE_CACHE_10_7 7
#define EXECUTE_CACHE_10_6 9
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto environment_procedure_name_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_procedure_name_5)
DEFLABEL (environment_procedure_name_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_9 9
#define ENVIRONMENT_LABEL_11_3 27
#define DEBUGGING_LABEL_11_2 26
#define OBJECT_11_2 25
#define OBJECT_11_1 24
#define OBJECT_11_0 23
#define EXECUTE_CACHE_11_13 11
#define EXECUTE_CACHE_11_12 13
#define EXECUTE_CACHE_11_11 15
#define EXECUTE_CACHE_11_10 17
#define EXECUTE_CACHE_11_8 19
#define EXECUTE_CACHE_11_7 21
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd15;
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
      goto environment_lambda_3;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_lambda_7)
DEFLABEL (environment_lambda_3)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd15.Obj) = (current_block [OBJECT_11_0]);
  (Wrd18.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd18.Lng))))
    goto label_13;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.Obj) == (Wrd10.Obj)))
    goto label_10;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (label_12)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (label_13)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 12
#define DEBUGGING_LABEL_12_2 11
#define OBJECT_12_1 10
#define OBJECT_12_0 9
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto environment_boundP_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_boundP_5)
DEFLABEL (environment_boundP_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == (current_block [OBJECT_12_0]))
    goto label_7;
  Rvl = (current_block [OBJECT_12_1]);
  goto label_6;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_10 9
#define ENVIRONMENT_LABEL_13_3 27
#define DEBUGGING_LABEL_13_2 26
#define OBJECT_13_0 25
#define EXECUTE_CACHE_13_14 11
#define EXECUTE_CACHE_13_13 13
#define EXECUTE_CACHE_13_12 15
#define EXECUTE_CACHE_13_11 17
#define EXECUTE_CACHE_13_9 19
#define EXECUTE_CACHE_13_8 21
#define EXECUTE_CACHE_13_6 23
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto environment_reference_type_3;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_reference_type_6)
DEFLABEL (environment_reference_type_3)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (label_9)
  (Wrd7.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 18
#define DEBUGGING_LABEL_14_2 17
#define OBJECT_14_3 16
#define OBJECT_14_2 15
#define OBJECT_14_1 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_8 7
#define EXECUTE_CACHE_14_7 9
#define EXECUTE_CACHE_14_6 11
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto environment_assignedP_5;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_assignedP_8)
DEFLABEL (environment_assignedP_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_14_0])))
    goto label_9;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (label_9)
  if (! (Rvl == (current_block [OBJECT_14_1])))
    goto label_10;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (label_10)
  if (Rvl == (current_block [OBJECT_14_2]))
    goto label_12;
  Rvl = (current_block [OBJECT_14_3]);
  goto label_11;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_9 9
#define ENVIRONMENT_LABEL_15_3 22
#define DEBUGGING_LABEL_15_2 21
#define EXECUTE_CACHE_15_12 11
#define EXECUTE_CACHE_15_11 13
#define EXECUTE_CACHE_15_10 15
#define EXECUTE_CACHE_15_8 17
#define EXECUTE_CACHE_15_6 19
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto environment_lookup_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_lookup_7)
DEFLABEL (environment_lookup_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (label_8)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

DEFLABEL (label_9)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 17
#define DEBUGGING_LABEL_16_2 16
#define OBJECT_16_2 15
#define OBJECT_16_1 14
#define OBJECT_16_0 13
#define EXECUTE_CACHE_16_8 7
#define EXECUTE_CACHE_16_7 9
#define EXECUTE_CACHE_16_6 11
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto environment_lookup_or_5;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_lookup_or_8)
DEFLABEL (environment_lookup_or_5)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_16_0])))
    goto label_10;

DEFLABEL (label_9)
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_10)
  if (Rvl == (current_block [OBJECT_16_1]))
    goto label_9;
  if (Rvl == (current_block [OBJECT_16_2]))
    goto label_11;
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (label_11)
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define LABEL_17_9 9
#define ENVIRONMENT_LABEL_17_3 21
#define DEBUGGING_LABEL_17_2 20
#define OBJECT_17_0 19
#define EXECUTE_CACHE_17_11 11
#define EXECUTE_CACHE_17_10 13
#define EXECUTE_CACHE_17_8 15
#define EXECUTE_CACHE_17_6 17
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_17_4);
      goto environment_lookup_macro_5;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_lookup_macro_8)
DEFLABEL (environment_lookup_macro_5)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == (current_block [OBJECT_17_0]))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define LABEL_18_10 9
#define ENVIRONMENT_LABEL_18_3 27
#define DEBUGGING_LABEL_18_2 26
#define OBJECT_18_0 25
#define EXECUTE_CACHE_18_14 11
#define EXECUTE_CACHE_18_13 13
#define EXECUTE_CACHE_18_12 15
#define EXECUTE_CACHE_18_11 17
#define EXECUTE_CACHE_18_9 19
#define EXECUTE_CACHE_18_8 21
#define EXECUTE_CACHE_18_6 23
#define FREE_REFERENCES_LABEL_18_0 10
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto environment_safe_lookup_3;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_safe_lookup_6)
DEFLABEL (environment_safe_lookup_3)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

DEFLABEL (label_9)
  (Wrd7.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_10 9
#define ENVIRONMENT_LABEL_19_3 27
#define DEBUGGING_LABEL_19_2 26
#define OBJECT_19_0 25
#define EXECUTE_CACHE_19_14 11
#define EXECUTE_CACHE_19_13 13
#define EXECUTE_CACHE_19_12 15
#define EXECUTE_CACHE_19_11 17
#define EXECUTE_CACHE_19_9 19
#define EXECUTE_CACHE_19_8 21
#define EXECUTE_CACHE_19_6 23
#define FREE_REFERENCES_LABEL_19_0 10
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto environment_assignableP_3;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_19_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_assignableP_6)
DEFLABEL (environment_assignableP_3)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (label_9)
  (Wrd7.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_10 9
#define ENVIRONMENT_LABEL_20_3 27
#define DEBUGGING_LABEL_20_2 26
#define OBJECT_20_0 25
#define EXECUTE_CACHE_20_14 11
#define EXECUTE_CACHE_20_13 13
#define EXECUTE_CACHE_20_12 15
#define EXECUTE_CACHE_20_11 17
#define EXECUTE_CACHE_20_9 19
#define EXECUTE_CACHE_20_8 21
#define EXECUTE_CACHE_20_6 23
#define FREE_REFERENCES_LABEL_20_0 10
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto environment_assignB_3;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_assignB_6)
DEFLABEL (environment_assignB_3)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (label_9)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_9 7
#define LABEL_21_7 9
#define ENVIRONMENT_LABEL_21_3 22
#define DEBUGGING_LABEL_21_2 21
#define OBJECT_21_1 20
#define OBJECT_21_0 19
#define EXECUTE_CACHE_21_11 11
#define EXECUTE_CACHE_21_10 13
#define EXECUTE_CACHE_21_8 15
#define EXECUTE_CACHE_21_6 17
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_21_4);
      goto environment_definableP_3;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_definableP_6)
DEFLABEL (environment_definableP_3)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = (current_block [OBJECT_21_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd15.Obj) = (current_block [OBJECT_21_1]);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_10 7
#define LABEL_22_7 9
#define ENVIRONMENT_LABEL_22_3 25
#define DEBUGGING_LABEL_22_2 24
#define OBJECT_22_0 23
#define EXECUTE_CACHE_22_13 11
#define EXECUTE_CACHE_22_12 13
#define EXECUTE_CACHE_22_11 15
#define EXECUTE_CACHE_22_9 17
#define EXECUTE_CACHE_22_8 19
#define EXECUTE_CACHE_22_6 21
#define FREE_REFERENCES_LABEL_22_0 10
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto environment_define_3;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_define_6)
DEFLABEL (environment_define_3)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_13]));

DEFLABEL (label_9)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_10 7
#define LABEL_23_7 9
#define ENVIRONMENT_LABEL_23_3 25
#define DEBUGGING_LABEL_23_2 24
#define OBJECT_23_0 23
#define EXECUTE_CACHE_23_13 11
#define EXECUTE_CACHE_23_12 13
#define EXECUTE_CACHE_23_11 15
#define EXECUTE_CACHE_23_9 17
#define EXECUTE_CACHE_23_8 19
#define EXECUTE_CACHE_23_6 21
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_23_4);
      goto environment_define_macro_3;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_10);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_define_macro_6)
DEFLABEL (environment_define_macro_3)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_13]));

DEFLABEL (label_9)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

INVOKE_INTERFACE_TARGET_1
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
uenvir_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto system_global_environmentP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_global_environmentP_3)
DEFLABEL (system_global_environmentP_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_24_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define ENVIRONMENT_LABEL_25_3 15
#define DEBUGGING_LABEL_25_2 14
#define EXECUTE_CACHE_25_7 9
#define FREE_REFERENCE_25_1 12
#define FREE_REFERENCE_25_0 13
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_25_4);
      goto system_global_environment_bound_names_0;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_global_environment_bound_names_5)
DEFLABEL (system_global_environment_bound_names_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_7;
  Wrd11 = Wrd15;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define ENVIRONMENT_LABEL_26_3 15
#define DEBUGGING_LABEL_26_2 14
#define EXECUTE_CACHE_26_7 9
#define FREE_REFERENCE_26_1 12
#define FREE_REFERENCE_26_0 13
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_26_4);
      goto system_global_environment_macro_names_0;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_global_environment_macro_names_5)
DEFLABEL (system_global_environment_macro_names_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_7;
  Wrd11 = Wrd15;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
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
uenvir_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto objectP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (objectP_3)
DEFLABEL (objectP_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  Rvl = (current_block [OBJECT_27_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 5
#define DEBUGGING_LABEL_28_2 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto map_entry_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_name_3)
DEFLABEL (map_entry_name_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 5
#define DEBUGGING_LABEL_29_2 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto map_entry_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_entry_value_3)
DEFLABEL (map_entry_value_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define TAG_30_7 2
#define LABEL_30_9 9
#define LABEL_30_11 11
#define LABEL_30_12 13
#define TAG_30_13 5
#define LABEL_30_17 15
#define LABEL_30_15 17
#define LABEL_30_18 19
#define ENVIRONMENT_LABEL_30_3 32
#define DEBUGGING_LABEL_30_2 31
#define OBJECT_30_1 30
#define OBJECT_30_0 29
#define EXECUTE_CACHE_30_16 21
#define EXECUTE_CACHE_30_14 23
#define EXECUTE_CACHE_30_10 25
#define EXECUTE_CACHE_30_8 27
#define FREE_REFERENCES_LABEL_30_0 20
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd8;
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
      goto walk_global_13;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_11;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto lambda_17;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_30_12);
      goto lambda_18;

    case 6:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_30_15);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_30_18);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_global_16)
DEFLABEL (walk_global_13)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_6])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd18 = Wrd13;
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  ((Wrd18.pObj) [4]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_30_6);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (current_block [OBJECT_30_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_12])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_30_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_18);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [0]) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  ((Wrd12.pObj) [0]) = (Wrd6.Obj);
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_30_12);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 10
#define DEBUGGING_LABEL_31_2 9
#define OBJECT_31_0 8
#define FREE_REFERENCE_31_0 7
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_31_4);
      goto special_unbound_nameP_0;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (special_unbound_nameP_4)
DEFLABEL (special_unbound_nameP_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  if ((Wrd13.Obj) == (Wrd6.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_31_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 8
#define DEBUGGING_LABEL_32_2 7
#define OBJECT_32_2 6
#define OBJECT_32_1 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd24;
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
      goto interpreter_environmentP_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_environmentP_5)
DEFLABEL (interpreter_environmentP_2)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  (Wrd24.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_6)
DEFLABEL (label_13)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = (Wrd8.Obj);

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd12.Obj) = (current_block [OBJECT_32_1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 18L) < ((unsigned long) (Wrd23.Lng)))
    goto label_10;
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_10)
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd15.Obj) == (Wrd17.Obj))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_32_0]);

DEFLABEL (label_11)
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 8
#define DEBUGGING_LABEL_33_2 7
#define OBJECT_33_2 6
#define OBJECT_33_1 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto ic_environmentP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_environmentP_3)
DEFLABEL (ic_environmentP_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 18L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_33_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_7 5
#define LABEL_34_5 7
#define ENVIRONMENT_LABEL_34_3 15
#define DEBUGGING_LABEL_34_2 14
#define OBJECT_34_0 13
#define EXECUTE_CACHE_34_8 9
#define EXECUTE_CACHE_34_6 11
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      goto guarantee_interpreter_environment_2;

    case 1:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_interpreter_environment_5)
DEFLABEL (guarantee_interpreter_environment_2)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_6)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_7);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_6 5
#define LABEL_35_5 7
#define ENVIRONMENT_LABEL_35_3 17
#define DEBUGGING_LABEL_35_2 16
#define OBJECT_35_4 15
#define OBJECT_35_3 14
#define OBJECT_35_2 13
#define OBJECT_35_1 12
#define OBJECT_35_0 11
#define EXECUTE_CACHE_35_7 9
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_35_4);
      goto interpreter_environment_reference_type_5;

    case 1:
      current_block = (Rpc - LABEL_35_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_environment_reference_type_8)
DEFLABEL (interpreter_environment_reference_type_5)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd7.Lng) < 4L)
    goto label_11;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_35_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_35_4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_6);

DEFLABEL (label_11)
  (Wrd16.Obj) = (current_block [OBJECT_35_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 26)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 2);

DEFLABEL (label_10)
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd27.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_9;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd24.Obj));
  (Wrd22.pObj) = (& ((Wrd29.pObj) [(Wrd19.Lng)]));
  Rvl = ((Wrd22.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define TAG_36_8 3
#define ENVIRONMENT_LABEL_36_3 18
#define DEBUGGING_LABEL_36_2 17
#define OBJECT_36_3 16
#define OBJECT_36_2 15
#define OBJECT_36_1 14
#define OBJECT_36_0 13
#define EXECUTE_CACHE_36_9 11
#define FREE_REFERENCES_LABEL_36_0 10
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_36_4);
      goto interpreter_environment_safe_lookup_5;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_environment_safe_lookup_9)
DEFLABEL (interpreter_environment_safe_lookup_5)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd9.Obj) = (current_block [OBJECT_36_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_12;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  ((Wrd13.pObj) [0]) = Rvl;

DEFLABEL (label_11)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (label_12)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 2);

DEFLABEL (label_7)
  goto label_11;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_36_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_13;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 17
#define DEBUGGING_LABEL_37_2 16
#define OBJECT_37_2 15
#define OBJECT_37_1 14
#define OBJECT_37_0 13
#define EXECUTE_CACHE_37_8 7
#define EXECUTE_CACHE_37_7 9
#define EXECUTE_CACHE_37_6 11
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto interpreter_environment_assignableP_4;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_environment_assignableP_7)
DEFLABEL (interpreter_environment_assignableP_4)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_37_0])))
    goto label_8;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (label_8)
  if (Rvl == (current_block [OBJECT_37_1]))
    goto label_9;
  Rvl = (current_block [OBJECT_37_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 9
#define DEBUGGING_LABEL_38_2 8
#define OBJECT_38_1 7
#define OBJECT_38_0 6
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto interpreter_environment_assignB_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_environment_assignB_4)
DEFLABEL (interpreter_environment_assignB_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  Rvl = (current_block [OBJECT_38_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

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
uenvir_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto interpreter_environment_define_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_environment_define_3)
DEFLABEL (interpreter_environment_define_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define ENVIRONMENT_LABEL_40_3 11
#define DEBUGGING_LABEL_40_2 10
#define OBJECT_40_0 9
#define EXECUTE_CACHE_40_6 7
#define FREE_REFERENCES_LABEL_40_0 6
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto interpreter_environment_define_macro_1;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_environment_define_macro_4)
DEFLABEL (interpreter_environment_define_macro_1)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define ENVIRONMENT_LABEL_41_3 15
#define DEBUGGING_LABEL_41_2 14
#define EXECUTE_CACHE_41_7 9
#define FREE_REFERENCE_41_1 12
#define FREE_REFERENCE_41_0 13
#define FREE_REFERENCES_LABEL_41_0 8
#define NUMBER_OF_LINKER_SECTIONS_41_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_41_4);
      goto ic_environment_bound_names_0;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_environment_bound_names_5)
DEFLABEL (ic_environment_bound_names_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_6 7
#define ENVIRONMENT_LABEL_42_3 15
#define DEBUGGING_LABEL_42_2 14
#define EXECUTE_CACHE_42_7 9
#define FREE_REFERENCE_42_1 12
#define FREE_REFERENCE_42_0 13
#define FREE_REFERENCES_LABEL_42_0 8
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_42_4);
      goto ic_environment_macro_names_0;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_42_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_environment_macro_names_5)
DEFLABEL (ic_environment_macro_names_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_7 7
#define LABEL_43_8 9
#define LABEL_43_10 11
#define ENVIRONMENT_LABEL_43_3 23
#define DEBUGGING_LABEL_43_2 22
#define EXECUTE_CACHE_43_11 13
#define EXECUTE_CACHE_43_9 15
#define EXECUTE_CACHE_43_6 17
#define FREE_REFERENCE_43_1 20
#define FREE_REFERENCE_43_0 21
#define FREE_REFERENCES_LABEL_43_0 12
#define NUMBER_OF_LINKER_SECTIONS_43_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_43_4);
      goto ic_environment_arguments_3;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_43_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_environment_arguments_8)
DEFLABEL (ic_environment_arguments_3)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_10;
  Wrd7 = Wrd11;

DEFLABEL (label_9)
  (Rsp [3]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_11]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_10])), (Wrd8.pObj));

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_7])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define LABEL_44_9 9
#define LABEL_44_10 11
#define LABEL_44_12 13
#define LABEL_44_8 15
#define LABEL_44_11 17
#define LABEL_44_15 19
#define ENVIRONMENT_LABEL_44_3 34
#define DEBUGGING_LABEL_44_2 33
#define OBJECT_44_3 32
#define OBJECT_44_2 31
#define OBJECT_44_1 30
#define OBJECT_44_0 29
#define EXECUTE_CACHE_44_16 21
#define EXECUTE_CACHE_44_14 23
#define EXECUTE_CACHE_44_13 25
#define EXECUTE_CACHE_44_6 27
#define FREE_REFERENCES_LABEL_44_0 20
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd17;
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
      goto map_ic_environment_bindings_12;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_44_9);
      goto lambda_7;

    case 4:
      current_block = (Rpc - LABEL_44_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_44_12);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_44_8);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_44_11);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_44_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_ic_environment_bindings_17)
DEFLABEL (map_ic_environment_bindings_12)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  if (! (Rvl == (Wrd6.Obj)))
    goto label_19;
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd17.pObj) = (& (Rsp [2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd17.pObj)));
  (Rsp [1]) = (Wrd19.Obj);
  Rdl = (& (Rsp [5]));
  goto lambda_7;

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.pObj) = (& (Rsp [2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  goto lambda_7;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_44_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [3]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  Rdl = (& (Rsp [2]));
  goto lambda_7;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_44_8);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_14]));

DEFLABEL (lambda_18)
DEFLABEL (lambda_7)
  DLINK_INTERRUPT_CHECK (25, LABEL_44_9);
  (Wrd8.Obj) = (current_block [OBJECT_44_0]);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_23)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 10)
    goto label_20;
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [4]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_13]));

DEFLABEL (label_20)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = ((Wrd39.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);
  if (! ((Wrd24.uLng) == 10))
    goto label_22;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd52.Lng))))
    goto label_22;
  (Wrd46.Obj) = ((Wrd50.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_21)
  (Wrd64.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_44_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_44_15);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_14]));

DEFLABEL (label_22)
  (Wrd59.Obj) = (Rsp [4]);
  (Wrd60.Obj) = (current_block [OBJECT_44_2]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_3]), 2);

DEFLABEL (label_15)
  (Wrd55.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd55.Obj));
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_14)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_8 7
#define LABEL_45_6 9
#define LABEL_45_10 11
#define LABEL_45_11 13
#define LABEL_45_14 15
#define LABEL_45_15 17
#define LABEL_45_16 19
#define LABEL_45_12 21
#define LABEL_45_17 23
#define LABEL_45_18 25
#define TAG_45_19 11
#define ENVIRONMENT_LABEL_45_3 42
#define DEBUGGING_LABEL_45_2 41
#define OBJECT_45_3 40
#define OBJECT_45_2 39
#define OBJECT_45_1 38
#define OBJECT_45_0 37
#define EXECUTE_CACHE_45_21 27
#define EXECUTE_CACHE_45_20 29
#define EXECUTE_CACHE_45_13 31
#define EXECUTE_CACHE_45_9 33
#define EXECUTE_CACHE_45_7 35
#define FREE_REFERENCES_LABEL_45_0 26
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_45_4);
      goto walk_ic_procedure_args_20;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_45_8);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_45_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_45_10);
      goto loop_17;

    case 5:
      current_block = (Rpc - LABEL_45_11);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_45_14);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_45_15);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_45_16);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_45_12);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_45_17);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_45_18);
      goto lambda_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_ic_procedure_args_25)
DEFLABEL (walk_ic_procedure_args_20)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 10))
    goto label_29;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  goto loop_17;

DEFLABEL (label_29)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (loop_26)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_45_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 1L)
    goto label_30;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd13.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (* (--Rsp)) = (Wrd14.Obj);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_36;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_36;
  Wrd25 = Wrd13;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd25.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_36;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd20.pObj) = (& ((Wrd27.pObj) [(Wrd17.Lng)]));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_35)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_12]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_45_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_18])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [6]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_45_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_45_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_45_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_45_14);
  (Wrd39.Obj) = (Rsp [4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));

DEFLABEL (label_32)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_31)
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_17;

DEFLABEL (label_33)
  (Wrd8.Obj) = (Rsp [4]);
  goto label_32;

DEFLABEL (label_34)
  (Wrd8.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  goto label_31;

DEFLABEL (label_36)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_45_18);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_38;

DEFLABEL (label_37)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_3]), 2);

DEFLABEL (label_38)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_37;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd16.pObj) = (& ((Wrd23.pObj) [(Wrd13.Lng)]));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_6 5
#define LABEL_46_5 7
#define LABEL_46_7 9
#define LABEL_46_8 11
#define LABEL_46_9 13
#define LABEL_46_12 15
#define LABEL_46_13 17
#define LABEL_46_10 19
#define LABEL_46_14 21
#define LABEL_46_15 23
#define TAG_46_16 10
#define ENVIRONMENT_LABEL_46_3 37
#define DEBUGGING_LABEL_46_2 36
#define OBJECT_46_6 35
#define OBJECT_46_5 34
#define OBJECT_46_4 33
#define OBJECT_46_3 32
#define OBJECT_46_2 31
#define OBJECT_46_1 30
#define OBJECT_46_0 29
#define EXECUTE_CACHE_46_17 25
#define EXECUTE_CACHE_46_11 27
#define FREE_REFERENCES_LABEL_46_0 24
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd32;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto walk_ic_frame_extension_20;

    case 1:
      current_block = (Rpc - LABEL_46_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_46_7);
      goto loop_17;

    case 4:
      current_block = (Rpc - LABEL_46_8);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_46_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_46_12);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_46_13);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_46_10);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_46_14);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_46_15);
      goto lambda_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_ic_frame_extension_26)
DEFLABEL (walk_ic_frame_extension_20)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_30;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_30;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_29)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Wrd6.Obj) = (current_block [OBJECT_46_3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = ((Wrd8.Lng) + 3L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_46_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_17;

DEFLABEL (label_30)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_46_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (loop_27)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_46_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_31;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_39;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_39;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_39;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd15.pObj) = (& ((Wrd22.pObj) [(Wrd12.Lng)]));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_38)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_37;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_36)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_46_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_15])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_46_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_46_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_46_12);
  (Wrd33.Obj) = (Rsp [4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));

DEFLABEL (label_33)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_17;

DEFLABEL (label_34)
  (Wrd8.Obj) = (Rsp [4]);
  goto label_33;

DEFLABEL (label_35)
  (Wrd8.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [2]));
  goto label_32;

DEFLABEL (label_37)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_5]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_46_15);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_40;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_6]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define ENVIRONMENT_LABEL_47_3 12
#define DEBUGGING_LABEL_47_2 11
#define EXECUTE_CACHE_47_7 7
#define EXECUTE_CACHE_47_6 9
#define FREE_REFERENCES_LABEL_47_0 6
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto ic_environment_has_parentP_1;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_environment_has_parentP_4)
DEFLABEL (ic_environment_has_parentP_1)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_9 7
#define LABEL_48_7 9
#define ENVIRONMENT_LABEL_48_3 19
#define DEBUGGING_LABEL_48_2 18
#define OBJECT_48_0 17
#define EXECUTE_CACHE_48_10 11
#define EXECUTE_CACHE_48_8 13
#define EXECUTE_CACHE_48_6 15
#define FREE_REFERENCES_LABEL_48_0 10
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_48_4);
      goto ic_environment_parent_4;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_environment_parent_7)
DEFLABEL (ic_environment_parent_4)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_9);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define ENVIRONMENT_LABEL_49_3 12
#define DEBUGGING_LABEL_49_2 11
#define EXECUTE_CACHE_49_7 7
#define EXECUTE_CACHE_49_6 9
#define FREE_REFERENCES_LABEL_49_0 6
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto ic_frame_parent_1;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_frame_parent_4)
DEFLABEL (ic_frame_parent_1)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define ENVIRONMENT_LABEL_50_3 12
#define DEBUGGING_LABEL_50_2 11
#define EXECUTE_CACHE_50_7 7
#define EXECUTE_CACHE_50_6 9
#define FREE_REFERENCES_LABEL_50_0 6
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_50_4);
      goto ic_environment_lambda_1;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_environment_lambda_4)
DEFLABEL (ic_environment_lambda_1)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_7 7
#define LABEL_51_8 9
#define LABEL_51_10 11
#define ENVIRONMENT_LABEL_51_3 22
#define DEBUGGING_LABEL_51_2 21
#define EXECUTE_CACHE_51_12 13
#define EXECUTE_CACHE_51_11 15
#define EXECUTE_CACHE_51_9 17
#define EXECUTE_CACHE_51_6 19
#define FREE_REFERENCES_LABEL_51_0 12
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_51_4);
      goto ic_environment_procedure_5;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_51_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_51_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_environment_procedure_8)
DEFLABEL (ic_environment_procedure_5)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_51_10);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_7 7
#define LABEL_52_8 9
#define ENVIRONMENT_LABEL_52_3 20
#define DEBUGGING_LABEL_52_2 19
#define EXECUTE_CACHE_52_11 11
#define EXECUTE_CACHE_52_10 13
#define EXECUTE_CACHE_52_9 15
#define EXECUTE_CACHE_52_6 17
#define FREE_REFERENCES_LABEL_52_0 10
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_52_4);
      goto ic_external_frame_4;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_52_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_external_frame_7)
DEFLABEL (ic_external_frame_4)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (label_8)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 11
#define DEBUGGING_LABEL_53_2 10
#define OBJECT_53_3 9
#define OBJECT_53_2 8
#define OBJECT_53_1 7
#define OBJECT_53_0 6
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_53_4);
      goto ic_frame_procedure__3;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_frame_procedure__7)
DEFLABEL (ic_frame_procedure__3)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd8.Obj) = (current_block [OBJECT_53_0]);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_8;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_53_2]);
  (Rsp [1]) = (Wrd24.Obj);
  if ((Wrd20.uLng) == 10)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_3]), 2);

DEFLABEL (label_10)
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_9;
  Rvl = ((Wrd32.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 7
#define DEBUGGING_LABEL_54_2 6
#define OBJECT_54_1 5
#define OBJECT_54_0 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_54_4);
      goto ic_frame_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_frame_procedure_3)
DEFLABEL (ic_frame_procedure_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define TAG_55_6 1
#define ENVIRONMENT_LABEL_55_3 11
#define DEBUGGING_LABEL_55_2 10
#define OBJECT_55_0 9
#define EXECUTE_CACHE_55_7 7
#define FREE_REFERENCES_LABEL_55_0 6
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_55_4);
      goto ic_frame_arg_1;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_frame_arg_4)
DEFLABEL (ic_frame_arg_1)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_55_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_0]), 2);

DEFLABEL (label_7)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_6;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd16.pObj) = (& ((Wrd23.pObj) [(Wrd13.Lng)]));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_7 5
#define LABEL_56_5 7
#define ENVIRONMENT_LABEL_56_3 20
#define DEBUGGING_LABEL_56_2 19
#define OBJECT_56_3 18
#define OBJECT_56_2 17
#define OBJECT_56_1 16
#define OBJECT_56_0 15
#define EXECUTE_CACHE_56_9 9
#define EXECUTE_CACHE_56_8 11
#define EXECUTE_CACHE_56_6 13
#define FREE_REFERENCES_LABEL_56_0 8
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_56_4);
      goto extend_top_level_environment_6;

    case 1:
      current_block = (Rpc - LABEL_56_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (extend_top_level_environment_9)
DEFLABEL (extend_top_level_environment_6)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_56_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_56_7);

DEFLABEL (label_16)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_56_1]))
    goto label_11;
  Wrd10 = Wrd8;
  goto label_10;

DEFLABEL (label_11)
  (Wrd10.Obj) = (current_block [OBJECT_56_2]);

DEFLABEL (label_10)
DEFLABEL (label_15)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  if ((Wrd11.Obj) == (current_block [OBJECT_56_1]))
    goto label_13;
  Wrd13 = Wrd11;
  goto label_12;

DEFLABEL (label_13)
  (Wrd13.Obj) = (current_block [OBJECT_56_3]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [3]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define ENVIRONMENT_LABEL_57_3 12
#define DEBUGGING_LABEL_57_2 11
#define OBJECT_57_3 10
#define OBJECT_57_2 9
#define OBJECT_57_1 8
#define OBJECT_57_0 7
#define EXECUTE_CACHE_57_5 5
#define FREE_REFERENCES_LABEL_57_0 4
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_57_4);
      goto make_top_level_environment_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_top_level_environment_7)
DEFLABEL (make_top_level_environment_4)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_57_0]))
    goto label_9;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_8;

DEFLABEL (label_9)
  (Wrd13.Obj) = (current_block [OBJECT_57_1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_8)
DEFLABEL (label_13)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == (current_block [OBJECT_57_0]))
    goto label_11;
  Wrd11 = Wrd9;
  goto label_10;

DEFLABEL (label_11)
  (Wrd11.Obj) = (current_block [OBJECT_57_2]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_57_3]);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define ENVIRONMENT_LABEL_58_3 19
#define DEBUGGING_LABEL_58_2 18
#define OBJECT_58_6 17
#define OBJECT_58_5 16
#define OBJECT_58_4 15
#define OBJECT_58_3 14
#define OBJECT_58_2 13
#define OBJECT_58_1 12
#define OBJECT_58_0 11
#define EXECUTE_CACHE_58_7 9
#define FREE_REFERENCES_LABEL_58_0 8
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_58_4);
      goto make_root_top_level_environment_7;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_root_top_level_environment_10)
DEFLABEL (make_root_top_level_environment_7)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_58_0]))
    goto label_12;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_11;

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_58_1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_11)
DEFLABEL (label_16)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_6);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = ((Wrd6.Lng) ^ 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_58_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_6]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (current_block [OBJECT_58_0]))
    goto label_14;
  Wrd7 = Wrd5;
  goto label_13;

DEFLABEL (label_14)
  (Wrd7.Obj) = (current_block [OBJECT_58_3]);

DEFLABEL (label_13)
DEFLABEL (label_15)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58_4]);
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_6 5
#define LABEL_59_8 7
#define LABEL_59_5 9
#define LABEL_59_15 11
#define LABEL_59_13 13
#define LABEL_59_10 15
#define LABEL_59_11 17
#define LABEL_59_16 19
#define LABEL_59_19 21
#define LABEL_59_18 23
#define LABEL_59_21 25
#define LABEL_59_24 27
#define LABEL_59_25 29
#define LABEL_59_22 31
#define LABEL_59_27 33
#define LABEL_59_28 35
#define ENVIRONMENT_LABEL_59_3 68
#define DEBUGGING_LABEL_59_2 67
#define OBJECT_59_11 66
#define OBJECT_59_10 65
#define OBJECT_59_9 64
#define OBJECT_59_8 63
#define OBJECT_59_7 62
#define OBJECT_59_6 61
#define OBJECT_59_5 60
#define OBJECT_59_4 59
#define OBJECT_59_3 58
#define OBJECT_59_2 57
#define OBJECT_59_1 56
#define OBJECT_59_0 55
#define EXECUTE_CACHE_59_26 37
#define EXECUTE_CACHE_59_23 39
#define EXECUTE_CACHE_59_20 41
#define EXECUTE_CACHE_59_17 43
#define EXECUTE_CACHE_59_14 45
#define EXECUTE_CACHE_59_12 47
#define EXECUTE_CACHE_59_9 49
#define EXECUTE_CACHE_59_7 51
#define FREE_REFERENCE_59_0 54
#define FREE_REFERENCES_LABEL_59_0 36
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_59_4);
      goto Z__extend_top_level_environment_26;

    case 1:
      current_block = (Rpc - LABEL_59_6);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_59_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_59_15);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_59_13);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_59_10);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_59_11);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_59_16);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_59_19);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_59_18);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_59_21);
      goto do_loop_22;

    case 12:
      current_block = (Rpc - LABEL_59_24);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_59_25);
      goto continuation_2;

    case 14:
      current_block = (Rpc - LABEL_59_22);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_59_27);
      goto label_30;

    case 16:
      current_block = (Rpc - LABEL_59_28);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__extend_top_level_environment_32)
DEFLABEL (Z__extend_top_level_environment_26)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_41;
  Wrd8 = Wrd12;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_59_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_59_8);

DEFLABEL (label_39)
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_59_1]))
    goto label_38;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_59_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;

DEFLABEL (label_36)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_59_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_59_18);
  (Wrd27.Obj) = (* (Rsp++));
  if (Rvl == (Wrd27.Obj))
    goto label_35;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_19]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_59_19);

DEFLABEL (label_35)
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_34)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_25]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_59_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_59_5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_26]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_59_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_59_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_9]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_59_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_59_6]);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_7]), 2);

DEFLABEL (label_37)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_59_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_59_15);
  goto label_36;

DEFLABEL (label_38)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_59_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_59_10);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  goto do_loop_22;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_6])), (Wrd9.pObj));

DEFLABEL (label_28)
  (Wrd8.Obj) = Rvl;
  goto label_40;

DEFLABEL (do_loop_33)
DEFLABEL (do_loop_22)
  INTERRUPT_CHECK (26, LABEL_59_21);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_43;
  (Wrd7.Obj) = (current_block [OBJECT_59_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_42;

DEFLABEL (label_43)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_42)
DEFLABEL (label_49)
  (Wrd8.Obj) = (Rsp [0]);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_48;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_22]))));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_59_22);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_47;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  ((Wrd17.pObj) [0]) = Rvl;

DEFLABEL (label_46)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_45;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_22;

DEFLABEL (label_45)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_28]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_11]), 1);

DEFLABEL (label_29)
  (Wrd6.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_27]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_10]), 2);

DEFLABEL (label_30)
  goto label_46;

DEFLABEL (label_48)
  Rsp = (& (Rsp [2]));
  (Wrd12.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_34;

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
uenvir_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto make_stack_ccenv_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_stack_ccenv_3)
DEFLABEL (make_stack_ccenv_0)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (current_block [OBJECT_60_0]);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define ENVIRONMENT_LABEL_61_3 7
#define DEBUGGING_LABEL_61_2 6
#define OBJECT_61_1 5
#define OBJECT_61_0 4
#define FREE_REFERENCES_LABEL_61_0 4
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_61_4);
      goto stack_ccenv_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_block_3)
DEFLABEL (stack_ccenv_block_0)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_61_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

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

#define LABEL_62_4 3
#define ENVIRONMENT_LABEL_62_3 7
#define DEBUGGING_LABEL_62_2 6
#define OBJECT_62_1 5
#define OBJECT_62_0 4
#define FREE_REFERENCES_LABEL_62_0 4
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_62_4);
      goto stack_ccenv_frame_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_frame_3)
DEFLABEL (stack_ccenv_frame_0)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_62_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

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

#define LABEL_63_4 3
#define ENVIRONMENT_LABEL_63_3 7
#define DEBUGGING_LABEL_63_2 6
#define OBJECT_63_1 5
#define OBJECT_63_0 4
#define FREE_REFERENCES_LABEL_63_0 4
#define NUMBER_OF_LINKER_SECTIONS_63_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto stack_ccenv_start_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_start_index_3)
DEFLABEL (stack_ccenv_start_index_0)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

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

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_6 7
#define LABEL_64_7 9
#define ENVIRONMENT_LABEL_64_3 16
#define DEBUGGING_LABEL_64_2 15
#define OBJECT_64_4 14
#define OBJECT_64_3 13
#define OBJECT_64_2 12
#define OBJECT_64_1 11
#define OBJECT_64_0 10
#define FREE_REFERENCES_LABEL_64_0 10
#define NUMBER_OF_LINKER_SECTIONS_64_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd46;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_64_4);
      goto stack_ccenvP_4;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_64_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_64_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenvP_10)
DEFLABEL (stack_ccenvP_4)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_64_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_64_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_64_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_7 7
#define LABEL_65_9 9
#define LABEL_65_13 11
#define LABEL_65_11 13
#define LABEL_65_15 15
#define LABEL_65_17 17
#define LABEL_65_19 19
#define LABEL_65_21 21
#define LABEL_65_24 23
#define LABEL_65_22 25
#define LABEL_65_31 27
#define LABEL_65_27 29
#define LABEL_65_29 31
#define LABEL_65_32 33
#define LABEL_65_36 35
#define ENVIRONMENT_LABEL_65_3 77
#define DEBUGGING_LABEL_65_2 76
#define OBJECT_65_6 75
#define OBJECT_65_5 74
#define OBJECT_65_4 73
#define OBJECT_65_3 72
#define OBJECT_65_2 71
#define OBJECT_65_1 70
#define OBJECT_65_0 69
#define EXECUTE_CACHE_65_35 37
#define EXECUTE_CACHE_65_34 39
#define EXECUTE_CACHE_65_33 41
#define EXECUTE_CACHE_65_30 43
#define EXECUTE_CACHE_65_28 45
#define EXECUTE_CACHE_65_26 47
#define EXECUTE_CACHE_65_25 49
#define EXECUTE_CACHE_65_23 51
#define EXECUTE_CACHE_65_20 53
#define EXECUTE_CACHE_65_18 55
#define EXECUTE_CACHE_65_16 57
#define EXECUTE_CACHE_65_14 59
#define EXECUTE_CACHE_65_12 61
#define EXECUTE_CACHE_65_10 63
#define EXECUTE_CACHE_65_8 65
#define EXECUTE_CACHE_65_6 67
#define FREE_REFERENCES_LABEL_65_0 36
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_65_4);
      goto stack_frame_environment_28;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_65_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_65_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_65_13);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_65_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_65_15);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_65_17);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_65_19);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_65_21);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_65_24);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_65_22);
      goto continuation_20;

    case 12:
      current_block = (Rpc - LABEL_65_31);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_65_27);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_65_29);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_65_32);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_65_36);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_environment_33)
DEFLABEL (stack_frame_environment_28)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_65_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_65_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_65_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_65_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_65_19);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_65_0])))
    goto label_39;
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_22]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_23]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_65_22);
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 10))
    goto label_38;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_37)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_32]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_33]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_65_32);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_36;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_36;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_36;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_35)
  (Rsp [6]) = (Wrd12.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_34]));

DEFLABEL (label_36)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_36]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_31)
  (Wrd12.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_31]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  if (Rvl == (current_block [OBJECT_65_1]))
    goto label_40;
  (Wrd9.Obj) = (current_block [OBJECT_65_2]);
  (Rsp [5]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd10.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_26]));

DEFLABEL (label_40)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_24]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_65_24);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_41;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_30]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_65_29);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_35]));

DEFLABEL (label_42)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_65_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_65_17);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_65_21);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_65_0]))
    goto label_44;
  (Wrd7.Obj) = (current_block [OBJECT_65_3]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_26]));

DEFLABEL (label_44)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_27]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_28]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_65_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd7.Obj) = (current_block [OBJECT_65_6]);
  goto label_45;

DEFLABEL (label_46)
  (Wrd7.Obj) = (current_block [OBJECT_65_5]);

DEFLABEL (label_45)
DEFLABEL (label_47)
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_34]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_7 5
#define LABEL_66_5 7
#define LABEL_66_11 9
#define LABEL_66_9 11
#define LABEL_66_15 13
#define LABEL_66_13 15
#define LABEL_66_16 17
#define LABEL_66_18 19
#define LABEL_66_22 21
#define LABEL_66_20 23
#define LABEL_66_23 25
#define LABEL_66_24 27
#define ENVIRONMENT_LABEL_66_3 60
#define DEBUGGING_LABEL_66_2 59
#define OBJECT_66_7 58
#define OBJECT_66_6 57
#define OBJECT_66_5 56
#define OBJECT_66_4 55
#define OBJECT_66_3 54
#define OBJECT_66_2 53
#define OBJECT_66_1 52
#define OBJECT_66_0 51
#define EXECUTE_CACHE_66_27 29
#define EXECUTE_CACHE_66_26 31
#define EXECUTE_CACHE_66_25 33
#define EXECUTE_CACHE_66_21 35
#define EXECUTE_CACHE_66_19 37
#define EXECUTE_CACHE_66_17 39
#define EXECUTE_CACHE_66_14 41
#define EXECUTE_CACHE_66_10 43
#define EXECUTE_CACHE_66_12 45
#define EXECUTE_CACHE_66_8 47
#define EXECUTE_CACHE_66_6 49
#define FREE_REFERENCES_LABEL_66_0 28
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_66_4);
      goto compiled_procedure_environment_18;

    case 1:
      current_block = (Rpc - LABEL_66_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_66_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_66_15);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_66_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_66_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_66_18);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_66_22);
      goto use_compile_code_block_environment_14;

    case 10:
      current_block = (Rpc - LABEL_66_20);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_66_23);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_66_24);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_procedure_environment_21)
DEFLABEL (compiled_procedure_environment_18)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;

DEFLABEL (label_30)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_66_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_66_13);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;

DEFLABEL (label_26)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_66_16);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  Rsp = (& (Rsp [2]));
  goto use_compile_code_block_environment_14;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_66_18);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_66_4])))
    goto label_24;
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_66_20);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_25]));

DEFLABEL (label_24)
  if (Rvl == (current_block [OBJECT_66_5]))
    goto label_25;
  (Wrd9.Obj) = (current_block [OBJECT_66_6]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (label_25)
  Rsp = (& (Rsp [3]));
  goto use_compile_code_block_environment_14;

DEFLABEL (label_27)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_66_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_66_15);
  goto label_26;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_66_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_66_11);
  goto label_28;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_66_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_66_7);
  goto label_30;

DEFLABEL (use_compile_code_block_environment_22)
DEFLABEL (use_compile_code_block_environment_14)
  INTERRUPT_CHECK (26, LABEL_66_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_7]), 1);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_66_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_66_23);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_26]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_6 5
#define LABEL_67_5 7
#define ENVIRONMENT_LABEL_67_3 16
#define DEBUGGING_LABEL_67_2 15
#define OBJECT_67_3 14
#define OBJECT_67_2 13
#define OBJECT_67_1 12
#define OBJECT_67_0 11
#define EXECUTE_CACHE_67_7 9
#define FREE_REFERENCES_LABEL_67_0 8
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_67_4);
      goto stack_ccenv_has_parentP_2;

    case 1:
      current_block = (Rpc - LABEL_67_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_has_parentP_6)
DEFLABEL (stack_ccenv_has_parentP_2)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_11;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_11;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_67_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (current_block [OBJECT_67_3]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_67_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_67_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_6 7
#define LABEL_68_11 9
#define LABEL_68_13 11
#define LABEL_68_8 13
#define LABEL_68_25 15
#define LABEL_68_9 17
#define LABEL_68_10 19
#define LABEL_68_21 21
#define LABEL_68_22 23
#define LABEL_68_30 25
#define LABEL_68_19 27
#define LABEL_68_17 29
#define LABEL_68_34 31
#define LABEL_68_35 33
#define LABEL_68_36 35
#define LABEL_68_37 37
#define LABEL_68_15 39
#define TAG_68_16 18
#define LABEL_68_28 41
#define LABEL_68_29 43
#define LABEL_68_32 45
#define LABEL_68_38 47
#define LABEL_68_45 49
#define LABEL_68_44 51
#define LABEL_68_48 53
#define LABEL_68_41 55
#define LABEL_68_42 57
#define LABEL_68_49 59
#define LABEL_68_53 61
#define LABEL_68_54 63
#define LABEL_68_46 65
#define LABEL_68_50 67
#define TAG_68_51 32
#define LABEL_68_56 69
#define ENVIRONMENT_LABEL_68_3 121
#define DEBUGGING_LABEL_68_2 120
#define OBJECT_68_14 119
#define OBJECT_68_13 118
#define OBJECT_68_12 117
#define OBJECT_68_11 116
#define OBJECT_68_10 115
#define OBJECT_68_9 114
#define OBJECT_68_8 113
#define OBJECT_68_7 112
#define OBJECT_68_6 111
#define OBJECT_68_5 110
#define OBJECT_68_4 109
#define OBJECT_68_3 108
#define OBJECT_68_2 107
#define OBJECT_68_1 106
#define OBJECT_68_0 105
#define EXECUTE_CACHE_68_55 71
#define EXECUTE_CACHE_68_52 73
#define EXECUTE_CACHE_68_47 75
#define EXECUTE_CACHE_68_43 77
#define EXECUTE_CACHE_68_40 79
#define EXECUTE_CACHE_68_39 81
#define EXECUTE_CACHE_68_33 83
#define EXECUTE_CACHE_68_31 85
#define EXECUTE_CACHE_68_27 87
#define EXECUTE_CACHE_68_26 89
#define EXECUTE_CACHE_68_24 91
#define EXECUTE_CACHE_68_23 93
#define EXECUTE_CACHE_68_20 95
#define EXECUTE_CACHE_68_18 97
#define EXECUTE_CACHE_68_14 99
#define EXECUTE_CACHE_68_12 101
#define EXECUTE_CACHE_68_7 103
#define FREE_REFERENCES_LABEL_68_0 70
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd44;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_68_4);
      goto stack_ccenv_parent_49;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto label_51;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_68_11);
      goto label_52;

    case 4:
      current_block = (Rpc - LABEL_68_13);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_68_8);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_68_25);
      goto label_53;

    case 7:
      current_block = (Rpc - LABEL_68_9);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_68_10);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_68_21);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_68_22);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_68_30);
      goto label_54;

    case 12:
      current_block = (Rpc - LABEL_68_19);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_68_17);
      goto continuation_21;

    case 14:
      current_block = (Rpc - LABEL_68_34);
      goto label_55;

    case 15:
      current_block = (Rpc - LABEL_68_35);
      goto label_56;

    case 16:
      current_block = (Rpc - LABEL_68_36);
      goto label_57;

    case 17:
      current_block = (Rpc - LABEL_68_37);
      goto label_58;

    case 18:
      current_block = (Rpc - LABEL_68_15);
      goto loop_44;

    case 19:
      current_block = (Rpc - LABEL_68_28);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_68_29);
      goto continuation_15;

    case 21:
      current_block = (Rpc - LABEL_68_32);
      goto continuation_17;

    case 22:
      current_block = (Rpc - LABEL_68_38);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_68_45);
      goto continuation_29;

    case 24:
      current_block = (Rpc - LABEL_68_44);
      goto continuation_30;

    case 25:
      current_block = (Rpc - LABEL_68_48);
      goto label_59;

    case 26:
      current_block = (Rpc - LABEL_68_41);
      goto continuation_42;

    case 27:
      current_block = (Rpc - LABEL_68_42);
      goto continuation_41;

    case 28:
      current_block = (Rpc - LABEL_68_49);
      goto continuation_27;

    case 29:
      current_block = (Rpc - LABEL_68_53);
      goto label_60;

    case 30:
      current_block = (Rpc - LABEL_68_54);
      goto label_61;

    case 31:
      current_block = (Rpc - LABEL_68_46);
      goto continuation_33;

    case 32:
      current_block = (Rpc - LABEL_68_50);
      goto lambda_65;

    case 33:
      current_block = (Rpc - LABEL_68_56);
      goto continuation_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_parent_63)
DEFLABEL (stack_ccenv_parent_49)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_89;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_89;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_88)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_68_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_68_13);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_68_3])))
    goto label_74;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_68_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_68_15])));
  Rhp += 2;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  Wrd35 = Wrd37;
  (Wrd36.Obj) = (Rsp [4]);
  ((Wrd35.pObj) [2]) = (Wrd36.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  ((Wrd35.pObj) [3]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd38.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_17]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_18]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_68_17);
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 10))
    goto label_73;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_72)
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_71;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_71;
  (Wrd15.Obj) = ((Wrd21.pObj) [4]);

DEFLABEL (label_70)
  (Wrd31.Obj) = (* (Rsp++));
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_69;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_69;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd39.Lng) = ((Wrd40.Lng) + (Wrd41.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd39.Lng)))
    goto label_69;
  (Wrd42.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_68)
  (Wrd43.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd43.Obj);
  (Wrd53.Obj) = (Rsp [4]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_67;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd52.Lng))))
    goto label_67;
  (Wrd44.Obj) = ((Wrd50.pObj) [3]);

DEFLABEL (label_66)
  (Rsp [3]) = (Wrd44.Obj);
  (Wrd60.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd60.Obj);
  goto loop_44;

DEFLABEL (label_67)
  (Wrd55.Obj) = (Rsp [4]);
  (Wrd56.Obj) = (current_block [OBJECT_68_2]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_37]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_58)
  (Wrd44.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_36]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (current_block [OBJECT_68_11]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_35]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_56)
  (Wrd15.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_34]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_10]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  if (! (Rvl == (current_block [OBJECT_68_4])))
    goto label_75;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_20]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_68_19);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_33]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_68_32);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_40]));

DEFLABEL (label_75)
  if (Rvl == (current_block [OBJECT_68_5]))
    goto label_76;
  (Wrd11.Obj) = (current_block [OBJECT_68_6]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_24]));

DEFLABEL (label_76)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_21]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_22]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_23]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_68_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd7.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_31]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_68_21);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_27]));

DEFLABEL (label_77)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_29]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_79;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_79;
  (Wrd16.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_78)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_12]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_68_29);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_9]), 1);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_68_28);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_26]));

DEFLABEL (label_79)
  (Wrd25.Obj) = (Rsp [6]);
  (Wrd26.Obj) = (current_block [OBJECT_68_2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_30]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_80)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_87;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd28.Lng))))
    goto label_87;
  (Wrd22.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_86)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_68_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_9]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_68_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_68_8);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd14.Obj) = (current_block [OBJECT_68_7]);
  (Wrd17.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd17.Lng))))
    goto label_85;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd7.Obj) == (Wrd9.Obj))
    goto label_82;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_81;

DEFLABEL (label_82)
  Rvl = (Rsp [0]);

DEFLABEL (label_81)
DEFLABEL (label_84)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_8]), 2);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_83;
  goto label_82;

DEFLABEL (label_87)
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.Obj) = (current_block [OBJECT_68_2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_68_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (loop_64)
DEFLABEL (loop_44)
  INTERRUPT_CHECK (26, LABEL_68_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_39]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_68_38);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_90;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_41]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_42]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_31]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_68_42);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_52]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_68_41);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_68_51);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_68_50])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  ((Wrd13.pObj) [3]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_90)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  if (! (Rvl == (Wrd10.Obj)))
    goto label_91;
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_43]));

DEFLABEL (label_91)
  (Rsp [2]) = Rvl;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_44]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_45]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_14]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_68_45);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_68_3]))
    goto label_93;
  if (Rvl == (current_block [OBJECT_68_13]))
    goto label_92;
  (Wrd27.Obj) = (current_block [OBJECT_68_14]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_24]));

DEFLABEL (label_92)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_46]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_47]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_68_46);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_55]));

DEFLABEL (label_93)
  (Wrd5.Obj) = (current_block [OBJECT_68_12]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_100)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_99;
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_99;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_99;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_98)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_49]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_18]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_68_49);
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 10))
    goto label_97;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_96)
  (Wrd15.Obj) = (* (Rsp++));
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_95;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_95;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd24.Lng) = ((Wrd25.Lng) + (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_95;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_94)
  (Rsp [4]) = (Wrd21.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_44;

DEFLABEL (label_95)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_54]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_61)
  (Wrd21.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_53]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_10]), 1);

DEFLABEL (label_60)
  (Wrd6.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_68_44);
  (Wrd5.Obj) = Rvl;
  goto label_100;

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_68_50);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_68_56);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if (Rvl == (Wrd8.Obj))
    goto label_101;
  (Wrd10.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = Rvl;
  goto loop_44;

DEFLABEL (label_101)
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_43]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define ENVIRONMENT_LABEL_69_3 12
#define DEBUGGING_LABEL_69_2 11
#define OBJECT_69_1 10
#define OBJECT_69_0 9
#define EXECUTE_CACHE_69_6 7
#define FREE_REFERENCES_LABEL_69_0 6
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_69_4);
      goto stack_ccenv_lambda_1;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_lambda_5)
DEFLABEL (stack_ccenv_lambda_1)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_69_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_6 5
#define LABEL_70_5 7
#define LABEL_70_8 9
#define TAG_70_9 3
#define LABEL_70_10 11
#define LABEL_70_11 13
#define LABEL_70_13 15
#define LABEL_70_15 17
#define LABEL_70_18 19
#define LABEL_70_17 21
#define LABEL_70_22 23
#define LABEL_70_21 25
#define ENVIRONMENT_LABEL_70_3 52
#define DEBUGGING_LABEL_70_2 51
#define OBJECT_70_5 50
#define OBJECT_70_4 49
#define OBJECT_70_3 48
#define OBJECT_70_2 47
#define OBJECT_70_1 46
#define OBJECT_70_0 45
#define EXECUTE_CACHE_70_25 27
#define EXECUTE_CACHE_70_24 29
#define EXECUTE_CACHE_70_23 31
#define EXECUTE_CACHE_70_20 33
#define EXECUTE_CACHE_70_19 35
#define EXECUTE_CACHE_70_16 37
#define EXECUTE_CACHE_70_14 39
#define EXECUTE_CACHE_70_12 41
#define EXECUTE_CACHE_70_7 43
#define FREE_REFERENCES_LABEL_70_0 26
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_70_4);
      goto stack_ccenv_arguments_19;

    case 1:
      current_block = (Rpc - LABEL_70_6);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_70_8);
      goto lambda_24;

    case 4:
      current_block = (Rpc - LABEL_70_10);
      goto continuation_15;

    case 5:
      current_block = (Rpc - LABEL_70_11);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_70_13);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_70_15);
      goto continuation_16;

    case 8:
      current_block = (Rpc - LABEL_70_18);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_70_17);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_70_22);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_70_21);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_arguments_23)
DEFLABEL (stack_ccenv_arguments_19)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_29;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_29;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  Rvl = (current_block [OBJECT_70_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd12.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_70_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_70_8])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  ((Wrd17.pObj) [3]) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  ((Wrd8.pObj) [0]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_12]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_70_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_70_18);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_26)
  (Wrd11.Obj) = (current_block [OBJECT_70_5]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_24]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_70_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_70_15);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_24]));

DEFLABEL (label_29)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_70_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_70_17);
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_70_8);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_70_13);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_70_3])))
    goto label_30;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_20]));

DEFLABEL (label_30)
  if (Rvl == (current_block [OBJECT_70_4]))
    goto label_31;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_70_22);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_25]));

DEFLABEL (label_31)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_70_21);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define LABEL_71_7 7
#define LABEL_71_10 9
#define LABEL_71_6 11
#define LABEL_71_8 13
#define LABEL_71_9 15
#define ENVIRONMENT_LABEL_71_3 31
#define DEBUGGING_LABEL_71_2 30
#define OBJECT_71_1 29
#define OBJECT_71_0 28
#define EXECUTE_CACHE_71_14 17
#define EXECUTE_CACHE_71_13 19
#define EXECUTE_CACHE_71_12 21
#define EXECUTE_CACHE_71_11 23
#define FREE_REFERENCE_71_1 26
#define FREE_REFERENCE_71_0 27
#define FREE_REFERENCES_LABEL_71_0 16
#define NUMBER_OF_LINKER_SECTIONS_71_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_71_4);
      goto stack_ccenv_bound_names_4;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_71_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_71_10);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_71_6);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_71_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_71_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_bound_names_10)
DEFLABEL (stack_ccenv_bound_names_4)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_14;
  Wrd14 = Wrd18;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_12;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_12;
  (Wrd28.Obj) = ((Wrd32.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_71_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_71_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_71_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_12]));

DEFLABEL (label_12)
  (Wrd37.Obj) = (Rsp [5]);
  (Wrd38.Obj) = (current_block [OBJECT_71_0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_10]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71_7])), (Wrd15.pObj));

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71_5])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_6 7
#define TAG_72_7 2
#define LABEL_72_8 9
#define TAG_72_9 3
#define LABEL_72_11 11
#define ENVIRONMENT_LABEL_72_3 24
#define DEBUGGING_LABEL_72_2 23
#define OBJECT_72_1 22
#define OBJECT_72_0 21
#define EXECUTE_CACHE_72_14 13
#define EXECUTE_CACHE_72_13 15
#define EXECUTE_CACHE_72_12 17
#define EXECUTE_CACHE_72_10 19
#define FREE_REFERENCES_LABEL_72_0 12
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_72_4);
      goto stack_ccenv_reference_type_4;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_72_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_72_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_72_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_reference_type_8)
DEFLABEL (stack_ccenv_reference_type_4)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_12;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_12;
  (Wrd8.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_11)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_72_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_72_6])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_72_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_72_8])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  ((Wrd29.pObj) [2]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_10]));

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_72_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_72_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_72_11);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_14]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_72_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define LABEL_73_6 7
#define TAG_73_7 2
#define LABEL_73_8 9
#define TAG_73_9 3
#define LABEL_73_11 11
#define ENVIRONMENT_LABEL_73_3 24
#define DEBUGGING_LABEL_73_2 23
#define OBJECT_73_1 22
#define OBJECT_73_0 21
#define EXECUTE_CACHE_73_14 13
#define EXECUTE_CACHE_73_13 15
#define EXECUTE_CACHE_73_12 17
#define EXECUTE_CACHE_73_10 19
#define FREE_REFERENCES_LABEL_73_0 12
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_73_4);
      goto stack_ccenv_safe_lookup_4;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_73_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_73_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_73_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_safe_lookup_8)
DEFLABEL (stack_ccenv_safe_lookup_4)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_12;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_12;
  (Wrd8.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_11)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_6])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_8])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  ((Wrd29.pObj) [2]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_10]));

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_73_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_73_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_73_11);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_14]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_73_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_6 7
#define TAG_74_7 2
#define LABEL_74_9 9
#define ENVIRONMENT_LABEL_74_3 20
#define DEBUGGING_LABEL_74_2 19
#define OBJECT_74_1 18
#define OBJECT_74_0 17
#define EXECUTE_CACHE_74_11 11
#define EXECUTE_CACHE_74_10 13
#define EXECUTE_CACHE_74_8 15
#define FREE_REFERENCES_LABEL_74_0 10
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_74_4);
      goto stack_ccenv_assignableP_3;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_74_6);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_74_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_assignableP_7)
DEFLABEL (stack_ccenv_assignableP_3)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_6])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_8]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_74_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_74_6);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_74_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_11]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_6 7
#define TAG_75_7 2
#define LABEL_75_8 9
#define TAG_75_9 3
#define LABEL_75_11 11
#define ENVIRONMENT_LABEL_75_3 24
#define DEBUGGING_LABEL_75_2 23
#define OBJECT_75_1 22
#define OBJECT_75_0 21
#define EXECUTE_CACHE_75_14 13
#define EXECUTE_CACHE_75_13 15
#define EXECUTE_CACHE_75_12 17
#define EXECUTE_CACHE_75_10 19
#define FREE_REFERENCES_LABEL_75_0 12
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_75_4);
      goto stack_ccenv_assignB_4;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_75_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_75_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_75_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_assignB_8)
DEFLABEL (stack_ccenv_assignB_4)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_12;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_12;
  (Wrd8.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_6])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  ((Wrd28.pObj) [2]) = (Wrd22.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Rsp [4]) = (Wrd24.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_8])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  ((Wrd32.pObj) [2]) = (Wrd27.Obj);
  (Rsp [2]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_10]));

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_75_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_75_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_75_11);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_14]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_75_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_6 5
#define LABEL_76_7 7
#define LABEL_76_8 9
#define LABEL_76_5 11
#define LABEL_76_10 13
#define LABEL_76_11 15
#define TAG_76_12 6
#define ENVIRONMENT_LABEL_76_3 28
#define DEBUGGING_LABEL_76_2 27
#define OBJECT_76_5 26
#define OBJECT_76_4 25
#define OBJECT_76_3 24
#define OBJECT_76_2 23
#define OBJECT_76_1 22
#define OBJECT_76_0 21
#define EXECUTE_CACHE_76_13 17
#define EXECUTE_CACHE_76_9 19
#define FREE_REFERENCES_LABEL_76_0 16
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_76_4);
      goto stack_ccenv_get_value_8;

    case 1:
      current_block = (Rpc - LABEL_76_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_76_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_76_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_76_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_76_11);
      goto lambda_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_get_value_15)
DEFLABEL (stack_ccenv_get_value_8)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd9.Obj) = (current_block [OBJECT_76_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_24;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_24;
  (Wrd13.Obj) = ((Wrd19.pObj) [4]);

DEFLABEL (label_23)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_22;
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_22;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd38.Lng) + (Wrd40.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_22;
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_21)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_20;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd50.Lng))))
    goto label_20;
  (Wrd44.Obj) = ((Wrd48.pObj) [3]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_18;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  ((Wrd13.pObj) [0]) = Rvl;

DEFLABEL (label_17)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_11])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_13]));

DEFLABEL (label_18)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_4]), 2);

DEFLABEL (label_13)
  goto label_17;

DEFLABEL (label_20)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.Obj) = (current_block [OBJECT_76_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_8]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_76_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_2]), 2);

DEFLABEL (label_10)
  (Wrd13.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_76_11);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_25;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_5]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_6 5
#define LABEL_77_5 7
#define LABEL_77_10 9
#define LABEL_77_11 11
#define LABEL_77_8 13
#define ENVIRONMENT_LABEL_77_3 28
#define DEBUGGING_LABEL_77_2 27
#define OBJECT_77_1 26
#define OBJECT_77_0 25
#define EXECUTE_CACHE_77_13 15
#define EXECUTE_CACHE_77_12 17
#define EXECUTE_CACHE_77_9 19
#define EXECUTE_CACHE_77_7 21
#define FREE_REFERENCE_77_0 24
#define FREE_REFERENCES_LABEL_77_0 14
#define NUMBER_OF_LINKER_SECTIONS_77_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_77_4);
      goto stack_ccenv_static_link_5;

    case 1:
      current_block = (Rpc - LABEL_77_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_77_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_77_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_77_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_static_link_9)
DEFLABEL (stack_ccenv_static_link_5)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_13;
  Wrd9 = Wrd13;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_77_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_77_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_77_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_77_10);
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_6])), (Wrd10.pObj));

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_6 5
#define LABEL_78_5 7
#define LABEL_78_10 9
#define LABEL_78_8 11
#define ENVIRONMENT_LABEL_78_3 24
#define DEBUGGING_LABEL_78_2 23
#define OBJECT_78_1 22
#define OBJECT_78_0 21
#define EXECUTE_CACHE_78_11 13
#define EXECUTE_CACHE_78_9 15
#define EXECUTE_CACHE_78_7 17
#define FREE_REFERENCE_78_0 20
#define FREE_REFERENCES_LABEL_78_0 12
#define NUMBER_OF_LINKER_SECTIONS_78_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_78_4);
      goto stack_ccenv_normal_closure_5;

    case 1:
      current_block = (Rpc - LABEL_78_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_78_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_78_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ccenv_normal_closure_9)
DEFLABEL (stack_ccenv_normal_closure_5)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_13;
  Wrd9 = Wrd13;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_78_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 10)
    goto label_10;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_78_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_78_10);
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_6])), (Wrd10.pObj));

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_9 7
#define LABEL_79_6 9
#define LABEL_79_7 11
#define LABEL_79_13 13
#define LABEL_79_14 15
#define LABEL_79_10 17
#define ENVIRONMENT_LABEL_79_3 35
#define DEBUGGING_LABEL_79_2 34
#define OBJECT_79_4 33
#define OBJECT_79_3 32
#define OBJECT_79_2 31
#define OBJECT_79_1 30
#define OBJECT_79_0 29
#define EXECUTE_CACHE_79_16 19
#define EXECUTE_CACHE_79_15 21
#define EXECUTE_CACHE_79_12 23
#define EXECUTE_CACHE_79_11 25
#define EXECUTE_CACHE_79_8 27
#define FREE_REFERENCES_LABEL_79_0 18
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_79_4);
      goto find_stack_element_10;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_79_9);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_79_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_79_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_79_13);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_79_14);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_79_10);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_stack_element_16)
DEFLABEL (find_stack_element_10)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_23)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_79_7);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_20;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_20;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_79_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_17)
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_12]));

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_79_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_79_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_79_9);
  goto label_17;

DEFLABEL (label_20)
  (Wrd32.Obj) = (Rsp [5]);
  (Wrd33.Obj) = (current_block [OBJECT_79_4]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_79_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_79_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_6 7
#define LABEL_80_7 9
#define LABEL_80_9 11
#define LABEL_80_11 13
#define LABEL_80_12 15
#define LABEL_80_13 17
#define ENVIRONMENT_LABEL_80_3 25
#define DEBUGGING_LABEL_80_2 24
#define OBJECT_80_0 23
#define EXECUTE_CACHE_80_10 19
#define EXECUTE_CACHE_80_8 21
#define FREE_REFERENCES_LABEL_80_0 18
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_80_4);
      goto find_stack_index_11;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto loop_9;

    case 2:
      current_block = (Rpc - LABEL_80_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_80_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_80_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_80_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_80_12);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_80_13);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_stack_index_17)
DEFLABEL (find_stack_index_11)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_9;

DEFLABEL (loop_18)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_80_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_80_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_80_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_80_9);
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 10))
    goto label_26;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_25)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_24;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_24;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) + (Wrd27.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_24;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_23)
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd28.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd29.Obj) = (Rsp [1]);
  if (! ((Wrd29.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_20;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_22;
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_22;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! ((Wrd46.Lng) < (Wrd48.Lng)))
    goto label_19;

DEFLABEL (label_21)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd44.Obj);
  (Rsp [1]) = (Wrd43.Obj);
  goto loop_9;

DEFLABEL (label_22)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_13]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_21;

DEFLABEL (label_24)
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_14)
  (Wrd20.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd7.Obj);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [5]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 26)
    goto label_29;

DEFLABEL (label_28)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_29)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_28;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_28;
  Rvl = (LONG_TO_FIXNUM (Wrd14.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define ENVIRONMENT_LABEL_81_3 11
#define DEBUGGING_LABEL_81_2 10
#define OBJECT_81_0 9
#define EXECUTE_CACHE_81_6 7
#define FREE_REFERENCES_LABEL_81_0 6
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_81_4);
      goto dbg_block_length_1;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_length_4)
DEFLABEL (dbg_block_length_1)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (Rsp [0]) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_5;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  Rvl = (MAKE_OBJECT (26, (Wrd10.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
uenvir_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto make_closure_ccenv_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_closure_ccenv_3)
DEFLABEL (make_closure_ccenv_0)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (current_block [OBJECT_82_0]);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define ENVIRONMENT_LABEL_83_3 7
#define DEBUGGING_LABEL_83_2 6
#define OBJECT_83_1 5
#define OBJECT_83_0 4
#define FREE_REFERENCES_LABEL_83_0 4
#define NUMBER_OF_LINKER_SECTIONS_83_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_83_4);
      goto closure_ccenv_stack_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenv_stack_block_3)
DEFLABEL (closure_ccenv_stack_block_0)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_83_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

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

#define LABEL_84_4 3
#define ENVIRONMENT_LABEL_84_3 7
#define DEBUGGING_LABEL_84_2 6
#define OBJECT_84_1 5
#define OBJECT_84_0 4
#define FREE_REFERENCES_LABEL_84_0 4
#define NUMBER_OF_LINKER_SECTIONS_84_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_84_4);
      goto closure_ccenv_closure_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenv_closure_block_3)
DEFLABEL (closure_ccenv_closure_block_0)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_84_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

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

#define LABEL_85_4 3
#define ENVIRONMENT_LABEL_85_3 7
#define DEBUGGING_LABEL_85_2 6
#define OBJECT_85_1 5
#define OBJECT_85_0 4
#define FREE_REFERENCES_LABEL_85_0 4
#define NUMBER_OF_LINKER_SECTIONS_85_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_85_4);
      goto closure_ccenv_closure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenv_closure_3)
DEFLABEL (closure_ccenv_closure_0)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_85_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

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

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_6 7
#define LABEL_86_7 9
#define ENVIRONMENT_LABEL_86_3 16
#define DEBUGGING_LABEL_86_2 15
#define OBJECT_86_4 14
#define OBJECT_86_3 13
#define OBJECT_86_2 12
#define OBJECT_86_1 11
#define OBJECT_86_0 10
#define FREE_REFERENCES_LABEL_86_0 10
#define NUMBER_OF_LINKER_SECTIONS_86_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd46;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_86_4);
      goto closure_ccenvP_4;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_86_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_86_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenvP_10)
DEFLABEL (closure_ccenvP_4)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_86_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_86_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_86_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define LABEL_87_11 7
#define LABEL_87_6 9
#define LABEL_87_7 11
#define TAG_87_8 4
#define LABEL_87_9 13
#define LABEL_87_10 15
#define LABEL_87_14 17
#define LABEL_87_18 19
#define LABEL_87_21 21
#define LABEL_87_20 23
#define ENVIRONMENT_LABEL_87_3 47
#define DEBUGGING_LABEL_87_2 46
#define OBJECT_87_4 45
#define OBJECT_87_3 44
#define OBJECT_87_2 43
#define OBJECT_87_1 42
#define OBJECT_87_0 41
#define EXECUTE_CACHE_87_22 25
#define EXECUTE_CACHE_87_19 27
#define EXECUTE_CACHE_87_17 29
#define EXECUTE_CACHE_87_16 31
#define EXECUTE_CACHE_87_15 33
#define EXECUTE_CACHE_87_13 35
#define EXECUTE_CACHE_87_12 37
#define FREE_REFERENCE_87_0 40
#define FREE_REFERENCES_LABEL_87_0 24
#define NUMBER_OF_LINKER_SECTIONS_87_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_87_4);
      goto closure_ccenv_bound_names_10;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_87_11);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_87_6);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_87_7);
      goto lambda_17;

    case 5:
      current_block = (Rpc - LABEL_87_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_87_10);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_87_14);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_87_18);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_87_21);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_87_20);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenv_bound_names_16)
DEFLABEL (closure_ccenv_bound_names_10)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_87_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_87_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_87_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_19;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_19;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_87_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_87_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_87_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_13]));

DEFLABEL (label_19)
  (Wrd35.Obj) = (Rsp [5]);
  (Wrd36.Obj) = (current_block [OBJECT_87_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87_5])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_87_7);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_87_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_87_18);
  if (! (Rvl == (current_block [OBJECT_87_2])))
    goto label_23;
  Rvl = (current_block [OBJECT_87_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_25;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_25;
  (Wrd14.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_87_20);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_22]));

DEFLABEL (label_25)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Wrd30.Obj) = (current_block [OBJECT_87_4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_21]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_6 7
#define TAG_88_7 2
#define LABEL_88_8 9
#define TAG_88_9 3
#define LABEL_88_11 11
#define ENVIRONMENT_LABEL_88_3 24
#define DEBUGGING_LABEL_88_2 23
#define OBJECT_88_1 22
#define OBJECT_88_0 21
#define EXECUTE_CACHE_88_14 13
#define EXECUTE_CACHE_88_13 15
#define EXECUTE_CACHE_88_12 17
#define EXECUTE_CACHE_88_10 19
#define FREE_REFERENCES_LABEL_88_0 12
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_88_4);
      goto closure_ccenv_reference_type_4;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_88_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_88_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_88_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenv_reference_type_8)
DEFLABEL (closure_ccenv_reference_type_4)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_12;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_12;
  (Wrd8.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_11)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_6])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_8])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  ((Wrd29.pObj) [2]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_10]));

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_88_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_88_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_88_11);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_14]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_88_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define LABEL_89_6 7
#define TAG_89_7 2
#define LABEL_89_8 9
#define TAG_89_9 3
#define LABEL_89_11 11
#define ENVIRONMENT_LABEL_89_3 24
#define DEBUGGING_LABEL_89_2 23
#define OBJECT_89_1 22
#define OBJECT_89_0 21
#define EXECUTE_CACHE_89_14 13
#define EXECUTE_CACHE_89_13 15
#define EXECUTE_CACHE_89_12 17
#define EXECUTE_CACHE_89_10 19
#define FREE_REFERENCES_LABEL_89_0 12
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_89_4);
      goto closure_ccenv_safe_lookup_4;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_89_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_89_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_89_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenv_safe_lookup_8)
DEFLABEL (closure_ccenv_safe_lookup_4)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_12;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_12;
  (Wrd8.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_11)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_89_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_89_6])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_89_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_89_8])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  ((Wrd29.pObj) [2]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_10]));

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_89_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_89_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_89_11);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_14]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_89_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define LABEL_90_6 7
#define TAG_90_7 2
#define LABEL_90_9 9
#define ENVIRONMENT_LABEL_90_3 20
#define DEBUGGING_LABEL_90_2 19
#define OBJECT_90_1 18
#define OBJECT_90_0 17
#define EXECUTE_CACHE_90_11 11
#define EXECUTE_CACHE_90_10 13
#define EXECUTE_CACHE_90_8 15
#define FREE_REFERENCES_LABEL_90_0 10
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_90_4);
      goto closure_ccenv_assignableP_3;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_90_6);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_90_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenv_assignableP_7)
DEFLABEL (closure_ccenv_assignableP_3)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_90_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_90_6])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_8]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_90_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_90_6);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_90_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_11]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define LABEL_91_6 7
#define TAG_91_7 2
#define LABEL_91_8 9
#define TAG_91_9 3
#define LABEL_91_11 11
#define ENVIRONMENT_LABEL_91_3 24
#define DEBUGGING_LABEL_91_2 23
#define OBJECT_91_1 22
#define OBJECT_91_0 21
#define EXECUTE_CACHE_91_14 13
#define EXECUTE_CACHE_91_13 15
#define EXECUTE_CACHE_91_12 17
#define EXECUTE_CACHE_91_10 19
#define FREE_REFERENCES_LABEL_91_0 12
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_91_4);
      goto closure_ccenv_assignB_4;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_91_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_91_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_91_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenv_assignB_8)
DEFLABEL (closure_ccenv_assignB_4)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_12;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_12;
  (Wrd8.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_91_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_91_6])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  ((Wrd28.pObj) [2]) = (Wrd22.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Rsp [4]) = (Wrd24.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_91_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_91_8])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  ((Wrd32.pObj) [2]) = (Wrd27.Obj);
  (Rsp [2]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_10]));

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_91_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_91_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_91_11);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_14]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_91_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_6 7
#define ENVIRONMENT_LABEL_92_3 15
#define DEBUGGING_LABEL_92_2 14
#define OBJECT_92_2 13
#define OBJECT_92_1 12
#define OBJECT_92_0 11
#define EXECUTE_CACHE_92_7 9
#define FREE_REFERENCES_LABEL_92_0 8
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_92_4);
      goto closure_ccenv_get_value_2;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_92_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenv_get_value_7)
DEFLABEL (closure_ccenv_get_value_2)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_7]));

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_92_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_92_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define LABEL_93_8 7
#define LABEL_93_6 9
#define LABEL_93_9 11
#define TAG_93_10 4
#define ENVIRONMENT_LABEL_93_3 23
#define DEBUGGING_LABEL_93_2 22
#define OBJECT_93_2 21
#define OBJECT_93_1 20
#define OBJECT_93_0 19
#define EXECUTE_CACHE_93_12 13
#define EXECUTE_CACHE_93_11 15
#define EXECUTE_CACHE_93_7 17
#define FREE_REFERENCES_LABEL_93_0 12
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_93_4);
      goto closure_get_value_6;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_93_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_93_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_93_9);
      goto lambda_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_get_value_10)
DEFLABEL (closure_get_value_6)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd9.Obj) = (current_block [OBJECT_93_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_93_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_93_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_13;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  ((Wrd13.pObj) [0]) = Rvl;

DEFLABEL (label_12)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_93_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_93_9])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_11]));

DEFLABEL (label_13)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_8)
  goto label_12;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_93_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_14;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_2]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_6 5
#define LABEL_94_9 7
#define LABEL_94_10 9
#define LABEL_94_7 11
#define LABEL_94_5 13
#define ENVIRONMENT_LABEL_94_3 32
#define DEBUGGING_LABEL_94_2 31
#define OBJECT_94_7 30
#define OBJECT_94_6 29
#define OBJECT_94_5 28
#define OBJECT_94_4 27
#define OBJECT_94_3 26
#define OBJECT_94_2 25
#define OBJECT_94_1 24
#define OBJECT_94_0 23
#define EXECUTE_CACHE_94_13 15
#define EXECUTE_CACHE_94_12 17
#define EXECUTE_CACHE_94_11 19
#define EXECUTE_CACHE_94_8 21
#define FREE_REFERENCES_LABEL_94_0 14
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_94_4);
      goto closure_ccenv_has_parentP_12;

    case 1:
      current_block = (Rpc - LABEL_94_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_94_9);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_94_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_94_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_94_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenv_has_parentP_16)
DEFLABEL (closure_ccenv_has_parentP_12)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_28;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_28;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_27)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_94_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_94_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_94_2])))
    goto label_25;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_94_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_19)
  (Wrd5.Obj) = (current_block [OBJECT_94_5]);
  goto label_17;

DEFLABEL (label_18)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_17)
DEFLABEL (label_24)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  Rvl = (Wrd5.Obj);
  goto label_20;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_94_7]);

DEFLABEL (label_20)
DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  if (Rvl == (current_block [OBJECT_94_3]))
    goto label_19;
  if (Rvl == (current_block [OBJECT_94_4]))
    goto label_19;
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_94_6]);
  (Rsp [1]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_12]));

DEFLABEL (label_26)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto label_23;

DEFLABEL (label_28)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_94_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_94_5);
  (Wrd5.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_6 7
#define LABEL_95_7 9
#define LABEL_95_8 11
#define LABEL_95_10 13
#define LABEL_95_19 15
#define LABEL_95_15 17
#define LABEL_95_16 19
#define LABEL_95_13 21
#define LABEL_95_20 23
#define LABEL_95_24 25
#define LABEL_95_27 27
#define LABEL_95_25 29
#define ENVIRONMENT_LABEL_95_3 64
#define DEBUGGING_LABEL_95_2 63
#define OBJECT_95_9 62
#define OBJECT_95_8 61
#define OBJECT_95_7 60
#define OBJECT_95_6 59
#define OBJECT_95_5 58
#define OBJECT_95_4 57
#define OBJECT_95_3 56
#define OBJECT_95_2 55
#define OBJECT_95_1 54
#define OBJECT_95_0 53
#define EXECUTE_CACHE_95_28 31
#define EXECUTE_CACHE_95_26 33
#define EXECUTE_CACHE_95_23 35
#define EXECUTE_CACHE_95_22 37
#define EXECUTE_CACHE_95_21 39
#define EXECUTE_CACHE_95_18 41
#define EXECUTE_CACHE_95_17 43
#define EXECUTE_CACHE_95_14 45
#define EXECUTE_CACHE_95_12 47
#define EXECUTE_CACHE_95_11 49
#define EXECUTE_CACHE_95_9 51
#define FREE_REFERENCES_LABEL_95_0 30
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_95_4);
      goto closure_ccenv_parent_22;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_95_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_95_7);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_95_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_95_10);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_95_19);
      goto lambda_9;

    case 7:
      current_block = (Rpc - LABEL_95_15);
      goto continuation_15;

    case 8:
      current_block = (Rpc - LABEL_95_16);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_95_13);
      goto continuation_17;

    case 10:
      current_block = (Rpc - LABEL_95_20);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_95_24);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_95_27);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_95_25);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenv_parent_29)
DEFLABEL (closure_ccenv_parent_22)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_42;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_41)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_40;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_40;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_39)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_38;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd45.Lng))))
    goto label_38;
  (Wrd37.Obj) = ((Wrd43.pObj) [4]);

DEFLABEL (label_37)
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_95_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  (Wrd12.pObj) = (& (Rsp [1]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd12.pObj)));
  (Rsp [0]) = (Wrd14.Obj);
  Rdl = (& (Rsp [4]));
  goto lambda_9;

DEFLABEL (label_31)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_95_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_95_4])))
    goto label_32;
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_12]));

DEFLABEL (label_32)
  if (! (Rvl == (current_block [OBJECT_95_5])))
    goto label_34;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_14]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_95_13);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_12]));

DEFLABEL (label_33)
  (Wrd11.pObj) = (& (Rsp [1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (Rsp [0]) = (Wrd13.Obj);
  Rdl = (& (Rsp [4]));
  goto lambda_9;

DEFLABEL (label_34)
  if (Rvl == (current_block [OBJECT_95_6]))
    goto label_35;
  (Wrd11.Obj) = (current_block [OBJECT_95_7]);
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_18]));

DEFLABEL (label_35)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_17]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_95_16);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_23]));

DEFLABEL (label_36)
  (Wrd10.pObj) = (& (Rsp [4]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (Rsp [0]) = (Wrd12.Obj);
  Rdl = (& (Rsp [1]));
  goto lambda_9;

DEFLABEL (label_38)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_95_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 2);

DEFLABEL (label_26)
  (Wrd37.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_95_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_95_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_95_15);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_22]));

DEFLABEL (lambda_30)
DEFLABEL (lambda_9)
  DLINK_INTERRUPT_CHECK (25, LABEL_95_19);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_95_20);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_43)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_25]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_95_25);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_28]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_95_24);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd15.Obj) = (current_block [OBJECT_95_8]);
  (Wrd18.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd18.Lng))))
    goto label_48;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_45;

DEFLABEL (label_46)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_44;

DEFLABEL (label_45)
  Rvl = (Rsp [0]);

DEFLABEL (label_44)
DEFLABEL (label_47)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_27]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_9]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_45;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define ENVIRONMENT_LABEL_96_3 12
#define DEBUGGING_LABEL_96_2 11
#define OBJECT_96_1 10
#define OBJECT_96_0 9
#define EXECUTE_CACHE_96_6 7
#define FREE_REFERENCES_LABEL_96_0 6
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_96_4);
      goto closure_ccenv_lambda_1;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_ccenv_lambda_5)
DEFLABEL (closure_ccenv_lambda_1)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_96_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define LABEL_97_5 5
#define LABEL_97_6 7
#define LABEL_97_8 9
#define LABEL_97_10 11
#define LABEL_97_11 13
#define LABEL_97_15 15
#define LABEL_97_16 17
#define LABEL_97_13 19
#define LABEL_97_20 21
#define LABEL_97_19 23
#define ENVIRONMENT_LABEL_97_3 49
#define DEBUGGING_LABEL_97_2 48
#define OBJECT_97_8 47
#define OBJECT_97_7 46
#define OBJECT_97_6 45
#define OBJECT_97_5 44
#define OBJECT_97_4 43
#define OBJECT_97_3 42
#define OBJECT_97_2 41
#define OBJECT_97_1 40
#define OBJECT_97_0 39
#define EXECUTE_CACHE_97_18 25
#define EXECUTE_CACHE_97_21 27
#define EXECUTE_CACHE_97_17 29
#define EXECUTE_CACHE_97_14 31
#define EXECUTE_CACHE_97_12 33
#define EXECUTE_CACHE_97_9 35
#define EXECUTE_CACHE_97_7 37
#define FREE_REFERENCES_LABEL_97_0 24
#define NUMBER_OF_LINKER_SECTIONS_97_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_97_4);
      goto lookup_dbg_variable_20;

    case 1:
      current_block = (Rpc - LABEL_97_5);
      goto loop_18;

    case 2:
      current_block = (Rpc - LABEL_97_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_97_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_97_10);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_97_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_97_15);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_97_16);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_97_13);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_97_20);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_97_19);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_dbg_variable_24)
DEFLABEL (lookup_dbg_variable_20)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_18;

DEFLABEL (loop_25)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_97_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_97_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd11.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd12.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_26)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_97_8);
  (Wrd5.Obj) = Rvl;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_34;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_34;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd17.Lng))))
    goto label_34;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd9.pObj) = (& ((Wrd15.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_97_11);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_97_1])))
    goto label_27;
  (Wrd30.Obj) = (Rsp [2]);
  (Rsp [7]) = (Wrd30.Obj);
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_27)
  if (! (Rvl == (current_block [OBJECT_97_2])))
    goto label_30;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd29.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_97_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_6]), 1);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_97_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [7]) = (Wrd7.Obj);
  Rsp = (& (Rsp [7]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_8]), 1);

DEFLABEL (label_29)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_97_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_97_20);
  goto label_28;

DEFLABEL (label_30)
  if (! (Rvl == (current_block [OBJECT_97_3])))
    goto label_31;
  (Wrd23.Obj) = (Rsp [1]);
  (Rsp [7]) = (Wrd23.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_14]));

DEFLABEL (label_31)
  if (Rvl == (current_block [OBJECT_97_4]))
    goto label_32;
  (Wrd13.Obj) = (current_block [OBJECT_97_5]);
  (Rsp [6]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [7]) = (Wrd14.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_17]));

DEFLABEL (label_32)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_97_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_97_15);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto loop_18;

DEFLABEL (label_34)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_0]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define LABEL_98_5 5
#define LABEL_98_6 7
#define LABEL_98_8 9
#define LABEL_98_10 11
#define LABEL_98_11 13
#define LABEL_98_17 15
#define LABEL_98_18 17
#define LABEL_98_15 19
#define LABEL_98_14 21
#define LABEL_98_13 23
#define LABEL_98_22 25
#define LABEL_98_25 27
#define LABEL_98_21 29
#define LABEL_98_23 31
#define LABEL_98_27 33
#define LABEL_98_28 35
#define ENVIRONMENT_LABEL_98_3 67
#define DEBUGGING_LABEL_98_2 66
#define OBJECT_98_10 65
#define OBJECT_98_9 64
#define OBJECT_98_8 63
#define OBJECT_98_7 62
#define OBJECT_98_6 61
#define OBJECT_98_5 60
#define OBJECT_98_4 59
#define OBJECT_98_3 58
#define OBJECT_98_2 57
#define OBJECT_98_1 56
#define OBJECT_98_0 55
#define EXECUTE_CACHE_98_29 37
#define EXECUTE_CACHE_98_24 39
#define EXECUTE_CACHE_98_20 41
#define EXECUTE_CACHE_98_26 43
#define EXECUTE_CACHE_98_19 45
#define EXECUTE_CACHE_98_16 47
#define EXECUTE_CACHE_98_12 49
#define EXECUTE_CACHE_98_9 51
#define EXECUTE_CACHE_98_7 53
#define FREE_REFERENCES_LABEL_98_0 36
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_98_4);
      goto dbg_variable_reference_type_27;

    case 1:
      current_block = (Rpc - LABEL_98_5);
      goto loop_24;

    case 2:
      current_block = (Rpc - LABEL_98_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_98_8);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_98_10);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_98_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_98_17);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_98_18);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_98_15);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_98_14);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_98_13);
      goto continuation_20;

    case 11:
      current_block = (Rpc - LABEL_98_22);
      goto lambda_2;

    case 12:
      current_block = (Rpc - LABEL_98_25);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_98_21);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_98_23);
      goto continuation_0;

    case 15:
      current_block = (Rpc - LABEL_98_27);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_98_28);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_variable_reference_type_31)
DEFLABEL (dbg_variable_reference_type_27)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_24;

DEFLABEL (loop_32)
DEFLABEL (loop_24)
  INTERRUPT_CHECK (26, LABEL_98_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_98_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd11.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd12.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_34)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_98_8);
  (Wrd5.Obj) = Rvl;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_41;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_41;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd17.Lng))))
    goto label_41;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd9.pObj) = (& ((Wrd15.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_40)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_98_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_98_1]))
    goto label_39;
  if (Rvl == (current_block [OBJECT_98_2]))
    goto label_37;
  if (! (Rvl == (current_block [OBJECT_98_3])))
    goto label_35;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_98_15);
  (Rsp [7]) = Rvl;
  Rsp = (& (Rsp [7]));
  goto lambda_2;

DEFLABEL (label_35)
  if (Rvl == (current_block [OBJECT_98_4]))
    goto label_36;
  (Wrd13.Obj) = (current_block [OBJECT_98_5]);
  (Rsp [6]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [7]) = (Wrd14.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_19]));

DEFLABEL (label_36)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_18]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_98_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_98_17);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto loop_24;

DEFLABEL (label_37)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_14]))));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_38)
  (Wrd35.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd36.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_39)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_38;

DEFLABEL (label_41)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_0]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_98_14);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_6]), 1);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_98_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;

DEFLABEL (label_42)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_8]), 1);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_98_27);
  (Rsp [7]) = Rvl;
  Rsp = (& (Rsp [7]));
  goto lambda_2;

DEFLABEL (label_43)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_98_7]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_98_25);
  goto label_42;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_98_13);
  (Rsp [7]) = Rvl;
  Rsp = (& (Rsp [7]));
  goto lambda_2;

DEFLABEL (lambda_33)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_98_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_24]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_98_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  Rvl = (current_block [OBJECT_98_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_28]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_29]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_98_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  Rvl = (current_block [OBJECT_98_10]);
  goto label_45;

DEFLABEL (label_46)
  Rvl = (current_block [OBJECT_98_1]);

DEFLABEL (label_45)
DEFLABEL (label_47)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_5 5
#define LABEL_99_7 7
#define LABEL_99_8 9
#define LABEL_99_10 11
#define ENVIRONMENT_LABEL_99_3 23
#define DEBUGGING_LABEL_99_2 22
#define OBJECT_99_2 21
#define OBJECT_99_1 20
#define OBJECT_99_0 19
#define EXECUTE_CACHE_99_11 13
#define EXECUTE_CACHE_99_9 15
#define EXECUTE_CACHE_99_6 17
#define FREE_REFERENCES_LABEL_99_0 12
#define NUMBER_OF_LINKER_SECTIONS_99_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_99_4);
      goto assignable_dbg_variableP_5;

    case 1:
      current_block = (Rpc - LABEL_99_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_99_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_99_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_99_10);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assignable_dbg_variableP_9)
DEFLABEL (assignable_dbg_variableP_5)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_99_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_99_8);
  (Wrd5.Obj) = Rvl;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_15;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_15;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd17.Lng))))
    goto label_15;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd9.pObj) = (& ((Wrd15.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_99_7);
  if (Rvl == (current_block [OBJECT_99_0]))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_99_1]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_2]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define LABEL_100_5 5
#define LABEL_100_7 7
#define LABEL_100_9 9
#define LABEL_100_10 11
#define LABEL_100_12 13
#define LABEL_100_15 15
#define LABEL_100_14 17
#define LABEL_100_17 19
#define ENVIRONMENT_LABEL_100_3 43
#define DEBUGGING_LABEL_100_2 42
#define OBJECT_100_10 41
#define OBJECT_100_9 40
#define OBJECT_100_8 39
#define OBJECT_100_7 38
#define OBJECT_100_6 37
#define OBJECT_100_5 36
#define OBJECT_100_4 35
#define OBJECT_100_3 34
#define OBJECT_100_2 33
#define OBJECT_100_1 32
#define OBJECT_100_0 31
#define EXECUTE_CACHE_100_16 21
#define EXECUTE_CACHE_100_13 23
#define EXECUTE_CACHE_100_11 25
#define EXECUTE_CACHE_100_8 27
#define EXECUTE_CACHE_100_6 29
#define FREE_REFERENCES_LABEL_100_0 20
#define NUMBER_OF_LINKER_SECTIONS_100_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_100_4);
      goto assign_dbg_variableB_16;

    case 1:
      current_block = (Rpc - LABEL_100_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_100_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_100_9);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_100_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_100_12);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_100_15);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_100_14);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_100_17);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assign_dbg_variableB_20)
DEFLABEL (assign_dbg_variableB_16)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_100_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd11.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd12.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_100_7);
  (Wrd5.Obj) = Rvl;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_29;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_29;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd17.Lng))))
    goto label_29;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd9.pObj) = (& ((Wrd15.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_100_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_100_1])))
    goto label_24;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd23.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_100_12);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_7]), 1);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_100_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_9]), 2);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_100_17);
  Rvl = (current_block [OBJECT_100_10]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_100_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_100_15);
  goto label_22;

DEFLABEL (label_24)
  if (Rvl == (current_block [OBJECT_100_2]))
    goto label_26;
  if (Rvl == (current_block [OBJECT_100_3]))
    goto label_26;
  if (Rvl == (current_block [OBJECT_100_4]))
    goto label_26;
  (Wrd13.Obj) = (current_block [OBJECT_100_6]);
  (Rsp [6]) = (Wrd13.Obj);
  goto label_25;

DEFLABEL (label_26)
  (Wrd16.Obj) = (current_block [OBJECT_100_5]);
  (Rsp [6]) = (Wrd16.Obj);

DEFLABEL (label_25)
DEFLABEL (label_27)
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [7]) = (Wrd17.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_13]));

DEFLABEL (label_29)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define LABEL_101_5 5
#define ENVIRONMENT_LABEL_101_3 12
#define DEBUGGING_LABEL_101_2 11
#define EXECUTE_CACHE_101_7 7
#define EXECUTE_CACHE_101_6 9
#define FREE_REFERENCES_LABEL_101_0 6
#define NUMBER_OF_LINKER_SECTIONS_101_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_101_4);
      goto dbg_block_name_2;

    case 1:
      current_block = (Rpc - LABEL_101_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_name_5)
DEFLABEL (dbg_block_name_2)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_101_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_7]));

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define LABEL_102_5 5
#define ENVIRONMENT_LABEL_102_3 12
#define DEBUGGING_LABEL_102_2 11
#define EXECUTE_CACHE_102_7 7
#define EXECUTE_CACHE_102_6 9
#define FREE_REFERENCES_LABEL_102_0 6
#define NUMBER_OF_LINKER_SECTIONS_102_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
uenvir_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_102_4);
      goto dbg_block_source_code_2;

    case 1:
      current_block = (Rpc - LABEL_102_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_source_code_5)
DEFLABEL (dbg_block_source_code_2)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_102_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_7]));

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_10 13
#define LABEL_14 15
#define LABEL_15 17
#define LABEL_19 19
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_18 25
#define LABEL_20 27
#define LABEL_21 29
#define LABEL_22 31
#define ENVIRONMENT_LABEL_3 67
#define DEBUGGING_LABEL_2 66
#define PURIFICATION_ROOT 65
#define OBJECT_20 64
#define OBJECT_19 63
#define OBJECT_18 62
#define OBJECT_17 61
#define OBJECT_16 60
#define OBJECT_15 59
#define OBJECT_14 58
#define OBJECT_13 57
#define OBJECT_12 56
#define OBJECT_11 55
#define OBJECT_10 54
#define OBJECT_9 53
#define OBJECT_8 52
#define OBJECT_7 51
#define OBJECT_6 50
#define OBJECT_5 49
#define OBJECT_4 48
#define OBJECT_3 47
#define OBJECT_2 46
#define OBJECT_1 45
#define OBJECT_0 44
#define FREE_REFERENCE_1 33
#define FREE_REFERENCE_0 34
#define GLOBAL_EXECUTE_CACHE_13 36
#define GLOBAL_EXECUTE_CACHE_12 38
#define GLOBAL_EXECUTE_CACHE_9 40
#define GLOBAL_EXECUTE_CACHE_5 42
#define FREE_REFERENCES_LABEL_0 32
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
uenvir_so_75b126963628380c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd12;
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
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_14);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_15);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto label_18;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto label_19;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto expression_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_13)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_21])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_19)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_18)
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
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
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
	2,
	1,
	1,
	1,
	1,
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
	2,
	2,
	2,
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	0,
	2,
	2,
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
    if (counter > 102)
      goto label_17;
    blocks = (current_block [OBJECT_20]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_20])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_17)
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
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-4]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_23;
  Wrd8 = Wrd12;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-4]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_21;
  Wrd8 = Wrd12;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_19]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd9.pObj));

DEFLABEL (label_15)
  (Wrd8.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd9.pObj));

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_uenvir_so_75b126963628380c [102] =
  {
    { "uenvir_so_code_1", 3, uenvir_so_code_1 },
    { "uenvir_so_code_2", 2, uenvir_so_code_2 },
    { "uenvir_so_code_3", 1, uenvir_so_code_3 },
    { "uenvir_so_code_4", 4, uenvir_so_code_4 },
    { "uenvir_so_code_5", 4, uenvir_so_code_5 },
    { "uenvir_so_code_6", 4, uenvir_so_code_6 },
    { "uenvir_so_code_7", 4, uenvir_so_code_7 },
    { "uenvir_so_code_8", 8, uenvir_so_code_8 },
    { "uenvir_so_code_9", 4, uenvir_so_code_9 },
    { "uenvir_so_code_10", 2, uenvir_so_code_10 },
    { "uenvir_so_code_11", 4, uenvir_so_code_11 },
    { "uenvir_so_code_12", 2, uenvir_so_code_12 },
    { "uenvir_so_code_13", 4, uenvir_so_code_13 },
    { "uenvir_so_code_14", 2, uenvir_so_code_14 },
    { "uenvir_so_code_15", 4, uenvir_so_code_15 },
    { "uenvir_so_code_16", 2, uenvir_so_code_16 },
    { "uenvir_so_code_17", 4, uenvir_so_code_17 },
    { "uenvir_so_code_18", 4, uenvir_so_code_18 },
    { "uenvir_so_code_19", 4, uenvir_so_code_19 },
    { "uenvir_so_code_20", 4, uenvir_so_code_20 },
    { "uenvir_so_code_21", 4, uenvir_so_code_21 },
    { "uenvir_so_code_22", 4, uenvir_so_code_22 },
    { "uenvir_so_code_23", 4, uenvir_so_code_23 },
    { "uenvir_so_code_24", 1, uenvir_so_code_24 },
    { "uenvir_so_code_25", 3, uenvir_so_code_25 },
    { "uenvir_so_code_26", 3, uenvir_so_code_26 },
    { "uenvir_so_code_27", 1, uenvir_so_code_27 },
    { "uenvir_so_code_28", 1, uenvir_so_code_28 },
    { "uenvir_so_code_29", 1, uenvir_so_code_29 },
    { "uenvir_so_code_30", 9, uenvir_so_code_30 },
    { "uenvir_so_code_31", 2, uenvir_so_code_31 },
    { "uenvir_so_code_32", 1, uenvir_so_code_32 },
    { "uenvir_so_code_33", 1, uenvir_so_code_33 },
    { "uenvir_so_code_34", 3, uenvir_so_code_34 },
    { "uenvir_so_code_35", 3, uenvir_so_code_35 },
    { "uenvir_so_code_36", 4, uenvir_so_code_36 },
    { "uenvir_so_code_37", 2, uenvir_so_code_37 },
    { "uenvir_so_code_38", 2, uenvir_so_code_38 },
    { "uenvir_so_code_39", 1, uenvir_so_code_39 },
    { "uenvir_so_code_40", 2, uenvir_so_code_40 },
    { "uenvir_so_code_41", 3, uenvir_so_code_41 },
    { "uenvir_so_code_42", 3, uenvir_so_code_42 },
    { "uenvir_so_code_43", 5, uenvir_so_code_43 },
    { "uenvir_so_code_44", 9, uenvir_so_code_44 },
    { "uenvir_so_code_45", 12, uenvir_so_code_45 },
    { "uenvir_so_code_46", 11, uenvir_so_code_46 },
    { "uenvir_so_code_47", 2, uenvir_so_code_47 },
    { "uenvir_so_code_48", 4, uenvir_so_code_48 },
    { "uenvir_so_code_49", 2, uenvir_so_code_49 },
    { "uenvir_so_code_50", 2, uenvir_so_code_50 },
    { "uenvir_so_code_51", 5, uenvir_so_code_51 },
    { "uenvir_so_code_52", 4, uenvir_so_code_52 },
    { "uenvir_so_code_53", 2, uenvir_so_code_53 },
    { "uenvir_so_code_54", 1, uenvir_so_code_54 },
    { "uenvir_so_code_55", 2, uenvir_so_code_55 },
    { "uenvir_so_code_56", 3, uenvir_so_code_56 },
    { "uenvir_so_code_57", 1, uenvir_so_code_57 },
    { "uenvir_so_code_58", 3, uenvir_so_code_58 },
    { "uenvir_so_code_59", 17, uenvir_so_code_59 },
    { "uenvir_so_code_60", 1, uenvir_so_code_60 },
    { "uenvir_so_code_61", 1, uenvir_so_code_61 },
    { "uenvir_so_code_62", 1, uenvir_so_code_62 },
    { "uenvir_so_code_63", 1, uenvir_so_code_63 },
    { "uenvir_so_code_64", 4, uenvir_so_code_64 },
    { "uenvir_so_code_65", 17, uenvir_so_code_65 },
    { "uenvir_so_code_66", 13, uenvir_so_code_66 },
    { "uenvir_so_code_67", 3, uenvir_so_code_67 },
    { "uenvir_so_code_68", 34, uenvir_so_code_68 },
    { "uenvir_so_code_69", 2, uenvir_so_code_69 },
    { "uenvir_so_code_70", 12, uenvir_so_code_70 },
    { "uenvir_so_code_71", 7, uenvir_so_code_71 },
    { "uenvir_so_code_72", 5, uenvir_so_code_72 },
    { "uenvir_so_code_73", 5, uenvir_so_code_73 },
    { "uenvir_so_code_74", 4, uenvir_so_code_74 },
    { "uenvir_so_code_75", 5, uenvir_so_code_75 },
    { "uenvir_so_code_76", 7, uenvir_so_code_76 },
    { "uenvir_so_code_77", 6, uenvir_so_code_77 },
    { "uenvir_so_code_78", 5, uenvir_so_code_78 },
    { "uenvir_so_code_79", 8, uenvir_so_code_79 },
    { "uenvir_so_code_80", 8, uenvir_so_code_80 },
    { "uenvir_so_code_81", 2, uenvir_so_code_81 },
    { "uenvir_so_code_82", 1, uenvir_so_code_82 },
    { "uenvir_so_code_83", 1, uenvir_so_code_83 },
    { "uenvir_so_code_84", 1, uenvir_so_code_84 },
    { "uenvir_so_code_85", 1, uenvir_so_code_85 },
    { "uenvir_so_code_86", 4, uenvir_so_code_86 },
    { "uenvir_so_code_87", 11, uenvir_so_code_87 },
    { "uenvir_so_code_88", 5, uenvir_so_code_88 },
    { "uenvir_so_code_89", 5, uenvir_so_code_89 },
    { "uenvir_so_code_90", 4, uenvir_so_code_90 },
    { "uenvir_so_code_91", 5, uenvir_so_code_91 },
    { "uenvir_so_code_92", 3, uenvir_so_code_92 },
    { "uenvir_so_code_93", 5, uenvir_so_code_93 },
    { "uenvir_so_code_94", 6, uenvir_so_code_94 },
    { "uenvir_so_code_95", 14, uenvir_so_code_95 },
    { "uenvir_so_code_96", 2, uenvir_so_code_96 },
    { "uenvir_so_code_97", 11, uenvir_so_code_97 },
    { "uenvir_so_code_98", 17, uenvir_so_code_98 },
    { "uenvir_so_code_99", 5, uenvir_so_code_99 },
    { "uenvir_so_code_100", 9, uenvir_so_code_100 },
    { "uenvir_so_code_101", 2, uenvir_so_code_101 },
    { "uenvir_so_code_102", 2, uenvir_so_code_102 }
  };

int
decl_uenvir_so_75b126963628380c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_uenvir_so_75b126963628380c);
  return (0);
}

DECLARE_COMPILED_CODE ("uenvir.so", 15, decl_uenvir_so_75b126963628380c, uenvir_so_75b126963628380c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_uenvir_so_data_75b126963628380c [13377] =
  "\xc0\x01\xcf\x01\xa8\x1a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9"
  "\x02\x07\x28\x0d\xba\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbc\x1d\xb0\x82\x88\x1d\x28\x0d\xbd\x28\x0d\xbe\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x83\x88\x0c\x28\x0d\x1c\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0d\x1c\xb1\x02\x28\xb2"
  "\x28\x0d\x1c\x28\xb3\x28\x0d\x1c\x28\xb6\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb1\x02"
  "\x0d\x1c\x28\x0d\x1c\x28\xb2\x28\x0d\x1c\x28\xb3\x28\x0d\x1c\x28"
  "\xb6\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x86\x88\x0d\x1c\xb1\x02\x28\x0d\x1c\x28\xb2\x28\x0d"
  "\x1c\x28\xb3\x28\x0d\x1c\x28\xb6\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\xb1"
  "\x02\x28\x0d\x1c\x28\xb2\x28\x0d\x1c\x28\xb6\x28\xb3\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\xc2\x1c\x08\xc1\x1c\x07\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\xb1\x02\x28\xb2\x28"
  "\x0d\x1c\x28\xb6\x28\xb3\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1\x02\x28"
  "\xb2\x28\x0d\x1c\x28\xb3\x28\x0d\x1c\x28\xb6\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x28\x0d\x1c\x28\xb2\x28\x0d\x1c\x28\xb3\x28\x0d\x1c"
  "\x28\xb6\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x0d\x1c\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28"
  "\x1b\x28\xb2\x28\x0d\x1c\x28\xb3\x28\x0d\x1c\x28\xb6\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x28\x1b\x28\xb2\x28\x0d\x1c\x28\xb3\x28\x0d\x1c\x28"
  "\xb6\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\xb2\x28\x0d\x1c\x28\xb3"
  "\x28\x0d\x1c\x28\xb6\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x07\x28\x1b\x28\xb2"
  "\x28\xb6\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\xb2\x28\x0d\x1c\x28\xb6"
  "\x28\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\xb2\x28\x0d\x1c\x28\xb6"
  "\x28\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88"
  "\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x1d\x08\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x0d\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x02\x07\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x07"
  "\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x1b\xc2\x1c\x1b\x0d\x1c\x1b\x1b\x9b\xc2\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xc2\x08"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x1b\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xc3\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c"
  "\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\xc2"
  "\x1c\x80\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xc1\x1c\x08\x28\x0d\x1c\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x83\xc1\x1c\x1b\x82\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x81\x1b\x80\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x08\x1d\x0d\x1c\x28\x1b\x28\xb6\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b"
  "\x08\x1d\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x80\x0d\x1c\x1b\x1b\x08\x1d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xc3\x02\xc2\x02\x0d\x1d"
  "\x07\x0c\x1b\x0c\x0d\x24\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x1b\x1b\x80\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x80\x81\x1b\x0c\x0c\x0d\x1c\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x0c\x1b\x0d\x1c\x0c\x0c\x0c\x0d"
  "\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c"
  "\x1b\x81\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0d\x80\x83\x1b\x1b\xb1\x02\x0c\x1b\x1b\x1b\x82"
  "\x1b\x81\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x0d\x1c\x1b\x1b\x81"
  "\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x1b\x0d\x1c\x24\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x81\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x82\x1b\x83\x08\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0c\x1b\x24\x28\x0d\x1c\x28\x0d\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0d\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x81\x83\x0c\x1b\x82\x28\x0d\x28\x0d\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x80\x1b\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82"
  "\x07\x1b\x1b\x81\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x82\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x82\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x82\x1b\x83\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28\x0d\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x0c\x07\x1b\x1b\x1b\x1b\x81\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x0c\x1b\x1b\x1b"
  "\x83\x81\x1b\x82\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x81\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc1\x1c\x0c\xc1\x1c\x0c\x1b\x1b\x0d\x1c\x1b\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x0c\x1b\x0c"
  "\x1b\x1b\x1b\x1b\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x07\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xc2"
  "\x0c\x1b\x0c\x0c\x1b\x1b\x1b\x1b\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb3\x0d\x0d\x0d\x1b"
  "\x17\x0c\x1b\x0d\x0d\x9a\x0d\x1c\x0d\x1b\x0d\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\xb2\x0d\x0d\x0d\x1b"
  "\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0c"
  "\x0d\x0d\x0d\x9a\x83\x82\x81\x9a\x1b\x0d\x1c\x0d\x1b\x84\x1b\x1b"
  "\x1b\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x0d\x1b\x0d\x1b\x0d"
  "\x1b\x0d\x1b\x1b\x1b\x1b\xb6\x0d\xb5\x17\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb4\x2a"
  "\x17\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72"
  "\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x75\x65\x6e\x76\x69\x72\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0d\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x74\x79\x70\x65\x3f\x13\x03\x0d\x73\x74\x61\x63\x6b\x2d\x63"
  "\x63\x65\x6e\x76\x3f\x03\x0f\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63"
  "\x63\x65\x6e\x76\x3f\x03\x12\x08\x81\x85\x02\x11\x06\x81\x85\x02"
  "\x10\x04\x83\x04\x07\x12\x02\x02\x03\x0d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x3f\x04\x14\x69\x6c\x6c\x65\x67\x61\x6c\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x14\x06\x81\x85"
  "\x02\x13\x04\x84\x06\x05\x0e\x02\x0c\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e"
  "\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x09"
  "\x02\x15\x04\x84\x06\x03\x0a\x0a\x02\x18\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x2d\x68\x61\x73\x2d\x70\x61\x72\x65\x6e\x74"
  "\x3f\x0b\x13\x03\x03\x1b\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x2f\x68\x61\x73\x2d\x70\x61\x72\x65\x6e\x74\x3f"
  "\x0c\x03\x03\x18\x73\x74\x61\x63\x6b\x2d\x63\x63\x65\x6e\x76\x2f"
  "\x68\x61\x73\x2d\x70\x61\x72\x65\x6e\x74\x3f\x0d\x04\x03\x1a\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x63\x63\x65\x6e\x76\x2f\x68\x61\x73"
  "\x2d\x70\x61\x72\x65\x6e\x74\x3f\x0e\x07\x19\x0a\x81\x83\x02\x18"
  "\x08\x81\x83\x02\x17\x06\x81\x83\x02\x16\x04\x83\x04\x09\x1c\x0f"
  "\x02\x13\x13\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x70"
  "\x61\x72\x65\x6e\x74\x10\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61"
  "\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x11\x03\x03\x16\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2f\x70\x61\x72\x65\x6e\x74\x12\x03\x03\x13\x73\x74\x61"
  "\x63\x6b\x2d\x63\x63\x65\x6e\x76\x2f\x70\x61\x72\x65\x6e\x74\x13"
  "\x04\x03\x15\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x63\x65\x6e\x76"
  "\x2f\x70\x61\x72\x65\x6e\x74\x14\x08\x1d\x0a\x81\x83\x02\x1c\x08"
  "\x81\x83\x02\x1b\x06\x81\x83\x02\x1a\x04\x83\x04\x09\x1e\x15\x02"
  "\x18\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x62\x6f\x75"
  "\x6e\x64\x2d\x6e\x61\x6d\x65\x73\x16\x13\x02\x26\x73\x79\x73\x74"
  "\x65\x6d\x2d\x67\x6c\x6f\x62\x61\x6c\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x2f\x62\x6f\x75\x6e\x64\x2d\x6e\x61\x6d\x65"
  "\x73\x17\x03\x03\x1b\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x2f\x62\x6f\x75\x6e\x64\x2d\x6e\x61\x6d\x65\x73\x18"
  "\x03\x03\x18\x73\x74\x61\x63\x6b\x2d\x63\x63\x65\x6e\x76\x2f\x62"
  "\x6f\x75\x6e\x64\x2d\x6e\x61\x6d\x65\x73\x19\x04\x03\x1a\x63\x6c"
  "\x6f\x73\x75\x72\x65\x2d\x63\x63\x65\x6e\x76\x2f\x62\x6f\x75\x6e"
  "\x64\x2d\x6e\x61\x6d\x65\x73\x1a\x08\x21\x0a\x81\x83\x02\x20\x08"
  "\x81\x83\x02\x1f\x06\x81\x83\x02\x1e\x04\x83\x04\x09\x1e\x1b\x02"
  "\x08\x18\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x6d\x61"
  "\x63\x72\x6f\x2d\x6e\x61\x6d\x65\x73\x1c\x13\x02\x26\x73\x79\x73"
  "\x74\x65\x6d\x2d\x67\x6c\x6f\x62\x61\x6c\x2d\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x2f\x6d\x61\x63\x72\x6f\x2d\x6e\x61\x6d"
  "\x65\x73\x1d\x03\x03\x1b\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x2f\x6d\x61\x63\x72\x6f\x2d\x6e\x61\x6d\x65\x73"
  "\x1e\x04\x03\x06\x25\x0a\x81\x83\x02\x24\x08\x81\x83\x02\x23\x06"
  "\x81\x83\x02\x22\x04\x83\x04\x09\x1b\x1f\x02\x09\x04\x63\x64\x72"
  "\x20\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x21\x04\x63\x61\x72\x22"
  "\x03\x16\x04\x18\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d"
  "\x73\x61\x66\x65\x2d\x6c\x6f\x6f\x6b\x75\x70\x23\x03\x1b\x75\x6e"
  "\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x74\x72\x61\x70\x3f\x24\x04\x2d\x12\x81\x85\x02\x2c"
  "\x10\x81\x89\x02\x2b\x0e\x81\x89\x02\x2a\x0c\x81\x87\x02\x29\x0a"
  "\x81\x8b\x02\x28\x08\x81\x87\x02\x27\x06\x81\x83\x02\x26\x04\x83"
  "\x04\x11\x20\x25\x02\x0a\x08\x75\x6e\x6b\x6e\x6f\x77\x6e\x26\x16"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x73\x27\x13\x03\x03\x19\x69\x63\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x61\x72\x67\x75\x6d\x65\x6e"
  "\x74\x73\x28\x04\x03\x03\x16\x73\x74\x61\x63\x6b\x2d\x63\x63\x65"
  "\x6e\x76\x2f\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x29\x06\x31\x0a"
  "\x81\x83\x02\x30\x08\x81\x83\x02\x2f\x06\x81\x83\x02\x2e\x04\x83"
  "\x04\x09\x1b\x2a\x02\x0b\x03\x13\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x2d\x6c\x61\x6d\x62\x64\x61\x2b\x03\x0c\x6c\x61\x6d"
  "\x62\x64\x61\x2d\x6e\x61\x6d\x65\x03\x33\x06\x81\x83\x02\x32\x04"
  "\x83\x04\x05\x0d\x2c\x02\x0c\x2b\x13\x03\x03\x16\x69\x63\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x6c\x61\x6d\x62\x64"
  "\x61\x2d\x03\x03\x13\x73\x74\x61\x63\x6b\x2d\x63\x63\x65\x6e\x76"
  "\x2f\x6c\x61\x6d\x62\x64\x61\x2e\x04\x03\x15\x63\x6c\x6f\x73\x75"
  "\x72\x65\x2d\x63\x63\x65\x6e\x76\x2f\x6c\x61\x6d\x62\x64\x61\x2f"
  "\x07\x37\x0a\x81\x83\x02\x36\x08\x81\x83\x02\x35\x06\x81\x83\x02"
  "\x34\x04\x83\x04\x09\x1c\x30\x02\x0d\x08\x75\x6e\x62\x6f\x75\x6e"
  "\x64\x31\x04\x1b\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x79\x70\x65\x32\x02"
  "\x39\x06\x81\x85\x02\x38\x04\x84\x06\x05\x0d\x33\x02\x0e\x32\x03"
  "\x19\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3f\x34\x03\x04\x27\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x2f\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74"
  "\x79\x70\x65\x35\x03\x04\x1b\x73\x74\x61\x63\x6b\x2d\x63\x63\x65"
  "\x6e\x76\x2f\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x79\x70"
  "\x65\x36\x04\x04\x1d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x63\x65"
  "\x6e\x76\x2f\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x79\x70"
  "\x65\x37\x08\x3d\x0a\x81\x85\x02\x3c\x08\x81\x85\x02\x3b\x06\x81"
  "\x85\x02\x3a\x04\x84\x06\x09\x1c\x38\x02\x0f\x0b\x75\x6e\x61\x73"
  "\x73\x69\x67\x6e\x65\x64\x39\x06\x6d\x61\x63\x72\x6f\x3a\x31\x04"
  "\x32\x04\x17\x65\x72\x72\x6f\x72\x3a\x75\x6e\x62\x6f\x75\x6e\x64"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x3b\x04\x14\x65\x72\x72\x6f"
  "\x72\x3a\x6d\x61\x63\x72\x6f\x2d\x62\x69\x6e\x64\x69\x6e\x67\x3c"
  "\x04\x3f\x06\x81\x85\x02\x3e\x04\x84\x06\x05\x13\x3d\x02\x10\x04"
  "\x23\x03\x24\x03\x16\x6d\x61\x63\x72\x6f\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x3f\x3e\x04\x1a\x65\x72\x72"
  "\x6f\x72\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x04\x3c\x06\x43\x0a\x81\x87\x02\x42\x08"
  "\x81\x87\x02\x41\x06\x81\x85\x02\x40\x04\x84\x06\x09\x17\x3f\x02"
  "\x11\x3a\x39\x31\x04\x32\x04\x3c\x04\x13\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x2d\x6c\x6f\x6f\x6b\x75\x70\x40\x04\x45\x06"
  "\x81\x87\x02\x44\x04\x85\x08\x05\x12\x41\x02\x12\x3a\x04\x32\x04"
  "\x23\x03\x3e\x03\x21\x6d\x61\x63\x72\x6f\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x2d\x74\x72\x61\x6e\x73\x66"
  "\x6f\x72\x6d\x65\x72\x05\x49\x0a\x81\x83\x02\x48\x08\x81\x85\x02"
  "\x47\x06\x81\x85\x02\x46\x04\x84\x06\x09\x16\x42\x02\x13\x23\x03"
  "\x34\x03\x04\x24\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x73\x61\x66\x65"
  "\x2d\x6c\x6f\x6f\x6b\x75\x70\x43\x03\x04\x18\x73\x74\x61\x63\x6b"
  "\x2d\x63\x63\x65\x6e\x76\x2f\x73\x61\x66\x65\x2d\x6c\x6f\x6f\x6b"
  "\x75\x70\x44\x04\x04\x1a\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x63"
  "\x65\x6e\x76\x2f\x73\x61\x66\x65\x2d\x6c\x6f\x6f\x6b\x75\x70\x45"
  "\x08\x4d\x0a\x81\x85\x02\x4c\x08\x81\x85\x02\x4b\x06\x81\x85\x02"
  "\x4a\x04\x84\x06\x09\x1c\x46\x02\x14\x18\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x2d\x61\x73\x73\x69\x67\x6e\x61\x62\x6c\x65"
  "\x3f\x47\x03\x34\x03\x04\x24\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x61"
  "\x73\x73\x69\x67\x6e\x61\x62\x6c\x65\x3f\x48\x03\x04\x18\x73\x74"
  "\x61\x63\x6b\x2d\x63\x63\x65\x6e\x76\x2f\x61\x73\x73\x69\x67\x6e"
  "\x61\x62\x6c\x65\x3f\x49\x04\x04\x1a\x63\x6c\x6f\x73\x75\x72\x65"
  "\x2d\x63\x63\x65\x6e\x76\x2f\x61\x73\x73\x69\x67\x6e\x61\x62\x6c"
  "\x65\x3f\x4a\x08\x51\x0a\x81\x85\x02\x50\x08\x81\x85\x02\x4f\x06"
  "\x81\x85\x02\x4e\x04\x84\x06\x09\x1c\x4b\x02\x15\x14\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x61\x73\x73\x69\x67\x6e\x21"
  "\x4c\x03\x34\x03\x05\x20\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x61\x73"
  "\x73\x69\x67\x6e\x21\x4d\x03\x05\x14\x73\x74\x61\x63\x6b\x2d\x63"
  "\x63\x65\x6e\x76\x2f\x61\x73\x73\x69\x67\x6e\x21\x4e\x04\x05\x16"
  "\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x63\x65\x6e\x76\x2f\x61\x73"
  "\x73\x69\x67\x6e\x21\x4f\x08\x55\x0a\x81\x87\x02\x54\x08\x81\x87"
  "\x02\x53\x06\x81\x87\x02\x52\x04\x85\x08\x09\x1c\x50\x02\x16\x17"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x64\x65\x66\x69"
  "\x6e\x61\x62\x6c\x65\x3f\x51\x03\x34\x03\x04\x03\x05\x59\x0a\x81"
  "\x85\x02\x58\x08\x81\x85\x02\x57\x06\x81\x85\x02\x56\x04\x84\x06"
  "\x09\x17\x52\x02\x17\x13\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2d\x64\x65\x66\x69\x6e\x65\x53\x03\x34\x03\x05\x1f\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x2f\x64\x65\x66\x69\x6e\x65\x54\x04\x03\x04"
  "\x11\x07\x5d\x0a\x81\x87\x02\x5c\x08\x81\x87\x02\x5b\x06\x81\x87"
  "\x02\x5a\x04\x85\x08\x09\x1a\x55\x02\x18\x19\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x2d\x64\x65\x66\x69\x6e\x65\x2d\x6d\x61"
  "\x63\x72\x6f\x56\x03\x34\x03\x05\x25\x69\x6e\x74\x65\x72\x70\x72"
  "\x65\x74\x65\x72\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x2f\x64\x65\x66\x69\x6e\x65\x2d\x6d\x61\x63\x72\x6f\x57\x04\x03"
  "\x04\x11\x07\x61\x0a\x81\x87\x02\x60\x08\x81\x87\x02\x5f\x06\x81"
  "\x87\x02\x5e\x04\x85\x08\x09\x1a\x58\x02\x19\x62\x04\x83\x04\x03"
  "\x59\x02\x1a\x0f\x6d\x61\x70\x2d\x65\x6e\x74\x72\x79\x2f\x6e\x61"
  "\x6d\x65\x5a\x08\x6f\x62\x6a\x65\x63\x74\x3f\x5b\x03\x04\x0c\x77"
  "\x61\x6c\x6b\x2d\x67\x6c\x6f\x62\x61\x6c\x5c\x02\x65\x08\x81\x83"
  "\x02\x64\x06\x81\x81\x02\x63\x04\x82\x02\x07\x10\x5d\x02\x1b\x5a"
  "\x3e\x03\x04\x5c\x02\x68\x08\x81\x83\x02\x67\x06\x81\x81\x02\x66"
  "\x04\x82\x02\x07\x10\x5e\x02\x1c\x69\x04\x83\x04\x03\x5f\x02\x1d"
  "\x6a\x04\x84\x06\x03\x60\x02\x1e\x6b\x04\x84\x06\x03\x61\x02\x1f"
  "\x02\x03\x19\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x69\x6e\x74\x65"
  "\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x03\x16\x73\x70\x65"
  "\x63\x69\x61\x6c\x2d\x75\x6e\x62\x6f\x75\x6e\x64\x2d\x6e\x61\x6d"
  "\x65\x3f\x62\x03\x19\x6d\x61\x70\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x74\x72\x61\x70\x2d\x76\x61\x6c\x75\x65\x63\x03\x18"
  "\x75\x6e\x62\x6f\x75\x6e\x64\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x2d\x74\x72\x61\x70\x3f\x64\x05\x74\x14\x81\x87\x02\x73\x12"
  "\x81\x87\x02\x72\x10\x81\x87\x02\x71\x0e\x81\x83\x02\x70\x0c\x81"
  "\x85\x02\x6f\x0a\x81\x85\x02\x6e\x08\x81\x85\x02\x6d\x06\x81\x87"
  "\x02\x6c\x04\x84\x06\x13\x21\x65\x02\x20\x11\x70\x61\x63\x6b\x61"
  "\x67\x65\x2d\x6e\x61\x6d\x65\x2d\x74\x61\x67\x02\x76\x06\x81\x83"
  "\x02\x75\x04\x83\x04\x05\x0b\x66\x02\x21\x13\x77\x04\x83\x04\x03"
  "\x67\x02\x22\x13\x78\x04\x83\x04\x03\x68\x02\x23\x18\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x20\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x03\x34\x04\x17\x65\x72\x72\x6f\x72\x3a\x77\x72"
  "\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x64\x61\x74\x75\x6d\x03\x7b"
  "\x08\x81\x83\x02\x7a\x06\x81\x83\x02\x79\x04\x83\x04\x07\x10\x69"
  "\x02\x24\x18\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x20\x74\x79\x70\x65\x3a\x32\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x6a\x3a\x07\x6e\x6f\x72\x6d\x61\x6c\x6b"
  "\x39\x31\x17\x6c\x65\x78\x69\x63\x61\x6c\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x2d\x74\x79\x70\x65\x05\x06\x65\x72\x72\x6f\x72"
  "\x6c\x02\x7e\x08\x81\x85\x02\x7d\x06\x81\x83\x02\x7c\x04\x84\x06"
  "\x07\x12\x6d\x02\x25\x22\x21\x17\x73\x61\x66\x65\x2d\x6c\x65\x78"
  "\x69\x63\x61\x6c\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x03\x13"
  "\x6d\x61\x70\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72"
  "\x61\x70\x6e\x02\x82\x01\x0a\x81\x83\x02\x81\x01\x08\x81\x87\x02"
  "\x80\x01\x06\x81\x87\x02\x7f\x04\x84\x06\x09\x13\x6f\x02\x26\x3a"
  "\x31\x04\x35\x04\x3b\x04\x3c\x04\x84\x01\x06\x81\x85\x02\x83\x01"
  "\x04\x84\x06\x05\x12\x3c\x02\x27\x02\x13\x6c\x65\x78\x69\x63\x61"
  "\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x86\x01\x06\x81"
  "\x87\x02\x85\x01\x04\x85\x08\x05\x0a\x3b\x02\x28\x11\x6c\x6f\x63"
  "\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x31\x87\x01"
  "\x04\x85\x08\x03\x70\x02\x29\x31\x03\x23\x6d\x61\x6b\x65\x2d\x75"
  "\x6e\x6d\x61\x70\x70\x65\x64\x2d\x6d\x61\x63\x72\x6f\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x02\x89\x01\x06"
  "\x81\x87\x02\x88\x01\x04\x85\x08\x05\x0c\x71\x02\x2a\x5b\x5a\x03"
  "\x05\x1c\x6d\x61\x70\x2d\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x72\x02\x8c"
  "\x01\x08\x81\x87\x02\x8b\x01\x06\x81\x83\x02\x8a\x01\x04\x83\x04"
  "\x07\x10\x73\x02\x2b\x3e\x5a\x03\x05\x72\x02\x8f\x01\x08\x81\x87"
  "\x02\x8e\x01\x06\x81\x83\x02\x8d\x01\x04\x83\x04\x07\x10\x74\x02"
  "\x2c\x5b\x10\x6d\x61\x70\x2d\x65\x6e\x74\x72\x79\x2f\x76\x61\x6c"
  "\x75\x65\x75\x03\x03\x12\x69\x63\x2d\x65\x78\x74\x65\x72\x6e\x61"
  "\x6c\x2d\x66\x72\x61\x6d\x65\x76\x03\x14\x69\x63\x2d\x66\x72\x61"
  "\x6d\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2a\x77\x06\x17"
  "\x77\x61\x6c\x6b\x2d\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x61\x72\x67\x73\x78\x04\x94\x01\x0c\x81\x89\x02\x93\x01"
  "\x0a\x81\x85\x02\x92\x01\x08\x81\x83\x02\x91\x01\x06\x81\x83\x02"
  "\x90\x01\x04\x83\x04\x0b\x18\x79\x02\x2d\x6a\x12\x73\x79\x73\x74"
  "\x65\x6d\x2d\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x7a\x03\x76"
  "\x06\x78\x04\x08\x61\x70\x70\x65\x6e\x64\x21\x05\x18\x77\x61\x6c"
  "\x6b\x2d\x69\x63\x2d\x66\x72\x61\x6d\x65\x2d\x65\x78\x74\x65\x6e"
  "\x73\x69\x6f\x6e\x7b\x05\x9d\x01\x14\xfd\xff\x03\x9c\x01\x12\xfd"
  "\xff\x03\x9b\x01\x10\x81\x8b\x02\x9a\x01\x0e\xfd\xff\x03\x99\x01"
  "\x0c\xfd\xff\x03\x98\x01\x0a\xff\xff\x03\x97\x01\x08\x81\x89\x02"
  "\x96\x01\x06\x81\x87\x02\x95\x01\x04\x85\x08\x13\x23\x7c\x02\x2e"
  "\x7a\x6a\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x7d\x03\x11\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6c\x61\x6d"
  "\x62\x64\x61\x7e\x03\x14\x6c\x61\x6d\x62\x64\x61\x2d\x6e\x61\x6d"
  "\x65\x73\x2d\x76\x65\x63\x74\x6f\x72\x03\x62\x03\x63\x03\x64\x06"
  "\xa9\x01\x1a\x81\x83\x02\xa8\x01\x18\x81\x93\x02\xa7\x01\x16\x81"
  "\x93\x02\xa6\x01\x14\x81\x95\x02\xa5\x01\x12\x81\x95\x02\xa4\x01"
  "\x10\x81\x95\x02\xa3\x01\x0e\x81\x91\x02\xa2\x01\x0c\x81\x8f\x02"
  "\xa1\x01\x0a\x81\x8b\x02\xa0\x01\x08\x81\x8d\x02\x9f\x01\x06\x81"
  "\x89\x02\x9e\x01\x04\x86\x0a\x19\x2b\x64\x02\x2f\x20\x22\x0d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d\x7f\x6a\x03\x62\x03"
  "\x63\x03\xb4\x01\x18\x81\x83\x02\xb3\x01\x16\x81\x91\x02\xb2\x01"
  "\x14\x81\x91\x02\xb1\x01\x12\x81\x93\x02\xb0\x01\x10\x81\x93\x02"
  "\xaf\x01\x0e\x81\x8f\x02\xae\x01\x0c\x81\x8d\x02\xad\x01\x0a\x81"
  "\x8d\x02\xac\x01\x08\x81\x87\x02\xab\x01\x06\x81\x89\x02\xaa\x01"
  "\x04\x85\x08\x17\x26\x80\x01\x02\x30\x03\x10\x69\x63\x2d\x66\x72"
  "\x61\x6d\x65\x2d\x70\x61\x72\x65\x6e\x74\x81\x01\x03\x34\x03\xb6"
  "\x01\x06\x81\x83\x02\xb5\x01\x04\x83\x04\x05\x0d\x82\x01\x02\x31"
  "\x10\x03\x81\x01\x03\x34\x04\x11\x04\xba\x01\x0a\x81\x85\x02\xb9"
  "\x01\x08\x81\x85\x02\xb8\x01\x06\x81\x83\x02\xb7\x01\x04\x83\x04"
  "\x09\x14\x83\x01\x02\x32\x03\x19\x69\x63\x2d\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x84\x01\x03\x16\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x85\x01\x03\xbc\x01\x06\x81"
  "\x83\x02\xbb\x01\x04\x83\x04\x05\x0d\x86\x01\x02\x33\x03\x84\x01"
  "\x03\x7e\x03\xbe\x01\x06\x81\x83\x02\xbd\x01\x04\x83\x04\x05\x0d"
  "\x87\x01\x02\x34\x03\x77\x03\x7e\x03\x85\x01\x03\x11\x69\x6e\x74"
  "\x65\x72\x6e\x61\x6c\x2d\x6c\x61\x6d\x62\x64\x61\x3f\x88\x01\x05"
  "\xc3\x01\x0c\x81\x83\x02\xc2\x01\x0a\x81\x85\x02\xc1\x01\x08\x81"
  "\x83\x02\xc0\x01\x06\x81\x83\x02\xbf\x01\x04\x83\x04\x0b\x17\x89"
  "\x01\x02\x35\x03\x77\x03\x7e\x03\x85\x01\x03\x88\x01\x05\xc7\x01"
  "\x0a\x81\x87\x02\xc6\x01\x08\x81\x85\x02\xc5\x01\x06\x81\x83\x02"
  "\xc4\x01\x04\x83\x04\x09\x15\x88\x01\x02\x36\x6a\x7a\xc9\x01\x06"
  "\x81\x83\x02\xc8\x01\x04\x83\x04\x05\x0c\x85\x01\x02\x37\x7a\xca"
  "\x01\x04\x83\x04\x03\x7e\x02\x38\x7a\x03\x63\x02\xcc\x01\x06\x81"
  "\x83\x02\xcb\x01\x04\x84\x06\x05\x0c\x7a\x02\x39\x08\x64\x65\x66"
  "\x61\x75\x6c\x74\x63\x08\x1d\x65\x78\x74\x65\x6e\x64\x2d\x74\x6f"
  "\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x8a\x01\x03\x34\x04\x06\x1e\x25\x65\x78\x74\x65\x6e"
  "\x64\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x8b\x01\x04\xcf\x01\x08\x81\x87\x02"
  "\xce\x01\x06\x81\x87\x02\xcd\x01\x04\x85\x04\x07\x15\x8c\x01\x02"
  "\x3a\x1b\x6d\x61\x6b\x65\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x8d\x01\x63\x08"
  "\x06\x8b\x01\x02\xd0\x01\x04\x84\x02\x03\x0d\x8e\x01\x02\x3b\x10"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x20"
  "\x6d\x61\x6b\x65\x2d\x72\x6f\x6f\x74\x2d\x74\x6f\x70\x2d\x6c\x65"
  "\x76\x65\x6c\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x8f"
  "\x01\x63\x7f\x08\x06\x8b\x01\x02\xd3\x01\x08\x81\x89\x02\xd2\x01"
  "\x06\x81\x87\x02\xd1\x01\x04\x84\x02\x07\x14\x7f\x02\x3c\x20\x21"
  "\x11\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e"
  "\x73\x10\x16\x73\x79\x73\x74\x65\x6d\x2d\x6c\x69\x73\x74\x2d\x74"
  "\x6f\x2d\x76\x65\x63\x74\x6f\x72\x13\x15\x23\x5b\x75\x6e\x6e\x61"
  "\x6d\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x5d\x02\x05"
  "\x6c\x69\x73\x74\x63\x10\x6c\x69\x73\x74\x20\x6f\x66\x20\x73\x79"
  "\x6d\x62\x6f\x6c\x73\x08\x73\x79\x6d\x62\x6f\x6c\x3f\x02\x04\x0e"
  "\x6c\x69\x73\x74\x2d\x6f\x66\x2d\x74\x79\x70\x65\x3f\x05\x09\x03"
  "\x07\x6c\x65\x6e\x67\x74\x68\x03\x06\x6c\x69\x73\x74\x3f\x03\x0a"
  "\x6d\x61\x6b\x65\x2d\x6c\x69\x73\x74\x04\x11\x02\x28\x6d\x61\x6b"
  "\x65\x2d\x75\x6e\x6d\x61\x70\x70\x65\x64\x2d\x75\x6e\x61\x73\x73"
  "\x69\x67\x6e\x65\x64\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x74\x72\x61\x70\x05\x0d\x6d\x61\x6b\x65\x2d\x73\x6c\x61\x6d\x62"
  "\x64\x61\x09\xe4\x01\x24\x81\x8f\x02\xe3\x01\x22\x81\x8f\x02\xe2"
  "\x01\x20\x81\x8f\x02\xe1\x01\x1e\x81\x8f\x02\xe0\x01\x1c\x81\x8b"
  "\x02\xdf\x01\x1a\x81\x8d\x02\xde\x01\x18\x81\x8b\x02\xdd\x01\x16"
  "\x81\x89\x02\xdc\x01\x14\x81\x89\x02\xdb\x01\x12\x81\x8b\x02\xda"
  "\x01\x10\x81\x89\x02\xd9\x01\x0e\x81\x89\x02\xd8\x01\x0c\x81\x89"
  "\x02\xd7\x01\x0a\x81\x89\x02\xd6\x01\x08\x81\x89\x02\xd5\x01\x06"
  "\x81\x8b\x02\xd4\x01\x04\x86\x0a\x23\x45\x63\x02\x3d\x24\x23\x5b"
  "\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x29\x73\x74\x61\x63\x6b\x2d\x63\x63\x65\x6e\x76"
  "\x5d\x20\xe5\x01\x04\x85\x08\x03\x11\x02\x3e\x6a\xe6\x01\x04\x83"
  "\x04\x03\x09\x02\x3f\x6a\xe7\x01\x04\x83\x04\x03\x90\x01\x02\x40"
  "\x6a\xe8\x01\x04\x83\x04\x03\x91\x01\x02\x41\x20\x6a\x7d\xec\x01"
  "\x0a\x81\x83\x02\xeb\x01\x08\x81\x83\x02\xea\x01\x06\x81\x83\x02"
  "\xe9\x01\x04\x83\x04\x09\x11\x92\x01\x02\x42\x7d\x18\x49\x6c\x6c"
  "\x65\x67\x61\x6c\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x62"
  "\x6c\x6f\x63\x6b\x22\x49\x6c\x6c\x65\x67\x61\x6c\x20\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x20\x70\x61\x72\x65\x6e\x74"
  "\x20\x62\x6c\x6f\x63\x6b\x03\x69\x63\x93\x01\x06\x73\x74\x61\x63"
  "\x6b\x94\x01\x03\x1b\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65"
  "\x2f\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x95"
  "\x01\x03\x1a\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72"
  "\x79\x2f\x64\x62\x67\x2d\x6f\x62\x6a\x65\x63\x74\x96\x01\x03\x12"
  "\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x3f\x03\x0f\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x3f\x03\x17\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2f\x62\x6c\x6f\x63\x6b\x03\x11\x64\x62\x67\x2d\x62"
  "\x6c\x6f\x63\x6b\x2f\x70\x61\x72\x65\x6e\x74\x97\x01\x03\x14\x64"
  "\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x62\x6c\x6f"
  "\x63\x6b\x98\x01\x03\x0f\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f"
  "\x74\x79\x70\x65\x99\x01\x03\x18\x64\x62\x67\x2d\x62\x6c\x6f\x63"
  "\x6b\x2f\x6c\x61\x79\x6f\x75\x74\x2d\x76\x65\x63\x74\x6f\x72\x9a"
  "\x01\x03\x1a\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f\x69\x63\x2d"
  "\x70\x61\x72\x65\x6e\x74\x2d\x69\x6e\x64\x65\x78\x9b\x01\x04\x6c"
  "\x03\x12\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73\x75"
  "\x72\x65\x3f\x9c\x01\x04\x10\x73\x74\x61\x63\x6b\x2d\x66\x72\x61"
  "\x6d\x65\x2f\x72\x65\x66\x9d\x01\x03\x18\x64\x62\x67\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x6f\x66\x66\x73\x65"
  "\x74\x9e\x01\x05\x11\x6d\x61\x6b\x65\x2d\x73\x74\x61\x63\x6b\x2d"
  "\x63\x63\x65\x6e\x76\x9f\x01\x03\x22\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\xa0\x01\x11\xfd\x01\x24"
  "\x81\x8f\x02\xfc\x01\x22\x81\x91\x02\xfb\x01\x20\x81\x87\x02\xfa"
  "\x01\x1e\x81\x8b\x02\xf9\x01\x1c\x81\x8f\x02\xf8\x01\x1a\x81\x8f"
  "\x02\xf7\x01\x18\x81\x8f\x02\xf6\x01\x16\x81\x89\x02\xf5\x01\x14"
  "\x81\x8d\x02\xf4\x01\x12\x81\x89\x02\xf3\x01\x10\x81\x8b\x02\xf2"
  "\x01\x0e\x81\x89\x02\xf1\x01\x0c\x81\x89\x02\xf0\x01\x0a\x81\x89"
  "\x02\xef\x01\x08\x81\x87\x02\xee\x01\x06\x81\x85\x02\xed\x01\x04"
  "\x84\x06\x23\x4e\xa1\x01\x02\x43\x1d\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x3e"
  "\x62\x6c\x6f\x63\x6b\xa2\x01\x1f\x49\x6c\x6c\x65\x67\x61\x6c\x20"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x70\x61\x72\x65\x6e\x74"
  "\x20\x62\x6c\x6f\x63\x6b\x93\x01\x08\x63\x6c\x6f\x73\x75\x72\x65"
  "\xa3\x01\x3a\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x6f\x62\x74"
  "\x61\x69\x6e\x20\x63\x6c\x6f\x73\x69\x6e\x67\x20\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x28\x6d\x69\x73\x73\x69\x6e\x67"
  "\x20\x62\x6c\x6f\x63\x6b\x20\x69\x6e\x66\x6f\x29\x25\x55\x6e\x61"
  "\x62\x6c\x65\x20\x74\x6f\x20\x6f\x62\x74\x61\x69\x6e\x20\x63\x6c"
  "\x6f\x73\x69\x6e\x67\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x19\x4e\x6f\x74\x20\x61\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x1f\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\xa4\x01\x03\x14\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f"
  "\x05\x6c\x04\x6c\x03\x96\x01\x03\x98\x01\x03\x97\x01\x03\x99\x01"
  "\x03\x1a\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f\x6f\x72\x69\x67"
  "\x69\x6e\x61\x6c\x2d\x70\x61\x72\x65\x6e\x74\x98\x01\x05\x13\x6d"
  "\x61\x6b\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x63\x65\x6e"
  "\x76\x96\x01\x03\xa0\x01\x03\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\xa5\x01\x0c\x8a\x02\x1c\x81\x85\x02"
  "\x89\x02\x1a\x81\x83\x02\x88\x02\x18\x81\x8b\x02\x87\x02\x16\x81"
  "\x83\x02\x86\x02\x14\x81\x87\x02\x85\x02\x12\x81\x85\x02\x84\x02"
  "\x10\x81\x85\x02\x83\x02\x0e\x81\x85\x02\x82\x02\x0c\x81\x83\x02"
  "\x81\x02\x0a\x81\x85\x02\x80\x02\x08\x81\x83\x02\xff\x01\x06\x81"
  "\x83\x02\xfe\x01\x04\x83\x04\x1b\x3d\xa6\x01\x02\x44\x0a\x73\x69"
  "\x6d\x75\x6c\x61\x74\x65\x64\xa7\x01\x6a\x03\x97\x01\x02\x8d\x02"
  "\x08\x81\x83\x02\x8c\x02\x06\x81\x85\x02\x8b\x02\x04\x83\x04\x07"
  "\x11\xa8\x01\x02\x45\x18\x69\x6c\x6c\x65\x67\x61\x6c\x20\x73\x74"
  "\x61\x63\x6b\x2d\x6c\x69\x6e\x6b\x20\x74\x79\x70\x65\x0d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x7d\xa2\x01\x13\x15\x69"
  "\x6c\x6c\x65\x67\x61\x6c\x20\x70\x61\x72\x65\x6e\x74\x20\x62\x6c"
  "\x6f\x63\x6b\x93\x01\xa3\x01\x94\x01\x6a\x03\x97\x01\x03\x95\x01"
  "\x03\x99\x01\x03\x9a\x01\x03\x1b\x73\x74\x61\x63\x6b\x2d\x63\x63"
  "\x65\x6e\x76\x2f\x6e\x6f\x72\x6d\x61\x6c\x2d\x63\x6c\x6f\x73\x75"
  "\x72\x65\xa2\x01\x03\x1c\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f"
  "\x73\x74\x61\x74\x69\x63\x2d\x6c\x69\x6e\x6b\x2d\x69\x6e\x64\x65"
  "\x78\x95\x01\x04\x6c\x03\xa5\x01\x03\xa0\x01\x03\x18\x73\x74\x61"
  "\x63\x6b\x2d\x63\x63\x65\x6e\x76\x2f\x73\x74\x61\x74\x69\x63\x2d"
  "\x6c\x69\x6e\x6b\xa9\x01\x03\x98\x01\x03\x15\x64\x62\x67\x2d\x62"
  "\x6c\x6f\x63\x6b\x2f\x73\x74\x61\x63\x6b\x2d\x6c\x69\x6e\x6b\xaa"
  "\x01\x05\x96\x01\x05\x9f\x01\x03\x14\x64\x62\x67\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\xab\x01\x04\x22"
  "\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x72\x65\x73\x6f"
  "\x6c\x76\x65\x2d\x73\x74\x61\x63\x6b\x2d\x61\x64\x64\x72\x65\x73"
  "\x73\x03\x9e\x01\x12\xaf\x02\x46\x81\x87\x02\xae\x02\x44\x81\x87"
  "\x02\xad\x02\x42\x81\x83\x02\xac\x02\x40\x81\x8b\x02\xab\x02\x3e"
  "\x81\x8d\x02\xaa\x02\x3c\x81\x8d\x02\xa9\x02\x3a\x81\x8d\x02\xa8"
  "\x02\x38\x81\x8b\x02\xa7\x02\x36\x81\x8b\x02\xa6\x02\x34\x81\x8b"
  "\x02\xa5\x02\x32\x81\x8d\x02\xa4\x02\x30\x81\x89\x02\xa3\x02\x2e"
  "\x81\x8b\x02\xa2\x02\x2c\x81\x8d\x02\xa1\x02\x2a\x81\x8b\x02\xa0"
  "\x02\x28\x81\x89\x02\x9f\x02\x26\x81\x8b\x02\x9e\x02\x24\x81\x89"
  "\x02\x9d\x02\x22\x81\x8b\x02\x9c\x02\x20\x81\x89\x02\x9b\x02\x1e"
  "\x81\x89\x02\x9a\x02\x1c\x81\x89\x02\x99\x02\x1a\x81\x8f\x02\x98"
  "\x02\x18\x81\x8b\x02\x97\x02\x16\x81\x89\x02\x96\x02\x14\x81\x8b"
  "\x02\x95\x02\x12\x81\x89\x02\x94\x02\x10\x81\x83\x02\x93\x02\x0e"
  "\x81\x87\x02\x92\x02\x0c\x81\x87\x02\x91\x02\x0a\x81\x8d\x02\x90"
  "\x02\x08\x81\x85\x02\x8f\x02\x06\x81\x83\x02\x8e\x02\x04\x83\x04"
  "\x45\x7a\x9e\x01\x02\x46\x6a\x03\x16\x64\x62\x67\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x73\x6f\x75\x72\x63\x65\x2d\x63\x6f\x64\x65\xac\x01"
  "\x02\xb1\x02\x06\x81\x83\x02\xb0\x02\x04\x83\x04\x05\x0d\xad\x01"
  "\x02\x47\x0b\x69\x6e\x64\x69\x72\x65\x63\x74\x65\x64\xae\x01\x0b"
  "\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\xaf\x01\x26\x6a\x03\xab"
  "\x01\x03\x17\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2f\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x03\x12\x64\x62\x67\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x2f\x74\x79\x70\x65\x26\x03\x17\x64"
  "\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x72\x65\x71"
  "\x75\x69\x72\x65\x64\x03\x13\x64\x62\x67\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2f\x72\x65\x73\x74\x03\x13\x64\x62\x67\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x2f\x76\x61\x6c\x75\x65\xb0\x01\x03"
  "\x12\x64\x62\x67\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x6e\x61"
  "\x6d\x65\xb1\x01\x05\x05\x6d\x61\x70\x2a\x04\x44\x0a\xbd\x02\x1a"
  "\x81\x87\x02\xbc\x02\x18\x81\x87\x02\xbb\x02\x16\x81\x8d\x02\xba"
  "\x02\x14\x81\x8f\x02\xb9\x02\x12\x81\x89\x02\xb8\x02\x10\x81\x85"
  "\x02\xb7\x02\x0e\x81\x89\x02\xb6\x02\x0c\x81\x87\x02\xb5\x02\x0a"
  "\x81\x85\x02\xb4\x02\x08\x81\x83\x02\xb3\x02\x06\x81\x85\x02\xb2"
  "\x02\x04\x83\x04\x19\x35\xb2\x01\x02\x48\x6a\xb1\x01\x0e\x64\x62"
  "\x67\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x3f\xb3\x01\x03\x03\x9a"
  "\x01\x04\x04\x6d\x61\x70\xb4\x01\x04\x18\x6c\x69\x73\x74\x2d\x74"
  "\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x70\x6f\x73\x69\x74\x69\x76"
  "\x65\xb5\x01\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73"
  "\x74\xb6\x01\x05\xc4\x02\x10\x81\x8b\x02\xc3\x02\x0e\x81\x89\x02"
  "\xc2\x02\x0c\x81\x85\x02\xc1\x02\x0a\x81\x8d\x02\xc0\x02\x08\x81"
  "\x87\x02\xbf\x02\x06\x81\x83\x02\xbe\x02\x04\x83\x04\x0f\x20\xb7"
  "\x01\x02\x49\x6a\x06\x1c\x64\x62\x67\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x79\x70"
  "\x65\xb8\x01\x03\x13\x04\x16\x73\x74\x61\x63\x6b\x2d\x63\x63\x65"
  "\x6e\x76\x2f\x67\x65\x74\x2d\x76\x61\x6c\x75\x65\xb9\x01\x04\x32"
  "\x05\xc9\x02\x0c\x81\x85\x02\xc8\x02\x0a\x81\x85\x02\xc7\x02\x08"
  "\x81\x85\x02\xc6\x02\x06\x81\x87\x02\xc5\x02\x04\x84\x06\x0b\x19"
  "\xba\x01\x02\x4a\x6a\x06\x14\x6c\x6f\x6f\x6b\x75\x70\x2d\x64\x62"
  "\x67\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\xbb\x01\x03\x13\x04\xb9"
  "\x01\x04\x23\x05\xce\x02\x0c\x81\x85\x02\xcd\x02\x0a\x81\x85\x02"
  "\xcc\x02\x08\x81\x85\x02\xcb\x02\x06\x81\x87\x02\xca\x02\x04\x84"
  "\x06\x0b\x19\xbc\x01\x02\x4b\x6a\x05\x19\x61\x73\x73\x69\x67\x6e"
  "\x61\x62\x6c\x65\x2d\x64\x62\x67\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x3f\xbd\x01\x03\x13\x04\x47\x04\xd2\x02\x0a\x81\x85\x02\xd1"
  "\x02\x08\x81\x85\x02\xd0\x02\x06\x81\x85\x02\xcf\x02\x04\x84\x06"
  "\x09\x15\xbe\x01\x02\x4c\x6a\x07\x15\x61\x73\x73\x69\x67\x6e\x2d"
  "\x64\x62\x67\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x21\xbf\x01\x03"
  "\x13\x04\xb9\x01\x05\x4c\x05\xd7\x02\x0c\x81\x85\x02\xd6\x02\x0a"
  "\x81\x85\x02\xd5\x02\x08\x81\x85\x02\xd4\x02\x06\x81\x89\x02\xd3"
  "\x02\x04\x85\x08\x0b\x19\xc0\x01\x02\x4d\x22\x21\x6a\x04\x9d\x01"
  "\x03\x6e\x03\xde\x02\x10\x81\x83\x02\xdd\x02\x0e\x81\x87\x02\xdc"
  "\x02\x0c\x81\x87\x02\xdb\x02\x0a\x81\x8b\x02\xda\x02\x08\x81\x89"
  "\x02\xd9\x02\x06\x81\x89\x02\xd8\x02\x04\x84\x06\x0f\x1d\xc1\x01"
  "\x02\x4e\x1d\x49\x6c\x6c\x65\x67\x61\x6c\x20\x73\x74\x61\x74\x69"
  "\x63\x20\x6c\x69\x6e\x6b\x20\x69\x6e\x20\x66\x72\x61\x6d\x65\x0c"
  "\x73\x74\x61\x74\x69\x63\x20\x6c\x69\x6e\x6b\x95\x01\x02\x05\x13"
  "\x66\x69\x6e\x64\x2d\x73\x74\x61\x63\x6b\x2d\x65\x6c\x65\x6d\x65"
  "\x6e\x74\x95\x01\x03\x0f\x73\x74\x61\x63\x6b\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x3f\x05\x6c\x03\x34\x05\xe4\x02\x0e\x81\x85\x02\xe3"
  "\x02\x0c\x81\x85\x02\xe2\x02\x0a\x81\x85\x02\xe1\x02\x08\x81\x83"
  "\x02\xe0\x02\x06\x81\x87\x02\xdf\x02\x04\x83\x04\x0d\x1d\xc2\x01"
  "\x02\x4f\x16\x46\x72\x61\x6d\x65\x20\x6d\x69\x73\x73\x69\x6e\x67"
  "\x20\x63\x6c\x6f\x73\x75\x72\x65\x08\x63\x6c\x6f\x73\x75\x72\x65"
  "\x1f\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f\x6e\x6f\x72\x6d\x61"
  "\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x69\x6e\x64\x65\x78\x02"
  "\x05\x95\x01\x03\x9c\x01\x05\x6c\x04\xe9\x02\x0c\x81\x85\x02\xe8"
  "\x02\x0a\x81\x85\x02\xe7\x02\x08\x81\x83\x02\xe6\x02\x06\x81\x87"
  "\x02\xe5\x02\x04\x83\x04\x0b\x19\xc3\x01\x02\x50\x10\x55\x6e\x61"
  "\x62\x6c\x65\x20\x74\x6f\x20\x66\x69\x6e\x64\x20\x6a\x03\x13\x73"
  "\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x6c\x65\x6e\x67\x74"
  "\x68\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64"
  "\x04\x9d\x01\x06\x11\x66\x69\x6e\x64\x2d\x73\x74\x61\x63\x6b\x2d"
  "\x69\x6e\x64\x65\x78\x9d\x01\x04\x6c\x06\xf1\x02\x12\x81\x8f\x02"
  "\xf0\x02\x10\x81\x91\x02\xef\x02\x0e\x81\x8f\x02\xee\x02\x0c\x81"
  "\x8d\x02\xed\x02\x0a\x81\x89\x02\xec\x02\x08\x81\x8b\x02\xeb\x02"
  "\x06\x81\x87\x02\xea\x02\x04\x85\x08\x11\x24\xc4\x01\x02\x51\x7d"
  "\x03\xaa\x01\x03\x9a\x01\x03\xf9\x02\x12\x81\x8d\x02\xf8\x02\x10"
  "\x81\x91\x02\xf7\x02\x0e\x81\x91\x02\xf6\x02\x0c\x81\x91\x02\xf5"
  "\x02\x0a\x81\x8f\x02\xf4\x02\x08\x81\x8d\x02\xf3\x02\x06\x81\x8d"
  "\x02\xf2\x02\x04\x86\x0a\x11\x1a\xaa\x01\x02\x52\x7d\x03\x9a\x01"
  "\x02\xfb\x02\x06\x81\x83\x02\xfa\x02\x04\x83\x04\x05\x0c\xc5\x01"
  "\x02\x53\x26\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x29\x63\x6c\x6f\x73\x75\x72"
  "\x65\x2d\x63\x63\x65\x6e\x76\x5d\xc6\x01\xfc\x02\x04\x85\x08\x03"
  "\xc7\x01\x02\x54\x6a\xfd\x02\x04\x83\x04\x03\xc8\x01\x02\x55\x6a"
  "\xfe\x02\x04\x83\x04\x03\xc9\x01\x02\x56\x6a\xff\x02\x04\x83\x04"
  "\x03\xca\x01\x02\x57\xc6\x01\x6a\x7d\x83\x03\x0a\x81\x83\x02\x82"
  "\x03\x08\x81\x83\x02\x81\x03\x06\x81\x83\x02\x80\x03\x04\x83\x04"
  "\x09\x11\x7d\x02\x58\xaf\x01\x6a\xb1\x01\x02\x03\x9a\x01\x04\xb4"
  "\x01\x03\xb3\x01\x04\xb5\x01\x03\xb6\x01\x03\x26\x04\x19\x76\x65"
  "\x63\x74\x6f\x72\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x65"
  "\x6c\x65\x6d\x65\x6e\x74\x08\x8e\x03\x18\x81\x85\x02\x8d\x03\x16"
  "\x81\x87\x02\x8c\x03\x14\x81\x85\x02\x8b\x03\x12\x81\x85\x02\x8a"
  "\x03\x10\x81\x8b\x02\x89\x03\x0e\x81\x89\x02\x88\x03\x0c\x81\x85"
  "\x02\x87\x03\x0a\x81\x85\x02\x86\x03\x08\x81\x8d\x02\x85\x03\x06"
  "\x81\x83\x02\x84\x03\x04\x83\x04\x17\x30\xb6\x01\x02\x59\x6a\x06"
  "\xb8\x01\x03\x14\x04\x18\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x63"
  "\x65\x6e\x76\x2f\x67\x65\x74\x2d\x76\x61\x6c\x75\x65\xb5\x01\x04"
  "\x32\x05\x93\x03\x0c\x81\x85\x02\x92\x03\x0a\x81\x85\x02\x91\x03"
  "\x08\x81\x85\x02\x90\x03\x06\x81\x87\x02\x8f\x03\x04\x84\x06\x0b"
  "\x19\xb4\x01\x02\x5a\x6a\x06\xbb\x01\x03\x14\x04\xb5\x01\x04\x23"
  "\x05\x98\x03\x0c\x81\x85\x02\x97\x03\x0a\x81\x85\x02\x96\x03\x08"
  "\x81\x85\x02\x95\x03\x06\x81\x87\x02\x94\x03\x04\x84\x06\x0b\x19"
  "\xb3\x01\x02\x5b\x6a\x05\xbd\x01\x03\x14\x04\x47\x04\x9c\x03\x0a"
  "\x81\x85\x02\x9b\x03\x08\x81\x85\x02\x9a\x03\x06\x81\x85\x02\x99"
  "\x03\x04\x84\x06\x09\x15\xcb\x01\x02\x5c\x6a\x07\xbf\x01\x03\x14"
  "\x04\xb5\x01\x05\x4c\x05\xa1\x03\x0c\x81\x85\x02\xa0\x03\x0a\x81"
  "\x85\x02\x9f\x03\x08\x81\x85\x02\x9e\x03\x06\x81\x89\x02\x9d\x03"
  "\x04\x85\x08\x0b\x19\xcc\x01\x02\x5d\x6a\x05\x12\x63\x6c\x6f\x73"
  "\x75\x72\x65\x2f\x67\x65\x74\x2d\x76\x61\x6c\x75\x65\xcd\x01\x02"
  "\xa4\x03\x08\x81\x87\x02\xa3\x03\x06\x81\x85\x02\xa2\x03\x04\x84"
  "\x06\x07\x10\xce\x01\x02\x5e\x22\x21\x03\x1e\x64\x62\x67\x2d\x62"
  "\x6c\x6f\x63\x6b\x2f\x6c\x61\x79\x6f\x75\x74\x2d\x66\x69\x72\x73"
  "\x74\x2d\x6f\x66\x66\x73\x65\x74\x03\x6e\x05\x15\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2f\x72\x65\x66"
  "\x04\xa9\x03\x0c\x81\x83\x02\xa8\x03\x0a\x81\x8b\x02\xa7\x03\x08"
  "\x81\x89\x02\xa6\x03\x06\x81\x89\x02\xa5\x03\x04\x85\x08\x0b\x18"
  "\x6e\x02\x5f\xa7\x01\x15\x49\x6c\x6c\x65\x67\x61\x6c\x20\x70\x61"
  "\x72\x65\x6e\x74\x20\x62\x6c\x6f\x63\x6b\x93\x01\x94\x01\xa3\x01"
  "\x6a\x03\x97\x01\x03\x98\x01\x04\x6c\x03\x99\x01\x05\xaf\x03\x0e"
  "\x81\x83\x02\xae\x03\x0c\x81\x83\x02\xad\x03\x0a\x81\x85\x02\xac"
  "\x03\x08\x81\x87\x02\xab\x03\x06\x81\x85\x02\xaa\x03\x04\x83\x04"
  "\x0d\x21\xa7\x01\x02\x60\x13\x15\x49\x6c\x6c\x65\x67\x61\x6c\x20"
  "\x70\x61\x72\x65\x6e\x74\x20\x62\x6c\x6f\x63\x6b\x93\x01\xa3\x01"
  "\x94\x01\x6a\x03\x97\x01\x03\x99\x01\x05\x96\x01\x03\x98\x01\x03"
  "\x9b\x01\x04\x6c\x03\x9c\x01\x03\xa0\x01\x05\xcd\x01\x03\x15\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72\x79\x2f\x62\x6c"
  "\x6f\x63\x6b\x03\xa5\x01\x0c\xbd\x03\x1e\xfd\xff\x03\xbc\x03\x1c"
  "\x81\x83\x02\xbb\x03\x1a\xfd\xff\x03\xba\x03\x18\xfd\xff\x03\xb9"
  "\x03\x16\x81\x8b\x02\xb8\x03\x14\x81\x8d\x02\xb7\x03\x12\x81\x8b"
  "\x02\xb6\x03\x10\xff\xff\x03\xb5\x03\x0e\x81\x89\x02\xb4\x03\x0c"
  "\x81\x87\x02\xb3\x03\x0a\x81\x87\x02\xb2\x03\x08\x81\x85\x02\xb1"
  "\x03\x06\x81\x83\x02\xb0\x03\x04\x83\x04\x1d\x41\xa5\x01\x02\x61"
  "\x6a\x03\xac\x01\x02\xbf\x03\x06\x81\x83\x02\xbe\x03\x04\x83\x04"
  "\x05\x0d\x9c\x01\x02\x62\x0e\x63\x65\x6c\x6c\x2d\x63\x6f\x6e\x74"
  "\x65\x6e\x74\x73\x9b\x01\x25\x56\x61\x6c\x75\x65\x20\x6f\x66\x20"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x73\x68\x6f\x75\x6c\x64\x20"
  "\x62\x65\x20\x69\x6e\x20\x63\x65\x6c\x6c\x3a\x06\x63\x65\x6c\x6c"
  "\x3f\x99\x01\x17\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x3a\xae\x01\xaf\x01\x05\x63"
  "\x65\x6c\x6c\x98\x01\x6b\x6a\x04\x14\x64\x62\x67\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x66\x69\x6e\x64\x2d\x6e\x61\x6d\x65\x97\x01\x03\x9a"
  "\x01\x03\x26\x03\xb0\x01\x04\x6c\x05\x6c\x03\xb1\x01\x08\xca\x03"
  "\x18\x81\x91\x02\xc9\x03\x16\x81\x91\x02\xc8\x03\x14\x81\x91\x02"
  "\xc7\x03\x12\x81\x93\x02\xc6\x03\x10\x81\x91\x02\xc5\x03\x0e\x81"
  "\x8f\x02\xc4\x03\x0c\x81\x8d\x02\xc3\x03\x0a\x81\x8d\x02\xc2\x03"
  "\x08\x81\x8b\x02\xc1\x03\x06\x81\x8b\x02\xc0\x03\x04\x86\x0a\x17"
  "\x32\x94\x01\x02\x63\x3a\x39\x9b\x01\x24\x56\x61\x6c\x75\x65\x20"
  "\x6f\x66\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x73\x68\x6f\x75"
  "\x6c\x64\x20\x62\x65\x20\x69\x6e\x20\x63\x65\x6c\x6c\x99\x01\x17"
  "\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x20\x74\x79\x70\x65\x3a\xae\x01\xaf\x01\x98\x01\x6b\x6a\x04\x97"
  "\x01\x03\x9a\x01\x03\x26\x03\xb0\x01\x04\x6c\x05\x6c\x03\xb1\x01"
  "\x03\x24\x03\x3e\x0a\xdb\x03\x24\x81\x83\x02\xda\x03\x22\x81\x91"
  "\x02\xd9\x03\x20\x81\x83\x02\xd8\x03\x1e\x81\x91\x02\xd7\x03\x1c"
  "\x81\x91\x02\xd6\x03\x1a\x81\x83\x02\xd5\x03\x18\x81\x91\x02\xd4"
  "\x03\x16\x81\x91\x02\xd3\x03\x14\x81\x91\x02\xd2\x03\x12\x81\x93"
  "\x02\xd1\x03\x10\x81\x91\x02\xd0\x03\x0e\x81\x8f\x02\xcf\x03\x0c"
  "\x81\x8d\x02\xce\x03\x0a\x81\x8d\x02\xcd\x03\x08\x81\x8b\x02\xcc"
  "\x03\x06\x81\x8b\x02\xcb\x03\x04\x86\x0a\x23\x44\xb1\x01\x02\x64"
  "\x6a\x98\x01\x04\x97\x01\x03\x9a\x01\x03\x26\x04\xe0\x03\x0c\x81"
  "\x8b\x02\xdf\x03\x0a\x81\x8b\x02\xde\x03\x08\x81\x89\x02\xdd\x03"
  "\x06\x81\x87\x02\xdc\x03\x04\x85\x08\x0b\x18\xb0\x01\x02\x65\x02"
  "\x13\x73\x65\x74\x2d\x63\x65\x6c\x6c\x2d\x63\x6f\x6e\x74\x65\x6e"
  "\x74\x73\x21\x25\x56\x61\x6c\x75\x65\x20\x6f\x66\x20\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x20\x73\x68\x6f\x75\x6c\x64\x20\x62\x65\x20"
  "\x69\x6e\x20\x63\x65\x6c\x6c\x3a\x99\x01\x17\x55\x6e\x6b\x6e\x6f"
  "\x77\x6e\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x74\x79\x70\x65"
  "\x3a\x1d\x56\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f"
  "\x74\x20\x62\x65\x20\x6d\x6f\x64\x69\x66\x69\x65\x64\x3a\xae\x01"
  "\xaf\x01\x6b\x98\x01\x6a\x04\x97\x01\x03\x9a\x01\x03\x26\x04\x6c"
  "\x05\x6c\x06\xe9\x03\x14\x81\x8d\x02\xe8\x03\x12\x81\x8d\x02\xe7"
  "\x03\x10\x81\x8d\x02\xe6\x03\x0e\x81\x91\x02\xe5\x03\x0c\x81\x8f"
  "\x02\xe4\x03\x0a\x81\x8d\x02\xe3\x03\x08\x81\x8d\x02\xe2\x03\x06"
  "\x81\x8b\x02\xe1\x03\x04\x87\x0c\x13\x2c\xaf\x01\x02\x66\x03\xab"
  "\x01\x03\x13\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2f\x6e\x61\x6d\x65\x03\xeb\x03\x06\x81\x83\x02\xea\x03\x04\x83"
  "\x04\x05\x0d\xae\x01\x02\x67\x03\xab\x01\x03\x1a\x64\x62\x67\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x73\x6f\x75\x72\x63\x65"
  "\x2d\x63\x6f\x64\x65\x03\xed\x03\x06\x81\x83\x02\xec\x03\x04\x83"
  "\x04\x05\x0d\xab\x01\x67\x9b\x01\x9b\x01\xab\x01\x04\xae\x01\x04"
  "\xaf\x01\x04\xb0\x01\x04\xb1\x01\x04\x94\x01\x04\x9c\x01\x04\xa5"
  "\x01\x04\xa7\x01\x04\x6e\x04\xce\x01\x04\xcc\x01\x04\xcb\x01\x04"
  "\xb3\x01\x04\xb4\x01\x04\xb6\x01\x04\x7d\x04\xca\x01\x04\xc9\x01"
  "\x04\xc8\x01\x04\xc7\x01\x04\x16\xac\x01\x0f\x64\x62\x67\x2d\x62"
  "\x6c\x6f\x63\x6b\x2f\x6e\x61\x6d\x65\xbf\x01\xbd\x01\xb8\x01\xbb"
  "\x01\x2f\x14\x0e\xcd\x01\xb5\x01\x4f\x4a\x45\x37\x1a\x16\x63\x6c"
  "\x6f\x73\x75\x72\x65\x2d\x63\x63\x65\x6e\x76\x2f\x63\x6c\x6f\x73"
  "\x75\x72\x65\x1c\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x63\x65\x6e"
  "\x76\x2f\x63\x6c\x6f\x73\x75\x72\x65\x2d\x62\x6c\x6f\x63\x6b\x1a"
  "\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x63\x65\x6e\x76\x2f\x73\x74"
  "\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b\x96\x01\x16\x0e\x63\x6c\x6f"
  "\x73\x75\x72\x65\x2d\x63\x63\x65\x6e\x76\xa3\x01\x0e\x63\x6c\x6f"
  "\x73\x75\x72\x65\x2d\x62\x6c\x6f\x63\x6b\x0c\x73\x74\x61\x63\x6b"
  "\x2d\x62\x6c\x6f\x63\x6b\x12\x72\x74\x64\x3a\x63\x6c\x6f\x73\x75"
  "\x72\x65\x2d\x63\x63\x65\x6e\x76\xce\x01\x0e\x63\x6c\x6f\x73\x75"
  "\x72\x65\x2d\x63\x63\x65\x6e\x76\xc6\x01\x11\x64\x62\x67\x2d\x62"
  "\x6c\x6f\x63\x6b\x2f\x6c\x65\x6e\x67\x74\x68\x9d\x01\x95\x01\xa2"
  "\x01\xa9\x01\xb9\x01\x4e\x49\x44\x36\x19\x29\x2e\x13\x0d\xa4\x01"
  "\x18\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x18\x73\x74\x61\x63\x6b\x2d\x63"
  "\x63\x65\x6e\x76\x2f\x73\x74\x61\x72\x74\x2d\x69\x6e\x64\x65\x78"
  "\x12\x73\x74\x61\x63\x6b\x2d\x63\x63\x65\x6e\x76\x2f\x66\x72\x61"
  "\x6d\x65\x12\x73\x74\x61\x63\x6b\x2d\x63\x63\x65\x6e\x76\x2f\x62"
  "\x6c\x6f\x63\x6b\x9f\x01\x17\xc5\x01\x04\xaa\x01\x04\xc4\x01\x04"
  "\xc3\x01\x04\xc2\x01\x04\xc1\x01\x04\xc0\x01\x04\xbe\x01\x04\xbc"
  "\x01\x04\xba\x01\x04\xb7\x01\x04\xb2\x01\x04\xad\x01\x04\x9e\x01"
  "\x04\xa8\x01\x04\xa6\x01\x04\xa1\x01\x04\x92\x01\x04\x91\x01\x04"
  "\x90\x01\x04\x09\x04\x11\x04\x17\x07\x76\x65\x63\x74\x6f\x72\x0c"
  "\x73\x74\x61\x63\x6b\x2d\x63\x63\x65\x6e\x76\x0c\x73\x74\x61\x72"
  "\x74\x2d\x69\x6e\x64\x65\x78\x06\x66\x72\x61\x6d\x65\x06\x62\x6c"
  "\x6f\x63\x6b\x31\x10\x72\x74\x64\x3a\x73\x74\x61\x63\x6b\x2d\x63"
  "\x63\x65\x6e\x76\xcd\x01\x0c\x73\x74\x61\x63\x6b\x2d\x63\x63\x65"
  "\x6e\x76\x20\x8b\x01\x8f\x01\x8d\x01\x8a\x01\x0d\x69\x63\x2d\x66"
  "\x72\x61\x6d\x65\x2d\x61\x72\x67\x13\x69\x63\x2d\x66\x72\x61\x6d"
  "\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x77\x76\x84\x01\x2d"
  "\x81\x01\x12\x0c\x7b\x78\x72\x28\x1e\x18\x57\x54\x4d\x48\x43\x35"
  "\xa0\x01\x10\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x3f\x34\x62\x5c\x75\x5a\x5b\x1d\x17\x1b\x73\x79\x73\x74\x65"
  "\x6d\x2d\x67\x6c\x6f\x62\x61\x6c\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x3f\x56\x53\x51\x4c\x47\x23\x19\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x6d"
  "\x61\x63\x72\x6f\x16\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x6f\x72\x40\x16\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x61\x73\x73\x69\x67\x6e\x65\x64"
  "\x3f\x32\x13\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x62"
  "\x6f\x75\x6e\x64\x3f\x2b\x1b\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d"
  "\x65\x27\x15\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x62"
  "\x69\x6e\x64\x69\x6e\x67\x73\x1c\x16\x10\x0b\x16\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x3c\x63\x04\x7f\x04\x8e\x01\x04\x8c\x01\x04\x7a\x04\x7e\x04"
  "\x85\x01\x04\x88\x01\x04\x89\x01\x04\x87\x01\x04\x86\x01\x04\x83"
  "\x01\x04\x82\x01\x04\x80\x01\x04\x64\x04\x7c\x04\x79\x04\x74\x04"
  "\x73\x04\x71\x04\x70\x04\x3b\x04\x3c\x04\x6f\x04\x6d\x04\x69\x04"
  "\x68\x04\x67\x04\x66\x04\x65\x04\x61\x04\x60\x04\x5f\x04\x5e\x04"
  "\x5d\x04\x59\x04\x58\x04\x55\x04\x52\x04\x50\x04\x4b\x04\x46\x04"
  "\x42\x04\x41\x04\x3f\x04\x3d\x04\x38\x04\x33\x04\x30\x04\x2c\x04"
  "\x2a\x04\x25\x04\x1f\x04\x1b\x04\x15\x04\x0f\x04\x0a\x04\x04\x04"
  "\x3c\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x04\x19\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75\x6e\x70"
  "\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x04\x25\x6e\x61"
  "\x6d\x65\x64\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x73\x65"
  "\x74\x2d\x74\x61\x67\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f"
  "\x6e\x21\x0a\x1b\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69\x6e\x65\x2d"
  "\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x05\xcd"
  "\x01\xce\x01\x03\x0f\x20\x80\x80\x04\x0e\x1e\x81\x81\x02\x0d\x1c"
  "\x81\x81\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x8b\x02\x0a\x16\x81"
  "\x85\x02\x09\x14\x81\x85\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83"
  "\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x8b\x02\x04\x0a\x81\x85\x02"
  "\x03\x08\x81\x85\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x1f"
  "\x44";

SCHEME_OBJECT *
uenvir_so_data_75b126963628380c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_uenvir_so_data_75b126963628380c [0]))), (sizeof (prog_uenvir_so_data_75b126963628380c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_22]));
}

DECLARE_COMPILED_DATA_NS ("uenvir.so", uenvir_so_data_75b126963628380c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("uenvir.so", "bdeaefe4b3741ea5")
