/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:32-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_8 5
#define LABEL_1_9 7
#define LABEL_1_11 9
#define LABEL_1_5 11
#define LABEL_1_12 13
#define LABEL_1_6 15
#define LABEL_1_10 17
#define ENVIRONMENT_LABEL_1_3 31
#define DEBUGGING_LABEL_1_2 30
#define OBJECT_1_2 29
#define OBJECT_1_1 28
#define OBJECT_1_0 27
#define EXECUTE_CACHE_1_14 19
#define EXECUTE_CACHE_1_13 21
#define EXECUTE_CACHE_1_7 23
#define FREE_REFERENCE_1_0 26
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd12;
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
      goto enter_default_float_environment_9;

    case 1:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (enter_default_float_environment_13)
DEFLABEL (enter_default_float_environment_9)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd5.Obj);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_17;
  Wrd11 = Wrd15;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_11);
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd12.pObj));

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 0);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_8);

DEFLABEL (label_20)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 7
#define DEBUGGING_LABEL_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto restore_float_environment_from_default_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (restore_float_environment_from_default_3)
DEFLABEL (restore_float_environment_from_default_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_4)
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 10
#define DEBUGGING_LABEL_3_2 9
#define OBJECT_3_0 8
#define FREE_REFERENCE_3_0 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_3_4);
      goto enter_float_environment_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (enter_float_environment_6)
DEFLABEL (enter_float_environment_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  Wrd9 = Wrd5;

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_8)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_10;
  Wrd11 = Wrd15;

DEFLABEL (label_9)
  Wrd9 = Wrd11;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_8 5
#define LABEL_4_9 7
#define LABEL_4_5 9
#define LABEL_4_6 11
#define ENVIRONMENT_LABEL_4_3 24
#define DEBUGGING_LABEL_4_2 23
#define OBJECT_4_3 22
#define OBJECT_4_2 21
#define OBJECT_4_1 20
#define OBJECT_4_0 19
#define EXECUTE_CACHE_4_11 13
#define EXECUTE_CACHE_4_10 15
#define EXECUTE_CACHE_4_7 17
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_4_4);
      goto maybe_save_thread_float_environmentB_5;

    case 1:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_save_thread_float_environmentB_8)
DEFLABEL (maybe_save_thread_float_environmentB_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  if (! ((Wrd10.Obj) == (current_block [OBJECT_4_1])))
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 0);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Wrd19.Obj) = Rvl;

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (label_12)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd19.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_7 7
#define EXECUTE_CACHE_5_6 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto use_floating_point_environmentB_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (use_floating_point_environmentB_4)
DEFLABEL (use_floating_point_environmentB_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_8 9
#define LABEL_6_11 11
#define LABEL_6_12 13
#define LABEL_6_13 15
#define ENVIRONMENT_LABEL_6_3 28
#define DEBUGGING_LABEL_6_2 27
#define OBJECT_6_1 26
#define OBJECT_6_0 25
#define EXECUTE_CACHE_6_14 17
#define EXECUTE_CACHE_6_10 19
#define EXECUTE_CACHE_6_9 21
#define EXECUTE_CACHE_6_7 23
#define FREE_REFERENCES_LABEL_6_0 16
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
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
      goto flo_environment_8;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_environment_11)
DEFLABEL (flo_environment_8)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 0);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_12);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_8 9
#define LABEL_7_11 11
#define LABEL_7_13 13
#define LABEL_7_12 15
#define ENVIRONMENT_LABEL_7_3 30
#define DEBUGGING_LABEL_7_2 29
#define OBJECT_7_1 28
#define OBJECT_7_0 27
#define EXECUTE_CACHE_7_14 17
#define EXECUTE_CACHE_7_10 19
#define EXECUTE_CACHE_7_9 21
#define EXECUTE_CACHE_7_7 23
#define FREE_REFERENCE_7_0 26
#define FREE_REFERENCES_LABEL_7_0 16
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_7_4);
      goto flo_set_environmentB_8;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_set_environmentB_12)
DEFLABEL (flo_set_environmentB_8)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  Wrd9 = Wrd5;

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_15)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_17;
  Wrd12 = Wrd16;

DEFLABEL (label_16)
  Wrd9 = Wrd12;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_13])), (Wrd13.pObj));

DEFLABEL (label_10)
  (Wrd12.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_8 9
#define LABEL_8_11 11
#define TAG_8_12 4
#define LABEL_8_14 13
#define LABEL_8_16 15
#define LABEL_8_15 17
#define ENVIRONMENT_LABEL_8_3 34
#define DEBUGGING_LABEL_8_2 33
#define OBJECT_8_1 32
#define OBJECT_8_0 31
#define EXECUTE_CACHE_8_17 19
#define EXECUTE_CACHE_8_13 21
#define EXECUTE_CACHE_8_10 23
#define EXECUTE_CACHE_8_9 25
#define EXECUTE_CACHE_8_7 27
#define FREE_REFERENCE_8_0 30
#define FREE_REFERENCES_LABEL_8_0 18
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      goto flo_update_environmentB_9;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_8_11);
      goto lambda_14;

    case 5:
      current_block = (Rpc - LABEL_8_14);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_8_16);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_8_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_update_environmentB_13)
DEFLABEL (flo_update_environmentB_9)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (current_block [OBJECT_8_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_11])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_8_11);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  Wrd11 = Wrd7;

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_17)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_19;
  Wrd13 = Wrd17;

DEFLABEL (label_18)
  Wrd11 = Wrd13;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_16])), (Wrd14.pObj));

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 5
#define DEBUGGING_LABEL_9_2 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto flo_default_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_default_environment_3)
DEFLABEL (flo_default_environment_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_8 7
#define LABEL_10_6 9
#define LABEL_10_9 11
#define LABEL_10_10 13
#define LABEL_10_11 15
#define LABEL_10_12 17
#define LABEL_10_14 19
#define LABEL_10_15 21
#define LABEL_10_17 23
#define LABEL_10_18 25
#define LABEL_10_20 27
#define LABEL_10_21 29
#define ENVIRONMENT_LABEL_10_3 50
#define DEBUGGING_LABEL_10_2 49
#define OBJECT_10_7 48
#define OBJECT_10_6 47
#define OBJECT_10_5 46
#define OBJECT_10_4 45
#define OBJECT_10_3 44
#define OBJECT_10_2 43
#define OBJECT_10_1 42
#define OBJECT_10_0 41
#define EXECUTE_CACHE_10_19 31
#define EXECUTE_CACHE_10_16 33
#define EXECUTE_CACHE_10_13 35
#define EXECUTE_CACHE_10_7 37
#define FREE_ASSIGNMENT_10_0 40
#define FREE_REFERENCES_LABEL_10_0 30
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_10_4);
      goto reset_packageB_14;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_13;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_10_6);
      goto lambda_12;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_10_14);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_10_15);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_10_17);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_10_20);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_10_21);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_packageB_18)
DEFLABEL (reset_packageB_14)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_10_0]);
  goto pop_return;

DEFLABEL (label_22)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_16)
  goto label_20;

DEFLABEL (lambda_19)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_10_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 0);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_15);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_5]), 1);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_18);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_6]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 0);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 1);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_10_21);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_8 9
#define ENVIRONMENT_LABEL_11_3 19
#define DEBUGGING_LABEL_11_2 18
#define EXECUTE_CACHE_11_9 11
#define EXECUTE_CACHE_11_6 13
#define FREE_REFERENCE_11_1 16
#define FREE_REFERENCE_11_0 17
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto initialize_packageB_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_6)
DEFLABEL (initialize_packageB_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_8;
  Wrd11 = Wrd15;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
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
floenv_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto float_rounding_modes_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (float_rounding_modes_3)
DEFLABEL (float_rounding_modes_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 0);

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
floenv_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto get_float_rounding_mode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_float_rounding_mode_3)
DEFLABEL (get_float_rounding_mode_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 0);

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
floenv_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_float_rounding_mode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_float_rounding_mode_3)
DEFLABEL (set_float_rounding_mode_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define LABEL_15_8 11
#define LABEL_15_9 13
#define LABEL_15_10 15
#define ENVIRONMENT_LABEL_15_3 24
#define DEBUGGING_LABEL_15_2 23
#define OBJECT_15_4 22
#define OBJECT_15_3 21
#define OBJECT_15_2 20
#define OBJECT_15_1 19
#define OBJECT_15_0 18
#define FREE_REFERENCE_15_0 17
#define FREE_REFERENCES_LABEL_15_0 16
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd42;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd48;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd6;
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
      goto flo_rounding_modes_13;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_15_8);
      goto loop_10;

    case 5:
      current_block = (Rpc - LABEL_15_9);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_15_10);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_rounding_modes_20)
DEFLABEL (flo_rounding_modes_13)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 0);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_25;
  Wrd6 = Wrd10;

DEFLABEL (label_24)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_23;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_22)
  (Wrd21.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto loop_10;

DEFLABEL (label_23)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd7.pObj));

DEFLABEL (label_15)
  (Wrd6.Obj) = Rvl;
  goto label_24;

DEFLABEL (loop_21)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_15_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_26;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd13.Lng) = 1L;
  (Wrd18.Lng) = (FIXNUM_LSH ((Wrd13.Lng), (Wrd6.Lng)));
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd18.Lng) & (Wrd20.Lng));
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  if ((Wrd17.Obj) == (current_block [OBJECT_15_3]))
    goto label_32;
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_31;
  Wrd24 = Wrd28;

DEFLABEL (label_30)
  Wrd23 = Wrd24;
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_29;
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_29;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_29;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd34.pObj) = (& ((Wrd39.pObj) [(Wrd32.Lng)]));
  (Wrd30.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_28)
  (Wrd51.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));

DEFLABEL (label_27)
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd55.Lng) = ((Wrd54.Lng) + 1L);
  (Wrd52.Obj) = (LONG_TO_FIXNUM (Wrd55.Lng));
  (Rsp [0]) = (Wrd52.Obj);
  goto loop_10;

DEFLABEL (label_29)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 2);

DEFLABEL (label_18)
  (Wrd30.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_9])), (Wrd25.pObj));

DEFLABEL (label_17)
  (Wrd24.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd48.Obj) = (Rsp [1]);
  goto label_27;

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
floenv_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto flo_default_rounding_mode_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_default_rounding_mode_3)
DEFLABEL (flo_default_rounding_mode_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  Rvl = (current_block [OBJECT_16_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_5 7
#define LABEL_17_7 9
#define LABEL_17_8 11
#define LABEL_17_9 13
#define ENVIRONMENT_LABEL_17_3 24
#define DEBUGGING_LABEL_17_2 23
#define OBJECT_17_3 22
#define OBJECT_17_2 21
#define OBJECT_17_1 20
#define OBJECT_17_0 19
#define EXECUTE_CACHE_17_10 15
#define FREE_REFERENCE_17_0 18
#define FREE_REFERENCES_LABEL_17_0 14
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd51;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_17_4);
      goto flo_rounding_mode_5;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_17_8);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_rounding_mode_11)
DEFLABEL (flo_rounding_mode_5)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_20;
  Wrd6 = Wrd10;

DEFLABEL (label_19)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_18;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));

DEFLABEL (label_17)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd22.Lng) < (Wrd23.Lng))
    goto label_16;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_17_3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_6);

DEFLABEL (label_16)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_15;
  Wrd29 = Wrd33;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd51.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_13)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_12;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) (Wrd45.Lng)) < ((unsigned long) (Wrd49.Lng))))
    goto label_12;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd40.pObj) = (& ((Wrd47.pObj) [(Wrd37.Lng)]));
  Rvl = ((Wrd40.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_9])), (Wrd30.pObj));

DEFLABEL (label_9)
  (Wrd29.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_18)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_7])), (Wrd7.pObj));

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define ENVIRONMENT_LABEL_18_3 16
#define DEBUGGING_LABEL_18_2 15
#define OBJECT_18_1 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_8 9
#define EXECUTE_CACHE_18_6 11
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto flo_set_rounding_modeB_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_set_rounding_modeB_5)
DEFLABEL (flo_set_rounding_modeB_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define TAG_19_8 2
#define LABEL_19_10 9
#define LABEL_19_12 11
#define ENVIRONMENT_LABEL_19_3 22
#define DEBUGGING_LABEL_19_2 21
#define OBJECT_19_1 20
#define OBJECT_19_0 19
#define EXECUTE_CACHE_19_11 13
#define EXECUTE_CACHE_19_9 15
#define EXECUTE_CACHE_19_6 17
#define FREE_REFERENCES_LABEL_19_0 12
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_19_4);
      goto flo_with_rounding_mode_5;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_19_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_with_rounding_mode_8)
DEFLABEL (flo_with_rounding_mode_5)
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
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_19_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_12);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_8 9
#define LABEL_20_9 11
#define LABEL_20_10 13
#define LABEL_20_11 15
#define LABEL_20_12 17
#define ENVIRONMENT_LABEL_20_3 29
#define DEBUGGING_LABEL_20_2 28
#define OBJECT_20_2 27
#define OBJECT_20_1 26
#define OBJECT_20_0 25
#define EXECUTE_CACHE_20_13 19
#define EXECUTE_CACHE_20_6 21
#define FREE_REFERENCE_20_0 24
#define FREE_REFERENCES_LABEL_20_0 18
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_20_4);
      goto Z__mode_name__number_11;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_20_10);
      goto loop_8;

    case 6:
      current_block = (Rpc - LABEL_20_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_20_12);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__mode_name__number_18)
DEFLABEL (Z__mode_name__number_11)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_23;
  Wrd6 = Wrd10;

DEFLABEL (label_22)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_21;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_20)
  (Wrd21.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto loop_8;

DEFLABEL (label_21)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_7])), (Wrd7.pObj));

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_22;

DEFLABEL (loop_19)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_20_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_29;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_9);

DEFLABEL (label_29)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_28;
  Wrd15 = Wrd19;

DEFLABEL (label_27)
  Wrd14 = Wrd15;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_26;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_26;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) (Wrd29.Lng)) < ((unsigned long) (Wrd32.Lng))))
    goto label_26;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd25.pObj) = (& ((Wrd30.pObj) [(Wrd23.Lng)]));
  (Wrd21.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_25)
  (Wrd39.Obj) = (Rsp [2]);
  if ((Wrd39.Obj) == (Wrd21.Obj))
    goto label_24;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd42.Lng) + 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (Rsp [0]) = (Wrd40.Obj);
  goto loop_8;

DEFLABEL (label_24)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_16)
  (Wrd21.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_11])), (Wrd16.pObj));

DEFLABEL (label_15)
  (Wrd15.Obj) = Rvl;
  goto label_27;

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
floenv_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto flo_supported_exceptions_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_supported_exceptions_3)
DEFLABEL (flo_supported_exceptions_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 0);

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
floenv_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto flo_exception_divide_by_zero_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_exception_divide_by_zero_3)
DEFLABEL (flo_exception_divide_by_zero_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
floenv_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto flo_exception_invalid_operation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_exception_invalid_operation_3)
DEFLABEL (flo_exception_invalid_operation_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
floenv_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto flo_exception_underflow_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_exception_underflow_3)
DEFLABEL (flo_exception_underflow_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 6
#define DEBUGGING_LABEL_25_2 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto flo_exception_overflow_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_exception_overflow_3)
DEFLABEL (flo_exception_overflow_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 6
#define DEBUGGING_LABEL_26_2 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto flo_exception_inexact_result_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_exception_inexact_result_3)
DEFLABEL (flo_exception_inexact_result_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
floenv_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto flo_test_exceptions_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_test_exceptions_3)
DEFLABEL (flo_test_exceptions_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 6
#define DEBUGGING_LABEL_28_2 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto flo_save_exception_flags_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_save_exception_flags_3)
DEFLABEL (flo_save_exception_flags_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
floenv_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto flo_test_exception_flags_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_test_exception_flags_3)
DEFLABEL (flo_test_exception_flags_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 6
#define DEBUGGING_LABEL_30_2 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto flo_trapped_exceptions_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_trapped_exceptions_3)
DEFLABEL (flo_trapped_exceptions_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 6
#define DEBUGGING_LABEL_31_2 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto flo_trappable_exceptions_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_trappable_exceptions_3)
DEFLABEL (flo_trappable_exceptions_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 11
#define DEBUGGING_LABEL_32_2 10
#define OBJECT_32_0 9
#define EXECUTE_CACHE_32_6 7
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto flo_clear_exceptionsB_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_clear_exceptionsB_4)
DEFLABEL (flo_clear_exceptionsB_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define ENVIRONMENT_LABEL_33_3 11
#define DEBUGGING_LABEL_33_2 10
#define OBJECT_33_0 9
#define EXECUTE_CACHE_33_6 7
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto flo_raise_exceptionsB_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_raise_exceptionsB_4)
DEFLABEL (flo_raise_exceptionsB_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define ENVIRONMENT_LABEL_34_3 11
#define DEBUGGING_LABEL_34_2 10
#define OBJECT_34_0 9
#define EXECUTE_CACHE_34_6 7
#define FREE_REFERENCES_LABEL_34_0 6
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto flo_restore_exception_flagsB_1;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_restore_exception_flagsB_4)
DEFLABEL (flo_restore_exception_flagsB_1)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define ENVIRONMENT_LABEL_35_3 11
#define DEBUGGING_LABEL_35_2 10
#define OBJECT_35_0 9
#define EXECUTE_CACHE_35_6 7
#define FREE_REFERENCES_LABEL_35_0 6
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto flo_set_trapped_exceptionsB_1;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_set_trapped_exceptionsB_4)
DEFLABEL (flo_set_trapped_exceptionsB_1)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define ENVIRONMENT_LABEL_36_3 11
#define DEBUGGING_LABEL_36_2 10
#define OBJECT_36_0 9
#define EXECUTE_CACHE_36_6 7
#define FREE_REFERENCES_LABEL_36_0 6
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto flo_trap_exceptionsB_1;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_trap_exceptionsB_4)
DEFLABEL (flo_trap_exceptionsB_1)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 11
#define DEBUGGING_LABEL_37_2 10
#define OBJECT_37_0 9
#define EXECUTE_CACHE_37_6 7
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto flo_untrap_exceptionsB_1;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_untrap_exceptionsB_4)
DEFLABEL (flo_untrap_exceptionsB_1)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 11
#define DEBUGGING_LABEL_38_2 10
#define OBJECT_38_0 9
#define EXECUTE_CACHE_38_6 7
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto flo_defer_exception_trapsB_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_defer_exception_trapsB_4)
DEFLABEL (flo_defer_exception_trapsB_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define LABEL_39_7 9
#define LABEL_39_8 11
#define ENVIRONMENT_LABEL_39_3 17
#define DEBUGGING_LABEL_39_2 16
#define OBJECT_39_3 15
#define OBJECT_39_2 14
#define OBJECT_39_1 13
#define OBJECT_39_0 12
#define FREE_REFERENCES_LABEL_39_0 12
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
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
      goto flo_default_trapped_exceptions_6;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_default_trapped_exceptions_9)
DEFLABEL (flo_default_trapped_exceptions_6)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 0);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 0);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_6);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd9.Lng) = ((Wrd7.Lng) | (Wrd8.Lng));
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 0);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd10.Lng) = ((Wrd8.Lng) | (Wrd9.Lng));
  (Wrd11.Obj) = (* (Rsp++));
  Wrd12 = Wrd10;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd14.Lng) = ((Wrd12.Lng) | (Wrd13.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd14.Lng));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_8 7
#define LABEL_40_7 9
#define LABEL_40_9 11
#define LABEL_40_10 13
#define LABEL_40_11 15
#define LABEL_40_12 17
#define LABEL_40_13 19
#define LABEL_40_15 21
#define LABEL_40_16 23
#define LABEL_40_17 25
#define LABEL_40_18 27
#define LABEL_40_19 29
#define ENVIRONMENT_LABEL_40_3 49
#define DEBUGGING_LABEL_40_2 48
#define OBJECT_40_12 47
#define OBJECT_40_11 46
#define OBJECT_40_10 45
#define OBJECT_40_9 44
#define OBJECT_40_8 43
#define OBJECT_40_7 42
#define OBJECT_40_6 41
#define OBJECT_40_5 40
#define OBJECT_40_4 39
#define OBJECT_40_3 38
#define OBJECT_40_2 37
#define OBJECT_40_1 36
#define OBJECT_40_0 35
#define EXECUTE_CACHE_40_14 31
#define EXECUTE_CACHE_40_6 33
#define FREE_REFERENCES_LABEL_40_0 30
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_40_4);
      goto flo_exceptions__names_17;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_40_9);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_40_10);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_40_11);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_40_12);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_40_13);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_40_15);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_40_16);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_40_17);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_40_18);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_40_19);
      goto n_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_exceptions__names_20)
DEFLABEL (flo_exceptions__names_17)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 0);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd8.Lng) &~ (Wrd9.Lng));
  if ((Wrd11.Lng) == 0)
    goto label_22;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_8);

DEFLABEL (label_22)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.pObj) = (& (Rsp [2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.pObj) = (& (Rsp [4]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.pObj) = (& (Rsp [6]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.pObj) = (& (Rsp [8]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_40_2]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_13]))));
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 0);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_40_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [4]));
  goto n_16;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_40_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_7]), 0);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_40_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [4]));
  goto n_16;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_40_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_6]), 0);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_40_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [4]));
  goto n_16;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_40_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_5]), 0);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_40_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [4]));
  goto n_16;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_40_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_4]), 0);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_40_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [5]));
  goto n_16;

DEFLABEL (n_21)
DEFLABEL (n_16)
  DLINK_INTERRUPT_CHECK (25, LABEL_40_19);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd13.Lng) = ((Wrd7.Lng) & (Wrd11.Lng));
  if ((Wrd13.Lng) == 0)
    goto label_24;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  goto label_23;

DEFLABEL (label_24)
  Rvl = (Rsp [2]);

DEFLABEL (label_23)
DEFLABEL (label_25)
  Rsp = Rdl;
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_7 5
#define LABEL_41_9 7
#define LABEL_41_5 9
#define TAG_41_6 3
#define LABEL_41_10 11
#define ENVIRONMENT_LABEL_41_3 36
#define DEBUGGING_LABEL_41_2 35
#define OBJECT_41_11 34
#define OBJECT_41_10 33
#define OBJECT_41_9 32
#define OBJECT_41_8 31
#define OBJECT_41_7 30
#define OBJECT_41_6 29
#define OBJECT_41_5 28
#define OBJECT_41_4 27
#define OBJECT_41_3 26
#define OBJECT_41_2 25
#define OBJECT_41_1 24
#define OBJECT_41_0 23
#define EXECUTE_CACHE_41_13 13
#define EXECUTE_CACHE_41_12 15
#define EXECUTE_CACHE_41_11 17
#define EXECUTE_CACHE_41_8 19
#define FREE_REFERENCE_41_0 22
#define FREE_REFERENCES_LABEL_41_0 12
#define NUMBER_OF_LINKER_SECTIONS_41_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_41_4);
      goto flo_names__exceptions_9;

    case 1:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_41_9);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_41_5);
      goto name__exceptions_14;

    case 4:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_names__exceptions_13)
DEFLABEL (flo_names__exceptions_9)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_5])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  Wrd11 = Wrd13;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_10);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_41_11]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_9])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (name__exceptions_14)
  CLOSURE_HEADER (LABEL_41_5);

DEFLABEL (name__exceptions_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_41_1])))
    goto label_17;
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 0);

DEFLABEL (label_17)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_41_3])))
    goto label_18;
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_4]), 0);

DEFLABEL (label_18)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_41_5])))
    goto label_19;
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_6]), 0);

DEFLABEL (label_19)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_41_7])))
    goto label_20;
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_8]), 0);

DEFLABEL (label_20)
  if ((Wrd5.Obj) == (current_block [OBJECT_41_9]))
    goto label_21;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [2]);
  (Rsp [0]) = (Wrd15.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_10]), 0);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define TAG_42_6 1
#define LABEL_42_8 7
#define LABEL_42_10 9
#define LABEL_42_11 11
#define ENVIRONMENT_LABEL_42_3 20
#define DEBUGGING_LABEL_42_2 19
#define EXECUTE_CACHE_42_12 13
#define EXECUTE_CACHE_42_9 15
#define EXECUTE_CACHE_42_7 17
#define FREE_REFERENCES_LABEL_42_0 12
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_42_4);
      goto flo_deferring_exception_traps_6;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_42_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_42_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_42_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_deferring_exception_traps_9)
DEFLABEL (flo_deferring_exception_traps_6)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_42_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_11);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define TAG_43_6 1
#define LABEL_43_8 7
#define ENVIRONMENT_LABEL_43_3 14
#define DEBUGGING_LABEL_43_2 13
#define EXECUTE_CACHE_43_9 9
#define EXECUTE_CACHE_43_7 11
#define FREE_REFERENCES_LABEL_43_0 8
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto flo_ignoring_exception_traps_2;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_ignoring_exception_traps_5)
DEFLABEL (flo_ignoring_exception_traps_2)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_43_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_8);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define TAG_44_8 2
#define LABEL_44_10 9
#define ENVIRONMENT_LABEL_44_3 18
#define DEBUGGING_LABEL_44_2 17
#define EXECUTE_CACHE_44_11 11
#define EXECUTE_CACHE_44_9 13
#define EXECUTE_CACHE_44_6 15
#define FREE_REFERENCES_LABEL_44_0 10
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_44_4);
      goto flo_preserving_environment_5;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto swap_9;

    case 3:
      current_block = (Rpc - LABEL_44_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_preserving_environment_8)
DEFLABEL (flo_preserving_environment_5)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_7])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd13.Obj);
  ((Wrd15.pObj) [2]) = (Wrd13.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [0]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_9]));

DEFLABEL (swap_9)
  CLOSURE_HEADER (LABEL_44_7);

DEFLABEL (swap_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_10);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define TAG_45_6 1
#define LABEL_45_8 7
#define LABEL_45_9 9
#define ENVIRONMENT_LABEL_45_3 18
#define DEBUGGING_LABEL_45_2 17
#define EXECUTE_CACHE_45_11 11
#define EXECUTE_CACHE_45_10 13
#define EXECUTE_CACHE_45_7 15
#define FREE_REFERENCES_LABEL_45_0 10
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_45_4);
      goto flo_with_default_environment_3;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_45_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_with_default_environment_6)
DEFLABEL (flo_with_default_environment_3)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_45_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_8);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define TAG_46_6 1
#define LABEL_46_8 7
#define ENVIRONMENT_LABEL_46_3 14
#define DEBUGGING_LABEL_46_2 13
#define EXECUTE_CACHE_46_9 9
#define EXECUTE_CACHE_46_7 11
#define FREE_REFERENCES_LABEL_46_0 8
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_46_4);
      goto flo_with_trapped_exceptions_2;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_with_trapped_exceptions_5)
DEFLABEL (flo_with_trapped_exceptions_2)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_46_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_8);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define TAG_47_6 1
#define LABEL_47_8 7
#define ENVIRONMENT_LABEL_47_3 14
#define DEBUGGING_LABEL_47_2 13
#define EXECUTE_CACHE_47_9 9
#define EXECUTE_CACHE_47_7 11
#define FREE_REFERENCES_LABEL_47_0 8
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_47_4);
      goto flo_with_exceptions_trapped_2;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_47_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_with_exceptions_trapped_5)
DEFLABEL (flo_with_exceptions_trapped_2)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_47_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_8);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define TAG_48_6 1
#define LABEL_48_8 7
#define ENVIRONMENT_LABEL_48_3 14
#define DEBUGGING_LABEL_48_2 13
#define EXECUTE_CACHE_48_9 9
#define EXECUTE_CACHE_48_7 11
#define FREE_REFERENCES_LABEL_48_0 8
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
floenv_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_48_4);
      goto flo_with_exceptions_untrapped_2;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_with_exceptions_untrapped_5)
DEFLABEL (flo_with_exceptions_untrapped_2)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_48_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_8);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
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
floenv_so_4b5106d439778e7c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
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
	2,
	1,
	1,
	2,
	0,
	1,
	0,
	0,
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
	0,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 48)
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

static const struct liarc_code_S arr_decl_floenv_so_4b5106d439778e7c [48] =
  {
    { "floenv_so_code_1", 8, floenv_so_code_1 },
    { "floenv_so_code_2", 1, floenv_so_code_2 },
    { "floenv_so_code_3", 2, floenv_so_code_3 },
    { "floenv_so_code_4", 5, floenv_so_code_4 },
    { "floenv_so_code_5", 2, floenv_so_code_5 },
    { "floenv_so_code_6", 7, floenv_so_code_6 },
    { "floenv_so_code_7", 7, floenv_so_code_7 },
    { "floenv_so_code_8", 8, floenv_so_code_8 },
    { "floenv_so_code_9", 1, floenv_so_code_9 },
    { "floenv_so_code_10", 14, floenv_so_code_10 },
    { "floenv_so_code_11", 4, floenv_so_code_11 },
    { "floenv_so_code_12", 1, floenv_so_code_12 },
    { "floenv_so_code_13", 1, floenv_so_code_13 },
    { "floenv_so_code_14", 1, floenv_so_code_14 },
    { "floenv_so_code_15", 7, floenv_so_code_15 },
    { "floenv_so_code_16", 1, floenv_so_code_16 },
    { "floenv_so_code_17", 6, floenv_so_code_17 },
    { "floenv_so_code_18", 3, floenv_so_code_18 },
    { "floenv_so_code_19", 5, floenv_so_code_19 },
    { "floenv_so_code_20", 8, floenv_so_code_20 },
    { "floenv_so_code_21", 1, floenv_so_code_21 },
    { "floenv_so_code_22", 1, floenv_so_code_22 },
    { "floenv_so_code_23", 1, floenv_so_code_23 },
    { "floenv_so_code_24", 1, floenv_so_code_24 },
    { "floenv_so_code_25", 1, floenv_so_code_25 },
    { "floenv_so_code_26", 1, floenv_so_code_26 },
    { "floenv_so_code_27", 1, floenv_so_code_27 },
    { "floenv_so_code_28", 1, floenv_so_code_28 },
    { "floenv_so_code_29", 1, floenv_so_code_29 },
    { "floenv_so_code_30", 1, floenv_so_code_30 },
    { "floenv_so_code_31", 1, floenv_so_code_31 },
    { "floenv_so_code_32", 2, floenv_so_code_32 },
    { "floenv_so_code_33", 2, floenv_so_code_33 },
    { "floenv_so_code_34", 2, floenv_so_code_34 },
    { "floenv_so_code_35", 2, floenv_so_code_35 },
    { "floenv_so_code_36", 2, floenv_so_code_36 },
    { "floenv_so_code_37", 2, floenv_so_code_37 },
    { "floenv_so_code_38", 2, floenv_so_code_38 },
    { "floenv_so_code_39", 5, floenv_so_code_39 },
    { "floenv_so_code_40", 14, floenv_so_code_40 },
    { "floenv_so_code_41", 5, floenv_so_code_41 },
    { "floenv_so_code_42", 5, floenv_so_code_42 },
    { "floenv_so_code_43", 3, floenv_so_code_43 },
    { "floenv_so_code_44", 4, floenv_so_code_44 },
    { "floenv_so_code_45", 4, floenv_so_code_45 },
    { "floenv_so_code_46", 3, floenv_so_code_46 },
    { "floenv_so_code_47", 3, floenv_so_code_47 },
    { "floenv_so_code_48", 3, floenv_so_code_48 }
  };

int
decl_floenv_so_4b5106d439778e7c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_floenv_so_4b5106d439778e7c);
  return (0);
}

DECLARE_COMPILED_CODE ("floenv.so", 3, decl_floenv_so_4b5106d439778e7c, floenv_so_4b5106d439778e7c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_floenv_so_data_4b5106d439778e7c [5055] =
  "\x5c\x47\xb8\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\xc1\xb9\xc0"
  "\xba\x0d\xbb\x24\x28\x0d\xbc\x28\x0d\xbd\x28\x0d\xbe\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbf\x1d\xb0\x82\x88\xb1\x1d\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x83\x88\xb1\xb3\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84"
  "\x88\x07\xb2\x1d\x1d\x28\xb4\x28\xb6\x28\xb5\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x07\x28"
  "\x0d\x1c\x28\xb6\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86"
  "\x88\xb2\x07\x28\x1b\x28\xb5\x28\xb4\x28\xb6\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x1d\xb3\x24\x28\x1b\x28\xb5\x28\xb4\x28\xb6\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x1d\xb3\x24\x28\x1b\x28\xb5\x28\xb4\x28"
  "\x0d\x1c\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x02\x88\x22\x29\x21"
  "\x9c\x2b\xbd\x1d\xb0\x02\x88\xb1\xc1\xbc\xc1\xb9\xc1\x1c\xc0\x1c"
  "\x0d\xb2\x1d\xb3\x25\x28\x1b\x28\x0d\x1c\x28\x0d\xba\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x24\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc0\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc0\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\x1c\x80\x08\xc1\x1c\x1b\x0d\x1c\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b"
  "\x1b\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x28\x0d\x1c"
  "\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x0d\x1c\x28\xb2\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80"
  "\x1b\x1b\x24\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc0\x1c\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc0\x1c\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\xc0\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\xc0\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc0\x1c\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc0\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\xc0\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\xc1"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88\xc1"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc0"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x1b\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b"
  "\x1b\x1b\x1b\x1b\x08\x1b\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x80\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1c\x0d\x24"
  "\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x28\x0d\xb8\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb4\x2a\x1b\x2a\x1b\x2a\xb1\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x0d\x0d\x0d\x1b\x9b\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a\x1e\xb6\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\x17\x0d\x0d\x0d"
  "\x0d\x1b\x0d\x0d\x1b\x1b\x1b\x1b\xb0\x1b\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\xb2\x1b\x1b\x0d\x1b\x0d\x1b"
  "\x0d\x0d\x0d\x0d\x1b\x1b\xb3\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x17"
  "\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e"
  "\x74\x69\x6d\x65\x2f\x2e\x2f\x66\x6c\x6f\x65\x6e\x76\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x16\x73\x65\x74\x2d\x66\x6c\x6f\x61"
  "\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x12\x66\x6c"
  "\x6f\x61\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x14"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x02\x03\x19\x74\x68\x72\x65\x61\x64\x2d\x66\x6c\x6f"
  "\x61\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x05"
  "\x65\x71\x76\x3f\x04\x1e\x73\x65\x74\x2d\x74\x68\x72\x65\x61\x64"
  "\x2d\x66\x6c\x6f\x61\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x21\x04\x0b\x12\x81\x83\x02\x0a\x10\x81\x85\x02\x09\x0e"
  "\x81\x85\x02\x08\x0c\x81\x83\x02\x07\x0a\x81\x83\x02\x06\x08\x81"
  "\x83\x02\x05\x06\x81\x83\x02\x04\x04\x83\x04\x11\x20\x02\x02\x0c"
  "\x04\x83\x04\x03\x09\x02\x02\x0e\x06\x81\x85\x02\x0d\x04\x83\x04"
  "\x05\x0b\x0a\x02\x08\x02\x03\x04\x04\x04\x13\x0c\x81\x87\x02\x12"
  "\x0a\x81\x85\x02\x11\x08\x81\x85\x02\x10\x06\x81\x87\x02\x0f\x04"
  "\x84\x04\x0b\x19\x0b\x02\x02\x0f\x63\x75\x72\x72\x65\x6e\x74\x2d"
  "\x74\x68\x72\x65\x61\x64\x0c\x04\x03\x15\x06\x81\x83\x02\x14\x04"
  "\x82\x02\x05\x0e\x0d\x02\x02\x0c\x04\x03\x04\x05\x1c\x10\x81\x87"
  "\x02\x1b\x0e\x81\x83\x02\x1a\x0c\x81\x83\x02\x19\x0a\x81\x83\x02"
  "\x18\x08\x81\x83\x02\x17\x06\x81\x81\x02\x16\x04\x82\x02\x0f\x1d"
  "\x0e\x02\x08\x02\x02\x02\x0c\x04\x03\x04\x05\x23\x10\x81\x89\x02"
  "\x22\x0e\x81\x87\x02\x21\x0c\x81\x85\x02\x20\x0a\x81\x85\x02\x1f"
  "\x08\x81\x85\x02\x1e\x06\x81\x83\x02\x1d\x04\x83\x04\x0f\x1f\x0f"
  "\x02\x09\x19\x75\x70\x64\x61\x74\x65\x2d\x66\x6c\x6f\x61\x74\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x02\x02\x02\x0c\x04"
  "\x03\x03\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74\x65\x72"
  "\x72\x75\x70\x74\x73\x0c\x04\x06\x2b\x12\x81\x87\x02\x2a\x10\x81"
  "\x85\x02\x29\x0e\x81\x83\x02\x28\x0c\x81\x83\x02\x27\x0a\x81\x85"
  "\x02\x26\x08\x81\x85\x02\x25\x06\x81\x83\x02\x24\x04\x83\x04\x11"
  "\x23\x02\x0a\x2c\x04\x82\x02\x03\x02\x0b\x1d\x73\x65\x74\x2d\x74"
  "\x72\x61\x70\x70\x65\x64\x2d\x66\x6c\x6f\x61\x74\x2d\x65\x78\x63"
  "\x65\x70\x74\x69\x6f\x6e\x73\x17\x63\x6c\x65\x61\x72\x2d\x66\x6c"
  "\x6f\x61\x74\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x73\x18\x73"
  "\x65\x74\x2d\x66\x6c\x6f\x61\x74\x2d\x72\x6f\x75\x6e\x64\x69\x6e"
  "\x67\x2d\x6d\x6f\x64\x65\x10\x11\x66\x6c\x6f\x61\x74\x2d\x65\x78"
  "\x63\x65\x70\x74\x69\x6f\x6e\x73\x11\x36\x23\x5b\x28\x72\x75\x6e"
  "\x74\x69\x6d\x65\x20\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f"
  "\x69\x6e\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x29"
  "\x72\x65\x73\x65\x74\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x5d\x02"
  "\x02\x03\x0c\x02\x1a\x66\x6c\x6f\x3a\x64\x65\x66\x61\x75\x6c\x74"
  "\x2d\x72\x6f\x75\x6e\x64\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x0c\x04"
  "\x13\x25\x6d\x6f\x64\x65\x2d\x6e\x61\x6d\x65\x2d\x3e\x6e\x75\x6d"
  "\x62\x65\x72\x02\x1f\x66\x6c\x6f\x3a\x64\x65\x66\x61\x75\x6c\x74"
  "\x2d\x74\x72\x61\x70\x70\x65\x64\x2d\x65\x78\x63\x65\x70\x74\x69"
  "\x6f\x6e\x73\x12\x05\x3a\x1e\x81\x85\x02\x39\x1c\x81\x83\x02\x38"
  "\x1a\x81\x85\x02\x37\x18\x81\x83\x02\x36\x16\x81\x85\x02\x35\x14"
  "\x81\x83\x02\x34\x12\x81\x89\x02\x33\x10\x81\x85\x02\x32\x0e\x81"
  "\x83\x02\x31\x0c\x81\x81\x02\x30\x0a\x82\x02\x2f\x08\x81\x81\x02"
  "\x2e\x06\x81\x81\x02\x2d\x04\x82\x02\x1d\x33\x13\x02\x0c\x0f\x72"
  "\x65\x73\x65\x74\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x14\x14\x65"
  "\x76\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x6f"
  "\x72\x65\x03\x02\x14\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e\x74"
  "\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x21\x03\x3e\x0a\x81\x83\x02"
  "\x3d\x08\x81\x81\x02\x3c\x06\x81\x81\x02\x3b\x04\x82\x02\x09\x14"
  "\x15\x02\x0d\x15\x66\x6c\x6f\x61\x74\x2d\x72\x6f\x75\x6e\x64\x69"
  "\x6e\x67\x2d\x6d\x6f\x64\x65\x73\x16\x3f\x04\x82\x02\x03\x17\x02"
  "\x0e\x18\x67\x65\x74\x2d\x66\x6c\x6f\x61\x74\x2d\x72\x6f\x75\x6e"
  "\x64\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x18\x40\x04\x82\x02\x03\x19"
  "\x02\x0f\x10\x41\x04\x83\x04\x03\x1a\x02\x10\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x1b\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x1c\x16\x1a\x66\x6c\x6f\x61\x74\x2d\x72\x6f"
  "\x75\x6e\x64\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x2d\x6e\x61\x6d\x65"
  "\x73\x16\x02\x48\x10\x81\x89\x02\x47\x0e\x81\x89\x02\x46\x0c\x81"
  "\x89\x02\x45\x0a\x81\x83\x02\x44\x08\x81\x83\x02\x43\x06\x81\x81"
  "\x02\x42\x04\x82\x02\x0f\x19\x1d\x02\x11\x0b\x74\x6f\x2d\x6e\x65"
  "\x61\x72\x65\x73\x74\x1e\x49\x04\x82\x02\x03\x1f\x02\x12\x1d\x55"
  "\x6e\x6b\x6e\x6f\x77\x6e\x20\x66\x6c\x6f\x61\x74\x20\x72\x6f\x75"
  "\x6e\x64\x69\x6e\x67\x20\x6d\x6f\x64\x65\x3a\x1b\x1c\x18\x16\x02"
  "\x04\x06\x65\x72\x72\x6f\x72\x02\x4f\x0e\x81\x83\x02\x4e\x0c\x81"
  "\x83\x02\x4d\x0a\x81\x83\x02\x4c\x08\x81\x81\x02\x4b\x06\x81\x83"
  "\x02\x4a\x04\x82\x02\x0d\x19\x18\x02\x13\x10\x17\x66\x6c\x6f\x3a"
  "\x73\x65\x74\x2d\x72\x6f\x75\x6e\x64\x69\x6e\x67\x2d\x6d\x6f\x64"
  "\x65\x21\x20\x02\x20\x75\x73\x65\x2d\x66\x6c\x6f\x61\x74\x69\x6e"
  "\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x21\x21\x04\x03\x52\x08\x81\x83\x02\x51\x06\x81\x83"
  "\x02\x50\x04\x83\x04\x07\x11\x22\x02\x14\x10\x17\x66\x6c\x6f\x3a"
  "\x77\x69\x74\x68\x2d\x72\x6f\x75\x6e\x64\x69\x6e\x67\x2d\x6d\x6f"
  "\x64\x65\x10\x04\x03\x1b\x66\x6c\x6f\x3a\x70\x72\x65\x73\x65\x72"
  "\x76\x69\x6e\x67\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x23\x02\x21\x04\x57\x0c\x81\x83\x02\x56\x0a\x81\x83\x02\x55\x08"
  "\x81\x83\x02\x54\x06\x81\x85\x02\x53\x04\x84\x06\x0b\x17\x24\x02"
  "\x15\x1b\x1c\x16\x02\x04\x1a\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c"
  "\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x1c\x03\x5f\x12\x81\x89"
  "\x02\x5e\x10\x81\x89\x02\x5d\x0e\x81\x89\x02\x5c\x0c\x81\x89\x02"
  "\x5b\x0a\x81\x85\x02\x5a\x08\x81\x85\x02\x59\x06\x81\x85\x02\x58"
  "\x04\x84\x06\x11\x1e\x1b\x02\x16\x11\x60\x04\x82\x02\x03\x25\x02"
  "\x17\x1f\x66\x6c\x6f\x61\x74\x2d\x64\x69\x76\x69\x64\x65\x2d\x62"
  "\x79\x2d\x7a\x65\x72\x6f\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e"
  "\x26\x61\x04\x82\x02\x03\x27\x02\x18\x22\x66\x6c\x6f\x61\x74\x2d"
  "\x69\x6e\x76\x61\x6c\x69\x64\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x28\x62\x04\x82\x02"
  "\x03\x29\x02\x19\x1a\x66\x6c\x6f\x61\x74\x2d\x75\x6e\x64\x65\x72"
  "\x66\x6c\x6f\x77\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x2a\x63"
  "\x04\x82\x02\x03\x2b\x02\x1a\x19\x66\x6c\x6f\x61\x74\x2d\x6f\x76"
  "\x65\x72\x66\x6c\x6f\x77\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e"
  "\x2c\x64\x04\x82\x02\x03\x2d\x02\x1b\x1f\x66\x6c\x6f\x61\x74\x2d"
  "\x69\x6e\x65\x78\x61\x63\x74\x2d\x72\x65\x73\x75\x6c\x74\x2d\x65"
  "\x78\x63\x65\x70\x74\x69\x6f\x6e\x2e\x65\x04\x82\x02\x03\x2f\x02"
  "\x1c\x16\x74\x65\x73\x74\x2d\x66\x6c\x6f\x61\x74\x2d\x65\x78\x63"
  "\x65\x70\x74\x69\x6f\x6e\x73\x66\x04\x83\x04\x03\x30\x02\x1d\x1b"
  "\x73\x61\x76\x65\x2d\x66\x6c\x6f\x61\x74\x2d\x65\x78\x63\x65\x70"
  "\x74\x69\x6f\x6e\x2d\x66\x6c\x61\x67\x73\x67\x04\x83\x04\x03\x31"
  "\x02\x1e\x1b\x74\x65\x73\x74\x2d\x66\x6c\x6f\x61\x74\x2d\x65\x78"
  "\x63\x65\x70\x74\x69\x6f\x6e\x2d\x66\x6c\x61\x67\x73\x68\x04\x84"
  "\x06\x03\x32\x02\x1f\x19\x74\x72\x61\x70\x70\x65\x64\x2d\x66\x6c"
  "\x6f\x61\x74\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x73\x69\x04"
  "\x82\x02\x03\x33\x02\x20\x1b\x74\x72\x61\x70\x70\x61\x62\x6c\x65"
  "\x2d\x66\x6c\x6f\x61\x74\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e"
  "\x73\x6a\x04\x82\x02\x03\x34\x02\x21\x02\x21\x02\x6c\x06\x81\x83"
  "\x02\x6b\x04\x83\x04\x05\x0c\x02\x22\x17\x72\x61\x69\x73\x65\x2d"
  "\x66\x6c\x6f\x61\x74\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x73"
  "\x02\x21\x02\x6e\x06\x81\x83\x02\x6d\x04\x83\x04\x05\x0c\x35\x02"
  "\x23\x1e\x72\x65\x73\x74\x6f\x72\x65\x2d\x66\x6c\x6f\x61\x74\x2d"
  "\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x2d\x66\x6c\x61\x67\x73\x02"
  "\x21\x02\x70\x06\x81\x85\x02\x6f\x04\x84\x06\x05\x0c\x36\x02\x24"
  "\x02\x21\x02\x72\x06\x81\x83\x02\x71\x04\x83\x04\x05\x0c\x02\x25"
  "\x16\x74\x72\x61\x70\x2d\x66\x6c\x6f\x61\x74\x2d\x65\x78\x63\x65"
  "\x70\x74\x69\x6f\x6e\x73\x02\x21\x02\x74\x06\x81\x83\x02\x73\x04"
  "\x83\x04\x05\x0c\x37\x02\x26\x18\x75\x6e\x74\x72\x61\x70\x2d\x66"
  "\x6c\x6f\x61\x74\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x73\x02"
  "\x21\x02\x76\x06\x81\x83\x02\x75\x04\x83\x04\x05\x0c\x38\x02\x27"
  "\x1c\x64\x65\x66\x65\x72\x2d\x66\x6c\x6f\x61\x74\x2d\x65\x78\x63"
  "\x65\x70\x74\x69\x6f\x6e\x2d\x74\x72\x61\x70\x73\x02\x21\x02\x78"
  "\x06\x81\x81\x02\x77\x04\x82\x02\x05\x0c\x39\x02\x28\x26\x28\x2c"
  "\x2a\x7d\x0c\x81\x85\x02\x7c\x0a\x81\x83\x02\x7b\x08\x81\x83\x02"
  "\x7a\x06\x81\x81\x02\x79\x04\x82\x02\x0b\x12\x3a\x02\x29\x09\x6f"
  "\x76\x65\x72\x66\x6c\x6f\x77\x3b\x12\x69\x6e\x76\x61\x6c\x69\x64"
  "\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x3c\x0f\x69\x6e\x65\x78"
  "\x61\x63\x74\x2d\x72\x65\x73\x75\x6c\x74\x3d\x0f\x64\x69\x76\x69"
  "\x64\x65\x2d\x62\x79\x2d\x7a\x65\x72\x6f\x3e\x0a\x75\x6e\x64\x65"
  "\x72\x66\x6c\x6f\x77\x3f\x2c\x28\x2e\x26\x2a\x11\x16\x66\x6c\x6f"
  "\x3a\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x73\x2d\x3e\x6e\x61\x6d"
  "\x65\x73\x11\x04\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x69"
  "\x6e\x64\x65\x78\x2d\x66\x69\x78\x6e\x75\x6d\x04\x1c\x03\x8b\x01"
  "\x1e\xff\xff\x03\x8a\x01\x1c\x81\x93\x02\x89\x01\x1a\x81\x8f\x02"
  "\x88\x01\x18\x81\x8b\x02\x87\x01\x16\x81\x87\x02\x86\x01\x14\x81"
  "\x97\x02\x85\x01\x12\x81\x91\x02\x84\x01\x10\x81\x8d\x02\x83\x01"
  "\x0e\x81\x89\x02\x82\x01\x0c\x81\x85\x02\x81\x01\x0a\x81\x83\x02"
  "\x80\x01\x08\x81\x83\x02\x7f\x06\x81\x83\x02\x7e\x04\x83\x04\x1d"
  "\x32\x40\x02\x2a\x2a\x3f\x2c\x3b\x28\x3c\x2e\x3d\x26\x3e\x16\x66"
  "\x6c\x6f\x3a\x6e\x61\x6d\x65\x73\x2d\x3e\x65\x78\x63\x65\x70\x74"
  "\x69\x6f\x6e\x73\x3f\x07\x66\x69\x78\x3a\x6f\x72\x02\x04\x21\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6c\x69\x73\x74\x2d\x6f\x66"
  "\x2d\x75\x6e\x69\x71\x75\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x04"
  "\x04\x6d\x61\x70\x04\x1c\x05\x07\x72\x65\x64\x75\x63\x65\x05\x90"
  "\x01\x0c\x81\x87\x02\x8f\x01\x0a\x81\x85\x02\x8e\x01\x08\x81\x85"
  "\x02\x8d\x01\x06\x81\x85\x02\x8c\x01\x04\x83\x04\x0b\x25\x3e\x02"
  "\x2b\x03\x23\x02\x1b\x66\x6c\x6f\x3a\x64\x65\x66\x65\x72\x2d\x65"
  "\x78\x63\x65\x70\x74\x69\x6f\x6e\x2d\x74\x72\x61\x70\x73\x21\x3d"
  "\x03\x18\x66\x6c\x6f\x3a\x75\x70\x64\x61\x74\x65\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x3c\x04\x95\x01\x0c\x81\x87"
  "\x02\x94\x01\x0a\x81\x85\x02\x93\x01\x08\x81\x83\x02\x92\x01\x06"
  "\x81\x83\x02\x91\x01\x04\x83\x04\x0b\x15\x3b\x02\x2c\x03\x23\x02"
  "\x3d\x03\x98\x01\x08\x81\x83\x02\x97\x01\x06\x81\x83\x02\x96\x01"
  "\x04\x83\x04\x07\x0f\x2e\x02\x2d\x02\x10\x66\x6c\x6f\x3a\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2c\x05\x0d\x64\x79\x6e\x61"
  "\x6d\x69\x63\x2d\x77\x69\x6e\x64\x03\x15\x66\x6c\x6f\x3a\x73\x65"
  "\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x2a\x04"
  "\x9c\x01\x0a\x81\x85\x02\x9b\x01\x08\x81\x83\x02\x9a\x01\x06\x81"
  "\x83\x02\x99\x01\x04\x83\x04\x09\x13\x28\x02\x2e\x03\x23\x02\x18"
  "\x66\x6c\x6f\x3a\x64\x65\x66\x61\x75\x6c\x74\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x26\x03\x2a\x04\xa0\x01\x0a\x81\x85"
  "\x02\x9f\x01\x08\x81\x83\x02\x9e\x01\x06\x81\x83\x02\x9d\x01\x04"
  "\x83\x04\x09\x13\x1c\x02\x2f\x03\x23\x03\x1c\x66\x6c\x6f\x3a\x73"
  "\x65\x74\x2d\x74\x72\x61\x70\x70\x65\x64\x2d\x65\x78\x63\x65\x70"
  "\x74\x69\x6f\x6e\x73\x21\x41\x03\xa3\x01\x08\x81\x83\x02\xa2\x01"
  "\x06\x81\x83\x02\xa1\x01\x04\x84\x06\x07\x0f\x42\x02\x30\x03\x23"
  "\x03\x15\x66\x6c\x6f\x3a\x74\x72\x61\x70\x2d\x65\x78\x63\x65\x70"
  "\x74\x69\x6f\x6e\x73\x21\x43\x03\xa6\x01\x08\x81\x83\x02\xa5\x01"
  "\x06\x81\x83\x02\xa4\x01\x04\x84\x06\x07\x0f\x44\x02\x31\x03\x23"
  "\x03\x17\x66\x6c\x6f\x3a\x75\x6e\x74\x72\x61\x70\x2d\x65\x78\x63"
  "\x65\x70\x74\x69\x6f\x6e\x73\x21\x03\xa9\x01\x08\x81\x83\x02\xa8"
  "\x01\x06\x81\x83\x02\xa7\x01\x04\x84\x06\x07\x0f\x45\x31\x46\x46"
  "\x45\x04\x44\x04\x42\x04\x1c\x04\x28\x04\x2e\x04\x3b\x04\x3e\x04"
  "\x40\x04\x3a\x04\x39\x04\x38\x04\x37\x04\x04\x36\x04\x35\x04\x04"
  "\x34\x04\x33\x04\x32\x04\x31\x04\x30\x04\x2f\x04\x2d\x04\x2b\x04"
  "\x29\x04\x27\x04\x25\x04\x1b\x04\x24\x04\x22\x04\x18\x04\x1f\x04"
  "\x1d\x04\x07\x75\x70\x77\x61\x72\x64\x09\x64\x6f\x77\x6e\x77\x61"
  "\x72\x64\x0c\x74\x6f\x77\x61\x72\x64\x2d\x7a\x65\x72\x6f\x1e\x1a"
  "\x04\x19\x04\x17\x04\x15\x04\x13\x04\x04\x04\x0f\x04\x0e\x04\x0d"
  "\x04\x0b\x04\x0a\x04\x09\x04\x04\x33\x1e\x66\x6c\x6f\x3a\x77\x69"
  "\x74\x68\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x73\x2d\x75\x6e"
  "\x74\x72\x61\x70\x70\x65\x64\x1c\x66\x6c\x6f\x3a\x77\x69\x74\x68"
  "\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x73\x2d\x74\x72\x61\x70"
  "\x70\x65\x64\x1c\x66\x6c\x6f\x3a\x77\x69\x74\x68\x2d\x74\x72\x61"
  "\x70\x70\x65\x64\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x73\x1d"
  "\x66\x6c\x6f\x3a\x77\x69\x74\x68\x2d\x64\x65\x66\x61\x75\x6c\x74"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x23\x1d\x66\x6c"
  "\x6f\x3a\x69\x67\x6e\x6f\x72\x69\x6e\x67\x2d\x65\x78\x63\x65\x70"
  "\x74\x69\x6f\x6e\x2d\x74\x72\x61\x70\x73\x1e\x66\x6c\x6f\x3a\x64"
  "\x65\x66\x65\x72\x72\x69\x6e\x67\x2d\x65\x78\x63\x65\x70\x74\x69"
  "\x6f\x6e\x2d\x74\x72\x61\x70\x73\x3f\x11\x12\x3d\x43\x41\x1d\x66"
  "\x6c\x6f\x3a\x72\x65\x73\x74\x6f\x72\x65\x2d\x65\x78\x63\x65\x70"
  "\x74\x69\x6f\x6e\x2d\x66\x6c\x61\x67\x73\x21\x16\x66\x6c\x6f\x3a"
  "\x72\x61\x69\x73\x65\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x73"
  "\x21\x16\x66\x6c\x6f\x3a\x63\x6c\x65\x61\x72\x2d\x65\x78\x63\x65"
  "\x70\x74\x69\x6f\x6e\x73\x21\x19\x66\x6c\x6f\x3a\x74\x72\x61\x70"
  "\x70\x61\x62\x6c\x65\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x73"
  "\x17\x66\x6c\x6f\x3a\x74\x72\x61\x70\x70\x65\x64\x2d\x65\x78\x63"
  "\x65\x70\x74\x69\x6f\x6e\x73\x19\x66\x6c\x6f\x3a\x74\x65\x73\x74"
  "\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x2d\x66\x6c\x61\x67\x73"
  "\x19\x66\x6c\x6f\x3a\x73\x61\x76\x65\x2d\x65\x78\x63\x65\x70\x74"
  "\x69\x6f\x6e\x2d\x66\x6c\x61\x67\x73\x14\x66\x6c\x6f\x3a\x74\x65"
  "\x73\x74\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x73\x1d\x66\x6c"
  "\x6f\x3a\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x3a\x69\x6e\x65\x78"
  "\x61\x63\x74\x2d\x72\x65\x73\x75\x6c\x74\x17\x66\x6c\x6f\x3a\x65"
  "\x78\x63\x65\x70\x74\x69\x6f\x6e\x3a\x6f\x76\x65\x72\x66\x6c\x6f"
  "\x77\x18\x66\x6c\x6f\x3a\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x3a"
  "\x75\x6e\x64\x65\x72\x66\x6c\x6f\x77\x20\x66\x6c\x6f\x3a\x65\x78"
  "\x63\x65\x70\x74\x69\x6f\x6e\x3a\x69\x6e\x76\x61\x6c\x69\x64\x2d"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x1d\x66\x6c\x6f\x3a\x65\x78"
  "\x63\x65\x70\x74\x69\x6f\x6e\x3a\x64\x69\x76\x69\x64\x65\x2d\x62"
  "\x79\x2d\x7a\x65\x72\x6f\x19\x66\x6c\x6f\x3a\x73\x75\x70\x70\x6f"
  "\x72\x74\x65\x64\x2d\x65\x78\x63\x65\x70\x74\x69\x6f\x6e\x73\x10"
  "\x20\x12\x66\x6c\x6f\x3a\x72\x6f\x75\x6e\x64\x69\x6e\x67\x2d\x6d"
  "\x6f\x64\x65\x0c\x13\x66\x6c\x6f\x3a\x72\x6f\x75\x6e\x64\x69\x6e"
  "\x67\x2d\x6d\x6f\x64\x65\x73\x16\x18\x73\x65\x74\x2d\x66\x6c\x6f"
  "\x61\x74\x2d\x72\x6f\x75\x6e\x64\x69\x6e\x67\x2d\x6d\x6f\x64\x65"
  "\x18\x67\x65\x74\x2d\x66\x6c\x6f\x61\x74\x2d\x72\x6f\x75\x6e\x64"
  "\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x15\x66\x6c\x6f\x61\x74\x2d\x72"
  "\x6f\x75\x6e\x64\x69\x6e\x67\x2d\x6d\x6f\x64\x65\x73\x14\x69\x6e"
  "\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65"
  "\x21\x14\x26\x3c\x2a\x2c\x21\x25\x6d\x61\x79\x62\x65\x2d\x73\x61"
  "\x76\x65\x2d\x74\x68\x72\x65\x61\x64\x2d\x66\x6c\x6f\x61\x74\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x18\x65\x6e\x74"
  "\x65\x72\x2d\x66\x6c\x6f\x61\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x27\x72\x65\x73\x74\x6f\x72\x65\x2d\x66\x6c\x6f"
  "\x61\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x66"
  "\x72\x6f\x6d\x2d\x64\x65\x66\x61\x75\x6c\x74\x20\x65\x6e\x74\x65"
  "\x72\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x66\x6c\x6f\x61\x74\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x33\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08"
  "\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
floenv_so_data_4b5106d439778e7c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_floenv_so_data_4b5106d439778e7c [0]))), (sizeof (prog_floenv_so_data_4b5106d439778e7c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("floenv.so", floenv_so_data_4b5106d439778e7c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("floenv.so", "12bbc1948ff17db4")
