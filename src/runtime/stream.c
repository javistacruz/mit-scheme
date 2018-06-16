/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:53-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 11
#define DEBUGGING_LABEL_1_2 10
#define OBJECT_1_0 9
#define EXECUTE_CACHE_1_6 7
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_1_4);
      goto stream_pairP_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_pairP_6)
DEFLABEL (stream_pairP_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  if (! ((Wrd6.uLng) == 1))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (label_9)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_8;

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
stream_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_stream_pair_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_stream_pair_4)
DEFLABEL (guarantee_stream_pair_1)
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
#define ENVIRONMENT_LABEL_3_3 11
#define DEBUGGING_LABEL_3_2 10
#define OBJECT_3_2 9
#define OBJECT_3_1 8
#define OBJECT_3_0 7
#define EXECUTE_CACHE_3_5 5
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto error_not_stream_pair_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_stream_pair_5)
DEFLABEL (error_not_stream_pair_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_3_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_3_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

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
stream_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto stream_car_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_car_4)
DEFLABEL (stream_car_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_5;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define ENVIRONMENT_LABEL_5_3 16
#define DEBUGGING_LABEL_5_2 15
#define OBJECT_5_1 14
#define OBJECT_5_0 13
#define EXECUTE_CACHE_5_8 9
#define EXECUTE_CACHE_5_6 11
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      goto stream_cdr_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_cdr_6)
DEFLABEL (stream_cdr_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_8;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto stream_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_3)
DEFLABEL (stream_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_8 7
#define LABEL_7_6 9
#define LABEL_7_11 11
#define LABEL_7_10 13
#define LABEL_7_13 15
#define ENVIRONMENT_LABEL_7_3 28
#define DEBUGGING_LABEL_7_2 27
#define OBJECT_7_3 26
#define OBJECT_7_2 25
#define OBJECT_7_1 24
#define OBJECT_7_0 23
#define EXECUTE_CACHE_7_12 17
#define EXECUTE_CACHE_7_9 19
#define EXECUTE_CACHE_7_7 21
#define FREE_REFERENCES_LABEL_7_0 16
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_7_4);
      goto stream_length_9;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_length_14)
DEFLABEL (stream_length_9)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_7;

DEFLABEL (loop_15)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_7_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Rsp [0]) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_17;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_17;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd10.Obj);
  goto loop_7;

DEFLABEL (label_17)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd19.Obj) = (Rsp [0]);
  if (! ((Wrd19.Obj) == (current_block [OBJECT_7_1])))
    goto label_22;

DEFLABEL (label_21)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_8);
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_9 7
#define LABEL_8_7 9
#define ENVIRONMENT_LABEL_8_3 20
#define DEBUGGING_LABEL_8_2 19
#define OBJECT_8_1 18
#define OBJECT_8_0 17
#define EXECUTE_CACHE_8_10 11
#define EXECUTE_CACHE_8_8 13
#define EXECUTE_CACHE_8_6 15
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto stream_ref_4;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_ref_7)
DEFLABEL (stream_ref_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_9);

DEFLABEL (label_9)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_11 11
#define LABEL_9_9 13
#define LABEL_9_14 15
#define LABEL_9_16 17
#define LABEL_9_13 19
#define LABEL_9_18 21
#define LABEL_9_15 23
#define ENVIRONMENT_LABEL_9_3 38
#define DEBUGGING_LABEL_9_2 37
#define OBJECT_9_3 36
#define OBJECT_9_2 35
#define OBJECT_9_1 34
#define OBJECT_9_0 33
#define EXECUTE_CACHE_9_17 25
#define EXECUTE_CACHE_9_12 27
#define EXECUTE_CACHE_9_10 29
#define EXECUTE_CACHE_9_6 31
#define FREE_REFERENCES_LABEL_9_0 24
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd19;
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
      goto stream_head_12;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto loop_10;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_9_14);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_9_16);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_9_18);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_head_19)
DEFLABEL (stream_head_12)
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
  goto loop_10;

DEFLABEL (loop_20)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_9_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_30;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd19.Lng) > 0)
    goto label_22;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_9_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_11);

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_28;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd18.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_28;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_27)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_26;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_15);
  (* (--Rsp)) = Rvl;
  goto loop_10;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_13);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_24;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_23)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_8 9
#define LABEL_10_11 11
#define LABEL_10_9 13
#define LABEL_10_14 15
#define LABEL_10_13 17
#define LABEL_10_16 19
#define ENVIRONMENT_LABEL_10_3 32
#define DEBUGGING_LABEL_10_2 31
#define OBJECT_10_1 30
#define OBJECT_10_0 29
#define EXECUTE_CACHE_10_15 21
#define EXECUTE_CACHE_10_12 23
#define EXECUTE_CACHE_10_10 25
#define EXECUTE_CACHE_10_6 27
#define FREE_REFERENCES_LABEL_10_0 20
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_10_4);
      goto stream_tail_10;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto loop_8;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_10_14);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_10_16);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_tail_16)
DEFLABEL (stream_tail_10)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  goto loop_8;

DEFLABEL (loop_17)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_10_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_25;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd19.Lng) > 0)
    goto label_19;

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_11);

DEFLABEL (label_24)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (Rsp [0]) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_21;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_21;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd10.Obj);
  goto loop_8;

DEFLABEL (label_21)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_7 5
#define LABEL_11_5 7
#define LABEL_11_10 9
#define LABEL_11_12 11
#define LABEL_11_11 13
#define LABEL_11_15 15
#define LABEL_11_14 17
#define ENVIRONMENT_LABEL_11_3 32
#define DEBUGGING_LABEL_11_2 31
#define OBJECT_11_3 30
#define OBJECT_11_2 29
#define OBJECT_11_1 28
#define OBJECT_11_0 27
#define EXECUTE_CACHE_11_13 19
#define EXECUTE_CACHE_11_9 21
#define EXECUTE_CACHE_11_8 23
#define EXECUTE_CACHE_11_6 25
#define FREE_REFERENCES_LABEL_11_0 18
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto stream_last_pair_12;

    case 1:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_10);
      goto loop_10;

    case 4:
      current_block = (Rpc - LABEL_11_12);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_last_pair_16)
DEFLABEL (stream_last_pair_12)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_18)
  goto loop_10;

DEFLABEL (label_19)
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == (current_block [OBJECT_11_0]))
    goto label_20;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_7);
  goto label_18;

DEFLABEL (label_20)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (loop_17)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_11_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_25;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_10;

DEFLABEL (label_21)
  (Wrd9.Obj) = (Rsp [1]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_11_0])))
    goto label_23;

DEFLABEL (label_22)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_15);
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_9 5
#define LABEL_12_7 7
#define LABEL_12_5 9
#define TAG_12_6 3
#define LABEL_12_11 11
#define TAG_12_12 4
#define LABEL_12_19 13
#define LABEL_12_10 15
#define LABEL_12_14 17
#define TAG_12_15 7
#define LABEL_12_16 19
#define LABEL_12_25 21
#define LABEL_12_18 23
#define LABEL_12_22 25
#define LABEL_12_23 27
#define TAG_12_24 12
#define LABEL_12_32 29
#define LABEL_12_27 31
#define LABEL_12_35 33
#define LABEL_12_28 35
#define TAG_12_29 16
#define LABEL_12_37 37
#define LABEL_12_30 39
#define LABEL_12_31 41
#define LABEL_12_34 43
#define LABEL_12_36 45
#define ENVIRONMENT_LABEL_12_3 76
#define DEBUGGING_LABEL_12_2 75
#define OBJECT_12_9 74
#define OBJECT_12_8 73
#define OBJECT_12_7 72
#define OBJECT_12_6 71
#define OBJECT_12_5 70
#define OBJECT_12_4 69
#define OBJECT_12_3 68
#define OBJECT_12_2 67
#define OBJECT_12_1 66
#define OBJECT_12_0 65
#define EXECUTE_CACHE_12_38 47
#define EXECUTE_CACHE_12_33 49
#define EXECUTE_CACHE_12_26 51
#define EXECUTE_CACHE_12_21 53
#define EXECUTE_CACHE_12_20 55
#define EXECUTE_CACHE_12_17 57
#define EXECUTE_CACHE_12_13 59
#define EXECUTE_CACHE_12_8 61
#define FREE_REFERENCE_12_0 64
#define FREE_REFERENCES_LABEL_12_0 46
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_12_4);
      goto stream_map_30;

    case 1:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_5);
      goto loop_28;

    case 4:
      current_block = (Rpc - LABEL_12_11);
      goto loop_17;

    case 5:
      current_block = (Rpc - LABEL_12_19);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_12_14);
      goto lambda_39;

    case 8:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_27;

    case 9:
      current_block = (Rpc - LABEL_12_25);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_12_18);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_12_22);
      goto continuation_25;

    case 12:
      current_block = (Rpc - LABEL_12_23);
      goto lambda_40;

    case 13:
      current_block = (Rpc - LABEL_12_32);
      goto label_32;

    case 14:
      current_block = (Rpc - LABEL_12_27);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_12_35);
      goto label_33;

    case 16:
      current_block = (Rpc - LABEL_12_28);
      goto lambda_41;

    case 17:
      current_block = (Rpc - LABEL_12_37);
      goto label_34;

    case 18:
      current_block = (Rpc - LABEL_12_30);
      goto continuation_22;

    case 19:
      current_block = (Rpc - LABEL_12_31);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_12_34);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_12_36);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_map_36)
DEFLABEL (stream_map_30)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_42;
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
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  Wrd20 = Wrd22;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_28;

DEFLABEL (label_42)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_48;

DEFLABEL (label_47)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_43)
  (Wrd15.Obj) = (current_block [OBJECT_12_2]);
  (Rsp [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_20]));

DEFLABEL (label_44)
  (Wrd7.Obj) = (Rsp [0]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_12_0])))
    goto label_46;

DEFLABEL (label_45)
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_21]));

DEFLABEL (label_46)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_45;

DEFLABEL (label_48)
  (Wrd7.Obj) = (Rsp [1]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_12_0])))
    goto label_50;

DEFLABEL (label_49)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_11])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  Wrd18 = Wrd20;
  (Wrd19.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_17;

DEFLABEL (label_50)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_49;

DEFLABEL (loop_37)
DEFLABEL (loop_28)
  INTERRUPT_CHECK (26, LABEL_12_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_14])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  ((Wrd9.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_12_16);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (loop_38)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_12_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_28])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_12_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_52;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_51)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_12_34);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_35]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_8]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_53)
  (Wrd18.Obj) = (Rsp [1]);
  if (! ((Wrd18.Obj) == (current_block [OBJECT_12_0])))
    goto label_55;

DEFLABEL (label_54)
  Rvl = (current_block [OBJECT_12_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_26]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12_25);
  goto label_54;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_12_14);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_56;
  Rvl = (current_block [OBJECT_12_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_23])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_12_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_7]), 2);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_12_30);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_12_23);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_58;
  Wrd14 = Wrd18;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_33]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_12_31);
  (Rsp [1]) = Rvl;
  goto loop_28;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_32])), (Wrd15.pObj));

DEFLABEL (label_32)
  (Wrd14.Obj) = Rvl;
  goto label_57;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_12_28);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_60;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_38]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_12_36);
  (Rsp [1]) = Rvl;
  goto loop_17;

DEFLABEL (label_60)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_37]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_9]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_5 7
#define TAG_13_6 2
#define LABEL_13_8 9
#define LABEL_13_16 11
#define LABEL_13_10 13
#define TAG_13_11 5
#define LABEL_13_12 15
#define LABEL_13_15 17
#define LABEL_13_19 19
#define LABEL_13_17 21
#define LABEL_13_22 23
#define LABEL_13_18 25
#define LABEL_13_21 27
#define ENVIRONMENT_LABEL_13_3 49
#define DEBUGGING_LABEL_13_2 48
#define OBJECT_13_6 47
#define OBJECT_13_5 46
#define OBJECT_13_4 45
#define OBJECT_13_3 44
#define OBJECT_13_2 43
#define OBJECT_13_1 42
#define OBJECT_13_0 41
#define EXECUTE_CACHE_13_23 29
#define EXECUTE_CACHE_13_20 31
#define EXECUTE_CACHE_13_14 33
#define EXECUTE_CACHE_13_13 35
#define EXECUTE_CACHE_13_9 37
#define FREE_REFERENCE_13_0 40
#define FREE_REFERENCES_LABEL_13_0 28
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_13_4);
      goto stream_for_each_19;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto loop_8;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto loop_17;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_13_16);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto lambda_28;

    case 6:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_16;

    case 7:
      current_block = (Rpc - LABEL_13_15);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_13_19);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_13_17);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_13_22);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_13_18);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_13_21);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_for_each_25)
DEFLABEL (stream_for_each_19)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_29;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_8;

DEFLABEL (label_29)
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Rsp [2]) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  Wrd17 = Wrd19;
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_17;

DEFLABEL (loop_27)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_13_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_32)
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_31;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_18);
  (Rsp [0]) = Rvl;
  goto loop_8;

DEFLABEL (label_31)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_6]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd20.Obj) = (Rsp [0]);
  if ((Wrd20.Obj) == (current_block [OBJECT_13_1]))
    goto label_35;
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [2]) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_13_3]);
  (Rsp [3]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_13_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (loop_26)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_13_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_10])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  ((Wrd9.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_13_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_13_10);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_36;
  Rvl = (current_block [OBJECT_13_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 2);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_13_17);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_38;
  Wrd12 = Wrd16;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_23]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_13_21);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_17;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_22])), (Wrd13.pObj));

DEFLABEL (label_23)
  (Wrd12.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_9 9
#define LABEL_14_10 11
#define LABEL_14_11 13
#define TAG_14_12 5
#define LABEL_14_13 15
#define LABEL_14_7 17
#define LABEL_14_16 19
#define LABEL_14_17 21
#define LABEL_14_18 23
#define LABEL_14_19 25
#define LABEL_14_20 27
#define LABEL_14_14 29
#define ENVIRONMENT_LABEL_14_3 43
#define DEBUGGING_LABEL_14_2 42
#define OBJECT_14_6 41
#define OBJECT_14_5 40
#define OBJECT_14_4 39
#define OBJECT_14_3 38
#define OBJECT_14_2 37
#define OBJECT_14_1 36
#define OBJECT_14_0 35
#define EXECUTE_CACHE_14_15 31
#define EXECUTE_CACHE_14_8 33
#define FREE_REFERENCES_LABEL_14_0 30
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto split_streams_27;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto loop_24;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_31;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_14_10);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_14_11);
      goto lambda_40;

    case 6:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_14_16);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_14_17);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_14_18);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_14_19);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_14_20);
      goto label_34;

    case 13:
      current_block = (Rpc - LABEL_14_14);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (split_streams_38)
DEFLABEL (split_streams_27)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (Wrd9.Obj) = (current_block [OBJECT_14_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_14_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto loop_24;

DEFLABEL (loop_39)
DEFLABEL (loop_24)
  INTERRUPT_CHECK (26, LABEL_14_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_46;
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_45;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_44)
  (Rsp [6]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_43;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [7]) = (Wrd16.Obj);
  Rsp = (& (Rsp [6]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_11])));
  Rhp += 2;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd30 = Wrd27;
  (Wrd31.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  Rvl = (Wrd26.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 1);

DEFLABEL (label_30)
  (Wrd16.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 1);

DEFLABEL (label_29)
  (Wrd7.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  if (! ((Wrd6.uLng) == 1))
    goto label_61;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_60)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_56;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_55)
  (Wrd19.Obj) = (current_block [OBJECT_14_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_54;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_53)
  (Wrd32.Obj) = (current_block [OBJECT_14_1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Rsp [1]) = (Wrd29.Obj);
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_52;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd61.Obj) = (Rsp [0]);
  ((Wrd60.pObj) [1]) = (Wrd61.Obj);

DEFLABEL (label_51)
  (Wrd52.Obj) = (Rsp [4]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_50;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = (Rsp [1]);
  ((Wrd50.pObj) [1]) = (Wrd51.Obj);

DEFLABEL (label_49)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_48;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_47)
  (Rsp [2]) = (Wrd33.Obj);
  (Wrd42.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd43.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd46.Lng) + 1L);
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (Rsp [5]) = (Wrd44.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_24;

DEFLABEL (label_48)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_20]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 1);

DEFLABEL (label_34)
  (Wrd33.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_6]), 2);

DEFLABEL (label_35)
  goto label_49;

DEFLABEL (label_52)
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_6]), 2);

DEFLABEL (label_36)
  goto label_51;

DEFLABEL (label_54)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 1);

DEFLABEL (label_33)
  (Wrd20.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 1);

DEFLABEL (label_32)
  (Wrd7.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_57)
  (Wrd69.Obj) = (Rsp [0]);
  if (! ((Wrd69.Obj) == (current_block [OBJECT_14_1])))
    goto label_59;

DEFLABEL (label_58)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14_13);
  goto label_58;

DEFLABEL (label_61)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_14_11);

DEFLABEL (lambda_6)
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

DEFLABEL (lambda_41)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_14_14);
  (Wrd5.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_7 5
#define TAG_15_8 1
#define LABEL_15_5 7
#define TAG_15_6 2
#define LABEL_15_15 9
#define LABEL_15_9 11
#define LABEL_15_11 13
#define TAG_15_12 5
#define LABEL_15_13 15
#define LABEL_15_17 17
#define LABEL_15_22 19
#define LABEL_15_18 21
#define TAG_15_19 9
#define LABEL_15_24 23
#define LABEL_15_20 25
#define LABEL_15_21 27
#define LABEL_15_23 29
#define LABEL_15_26 31
#define LABEL_15_27 33
#define TAG_15_28 15
#define LABEL_15_30 35
#define LABEL_15_32 37
#define LABEL_15_29 39
#define LABEL_15_33 41
#define TAG_15_34 19
#define LABEL_15_36 43
#define LABEL_15_35 45
#define LABEL_15_37 47
#define LABEL_15_40 49
#define LABEL_15_38 51
#define TAG_15_39 24
#define LABEL_15_42 53
#define LABEL_15_41 55
#define ENVIRONMENT_LABEL_15_3 80
#define DEBUGGING_LABEL_15_2 79
#define OBJECT_15_9 78
#define OBJECT_15_8 77
#define OBJECT_15_7 76
#define OBJECT_15_6 75
#define OBJECT_15_5 74
#define OBJECT_15_4 73
#define OBJECT_15_3 72
#define OBJECT_15_2 71
#define OBJECT_15_1 70
#define OBJECT_15_0 69
#define EXECUTE_CACHE_15_31 57
#define EXECUTE_CACHE_15_25 59
#define EXECUTE_CACHE_15_16 61
#define EXECUTE_CACHE_15_14 63
#define EXECUTE_CACHE_15_10 65
#define FREE_REFERENCE_15_0 68
#define FREE_REFERENCES_LABEL_15_0 56
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_15_4);
      goto stream_append_map_37;

    case 1:
      current_block = (Rpc - LABEL_15_7);
      goto loop_23;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto loop_34;

    case 3:
      current_block = (Rpc - LABEL_15_15);
      goto continuation_16;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto lambda_48;

    case 6:
      current_block = (Rpc - LABEL_15_13);
      goto continuation_33;

    case 7:
      current_block = (Rpc - LABEL_15_17);
      goto continuation_22;

    case 8:
      current_block = (Rpc - LABEL_15_22);
      goto label_39;

    case 9:
      current_block = (Rpc - LABEL_15_18);
      goto lambda_49;

    case 10:
      current_block = (Rpc - LABEL_15_24);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_15_20);
      goto continuation_28;

    case 12:
      current_block = (Rpc - LABEL_15_21);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_15_23);
      goto continuation_20;

    case 14:
      current_block = (Rpc - LABEL_15_26);
      goto continuation_31;

    case 15:
      current_block = (Rpc - LABEL_15_27);
      goto lambda_50;

    case 16:
      current_block = (Rpc - LABEL_15_30);
      goto label_41;

    case 17:
      current_block = (Rpc - LABEL_15_32);
      goto lambda_11;

    case 18:
      current_block = (Rpc - LABEL_15_29);
      goto continuation_29;

    case 19:
      current_block = (Rpc - LABEL_15_33);
      goto loop_9;

    case 20:
      current_block = (Rpc - LABEL_15_36);
      goto continuation_3;

    case 21:
      current_block = (Rpc - LABEL_15_35);
      goto continuation_1;

    case 22:
      current_block = (Rpc - LABEL_15_37);
      goto continuation_8;

    case 23:
      current_block = (Rpc - LABEL_15_40);
      goto label_42;

    case 24:
      current_block = (Rpc - LABEL_15_38);
      goto lambda_53;

    case 25:
      current_block = (Rpc - LABEL_15_42);
      goto label_43;

    case 26:
      current_block = (Rpc - LABEL_15_41);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_append_map_45)
DEFLABEL (stream_append_map_37)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_54;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_7])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  Wrd12 = Wrd14;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_23;

DEFLABEL (label_54)
  (Wrd19.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [2]) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  Wrd25 = Wrd27;
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_34;

DEFLABEL (loop_47)
DEFLABEL (loop_23)
  INTERRUPT_CHECK (26, LABEL_15_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_15_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_18])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_15_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_56;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_55)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_15_21);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  goto lambda_11;

DEFLABEL (label_56)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_7]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_57)
  (Wrd18.Obj) = (Rsp [1]);
  if (! ((Wrd18.Obj) == (current_block [OBJECT_15_1])))
    goto label_59;

DEFLABEL (label_58)
  Rvl = (current_block [OBJECT_15_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_15_15);
  goto label_58;

DEFLABEL (loop_46)
DEFLABEL (loop_34)
  INTERRUPT_CHECK (26, LABEL_15_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_11])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  ((Wrd9.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_15_13);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_15_11);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_60;
  Rvl = (current_block [OBJECT_15_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_6]), 2);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_15_20);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_27])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_15_26);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto lambda_11;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_15_18);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_62;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_25]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_15_23);
  (Rsp [1]) = Rvl;
  goto loop_23;

DEFLABEL (label_62)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_24]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_8]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_15_27);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_64;
  Wrd14 = Wrd18;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_31]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_15_29);
  (Rsp [1]) = Rvl;
  goto loop_34;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_30])), (Wrd15.pObj));

DEFLABEL (label_41)
  (Wrd14.Obj) = Rvl;
  goto label_63;

DEFLABEL (lambda_51)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_15_32);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_33])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  Wrd13 = Wrd15;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  ((Wrd13.pObj) [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd8.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_9;

DEFLABEL (loop_52)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_15_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_35);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_37]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_38])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15_37);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_66;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_65)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_40]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_7]), 1);

DEFLABEL (label_42)
  (Wrd5.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd18.Obj) = (Rsp [1]);
  if (! ((Wrd18.Obj) == (current_block [OBJECT_15_1])))
    goto label_69;

DEFLABEL (label_68)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_25]));

DEFLABEL (label_69)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_36]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_15_9]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_36);
  goto label_68;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_15_38);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_71;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_70)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_41);
  (Rsp [1]) = Rvl;
  goto loop_9;

DEFLABEL (label_71)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_42]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_8]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_70;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define LABEL_16_8 11
#define TAG_16_9 4
#define LABEL_16_12 13
#define LABEL_16_10 15
#define LABEL_16_13 17
#define LABEL_16_15 19
#define LABEL_16_18 21
#define LABEL_16_16 23
#define TAG_16_17 10
#define LABEL_16_20 25
#define LABEL_16_19 27
#define ENVIRONMENT_LABEL_16_3 43
#define DEBUGGING_LABEL_16_2 42
#define OBJECT_16_6 41
#define OBJECT_16_5 40
#define OBJECT_16_4 39
#define OBJECT_16_3 38
#define OBJECT_16_2 37
#define OBJECT_16_1 36
#define OBJECT_16_0 35
#define EXECUTE_CACHE_16_21 29
#define EXECUTE_CACHE_16_14 31
#define EXECUTE_CACHE_16_11 33
#define FREE_REFERENCES_LABEL_16_0 28
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_16_4);
      goto stream_append_20;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto outer_loop_18;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto inner_loop_16;

    case 5:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_16_13);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_16_18);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_16_16);
      goto lambda_31;

    case 11:
      current_block = (Rpc - LABEL_16_20);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_16_19);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_append_28)
DEFLABEL (stream_append_20)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_32;
  Rvl = (current_block [OBJECT_16_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd10.Obj);
  goto outer_loop_18;

DEFLABEL (outer_loop_29)
DEFLABEL (outer_loop_18)
  INTERRUPT_CHECK (26, LABEL_16_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_38;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_37)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_34;
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_33;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  Rvl = ((Wrd18.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_34)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_36;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_35)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_8])));
  Rhp += 2;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  Wrd39 = Wrd41;
  (Wrd40.Obj) = (Rsp [3]);
  ((Wrd39.pObj) [2]) = (Wrd40.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  ((Wrd39.pObj) [3]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd42.Obj);
  (Wrd34.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd34.Obj);
  goto inner_loop_16;

DEFLABEL (label_36)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_37;

DEFLABEL (inner_loop_30)
DEFLABEL (inner_loop_16)
  INTERRUPT_CHECK (26, LABEL_16_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_16])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_16_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
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
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd18.Obj) = (Rsp [1]);
  if ((Wrd18.Obj) == (current_block [OBJECT_16_1]))
    goto label_44;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_16_4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_12);

DEFLABEL (label_44)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd32.Lng) + 1L);
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd41.Obj) = ((Wrd30.pObj) [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_43;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd34.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [0]) = (Wrd34.Obj);
  goto outer_loop_18;

DEFLABEL (label_43)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_24)
  (Wrd34.Obj) = Rvl;
  goto label_42;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_16_16);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_46;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_16_19);
  (Rsp [1]) = Rvl;
  goto inner_loop_16;

DEFLABEL (label_46)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_7 5
#define LABEL_17_5 7
#define LABEL_17_11 9
#define LABEL_17_9 11
#define LABEL_17_13 13
#define LABEL_17_10 15
#define ENVIRONMENT_LABEL_17_3 31
#define DEBUGGING_LABEL_17_2 30
#define OBJECT_17_4 29
#define OBJECT_17_3 28
#define OBJECT_17_2 27
#define OBJECT_17_1 26
#define OBJECT_17_0 25
#define EXECUTE_CACHE_17_14 17
#define EXECUTE_CACHE_17_12 19
#define EXECUTE_CACHE_17_8 21
#define EXECUTE_CACHE_17_6 23
#define FREE_REFERENCES_LABEL_17_0 16
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
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
      goto stream_accumulate_7;

    case 1:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_17_11);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_17_13);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_accumulate_12)
DEFLABEL (stream_accumulate_7)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_14;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_13)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd14.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_4]), 1);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_3]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  (Wrd22.Obj) = (Rsp [2]);
  if (! ((Wrd22.Obj) == (current_block [OBJECT_17_0])))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_7);
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_7 5
#define LABEL_18_5 7
#define LABEL_18_10 9
#define LABEL_18_9 11
#define LABEL_18_12 13
#define LABEL_18_14 15
#define LABEL_18_17 17
#define LABEL_18_15 19
#define TAG_18_16 8
#define LABEL_18_19 21
#define LABEL_18_11 23
#define LABEL_18_18 25
#define ENVIRONMENT_LABEL_18_3 44
#define DEBUGGING_LABEL_18_2 43
#define OBJECT_18_7 42
#define OBJECT_18_6 41
#define OBJECT_18_5 40
#define OBJECT_18_4 39
#define OBJECT_18_3 38
#define OBJECT_18_2 37
#define OBJECT_18_1 36
#define OBJECT_18_0 35
#define EXECUTE_CACHE_18_20 27
#define EXECUTE_CACHE_18_13 29
#define EXECUTE_CACHE_18_8 31
#define EXECUTE_CACHE_18_6 33
#define FREE_REFERENCES_LABEL_18_0 26
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
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
      goto stream_filter_12;

    case 1:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_18_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_18_12);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_18_14);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_18_17);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_18_15);
      goto lambda_20;

    case 9:
      current_block = (Rpc - LABEL_18_19);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_18_11);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_18_18);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_filter_19)
DEFLABEL (stream_filter_12)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_15])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_18_5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_18_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_7]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_18_14);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_21)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 1);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_25;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_18_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_20]));

DEFLABEL (label_25)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_4]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd20.Obj) = (Rsp [1]);
  if (! ((Wrd20.Obj) == (current_block [OBJECT_18_0])))
    goto label_30;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_18_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_18_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_7);
  goto label_29;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_18_15);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_32;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_18_18);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_20]));

DEFLABEL (label_32)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_4]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_10 7
#define LABEL_19_8 9
#define LABEL_19_13 11
#define LABEL_19_16 13
#define LABEL_19_15 15
#define LABEL_19_20 17
#define LABEL_19_18 19
#define LABEL_19_19 21
#define LABEL_19_22 23
#define TAG_19_23 10
#define LABEL_19_25 25
#define ENVIRONMENT_LABEL_19_3 56
#define DEBUGGING_LABEL_19_2 55
#define OBJECT_19_9 54
#define OBJECT_19_8 53
#define OBJECT_19_7 52
#define OBJECT_19_6 51
#define OBJECT_19_5 50
#define OBJECT_19_4 49
#define OBJECT_19_3 48
#define OBJECT_19_2 47
#define OBJECT_19_1 46
#define OBJECT_19_0 45
#define EXECUTE_CACHE_19_24 27
#define EXECUTE_CACHE_19_21 29
#define EXECUTE_CACHE_19_17 31
#define EXECUTE_CACHE_19_14 33
#define EXECUTE_CACHE_19_12 35
#define EXECUTE_CACHE_19_11 37
#define EXECUTE_CACHE_19_9 39
#define EXECUTE_CACHE_19_7 41
#define EXECUTE_CACHE_19_6 43
#define FREE_REFERENCES_LABEL_19_0 26
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_19_4);
      goto stream_write_14;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_10);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_19_16);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_19_15);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_19_20);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_19_18);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_19_19);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_19_22);
      goto lambda_20;

    case 11:
      current_block = (Rpc - LABEL_19_25);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream_write_19)
DEFLABEL (stream_write_14)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_19_0]))
    goto label_28;
  (Wrd10.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_24;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_22;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_19_19);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_22])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [2]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_19_18);
  (Wrd5.Obj) = (current_block [OBJECT_19_8]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (label_22)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_6]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  (Wrd12.Obj) = (Rsp [1]);
  if (! ((Wrd12.Obj) == (current_block [OBJECT_19_2])))
    goto label_27;

DEFLABEL (label_26)
  (Wrd20.Obj) = (current_block [OBJECT_19_3]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (label_27)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_19_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_10);
  goto label_26;

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_19_22);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19_25);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_17]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_5 3
#define LABEL_20_4 5
#define LABEL_20_6 7
#define LABEL_20_10 9
#define LABEL_20_7 11
#define TAG_20_8 4
#define LABEL_20_11 13
#define ENVIRONMENT_LABEL_20_3 27
#define DEBUGGING_LABEL_20_2 26
#define OBJECT_20_6 25
#define OBJECT_20_5 24
#define OBJECT_20_4 23
#define OBJECT_20_3 22
#define OBJECT_20_2 21
#define OBJECT_20_1 20
#define OBJECT_20_0 19
#define EXECUTE_CACHE_20_12 15
#define EXECUTE_CACHE_20_9 17
#define FREE_REFERENCES_LABEL_20_0 14
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_20_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_20_4);
      goto list__stream_7;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_20_10);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_20_7);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_20_11);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list__stream_12)
DEFLABEL (list__stream_7)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_16;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_7])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  ((Wrd20.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_15;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_14)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_20_3])))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_20_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_5);
  goto label_17;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_20_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_20;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (label_20)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_6]), 1);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_7 5
#define LABEL_21_5 7
#define LABEL_21_11 9
#define LABEL_21_9 11
#define LABEL_21_13 13
#define LABEL_21_10 15
#define ENVIRONMENT_LABEL_21_3 31
#define DEBUGGING_LABEL_21_2 30
#define OBJECT_21_4 29
#define OBJECT_21_3 28
#define OBJECT_21_2 27
#define OBJECT_21_1 26
#define OBJECT_21_0 25
#define EXECUTE_CACHE_21_14 17
#define EXECUTE_CACHE_21_12 19
#define EXECUTE_CACHE_21_8 21
#define EXECUTE_CACHE_21_6 23
#define FREE_REFERENCES_LABEL_21_0 16
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
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
      goto stream__list_7;

    case 1:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_21_11);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_21_13);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stream__list_12)
DEFLABEL (stream__list_7)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_14;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_13)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 1);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  (Wrd22.Obj) = (Rsp [0]);
  if (! ((Wrd22.Obj) == (current_block [OBJECT_21_0])))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_21_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_21_2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_7);
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define TAG_22_8 3
#define LABEL_22_9 11
#define LABEL_22_16 13
#define LABEL_22_18 15
#define LABEL_22_11 17
#define TAG_22_12 7
#define LABEL_22_13 19
#define LABEL_22_14 21
#define TAG_22_15 9
#define LABEL_22_17 23
#define LABEL_22_20 25
#define LABEL_22_22 27
#define LABEL_22_26 29
#define LABEL_22_27 31
#define LABEL_22_28 33
#define LABEL_22_32 35
#define LABEL_22_34 37
#define LABEL_22_21 39
#define LABEL_22_36 41
#define LABEL_22_38 43
#define LABEL_22_39 45
#define LABEL_22_23 47
#define LABEL_22_24 49
#define TAG_22_25 23
#define LABEL_22_40 51
#define LABEL_22_33 53
#define LABEL_22_29 55
#define LABEL_22_30 57
#define TAG_22_31 27
#define LABEL_22_37 59
#define ENVIRONMENT_LABEL_22_3 76
#define DEBUGGING_LABEL_22_2 75
#define OBJECT_22_7 74
#define OBJECT_22_6 73
#define OBJECT_22_5 72
#define OBJECT_22_4 71
#define OBJECT_22_3 70
#define OBJECT_22_2 69
#define OBJECT_22_1 68
#define OBJECT_22_0 67
#define EXECUTE_CACHE_22_35 61
#define EXECUTE_CACHE_22_19 63
#define EXECUTE_CACHE_22_10 65
#define FREE_REFERENCES_LABEL_22_0 60
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd63;
  machine_word Wrd68;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_22_4);
      goto make_prime_numbers_stream_46;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_45;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto lambda_44;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto lambda_62;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_22_16);
      goto loop_38;

    case 6:
      current_block = (Rpc - LABEL_22_18);
      goto label_48;

    case 7:
      current_block = (Rpc - LABEL_22_11);
      goto lambda_63;

    case 8:
      current_block = (Rpc - LABEL_22_13);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_22_14);
      goto lambda_64;

    case 10:
      current_block = (Rpc - LABEL_22_17);
      goto continuation_27;

    case 11:
      current_block = (Rpc - LABEL_22_20);
      goto label_49;

    case 12:
      current_block = (Rpc - LABEL_22_22);
      goto label_50;

    case 13:
      current_block = (Rpc - LABEL_22_26);
      goto loop_21;

    case 14:
      current_block = (Rpc - LABEL_22_27);
      goto label_51;

    case 15:
      current_block = (Rpc - LABEL_22_28);
      goto label_52;

    case 16:
      current_block = (Rpc - LABEL_22_32);
      goto label_53;

    case 17:
      current_block = (Rpc - LABEL_22_34);
      goto label_54;

    case 18:
      current_block = (Rpc - LABEL_22_21);
      goto continuation_30;

    case 19:
      current_block = (Rpc - LABEL_22_36);
      goto label_55;

    case 20:
      current_block = (Rpc - LABEL_22_38);
      goto label_56;

    case 21:
      current_block = (Rpc - LABEL_22_39);
      goto label_57;

    case 22:
      current_block = (Rpc - LABEL_22_23);
      goto continuation_37;

    case 23:
      current_block = (Rpc - LABEL_22_24);
      goto lambda_66;

    case 24:
      current_block = (Rpc - LABEL_22_40);
      goto label_58;

    case 25:
      current_block = (Rpc - LABEL_22_33);
      goto continuation_16;

    case 26:
      current_block = (Rpc - LABEL_22_29);
      goto continuation_20;

    case 27:
      current_block = (Rpc - LABEL_22_30);
      goto lambda_68;

    case 28:
      current_block = (Rpc - LABEL_22_37);
      goto continuation_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_prime_numbers_stream_60)
DEFLABEL (make_prime_numbers_stream_46)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Wrd9.Obj) = (current_block [OBJECT_22_3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  goto pop_return;

DEFLABEL (lambda_61)
DEFLABEL (lambda_44)
  INTERRUPT_CHECK (26, LABEL_22_6);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_7])));
  Rhp += 2;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd27 = Wrd24;
  ((Wrd27.pObj) [2]) = (Wrd7.Obj);
  ((Wrd27.pObj) [3]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = ((Wrd6.Lng) - 2L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_11])));
  Rhp += 4;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd21 = Wrd14;
  (Wrd22.Obj) = (Rsp [4]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [4]) = (Wrd18.Obj);
  ((Wrd21.pObj) [5]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_14])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd28 = Wrd27;
  (Wrd29.Obj) = (Rsp [4]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_13);
  (Wrd9.Obj) = (current_block [OBJECT_22_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  ((Wrd11.pObj) [0]) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [0]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  Rvl = ((Wrd22.pObj) [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_22_7);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_38;

DEFLABEL (loop_65)
DEFLABEL (loop_38)
  INTERRUPT_CHECK (26, LABEL_22_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_82;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_81)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_19]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_22_17);
  (Wrd5.Obj) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_80;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_80;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd42.Lng) < (Wrd43.Lng)))
    goto label_70;

DEFLABEL (label_69)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_23]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_24])));
  Rhp += 2;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  Wrd35 = Wrd32;
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [2]);
  ((Wrd35.pObj) [2]) = (Wrd38.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  ((Wrd35.pObj) [3]) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_22_23);
  (Wrd10.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_79;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_78)
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_30)
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_77;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd43.Lng) == 0)
    goto label_74;

DEFLABEL (label_73)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_72;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_71)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_35]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_22_37);
  (Rsp [0]) = Rvl;
  goto loop_38;

DEFLABEL (label_72)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_38]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_7]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd28.pObj) [0]);
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_76;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd39.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_76;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));

DEFLABEL (label_75)
  (Rsp [2]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_76)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Obj) = (current_block [OBJECT_22_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_39]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_57)
  (Wrd34.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_55)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  goto label_74;

DEFLABEL (label_79)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_22]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_80)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_49)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  goto label_69;

DEFLABEL (label_82)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_22_11);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [5]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) > (Wrd10.Lng))
    goto label_83;
  (Wrd13.Obj) = ((Wrd8.pObj) [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto loop_21;

DEFLABEL (label_83)
  (Wrd19.Obj) = ((Wrd8.pObj) [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd20.pObj) [0]);
  (Rsp [0]) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_22_14);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_22_6]);
  (Rsp [1]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (loop_67)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_22_26);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_93;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_92)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_91;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_90)
  (Wrd23.Obj) = (* (Rsp++));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd27.Lng) = ((Wrd25.Lng) * (Wrd26.Lng));
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! ((Wrd29.Lng) < (Wrd27.Lng)))
    goto label_84;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_29]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd74.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_30])));
  Rhp += 2;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd74.pObj)));
  Wrd77 = Wrd74;
  (Wrd78.Obj) = (Rsp [2]);
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [3]);
  ((Wrd77.pObj) [2]) = (Wrd80.Obj);
  ((Wrd77.pObj) [3]) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_22_29);
  (Wrd10.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_89;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_88)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd44.Lng) = (FIXNUM_REMAINDER ((Wrd42.Lng), (Wrd43.Lng)));
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));
  if (! ((Wrd40.Obj) == (current_block [OBJECT_22_0])))
    goto label_85;
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [3]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd58.Obj) = ((Wrd62.pObj) [0]);
  (Rsp [1]) = (Wrd58.Obj);
  (Wrd68.Lng) = ((Wrd42.Lng) + 2L);
  (Wrd63.Obj) = (LONG_TO_FIXNUM (Wrd68.Lng));
  (Rsp [2]) = (Wrd63.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_85)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_33]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_87;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_86)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_35]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_22_33);
  (Rsp [0]) = Rvl;
  goto loop_21;

DEFLABEL (label_87)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_34]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_7]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_32]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (label_53)
  (Wrd31.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_28]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (label_52)
  (Wrd14.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_27]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_22_24);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.Obj) = ((Wrd6.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_95;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd26.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_95;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));

DEFLABEL (label_94)
  (Rsp [1]) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_95)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [3]);
  (Wrd13.Obj) = (current_block [OBJECT_22_3]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_40]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_58)
  (Wrd17.Obj) = Rvl;
  goto label_94;

DEFLABEL (lambda_68)
  CLOSURE_HEADER (LABEL_22_30);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd17.Lng) = ((Wrd14.Lng) + 2L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Rsp [1]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_8 9
#define LABEL_23_10 11
#define ENVIRONMENT_LABEL_23_3 21
#define DEBUGGING_LABEL_23_2 20
#define OBJECT_23_0 19
#define EXECUTE_CACHE_23_9 13
#define EXECUTE_CACHE_23_7 15
#define FREE_ASSIGNMENT_23_0 18
#define FREE_REFERENCES_LABEL_23_0 12
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_23_4);
      goto initialize_packageB_4;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_23_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_8)
DEFLABEL (initialize_packageB_4)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  goto lambda_1;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (lambda_9)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_23_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_23_0]);
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_6)
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_7 5
#define LABEL_24_5 7
#define LABEL_24_9 9
#define LABEL_24_11 11
#define LABEL_24_12 13
#define LABEL_24_6 15
#define LABEL_24_10 17
#define LABEL_24_18 19
#define LABEL_24_14 21
#define LABEL_24_16 23
#define TAG_24_17 10
#define LABEL_24_19 25
#define LABEL_24_20 27
#define LABEL_24_22 29
#define LABEL_24_24 31
#define LABEL_24_25 33
#define LABEL_24_26 35
#define LABEL_24_28 37
#define LABEL_24_27 39
#define LABEL_24_30 41
#define LABEL_24_31 43
#define ENVIRONMENT_LABEL_24_3 79
#define DEBUGGING_LABEL_24_2 78
#define OBJECT_24_11 77
#define OBJECT_24_10 76
#define OBJECT_24_9 75
#define OBJECT_24_8 74
#define OBJECT_24_7 73
#define OBJECT_24_6 72
#define OBJECT_24_5 71
#define OBJECT_24_4 70
#define OBJECT_24_3 69
#define OBJECT_24_2 68
#define OBJECT_24_1 67
#define OBJECT_24_0 66
#define EXECUTE_CACHE_24_32 45
#define EXECUTE_CACHE_24_29 47
#define EXECUTE_CACHE_24_23 49
#define EXECUTE_CACHE_24_21 51
#define EXECUTE_CACHE_24_15 53
#define EXECUTE_CACHE_24_13 55
#define EXECUTE_CACHE_24_8 57
#define FREE_REFERENCE_24_2 60
#define FREE_REFERENCE_24_1 61
#define FREE_REFERENCE_24_0 62
#define FREE_ASSIGNMENT_24_1 64
#define FREE_ASSIGNMENT_24_0 65
#define FREE_REFERENCES_LABEL_24_0 44
#define NUMBER_OF_LINKER_SECTIONS_24_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stream_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_24_4);
      goto initialize_conditionsB_17;

    case 1:
      current_block = (Rpc - LABEL_24_7);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_24_9);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_24_11);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_24_12);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_24_6);
      goto lambda_11;

    case 7:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_24_18);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_24_14);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_24_16);
      goto error_illegal_stream_element_28;

    case 11:
      current_block = (Rpc - LABEL_24_19);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_24_20);
      goto continuation_1;

    case 13:
      current_block = (Rpc - LABEL_24_22);
      goto continuation_3;

    case 14:
      current_block = (Rpc - LABEL_24_24);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_24_25);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_24_26);
      goto continuation_4;

    case 17:
      current_block = (Rpc - LABEL_24_28);
      goto label_24;

    case 18:
      current_block = (Rpc - LABEL_24_27);
      goto continuation_8;

    case 19:
      current_block = (Rpc - LABEL_24_30);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_24_31);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_conditionsB_26)
DEFLABEL (initialize_conditionsB_17)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_40;
  Wrd11 = Wrd15;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_24_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_36)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_35;
  Wrd21 = Wrd25;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_2]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_33;
  Wrd28 = Wrd32;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_16])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_24_1]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd11.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_24_4]);
  goto pop_return;

DEFLABEL (label_31)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_24_18])), (Wrd11.pObj), (Wrd6.Obj));

DEFLABEL (label_23)
  goto label_29;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_12])), (Wrd29.pObj));

DEFLABEL (label_22)
  (Wrd28.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_11])), (Wrd22.pObj));

DEFLABEL (label_21)
  (Wrd21.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_24_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_20)
  goto label_36;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_7])), (Wrd12.pObj));

DEFLABEL (label_19)
  (Wrd11.Obj) = Rvl;
  goto label_39;

DEFLABEL (lambda_27)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_24_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_24_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_21]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_23]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_25]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_26]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_24_8]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_26);
  (Wrd5.Obj) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_42;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd12.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_42;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_29]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_24_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_24_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_24_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_24_10]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_24_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_32]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_24_30);
  (Wrd5.Obj) = (current_block [OBJECT_24_11]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (label_42)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (error_illegal_stream_element_28)
  CLOSURE_HEADER (LABEL_24_16);

DEFLABEL (error_illegal_stream_element_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_6]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_9 9
#define LABEL_8 11
#define LABEL_11 13
#define LABEL_10 15
#define LABEL_13 17
#define LABEL_12 19
#define LABEL_15 21
#define LABEL_14 23
#define LABEL_17 25
#define LABEL_16 27
#define LABEL_18 29
#define LABEL_19 31
#define LABEL_20 33
#define ENVIRONMENT_LABEL_3 56
#define DEBUGGING_LABEL_2 55
#define PURIFICATION_ROOT 54
#define OBJECT_11 53
#define OBJECT_10 52
#define OBJECT_9 51
#define OBJECT_8 50
#define OBJECT_7 49
#define OBJECT_6 48
#define OBJECT_5 47
#define OBJECT_4 46
#define OBJECT_3 45
#define OBJECT_2 44
#define OBJECT_1 43
#define OBJECT_0 42
#define FREE_REFERENCE_3 35
#define FREE_REFERENCE_2 36
#define FREE_REFERENCE_1 37
#define FREE_REFERENCE_0 38
#define GLOBAL_EXECUTE_CACHE_5 40
#define FREE_REFERENCES_LABEL_0 34
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
stream_so_23421ddbf594004b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto label_13;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto label_14;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto label_17;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto label_18;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto expression_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_8)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_19])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_18)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_17)
  {
    static const short sections [] =
      {
	0,
	3,
	2,
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 24)
      goto label_16;
    blocks = (current_block [OBJECT_11]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_18])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_16)
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
    goto label_30;
  Wrd8 = Wrd12;

DEFLABEL (label_29)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_28;
  Wrd8 = Wrd12;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_26;
  Wrd8 = Wrd12;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_24;
  Wrd8 = Wrd12;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_22;
  Wrd8 = Wrd12;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_20;
  Wrd8 = Wrd12;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_10]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd9.pObj));

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd9.pObj));

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd9.pObj));

DEFLABEL (label_12)
  (Wrd8.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd9.pObj));

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd9.pObj));

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_stream_so_23421ddbf594004b [24] =
  {
    { "stream_so_code_1", 2, stream_so_code_1 },
    { "stream_so_code_2", 2, stream_so_code_2 },
    { "stream_so_code_3", 1, stream_so_code_3 },
    { "stream_so_code_4", 2, stream_so_code_4 },
    { "stream_so_code_5", 3, stream_so_code_5 },
    { "stream_so_code_6", 1, stream_so_code_6 },
    { "stream_so_code_7", 7, stream_so_code_7 },
    { "stream_so_code_8", 4, stream_so_code_8 },
    { "stream_so_code_9", 11, stream_so_code_9 },
    { "stream_so_code_10", 9, stream_so_code_10 },
    { "stream_so_code_11", 8, stream_so_code_11 },
    { "stream_so_code_12", 22, stream_so_code_12 },
    { "stream_so_code_13", 13, stream_so_code_13 },
    { "stream_so_code_14", 14, stream_so_code_14 },
    { "stream_so_code_15", 27, stream_so_code_15 },
    { "stream_so_code_16", 13, stream_so_code_16 },
    { "stream_so_code_17", 7, stream_so_code_17 },
    { "stream_so_code_18", 12, stream_so_code_18 },
    { "stream_so_code_19", 12, stream_so_code_19 },
    { "stream_so_code_20", 6, stream_so_code_20 },
    { "stream_so_code_21", 7, stream_so_code_21 },
    { "stream_so_code_22", 29, stream_so_code_22 },
    { "stream_so_code_23", 5, stream_so_code_23 },
    { "stream_so_code_24", 21, stream_so_code_24 }
  };

int
decl_stream_so_23421ddbf594004b (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_stream_so_23421ddbf594004b);
  return (0);
}

DECLARE_COMPILED_CODE ("stream.so", 16, decl_stream_so_23421ddbf594004b, stream_so_23421ddbf594004b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_stream_so_data_23421ddbf594004b [4267] =
  "\x6a\x34\x9e\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x1d\x28\x0d"
  "\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x83"
  "\x88\x06\x1d\x0c\x28\x0d\x23\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x84"
  "\x88\xc1\xbf\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\xb1\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x28\x0d\x1c\x23"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x0d\x1c\x08\x80\x28"
  "\xb3\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x0d\x1c"
  "\x28\x0d\x1c\x28\xb3\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\xb1\x08\x0d\x1c\x28\x0d"
  "\x1c\x28\xb3\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x1b\x28\x1b\x28\xb3\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x80\x0d\x1c\x08"
  "\x28\xb3\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\xb7\xc2\x1c\x81\xc3\x1c\x02\x80\x0c\x0d\x1c\x08\x1b\x24"
  "\x28\x0d\x28\xb3\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1b\xb7\x81\x1d\x08\x0d\x1c\x1b"
  "\x24\x28\xb3\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\xb1"
  "\xb7\x80\x0d\x08\x0d\x28\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\xb1\xb7\x1b\x1b\x02\x80\x81\x08\x0d\x1c\x1b\x24\x28\xb3\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x02\x1b\xb7\xb1\x08\x80\x28\xb3\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb7\xb1\x0d\x1c\x82\x08\x28\xb3\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x80\xb1\xb7\x0d"
  "\x1c\x81\x08\x28\xb3\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f\xb1\xb7"
  "\x0f\x80\x0c\x08\x0d\x1c\x1d\x28\x0d\x28\x0d\x28\xb3\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb7\x1b\x08"
  "\x1b\x02\x80\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\xb1\x0d\x1c"
  "\x80\x08\x28\xb3\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x85\x83\xb7\x82\x1b\x02\x80\x28\x0d\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x0d\x1c\x25\x28\x0d\x28\x0d\xbf\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x0c\x0d"
  "\xb8\x0c\x0d\x1c\x0c\x0c\x0d\x1c\x1d\x0c\x0d\x1b\xb0\x1b\x08\x8b"
  "\x0d\x08\x0d\x1c\x1b\x25\x0d\x0d\x1b\x24\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1e\x1e\xb1"
  "\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x17\x0d\x1b\x1b\x0d\xb7\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x17\x0d\x0d\x0d\x0d"
  "\x0d\xc3\x0d\x1c\x0d\x1b\x1b\xb4\x1b\xb3\x9d\x08\x1b\x2a\x1b\x2a"
  "\xb6\x2a\xb5\x2a\xb2\x2a\x9d\x28\x0d\x26\x0d\x1b\x1b\x1b\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x74\x72"
  "\x65\x61\x6d\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x63\x64"
  "\x72\x03\x09\x70\x72\x6f\x6d\x69\x73\x65\x3f\x02\x12\x06\x81\x83"
  "\x02\x11\x04\x83\x04\x05\x0c\x02\x02\x03\x0d\x73\x74\x72\x65\x61"
  "\x6d\x2d\x70\x61\x69\x72\x3f\x04\x16\x65\x72\x72\x6f\x72\x3a\x6e"
  "\x6f\x74\x2d\x73\x74\x72\x65\x61\x6d\x2d\x70\x61\x69\x72\x03\x14"
  "\x06\x81\x85\x02\x13\x04\x84\x04\x05\x0e\x02\x08\x0c\x73\x74\x72"
  "\x65\x61\x6d\x20\x70\x61\x69\x72\x05\x1a\x65\x72\x72\x6f\x72\x3a"
  "\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d"
  "\x65\x6e\x74\x02\x15\x04\x84\x04\x03\x0c\x02\x04\x63\x61\x72\x0b"
  "\x73\x74\x72\x65\x61\x6d\x2d\x63\x61\x72\x09\x04\x16\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x2d\x73\x74\x72\x65\x61\x6d\x2d\x70\x61"
  "\x69\x72\x0a\x02\x17\x06\x81\x83\x02\x16\x04\x83\x04\x05\x0d\x0b"
  "\x02\x0b\x73\x74\x72\x65\x61\x6d\x2d\x63\x64\x72\x0c\x04\x0a\x03"
  "\x06\x66\x6f\x72\x63\x65\x0d\x03\x1a\x08\x81\x83\x02\x19\x06\x81"
  "\x83\x02\x18\x04\x83\x04\x07\x11\x0e\x02\x03\x0d\x6c\x69\x73\x74"
  "\x2d\x3e\x73\x74\x72\x65\x61\x6d\x0f\x02\x1b\x04\xff\x03\x03\x10"
  "\x02\x08\x0e\x73\x74\x72\x65\x61\x6d\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x11\x03\x05\x1d\x65\x72\x72\x6f\x72\x3a\x69\x6c\x6c\x65\x67\x61"
  "\x6c\x2d\x73\x74\x72\x65\x61\x6d\x2d\x65\x6c\x65\x6d\x65\x6e\x74"
  "\x12\x03\x0d\x04\x22\x10\x81\x85\x02\x21\x0e\x81\x85\x02\x20\x0c"
  "\x81\x87\x02\x1f\x0a\x81\x85\x02\x1e\x08\x81\x85\x02\x1d\x06\x81"
  "\x85\x02\x1c\x04\x83\x04\x0f\x1d\x13\x02\x09\x0b\x73\x74\x72\x65"
  "\x61\x6d\x2d\x72\x65\x66\x14\x04\x0c\x73\x74\x72\x65\x61\x6d\x2d"
  "\x74\x61\x69\x6c\x15\x03\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61"
  "\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x16\x04\x26\x0a\x81\x87\x02\x25\x08\x81\x87\x02\x24\x06\x81\x85"
  "\x02\x23\x04\x84\x06\x09\x15\x17\x02\x0a\x0c\x73\x74\x72\x65\x61"
  "\x6d\x2d\x68\x65\x61\x64\x18\x04\x24\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61"
  "\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x19\x03\x04\x16"
  "\x03\x0d\x05\x31\x18\x81\x89\x02\x30\x16\x81\x87\x02\x2f\x14\x81"
  "\x85\x02\x2e\x12\x81\x8b\x02\x2d\x10\x81\x87\x02\x2c\x0e\x81\x85"
  "\x02\x2b\x0c\x81\x85\x02\x2a\x0a\x81\x85\x02\x29\x08\x81\x85\x02"
  "\x28\x06\x81\x85\x02\x27\x04\x84\x06\x17\x27\x1a\x02\x0b\x15\x04"
  "\x19\x03\x04\x16\x03\x0d\x05\x3a\x14\x81\x85\x02\x39\x12\x81\x85"
  "\x02\x38\x10\x81\x87\x02\x37\x0e\x81\x85\x02\x36\x0c\x81\x85\x02"
  "\x35\x0a\x81\x85\x02\x34\x08\x81\x85\x02\x33\x06\x81\x85\x02\x32"
  "\x04\x84\x06\x13\x21\x19\x02\x0c\x11\x73\x74\x72\x65\x61\x6d\x2d"
  "\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x1b\x03\x04\x16\x05\x12\x03"
  "\x0d\x05\x42\x12\x81\x85\x02\x41\x10\x81\x85\x02\x40\x0e\x81\x83"
  "\x02\x3f\x0c\x81\x85\x02\x3e\x0a\x81\x83\x02\x3d\x08\x81\x83\x02"
  "\x3c\x06\x81\x83\x02\x3b\x04\x83\x04\x11\x21\x16\x02\x0d\x06\x61"
  "\x70\x70\x6c\x79\x1c\x11\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69"
  "\x72\x2d\x63\x6f\x6e\x73\x1d\x14\x21\x55\x6e\x6b\x6e\x6f\x77\x6e"
  "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x20\x74\x6f\x20\x53\x54"
  "\x52\x45\x41\x4d\x2d\x4d\x41\x50\x2e\x0b\x73\x74\x72\x65\x61\x6d"
  "\x2d\x6d\x61\x70\x1e\x0d\x02\x03\x0b\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x3f\x03\x04\x0e\x73\x70\x6c\x69\x74\x2d\x73\x74\x72\x65"
  "\x61\x6d\x73\x1f\x03\x06\x65\x72\x72\x6f\x72\x04\x1e\x05\x12\x04"
  "\x04\x6d\x61\x70\x20\x03\x0d\x09\x58\x2e\x81\x85\x02\x57\x2c\x81"
  "\x87\x02\x56\x2a\x81\x85\x02\x55\x28\x81\x89\x02\x54\x26\x81\x87"
  "\x02\x53\x24\x81\x83\x02\x52\x22\x81\x89\x02\x51\x20\x81\x85\x02"
  "\x50\x1e\x81\x89\x02\x4f\x1c\x81\x83\x02\x4e\x1a\x81\x87\x02\x4d"
  "\x18\x81\x85\x02\x4c\x16\x81\x85\x02\x4b\x14\x81\x87\x02\x4a\x12"
  "\x81\x87\x02\x49\x10\x81\x87\x02\x48\x0e\x81\x87\x02\x47\x0c\x81"
  "\x85\x02\x46\x0a\x81\x85\x02\x45\x08\x81\x87\x02\x44\x06\x81\x87"
  "\x02\x43\x04\xfd\x07\x2d\x4d\x21\x02\x0e\x1c\x02\x10\x73\x74\x72"
  "\x65\x61\x6d\x2d\x66\x6f\x72\x2d\x65\x61\x63\x68\x22\x0d\x02\x03"
  "\x04\x1f\x05\x12\x03\x0d\x04\x20\x06\x65\x1c\x81\x87\x02\x64\x1a"
  "\x81\x89\x02\x63\x18\x81\x8b\x02\x62\x16\x81\x87\x02\x61\x14\x81"
  "\x8b\x02\x60\x12\x81\x89\x02\x5f\x10\x81\x87\x02\x5e\x0e\x81\x87"
  "\x02\x5d\x0c\x81\x8b\x02\x5c\x0a\x81\x89\x02\x5b\x08\x81\x85\x02"
  "\x5a\x06\x81\x89\x02\x59\x04\xfd\x07\x1b\x32\x23\x02\x0f\x09\x73"
  "\x65\x74\x2d\x63\x64\x72\x21\x05\x63\x61\x72\x73\x05\x63\x64\x72"
  "\x73\x03\x05\x12\x03\x73\x1e\x83\x04\x72\x1c\x81\x95\x02\x71\x1a"
  "\x81\x95\x02\x70\x18\x81\x95\x02\x6f\x16\x81\x95\x02\x6e\x14\x81"
  "\x93\x02\x6d\x12\x81\x93\x02\x6c\x10\x81\x93\x02\x6b\x0e\x81\x85"
  "\x02\x6a\x0c\x81\x91\x02\x69\x0a\x81\x91\x02\x68\x08\x81\x91\x02"
  "\x67\x06\x81\x91\x02\x66\x04\x84\x06\x1d\x2c\x24\x02\x10\x0e\x73"
  "\x74\x72\x65\x61\x6d\x2d\x61\x70\x70\x65\x6e\x64\x25\x1c\x1d\x14"
  "\x12\x73\x74\x72\x65\x61\x6d\x2d\x61\x70\x70\x65\x6e\x64\x2d\x6d"
  "\x61\x70\x1c\x0d\x02\x03\x04\x1f\x05\x12\x03\x0d\x04\x20\x06\x8e"
  "\x01\x38\x81\x85\x02\x8d\x01\x36\x81\x87\x02\x8c\x01\x34\x81\x83"
  "\x02\x8b\x01\x32\x81\x87\x02\x8a\x01\x30\x81\x85\x02\x89\x01\x2e"
  "\x81\x85\x02\x88\x01\x2c\x81\x85\x02\x87\x01\x2a\x81\x85\x02\x86"
  "\x01\x28\x81\x85\x02\x85\x01\x26\x81\x85\x02\x84\x01\x24\x81\x89"
  "\x02\x83\x01\x22\x81\x83\x02\x82\x01\x20\x81\x87\x02\x81\x01\x1e"
  "\x81\x85\x02\x80\x01\x1c\x81\x87\x02\x7f\x1a\x81\x87\x02\x7e\x18"
  "\x81\x87\x02\x7d\x16\x81\x83\x02\x7c\x14\x81\x89\x02\x7b\x12\x81"
  "\x85\x02\x7a\x10\x81\x87\x02\x79\x0e\x81\x87\x02\x78\x0c\x81\x85"
  "\x02\x77\x0a\x81\x85\x02\x76\x08\x81\x85\x02\x75\x06\x81\x85\x02"
  "\x74\x04\xfd\x07\x37\x51\x20\x02\x11\x1d\x14\x25\x03\x05\x12\x03"
  "\x0d\x04\x9b\x01\x1c\x81\x85\x02\x9a\x01\x1a\x81\x87\x02\x99\x01"
  "\x18\x81\x83\x02\x98\x01\x16\x81\x87\x02\x97\x01\x14\x81\x85\x02"
  "\x96\x01\x12\x81\x85\x02\x95\x01\x10\x81\x85\x02\x94\x01\x0e\x81"
  "\x85\x02\x93\x01\x0c\x81\x85\x02\x92\x01\x0a\x81\x85\x02\x91\x01"
  "\x08\x81\x85\x02\x90\x01\x06\x81\x85\x02\x8f\x01\x04\xff\x03\x1b"
  "\x2c\x26\x02\x12\x12\x73\x74\x72\x65\x61\x6d\x2d\x61\x63\x63\x75"
  "\x6d\x75\x6c\x61\x74\x65\x27\x03\x05\x12\x03\x0d\x05\x27\x05\xa2"
  "\x01\x10\x81\x89\x02\xa1\x01\x0e\x81\x89\x02\xa0\x01\x0c\x81\x87"
  "\x02\x9f\x01\x0a\x81\x8b\x02\x9e\x01\x08\x81\x87\x02\x9d\x01\x06"
  "\x81\x87\x02\x9c\x01\x04\x85\x08\x0f\x20\x28\x02\x13\x1d\x14\x0e"
  "\x73\x74\x72\x65\x61\x6d\x2d\x66\x69\x6c\x74\x65\x72\x29\x03\x05"
  "\x12\x03\x0d\x04\x29\x05\xae\x01\x1a\x81\x85\x02\xad\x01\x18\x81"
  "\x85\x02\xac\x01\x16\x81\x87\x02\xab\x01\x14\x81\x83\x02\xaa\x01"
  "\x12\x81\x87\x02\xa9\x01\x10\x81\x85\x02\xa8\x01\x0e\x81\x87\x02"
  "\xa7\x01\x0c\x81\x85\x02\xa6\x01\x0a\x81\x87\x02\xa5\x01\x08\x81"
  "\x85\x02\xa4\x01\x06\x81\x85\x02\xa3\x01\x04\x84\x06\x19\x2d\x2a"
  "\x02\x14\x01\x21\x01\x7e\x01\x7c\x03\x7b\x7d\x0d\x73\x74\x72\x65"
  "\x61\x6d\x2d\x77\x72\x69\x74\x65\x2b\x08\x02\x14\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x04"
  "\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6f\x75\x74\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x03\x04\x0d\x77\x72\x69\x74\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2c\x05\x12\x04\x0b\x77\x72\x69\x74\x65\x2d"
  "\x63\x68\x61\x72\x04\x06\x77\x72\x69\x74\x65\x2d\x03\x0d\x04\x22"
  "\x0a\xba\x01\x1a\x81\x85\x02\xb9\x01\x18\x81\x85\x02\xb8\x01\x16"
  "\x81\x89\x02\xb7\x01\x14\x81\x87\x02\xb6\x01\x12\x81\x8b\x02\xb5"
  "\x01\x10\x81\x87\x02\xb4\x01\x0e\x81\x8b\x02\xb3\x01\x0c\x81\x87"
  "\x02\xb2\x01\x0a\x81\x87\x02\xb1\x01\x08\x81\x87\x02\xb0\x01\x06"
  "\x81\x85\x02\xaf\x01\x04\x84\x04\x19\x39\x2e\x02\x15\x0f\x1d\x14"
  "\x04\x0f\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x6c\x69\x73\x74"
  "\x03\x0f\x03\xc0\x01\x0e\x81\x83\x02\xbf\x01\x0c\x81\x83\x02\xbe"
  "\x01\x0a\x81\x85\x02\xbd\x01\x08\x81\x83\x02\xbc\x01\x06\x83\x04"
  "\xbb\x01\x04\x81\x83\x02\x0d\x1c\x2f\x02\x16\x0d\x73\x74\x72\x65"
  "\x61\x6d\x2d\x3e\x6c\x69\x73\x74\x30\x03\x05\x12\x03\x0d\x03\x30"
  "\x05\xc7\x01\x10\x81\x85\x02\xc6\x01\x0e\x81\x85\x02\xc5\x01\x0c"
  "\x81\x83\x02\xc4\x01\x0a\x81\x87\x02\xc3\x01\x08\x81\x83\x02\xc2"
  "\x01\x06\x81\x83\x02\xc1\x01\x04\x83\x04\x0f\x20\x31\x02\x17\x1d"
  "\x14\x02\x0f\x6c\x61\x72\x67\x65\x73\x74\x2d\x66\x69\x78\x6e\x75"
  "\x6d\x03\x07\x73\x71\x75\x61\x72\x65\x03\x0d\x04\xe4\x01\x3c\x81"
  "\x87\x02\xe3\x01\x3a\x81\x83\x02\xe2\x01\x38\x81\x87\x02\xe1\x01"
  "\x36\x81\x87\x02\xe0\x01\x34\x81\x85\x02\xdf\x01\x32\x81\x83\x02"
  "\xde\x01\x30\x81\x87\x02\xdd\x01\x2e\x81\x87\x02\xdc\x01\x2c\x81"
  "\x89\x02\xdb\x01\x2a\x81\x87\x02\xda\x01\x28\x81\x87\x02\xd9\x01"
  "\x26\x81\x89\x02\xd8\x01\x24\x81\x87\x02\xd7\x01\x22\x81\x89\x02"
  "\xd6\x01\x20\x81\x87\x02\xd5\x01\x1e\x81\x87\x02\xd4\x01\x1c\x81"
  "\x89\x02\xd3\x01\x1a\x81\x87\x02\xd2\x01\x18\x81\x87\x02\xd1\x01"
  "\x16\x81\x83\x02\xd0\x01\x14\x81\x8b\x02\xcf\x01\x12\x81\x85\x02"
  "\xce\x01\x10\x81\x89\x02\xcd\x01\x0e\x81\x87\x02\xcc\x01\x0c\x81"
  "\x89\x02\xcb\x01\x0a\x81\x85\x02\xca\x01\x08\x82\x02\xc9\x01\x06"
  "\x81\x81\x02\xc8\x01\x04\x82\x02\x3b\x4d\x1d\x02\x18\x02\x15\x70"
  "\x72\x69\x6d\x65\x2d\x6e\x75\x6d\x62\x65\x72\x73\x2d\x73\x74\x72"
  "\x65\x61\x6d\x0d\x02\x03\x19\x61\x64\x64\x2d\x73\x65\x63\x6f\x6e"
  "\x64\x61\x72\x79\x2d\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x21\x02"
  "\x1a\x6d\x61\x6b\x65\x2d\x70\x72\x69\x6d\x65\x2d\x6e\x75\x6d\x62"
  "\x65\x72\x73\x2d\x73\x74\x72\x65\x61\x6d\x03\xe9\x01\x0c\x81\x81"
  "\x02\xe8\x01\x0a\x81\x81\x02\xe7\x01\x08\x82\x02\xe6\x01\x06\x81"
  "\x81\x02\xe5\x01\x04\x82\x02\x0b\x16\x02\x19\x13\x2c\x20\x69\x73"
  "\x20\x6e\x6f\x74\x20\x61\x20\x73\x74\x72\x65\x61\x6d\x2e\x09\x6f"
  "\x70\x65\x72\x61\x74\x6f\x72\x0e\x20\x61\x72\x67\x75\x6d\x65\x6e"
  "\x74\x20\x74\x6f\x20\x08\x6f\x70\x65\x72\x61\x6e\x64\x32\x11\x2c"
  "\x20\x70\x61\x73\x73\x65\x64\x20\x61\x73\x20\x74\x68\x65\x20\x07"
  "\x73\x74\x72\x65\x61\x6d\x06\x64\x61\x74\x75\x6d\x33\x02\x0c\x54"
  "\x68\x65\x20\x6f\x62\x6a\x65\x63\x74\x20\x05\x74\x79\x70\x65\x33"
  "\x32\x17\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x73\x74\x72\x65\x61\x6d"
  "\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x26\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6c\x6c\x65\x67\x61\x6c\x2d"
  "\x73\x74\x72\x65\x61\x6d\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x33\x12"
  "\x03\x23\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x17\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x65\x72"
  "\x72\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65\x72\x33\x04\x06\x14\x6d"
  "\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x05\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x73\x69"
  "\x67\x6e\x61\x6c\x6c\x65\x72\x04\x2c\x04\x11\x61\x63\x63\x65\x73"
  "\x73\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x04\x2d\x03\x16\x6f"
  "\x72\x64\x69\x6e\x61\x6c\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x73\x74"
  "\x72\x69\x6e\x67\x04\x0f\x77\x72\x69\x74\x65\x2d\x6f\x70\x65\x72"
  "\x61\x74\x6f\x72\x08\xfe\x01\x2c\x81\x89\x02\xfd\x01\x2a\x81\x85"
  "\x02\xfc\x01\x28\x81\x85\x02\xfb\x01\x26\x81\x8b\x02\xfa\x01\x24"
  "\x81\x8b\x02\xf9\x01\x22\x81\x89\x02\xf8\x01\x20\x81\x85\x02\xf7"
  "\x01\x1e\x81\x85\x02\xf6\x01\x1c\x81\x89\x02\xf5\x01\x1a\x81\x85"
  "\x02\xf4\x01\x18\x81\x89\x02\xf3\x01\x16\x81\x85\x02\xf2\x01\x14"
  "\x81\x81\x02\xf1\x01\x12\x81\x81\x02\xf0\x01\x10\x84\x06\xef\x01"
  "\x0e\x81\x87\x02\xee\x01\x0c\x81\x83\x02\xed\x01\x0a\x81\x81\x02"
  "\xec\x01\x08\x81\x81\x02\xeb\x01\x06\x81\x87\x02\xea\x01\x04\x82"
  "\x02\x2b\x50\x32\x19\x2d\x2d\x32\x04\x04\x1d\x04\x31\x04\x2f\x06"
  "\x2e\x04\x2a\x04\x28\x04\x26\x04\x20\x04\x24\x04\x23\x04\x21\x04"
  "\x16\x04\x19\x04\x1a\x04\x17\x04\x13\x04\x10\x04\x17\x17\x69\x6e"
  "\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x73\x21\x12\x33\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a"
  "\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x0d\x30\x0f\x2b\x29\x27"
  "\x25\x1c\x1f\x22\x1e\x1b\x15\x18\x14\x11\x07\x73\x74\x72\x65\x61"
  "\x6d\x17\x05\x74\x61\x69\x6c\x05\x68\x65\x61\x64\x0c\x73\x74\x72"
  "\x65\x61\x6d\x2d\x72\x65\x73\x74\x0d\x73\x74\x72\x65\x61\x6d\x2d"
  "\x66\x69\x72\x73\x74\x0e\x65\x6d\x70\x74\x79\x2d\x73\x74\x72\x65"
  "\x61\x6d\x3f\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x0d\x73\x74\x72\x65\x61\x6d\x2d\x6e\x75\x6c\x6c"
  "\x3f\x33\x11\x74\x68\x65\x2d\x65\x6d\x70\x74\x79\x2d\x73\x74\x72"
  "\x65\x61\x6d\x0c\x09\x0a\x0e\x04\x0b\x04\x04\x04\x04\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x06"
  "\x6e\x75\x6c\x6c\x3f\x33\x09\x0c\x05\x10\x22\x80\x80\x04\x0f\x20"
  "\x81\x81\x02\x0e\x1e\x81\x81\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81"
  "\x85\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x83"
  "\x02\x08\x12\x81\x85\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02"
  "\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x83\x02\x02"
  "\x06\x81\x85\x02\x01\x04\x81\x83\x02\x21\x39";

SCHEME_OBJECT *
stream_so_data_23421ddbf594004b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_stream_so_data_23421ddbf594004b [0]))), (sizeof (prog_stream_so_data_23421ddbf594004b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_20]));
}

DECLARE_COMPILED_DATA_NS ("stream.so", stream_so_data_23421ddbf594004b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("stream.so", "fb09dfc4183bb971")
