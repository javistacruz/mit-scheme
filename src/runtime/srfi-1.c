/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:52-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_8 11
#define LABEL_1_10 13
#define ENVIRONMENT_LABEL_1_3 22
#define DEBUGGING_LABEL_1_2 21
#define OBJECT_1_3 20
#define OBJECT_1_2 19
#define OBJECT_1_1 18
#define OBJECT_1_0 17
#define EXECUTE_CACHE_1_6 15
#define FREE_REFERENCES_LABEL_1_0 14
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_1_4);
      goto take_9;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto recur_7;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (take_14)
DEFLABEL (take_9)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  goto recur_7;

DEFLABEL (recur_15)
DEFLABEL (recur_7)
  INTERRUPT_CHECK (26, LABEL_1_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_16;
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_20;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_19)
  goto recur_7;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_17)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

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
srfi_1_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto drop_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (drop_4)
DEFLABEL (drop_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define ENVIRONMENT_LABEL_3_3 10
#define DEBUGGING_LABEL_3_2 9
#define OBJECT_3_0 8
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto Z__drop_6;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto iter_4;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__drop_10)
DEFLABEL (Z__drop_6)
  INTERRUPT_CHECK (26, LABEL_3_4);
  goto iter_4;

DEFLABEL (iter_11)
DEFLABEL (iter_4)
  INTERRUPT_CHECK (26, LABEL_3_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_12;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd20.Lng) - 1L);
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (Rsp [1]) = (Wrd18.Obj);
  goto iter_4;

DEFLABEL (label_14)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_8)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_9 9
#define ENVIRONMENT_LABEL_4_3 19
#define DEBUGGING_LABEL_4_2 18
#define OBJECT_4_2 17
#define OBJECT_4_1 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_8 11
#define EXECUTE_CACHE_4_6 13
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_4_4);
      goto takeB_5;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (takeB_9)
DEFLABEL (takeB_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_10;
  Rvl = (current_block [OBJECT_4_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 1))
    goto label_12;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = (current_block [OBJECT_4_1]);
  ((Wrd8.pObj) [1]) = (Wrd9.Obj);

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd12.Obj) = (current_block [OBJECT_4_1]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_7)
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_9 9
#define LABEL_5_10 11
#define LABEL_5_11 13
#define ENVIRONMENT_LABEL_5_3 22
#define DEBUGGING_LABEL_5_2 21
#define OBJECT_5_1 20
#define OBJECT_5_0 19
#define EXECUTE_CACHE_5_8 15
#define EXECUTE_CACHE_5_6 17
#define FREE_REFERENCES_LABEL_5_0 14
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_5_4);
      goto take_right_8;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto lp_6;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (take_right_13)
DEFLABEL (take_right_8)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Rsp [1]) = Rvl;
  goto lp_6;

DEFLABEL (lp_14)
DEFLABEL (lp_6)
  INTERRUPT_CHECK (26, LABEL_5_9);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_15;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_17;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd18.Obj);
  goto lp_6;

DEFLABEL (label_17)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_11)
  (Wrd18.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_9 9
#define LABEL_6_11 11
#define LABEL_6_12 13
#define LABEL_6_10 15
#define LABEL_6_13 17
#define ENVIRONMENT_LABEL_6_3 28
#define DEBUGGING_LABEL_6_2 27
#define OBJECT_6_3 26
#define OBJECT_6_2 25
#define OBJECT_6_1 24
#define OBJECT_6_0 23
#define EXECUTE_CACHE_6_8 19
#define EXECUTE_CACHE_6_6 21
#define FREE_REFERENCES_LABEL_6_0 18
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_6_4);
      goto drop_right_10;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto recur_8;

    case 4:
      current_block = (Rpc - LABEL_6_11);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_6_12);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_6_13);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (drop_right_16)
DEFLABEL (drop_right_10)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Rsp [1]) = Rvl;
  goto recur_8;

DEFLABEL (recur_17)
DEFLABEL (recur_8)
  INTERRUPT_CHECK (26, LABEL_6_9);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_18;
  Rvl = (current_block [OBJECT_6_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_24;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_23)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_22;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_21)
  goto recur_8;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_20;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_19)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_9 9
#define LABEL_7_10 11
#define LABEL_7_11 13
#define LABEL_7_12 15
#define LABEL_7_13 17
#define ENVIRONMENT_LABEL_7_3 28
#define DEBUGGING_LABEL_7_2 27
#define OBJECT_7_3 26
#define OBJECT_7_2 25
#define OBJECT_7_1 24
#define OBJECT_7_0 23
#define EXECUTE_CACHE_7_8 19
#define EXECUTE_CACHE_7_6 21
#define FREE_REFERENCES_LABEL_7_0 18
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_7_4);
      goto drop_rightB_12;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto lp_9;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_7_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_7_13);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (drop_rightB_19)
DEFLABEL (drop_rightB_12)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_21;
  Rvl = (current_block [OBJECT_7_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_23;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd10.Obj);
  goto lp_9;

DEFLABEL (label_23)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_22;

DEFLABEL (lp_20)
DEFLABEL (lp_9)
  INTERRUPT_CHECK (26, LABEL_7_10);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_26;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_25;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_7_2]);
  ((Wrd10.pObj) [1]) = (Wrd11.Obj);

DEFLABEL (label_24)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd15.Obj) = (current_block [OBJECT_7_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_15)
  goto label_24;

DEFLABEL (label_26)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_30;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_29)
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_28;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [1]) = (Wrd28.Obj);
  goto lp_9;

DEFLABEL (label_28)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_17)
  (Wrd28.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_16)
  (Wrd19.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_11 9
#define LABEL_8_12 11
#define TAG_8_13 4
#define LABEL_8_8 13
#define TAG_8_9 5
#define LABEL_8_14 15
#define LABEL_8_10 17
#define LABEL_8_15 19
#define TAG_8_16 8
#define ENVIRONMENT_LABEL_8_3 28
#define DEBUGGING_LABEL_8_2 27
#define OBJECT_8_3 26
#define OBJECT_8_2 25
#define OBJECT_8_1 24
#define OBJECT_8_0 23
#define EXECUTE_CACHE_8_6 21
#define FREE_REFERENCES_LABEL_8_0 20
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_8_4);
      goto split_at_15;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto recur_13;

    case 3:
      current_block = (Rpc - LABEL_8_11);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_8_12);
      goto lambda_23;

    case 5:
      current_block = (Rpc - LABEL_8_8);
      goto lambda_22;

    case 6:
      current_block = (Rpc - LABEL_8_14);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_8_15);
      goto lambda_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (split_at_20)
DEFLABEL (split_at_15)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  goto recur_13;

DEFLABEL (recur_21)
DEFLABEL (recur_13)
  INTERRUPT_CHECK (26, LABEL_8_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_25;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_12])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_8])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_27;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_26)
  goto recur_13;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_27)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_8_12);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8_2]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_8_8);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_29;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_28)
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_15])));
  Rhp += 2;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd29 = Wrd26;
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  ((Wrd29.pObj) [3]) = (Wrd28.Obj);
  Rvl = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_8_15);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_9 7
#define TAG_9_10 2
#define LABEL_9_7 9
#define LABEL_9_11 11
#define LABEL_9_12 13
#define LABEL_9_13 15
#define TAG_9_14 6
#define ENVIRONMENT_LABEL_9_3 26
#define DEBUGGING_LABEL_9_2 25
#define OBJECT_9_3 24
#define OBJECT_9_2 23
#define OBJECT_9_1 22
#define OBJECT_9_0 21
#define EXECUTE_CACHE_9_8 17
#define EXECUTE_CACHE_9_6 19
#define FREE_REFERENCES_LABEL_9_0 16
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_9_4);
      goto split_atB_12;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_9);
      goto lambda_18;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_9_13);
      goto lambda_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (split_atB_17)
DEFLABEL (split_atB_12)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_20;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_9])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 1))
    goto label_24;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_23)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_22;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = (current_block [OBJECT_9_1]);
  ((Wrd24.pObj) [1]) = (Wrd25.Obj);

DEFLABEL (label_21)
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_13])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd29.Obj) = (current_block [OBJECT_9_1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_15)
  goto label_21;

DEFLABEL (label_24)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_9_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_1]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_9_13);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define ENVIRONMENT_LABEL_10_3 15
#define DEBUGGING_LABEL_10_2 14
#define OBJECT_10_1 13
#define OBJECT_10_0 12
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_10_4);
      goto length__13;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lp_11;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (length__19)
DEFLABEL (length__13)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [2]) = (Wrd7.Obj);
  goto lp_11;

DEFLABEL (lp_20)
DEFLABEL (lp_11)
  INTERRUPT_CHECK (26, LABEL_10_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_22;
  Rvl = (Rsp [2]);

DEFLABEL (label_21)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_30;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_29)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 1)
    goto label_23;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_23)
  if (! ((Wrd23.uLng) == 1))
    goto label_28;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_26;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [3]) = (Wrd35.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd46.Lng) + 1L);
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (Rsp [4]) = (Wrd44.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (Rsp [1]);
  if ((Wrd48.Obj) == (Wrd49.Obj))
    goto label_24;
  goto lp_11;

DEFLABEL (label_24)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_21;

DEFLABEL (label_26)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_17)
  (Wrd35.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_16)
  (Wrd26.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_8 9
#define LABEL_11_9 11
#define ENVIRONMENT_LABEL_11_3 19
#define DEBUGGING_LABEL_11_2 18
#define OBJECT_11_2 17
#define OBJECT_11_1 16
#define OBJECT_11_0 15
#define EXECUTE_CACHE_11_7 13
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto append_reverse_7;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lp_5;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (append_reverse_12)
DEFLABEL (append_reverse_7)
  INTERRUPT_CHECK (26, LABEL_11_4);
  goto lp_5;

DEFLABEL (lp_13)
DEFLABEL (lp_5)
  INTERRUPT_CHECK (26, LABEL_11_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_17)
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [1]) = (Wrd18.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_16;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd22.Obj);
  goto lp_5;

DEFLABEL (label_16)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_10)
  (Wrd22.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define ENVIRONMENT_LABEL_12_3 19
#define DEBUGGING_LABEL_12_2 18
#define OBJECT_12_2 17
#define OBJECT_12_1 16
#define OBJECT_12_0 15
#define EXECUTE_CACHE_12_7 13
#define FREE_REFERENCES_LABEL_12_0 12
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto append_reverseB_7;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lp_5;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (append_reverseB_12)
DEFLABEL (append_reverseB_7)
  INTERRUPT_CHECK (26, LABEL_12_4);
  goto lp_5;

DEFLABEL (lp_13)
DEFLABEL (lp_5)
  INTERRUPT_CHECK (26, LABEL_12_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_18;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_17)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_16;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [1]) = (Wrd23.Obj);

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  goto lp_5;

DEFLABEL (label_16)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_10)
  goto label_15;

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 13
#define DEBUGGING_LABEL_13_2 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_6 7
#define FREE_REFERENCE_13_0 10
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_13_4);
      goto concatenate_0;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (concatenate_4)
DEFLABEL (concatenate_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 13
#define DEBUGGING_LABEL_14_2 12
#define OBJECT_14_0 11
#define EXECUTE_CACHE_14_6 7
#define FREE_REFERENCE_14_0 10
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_14_4);
      goto concatenateB_0;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (concatenateB_4)
DEFLABEL (concatenateB_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_8 7
#define LABEL_15_10 9
#define LABEL_15_12 11
#define TAG_15_13 4
#define LABEL_15_15 13
#define LABEL_15_14 15
#define LABEL_15_16 17
#define ENVIRONMENT_LABEL_15_3 32
#define DEBUGGING_LABEL_15_2 31
#define OBJECT_15_5 30
#define OBJECT_15_4 29
#define OBJECT_15_3 28
#define OBJECT_15_2 27
#define OBJECT_15_1 26
#define OBJECT_15_0 25
#define EXECUTE_CACHE_15_11 19
#define EXECUTE_CACHE_15_9 21
#define EXECUTE_CACHE_15_7 23
#define FREE_REFERENCES_LABEL_15_0 18
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_15_4);
      goto count_13;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lp_11;

    case 2:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_15_12);
      goto lambda_20;

    case 5:
      current_block = (Rpc - LABEL_15_15);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_15_14);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_15_16);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (count_18)
DEFLABEL (count_13)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_21;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (label_21)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  Wrd15 = Wrd17;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [3]) = (Wrd13.Obj);
  goto lp_11;

DEFLABEL (lp_19)
DEFLABEL (lp_11)
  INTERRUPT_CHECK (26, LABEL_15_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_12])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd15 = Wrd8;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  ((Wrd15.pObj) [3]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_15_12);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_15_2])))
    goto label_23;
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  Rvl = ((Wrd37.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd20.Obj) = ((Wrd8.pObj) [5]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_30;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd13.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_29)
  (Wrd31.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_24;

DEFLABEL (label_25)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [4]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_24)
DEFLABEL (label_28)
  (Wrd13.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd14.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd29.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd29.Obj);
  goto lp_11;

DEFLABEL (label_27)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_16)
  (Wrd14.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_15)
  (Wrd13.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define ENVIRONMENT_LABEL_16_3 13
#define DEBUGGING_LABEL_16_2 12
#define OBJECT_16_0 11
#define FREE_REFERENCE_16_1 9
#define FREE_REFERENCE_16_0 10
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_16_4);
      goto zip_2;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (zip_7)
DEFLABEL (zip_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_9;
  Wrd21 = Wrd25;

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 2);

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_6])), (Wrd22.pObj));

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCE_17_0 10
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto unzip1_0;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unzip1_4)
DEFLABEL (unzip1_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_8 9
#define LABEL_18_12 11
#define LABEL_18_13 13
#define TAG_18_14 5
#define LABEL_18_9 15
#define TAG_18_10 6
#define LABEL_18_15 17
#define LABEL_18_16 19
#define LABEL_18_17 21
#define LABEL_18_11 23
#define LABEL_18_18 25
#define TAG_18_19 11
#define ENVIRONMENT_LABEL_18_3 33
#define DEBUGGING_LABEL_18_2 32
#define OBJECT_18_2 31
#define OBJECT_18_1 30
#define OBJECT_18_0 29
#define EXECUTE_CACHE_18_7 27
#define FREE_REFERENCES_LABEL_18_0 26
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd38;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
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
      goto unzip2_18;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto recur_16;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_18_12);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_18_13);
      goto lambda_29;

    case 6:
      current_block = (Rpc - LABEL_18_9);
      goto lambda_28;

    case 7:
      current_block = (Rpc - LABEL_18_15);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_18_16);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_18_17);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_18_11);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_18_18);
      goto lambda_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unzip2_26)
DEFLABEL (unzip2_18)
  INTERRUPT_CHECK (26, LABEL_18_4);
  goto recur_16;

DEFLABEL (recur_27)
DEFLABEL (recur_16)
  INTERRUPT_CHECK (26, LABEL_18_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_13])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  ((Wrd13.pObj) [2]) = (Wrd7.Obj);
  ((Wrd13.pObj) [3]) = (Wrd7.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_35;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_34)
  Rdl = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_9])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_33;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_32)
  goto recur_16;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_18_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_21)
  (Wrd38.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd38.Obj));
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_18_13);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_18_9);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_41;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_40)
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_39;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd24.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_38)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_37;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_36)
  (Wrd49.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Rsp [2]) = (Wrd46.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd52.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_18])));
  Rhp += 2;
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd52.pObj)));
  Wrd55 = Wrd52;
  (Wrd56.Obj) = (Rsp [1]);
  ((Wrd55.pObj) [2]) = (Wrd56.Obj);
  (Wrd54.Obj) = (Rsp [0]);
  ((Wrd55.pObj) [3]) = (Wrd54.Obj);
  Rvl = (Wrd51.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_24)
  (Wrd39.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_23)
  (Wrd24.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_40;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_18_18);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_8 9
#define LABEL_19_12 11
#define LABEL_19_13 13
#define TAG_19_14 5
#define LABEL_19_9 15
#define TAG_19_10 6
#define LABEL_19_15 17
#define LABEL_19_16 19
#define LABEL_19_17 21
#define LABEL_19_18 23
#define LABEL_19_19 25
#define LABEL_19_20 27
#define LABEL_19_11 29
#define LABEL_19_21 31
#define TAG_19_22 14
#define ENVIRONMENT_LABEL_19_3 39
#define DEBUGGING_LABEL_19_2 38
#define OBJECT_19_2 37
#define OBJECT_19_1 36
#define OBJECT_19_0 35
#define EXECUTE_CACHE_19_7 33
#define FREE_REFERENCES_LABEL_19_0 32
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd24;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd41;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_19_4);
      goto unzip3_22;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto recur_20;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_19_12);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_19_13);
      goto lambda_36;

    case 6:
      current_block = (Rpc - LABEL_19_9);
      goto lambda_35;

    case 7:
      current_block = (Rpc - LABEL_19_15);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_19_16);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_19_17);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_19_18);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_19_19);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_19_20);
      goto label_31;

    case 13:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_19_21);
      goto lambda_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unzip3_33)
DEFLABEL (unzip3_22)
  INTERRUPT_CHECK (26, LABEL_19_4);
  goto recur_20;

DEFLABEL (recur_34)
DEFLABEL (recur_20)
  INTERRUPT_CHECK (26, LABEL_19_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_13])));
  Rhp += 3;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd16 = Wrd11;
  ((Wrd16.pObj) [2]) = (Wrd7.Obj);
  ((Wrd16.pObj) [3]) = (Wrd7.Obj);
  ((Wrd16.pObj) [4]) = (Wrd7.Obj);
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_42;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_41)
  Rdl = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_9])));
  Rhp += 1;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd29 = Wrd28;
  (Wrd30.Obj) = (Rsp [0]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_40;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_39)
  goto recur_20;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_19_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_25)
  (Wrd41.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd41.Obj));
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_19_13);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_19_9);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_54;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_53)
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_52;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd24.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_51)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_50;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_49)
  (Wrd49.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [2]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_48;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd50.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_47)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_46;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd65.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_45)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_44;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd72.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_43)
  (Wrd82.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd82.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (Rsp [3]) = (Wrd79.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd85.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_21])));
  Rhp += 3;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd85.pObj)));
  Wrd90 = Wrd85;
  (Wrd91.Obj) = (Rsp [2]);
  ((Wrd90.pObj) [2]) = (Wrd91.Obj);
  (Wrd89.Obj) = (Rsp [1]);
  ((Wrd90.pObj) [3]) = (Wrd89.Obj);
  (Wrd87.Obj) = (Rsp [0]);
  ((Wrd90.pObj) [4]) = (Wrd87.Obj);
  Rvl = (Wrd84.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_20]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_31)
  (Wrd72.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_30)
  (Wrd65.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_29)
  (Wrd50.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_28)
  (Wrd39.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_27)
  (Wrd24.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_19_21);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_8 9
#define LABEL_20_12 11
#define LABEL_20_13 13
#define TAG_20_14 5
#define LABEL_20_9 15
#define TAG_20_10 6
#define LABEL_20_15 17
#define LABEL_20_16 19
#define LABEL_20_17 21
#define LABEL_20_18 23
#define LABEL_20_19 25
#define LABEL_20_20 27
#define LABEL_20_21 29
#define LABEL_20_22 31
#define LABEL_20_23 33
#define LABEL_20_24 35
#define LABEL_20_11 37
#define LABEL_20_25 39
#define TAG_20_26 18
#define ENVIRONMENT_LABEL_20_3 47
#define DEBUGGING_LABEL_20_2 46
#define OBJECT_20_2 45
#define OBJECT_20_1 44
#define OBJECT_20_0 43
#define EXECUTE_CACHE_20_7 41
#define FREE_REFERENCES_LABEL_20_0 40
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd122;
  machine_word Wrd118;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd105;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd44;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
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
      goto unzip4_27;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto recur_25;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_20_12);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_20_13);
      goto lambda_45;

    case 6:
      current_block = (Rpc - LABEL_20_9);
      goto lambda_44;

    case 7:
      current_block = (Rpc - LABEL_20_15);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_20_16);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_20_17);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_20_18);
      goto label_34;

    case 11:
      current_block = (Rpc - LABEL_20_19);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_20_20);
      goto label_36;

    case 13:
      current_block = (Rpc - LABEL_20_21);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_20_22);
      goto label_38;

    case 15:
      current_block = (Rpc - LABEL_20_23);
      goto label_39;

    case 16:
      current_block = (Rpc - LABEL_20_24);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_20_11);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_20_25);
      goto lambda_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unzip4_42)
DEFLABEL (unzip4_27)
  INTERRUPT_CHECK (26, LABEL_20_4);
  goto recur_25;

DEFLABEL (recur_43)
DEFLABEL (recur_25)
  INTERRUPT_CHECK (26, LABEL_20_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_13])));
  Rhp += 4;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd19 = Wrd12;
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  ((Wrd19.pObj) [3]) = (Wrd7.Obj);
  ((Wrd19.pObj) [4]) = (Wrd7.Obj);
  ((Wrd19.pObj) [5]) = (Wrd7.Obj);
  Rvl = (Wrd11.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_51;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_50)
  Rdl = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_9])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd32 = Wrd31;
  (Wrd33.Obj) = (Rsp [0]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_49;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [1]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_48)
  goto recur_25;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_20_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_30)
  (Wrd44.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd44.Obj));
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_20_13);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_20_9);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_71;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_70)
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_69;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd24.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_68)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_67;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_66)
  (Wrd49.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [2]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_65;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd50.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_64)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_63;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd65.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_62)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_61;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd72.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_60)
  (Wrd82.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd82.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (Rsp [3]) = (Wrd79.Obj);
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [2]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_59;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd83.Obj) = ((Wrd87.pObj) [1]);

DEFLABEL (label_58)
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd100.uLng) == 1))
    goto label_57;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd98.Obj) = ((Wrd99.pObj) [1]);

DEFLABEL (label_56)
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd107.uLng) == 1))
    goto label_55;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd105.Obj) = ((Wrd106.pObj) [1]);

DEFLABEL (label_54)
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd114.uLng) == 1))
    goto label_53;
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd112.Obj) = ((Wrd113.pObj) [0]);

DEFLABEL (label_52)
  (Wrd122.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd112.Obj);
  (* (Rhp++)) = (Wrd122.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (Rsp [4]) = (Wrd119.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd125.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_25])));
  Rhp += 4;
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd125.pObj)));
  Wrd132 = Wrd125;
  (Wrd133.Obj) = (Rsp [3]);
  ((Wrd132.pObj) [2]) = (Wrd133.Obj);
  (Wrd131.Obj) = (Rsp [2]);
  ((Wrd132.pObj) [3]) = (Wrd131.Obj);
  (Wrd129.Obj) = (Rsp [1]);
  ((Wrd132.pObj) [4]) = (Wrd129.Obj);
  (Wrd127.Obj) = (Rsp [0]);
  ((Wrd132.pObj) [5]) = (Wrd127.Obj);
  Rvl = (Wrd124.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_24]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_40)
  (Wrd112.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_23]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_39)
  (Wrd105.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_38)
  (Wrd98.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_37)
  (Wrd83.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_36)
  (Wrd72.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_35)
  (Wrd65.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_34)
  (Wrd50.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_33)
  (Wrd39.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_32)
  (Wrd24.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_70;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_20_25);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_8 9
#define LABEL_21_12 11
#define LABEL_21_13 13
#define TAG_21_14 5
#define LABEL_21_9 15
#define TAG_21_10 6
#define LABEL_21_15 17
#define LABEL_21_16 19
#define LABEL_21_17 21
#define LABEL_21_18 23
#define LABEL_21_19 25
#define LABEL_21_20 27
#define LABEL_21_21 29
#define LABEL_21_22 31
#define LABEL_21_23 33
#define LABEL_21_24 35
#define LABEL_21_25 37
#define LABEL_21_26 39
#define LABEL_21_27 41
#define LABEL_21_28 43
#define LABEL_21_29 45
#define LABEL_21_11 47
#define LABEL_21_30 49
#define TAG_21_31 23
#define ENVIRONMENT_LABEL_21_3 57
#define DEBUGGING_LABEL_21_2 56
#define OBJECT_21_2 55
#define OBJECT_21_1 54
#define OBJECT_21_0 53
#define EXECUTE_CACHE_21_7 51
#define FREE_REFERENCES_LABEL_21_0 50
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd174;
  machine_word Wrd176;
  machine_word Wrd178;
  machine_word Wrd180;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd171;
  machine_word Wrd172;
  machine_word Wrd166;
  machine_word Wrd168;
  machine_word Wrd169;
  machine_word Wrd165;
  machine_word Wrd159;
  machine_word Wrd160;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd152;
  machine_word Wrd153;
  machine_word Wrd154;
  machine_word Wrd151;
  machine_word Wrd145;
  machine_word Wrd146;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd138;
  machine_word Wrd139;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd123;
  machine_word Wrd127;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd122;
  machine_word Wrd118;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd105;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd50;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd24;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd47;
  machine_word Wrd54;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
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
      goto unzip5_33;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto recur_31;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_21_12);
      goto label_36;

    case 5:
      current_block = (Rpc - LABEL_21_13);
      goto lambda_56;

    case 6:
      current_block = (Rpc - LABEL_21_9);
      goto lambda_55;

    case 7:
      current_block = (Rpc - LABEL_21_15);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_21_16);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_21_17);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_21_18);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_21_19);
      goto label_41;

    case 12:
      current_block = (Rpc - LABEL_21_20);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_21_21);
      goto label_43;

    case 14:
      current_block = (Rpc - LABEL_21_22);
      goto label_44;

    case 15:
      current_block = (Rpc - LABEL_21_23);
      goto label_45;

    case 16:
      current_block = (Rpc - LABEL_21_24);
      goto label_46;

    case 17:
      current_block = (Rpc - LABEL_21_25);
      goto label_47;

    case 18:
      current_block = (Rpc - LABEL_21_26);
      goto label_48;

    case 19:
      current_block = (Rpc - LABEL_21_27);
      goto label_49;

    case 20:
      current_block = (Rpc - LABEL_21_28);
      goto label_50;

    case 21:
      current_block = (Rpc - LABEL_21_29);
      goto label_51;

    case 22:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_27;

    case 23:
      current_block = (Rpc - LABEL_21_30);
      goto lambda_57;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unzip5_53)
DEFLABEL (unzip5_33)
  INTERRUPT_CHECK (26, LABEL_21_4);
  goto recur_31;

DEFLABEL (recur_54)
DEFLABEL (recur_31)
  INTERRUPT_CHECK (26, LABEL_21_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_13])));
  Rhp += 5;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd22 = Wrd13;
  ((Wrd22.pObj) [2]) = (Wrd7.Obj);
  ((Wrd22.pObj) [3]) = (Wrd7.Obj);
  ((Wrd22.pObj) [4]) = (Wrd7.Obj);
  ((Wrd22.pObj) [5]) = (Wrd7.Obj);
  ((Wrd22.pObj) [6]) = (Wrd7.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_62;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_61)
  Rdl = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_9])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd35 = Wrd34;
  (Wrd36.Obj) = (Rsp [0]);
  ((Wrd35.pObj) [2]) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd45.Obj) = (Rsp [4]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_60;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_59)
  goto recur_31;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_21_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_36)
  (Wrd47.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd47.Obj));
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_21_13);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [4]) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_21_9);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_92;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_91)
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_90;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd24.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_89)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_88;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_87)
  (Wrd49.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [2]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_86;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd50.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_85)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_84;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd65.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_83)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_82;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd72.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_81)
  (Wrd82.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd82.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (Rsp [3]) = (Wrd79.Obj);
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [2]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_80;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd83.Obj) = ((Wrd87.pObj) [1]);

DEFLABEL (label_79)
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd100.uLng) == 1))
    goto label_78;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd98.Obj) = ((Wrd99.pObj) [1]);

DEFLABEL (label_77)
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd107.uLng) == 1))
    goto label_76;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd105.Obj) = ((Wrd106.pObj) [1]);

DEFLABEL (label_75)
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd114.uLng) == 1))
    goto label_74;
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd112.Obj) = ((Wrd113.pObj) [0]);

DEFLABEL (label_73)
  (Wrd122.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd112.Obj);
  (* (Rhp++)) = (Wrd122.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (Rsp [4]) = (Wrd119.Obj);
  (Wrd128.Obj) = (Rsp [0]);
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd130.Obj) = ((Wrd129.pObj) [2]);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if (! ((Wrd131.uLng) == 1))
    goto label_72;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd130.Obj));
  (Wrd123.Obj) = ((Wrd127.pObj) [1]);

DEFLABEL (label_71)
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd140.uLng) == 1))
    goto label_70;
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd138.Obj) = ((Wrd139.pObj) [1]);

DEFLABEL (label_69)
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd147.uLng) == 1))
    goto label_68;
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd138.Obj));
  (Wrd145.Obj) = ((Wrd146.pObj) [1]);

DEFLABEL (label_67)
  (Wrd154.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd154.uLng) == 1))
    goto label_66;
  (Wrd153.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd152.Obj) = ((Wrd153.pObj) [1]);

DEFLABEL (label_65)
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd152.Obj));
  if (! ((Wrd161.uLng) == 1))
    goto label_64;
  (Wrd160.pObj) = (OBJECT_ADDRESS (Wrd152.Obj));
  (Wrd159.Obj) = ((Wrd160.pObj) [0]);

DEFLABEL (label_63)
  (Wrd169.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd159.Obj);
  (* (Rhp++)) = (Wrd169.Obj);
  (Wrd168.pObj) = (& (Rhp [-2]));
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd168.pObj)));
  (Rsp [5]) = (Wrd166.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd172.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_30])));
  Rhp += 5;
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd172.pObj)));
  Wrd181 = Wrd172;
  (Wrd182.Obj) = (Rsp [4]);
  ((Wrd181.pObj) [2]) = (Wrd182.Obj);
  (Wrd180.Obj) = (Rsp [3]);
  ((Wrd181.pObj) [3]) = (Wrd180.Obj);
  (Wrd178.Obj) = (Rsp [2]);
  ((Wrd181.pObj) [4]) = (Wrd178.Obj);
  (Wrd176.Obj) = (Rsp [1]);
  ((Wrd181.pObj) [5]) = (Wrd176.Obj);
  (Wrd174.Obj) = (Rsp [0]);
  ((Wrd181.pObj) [6]) = (Wrd174.Obj);
  Rvl = (Wrd171.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_29]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_51)
  (Wrd159.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_28]))));
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_50)
  (Wrd152.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_27]))));
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_49)
  (Wrd145.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_26]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_48)
  (Wrd138.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_25]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_47)
  (Wrd123.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_24]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_46)
  (Wrd112.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_23]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_45)
  (Wrd105.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_22]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_44)
  (Wrd98.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_21]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_43)
  (Wrd83.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_20]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_42)
  (Wrd72.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_41)
  (Wrd65.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_18]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_40)
  (Wrd50.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_39)
  (Wrd39.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_38)
  (Wrd24.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_91;

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_21_30);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [4]) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define LABEL_22_8 11
#define LABEL_22_9 13
#define ENVIRONMENT_LABEL_22_3 17
#define DEBUGGING_LABEL_22_2 16
#define OBJECT_22_1 15
#define OBJECT_22_0 14
#define FREE_REFERENCES_LABEL_22_0 14
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_22_4);
      goto unfold_8;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto recur_6;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unfold_11)
DEFLABEL (unfold_8)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [7]));
  goto recur_6;

DEFLABEL (recur_12)
DEFLABEL (recur_6)
  DLINK_INTERRUPT_CHECK (25, LABEL_22_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  goto recur_6;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  if ((Wrd11.Obj) == (current_block [OBJECT_22_0]))
    goto label_14;
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_22_1]);
  Rsp = Rdl;
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define LABEL_23_8 11
#define ENVIRONMENT_LABEL_23_3 15
#define DEBUGGING_LABEL_23_2 14
#define OBJECT_23_1 13
#define OBJECT_23_0 12
#define FREE_REFERENCES_LABEL_23_0 12
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_23_4);
      goto unfold_right_9;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto lp_7;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unfold_right_12)
DEFLABEL (unfold_right_9)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == (current_block [OBJECT_23_0]))
    goto label_15;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_14;

DEFLABEL (label_15)
  (Wrd9.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_14)
DEFLABEL (label_16)
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lp_7;

DEFLABEL (lp_13)
DEFLABEL (lp_7)
  INTERRUPT_CHECK (26, LABEL_23_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (Rsp [0]) = Rvl;
  goto lp_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_8 7
#define LABEL_24_6 9
#define LABEL_24_11 11
#define LABEL_24_9 13
#define LABEL_24_12 15
#define LABEL_24_13 17
#define LABEL_24_14 19
#define ENVIRONMENT_LABEL_24_3 32
#define DEBUGGING_LABEL_24_2 31
#define OBJECT_24_3 30
#define OBJECT_24_2 29
#define OBJECT_24_1 28
#define OBJECT_24_0 27
#define EXECUTE_CACHE_24_15 21
#define EXECUTE_CACHE_24_10 23
#define EXECUTE_CACHE_24_7 25
#define FREE_REFERENCES_LABEL_24_0 20
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_24_4);
      goto pair_fold_18;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lp_6;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto lp_16;

    case 3:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_24_11);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_24_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_24_14);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pair_fold_22)
DEFLABEL (pair_fold_18)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_25;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lp_6;

DEFLABEL (label_25)
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  goto lp_16;

DEFLABEL (lp_23)
DEFLABEL (lp_6)
  INTERRUPT_CHECK (26, LABEL_24_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_28;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_27)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd23.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_12);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto lp_6;

DEFLABEL (label_28)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (lp_24)
DEFLABEL (lp_16)
  INTERRUPT_CHECK (26, LABEL_24_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_24_2]);
  if (! (Rvl == (Wrd6.Obj)))
    goto label_29;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_24_13);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto lp_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_8 7
#define LABEL_25_6 9
#define LABEL_25_12 11
#define LABEL_25_9 13
#define LABEL_25_11 15
#define LABEL_25_13 17
#define LABEL_25_14 19
#define ENVIRONMENT_LABEL_25_3 32
#define DEBUGGING_LABEL_25_2 31
#define OBJECT_25_3 30
#define OBJECT_25_2 29
#define OBJECT_25_1 28
#define OBJECT_25_0 27
#define EXECUTE_CACHE_25_15 21
#define EXECUTE_CACHE_25_10 23
#define EXECUTE_CACHE_25_7 25
#define FREE_REFERENCES_LABEL_25_0 20
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_25_4);
      goto pair_fold_right_17;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto recur_5;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto recur_15;

    case 3:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_25_12);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_25_13);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_25_14);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pair_fold_right_21)
DEFLABEL (pair_fold_right_17)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_24;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  Rdl = (& (Rsp [6]));
  goto recur_5;

DEFLABEL (label_24)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [6]));
  goto recur_15;

DEFLABEL (recur_22)
DEFLABEL (recur_5)
  DLINK_INTERRUPT_CHECK (25, LABEL_25_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_27;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_26)
  Rdl = (& (Rsp [2]));
  goto recur_5;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 1);

DEFLABEL (label_19)
  (Wrd26.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd26.Obj));
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (recur_23)
DEFLABEL (recur_15)
  DLINK_INTERRUPT_CHECK (25, LABEL_25_8);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_25_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_25_2])))
    goto label_28;
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  Rvl = ((Wrd26.pObj) [1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_28)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  goto recur_15;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_25_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_25_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_8 7
#define LABEL_26_6 9
#define LABEL_26_11 11
#define LABEL_26_9 13
#define LABEL_26_12 15
#define LABEL_26_13 17
#define ENVIRONMENT_LABEL_26_3 28
#define DEBUGGING_LABEL_26_2 27
#define OBJECT_26_3 26
#define OBJECT_26_2 25
#define OBJECT_26_1 24
#define OBJECT_26_0 23
#define EXECUTE_CACHE_26_10 19
#define EXECUTE_CACHE_26_7 21
#define FREE_REFERENCES_LABEL_26_0 18
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_26_4);
      goto pair_for_each_16;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto lp_6;

    case 2:
      current_block = (Rpc - LABEL_26_8);
      goto lp_14;

    case 3:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_26_11);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_26_13);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pair_for_each_20)
DEFLABEL (pair_for_each_16)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_23;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto lp_6;

DEFLABEL (label_23)
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  goto lp_14;

DEFLABEL (lp_21)
DEFLABEL (lp_6)
  INTERRUPT_CHECK (26, LABEL_26_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = (current_block [OBJECT_26_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_26;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto lp_6;

DEFLABEL (label_26)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (lp_22)
DEFLABEL (lp_14)
  INTERRUPT_CHECK (26, LABEL_26_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_26_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_27;
  Rvl = (current_block [OBJECT_26_2]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 2);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto lp_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_8 7
#define TAG_27_9 2
#define LABEL_27_12 9
#define LABEL_27_6 11
#define TAG_27_7 4
#define LABEL_27_11 13
#define LABEL_27_13 15
#define LABEL_27_15 17
#define TAG_27_16 7
#define LABEL_27_20 19
#define LABEL_27_17 21
#define LABEL_27_19 23
#define LABEL_27_21 25
#define LABEL_27_22 27
#define ENVIRONMENT_LABEL_27_3 42
#define DEBUGGING_LABEL_27_2 41
#define OBJECT_27_5 40
#define OBJECT_27_4 39
#define OBJECT_27_3 38
#define OBJECT_27_2 37
#define OBJECT_27_1 36
#define OBJECT_27_0 35
#define EXECUTE_CACHE_27_18 29
#define EXECUTE_CACHE_27_14 31
#define EXECUTE_CACHE_27_10 33
#define FREE_REFERENCES_LABEL_27_0 28
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_27_4);
      goto mapB_16;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_27_8);
      goto lambda_25;

    case 3:
      current_block = (Rpc - LABEL_27_12);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_27_6);
      goto lp_14;

    case 5:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_27_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_27_15);
      goto lambda_26;

    case 8:
      current_block = (Rpc - LABEL_27_20);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_27_17);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_27_19);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_27_21);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_27_22);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mapB_23)
DEFLABEL (mapB_16)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_27;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_8])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_5);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_6])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  Wrd23 = Wrd25;
  (Wrd24.Obj) = (Rsp [4]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);
  goto lp_14;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_27_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_30;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_29)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_28;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  Rvl = (current_block [OBJECT_27_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (label_30)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (lp_24)
DEFLABEL (lp_14)
  INTERRUPT_CHECK (26, LABEL_27_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = (current_block [OBJECT_27_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_15])));
  Rhp += 3;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  ((Wrd15.pObj) [3]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_27_17);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_27_15);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_37;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_36)
  (Wrd26.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 2);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_27_19);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_35;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  ((Wrd27.pObj) [0]) = Rvl;

DEFLABEL (label_34)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_33;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [3]);
  (Rsp [0]) = (Wrd21.Obj);
  goto lp_14;

DEFLABEL (label_33)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_5]), 1);

DEFLABEL (label_20)
  (Wrd6.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (label_21)
  goto label_34;

DEFLABEL (label_37)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_7 5
#define LABEL_28_5 7
#define TAG_28_6 2
#define LABEL_28_8 9
#define LABEL_28_15 11
#define LABEL_28_10 13
#define TAG_28_11 5
#define LABEL_28_12 15
#define LABEL_28_14 17
#define LABEL_28_18 19
#define LABEL_28_16 21
#define LABEL_28_17 23
#define LABEL_28_19 25
#define ENVIRONMENT_LABEL_28_3 37
#define DEBUGGING_LABEL_28_2 36
#define OBJECT_28_4 35
#define OBJECT_28_3 34
#define OBJECT_28_2 33
#define OBJECT_28_1 32
#define OBJECT_28_0 31
#define EXECUTE_CACHE_28_13 27
#define EXECUTE_CACHE_28_9 29
#define FREE_REFERENCES_LABEL_28_0 26
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd31;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_28_4);
      goto filter_map_23;

    case 1:
      current_block = (Rpc - LABEL_28_7);
      goto recur_10;

    case 2:
      current_block = (Rpc - LABEL_28_5);
      goto recur_21;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_28_15);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_28_10);
      goto lambda_31;

    case 6:
      current_block = (Rpc - LABEL_28_12);
      goto continuation_20;

    case 7:
      current_block = (Rpc - LABEL_28_14);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_28_18);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_28_16);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_28_17);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_28_19);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (filter_map_28)
DEFLABEL (filter_map_23)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_32;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  Rdl = (& (Rsp [5]));
  goto recur_10;

DEFLABEL (label_32)
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [2]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_5])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  Wrd20 = Wrd22;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  goto recur_21;

DEFLABEL (recur_30)
DEFLABEL (recur_10)
  DLINK_INTERRUPT_CHECK (25, LABEL_28_7);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_33)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_40;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_39)
  Rdl = (& (Rsp [2]));
  goto recur_10;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_38;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_37)
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_28_17);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  goto label_34;

DEFLABEL (label_35)
  Rvl = (Rsp [1]);

DEFLABEL (label_34)
DEFLABEL (label_36)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 1);

DEFLABEL (label_26)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 1);

DEFLABEL (label_25)
  (Wrd24.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd24.Obj));
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (recur_29)
DEFLABEL (recur_21)
  INTERRUPT_CHECK (26, LABEL_28_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_10])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  ((Wrd9.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_28_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_28_10);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_41;
  Rvl = (current_block [OBJECT_28_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28_16);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_42;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [3]);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  goto recur_21;

DEFLABEL (label_42)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto recur_21;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_28_19);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_7 5
#define LABEL_29_5 7
#define TAG_29_6 2
#define LABEL_29_8 9
#define LABEL_29_15 11
#define LABEL_29_10 13
#define TAG_29_11 5
#define LABEL_29_12 15
#define LABEL_29_14 17
#define LABEL_29_18 19
#define LABEL_29_16 21
#define LABEL_29_17 23
#define LABEL_29_19 25
#define ENVIRONMENT_LABEL_29_3 37
#define DEBUGGING_LABEL_29_2 36
#define OBJECT_29_4 35
#define OBJECT_29_3 34
#define OBJECT_29_2 33
#define OBJECT_29_1 32
#define OBJECT_29_0 31
#define EXECUTE_CACHE_29_13 27
#define EXECUTE_CACHE_29_9 29
#define FREE_REFERENCES_LABEL_29_0 26
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_29_4);
      goto map_in_order_20;

    case 1:
      current_block = (Rpc - LABEL_29_7);
      goto recur_8;

    case 2:
      current_block = (Rpc - LABEL_29_5);
      goto recur_18;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_29_15);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_29_10);
      goto lambda_28;

    case 6:
      current_block = (Rpc - LABEL_29_12);
      goto continuation_17;

    case 7:
      current_block = (Rpc - LABEL_29_14);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_29_18);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_29_16);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_29_17);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_29_19);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_in_order_25)
DEFLABEL (map_in_order_20)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_29;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  Rdl = (& (Rsp [5]));
  goto recur_8;

DEFLABEL (label_29)
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [2]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  Wrd20 = Wrd22;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  goto recur_18;

DEFLABEL (recur_27)
DEFLABEL (recur_8)
  DLINK_INTERRUPT_CHECK (25, LABEL_29_7);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_30)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_34;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_33)
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_32;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_31)
  Rdl = (& (Rsp [2]));
  goto recur_8;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_29_17);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 1);

DEFLABEL (label_23)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_22)
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (recur_26)
DEFLABEL (recur_18)
  INTERRUPT_CHECK (26, LABEL_29_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_10])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  ((Wrd9.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_29_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_29_10);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_35;
  Rvl = (current_block [OBJECT_29_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto recur_18;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_29_19);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_8 9
#define LABEL_30_9 11
#define LABEL_30_10 13
#define LABEL_30_11 15
#define ENVIRONMENT_LABEL_30_3 23
#define DEBUGGING_LABEL_30_2 22
#define OBJECT_30_2 21
#define OBJECT_30_1 20
#define OBJECT_30_0 19
#define EXECUTE_CACHE_30_7 17
#define FREE_REFERENCES_LABEL_30_0 16
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_30_4);
      goto filter_11;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto recur_9;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (filter_16)
DEFLABEL (filter_11)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto recur_9;

DEFLABEL (recur_17)
DEFLABEL (recur_9)
  DLINK_INTERRUPT_CHECK (25, LABEL_30_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_18)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_25)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_24;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_23)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [6]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.pObj) = (& (Rsp [6]));
  {
    SCHEME_OBJECT * IPDLp1 = (((Wrd25.pObj) <= Rdl) ? (Wrd25.pObj) : Rdl);
    (* (--IPDLp1)) = (Rsp [1]);
    (* (--IPDLp1)) = (Rsp [0]);
    Rsp = IPDLp1;
  }
  goto recur_9;

DEFLABEL (label_19)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  Rdl = (& (Rsp [2]));
  goto recur_9;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == Rvl)
    goto label_21;
  (Wrd12.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  goto label_20;

DEFLABEL (label_21)
  Rvl = (Rsp [3]);

DEFLABEL (label_20)
DEFLABEL (label_22)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_24)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_14)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_13)
  (Wrd15.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd15.Obj));
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_9 9
#define LABEL_31_8 11
#define LABEL_31_10 13
#define LABEL_31_16 15
#define LABEL_31_11 17
#define TAG_31_12 7
#define LABEL_31_17 19
#define LABEL_31_19 21
#define LABEL_31_15 23
#define LABEL_31_13 25
#define TAG_31_14 11
#define LABEL_31_21 27
#define LABEL_31_20 29
#define LABEL_31_22 31
#define LABEL_31_23 33
#define LABEL_31_18 35
#define LABEL_31_24 37
#define LABEL_31_25 39
#define LABEL_31_26 41
#define ENVIRONMENT_LABEL_31_3 50
#define DEBUGGING_LABEL_31_2 49
#define OBJECT_31_3 48
#define OBJECT_31_2 47
#define OBJECT_31_1 46
#define OBJECT_31_0 45
#define EXECUTE_CACHE_31_7 43
#define FREE_REFERENCES_LABEL_31_0 42
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_31_4);
      goto filterB_28;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto lp_26;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_31_10);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_31_16);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_31_11);
      goto lambda_43;

    case 8:
      current_block = (Rpc - LABEL_31_17);
      goto lp_17;

    case 9:
      current_block = (Rpc - LABEL_31_19);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_31_15);
      goto continuation_23;

    case 11:
      current_block = (Rpc - LABEL_31_13);
      goto lambda_44;

    case 12:
      current_block = (Rpc - LABEL_31_21);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_31_20);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_31_22);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_31_23);
      goto label_35;

    case 16:
      current_block = (Rpc - LABEL_31_18);
      goto continuation_13;

    case 17:
      current_block = (Rpc - LABEL_31_24);
      goto label_39;

    case 18:
      current_block = (Rpc - LABEL_31_25);
      goto label_38;

    case 19:
      current_block = (Rpc - LABEL_31_26);
      goto label_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (filterB_41)
DEFLABEL (filterB_28)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lp_26;

DEFLABEL (lp_42)
DEFLABEL (lp_26)
  INTERRUPT_CHECK (26, LABEL_31_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_54;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_53)
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd12.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_11])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  (Wrd24.Obj) = (Rsp [3]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  ((Wrd23.pObj) [3]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_13])));
  Rhp += 3;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd31 = Wrd26;
  ((Wrd31.pObj) [2]) = (Wrd24.Obj);
  ((Wrd31.pObj) [3]) = (Wrd9.Obj);
  ((Wrd31.pObj) [4]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  ((Wrd14.pObj) [0]) = (Wrd25.Obj);
  ((Wrd8.pObj) [0]) = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_49;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_48)
  (Wrd52.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (* (--Rsp)) = (Wrd55.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_31_15);

DEFLABEL (label_47)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_16]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_52;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_51)
  (Rsp [0]) = (Wrd56.Obj);
  goto lp_26;

DEFLABEL (label_52)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_32)
  (Wrd56.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_31_11);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lp_17;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_31_13);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_55;
  Rsp = (& (Rsp [4]));
  goto label_47;

DEFLABEL (label_55)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_62;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_61)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_31_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd11.pObj) [0]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_57;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_56)
  (Rsp [2]) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_57)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_23]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_35)
  (Wrd13.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd26.pObj) [0]);
  (Rsp [0]) = (Wrd22.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_60;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_59)
  (Rsp [2]) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_60)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_22]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_36)
  (Wrd27.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_21]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (lp_45)
DEFLABEL (lp_17)
  INTERRUPT_CHECK (26, LABEL_31_17);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 1)
    goto label_64;
  (Rsp [3]) = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 1)
    goto label_63;
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_3]), 2);

DEFLABEL (label_63)
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [1]) = (Wrd31.Obj);
  Rsp = (& (Rsp [3]));
  goto label_47;

DEFLABEL (label_64)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_18]))));
  (* (--Rsp)) = (Wrd37.Obj);
  if (! ((Wrd26.uLng) == 1))
    goto label_73;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_72)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [2]);
  (* (--Rsp)) = (Wrd49.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_31_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_68;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd24.pObj) [1]) = (Wrd25.Obj);

DEFLABEL (label_67)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd11.pObj) [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_66;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_65)
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_66)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_26]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_37)
  (Wrd13.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_25]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_3]), 2);

DEFLABEL (label_38)
  goto label_67;

DEFLABEL (label_69)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_71;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_70)
  (Rsp [0]) = (Wrd33.Obj);
  goto lp_17;

DEFLABEL (label_71)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_24]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_39)
  (Wrd33.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_19]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_72;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_8 9
#define LABEL_32_9 11
#define LABEL_32_13 13
#define TAG_32_14 5
#define LABEL_32_10 15
#define TAG_32_11 6
#define LABEL_32_12 17
#define LABEL_32_15 19
#define LABEL_32_18 21
#define TAG_32_19 9
#define LABEL_32_16 23
#define TAG_32_17 10
#define ENVIRONMENT_LABEL_32_3 31
#define DEBUGGING_LABEL_32_2 30
#define OBJECT_32_2 29
#define OBJECT_32_1 28
#define OBJECT_32_0 27
#define EXECUTE_CACHE_32_7 25
#define FREE_REFERENCES_LABEL_32_0 24
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd27;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_32_4);
      goto partition_20;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto recur_18;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_32_13);
      goto lambda_28;

    case 6:
      current_block = (Rpc - LABEL_32_10);
      goto lambda_27;

    case 7:
      current_block = (Rpc - LABEL_32_12);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_32_15);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_32_18);
      goto lambda_30;

    case 10:
      current_block = (Rpc - LABEL_32_16);
      goto lambda_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (partition_25)
DEFLABEL (partition_20)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto recur_18;

DEFLABEL (recur_26)
DEFLABEL (recur_18)
  DLINK_INTERRUPT_CHECK (25, LABEL_32_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_13])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_35;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_34)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_33;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_32)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd45.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_10])));
  Rhp += 3;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd45.pObj)));
  Wrd50 = Wrd45;
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  ((Wrd50.pObj) [2]) = (Wrd53.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  ((Wrd50.pObj) [3]) = (Wrd49.Obj);
  (Wrd47.Obj) = (Rsp [0]);
  ((Wrd50.pObj) [4]) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd63.Obj);
  Rdl = (& (Rsp [2]));
  goto recur_18;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_32_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_33)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_23)
  (Wrd36.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd36.Obj));
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_22)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_32_13);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_32_10);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_37;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [3]);
  goto label_36;

DEFLABEL (label_37)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [4]);
  (Wrd25.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));

DEFLABEL (label_36)
DEFLABEL (label_39)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_18])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  Rvl = (Wrd13.Obj);

DEFLABEL (label_38)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_42;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [3]);
  goto label_41;

DEFLABEL (label_42)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [4]);
  (Wrd44.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));

DEFLABEL (label_41)
DEFLABEL (label_43)
  (Rsp [2]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_16])));
  Rhp += 2;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  Wrd36 = Wrd33;
  (Wrd37.Obj) = (Rsp [1]);
  ((Wrd36.pObj) [2]) = (Wrd37.Obj);
  (Wrd35.Obj) = (Rsp [0]);
  ((Wrd36.pObj) [3]) = (Wrd35.Obj);
  Rvl = (Wrd32.Obj);
  goto label_38;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_32_18);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_32_16);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_12 7
#define LABEL_33_13 9
#define TAG_33_14 3
#define LABEL_33_7 11
#define TAG_33_8 4
#define LABEL_33_9 13
#define TAG_33_10 5
#define LABEL_33_11 15
#define LABEL_33_15 17
#define LABEL_33_16 19
#define LABEL_33_17 21
#define LABEL_33_19 23
#define LABEL_33_20 25
#define LABEL_33_22 27
#define LABEL_33_23 29
#define LABEL_33_25 31
#define LABEL_33_28 33
#define LABEL_33_30 35
#define LABEL_33_18 37
#define LABEL_33_33 39
#define LABEL_33_34 41
#define LABEL_33_35 43
#define LABEL_33_21 45
#define LABEL_33_36 47
#define LABEL_33_37 49
#define LABEL_33_38 51
#define LABEL_33_26 53
#define TAG_33_27 25
#define LABEL_33_24 55
#define LABEL_33_40 57
#define LABEL_33_41 59
#define LABEL_33_31 61
#define TAG_33_32 29
#define LABEL_33_29 63
#define LABEL_33_42 65
#define LABEL_33_44 67
#define LABEL_33_39 69
#define LABEL_33_43 71
#define LABEL_33_45 73
#define TAG_33_46 35
#define LABEL_33_47 75
#define TAG_33_48 36
#define ENVIRONMENT_LABEL_33_3 85
#define DEBUGGING_LABEL_33_2 84
#define OBJECT_33_4 83
#define OBJECT_33_3 82
#define OBJECT_33_2 81
#define OBJECT_33_1 80
#define OBJECT_33_0 79
#define EXECUTE_CACHE_33_6 77
#define FREE_REFERENCES_LABEL_33_0 76
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_33_4);
      goto partitionB_56;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_12);
      goto label_58;

    case 3:
      current_block = (Rpc - LABEL_33_13);
      goto lambda_79;

    case 4:
      current_block = (Rpc - LABEL_33_7);
      goto lambda_77;

    case 5:
      current_block = (Rpc - LABEL_33_9);
      goto lambda_78;

    case 6:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_24;

    case 7:
      current_block = (Rpc - LABEL_33_15);
      goto label_60;

    case 8:
      current_block = (Rpc - LABEL_33_16);
      goto label_59;

    case 9:
      current_block = (Rpc - LABEL_33_17);
      goto lp_18;

    case 10:
      current_block = (Rpc - LABEL_33_19);
      goto label_61;

    case 11:
      current_block = (Rpc - LABEL_33_20);
      goto lp_8;

    case 12:
      current_block = (Rpc - LABEL_33_22);
      goto label_62;

    case 13:
      current_block = (Rpc - LABEL_33_23);
      goto lp_51;

    case 14:
      current_block = (Rpc - LABEL_33_25);
      goto label_63;

    case 15:
      current_block = (Rpc - LABEL_33_28);
      goto lp_37;

    case 16:
      current_block = (Rpc - LABEL_33_30);
      goto label_64;

    case 17:
      current_block = (Rpc - LABEL_33_18);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_33_33);
      goto label_67;

    case 19:
      current_block = (Rpc - LABEL_33_34);
      goto label_66;

    case 20:
      current_block = (Rpc - LABEL_33_35);
      goto label_65;

    case 21:
      current_block = (Rpc - LABEL_33_21);
      goto continuation_4;

    case 22:
      current_block = (Rpc - LABEL_33_36);
      goto label_70;

    case 23:
      current_block = (Rpc - LABEL_33_37);
      goto label_69;

    case 24:
      current_block = (Rpc - LABEL_33_38);
      goto label_68;

    case 25:
      current_block = (Rpc - LABEL_33_26);
      goto lambda_83;

    case 26:
      current_block = (Rpc - LABEL_33_24);
      goto continuation_43;

    case 27:
      current_block = (Rpc - LABEL_33_40);
      goto label_72;

    case 28:
      current_block = (Rpc - LABEL_33_41);
      goto label_71;

    case 29:
      current_block = (Rpc - LABEL_33_31);
      goto lambda_85;

    case 30:
      current_block = (Rpc - LABEL_33_29);
      goto continuation_29;

    case 31:
      current_block = (Rpc - LABEL_33_42);
      goto label_74;

    case 32:
      current_block = (Rpc - LABEL_33_44);
      goto label_73;

    case 33:
      current_block = (Rpc - LABEL_33_39);
      goto continuation_45;

    case 34:
      current_block = (Rpc - LABEL_33_43);
      goto continuation_32;

    case 35:
      current_block = (Rpc - LABEL_33_45);
      goto lambda_86;

    case 36:
      current_block = (Rpc - LABEL_33_47);
      goto lambda_87;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (partitionB_76)
DEFLABEL (partitionB_56)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_13])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  ((Wrd13.pObj) [2]) = (Wrd7.Obj);
  ((Wrd13.pObj) [3]) = (Wrd7.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd20.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd22.pObj) = (& (Rhp [-1]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_7])));
  Rhp += 2;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd31 = Wrd28;
  (Wrd32.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  ((Wrd31.pObj) [3]) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_9])));
  Rhp += 2;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd37 = Wrd34;
  ((Wrd37.pObj) [2]) = (Wrd32.Obj);
  ((Wrd37.pObj) [3]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  ((Wrd22.pObj) [0]) = (Wrd33.Obj);
  ((Wrd16.pObj) [0]) = (Wrd27.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd52.Obj) = (Rsp [4]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_95;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_94)
  (Wrd58.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd58.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_33_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_90;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_89)
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto lp_51;

DEFLABEL (label_90)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_91)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_93;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_92)
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  goto lp_37;

DEFLABEL (label_93)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (lambda_79)
  CLOSURE_HEADER (LABEL_33_13);

DEFLABEL (lambda_54)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_77)
  CLOSURE_HEADER (LABEL_33_7);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto lp_18;

DEFLABEL (lambda_78)
  CLOSURE_HEADER (LABEL_33_9);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto lp_8;

DEFLABEL (lp_80)
DEFLABEL (lp_18)
  INTERRUPT_CHECK (26, LABEL_33_17);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_97;
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd7.Obj);
  (Rsp [5]) = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_96;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [1]) = (Wrd12.Obj);
  Rvl = (current_block [OBJECT_33_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_96)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 2);

DEFLABEL (label_97)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_18]))));
  (* (--Rsp)) = (Wrd19.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_106;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_105)
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_33_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_102;
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_101;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [1]) = (Wrd26.Obj);

DEFLABEL (label_100)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd11.pObj) [0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd13.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_99;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_98)
  (Rsp [5]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_99)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_35]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_65)
  (Wrd14.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_34]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 2);

DEFLABEL (label_66)
  goto label_100;

DEFLABEL (label_102)
  (Wrd34.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd34.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_104;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_103)
  (Rsp [1]) = (Wrd35.Obj);
  goto lp_18;

DEFLABEL (label_104)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_33]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_67)
  (Wrd35.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (lp_81)
DEFLABEL (lp_8)
  INTERRUPT_CHECK (26, LABEL_33_20);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_108;
  (Rsp [5]) = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_107;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [1]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_33_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_107)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 2);

DEFLABEL (label_108)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_21]))));
  (* (--Rsp)) = (Wrd18.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_117;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_116)
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_111;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_110;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_109)
  (Rsp [1]) = (Wrd8.Obj);
  goto lp_8;

DEFLABEL (label_110)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_38]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_68)
  (Wrd8.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_111)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_115;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = (Rsp [1]);
  ((Wrd35.pObj) [1]) = (Wrd36.Obj);

DEFLABEL (label_114)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd21.pObj) [0]);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd23.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_113;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_112)
  (Rsp [5]) = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_113)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_37]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_69)
  (Wrd24.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_36]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 2);

DEFLABEL (label_70)
  goto label_114;

DEFLABEL (label_117)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_22]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_116;

DEFLABEL (lp_82)
DEFLABEL (lp_51)
  INTERRUPT_CHECK (26, LABEL_33_23);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_118;
  (Wrd7.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd7.Obj);
  (Rsp [5]) = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_26])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_118)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_24]))));
  (* (--Rsp)) = (Wrd19.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_125;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_124)
  (Wrd29.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd29.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_33_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_121;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_120;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_119)
  (Rsp [1]) = (Wrd8.Obj);
  goto lp_51;

DEFLABEL (label_120)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_41]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_71)
  (Wrd8.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_121)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_39]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_123;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_122)
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [7]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_33_39);
  (Wrd5.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_45])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_123)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_40]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_25]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_124;

DEFLABEL (lp_84)
DEFLABEL (lp_37)
  INTERRUPT_CHECK (26, LABEL_33_28);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_126;
  (Rsp [4]) = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_31])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_126)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_29]))));
  (* (--Rsp)) = (Wrd18.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_133;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_132)
  (Wrd28.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_33_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_129;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_43]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_128;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_127)
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_33_43);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_48);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_47])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_128)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_44]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (label_129)
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd24.Obj);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_131;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_130)
  (Rsp [1]) = (Wrd25.Obj);
  goto lp_37;

DEFLABEL (label_131)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_42]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_74)
  (Wrd25.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_30]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_132;

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_33_26);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_85)
  CLOSURE_HEADER (LABEL_33_31);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_86)
  CLOSURE_HEADER (LABEL_33_45);

DEFLABEL (lambda_46)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_87)
  CLOSURE_HEADER (LABEL_33_47);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define TAG_34_6 1
#define LABEL_34_8 7
#define ENVIRONMENT_LABEL_34_3 13
#define DEBUGGING_LABEL_34_2 12
#define OBJECT_34_0 11
#define EXECUTE_CACHE_34_7 9
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_34_4);
      goto remove_2;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_5)
DEFLABEL (remove_2)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_34_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_34_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define TAG_35_6 1
#define LABEL_35_8 7
#define ENVIRONMENT_LABEL_35_3 13
#define DEBUGGING_LABEL_35_2 12
#define OBJECT_35_0 11
#define EXECUTE_CACHE_35_7 9
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_35_4);
      goto removeB_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (removeB_5)
DEFLABEL (removeB_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_35_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_35_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define LABEL_36_9 11
#define LABEL_36_10 13
#define LABEL_36_11 15
#define LABEL_36_12 17
#define ENVIRONMENT_LABEL_36_3 30
#define DEBUGGING_LABEL_36_2 29
#define OBJECT_36_3 28
#define OBJECT_36_2 27
#define OBJECT_36_1 26
#define OBJECT_36_0 25
#define EXECUTE_CACHE_36_13 19
#define EXECUTE_CACHE_36_8 21
#define FREE_REFERENCE_36_0 24
#define FREE_REFERENCES_LABEL_36_0 18
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      goto delete_duplicates_15;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto recur_12;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_36_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_36_10);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_36_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_36_12);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_duplicates_21)
DEFLABEL (delete_duplicates_15)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_36_0]))
    goto label_24;
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  Rdl = (& (Rsp [5]));
  goto recur_12;

DEFLABEL (label_24)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_26;
  Wrd12 = Wrd16;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_5])), (Wrd13.pObj));

DEFLABEL (label_17)
  (Wrd12.Obj) = Rvl;
  goto label_25;

DEFLABEL (recur_22)
DEFLABEL (recur_12)
  DLINK_INTERRUPT_CHECK (25, LABEL_36_6);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_27)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_33)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_32;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_31)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [5]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd52.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_36_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  goto recur_12;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_36_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == Rvl)
    goto label_29;
  (Wrd12.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  goto label_28;

DEFLABEL (label_29)
  Rvl = (Rsp [3]);

DEFLABEL (label_28)
DEFLABEL (label_30)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_32)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 1);

DEFLABEL (label_19)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (label_18)
  (Wrd15.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd15.Obj));
  (* (--Rsp)) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_7 9
#define LABEL_37_9 11
#define LABEL_37_10 13
#define LABEL_37_11 15
#define LABEL_37_12 17
#define ENVIRONMENT_LABEL_37_3 30
#define DEBUGGING_LABEL_37_2 29
#define OBJECT_37_3 28
#define OBJECT_37_2 27
#define OBJECT_37_1 26
#define OBJECT_37_0 25
#define EXECUTE_CACHE_37_13 19
#define EXECUTE_CACHE_37_8 21
#define FREE_REFERENCE_37_0 24
#define FREE_REFERENCES_LABEL_37_0 18
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      goto delete_duplicatesB_15;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto recur_12;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_37_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_37_10);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_37_12);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_duplicatesB_21)
DEFLABEL (delete_duplicatesB_15)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_37_0]))
    goto label_24;
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  Rdl = (& (Rsp [5]));
  goto recur_12;

DEFLABEL (label_24)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_26;
  Wrd12 = Wrd16;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_5])), (Wrd13.pObj));

DEFLABEL (label_17)
  (Wrd12.Obj) = Rvl;
  goto label_25;

DEFLABEL (recur_22)
DEFLABEL (recur_12)
  DLINK_INTERRUPT_CHECK (25, LABEL_37_6);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_37_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_27)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_33)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_32;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_31)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [5]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd52.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_37_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  goto recur_12;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_37_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == Rvl)
    goto label_29;
  (Wrd12.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  goto label_28;

DEFLABEL (label_29)
  Rvl = (Rsp [3]);

DEFLABEL (label_28)
DEFLABEL (label_30)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_32)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 1);

DEFLABEL (label_19)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_18)
  (Wrd15.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd15.Obj));
  (* (--Rsp)) = Rvl;
  goto label_33;

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
srfi_1_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_38_4);
      goto find_2;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_5)
DEFLABEL (find_2)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_6;
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_6)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd10.pObj) [0]);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define LABEL_39_9 9
#define LABEL_39_8 11
#define LABEL_39_10 13
#define ENVIRONMENT_LABEL_39_3 21
#define DEBUGGING_LABEL_39_2 20
#define OBJECT_39_2 19
#define OBJECT_39_1 18
#define OBJECT_39_0 17
#define EXECUTE_CACHE_39_7 15
#define FREE_REFERENCES_LABEL_39_0 14
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_39_4);
      goto find_tail_7;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto lp_5;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_39_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_39_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_tail_12)
DEFLABEL (find_tail_7)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lp_5;

DEFLABEL (lp_13)
DEFLABEL (lp_5)
  INTERRUPT_CHECK (26, LABEL_39_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_19;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_18)
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd9.Obj);
  goto lp_5;

DEFLABEL (label_17)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_6 7
#define LABEL_40_8 9
#define LABEL_40_9 11
#define LABEL_40_11 13
#define LABEL_40_10 15
#define ENVIRONMENT_LABEL_40_3 24
#define DEBUGGING_LABEL_40_2 23
#define OBJECT_40_3 22
#define OBJECT_40_2 21
#define OBJECT_40_1 20
#define OBJECT_40_0 19
#define EXECUTE_CACHE_40_7 17
#define FREE_REFERENCES_LABEL_40_0 16
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_40_4);
      goto take_while_9;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto recur_7;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_40_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_40_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_40_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_40_10);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (take_while_14)
DEFLABEL (take_while_9)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto recur_7;

DEFLABEL (recur_15)
DEFLABEL (recur_7)
  DLINK_INTERRUPT_CHECK (25, LABEL_40_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (current_block [OBJECT_40_2]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_16)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_20)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = (current_block [OBJECT_40_2]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_17)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_19;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_18)
  Rdl = (& (Rsp [2]));
  goto recur_7;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_40_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 1);

DEFLABEL (label_12)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 1);

DEFLABEL (label_11)
  (Wrd15.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd15.Obj));
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define LABEL_41_9 9
#define LABEL_41_8 11
#define LABEL_41_10 13
#define ENVIRONMENT_LABEL_41_3 22
#define DEBUGGING_LABEL_41_2 21
#define OBJECT_41_3 20
#define OBJECT_41_2 19
#define OBJECT_41_1 18
#define OBJECT_41_0 17
#define EXECUTE_CACHE_41_7 15
#define FREE_REFERENCES_LABEL_41_0 14
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_41_4);
      goto drop_while_7;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto lp_5;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_41_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_41_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (drop_while_12)
DEFLABEL (drop_while_7)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lp_5;

DEFLABEL (lp_13)
DEFLABEL (lp_5)
  INTERRUPT_CHECK (26, LABEL_41_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (current_block [OBJECT_41_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_19;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_18)
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd7.Obj);
  goto lp_5;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 1);

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_7 5
#define LABEL_42_9 7
#define LABEL_42_5 9
#define LABEL_42_10 11
#define LABEL_42_11 13
#define LABEL_42_12 15
#define LABEL_42_13 17
#define LABEL_42_14 19
#define LABEL_42_8 21
#define ENVIRONMENT_LABEL_42_3 31
#define DEBUGGING_LABEL_42_2 30
#define OBJECT_42_4 29
#define OBJECT_42_3 28
#define OBJECT_42_2 27
#define OBJECT_42_1 26
#define OBJECT_42_0 25
#define EXECUTE_CACHE_42_6 23
#define FREE_REFERENCES_LABEL_42_0 22
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_42_4);
      goto take_whileB_13;

    case 1:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_42_9);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_42_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_42_11);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_42_12);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_42_13);
      goto lp_11;

    case 8:
      current_block = (Rpc - LABEL_42_14);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_42_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (take_whileB_20)
DEFLABEL (take_whileB_13)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_42_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_28;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_27)
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_26;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_25)
  (Wrd36.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  goto lp_11;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_42_8);

DEFLABEL (label_24)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (lp_21)
DEFLABEL (lp_11)
  INTERRUPT_CHECK (26, LABEL_42_13);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_30;

DEFLABEL (label_29)
  Rsp = (& (Rsp [3]));
  goto label_24;

DEFLABEL (label_30)
  if (! ((Wrd8.uLng) == 1))
    goto label_36;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_35)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd23.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_42_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd26.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_32;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_31)
  (Rsp [2]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  goto lp_11;

DEFLABEL (label_32)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_18)
  (Wrd27.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd37.Obj) = (current_block [OBJECT_42_3]);
  (Rsp [2]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 1)
    goto label_34;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_4]), 2);

DEFLABEL (label_34)
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  ((Wrd40.pObj) [1]) = (Wrd37.Obj);
  goto label_29;

DEFLABEL (label_36)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define LABEL_43_8 9
#define LABEL_43_10 11
#define LABEL_43_9 13
#define LABEL_43_16 15
#define LABEL_43_13 17
#define TAG_43_14 7
#define LABEL_43_15 19
#define LABEL_43_11 21
#define TAG_43_12 9
#define LABEL_43_17 23
#define TAG_43_18 10
#define ENVIRONMENT_LABEL_43_3 32
#define DEBUGGING_LABEL_43_2 31
#define OBJECT_43_3 30
#define OBJECT_43_2 29
#define OBJECT_43_1 28
#define OBJECT_43_0 27
#define EXECUTE_CACHE_43_7 25
#define FREE_REFERENCES_LABEL_43_0 24
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_43_4);
      goto span_17;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto recur_15;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_43_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_43_10);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_43_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_43_16);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_43_13);
      goto lambda_26;

    case 8:
      current_block = (Rpc - LABEL_43_15);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_43_11);
      goto lambda_25;

    case 10:
      current_block = (Rpc - LABEL_43_17);
      goto lambda_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (span_22)
DEFLABEL (span_17)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto recur_15;

DEFLABEL (recur_23)
DEFLABEL (recur_15)
  DLINK_INTERRUPT_CHECK (25, LABEL_43_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_28)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_33;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_32)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_43_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd36.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_11])));
  Rhp += 1;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  Wrd40 = Wrd39;
  (Wrd41.Obj) = (Rsp [0]);
  ((Wrd40.pObj) [2]) = (Wrd41.Obj);
  Rvl = (Wrd38.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_13])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_31;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_30)
  Rdl = (& (Rsp [2]));
  goto recur_15;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_43_15);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_16]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_3]), 1);

DEFLABEL (label_20)
  (Wrd27.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd27.Obj));
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_19)
  (Wrd16.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd16.Obj));
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (lambda_24)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_43_10);
  (Wrd5.Obj) = (current_block [OBJECT_43_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_43_13);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_17])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_43_11);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43_2]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_43_17);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_7 5
#define LABEL_44_8 7
#define LABEL_44_5 9
#define LABEL_44_9 11
#define LABEL_44_10 13
#define TAG_44_11 5
#define LABEL_44_12 15
#define LABEL_44_14 17
#define LABEL_44_15 19
#define LABEL_44_16 21
#define LABEL_44_13 23
#define LABEL_44_17 25
#define LABEL_44_18 27
#define TAG_44_19 12
#define ENVIRONMENT_LABEL_44_3 37
#define DEBUGGING_LABEL_44_2 36
#define OBJECT_44_4 35
#define OBJECT_44_3 34
#define OBJECT_44_2 33
#define OBJECT_44_1 32
#define OBJECT_44_0 31
#define EXECUTE_CACHE_44_6 29
#define FREE_REFERENCES_LABEL_44_0 28
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd47;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_44_4);
      goto spanB_19;

    case 1:
      current_block = (Rpc - LABEL_44_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_44_8);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_44_10);
      goto lambda_28;

    case 6:
      current_block = (Rpc - LABEL_44_12);
      goto lp_12;

    case 7:
      current_block = (Rpc - LABEL_44_14);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_44_15);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_44_16);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_44_13);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_44_17);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_44_18);
      goto lambda_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (spanB_27)
DEFLABEL (spanB_19)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_10])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_36;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_35)
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_34;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_33)
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  goto lp_12;

DEFLABEL (label_34)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_44_10);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44_3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lp_29)
DEFLABEL (lp_12)
  INTERRUPT_CHECK (26, LABEL_44_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_44_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_37)
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_18])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_45;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_44)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_14]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd32.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_44_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd35.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd35.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_40;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [2]) = (Wrd36.Obj);
  Rsp = (& (Rsp [1]));
  goto lp_12;

DEFLABEL (label_40)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_16]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_24)
  (Wrd36.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_43;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = (current_block [OBJECT_44_3]);
  ((Wrd49.pObj) [1]) = (Wrd50.Obj);

DEFLABEL (label_42)
  (Wrd47.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd47.Obj);
  goto label_37;

DEFLABEL (label_43)
  (Wrd54.Obj) = (current_block [OBJECT_44_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_4]), 2);

DEFLABEL (label_25)
  goto label_42;

DEFLABEL (label_45)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_17]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_44_18);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_6 5
#define TAG_45_7 1
#define LABEL_45_9 7
#define ENVIRONMENT_LABEL_45_3 16
#define DEBUGGING_LABEL_45_2 15
#define OBJECT_45_1 14
#define OBJECT_45_0 13
#define EXECUTE_CACHE_45_8 9
#define EXECUTE_CACHE_45_5 11
#define FREE_REFERENCES_LABEL_45_0 8
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd12;
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
      goto break_3;

    case 1:
      current_block = (Rpc - LABEL_45_6);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (break_6)
DEFLABEL (break_3)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_45_0]))
    goto label_8;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (label_8)
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_5]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_45_6);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_45_1]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define TAG_46_6 1
#define LABEL_46_8 7
#define ENVIRONMENT_LABEL_46_3 13
#define DEBUGGING_LABEL_46_2 12
#define OBJECT_46_0 11
#define EXECUTE_CACHE_46_7 9
#define FREE_REFERENCES_LABEL_46_0 8
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_46_4);
      goto breakB_2;

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

DEFLABEL (breakB_5)
DEFLABEL (breakB_2)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_46_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_46_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_7 5
#define LABEL_47_9 7
#define LABEL_47_10 9
#define LABEL_47_5 11
#define LABEL_47_13 13
#define LABEL_47_11 15
#define TAG_47_12 6
#define LABEL_47_14 17
#define LABEL_47_15 19
#define TAG_47_16 8
#define LABEL_47_17 21
#define LABEL_47_21 23
#define LABEL_47_22 25
#define LABEL_47_18 27
#define TAG_47_19 12
#define LABEL_47_20 29
#define LABEL_47_23 31
#define ENVIRONMENT_LABEL_47_3 42
#define DEBUGGING_LABEL_47_2 41
#define OBJECT_47_3 40
#define OBJECT_47_2 39
#define OBJECT_47_1 38
#define OBJECT_47_0 37
#define EXECUTE_CACHE_47_8 33
#define EXECUTE_CACHE_47_6 35
#define FREE_REFERENCES_LABEL_47_0 32
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_47_4);
      goto any_24;

    case 1:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_47_9);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_47_10);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_23;

    case 5:
      current_block = (Rpc - LABEL_47_13);
      goto lp_10;

    case 6:
      current_block = (Rpc - LABEL_47_11);
      goto lambda_32;

    case 7:
      current_block = (Rpc - LABEL_47_14);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_47_15);
      goto lp_19;

    case 9:
      current_block = (Rpc - LABEL_47_17);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_47_21);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_47_22);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_47_18);
      goto lambda_35;

    case 13:
      current_block = (Rpc - LABEL_47_20);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_47_23);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (any_31)
DEFLABEL (any_24)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_41;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_40;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_39)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_38;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_37)
  goto lp_10;

DEFLABEL (label_38)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_11])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lp_33)
DEFLABEL (lp_10)
  INTERRUPT_CHECK (26, LABEL_47_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_47_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_42)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_47_17);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  Rvl = Rvl;
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_46)
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_45;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_44)
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto lp_10;

DEFLABEL (label_45)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_22]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (label_29)
  (Wrd18.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_21]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 1);

DEFLABEL (label_28)
  (Wrd9.Obj) = Rvl;
  goto label_46;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_47_11);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_48;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_48)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_15])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  Wrd12 = Wrd16;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd17.Obj);
  goto lp_19;

DEFLABEL (lp_34)
DEFLABEL (lp_19)
  INTERRUPT_CHECK (26, LABEL_47_15);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_18])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  ((Wrd11.pObj) [3]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_20]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_47_20);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_47_18);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_49;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 2);

DEFLABEL (label_49)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 2);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_47_23);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto lp_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_7 5
#define LABEL_48_9 7
#define LABEL_48_10 9
#define LABEL_48_5 11
#define LABEL_48_13 13
#define LABEL_48_11 15
#define TAG_48_12 6
#define LABEL_48_14 17
#define LABEL_48_15 19
#define TAG_48_16 8
#define LABEL_48_17 21
#define LABEL_48_21 23
#define LABEL_48_22 25
#define LABEL_48_18 27
#define TAG_48_19 12
#define LABEL_48_20 29
#define LABEL_48_23 31
#define ENVIRONMENT_LABEL_48_3 43
#define DEBUGGING_LABEL_48_2 42
#define OBJECT_48_4 41
#define OBJECT_48_3 40
#define OBJECT_48_2 39
#define OBJECT_48_1 38
#define OBJECT_48_0 37
#define EXECUTE_CACHE_48_8 33
#define EXECUTE_CACHE_48_6 35
#define FREE_REFERENCES_LABEL_48_0 32
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_48_4);
      goto every_25;

    case 1:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_48_9);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_48_10);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_24;

    case 5:
      current_block = (Rpc - LABEL_48_13);
      goto lp_9;

    case 6:
      current_block = (Rpc - LABEL_48_11);
      goto lambda_33;

    case 7:
      current_block = (Rpc - LABEL_48_14);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_48_15);
      goto lp_19;

    case 9:
      current_block = (Rpc - LABEL_48_17);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_48_21);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_48_22);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_48_18);
      goto lambda_36;

    case 13:
      current_block = (Rpc - LABEL_48_20);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_48_23);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (every_32)
DEFLABEL (every_25)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_42;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_41;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_40)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_39;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd18.Obj);
  goto lp_9;

DEFLABEL (label_39)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 1);

DEFLABEL (label_28)
  (Wrd18.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_11])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lp_34)
DEFLABEL (lp_9)
  INTERRUPT_CHECK (26, LABEL_48_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_48_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_43)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_48_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_48;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_47)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_46;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_45)
  (Rsp [1]) = (Wrd16.Obj);
  goto lp_9;

DEFLABEL (label_46)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 1);

DEFLABEL (label_30)
  (Wrd16.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_29)
  (Wrd7.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_48_11);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_50;
  (Wrd7.Obj) = (current_block [OBJECT_48_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_49;

DEFLABEL (label_50)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_49)
DEFLABEL (label_52)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_51)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_15])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  Wrd16 = Wrd20;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  goto lp_19;

DEFLABEL (lp_35)
DEFLABEL (lp_19)
  INTERRUPT_CHECK (26, LABEL_48_15);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_18])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  ((Wrd11.pObj) [3]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_20]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_48_20);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_48_18);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_53;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_4]), 2);

DEFLABEL (label_53)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_4]), 2);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_48_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [0]) = (Wrd7.Obj);
  goto lp_19;

DEFLABEL (label_54)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_7 5
#define LABEL_49_5 7
#define TAG_49_6 2
#define LABEL_49_8 9
#define LABEL_49_13 11
#define LABEL_49_10 13
#define LABEL_49_12 15
#define LABEL_49_16 17
#define LABEL_49_14 19
#define TAG_49_15 8
#define LABEL_49_17 21
#define ENVIRONMENT_LABEL_49_3 33
#define DEBUGGING_LABEL_49_2 32
#define OBJECT_49_4 31
#define OBJECT_49_3 30
#define OBJECT_49_2 29
#define OBJECT_49_1 28
#define OBJECT_49_0 27
#define EXECUTE_CACHE_49_11 23
#define EXECUTE_CACHE_49_9 25
#define FREE_REFERENCES_LABEL_49_0 22
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
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
      goto list_index_18;

    case 1:
      current_block = (Rpc - LABEL_49_7);
      goto lp_7;

    case 2:
      current_block = (Rpc - LABEL_49_5);
      goto lp_16;

    case 3:
      current_block = (Rpc - LABEL_49_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_49_13);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_49_10);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_49_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_49_16);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_49_14);
      goto lambda_26;

    case 9:
      current_block = (Rpc - LABEL_49_17);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list_index_23)
DEFLABEL (list_index_18)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_27;
  (Wrd7.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lp_7;

DEFLABEL (label_27)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_5])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  Wrd18 = Wrd20;
  (Wrd19.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_49_0]);
  (Rsp [2]) = (Wrd16.Obj);
  goto lp_16;

DEFLABEL (lp_25)
DEFLABEL (lp_7)
  INTERRUPT_CHECK (26, LABEL_49_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_33;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_32)
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd20.Lng) + 1L);
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (Rsp [1]) = (Wrd18.Obj);
  goto lp_7;

DEFLABEL (label_31)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 1);

DEFLABEL (label_21)
  (Wrd9.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (lp_24)
DEFLABEL (lp_16)
  INTERRUPT_CHECK (26, LABEL_49_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_11]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_49_10);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_14])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  ((Wrd13.pObj) [3]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_49_14);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_4]), 2);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_49_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd16.Lng) + 1L);
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd18.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [0]) = (Wrd18.Obj);
  goto lp_16;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define TAG_50_6 1
#define ENVIRONMENT_LABEL_50_3 12
#define DEBUGGING_LABEL_50_2 11
#define EXECUTE_CACHE_50_8 7
#define EXECUTE_CACHE_50_7 9
#define FREE_REFERENCES_LABEL_50_0 6
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_50_4);
      goto Z__lset2___1;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__lset2___4)
DEFLABEL (Z__lset2___1)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_5])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_50_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_6 7
#define LABEL_51_7 9
#define LABEL_51_8 11
#define LABEL_51_9 13
#define LABEL_51_10 15
#define ENVIRONMENT_LABEL_51_3 23
#define DEBUGGING_LABEL_51_2 22
#define OBJECT_51_2 21
#define OBJECT_51_1 20
#define OBJECT_51_0 19
#define EXECUTE_CACHE_51_11 17
#define FREE_REFERENCES_LABEL_51_0 16
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_51_4);
      goto lset___16;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_51_8);
      goto lp_13;

    case 5:
      current_block = (Rpc - LABEL_51_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_51_10);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset___23)
DEFLABEL (lset___16)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_26;
  (Wrd7.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_25;

DEFLABEL (label_26)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_25)
DEFLABEL (label_32)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_31;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_30)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_29;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd21.Obj);
  goto lp_13;

DEFLABEL (label_29)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_19)
  (Wrd21.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (lp_24)
DEFLABEL (lp_13)
  INTERRUPT_CHECK (26, LABEL_51_8);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_34;
  (Wrd7.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_33;

DEFLABEL (label_34)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_33)
DEFLABEL (label_42)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_41;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_40)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_39;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (Rsp [2]);
  if (! ((Wrd30.Obj) == (Wrd31.Obj)))
    goto label_37;

DEFLABEL (label_36)
  (Wrd38.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd39.Obj);
  Rsp = (& (Rsp [2]));
  goto lp_13;

DEFLABEL (label_37)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd37.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_51_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_21)
  (Wrd21.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define LABEL_52_7 9
#define LABEL_52_8 11
#define LABEL_52_9 13
#define LABEL_52_10 15
#define LABEL_52_11 17
#define ENVIRONMENT_LABEL_52_3 25
#define DEBUGGING_LABEL_52_2 24
#define OBJECT_52_2 23
#define OBJECT_52_1 22
#define OBJECT_52_0 21
#define EXECUTE_CACHE_52_12 19
#define FREE_REFERENCES_LABEL_52_0 18
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_52_4);
      goto lset__17;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_52_8);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_52_9);
      goto lp_14;

    case 6:
      current_block = (Rpc - LABEL_52_10);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_52_11);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset__24)
DEFLABEL (lset__17)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_27;
  (Wrd7.Obj) = (current_block [OBJECT_52_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_26;

DEFLABEL (label_27)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_26)
DEFLABEL (label_33)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_32;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_31)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_30;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd21.Obj);
  goto lp_14;

DEFLABEL (label_30)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 1);

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (lp_25)
DEFLABEL (lp_14)
  INTERRUPT_CHECK (26, LABEL_52_9);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_35;
  (Wrd7.Obj) = (current_block [OBJECT_52_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_34;

DEFLABEL (label_35)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_34)
DEFLABEL (label_44)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_43;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_42)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_41;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.Obj) = (Rsp [0]);
  if (! ((Wrd30.Obj) == (Wrd31.Obj)))
    goto label_38;

DEFLABEL (label_37)
  (Wrd38.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd39.Obj);
  Rsp = (& (Rsp [2]));
  goto lp_14;

DEFLABEL (label_38)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_39)
  (Wrd49.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (label_41)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 1);

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_52_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_46;

DEFLABEL (label_45)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_39;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_52_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define TAG_53_6 1
#define LABEL_53_8 7
#define ENVIRONMENT_LABEL_53_3 14
#define DEBUGGING_LABEL_53_2 13
#define EXECUTE_CACHE_53_9 9
#define EXECUTE_CACHE_53_7 11
#define FREE_REFERENCES_LABEL_53_0 8
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_53_4);
      goto lset_adjoin_2;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_53_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset_adjoin_5)
DEFLABEL (lset_adjoin_2)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_53_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (Rsp [2]);
  goto label_7;

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define TAG_54_6 1
#define LABEL_54_8 7
#define TAG_54_9 2
#define LABEL_54_11 9
#define LABEL_54_12 11
#define TAG_54_13 4
#define ENVIRONMENT_LABEL_54_3 21
#define DEBUGGING_LABEL_54_2 20
#define OBJECT_54_0 19
#define EXECUTE_CACHE_54_14 13
#define EXECUTE_CACHE_54_10 15
#define EXECUTE_CACHE_54_7 17
#define FREE_REFERENCES_LABEL_54_0 12
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_54_4);
      goto lset_union_7;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_54_8);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_54_11);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_54_12);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset_union_10)
DEFLABEL (lset_union_7)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_7]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_54_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_54_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_17;
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_16;
  if ((Wrd5.Obj) == (Wrd7.Obj))
    goto label_14;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_8])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_10]));

DEFLABEL (label_14)
  Rvl = (Wrd7.Obj);

DEFLABEL (label_15)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  Rvl = (Wrd5.Obj);
  goto label_15;

DEFLABEL (label_17)
  Rvl = (Rsp [2]);
  goto label_15;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_54_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_12])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_54_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (Rsp [2]);
  goto label_18;

DEFLABEL (label_19)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_54_12);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define TAG_55_6 1
#define LABEL_55_8 7
#define TAG_55_9 2
#define LABEL_55_11 9
#define LABEL_55_12 11
#define LABEL_55_16 13
#define LABEL_55_13 15
#define TAG_55_14 6
#define ENVIRONMENT_LABEL_55_3 27
#define DEBUGGING_LABEL_55_2 26
#define OBJECT_55_2 25
#define OBJECT_55_1 24
#define OBJECT_55_0 23
#define EXECUTE_CACHE_55_15 17
#define EXECUTE_CACHE_55_10 19
#define EXECUTE_CACHE_55_7 21
#define FREE_REFERENCES_LABEL_55_0 16
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_55_4);
      goto lset_unionB_10;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_55_8);
      goto lambda_17;

    case 3:
      current_block = (Rpc - LABEL_55_11);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_55_12);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_55_16);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_55_13);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset_unionB_15)
DEFLABEL (lset_unionB_10)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55_0]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_7]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_55_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_55_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_22;
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_21;
  if ((Wrd5.Obj) == (Wrd7.Obj))
    goto label_19;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_8])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_10]));

DEFLABEL (label_19)
  Rvl = (Wrd7.Obj);

DEFLABEL (label_20)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  Rvl = (Wrd5.Obj);
  goto label_20;

DEFLABEL (label_22)
  Rvl = (Rsp [2]);
  goto label_20;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_55_8);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_28;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_27)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_13])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_55_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = (Rsp [3]);

DEFLABEL (label_23)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_26;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [1]) = (Wrd13.Obj);

DEFLABEL (label_25)
  Rvl = (Rsp [2]);
  goto label_23;

DEFLABEL (label_26)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 2);

DEFLABEL (label_13)
  goto label_25;

DEFLABEL (label_28)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_55_13);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_6 5
#define LABEL_56_5 7
#define LABEL_56_8 9
#define LABEL_56_9 11
#define LABEL_56_11 13
#define TAG_56_12 5
#define LABEL_56_15 15
#define TAG_56_16 6
#define ENVIRONMENT_LABEL_56_3 34
#define DEBUGGING_LABEL_56_2 33
#define OBJECT_56_1 32
#define OBJECT_56_0 31
#define EXECUTE_CACHE_56_18 17
#define EXECUTE_CACHE_56_17 19
#define EXECUTE_CACHE_56_14 21
#define EXECUTE_CACHE_56_13 23
#define EXECUTE_CACHE_56_10 25
#define EXECUTE_CACHE_56_7 27
#define FREE_REFERENCE_56_0 30
#define FREE_REFERENCES_LABEL_56_0 16
#define NUMBER_OF_LINKER_SECTIONS_56_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_56_4);
      goto lset_intersection_7;

    case 1:
      current_block = (Rpc - LABEL_56_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_56_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_56_9);
      goto lambda_1;

    case 5:
      current_block = (Rpc - LABEL_56_11);
      goto lambda_12;

    case 6:
      current_block = (Rpc - LABEL_56_15);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset_intersection_11)
DEFLABEL (lset_intersection_7)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_56_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (current_block [OBJECT_56_0]);

DEFLABEL (label_15)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == (current_block [OBJECT_56_0]))
    goto label_17;
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_56_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_56_11])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  ((Wrd17.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_13]));

DEFLABEL (label_17)
  Rvl = (Rsp [2]);
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_13)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_56_9);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_1]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_14]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_56_11);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_56_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_56_15])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd16.Obj) = ((Wrd7.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_17]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_56_15);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_18]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_6 5
#define LABEL_57_5 7
#define LABEL_57_8 9
#define LABEL_57_9 11
#define LABEL_57_11 13
#define TAG_57_12 5
#define LABEL_57_15 15
#define TAG_57_16 6
#define ENVIRONMENT_LABEL_57_3 34
#define DEBUGGING_LABEL_57_2 33
#define OBJECT_57_1 32
#define OBJECT_57_0 31
#define EXECUTE_CACHE_57_18 17
#define EXECUTE_CACHE_57_17 19
#define EXECUTE_CACHE_57_14 21
#define EXECUTE_CACHE_57_13 23
#define EXECUTE_CACHE_57_10 25
#define EXECUTE_CACHE_57_7 27
#define FREE_REFERENCE_57_0 30
#define FREE_REFERENCES_LABEL_57_0 16
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_57_4);
      goto lset_intersectionB_7;

    case 1:
      current_block = (Rpc - LABEL_57_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_57_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_57_9);
      goto lambda_1;

    case 5:
      current_block = (Rpc - LABEL_57_11);
      goto lambda_12;

    case 6:
      current_block = (Rpc - LABEL_57_15);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset_intersectionB_11)
DEFLABEL (lset_intersectionB_7)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_57_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (current_block [OBJECT_57_0]);

DEFLABEL (label_15)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == (current_block [OBJECT_57_0]))
    goto label_17;
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_11])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  ((Wrd17.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_13]));

DEFLABEL (label_17)
  Rvl = (Rsp [2]);
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_13)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_57_9);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_57_1]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_14]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_57_11);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_15])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd16.Obj) = ((Wrd7.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_17]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_57_15);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_18]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_6 5
#define LABEL_58_5 7
#define LABEL_58_8 9
#define LABEL_58_10 11
#define TAG_58_11 4
#define LABEL_58_12 13
#define TAG_58_13 5
#define LABEL_58_15 15
#define ENVIRONMENT_LABEL_58_3 30
#define DEBUGGING_LABEL_58_2 29
#define OBJECT_58_1 28
#define OBJECT_58_0 27
#define EXECUTE_CACHE_58_16 17
#define EXECUTE_CACHE_58_14 19
#define EXECUTE_CACHE_58_9 21
#define EXECUTE_CACHE_58_7 23
#define FREE_REFERENCE_58_0 26
#define FREE_REFERENCES_LABEL_58_0 16
#define NUMBER_OF_LINKER_SECTIONS_58_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_58_4);
      goto lset_difference_7;

    case 1:
      current_block = (Rpc - LABEL_58_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_58_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_58_10);
      goto lambda_12;

    case 5:
      current_block = (Rpc - LABEL_58_12);
      goto lambda_13;

    case 6:
      current_block = (Rpc - LABEL_58_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset_difference_11)
DEFLABEL (lset_difference_7)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_58_0])))
    goto label_14;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_58_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (current_block [OBJECT_58_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_10])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_6])), (Wrd10.pObj));

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_58_10);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_12])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd16.Obj) = ((Wrd7.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_14]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_58_12);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_58_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_58_1]);

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_6 5
#define LABEL_59_5 7
#define LABEL_59_8 9
#define LABEL_59_10 11
#define TAG_59_11 4
#define LABEL_59_13 13
#define TAG_59_14 5
#define LABEL_59_16 15
#define ENVIRONMENT_LABEL_59_3 32
#define DEBUGGING_LABEL_59_2 31
#define OBJECT_59_1 30
#define OBJECT_59_0 29
#define EXECUTE_CACHE_59_17 17
#define EXECUTE_CACHE_59_15 19
#define EXECUTE_CACHE_59_12 21
#define EXECUTE_CACHE_59_9 23
#define EXECUTE_CACHE_59_7 25
#define FREE_REFERENCE_59_0 28
#define FREE_REFERENCES_LABEL_59_0 16
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_59_4);
      goto lset_differenceB_7;

    case 1:
      current_block = (Rpc - LABEL_59_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_59_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_59_10);
      goto lambda_12;

    case 5:
      current_block = (Rpc - LABEL_59_13);
      goto lambda_13;

    case 6:
      current_block = (Rpc - LABEL_59_16);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset_differenceB_11)
DEFLABEL (lset_differenceB_7)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_59_0])))
    goto label_14;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_59_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (current_block [OBJECT_59_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_10])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_6])), (Wrd10.pObj));

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_59_10);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_13])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd16.Obj) = ((Wrd7.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_15]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_59_13);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_59_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_59_1]);

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define TAG_60_6 1
#define LABEL_60_8 7
#define TAG_60_9 2
#define LABEL_60_10 9
#define LABEL_60_14 11
#define TAG_60_15 4
#define LABEL_60_17 13
#define ENVIRONMENT_LABEL_60_3 29
#define DEBUGGING_LABEL_60_2 28
#define OBJECT_60_0 27
#define EXECUTE_CACHE_60_18 15
#define EXECUTE_CACHE_60_16 17
#define EXECUTE_CACHE_60_13 19
#define EXECUTE_CACHE_60_12 21
#define EXECUTE_CACHE_60_11 23
#define EXECUTE_CACHE_60_7 25
#define FREE_REFERENCES_LABEL_60_0 14
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_60_4);
      goto lset_xor_7;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_60_8);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_60_10);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_60_14);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_60_17);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset_xor_10)
DEFLABEL (lset_xor_7)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_60_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60_8])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_60_10);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_60_8);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_60_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_14;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [4]);
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd31.Obj) = ((Wrd30.pObj) [3]);
  (Rsp [2]) = (Wrd31.Obj);
  (Wrd34.Obj) = ((Wrd30.pObj) [2]);
  (Rsp [0]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_12]));

DEFLABEL (label_14)
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_15;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [4]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60_14])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd20.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  ((Wrd17.pObj) [3]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_16]));

DEFLABEL (label_15)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [4]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_13]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_60_14);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_60_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = (Rsp [2]);
  goto label_16;

DEFLABEL (label_17)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_16)
DEFLABEL (label_18)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define TAG_61_6 1
#define LABEL_61_8 7
#define TAG_61_9 2
#define LABEL_61_10 9
#define LABEL_61_14 11
#define TAG_61_15 4
#define LABEL_61_18 13
#define LABEL_61_17 15
#define LABEL_61_20 17
#define ENVIRONMENT_LABEL_61_3 35
#define DEBUGGING_LABEL_61_2 34
#define OBJECT_61_2 33
#define OBJECT_61_1 32
#define OBJECT_61_0 31
#define EXECUTE_CACHE_61_19 19
#define EXECUTE_CACHE_61_16 21
#define EXECUTE_CACHE_61_13 23
#define EXECUTE_CACHE_61_12 25
#define EXECUTE_CACHE_61_11 27
#define EXECUTE_CACHE_61_7 29
#define FREE_REFERENCES_LABEL_61_0 18
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_61_4);
      goto lset_xorB_9;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto lambda_15;

    case 2:
      current_block = (Rpc - LABEL_61_8);
      goto lambda_16;

    case 3:
      current_block = (Rpc - LABEL_61_10);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_61_14);
      goto lambda_17;

    case 5:
      current_block = (Rpc - LABEL_61_18);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_61_17);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_61_20);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset_xorB_14)
DEFLABEL (lset_xorB_9)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61_0]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_7]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_61_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_8])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_61_10);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_61_8);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_61_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_18;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [4]);
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd31.Obj) = ((Wrd30.pObj) [3]);
  (Rsp [2]) = (Wrd31.Obj);
  (Wrd34.Obj) = ((Wrd30.pObj) [2]);
  (Rsp [0]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_12]));

DEFLABEL (label_18)
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_19;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [4]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_14])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd20.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  ((Wrd17.pObj) [3]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_16]));

DEFLABEL (label_19)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [4]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_13]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_61_14);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_25;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_61_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  Rvl = (Rsp [2]);

DEFLABEL (label_20)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_23;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [1]) = (Wrd13.Obj);

DEFLABEL (label_22)
  Rvl = (Rsp [1]);
  goto label_20;

DEFLABEL (label_23)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_12)
  goto label_22;

DEFLABEL (label_25)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_6 7
#define LABEL_62_10 9
#define TAG_62_11 3
#define LABEL_62_8 11
#define LABEL_62_16 13
#define TAG_62_17 5
#define LABEL_62_13 15
#define TAG_62_14 6
#define LABEL_62_18 17
#define LABEL_62_19 19
#define TAG_62_20 8
#define ENVIRONMENT_LABEL_62_3 37
#define DEBUGGING_LABEL_62_2 36
#define OBJECT_62_2 35
#define OBJECT_62_1 34
#define OBJECT_62_0 33
#define EXECUTE_CACHE_62_22 21
#define EXECUTE_CACHE_62_21 23
#define EXECUTE_CACHE_62_15 25
#define EXECUTE_CACHE_62_12 27
#define EXECUTE_CACHE_62_9 29
#define EXECUTE_CACHE_62_7 31
#define FREE_REFERENCES_LABEL_62_0 20
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_62_4);
      goto lset_diff_intersection_10;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_62_6);
      goto lambda_0;

    case 3:
      current_block = (Rpc - LABEL_62_10);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_62_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_62_16);
      goto lambda_17;

    case 6:
      current_block = (Rpc - LABEL_62_13);
      goto lambda_16;

    case 7:
      current_block = (Rpc - LABEL_62_18);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_62_19);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset_diff_intersection_13)
DEFLABEL (lset_diff_intersection_10)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_10])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_62_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_16])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_13])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  (Wrd21.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Rsp [1]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_15]));

DEFLABEL (lambda_15)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_62_6);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_62_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_12]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_62_10);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62_1]);
  (Rsp [2]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_62_16);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62_1]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_62_13);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_19])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd18.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_62_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_21;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_62_2]);

DEFLABEL (label_21)
DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_62_19);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_22]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_6 7
#define LABEL_63_10 9
#define TAG_63_11 3
#define LABEL_63_8 11
#define LABEL_63_16 13
#define TAG_63_17 5
#define LABEL_63_13 15
#define TAG_63_14 6
#define LABEL_63_18 17
#define LABEL_63_19 19
#define TAG_63_20 8
#define ENVIRONMENT_LABEL_63_3 37
#define DEBUGGING_LABEL_63_2 36
#define OBJECT_63_2 35
#define OBJECT_63_1 34
#define OBJECT_63_0 33
#define EXECUTE_CACHE_63_22 21
#define EXECUTE_CACHE_63_21 23
#define EXECUTE_CACHE_63_15 25
#define EXECUTE_CACHE_63_12 27
#define EXECUTE_CACHE_63_9 29
#define EXECUTE_CACHE_63_7 31
#define FREE_REFERENCES_LABEL_63_0 20
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_63_4);
      goto lset_diff_intersectionB_10;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_63_6);
      goto lambda_0;

    case 3:
      current_block = (Rpc - LABEL_63_10);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_63_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_63_16);
      goto lambda_17;

    case 6:
      current_block = (Rpc - LABEL_63_13);
      goto lambda_16;

    case 7:
      current_block = (Rpc - LABEL_63_18);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_63_19);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lset_diff_intersectionB_13)
DEFLABEL (lset_diff_intersectionB_10)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_10])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_63_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_16])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_13])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  (Wrd21.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Rsp [1]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_15]));

DEFLABEL (lambda_15)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_63_6);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_12]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_63_10);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63_1]);
  (Rsp [2]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_63_16);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63_1]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_63_13);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_19])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd18.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_63_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_21;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_63_2]);

DEFLABEL (label_21)
DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_63_19);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_22]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_7 7
#define LABEL_64_6 9
#define LABEL_64_10 11
#define LABEL_64_11 13
#define LABEL_64_12 15
#define ENVIRONMENT_LABEL_64_3 25
#define DEBUGGING_LABEL_64_2 24
#define OBJECT_64_2 23
#define OBJECT_64_1 22
#define OBJECT_64_0 21
#define EXECUTE_CACHE_64_9 17
#define EXECUTE_CACHE_64_8 19
#define FREE_REFERENCES_LABEL_64_0 16
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_64_4);
      goto Z__cdrs_10;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto loop_8;

    case 2:
      current_block = (Rpc - LABEL_64_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_64_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_64_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_64_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_64_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__cdrs_17)
DEFLABEL (Z__cdrs_10)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_64_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_8;

DEFLABEL (loop_18)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_64_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_19;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_9]));

DEFLABEL (label_19)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  if (! ((Wrd6.uLng) == 1))
    goto label_28;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_64_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rvl = (current_block [OBJECT_64_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_25)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_24;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_23)
  (Wrd28.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Rsp [1]) = (Wrd25.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_22;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd29.Obj);
  goto loop_8;

DEFLABEL (label_22)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 1);

DEFLABEL (label_15)
  (Wrd29.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 1);

DEFLABEL (label_14)
  (Wrd18.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 1);

DEFLABEL (label_13)
  (Wrd9.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_7 7
#define LABEL_65_6 9
#define LABEL_65_8 11
#define LABEL_65_9 13
#define ENVIRONMENT_LABEL_65_3 18
#define DEBUGGING_LABEL_65_2 17
#define OBJECT_65_2 16
#define OBJECT_65_1 15
#define OBJECT_65_0 14
#define FREE_REFERENCES_LABEL_65_0 14
#define NUMBER_OF_LINKER_SECTIONS_65_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_65_4);
      goto Z__cars__8;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto recur_6;

    case 2:
      current_block = (Rpc - LABEL_65_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_65_6);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_65_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_65_9);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__cars__14)
DEFLABEL (Z__cars__8)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto recur_6;

DEFLABEL (recur_15)
DEFLABEL (recur_6)
  DLINK_INTERRUPT_CHECK (25, LABEL_65_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_16;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (Wrd13.Obj) = (current_block [OBJECT_65_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_16)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_22;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_21)
  Rdl = (& (Rsp [2]));
  goto recur_6;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_65_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_20;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_19)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_18;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_17)
  (Wrd31.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_18)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_2]), 1);

DEFLABEL (label_12)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_2]), 1);

DEFLABEL (label_11)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_0]), 1);

DEFLABEL (label_10)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_7 7
#define LABEL_66_9 9
#define LABEL_66_6 11
#define LABEL_66_12 13
#define LABEL_66_13 15
#define LABEL_66_14 17
#define LABEL_66_15 19
#define LABEL_66_16 21
#define LABEL_66_11 23
#define LABEL_66_17 25
#define LABEL_66_18 27
#define TAG_66_19 12
#define ENVIRONMENT_LABEL_66_3 37
#define DEBUGGING_LABEL_66_2 36
#define OBJECT_66_2 35
#define OBJECT_66_1 34
#define OBJECT_66_0 33
#define EXECUTE_CACHE_66_10 29
#define EXECUTE_CACHE_66_8 31
#define FREE_REFERENCES_LABEL_66_0 28
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_66_4);
      goto Z__cars_cdrs_19;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto loop_17;

    case 2:
      current_block = (Rpc - LABEL_66_7);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_66_6);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_66_12);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_66_13);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_66_14);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_66_15);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_66_16);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_66_11);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_66_17);
      goto lambda_15;

    case 12:
      current_block = (Rpc - LABEL_66_18);
      goto lambda_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__cars_cdrs_28)
DEFLABEL (Z__cars_cdrs_19)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd5.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  goto loop_17;

DEFLABEL (loop_29)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_66_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_66_9);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_66_11);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_66_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_66_18])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  if (! ((Wrd6.uLng) == 1))
    goto label_45;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_66_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_17]))));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_43;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_42)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_41;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_40)
  (Wrd29.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_39;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_38)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_37;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_36)
  (Wrd49.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_35;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd50.Obj);
  goto loop_17;

DEFLABEL (label_35)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_16]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 1);

DEFLABEL (label_26)
  (Wrd50.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_15]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 1);

DEFLABEL (label_25)
  (Wrd39.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_14]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 1);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 1);

DEFLABEL (label_23)
  (Wrd19.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 1);

DEFLABEL (label_22)
  (Wrd10.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (lambda_31)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_66_17);
  (Wrd5.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_66_18);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_7 7
#define LABEL_67_9 9
#define LABEL_67_6 11
#define LABEL_67_12 13
#define LABEL_67_13 15
#define LABEL_67_14 17
#define LABEL_67_15 19
#define LABEL_67_16 21
#define LABEL_67_11 23
#define LABEL_67_17 25
#define LABEL_67_18 27
#define TAG_67_19 12
#define ENVIRONMENT_LABEL_67_3 37
#define DEBUGGING_LABEL_67_2 36
#define OBJECT_67_2 35
#define OBJECT_67_1 34
#define OBJECT_67_0 33
#define EXECUTE_CACHE_67_10 29
#define EXECUTE_CACHE_67_8 31
#define FREE_REFERENCES_LABEL_67_0 28
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_67_4);
      goto Z__cars_cdrs__20;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto loop_18;

    case 2:
      current_block = (Rpc - LABEL_67_7);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_67_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_67_6);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_67_12);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_67_13);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_67_14);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_67_15);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_67_16);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_67_11);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_67_17);
      goto lambda_16;

    case 12:
      current_block = (Rpc - LABEL_67_18);
      goto lambda_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__cars_cdrs__29)
DEFLABEL (Z__cars_cdrs__20)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (current_block [OBJECT_67_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  goto loop_18;

DEFLABEL (loop_30)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_67_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_33;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_67_9);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_67_11);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_18])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  if (! ((Wrd6.uLng) == 1))
    goto label_46;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_67_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_17]))));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_44;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_43)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_42;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_41)
  (Wrd29.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_40;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_39)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_38;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_37)
  (Wrd49.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_36;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [0]) = (Wrd50.Obj);
  goto loop_18;

DEFLABEL (label_36)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_16]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 1);

DEFLABEL (label_27)
  (Wrd50.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_15]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 1);

DEFLABEL (label_26)
  (Wrd39.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_14]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 1);

DEFLABEL (label_25)
  (Wrd30.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 1);

DEFLABEL (label_24)
  (Wrd19.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 1);

DEFLABEL (label_23)
  (Wrd10.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (lambda_32)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_67_17);
  (Wrd5.Obj) = (current_block [OBJECT_67_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_67_18);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_6 7
#define LABEL_68_7 9
#define LABEL_68_8 11
#define LABEL_68_9 13
#define LABEL_68_10 15
#define LABEL_68_11 17
#define LABEL_68_13 19
#define LABEL_68_14 21
#define TAG_68_15 9
#define ENVIRONMENT_LABEL_68_3 29
#define DEBUGGING_LABEL_68_2 28
#define OBJECT_68_2 27
#define OBJECT_68_1 26
#define OBJECT_68_0 25
#define EXECUTE_CACHE_68_12 23
#define FREE_REFERENCES_LABEL_68_0 22
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
srfi_1_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_68_4);
      goto Z__cars_cdrs_no_test_15;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto loop_13;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_68_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_68_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_68_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_68_10);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_68_11);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_68_13);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_68_14);
      goto lambda_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__cars_cdrs_no_test_23)
DEFLABEL (Z__cars_cdrs_no_test_15)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd5.Obj) = (current_block [OBJECT_68_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  goto loop_13;

DEFLABEL (loop_24)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_68_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_26;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_68_11);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_68_13);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_68_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_68_14])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  if (! ((Wrd6.uLng) == 1))
    goto label_36;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_35)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_34;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_33)
  (Wrd30.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_32;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_31)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_30;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd40.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_29)
  (Wrd50.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Rsp [2]) = (Wrd47.Obj);
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_28;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd51.Obj);
  goto loop_13;

DEFLABEL (label_28)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_10]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_2]), 1);

DEFLABEL (label_21)
  (Wrd51.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_9]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_2]), 1);

DEFLABEL (label_20)
  (Wrd40.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 1);

DEFLABEL (label_19)
  (Wrd31.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 1);

DEFLABEL (label_18)
  (Wrd20.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 1);

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_35;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_68_14);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
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
srfi_1_so_492532a58065bafd (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	1,
	1,
	1,
	1,
	1,
	2,
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
	1,
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
	1,
	1,
	1,
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
	2,
	1,
	1,
	2,
	2,
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 68)
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

static const struct liarc_code_S arr_decl_srfi_1_so_492532a58065bafd [68] =
  {
    { "srfi_1_so_code_1", 6, srfi_1_so_code_1 },
    { "srfi_1_so_code_2", 2, srfi_1_so_code_2 },
    { "srfi_1_so_code_3", 3, srfi_1_so_code_3 },
    { "srfi_1_so_code_4", 4, srfi_1_so_code_4 },
    { "srfi_1_so_code_5", 6, srfi_1_so_code_5 },
    { "srfi_1_so_code_6", 8, srfi_1_so_code_6 },
    { "srfi_1_so_code_7", 8, srfi_1_so_code_7 },
    { "srfi_1_so_code_8", 9, srfi_1_so_code_8 },
    { "srfi_1_so_code_9", 7, srfi_1_so_code_9 },
    { "srfi_1_so_code_10", 5, srfi_1_so_code_10 },
    { "srfi_1_so_code_11", 5, srfi_1_so_code_11 },
    { "srfi_1_so_code_12", 5, srfi_1_so_code_12 },
    { "srfi_1_so_code_13", 2, srfi_1_so_code_13 },
    { "srfi_1_so_code_14", 2, srfi_1_so_code_14 },
    { "srfi_1_so_code_15", 8, srfi_1_so_code_15 },
    { "srfi_1_so_code_16", 3, srfi_1_so_code_16 },
    { "srfi_1_so_code_17", 2, srfi_1_so_code_17 },
    { "srfi_1_so_code_18", 12, srfi_1_so_code_18 },
    { "srfi_1_so_code_19", 15, srfi_1_so_code_19 },
    { "srfi_1_so_code_20", 19, srfi_1_so_code_20 },
    { "srfi_1_so_code_21", 24, srfi_1_so_code_21 },
    { "srfi_1_so_code_22", 6, srfi_1_so_code_22 },
    { "srfi_1_so_code_23", 5, srfi_1_so_code_23 },
    { "srfi_1_so_code_24", 9, srfi_1_so_code_24 },
    { "srfi_1_so_code_25", 9, srfi_1_so_code_25 },
    { "srfi_1_so_code_26", 8, srfi_1_so_code_26 },
    { "srfi_1_so_code_27", 13, srfi_1_so_code_27 },
    { "srfi_1_so_code_28", 12, srfi_1_so_code_28 },
    { "srfi_1_so_code_29", 12, srfi_1_so_code_29 },
    { "srfi_1_so_code_30", 7, srfi_1_so_code_30 },
    { "srfi_1_so_code_31", 20, srfi_1_so_code_31 },
    { "srfi_1_so_code_32", 11, srfi_1_so_code_32 },
    { "srfi_1_so_code_33", 37, srfi_1_so_code_33 },
    { "srfi_1_so_code_34", 3, srfi_1_so_code_34 },
    { "srfi_1_so_code_35", 3, srfi_1_so_code_35 },
    { "srfi_1_so_code_36", 8, srfi_1_so_code_36 },
    { "srfi_1_so_code_37", 8, srfi_1_so_code_37 },
    { "srfi_1_so_code_38", 2, srfi_1_so_code_38 },
    { "srfi_1_so_code_39", 6, srfi_1_so_code_39 },
    { "srfi_1_so_code_40", 7, srfi_1_so_code_40 },
    { "srfi_1_so_code_41", 6, srfi_1_so_code_41 },
    { "srfi_1_so_code_42", 10, srfi_1_so_code_42 },
    { "srfi_1_so_code_43", 11, srfi_1_so_code_43 },
    { "srfi_1_so_code_44", 13, srfi_1_so_code_44 },
    { "srfi_1_so_code_45", 3, srfi_1_so_code_45 },
    { "srfi_1_so_code_46", 3, srfi_1_so_code_46 },
    { "srfi_1_so_code_47", 15, srfi_1_so_code_47 },
    { "srfi_1_so_code_48", 15, srfi_1_so_code_48 },
    { "srfi_1_so_code_49", 10, srfi_1_so_code_49 },
    { "srfi_1_so_code_50", 2, srfi_1_so_code_50 },
    { "srfi_1_so_code_51", 7, srfi_1_so_code_51 },
    { "srfi_1_so_code_52", 8, srfi_1_so_code_52 },
    { "srfi_1_so_code_53", 3, srfi_1_so_code_53 },
    { "srfi_1_so_code_54", 5, srfi_1_so_code_54 },
    { "srfi_1_so_code_55", 7, srfi_1_so_code_55 },
    { "srfi_1_so_code_56", 7, srfi_1_so_code_56 },
    { "srfi_1_so_code_57", 7, srfi_1_so_code_57 },
    { "srfi_1_so_code_58", 7, srfi_1_so_code_58 },
    { "srfi_1_so_code_59", 7, srfi_1_so_code_59 },
    { "srfi_1_so_code_60", 6, srfi_1_so_code_60 },
    { "srfi_1_so_code_61", 8, srfi_1_so_code_61 },
    { "srfi_1_so_code_62", 9, srfi_1_so_code_62 },
    { "srfi_1_so_code_63", 9, srfi_1_so_code_63 },
    { "srfi_1_so_code_64", 7, srfi_1_so_code_64 },
    { "srfi_1_so_code_65", 6, srfi_1_so_code_65 },
    { "srfi_1_so_code_66", 13, srfi_1_so_code_66 },
    { "srfi_1_so_code_67", 13, srfi_1_so_code_67 },
    { "srfi_1_so_code_68", 10, srfi_1_so_code_68 }
  };

int
decl_srfi_1_so_492532a58065bafd (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_srfi_1_so_492532a58065bafd);
  return (0);
}

DECLARE_COMPILED_CODE ("srfi-1.so", 3, decl_srfi_1_so_492532a58065bafd, srfi_1_so_492532a58065bafd)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_srfi_1_so_data_492532a58065bafd [7683] =
  "\x79\x77\xd4\x13\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\x08\xc1"
  "\xba\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x82\x88\x0d\xbe\x28\xb4\x28"
  "\x0d\xbf\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xb2"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xc2\x1c"
  "\x08\x0d\x1c\x28\xb4\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb2\x0d\x1c\x28\xb4\x28\xb7\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\xb1\x08\xb2\x0d\x1c\x28\xb4\x28\xb7\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xb2\x0d\x1c\x28\xb4\x28\xb7\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x08\xb2\x0d\x1c\x28\xb4\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb2\x08\x0d\x1c\x28"
  "\xb4\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88\xb2\x80\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb1"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb2\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xc2\x1c\xb1\x08\x0d\x1c\x80"
  "\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x0d\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb2\xb1\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb1\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb1\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb1\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1d\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x1d\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xb2\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xb2"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\xb2\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb2\x1b\xc2\x1d\x0d\x1c\xb1\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x08\x1b\xb2\x0d\x1c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb2\x08\x1b\xb1\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb2\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb2\xb1\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\xb2\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\xb2\xb1\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb2\xb1\x0d\x1c\x1d\x0d\x1c\x24\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb1\x0d\x1c\x1d"
  "\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb2\xb1\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x08\xb1\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x08\xb1\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x08\xb1\xb2\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x08\xb1\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x08\xb1\xb2\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1d\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\xb1\xb2\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x07\xb2\xb1\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\xb2\xb1\x0d\x1c\x80\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb1\x07\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb1\x07\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\xb1\x08\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x0d\x1c\x24\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x08\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x0d\x1c\x24\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x1b\x24\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\xb1\x08\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb2\xb1\x08\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x08\xb2\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb1\x08\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb2\xb1\x08\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb1\x08\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xba\x88\xb2\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\xb4\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\xb5\x2a\x17\x1b\x0d\x1b\x0d\x1b\x1b\x1b\x0d\x0d"
  "\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x0d\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x0d\x0d\x1b"
  "\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\xb7\xb6\xb3\x17\x28\x0d\x26\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65"
  "\x2f\x2e\x2f\x73\x72\x66\x69\x2d\x31\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x04\x63\x61\x72\x04\x63\x64\x72\x05\x74\x61\x6b\x65"
  "\x04\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x69\x6e\x64\x65"
  "\x78\x2d\x66\x69\x78\x6e\x75\x6d\x02\x09\x0e\x81\x87\x02\x08\x0c"
  "\x81\x85\x02\x07\x0a\x81\x89\x02\x06\x08\x81\x85\x02\x05\x06\x81"
  "\x85\x02\x04\x04\x84\x06\x0d\x17\x02\x05\x64\x72\x6f\x70\x04\x04"
  "\x06\x25\x64\x72\x6f\x70\x03\x0b\x06\x81\x85\x02\x0a\x04\x84\x06"
  "\x05\x0e\x09\x02\x0e\x08\x81\x85\x02\x0d\x06\x81\x85\x02\x0c\x04"
  "\x84\x06\x07\x0b\x0a\x02\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x0b"
  "\x06\x74\x61\x6b\x65\x21\x0c\x04\x04\x03\x12\x0a\x81\x85\x02\x11"
  "\x08\x81\x85\x02\x10\x06\x81\x85\x02\x0f\x04\x84\x06\x09\x14\x0d"
  "\x02\x0b\x74\x61\x6b\x65\x2d\x72\x69\x67\x68\x74\x0e\x04\x04\x03"
  "\x18\x0e\x81\x85\x02\x17\x0c\x81\x85\x02\x16\x0a\x81\x85\x02\x15"
  "\x08\x81\x85\x02\x14\x06\x81\x85\x02\x13\x04\x84\x06\x0d\x17\x0f"
  "\x02\x0b\x64\x72\x6f\x70\x2d\x72\x69\x67\x68\x74\x10\x04\x04\x03"
  "\x20\x12\x81\x87\x02\x1f\x10\x81\x85\x02\x1e\x0e\x81\x89\x02\x1d"
  "\x0c\x81\x87\x02\x1c\x0a\x81\x85\x02\x1b\x08\x81\x85\x02\x1a\x06"
  "\x81\x85\x02\x19\x04\x84\x06\x11\x1d\x11\x02\x08\x0b\x0c\x64\x72"
  "\x6f\x70\x2d\x72\x69\x67\x68\x74\x21\x12\x04\x04\x03\x28\x12\x81"
  "\x89\x02\x27\x10\x81\x89\x02\x26\x0e\x81\x89\x02\x25\x0c\x81\x89"
  "\x02\x24\x0a\x81\x89\x02\x23\x08\x81\x85\x02\x22\x06\x81\x85\x02"
  "\x21\x04\x84\x06\x11\x1d\x13\x02\x09\x09\x73\x70\x6c\x69\x74\x2d"
  "\x61\x74\x14\x04\x02\x31\x14\x81\x85\x02\x30\x12\x81\x87\x02\x2f"
  "\x10\x81\x87\x02\x2e\x0e\x81\x87\x02\x2d\x0c\x81\x85\x02\x2c\x0a"
  "\x81\x8b\x02\x2b\x08\x81\x85\x02\x2a\x06\x81\x85\x02\x29\x04\x84"
  "\x06\x13\x1d\x15\x02\x0a\x0b\x0a\x73\x70\x6c\x69\x74\x2d\x61\x74"
  "\x21\x16\x04\x04\x03\x38\x10\x81\x85\x02\x37\x0e\x81\x89\x02\x36"
  "\x0c\x81\x87\x02\x35\x0a\x81\x85\x02\x34\x08\x81\x85\x02\x33\x06"
  "\x81\x85\x02\x32\x04\x84\x06\x0f\x1b\x02\x0b\x3d\x0c\x81\x8b\x02"
  "\x3c\x0a\x81\x8b\x02\x3b\x08\x81\x89\x02\x3a\x06\x81\x87\x02\x39"
  "\x04\x83\x04\x0b\x10\x17\x02\x0c\x0f\x61\x70\x70\x65\x6e\x64\x2d"
  "\x72\x65\x76\x65\x72\x73\x65\x18\x04\x0b\x6e\x75\x6c\x6c\x2d\x6c"
  "\x69\x73\x74\x3f\x19\x02\x42\x0c\x81\x85\x02\x41\x0a\x81\x85\x02"
  "\x40\x08\x81\x85\x02\x3f\x06\x81\x85\x02\x3e\x04\x84\x06\x0b\x14"
  "\x1a\x02\x0d\x0b\x10\x61\x70\x70\x65\x6e\x64\x2d\x72\x65\x76\x65"
  "\x72\x73\x65\x21\x1b\x04\x19\x02\x47\x0c\x81\x87\x02\x46\x0a\x81"
  "\x85\x02\x45\x08\x81\x85\x02\x44\x06\x81\x85\x02\x43\x04\x84\x06"
  "\x0b\x14\x1c\x02\x0e\x07\x61\x70\x70\x65\x6e\x64\x1d\x02\x05\x0d"
  "\x72\x65\x64\x75\x63\x65\x2d\x72\x69\x67\x68\x74\x1e\x02\x49\x06"
  "\x81\x85\x02\x48\x04\x83\x04\x05\x0e\x1f\x02\x0f\x08\x61\x70\x70"
  "\x65\x6e\x64\x21\x20\x02\x05\x1e\x02\x4b\x06\x81\x85\x02\x4a\x04"
  "\x83\x04\x05\x0e\x1e\x02\x10\x06\x61\x70\x70\x6c\x79\x21\x06\x63"
  "\x6f\x75\x6e\x74\x22\x04\x15\x63\x6f\x75\x6e\x74\x2d\x6d\x61\x74"
  "\x63\x68\x69\x6e\x67\x2d\x69\x74\x65\x6d\x73\x04\x19\x03\x0b\x25"
  "\x63\x61\x72\x73\x2b\x63\x64\x72\x73\x23\x04\x53\x12\x81\x8b\x02"
  "\x52\x10\x81\x89\x02\x51\x0e\x81\x8b\x02\x50\x0c\x81\x87\x02\x4f"
  "\x0a\x81\x89\x02\x4e\x08\x81\x89\x02\x4d\x06\x81\x89\x02\x4c\x04"
  "\xfd\x07\x11\x21\x24\x02\x11\x21\x05\x6c\x69\x73\x74\x04\x6d\x61"
  "\x70\x25\x03\x56\x08\x81\x85\x02\x55\x06\x81\x85\x02\x54\x04\xfe"
  "\x05\x07\x0e\x26\x02\x12\x04\x63\x61\x72\x02\x04\x25\x02\x58\x06"
  "\x81\x83\x02\x57\x04\x83\x04\x05\x0d\x25\x02\x13\x07\x75\x6e\x7a"
  "\x69\x70\x32\x27\x04\x19\x02\x64\x1a\x81\x85\x02\x63\x18\xfd\xff"
  "\x03\x62\x16\x81\x87\x02\x61\x14\x81\x87\x02\x60\x12\x81\x87\x02"
  "\x5f\x10\x81\x87\x02\x5e\x0e\x81\x85\x02\x5d\x0c\xfd\xff\x03\x5c"
  "\x0a\x81\x83\x02\x5b\x08\x81\x83\x02\x5a\x06\x81\x83\x02\x59\x04"
  "\x83\x04\x19\x22\x28\x02\x14\x07\x75\x6e\x7a\x69\x70\x33\x29\x04"
  "\x19\x02\x73\x20\x81\x85\x02\x72\x1e\xfd\xff\x03\x71\x1c\x81\x89"
  "\x02\x70\x1a\x81\x89\x02\x6f\x18\x81\x89\x02\x6e\x16\x81\x89\x02"
  "\x6d\x14\x81\x89\x02\x6c\x12\x81\x89\x02\x6b\x10\x81\x89\x02\x6a"
  "\x0e\x81\x85\x02\x69\x0c\xfd\xff\x03\x68\x0a\x81\x83\x02\x67\x08"
  "\x81\x83\x02\x66\x06\x81\x83\x02\x65\x04\x83\x04\x1f\x28\x2a\x02"
  "\x15\x07\x75\x6e\x7a\x69\x70\x34\x2b\x04\x19\x02\x86\x01\x28\x81"
  "\x85\x02\x85\x01\x26\xfd\xff\x03\x84\x01\x24\x81\x8b\x02\x83\x01"
  "\x22\x81\x8b\x02\x82\x01\x20\x81\x8b\x02\x81\x01\x1e\x81\x8b\x02"
  "\x80\x01\x1c\x81\x8b\x02\x7f\x1a\x81\x8b\x02\x7e\x18\x81\x8b\x02"
  "\x7d\x16\x81\x8b\x02\x7c\x14\x81\x8b\x02\x7b\x12\x81\x8b\x02\x7a"
  "\x10\x81\x8b\x02\x79\x0e\x81\x85\x02\x78\x0c\xfd\xff\x03\x77\x0a"
  "\x81\x83\x02\x76\x08\x81\x83\x02\x75\x06\x81\x83\x02\x74\x04\x83"
  "\x04\x27\x30\x2c\x02\x16\x07\x75\x6e\x7a\x69\x70\x35\x2d\x04\x19"
  "\x02\x9e\x01\x32\x81\x85\x02\x9d\x01\x30\xfd\xff\x03\x9c\x01\x2e"
  "\x81\x8d\x02\x9b\x01\x2c\x81\x8d\x02\x9a\x01\x2a\x81\x8d\x02\x99"
  "\x01\x28\x81\x8d\x02\x98\x01\x26\x81\x8d\x02\x97\x01\x24\x81\x8d"
  "\x02\x96\x01\x22\x81\x8d\x02\x95\x01\x20\x81\x8d\x02\x94\x01\x1e"
  "\x81\x8d\x02\x93\x01\x1c\x81\x8d\x02\x92\x01\x1a\x81\x8d\x02\x91"
  "\x01\x18\x81\x8d\x02\x90\x01\x16\x81\x8d\x02\x8f\x01\x14\x81\x8d"
  "\x02\x8e\x01\x12\x81\x8d\x02\x8d\x01\x10\x81\x8d\x02\x8c\x01\x0e"
  "\x81\x85\x02\x8b\x01\x0c\xfd\xff\x03\x8a\x01\x0a\x81\x83\x02\x89"
  "\x01\x08\x81\x83\x02\x88\x01\x06\x81\x83\x02\x87\x01\x04\x83\x04"
  "\x31\x3a\x2e\x02\x17\x08\xa4\x01\x0e\xfd\xff\x03\xa3\x01\x0c\xfd"
  "\xff\x03\xa2\x01\x0a\xfd\xff\x03\xa1\x01\x08\xfd\xff\x03\xa0\x01"
  "\x06\xff\xff\x03\x9f\x01\x04\x87\x0a\x0d\x12\x2f\x02\x18\x08\xa9"
  "\x01\x0c\x81\x8f\x02\xa8\x01\x0a\x81\x8f\x02\xa7\x01\x08\x81\x8f"
  "\x02\xa6\x01\x06\x81\x8f\x02\xa5\x01\x04\x87\x0a\x0b\x10\x30\x02"
  "\x19\x21\x0a\x70\x61\x69\x72\x2d\x66\x6f\x6c\x64\x31\x04\x19\x03"
  "\x06\x25\x63\x64\x72\x73\x32\x04\x20\x04\xb2\x01\x14\x81\x91\x02"
  "\xb1\x01\x12\x81\x8f\x02\xb0\x01\x10\x81\x8f\x02\xaf\x01\x0e\x81"
  "\x8d\x02\xae\x01\x0c\x81\x8d\x02\xad\x01\x0a\x81\x8d\x02\xac\x01"
  "\x08\x81\x8d\x02\xab\x01\x06\x81\x8d\x02\xaa\x01\x04\xfc\x09\x13"
  "\x21\x33\x02\x1a\x21\x10\x70\x61\x69\x72\x2d\x66\x6f\x6c\x64\x2d"
  "\x72\x69\x67\x68\x74\x34\x04\x19\x03\x32\x04\x20\x04\xbb\x01\x14"
  "\xfd\xff\x03\xba\x01\x12\xfd\xff\x03\xb9\x01\x10\xfd\xff\x03\xb8"
  "\x01\x0e\xfd\xff\x03\xb7\x01\x0c\xfd\xff\x03\xb6\x01\x0a\xfd\xff"
  "\x03\xb5\x01\x08\xff\xff\x03\xb4\x01\x06\xff\xff\x03\xb3\x01\x04"
  "\xfc\x09\x13\x21\x35\x02\x1b\x21\x02\x0e\x70\x61\x69\x72\x2d\x66"
  "\x6f\x72\x2d\x65\x61\x63\x68\x36\x04\x19\x03\x32\x03\xc3\x01\x12"
  "\x81\x8b\x02\xc2\x01\x10\x81\x8b\x02\xc1\x01\x0e\x81\x89\x02\xc0"
  "\x01\x0c\x81\x89\x02\xbf\x01\x0a\x81\x89\x02\xbe\x01\x08\x81\x89"
  "\x02\xbd\x01\x06\x81\x89\x02\xbc\x01\x04\xfd\x07\x11\x1d\x37\x02"
  "\x1c\x21\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x02\x05\x6d\x61\x70"
  "\x21\x38\x04\x36\x04\x19\x03\x13\x25\x63\x61\x72\x73\x2b\x63\x64"
  "\x72\x73\x2f\x6e\x6f\x2d\x74\x65\x73\x74\x39\x04\xd0\x01\x1c\x81"
  "\x87\x02\xcf\x01\x1a\x81\x87\x02\xce\x01\x18\x81\x87\x02\xcd\x01"
  "\x16\x81\x89\x02\xcc\x01\x14\x81\x89\x02\xcb\x01\x12\x81\x87\x02"
  "\xca\x01\x10\x81\x87\x02\xc9\x01\x0e\x81\x85\x02\xc8\x01\x0c\x81"
  "\x87\x02\xc7\x01\x0a\x81\x87\x02\xc6\x01\x08\x81\x85\x02\xc5\x01"
  "\x06\x81\x87\x02\xc4\x01\x04\xfd\x07\x1b\x2b\x3a\x02\x1d\x21\x0b"
  "\x66\x69\x6c\x74\x65\x72\x2d\x6d\x61\x70\x3b\x04\x19\x03\x23\x03"
  "\xdc\x01\x1a\x81\x89\x02\xdb\x01\x18\xfd\xff\x03\xda\x01\x16\x81"
  "\x87\x02\xd9\x01\x14\xfd\xff\x03\xd8\x01\x12\xfd\xff\x03\xd7\x01"
  "\x10\x81\x87\x02\xd6\x01\x0e\x81\x87\x02\xd5\x01\x0c\xfd\xff\x03"
  "\xd4\x01\x0a\xfd\xff\x03\xd3\x01\x08\x81\x85\x02\xd2\x01\x06\xff"
  "\xff\x03\xd1\x01\x04\xfd\x07\x19\x26\x3c\x02\x1e\x21\x0d\x6d\x61"
  "\x70\x2d\x69\x6e\x2d\x6f\x72\x64\x65\x72\x3d\x04\x19\x03\x23\x03"
  "\xe8\x01\x1a\x81\x89\x02\xe7\x01\x18\xfd\xff\x03\xe6\x01\x16\x81"
  "\x87\x02\xe5\x01\x14\xfd\xff\x03\xe4\x01\x12\xfd\xff\x03\xe3\x01"
  "\x10\x81\x87\x02\xe2\x01\x0e\x81\x87\x02\xe1\x01\x0c\xfd\xff\x03"
  "\xe0\x01\x0a\xfd\xff\x03\xdf\x01\x08\x81\x85\x02\xde\x01\x06\xff"
  "\xff\x03\xdd\x01\x04\xfd\x07\x19\x26\x3e\x02\x1f\x07\x66\x69\x6c"
  "\x74\x65\x72\x3f\x04\x19\x02\xef\x01\x10\xfd\xff\x03\xee\x01\x0e"
  "\xfd\xff\x03\xed\x01\x0c\xfd\xff\x03\xec\x01\x0a\xfd\xff\x03\xeb"
  "\x01\x08\xfd\xff\x03\xea\x01\x06\xff\xff\x03\xe9\x01\x04\x84\x06"
  "\x0f\x18\x40\x02\x20\x0b\x08\x66\x69\x6c\x74\x65\x72\x21\x41\x04"
  "\x19\x02\x83\x02\x2a\x81\x89\x02\x82\x02\x28\x81\x89\x02\x81\x02"
  "\x26\x81\x89\x02\x80\x02\x24\x81\x89\x02\xff\x01\x22\x81\x87\x02"
  "\xfe\x01\x20\x81\x87\x02\xfd\x01\x1e\x81\x87\x02\xfc\x01\x1c\x81"
  "\x89\x02\xfb\x01\x1a\x81\x87\x02\xfa\x01\x18\x81\x8b\x02\xf9\x01"
  "\x16\x81\x8b\x02\xf8\x01\x14\x81\x89\x02\xf7\x01\x12\x81\x87\x02"
  "\xf6\x01\x10\x81\x8d\x02\xf5\x01\x0e\x81\x87\x02\xf4\x01\x0c\x81"
  "\x87\x02\xf3\x01\x0a\x81\x89\x02\xf2\x01\x08\x81\x87\x02\xf1\x01"
  "\x06\x81\x87\x02\xf0\x01\x04\x84\x06\x29\x33\x42\x02\x21\x0a\x70"
  "\x61\x72\x74\x69\x74\x69\x6f\x6e\x43\x04\x19\x02\x8e\x02\x18\x81"
  "\x85\x02\x8d\x02\x16\x81\x85\x02\x8c\x02\x14\x81\x87\x02\x8b\x02"
  "\x12\xfd\xff\x03\x8a\x02\x10\x81\x87\x02\x89\x02\x0e\x81\x85\x02"
  "\x88\x02\x0c\xfd\xff\x03\x87\x02\x0a\xfd\xff\x03\x86\x02\x08\xfd"
  "\xff\x03\x85\x02\x06\xff\xff\x03\x84\x02\x04\x84\x06\x17\x20\x44"
  "\x02\x22\x0b\x02\x0b\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x21\x45"
  "\x04\x19\x02\xb3\x02\x4c\x81\x85\x02\xb2\x02\x4a\x81\x85\x02\xb1"
  "\x02\x48\x81\x8d\x02\xb0\x02\x46\x81\x8d\x02\xaf\x02\x44\x81\x8f"
  "\x02\xae\x02\x42\x81\x8d\x02\xad\x02\x40\x81\x8d\x02\xac\x02\x3e"
  "\x81\x85\x02\xab\x02\x3c\x81\x8d\x02\xaa\x02\x3a\x81\x8f\x02\xa9"
  "\x02\x38\x81\x8d\x02\xa8\x02\x36\x81\x85\x02\xa7\x02\x34\x81\x8d"
  "\x02\xa6\x02\x32\x81\x8d\x02\xa5\x02\x30\x81\x8d\x02\xa4\x02\x2e"
  "\x81\x8d\x02\xa3\x02\x2c\x81\x8d\x02\xa2\x02\x2a\x81\x8d\x02\xa1"
  "\x02\x28\x81\x8d\x02\xa0\x02\x26\x81\x8d\x02\x9f\x02\x24\x81\x8f"
  "\x02\x9e\x02\x22\x81\x8d\x02\x9d\x02\x20\x81\x8f\x02\x9c\x02\x1e"
  "\x81\x8d\x02\x9b\x02\x1c\x81\x8f\x02\x9a\x02\x1a\x81\x8d\x02\x99"
  "\x02\x18\x81\x8f\x02\x98\x02\x16\x81\x8d\x02\x97\x02\x14\x81\x89"
  "\x02\x96\x02\x12\x81\x89\x02\x95\x02\x10\x81\x89\x02\x94\x02\x0e"
  "\x81\x89\x02\x93\x02\x0c\x81\x89\x02\x92\x02\x0a\x81\x85\x02\x91"
  "\x02\x08\x81\x8b\x02\x90\x02\x06\x81\x85\x02\x8f\x02\x04\x84\x06"
  "\x4b\x56\x46\x02\x23\x04\x3f\x02\xb6\x02\x08\x81\x85\x02\xb5\x02"
  "\x06\x81\x85\x02\xb4\x02\x04\x84\x06\x07\x0e\x47\x02\x24\x04\x41"
  "\x02\xb9\x02\x08\x81\x85\x02\xb8\x02\x06\x81\x85\x02\xb7\x02\x04"
  "\x84\x06\x07\x0e\x48\x02\x25\x12\x64\x65\x6c\x65\x74\x65\x2d\x64"
  "\x75\x70\x6c\x69\x63\x61\x74\x65\x73\x49\x08\x07\x65\x71\x75\x61"
  "\x6c\x3f\x4a\x02\x04\x19\x05\x07\x64\x65\x6c\x65\x74\x65\x4b\x03"
  "\xc1\x02\x12\xfd\xff\x03\xc0\x02\x10\xfd\xff\x03\xbf\x02\x0e\xfd"
  "\xff\x03\xbe\x02\x0c\xfd\xff\x03\xbd\x02\x0a\xfd\xff\x03\xbc\x02"
  "\x08\xff\xff\x03\xbb\x02\x06\x81\x85\x02\xba\x02\x04\x84\x04\x11"
  "\x1f\x4c\x02\x26\x13\x64\x65\x6c\x65\x74\x65\x2d\x64\x75\x70\x6c"
  "\x69\x63\x61\x74\x65\x73\x21\x4d\x08\x4a\x02\x04\x19\x05\x08\x64"
  "\x65\x6c\x65\x74\x65\x21\x03\xc9\x02\x12\xfd\xff\x03\xc8\x02\x10"
  "\xfd\xff\x03\xc7\x02\x0e\xfd\xff\x03\xc6\x02\x0c\xfd\xff\x03\xc5"
  "\x02\x0a\xfd\xff\x03\xc4\x02\x08\xff\xff\x03\xc3\x02\x06\x81\x85"
  "\x02\xc2\x02\x04\x84\x04\x11\x1f\x4a\x02\x27\x04\x0a\x66\x69\x6e"
  "\x64\x2d\x74\x61\x69\x6c\x4e\x02\xcb\x02\x06\x81\x85\x02\xca\x02"
  "\x04\x84\x06\x05\x0c\x4f\x02\x28\x4e\x04\x19\x02\xd1\x02\x0e\x81"
  "\x87\x02\xd0\x02\x0c\x81\x87\x02\xcf\x02\x0a\x81\x89\x02\xce\x02"
  "\x08\x81\x87\x02\xcd\x02\x06\x81\x87\x02\xcc\x02\x04\x84\x06\x0d"
  "\x16\x50\x02\x29\x0b\x74\x61\x6b\x65\x2d\x77\x68\x69\x6c\x65\x51"
  "\x04\x19\x02\xd8\x02\x10\xfd\xff\x03\xd7\x02\x0e\xfd\xff\x03\xd6"
  "\x02\x0c\xfd\xff\x03\xd5\x02\x0a\xfd\xff\x03\xd4\x02\x08\xfd\xff"
  "\x03\xd3\x02\x06\xff\xff\x03\xd2\x02\x04\x84\x06\x0f\x19\x52\x02"
  "\x2a\x0b\x64\x72\x6f\x70\x2d\x77\x68\x69\x6c\x65\x53\x04\x19\x02"
  "\xde\x02\x0e\x81\x87\x02\xdd\x02\x0c\x81\x87\x02\xdc\x02\x0a\x81"
  "\x89\x02\xdb\x02\x08\x81\x87\x02\xda\x02\x06\x81\x87\x02\xd9\x02"
  "\x04\x84\x06\x0d\x17\x54\x02\x2b\x0b\x0c\x74\x61\x6b\x65\x2d\x77"
  "\x68\x69\x6c\x65\x21\x55\x04\x19\x02\xe8\x02\x16\x81\x85\x02\xe7"
  "\x02\x14\x81\x85\x02\xe6\x02\x12\x81\x85\x02\xe5\x02\x10\x81\x87"
  "\x02\xe4\x02\x0e\x81\x87\x02\xe3\x02\x0c\x81\x87\x02\xe2\x02\x0a"
  "\x81\x85\x02\xe1\x02\x08\x81\x87\x02\xe0\x02\x06\x81\x85\x02\xdf"
  "\x02\x04\x84\x06\x15\x20\x56\x02\x2c\x05\x73\x70\x61\x6e\x57\x04"
  "\x19\x02\xf3\x02\x18\x81\x85\x02\xf2\x02\x16\x81\x85\x02\xf1\x02"
  "\x14\xfd\xff\x03\xf0\x02\x12\x81\x87\x02\xef\x02\x10\xfd\xff\x03"
  "\xee\x02\x0e\xfd\xff\x03\xed\x02\x0c\x83\x04\xec\x02\x0a\xfd\xff"
  "\x03\xeb\x02\x08\xfd\xff\x03\xea\x02\x06\xff\xff\x03\xe9\x02\x04"
  "\x84\x06\x17\x21\x58\x02\x2d\x0b\x06\x73\x70\x61\x6e\x21\x59\x04"
  "\x19\x02\x80\x03\x1c\x81\x85\x02\xff\x02\x1a\x81\x89\x02\xfe\x02"
  "\x18\x81\x89\x02\xfd\x02\x16\x81\x8b\x02\xfc\x02\x14\x81\x8b\x02"
  "\xfb\x02\x12\x81\x8b\x02\xfa\x02\x10\x81\x89\x02\xf9\x02\x0e\x81"
  "\x85\x02\xf8\x02\x0c\x81\x87\x02\xf7\x02\x0a\x81\x85\x02\xf6\x02"
  "\x08\x81\x85\x02\xf5\x02\x06\x81\x85\x02\xf4\x02\x04\x84\x06\x1b"
  "\x26\x5a\x02\x2e\x08\x03\x0b\x62\x72\x65\x61\x6b\x2d\x62\x6f\x74"
  "\x68\x04\x57\x03\x83\x03\x08\x81\x85\x02\x82\x03\x06\x81\x85\x02"
  "\x81\x03\x04\x84\x04\x07\x11\x5b\x02\x2f\x04\x59\x02\x86\x03\x08"
  "\x81\x85\x02\x85\x03\x06\x81\x85\x02\x84\x03\x04\x84\x06\x07\x0e"
  "\x5c\x02\x30\x21\x04\x61\x6e\x79\x5d\x03\x23\x04\x19\x03\x95\x03"
  "\x20\x81\x87\x02\x94\x03\x1e\x81\x89\x02\x93\x03\x1c\x81\x87\x02"
  "\x92\x03\x1a\x81\x8d\x02\x91\x03\x18\x81\x8d\x02\x90\x03\x16\x81"
  "\x8b\x02\x8f\x03\x14\x81\x87\x02\x8e\x03\x12\x81\x8b\x02\x8d\x03"
  "\x10\x81\x87\x02\x8c\x03\x0e\x81\x8b\x02\x8b\x03\x0c\x81\x87\x02"
  "\x8a\x03\x0a\x81\x89\x02\x89\x03\x08\x81\x87\x02\x88\x03\x06\x81"
  "\x87\x02\x87\x03\x04\xfd\x07\x1f\x2b\x5e\x02\x31\x21\x06\x65\x76"
  "\x65\x72\x79\x5f\x03\x23\x04\x19\x03\xa4\x03\x20\x81\x87\x02\xa3"
  "\x03\x1e\x81\x89\x02\xa2\x03\x1c\x81\x87\x02\xa1\x03\x1a\x81\x8b"
  "\x02\xa0\x03\x18\x81\x8b\x02\x9f\x03\x16\x81\x8b\x02\x9e\x03\x14"
  "\x81\x87\x02\x9d\x03\x12\x81\x8b\x02\x9c\x03\x10\x81\x87\x02\x9b"
  "\x03\x0e\x81\x8b\x02\x9a\x03\x0c\x81\x87\x02\x99\x03\x0a\x81\x8b"
  "\x02\x98\x03\x08\x81\x89\x02\x97\x03\x06\x81\x87\x02\x96\x03\x04"
  "\xfd\x07\x1f\x2c\x60\x02\x32\x21\x0b\x6c\x69\x73\x74\x2d\x69\x6e"
  "\x64\x65\x78\x21\x04\x19\x03\x23\x03\xae\x03\x16\x81\x87\x02\xad"
  "\x03\x14\x81\x87\x02\xac\x03\x12\x81\x8b\x02\xab\x03\x10\x81\x8b"
  "\x02\xaa\x03\x0e\x81\x87\x02\xa9\x03\x0c\x81\x8d\x02\xa8\x03\x0a"
  "\x81\x8b\x02\xa7\x03\x08\x81\x87\x02\xa6\x03\x06\x81\x8b\x02\xa5"
  "\x03\x04\xfd\x07\x15\x22\x61\x02\x33\x04\x5f\x05\x07\x6d\x65\x6d"
  "\x62\x65\x72\x62\x03\xb0\x03\x06\x81\x85\x02\xaf\x03\x04\x85\x08"
  "\x05\x0d\x63\x02\x34\x05\x09\x25\x6c\x73\x65\x74\x32\x3c\x3d\x64"
  "\x02\xb7\x03\x10\x81\x8d\x02\xb6\x03\x0e\x81\x8b\x02\xb5\x03\x0c"
  "\x81\x89\x02\xb4\x03\x0a\x81\x8d\x02\xb3\x03\x08\x81\x89\x02\xb2"
  "\x03\x06\x81\x87\x02\xb1\x03\x04\xfe\x05\x0f\x18\x65\x02\x35\x05"
  "\x64\x02\xbf\x03\x12\x81\x8d\x02\xbe\x03\x10\x81\x8b\x02\xbd\x03"
  "\x0e\x81\x89\x02\xbc\x03\x0c\x81\x8d\x02\xbb\x03\x0a\x81\x8d\x02"
  "\xba\x03\x08\x81\x89\x02\xb9\x03\x06\x81\x87\x02\xb8\x03\x04\xfe"
  "\x05\x11\x1a\x66\x02\x36\x05\x05\x66\x6f\x6c\x64\x67\x05\x62\x03"
  "\xc2\x03\x08\x81\x87\x02\xc1\x03\x06\x81\x87\x02\xc0\x03\x04\xfd"
  "\x07\x07\x0f\x68\x02\x37\x05\x07\x72\x65\x64\x75\x63\x65\x69\x05"
  "\x67\x04\x5d\x04\xc7\x03\x0c\x81\x85\x02\xc6\x03\x0a\x81\x87\x02"
  "\xc5\x03\x08\x81\x87\x02\xc4\x03\x06\x81\x87\x02\xc3\x03\x04\xfe"
  "\x05\x0b\x16\x6a\x02\x38\x0b\x05\x69\x05\x31\x04\x5d\x04\xce\x03"
  "\x10\x81\x85\x02\xcd\x03\x0e\x81\x89\x02\xcc\x03\x0c\x81\x89\x02"
  "\xcb\x03\x0a\x81\x87\x02\xca\x03\x08\x81\x87\x02\xc9\x03\x06\x81"
  "\x87\x02\xc8\x03\x04\xfe\x05\x0f\x1c\x6b\x02\x39\x12\x6c\x73\x65"
  "\x74\x2d\x69\x6e\x74\x65\x72\x73\x65\x63\x74\x69\x6f\x6e\x6c\x04"
  "\x65\x71\x3f\x6d\x02\x05\x4b\x04\x5d\x04\x3f\x04\x19\x04\x5f\x05"
  "\x62\x07\xd5\x03\x10\x81\x85\x02\xd4\x03\x0e\x81\x85\x02\xd3\x03"
  "\x0c\x83\x04\xd2\x03\x0a\x81\x89\x02\xd1\x03\x08\x81\x87\x02\xd0"
  "\x03\x06\x81\x89\x02\xcf\x03\x04\xfd\x07\x0f\x23\x6e\x02\x3a\x13"
  "\x6c\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x73\x65\x63\x74\x69\x6f"
  "\x6e\x21\x6f\x6d\x02\x05\x4b\x04\x5d\x04\x41\x04\x19\x04\x5f\x05"
  "\x62\x07\xdc\x03\x10\x81\x85\x02\xdb\x03\x0e\x81\x85\x02\xda\x03"
  "\x0c\x83\x04\xd9\x03\x0a\x81\x89\x02\xd8\x03\x08\x81\x87\x02\xd7"
  "\x03\x06\x81\x89\x02\xd6\x03\x04\xfd\x07\x0f\x23\x6d\x02\x3b\x06"
  "\x70\x61\x69\x72\x3f\x4b\x02\x04\x3f\x04\x05\x6d\x65\x6d\x71\x70"
  "\x04\x5f\x05\x62\x05\xe3\x03\x10\x81\x85\x02\xe2\x03\x0e\x81\x85"
  "\x02\xe1\x03\x0c\x81\x85\x02\xe0\x03\x0a\x81\x89\x02\xdf\x03\x08"
  "\x81\x87\x02\xde\x03\x06\x81\x8b\x02\xdd\x03\x04\xfd\x07\x0f\x1f"
  "\x71\x02\x3c\x4b\x02\x04\x3f\x04\x70\x04\x41\x04\x5f\x05\x62\x06"
  "\xea\x03\x10\x81\x85\x02\xe9\x03\x0e\x81\x85\x02\xe8\x03\x0c\x81"
  "\x85\x02\xe7\x03\x0a\x81\x89\x02\xe6\x03\x08\x81\x87\x02\xe5\x03"
  "\x06\x81\x8b\x02\xe4\x03\x04\xfd\x07\x0f\x21\x4b\x02\x3d\x05\x69"
  "\x05\x17\x6c\x73\x65\x74\x2d\x64\x69\x66\x66\x2b\x69\x6e\x74\x65"
  "\x72\x73\x65\x63\x74\x69\x6f\x6e\x72\x05\x10\x6c\x73\x65\x74\x2d"
  "\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x73\x04\x1d\x05\x67\x05"
  "\x62\x07\xf0\x03\x0e\x81\x87\x02\xef\x03\x0c\x81\x87\x02\xee\x03"
  "\x0a\x81\x89\x02\xed\x03\x08\x81\x87\x02\xec\x03\x06\x81\x87\x02"
  "\xeb\x03\x04\xfe\x05\x0d\x1e\x67\x02\x3e\x0b\x05\x69\x05\x18\x6c"
  "\x73\x65\x74\x2d\x64\x69\x66\x66\x2b\x69\x6e\x74\x65\x72\x73\x65"
  "\x63\x74\x69\x6f\x6e\x21\x69\x05\x11\x6c\x73\x65\x74\x2d\x64\x69"
  "\x66\x66\x65\x72\x65\x6e\x63\x65\x21\x1d\x04\x20\x05\x31\x05\x62"
  "\x07\xf8\x03\x12\x81\x87\x02\xf7\x03\x10\x81\x87\x02\xf6\x03\x0e"
  "\x81\x8d\x02\xf5\x03\x0c\x81\x87\x02\xf4\x03\x0a\x81\x89\x02\xf3"
  "\x03\x08\x81\x87\x02\xf2\x03\x06\x81\x87\x02\xf1\x03\x04\xfe\x05"
  "\x11\x24\x20\x02\x3f\x72\x04\x5f\x04\x70\x04\x19\x04\x43\x04\x5d"
  "\x05\x62\x07\x81\x04\x14\x81\x85\x02\x80\x04\x12\x81\x85\x02\xff"
  "\x03\x10\x81\x85\x02\xfe\x03\x0e\x81\x85\x02\xfd\x03\x0c\x81\x87"
  "\x02\xfc\x03\x0a\x81\x85\x02\xfb\x03\x08\x83\x04\xfa\x03\x06\x81"
  "\x87\x02\xf9\x03\x04\xfd\x07\x13\x26\x0b\x02\x40\x69\x04\x5f\x04"
  "\x70\x04\x19\x04\x45\x04\x5d\x05\x62\x07\x8a\x04\x14\x81\x85\x02"
  "\x89\x04\x12\x81\x85\x02\x88\x04\x10\x81\x85\x02\x87\x04\x0e\x81"
  "\x85\x02\x86\x04\x0c\x81\x87\x02\x85\x04\x0a\x81\x85\x02\x84\x04"
  "\x08\x83\x04\x83\x04\x06\x81\x87\x02\x82\x04\x04\xfd\x07\x13\x26"
  "\x70\x02\x41\x04\x19\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x62"
  "\x03\x91\x04\x10\x81\x85\x02\x90\x04\x0e\x81\x85\x02\x8f\x04\x0c"
  "\x81\x85\x02\x8e\x04\x0a\x81\x85\x02\x8d\x04\x08\x81\x89\x02\x8c"
  "\x04\x06\x81\x85\x02\x8b\x04\x04\x83\x04\x0f\x1a\x74\x02\x42\x97"
  "\x04\x0e\xfd\xff\x03\x96\x04\x0c\xfd\xff\x03\x95\x04\x0a\xfd\xff"
  "\x03\x94\x04\x08\xfd\xff\x03\x93\x04\x06\xff\xff\x03\x92\x04\x04"
  "\x84\x06\x0d\x13\x75\x02\x43\x04\x19\x03\x62\x03\xa4\x04\x1c\x81"
  "\x85\x02\xa3\x04\x1a\x83\x04\xa2\x04\x18\x81\x87\x02\xa1\x04\x16"
  "\x81\x87\x02\xa0\x04\x14\x81\x87\x02\x9f\x04\x12\x81\x87\x02\x9e"
  "\x04\x10\x81\x87\x02\x9d\x04\x0e\x81\x87\x02\x9c\x04\x0c\x81\x87"
  "\x02\x9b\x04\x0a\x81\x87\x02\x9a\x04\x08\x81\x8b\x02\x99\x04\x06"
  "\x81\x87\x02\x98\x04\x04\x83\x04\x1b\x26\x76\x02\x44\x04\x19\x03"
  "\x62\x03\xb1\x04\x1c\x81\x85\x02\xb0\x04\x1a\x83\x04\xaf\x04\x18"
  "\x81\x87\x02\xae\x04\x16\x81\x87\x02\xad\x04\x14\x81\x87\x02\xac"
  "\x04\x12\x81\x87\x02\xab\x04\x10\x81\x87\x02\xaa\x04\x0e\x81\x87"
  "\x02\xa9\x04\x0c\x81\x87\x02\xa8\x04\x0a\x81\x87\x02\xa7\x04\x08"
  "\x81\x8b\x02\xa6\x04\x06\x81\x87\x02\xa5\x04\x04\x84\x06\x1b\x26"
  "\x19\x02\x45\x03\x62\x02\xbb\x04\x16\x81\x85\x02\xba\x04\x14\x81"
  "\x87\x02\xb9\x04\x12\x81\x87\x02\xb8\x04\x10\x81\x87\x02\xb7\x04"
  "\x0e\x81\x87\x02\xb6\x04\x0c\x81\x87\x02\xb5\x04\x0a\x81\x87\x02"
  "\xb4\x04\x08\x81\x87\x02\xb3\x04\x06\x81\x87\x02\xb2\x04\x04\x83"
  "\x04\x15\x1e\x62\x45\x62\x04\x19\x04\x76\x04\x75\x04\x74\x04\x70"
  "\x04\x0b\x04\x20\x04\x67\x04\x4b\x04\x71\x04\x6d\x04\x6e\x04\x6b"
  "\x04\x6a\x04\x68\x04\x66\x04\x65\x04\x63\x04\x61\x04\x60\x04\x5e"
  "\x04\x5c\x04\x5b\x04\x5a\x04\x58\x04\x56\x04\x54\x04\x52\x04\x50"
  "\x04\x4f\x04\x4a\x04\x4c\x04\x48\x04\x47\x04\x46\x04\x44\x04\x42"
  "\x04\x40\x04\x3e\x04\x3c\x04\x3a\x04\x37\x04\x35\x04\x33\x04\x30"
  "\x04\x2f\x04\x2e\x04\x2c\x04\x2a\x04\x28\x04\x25\x04\x26\x04\x24"
  "\x04\x1e\x04\x1f\x04\x1c\x04\x1a\x04\x17\x04\x04\x15\x04\x13\x04"
  "\x11\x04\x0f\x04\x0d\x04\x0a\x04\x09\x04\x04\x45\x39\x0c\x25\x63"
  "\x61\x72\x73\x2b\x63\x64\x72\x73\x2b\x23\x07\x25\x63\x61\x72\x73"
  "\x2b\x32\x69\x72\x0a\x6c\x73\x65\x74\x2d\x78\x6f\x72\x21\x09\x6c"
  "\x73\x65\x74\x2d\x78\x6f\x72\x1d\x73\x6f\x6c\x0c\x6c\x73\x65\x74"
  "\x2d\x75\x6e\x69\x6f\x6e\x21\x0b\x6c\x73\x65\x74\x2d\x75\x6e\x69"
  "\x6f\x6e\x0c\x6c\x73\x65\x74\x2d\x61\x64\x6a\x6f\x69\x6e\x06\x6c"
  "\x73\x65\x74\x3d\x07\x6c\x73\x65\x74\x3c\x3d\x64\x21\x5f\x5d\x07"
  "\x62\x72\x65\x61\x6b\x21\x06\x62\x72\x65\x61\x6b\x59\x57\x55\x53"
  "\x51\x4e\x05\x66\x69\x6e\x64\x4d\x49\x08\x72\x65\x6d\x6f\x76\x65"
  "\x21\x07\x72\x65\x6d\x6f\x76\x65\x45\x43\x41\x3f\x3d\x3b\x38\x36"
  "\x34\x31\x0d\x75\x6e\x66\x6f\x6c\x64\x2d\x72\x69\x67\x68\x74\x07"
  "\x75\x6e\x66\x6f\x6c\x64\x2d\x2b\x29\x27\x07\x75\x6e\x7a\x69\x70"
  "\x31\x04\x7a\x69\x70\x22\x0d\x63\x6f\x6e\x63\x61\x74\x65\x6e\x61"
  "\x74\x65\x21\x0c\x63\x6f\x6e\x63\x61\x74\x65\x6e\x61\x74\x65\x1b"
  "\x18\x08\x6c\x65\x6e\x67\x74\x68\x2b\x16\x14\x12\x10\x0e\x0c\x45"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81"
  "\x02\x07\x11";

SCHEME_OBJECT *
srfi_1_so_data_492532a58065bafd (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_srfi_1_so_data_492532a58065bafd [0]))), (sizeof (prog_srfi_1_so_data_492532a58065bafd)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("srfi-1.so", srfi_1_so_data_492532a58065bafd)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("srfi-1.so", "d27f1aecd423e6b4")
