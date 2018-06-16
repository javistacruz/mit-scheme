/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:10-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_11 11
#define LABEL_1_10 13
#define LABEL_1_12 15
#define ENVIRONMENT_LABEL_1_3 34
#define DEBUGGING_LABEL_1_2 33
#define OBJECT_1_3 32
#define OBJECT_1_2 31
#define OBJECT_1_1 30
#define OBJECT_1_0 29
#define EXECUTE_CACHE_1_15 17
#define EXECUTE_CACHE_1_14 19
#define EXECUTE_CACHE_1_13 21
#define EXECUTE_CACHE_1_8 23
#define EXECUTE_CACHE_1_6 25
#define FREE_REFERENCE_1_0 28
#define FREE_REFERENCES_LABEL_1_0 16
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contin_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_1_4);
      goto make_continuation_8;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_continuation_13)
DEFLABEL (make_continuation_8)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Wrd9.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_17;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd38.Lng))))
    goto label_17;
  ((Wrd36.pObj) [9]) = (Wrd8.Obj);

DEFLABEL (label_16)
  (Wrd10.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_1_1]);
  (Rsp [4]) = (Wrd14.Obj);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  (Rsp [6]) = (Wrd14.Obj);
  (Rsp [7]) = (Wrd14.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_15;
  Wrd21 = Wrd25;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Rsp [8]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd22.pObj));

DEFLABEL (label_10)
  (Wrd21.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_1_2]);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 3);

DEFLABEL (label_11)
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 15
#define DEBUGGING_LABEL_2_2 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_7 9
#define FREE_REFERENCE_2_0 12
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contin_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_2_4);
      goto procedure_continuationP_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_continuationP_6)
DEFLABEL (procedure_continuationP_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_8;
  Rvl = (current_block [OBJECT_2_0]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define ENVIRONMENT_LABEL_3_3 19
#define DEBUGGING_LABEL_3_2 18
#define OBJECT_3_0 17
#define EXECUTE_CACHE_3_9 11
#define EXECUTE_CACHE_3_6 13
#define FREE_REFERENCE_3_0 16
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contin_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_3_4);
      goto rvalue_continuationP_3;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_continuationP_7)
DEFLABEL (rvalue_continuationP_3)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_13;
  Wrd7 = Wrd11;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_10;
  Rvl = (current_block [OBJECT_3_0]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_7])), (Wrd8.pObj));

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_9 9
#define ENVIRONMENT_LABEL_4_3 18
#define DEBUGGING_LABEL_4_2 17
#define EXECUTE_CACHE_4_10 11
#define EXECUTE_CACHE_4_8 13
#define EXECUTE_CACHE_4_6 15
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contin_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto continuation_register_5;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_register_8)
DEFLABEL (continuation_register_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
contin_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto continuation_always_known_operatorP_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_always_known_operatorP_4)
DEFLABEL (continuation_always_known_operatorP_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == (current_block [OBJECT_5_0]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_5_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 11
#define DEBUGGING_LABEL_6_2 10
#define OBJECT_6_0 9
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contin_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto continuation_parameter_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_parameter_4)
DEFLABEL (continuation_parameter_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [0]) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_5;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  Rvl = ((Wrd8.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_9 7
#define LABEL_7_7 9
#define LABEL_7_10 11
#define LABEL_7_11 13
#define LABEL_7_13 15
#define LABEL_7_14 17
#define ENVIRONMENT_LABEL_7_3 35
#define DEBUGGING_LABEL_7_2 34
#define OBJECT_7_4 33
#define OBJECT_7_3 32
#define OBJECT_7_2 31
#define OBJECT_7_1 30
#define OBJECT_7_0 29
#define EXECUTE_CACHE_7_15 19
#define EXECUTE_CACHE_7_12 21
#define EXECUTE_CACHE_7_8 23
#define EXECUTE_CACHE_7_6 25
#define FREE_REFERENCE_7_0 28
#define FREE_REFERENCES_LABEL_7_0 18
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contin_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd52;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_7_4);
      goto continuation_frame_size_12;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_frame_size_18)
DEFLABEL (continuation_frame_size_12)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_7);
  if (Rvl == (current_block [OBJECT_7_1]))
    goto label_20;
  (Wrd7.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_19;

DEFLABEL (label_20)
  (Wrd52.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_19)
DEFLABEL (label_35)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_34;
  Wrd8 = Wrd12;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_32;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_32;
  (Wrd14.Obj) = ((Wrd20.pObj) [3]);

DEFLABEL (label_31)
  (Wrd30.Obj) = (* (Rsp++));
  if (! ((Wrd14.Obj) == (Wrd30.Obj)))
    goto label_22;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd31.Obj) = (current_block [OBJECT_7_0]);
  goto label_21;

DEFLABEL (label_22)
  (Wrd31.Obj) = (current_block [OBJECT_7_2]);

DEFLABEL (label_21)
DEFLABEL (label_30)
  (Wrd32.Obj) = (* (Rsp++));
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_29;
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_29;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd41.Lng) = ((Wrd42.Lng) + (Wrd43.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd41.Lng)))
    goto label_29;
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd7.Obj) = (current_block [OBJECT_7_0]);
  goto label_23;

DEFLABEL (label_24)
  (Wrd7.Obj) = (current_block [OBJECT_7_2]);

DEFLABEL (label_23)
DEFLABEL (label_27)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd10.uLng) == 26)
    goto label_26;

DEFLABEL (label_25)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_26)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_25;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_25;
  Rvl = (LONG_TO_FIXNUM (Wrd13.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_16)
  (Wrd38.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_32)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_7_3]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_15)
  (Wrd14.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_10])), (Wrd9.pObj));

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
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
contin_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto uni_continuationP_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uni_continuationP_4)
DEFLABEL (uni_continuationP_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (label_5)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 11
#define DEBUGGING_LABEL_9_2 10
#define OBJECT_9_0 9
#define EXECUTE_CACHE_9_6 7
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contin_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto uni_continuation_parameter_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uni_continuation_parameter_4)
DEFLABEL (uni_continuation_parameter_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [0]) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_5;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  Rvl = ((Wrd8.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_11 9
#define LABEL_10_8 11
#define ENVIRONMENT_LABEL_10_3 26
#define DEBUGGING_LABEL_10_2 25
#define OBJECT_10_1 24
#define OBJECT_10_0 23
#define EXECUTE_CACHE_10_13 13
#define EXECUTE_CACHE_10_12 15
#define EXECUTE_CACHE_10_10 17
#define EXECUTE_CACHE_10_9 19
#define EXECUTE_CACHE_10_7 21
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
contin_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_10_4);
      goto delete_continuation_combinationB_7;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_continuation_combinationB_10)
DEFLABEL (delete_continuation_combinationB_7)
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
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_10_0]))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_10_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_11);
  if (! (Rvl == (current_block [OBJECT_10_0])))
    goto label_11;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_10 7
#define LABEL_6 9
#define LABEL_8 11
#define LABEL_14 13
#define LABEL_9 15
#define LABEL_12 17
#define LABEL_17 19
#define LABEL_13 21
#define LABEL_15 23
#define LABEL_20 25
#define LABEL_16 27
#define LABEL_18 29
#define LABEL_23 31
#define LABEL_19 33
#define LABEL_21 35
#define LABEL_26 37
#define LABEL_22 39
#define LABEL_24 41
#define LABEL_25 43
#define LABEL_27 45
#define LABEL_30 47
#define LABEL_29 49
#define LABEL_32 51
#define LABEL_31 53
#define LABEL_34 55
#define LABEL_33 57
#define LABEL_36 59
#define LABEL_35 61
#define LABEL_38 63
#define LABEL_37 65
#define LABEL_40 67
#define LABEL_39 69
#define LABEL_42 71
#define LABEL_41 73
#define LABEL_44 75
#define LABEL_43 77
#define LABEL_46 79
#define LABEL_45 81
#define LABEL_48 83
#define LABEL_47 85
#define LABEL_50 87
#define LABEL_49 89
#define LABEL_52 91
#define LABEL_51 93
#define LABEL_54 95
#define LABEL_53 97
#define LABEL_56 99
#define LABEL_55 101
#define LABEL_58 103
#define LABEL_57 105
#define LABEL_60 107
#define LABEL_59 109
#define LABEL_62 111
#define LABEL_61 113
#define LABEL_64 115
#define LABEL_63 117
#define LABEL_65 119
#define LABEL_67 121
#define LABEL_66 123
#define LABEL_69 125
#define LABEL_68 127
#define LABEL_71 129
#define LABEL_70 131
#define LABEL_72 133
#define LABEL_73 135
#define LABEL_74 137
#define ENVIRONMENT_LABEL_3 216
#define DEBUGGING_LABEL_2 215
#define PURIFICATION_ROOT 214
#define OBJECT_44 213
#define OBJECT_43 212
#define OBJECT_42 211
#define OBJECT_41 210
#define OBJECT_40 209
#define OBJECT_39 208
#define OBJECT_38 207
#define OBJECT_37 206
#define OBJECT_36 205
#define OBJECT_35 204
#define OBJECT_34 203
#define OBJECT_33 202
#define OBJECT_32 201
#define OBJECT_31 200
#define OBJECT_30 199
#define OBJECT_29 198
#define OBJECT_28 197
#define OBJECT_27 196
#define OBJECT_26 195
#define OBJECT_25 194
#define OBJECT_24 193
#define OBJECT_23 192
#define OBJECT_22 191
#define OBJECT_21 190
#define OBJECT_20 189
#define OBJECT_19 188
#define OBJECT_18 187
#define OBJECT_17 186
#define OBJECT_16 185
#define OBJECT_15 184
#define OBJECT_14 183
#define OBJECT_13 182
#define OBJECT_12 181
#define OBJECT_11 180
#define OBJECT_10 179
#define OBJECT_9 178
#define OBJECT_8 177
#define OBJECT_7 176
#define OBJECT_6 175
#define OBJECT_5 174
#define OBJECT_4 173
#define OBJECT_3 172
#define OBJECT_2 171
#define OBJECT_1 170
#define OBJECT_0 169
#define EXECUTE_CACHE_11 139
#define EXECUTE_CACHE_7 141
#define FREE_REFERENCE_21 144
#define FREE_REFERENCE_20 145
#define FREE_REFERENCE_19 146
#define FREE_REFERENCE_18 147
#define FREE_REFERENCE_17 148
#define FREE_REFERENCE_16 149
#define FREE_REFERENCE_15 150
#define FREE_REFERENCE_14 151
#define FREE_REFERENCE_13 152
#define FREE_REFERENCE_12 153
#define FREE_REFERENCE_11 154
#define FREE_REFERENCE_10 155
#define FREE_REFERENCE_9 156
#define FREE_REFERENCE_8 157
#define FREE_REFERENCE_7 158
#define FREE_REFERENCE_6 159
#define FREE_REFERENCE_5 160
#define FREE_REFERENCE_4 161
#define FREE_REFERENCE_3 162
#define FREE_REFERENCE_2 163
#define FREE_REFERENCE_1 164
#define FREE_REFERENCE_0 165
#define GLOBAL_EXECUTE_CACHE_28 167
#define FREE_REFERENCES_LABEL_0 138
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
contin_so_3aa99623a3b4b4e6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_10);
      goto label_40;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_14);
      goto label_41;

    case 6:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_17);
      goto label_42;

    case 9:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_20);
      goto label_43;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto label_44;

    case 15:
      current_block = (Rpc - LABEL_19);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto label_45;

    case 18:
      current_block = (Rpc - LABEL_22);
      goto continuation_11;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_14;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto continuation_13;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto continuation_15;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto label_46;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto continuation_16;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto label_47;

    case 25:
      current_block = (Rpc - LABEL_31);
      goto continuation_17;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto label_48;

    case 27:
      current_block = (Rpc - LABEL_33);
      goto continuation_18;

    case 28:
      current_block = (Rpc - LABEL_36);
      goto label_49;

    case 29:
      current_block = (Rpc - LABEL_35);
      goto continuation_19;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto label_50;

    case 31:
      current_block = (Rpc - LABEL_37);
      goto continuation_20;

    case 32:
      current_block = (Rpc - LABEL_40);
      goto label_51;

    case 33:
      current_block = (Rpc - LABEL_39);
      goto continuation_21;

    case 34:
      current_block = (Rpc - LABEL_42);
      goto label_52;

    case 35:
      current_block = (Rpc - LABEL_41);
      goto continuation_22;

    case 36:
      current_block = (Rpc - LABEL_44);
      goto label_53;

    case 37:
      current_block = (Rpc - LABEL_43);
      goto continuation_23;

    case 38:
      current_block = (Rpc - LABEL_46);
      goto label_54;

    case 39:
      current_block = (Rpc - LABEL_45);
      goto continuation_24;

    case 40:
      current_block = (Rpc - LABEL_48);
      goto label_55;

    case 41:
      current_block = (Rpc - LABEL_47);
      goto continuation_25;

    case 42:
      current_block = (Rpc - LABEL_50);
      goto label_56;

    case 43:
      current_block = (Rpc - LABEL_49);
      goto continuation_26;

    case 44:
      current_block = (Rpc - LABEL_52);
      goto label_57;

    case 45:
      current_block = (Rpc - LABEL_51);
      goto continuation_27;

    case 46:
      current_block = (Rpc - LABEL_54);
      goto label_58;

    case 47:
      current_block = (Rpc - LABEL_53);
      goto continuation_28;

    case 48:
      current_block = (Rpc - LABEL_56);
      goto label_59;

    case 49:
      current_block = (Rpc - LABEL_55);
      goto continuation_29;

    case 50:
      current_block = (Rpc - LABEL_58);
      goto label_60;

    case 51:
      current_block = (Rpc - LABEL_57);
      goto continuation_30;

    case 52:
      current_block = (Rpc - LABEL_60);
      goto label_61;

    case 53:
      current_block = (Rpc - LABEL_59);
      goto continuation_31;

    case 54:
      current_block = (Rpc - LABEL_62);
      goto label_62;

    case 55:
      current_block = (Rpc - LABEL_61);
      goto continuation_32;

    case 56:
      current_block = (Rpc - LABEL_64);
      goto label_63;

    case 57:
      current_block = (Rpc - LABEL_63);
      goto continuation_33;

    case 58:
      current_block = (Rpc - LABEL_65);
      goto continuation_34;

    case 59:
      current_block = (Rpc - LABEL_67);
      goto label_64;

    case 60:
      current_block = (Rpc - LABEL_66);
      goto continuation_35;

    case 61:
      current_block = (Rpc - LABEL_69);
      goto label_65;

    case 62:
      current_block = (Rpc - LABEL_68);
      goto continuation_36;

    case 63:
      current_block = (Rpc - LABEL_71);
      goto label_66;

    case 64:
      current_block = (Rpc - LABEL_70);
      goto continuation_37;

    case 65:
      current_block = (Rpc - LABEL_72);
      goto label_69;

    case 66:
      current_block = (Rpc - LABEL_73);
      goto label_70;

    case 67:
      current_block = (Rpc - LABEL_74);
      goto expression_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_39)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_73])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_70)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_69)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	2,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 10)
      goto label_68;
    blocks = (current_block [OBJECT_44]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_72])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_68)
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_124;
  Wrd12 = Wrd16;

DEFLABEL (label_123)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_122;
  Wrd12 = Wrd16;

DEFLABEL (label_121)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_120;
  Wrd12 = Wrd16;

DEFLABEL (label_119)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_118;
  Wrd12 = Wrd16;

DEFLABEL (label_117)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_116;
  Wrd12 = Wrd16;

DEFLABEL (label_115)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_114;
  Wrd12 = Wrd16;

DEFLABEL (label_113)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_28]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_112;
  Wrd8 = Wrd12;

DEFLABEL (label_111)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_110;
  Wrd8 = Wrd12;

DEFLABEL (label_109)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_108;
  Wrd8 = Wrd12;

DEFLABEL (label_107)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_106;
  Wrd8 = Wrd12;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_104;
  Wrd8 = Wrd12;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_102;
  Wrd8 = Wrd12;

DEFLABEL (label_101)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_100;
  Wrd8 = Wrd12;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_98;
  Wrd8 = Wrd12;

DEFLABEL (label_97)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_96;
  Wrd8 = Wrd12;

DEFLABEL (label_95)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_94;
  Wrd8 = Wrd12;

DEFLABEL (label_93)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_92;
  Wrd8 = Wrd12;

DEFLABEL (label_91)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_90;
  Wrd8 = Wrd12;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_88;
  Wrd8 = Wrd12;

DEFLABEL (label_87)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_86;
  Wrd8 = Wrd12;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_84;
  Wrd8 = Wrd12;

DEFLABEL (label_83)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_82;
  Wrd8 = Wrd12;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_80;
  Wrd8 = Wrd12;

DEFLABEL (label_79)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_78;
  Wrd8 = Wrd12;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_28]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_76;
  Wrd8 = Wrd12;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_74;
  Wrd8 = Wrd12;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_72;
  Wrd8 = Wrd12;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_43]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_28]));

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71])), (Wrd9.pObj));

DEFLABEL (label_66)
  (Wrd8.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69])), (Wrd9.pObj));

DEFLABEL (label_65)
  (Wrd8.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67])), (Wrd9.pObj));

DEFLABEL (label_64)
  (Wrd8.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64])), (Wrd9.pObj));

DEFLABEL (label_63)
  (Wrd8.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62])), (Wrd9.pObj));

DEFLABEL (label_62)
  (Wrd8.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60])), (Wrd9.pObj));

DEFLABEL (label_61)
  (Wrd8.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58])), (Wrd9.pObj));

DEFLABEL (label_60)
  (Wrd8.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56])), (Wrd9.pObj));

DEFLABEL (label_59)
  (Wrd8.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54])), (Wrd9.pObj));

DEFLABEL (label_58)
  (Wrd8.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52])), (Wrd9.pObj));

DEFLABEL (label_57)
  (Wrd8.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd9.pObj));

DEFLABEL (label_56)
  (Wrd8.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd9.pObj));

DEFLABEL (label_55)
  (Wrd8.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd9.pObj));

DEFLABEL (label_54)
  (Wrd8.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd9.pObj));

DEFLABEL (label_53)
  (Wrd8.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd9.pObj));

DEFLABEL (label_52)
  (Wrd8.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd9.pObj));

DEFLABEL (label_51)
  (Wrd8.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd9.pObj));

DEFLABEL (label_50)
  (Wrd8.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd9.pObj));

DEFLABEL (label_49)
  (Wrd8.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd9.pObj));

DEFLABEL (label_48)
  (Wrd8.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd9.pObj));

DEFLABEL (label_47)
  (Wrd8.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd9.pObj));

DEFLABEL (label_46)
  (Wrd8.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd13.pObj));

DEFLABEL (label_45)
  (Wrd12.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd13.pObj));

DEFLABEL (label_44)
  (Wrd12.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd13.pObj));

DEFLABEL (label_43)
  (Wrd12.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd13.pObj));

DEFLABEL (label_42)
  (Wrd12.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd13.pObj));

DEFLABEL (label_41)
  (Wrd12.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd13.pObj));

DEFLABEL (label_40)
  (Wrd12.Obj) = Rvl;
  goto label_123;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_contin_so_3aa99623a3b4b4e6 [10] =
  {
    { "contin_so_code_1", 7, contin_so_code_1 },
    { "contin_so_code_2", 3, contin_so_code_2 },
    { "contin_so_code_3", 4, contin_so_code_3 },
    { "contin_so_code_4", 4, contin_so_code_4 },
    { "contin_so_code_5", 2, contin_so_code_5 },
    { "contin_so_code_6", 2, contin_so_code_6 },
    { "contin_so_code_7", 8, contin_so_code_7 },
    { "contin_so_code_8", 2, contin_so_code_8 },
    { "contin_so_code_9", 2, contin_so_code_9 },
    { "contin_so_code_10", 5, contin_so_code_10 }
  };

int
decl_contin_so_3aa99623a3b4b4e6 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_contin_so_3aa99623a3b4b4e6);
  return (0);
}

DECLARE_COMPILED_CODE ("contin.so", 68, decl_contin_so_3aa99623a3b4b4e6, contin_so_3aa99623a3b4b4e6)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_contin_so_data_3aa99623a3b4b4e6 [3231] =
  "\xd9\x01\x14\x87\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\x02\x08"
  "\x0d\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9"
  "\x1d\xb0\x82\x88\x07\x0d\xba\x24\x28\x0d\xbb\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83\x88\x07\xb2\x24\x28\x0d\xbd"
  "\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d"
  "\xb0\x84\x88\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x85\x88\x07\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xc1\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x82\x80\x1b\x81\x0d\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x28\xb5\x28\x0d\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08\x28\x0d\x1c\x28"
  "\x0d\xb8\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x9b\x0d\x0d\x0d\x0d\x9b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x9a\x1b\x2a\x1b\x2a\xb7\x2a\x9a\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x99\xb6\x2a"
  "\xb4\x2a\x99\x0d\x0d\x1c\x0d\x0d\x1c\xb2\x0d\x1c\x0d\x0d\x1c\x0d"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x1b\x1b\x1b\x08\x8d\xc3\x0d"
  "\xb1\x2a\x28\x0d\x26\x1b\xb3\x0d\x0d\x1b\x0d\x0d\x1b\xb0\x0d\x1b"
  "\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\xb5\x0d\x0d\x24\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2f\x62\x61\x73\x65\x2f\x63\x6f\x6e\x74\x69"
  "\x6e\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c\x76\x65\x63\x74"
  "\x6f\x72\x2d\x73\x65\x74\x21\x09\x0d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x15\x73\x65\x74\x2d\x73\x6e\x6f\x64\x65\x2d"
  "\x6e\x65\x78\x74\x2d\x65\x64\x67\x65\x21\x02\x04\x0b\x6d\x61\x6b"
  "\x65\x2d\x62\x6c\x6f\x63\x6b\x03\x14\x6d\x61\x6b\x65\x2d\x76\x61"
  "\x6c\x75\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x02\x0d\x6d\x61"
  "\x6b\x65\x2d\x66\x67\x2d\x6e\x6f\x6f\x70\x0b\x0f\x6d\x61\x6b\x65"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x04\x0b\x6e\x6f\x64\x65"
  "\x2d\x3e\x73\x63\x66\x67\x06\x4b\x10\x81\x97\x02\x4a\x0e\x81\x93"
  "\x02\x49\x0c\x81\x95\x02\x48\x0a\x81\x8b\x02\x47\x08\x81\x89\x02"
  "\x46\x06\x81\x87\x02\x45\x04\x85\x08\x0f\x23\x02\x1c\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x02\x03\x0f\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x74\x79\x70\x65\x02\x4e\x08\x81\x85\x02\x4d"
  "\x06\x81\x83\x02\x4c\x04\x83\x04\x07\x10\x02\x02\x03\x12\x72\x76"
  "\x61\x6c\x75\x65\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03"
  "\x03\x52\x0a\x81\x85\x02\x51\x08\x81\x83\x02\x50\x06\x81\x83\x02"
  "\x4f\x04\x83\x04\x09\x14\x02\x03\x13\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x02\x19\x72\x74\x6c"
  "\x3a\x6d\x61\x6b\x65\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x04\x18\x73\x65\x74\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x21\x04\x56"
  "\x0a\x81\x85\x02\x55\x08\x81\x85\x02\x54\x06\x81\x83\x02\x53\x04"
  "\x83\x04\x09\x13\x02\x07\x61\x6c\x77\x61\x79\x73\x09\x03\x21\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x6c\x77\x61\x79\x73\x2d"
  "\x6b\x6e\x6f\x77\x6e\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x3f\x0a"
  "\x02\x58\x06\x81\x83\x02\x57\x04\x83\x04\x05\x0d\x0b\x02\x04\x63"
  "\x61\x72\x0c\x03\x1c\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6f"
  "\x72\x69\x67\x69\x6e\x61\x6c\x2d\x72\x65\x71\x75\x69\x72\x65\x64"
  "\x0d\x02\x5a\x06\x81\x83\x02\x59\x04\x83\x04\x05\x0c\x0e\x02\x08"
  "\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x09\x11\x62\x6c\x6f"
  "\x63\x6b\x2d\x74\x79\x70\x65\x2f\x73\x74\x61\x63\x6b\x02\x03\x18"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x6c\x6f\x73\x69\x6e"
  "\x67\x2d\x62\x6c\x6f\x63\x6b\x09\x03\x0a\x03\x1a\x73\x74\x61\x63"
  "\x6b\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x79\x6e\x61\x6d\x69\x63\x2d"
  "\x6c\x69\x6e\x6b\x3f\x03\x0a\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x3f"
  "\x05\x62\x12\x81\x85\x02\x61\x10\x81\x85\x02\x60\x0e\x81\x89\x02"
  "\x5f\x0c\x81\x87\x02\x5e\x0a\x81\x85\x02\x5d\x08\x81\x87\x02\x5c"
  "\x06\x81\x83\x02\x5b\x04\x83\x04\x11\x24\x0f\x02\x09\x03\x04\x19"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d"
  "\x63\x6f\x72\x72\x65\x63\x74\x3f\x03\x64\x06\x81\x83\x02\x63\x04"
  "\x83\x04\x05\x0e\x10\x02\x0a\x0c\x03\x0d\x02\x66\x06\x81\x83\x02"
  "\x65\x04\x83\x04\x05\x0c\x0d\x02\x0b\x02\x03\x18\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x72"
  "\x65\x73\x74\x0c\x04\x1d\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x72\x65\x73"
  "\x74\x21\x04\x06\x64\x65\x6c\x71\x21\x04\x26\x73\x65\x74\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x6c\x77\x61\x79\x73\x2d"
  "\x6b\x6e\x6f\x77\x6e\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x3f\x21"
  "\x03\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x70\x70\x6c"
  "\x69\x63\x61\x74\x69\x6f\x6e\x73\x11\x06\x6b\x0c\x81\x87\x02\x6a"
  "\x0a\x81\x87\x02\x69\x08\x81\x87\x02\x68\x06\x81\x85\x02\x67\x04"
  "\x84\x06\x0b\x1b\x12\x0b\x13\x13\x12\x04\x0d\x04\x10\x04\x0f\x04"
  "\x21\x64\x65\x6c\x65\x74\x65\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x21\x1b\x75\x6e\x69\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x12\x75\x6e\x69"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x3f\x18\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x66\x72\x61\x6d"
  "\x65\x2d\x73\x69\x7a\x65\x1e\x72\x65\x64\x75\x63\x74\x69\x6f\x6e"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x6c\x76"
  "\x61\x6c\x75\x65\x1b\x72\x65\x74\x75\x72\x6e\x2d\x6f\x70\x65\x72"
  "\x61\x74\x6f\x72\x2f\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x3f\x1c"
  "\x72\x65\x74\x75\x72\x6e\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x2f"
  "\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x3f\x17\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x70\x61\x72\x61\x6d\x65\x74"
  "\x65\x72\x24\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f"
  "\x61\x6c\x77\x61\x79\x73\x2d\x6b\x6e\x6f\x77\x6e\x2d\x6f\x70\x65"
  "\x72\x61\x74\x6f\x72\x3f\x16\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x0e\x04\x0b\x04"
  "\x04\x21\x73\x65\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2f\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x21\x1c\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f"
  "\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x1e\x73"
  "\x65\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f"
  "\x70\x61\x73\x73\x65\x64\x2d\x6f\x75\x74\x3f\x21\x19\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x70\x61\x73\x73\x65\x64"
  "\x2d\x6f\x75\x74\x3f\x19\x73\x65\x74\x2d\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2f\x6f\x66\x66\x73\x65\x74\x21\x14\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x6f\x66\x66\x73"
  "\x65\x74\x22\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f"
  "\x65\x76\x65\x72\x2d\x6b\x6e\x6f\x77\x6e\x2d\x6f\x70\x65\x72\x61"
  "\x74\x6f\x72\x3f\x1a\x73\x65\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2f\x72\x65\x74\x75\x72\x6e\x73\x21\x15\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x72\x65\x74\x75"
  "\x72\x6e\x73\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x2f\x6c\x61\x62\x65\x6c\x1f\x73\x65\x74\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x73\x21\x1a\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x73\x1d"
  "\x73\x65\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x2f\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64\x65\x21\x18\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x65\x6e\x74\x72\x79\x2d"
  "\x6e\x6f\x64\x65\x1b\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2f\x63\x6c\x6f\x73\x69\x6e\x67\x2d\x62\x6c\x6f\x63\x6b\x13"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x62\x6c\x6f"
  "\x63\x6b\x17\x73\x65\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2f\x74\x79\x70\x65\x21\x12\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2f\x74\x79\x70\x65\x18\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x76\x61"
  "\x6c\x75\x65\x15\x72\x76\x61\x6c\x75\x65\x2f\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x3f\x18\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x3f"
  "\x04\x04\x1b\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x06\x76\x61"
  "\x6c\x75\x65\x13\x17\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x2f\x70\x75\x73\x68\x09\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x12\x05\x70\x75\x73\x68\x10\x1c\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70\x72"
  "\x65\x64\x69\x63\x61\x74\x65\x0a\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x0f\x19\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x2f\x65\x66\x66\x65\x63\x74\x0a\x70\x72\x65\x64"
  "\x69\x63\x61\x74\x65\x0e\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x73\x0d\x07\x65\x66\x66\x65\x63"
  "\x74\x0b\x0b\x0e\x0f\x10\x12\x13\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x12\x6d\x61\x6b\x65\x2d\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x04\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x0d\x14"
  "\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x79"
  "\x70\x65\x21\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x62\x6c"
  "\x6f\x63\x6b\x09\x15\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x65"
  "\x6e\x74\x72\x79\x2d\x6e\x6f\x64\x65\x1a\x73\x65\x74\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x6f"
  "\x64\x65\x21\x0c\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6c"
  "\x61\x62\x65\x6c\x11\x1c\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x73"
  "\x21\x0a\x19\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x6c\x6f"
  "\x73\x75\x72\x65\x2d\x6f\x66\x66\x73\x65\x74\x1e\x73\x65\x74\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x6c\x6f\x73\x75\x72"
  "\x65\x2d\x6f\x66\x66\x73\x65\x74\x21\x16\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x70\x61\x73\x73\x65\x64\x2d\x6f\x75\x74\x3f\x1b"
  "\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x70\x61"
  "\x73\x73\x65\x64\x2d\x6f\x75\x74\x3f\x21\x19\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69"
  "\x6e\x66\x6f\x1e\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f"
  "\x21\x12\x72\x76\x61\x6c\x75\x65\x2f\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x3f\x11\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x6c\x76"
  "\x61\x6c\x75\x65\x17\x03\x11\x6d\x61\x6b\x65\x2d\x65\x6e\x75\x6d"
  "\x65\x72\x61\x74\x69\x6f\x6e\x04\x18\x65\x6e\x75\x6d\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x6e\x61\x6d\x65\x2d\x3e\x69\x6e\x64\x65\x78"
  "\x03\x44\x8a\x01\x80\x80\x04\x43\x88\x01\x81\x81\x02\x42\x86\x01"
  "\x81\x81\x02\x41\x84\x01\x81\x83\x02\x40\x82\x01\x81\x85\x02\x3f"
  "\x80\x01\x81\x83\x02\x3e\x7e\x81\x85\x02\x3d\x7c\x81\x83\x02\x3c"
  "\x7a\x81\x85\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x83\x02\x39\x74"
  "\x81\x85\x02\x38\x72\x81\x83\x02\x37\x70\x81\x85\x02\x36\x6e\x81"
  "\x83\x02\x35\x6c\x81\x85\x02\x34\x6a\x81\x83\x02\x33\x68\x81\x85"
  "\x02\x32\x66\x81\x83\x02\x31\x64\x81\x85\x02\x30\x62\x81\x83\x02"
  "\x2f\x60\x81\x85\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x85\x02\x2c"
  "\x5a\x81\x83\x02\x2b\x58\x81\x85\x02\x2a\x56\x81\x83\x02\x29\x54"
  "\x81\x85\x02\x28\x52\x81\x83\x02\x27\x50\x81\x85\x02\x26\x4e\x81"
  "\x83\x02\x25\x4c\x81\x85\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x85"
  "\x02\x22\x46\x81\x83\x02\x21\x44\x81\x85\x02\x20\x42\x81\x83\x02"
  "\x1f\x40\x81\x85\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x85\x02\x1c"
  "\x3a\x81\x83\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x83\x02\x19\x34"
  "\x81\x85\x02\x18\x32\x81\x83\x02\x17\x30\x81\x85\x02\x16\x2e\x81"
  "\x83\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x85"
  "\x02\x12\x26\x81\x89\x02\x11\x24\x81\x83\x02\x10\x22\x81\x85\x02"
  "\x0f\x20\x81\x89\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x85\x02\x0c"
  "\x1a\x81\x89\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x85\x02\x09\x14"
  "\x81\x89\x02\x08\x12\x81\x83\x02\x07\x10\x81\x85\x02\x06\x0e\x81"
  "\x89\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x89"
  "\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x89\x01\xd9\x01";

SCHEME_OBJECT *
contin_so_data_3aa99623a3b4b4e6 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_contin_so_data_3aa99623a3b4b4e6 [0]))), (sizeof (prog_contin_so_data_3aa99623a3b4b4e6)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_74]));
}

DECLARE_COMPILED_DATA_NS ("contin.so", contin_so_data_3aa99623a3b4b4e6)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("contin.so", "e21d21feead69967")
