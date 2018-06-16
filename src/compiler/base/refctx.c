/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:12-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  Rvl = (current_block [OBJECT_1_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_5 7
#define LABEL_2_8 9
#define ENVIRONMENT_LABEL_2_3 18
#define DEBUGGING_LABEL_2_2 17
#define OBJECT_2_0 16
#define FREE_REFERENCE_2_1 11
#define FREE_REFERENCE_2_0 12
#define GLOBAL_EXECUTE_CACHE_2_7 14
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_2_4);
      goto make_reference_context_1;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_reference_context_6)
DEFLABEL (make_reference_context_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_10;
  Wrd9 = Wrd13;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd19.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd20.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd15.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd15.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_8])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_6])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
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
refctx_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto reference_context_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_context_block_3)
DEFLABEL (reference_context_block_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

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

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 7
#define DEBUGGING_LABEL_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto reference_context_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_context_offset_3)
DEFLABEL (reference_context_offset_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

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

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 7
#define DEBUGGING_LABEL_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto reference_context_adjacent_parents_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_context_adjacent_parents_3)
DEFLABEL (reference_context_adjacent_parents_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

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

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define OBJECT_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto set_reference_context_offsetB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_reference_context_offsetB_3)
DEFLABEL (set_reference_context_offsetB_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 8
#define DEBUGGING_LABEL_7_2 7
#define OBJECT_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto set_reference_context_adjacent_parentsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_reference_context_adjacent_parentsB_3)
DEFLABEL (set_reference_context_adjacent_parentsB_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_7_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_8 11
#define ENVIRONMENT_LABEL_8_3 19
#define DEBUGGING_LABEL_8_2 18
#define OBJECT_8_3 17
#define OBJECT_8_2 16
#define OBJECT_8_1 15
#define OBJECT_8_0 14
#define FREE_REFERENCE_8_0 13
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd52;
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
      current_block = (Rpc - LABEL_8_4);
      goto reference_contextP_4;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_contextP_11)
DEFLABEL (reference_contextP_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  if (! ((Wrd6.uLng) == 10))
    goto label_22;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_21)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_20;
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd52.Lng) == 0)
    goto label_13;

DEFLABEL (label_19)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_18;
  Wrd26 = Wrd30;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_16;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_16;
  (Wrd32.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_15)
  (Wrd48.Obj) = (* (Rsp++));
  if (! ((Wrd32.Obj) == (Wrd48.Obj)))
    goto label_13;
  Rvl = (current_block [OBJECT_8_3]);
  goto label_12;

DEFLABEL (label_16)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_8_1]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (label_9)
  (Wrd32.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_7])), (Wrd27.pObj));

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_13;

DEFLABEL (label_22)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 10
#define DEBUGGING_LABEL_9_2 9
#define OBJECT_9_2 8
#define OBJECT_9_1 7
#define OBJECT_9_0 6
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_9_4);
      goto reference_context_procedure_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_context_procedure_5)
DEFLABEL (reference_context_procedure_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_9_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_9_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 12
#define DEBUGGING_LABEL_10_2 11
#define OBJECT_10_1 10
#define OBJECT_10_0 9
#define EXECUTE_CACHE_10_6 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_10_4);
      goto reference_context_adjacent_parentP_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_context_adjacent_parentP_5)
DEFLABEL (reference_context_adjacent_parentP_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_6)
  (Wrd21.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd21.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define ENVIRONMENT_LABEL_11_3 16
#define DEBUGGING_LABEL_11_2 15
#define OBJECT_11_3 14
#define OBJECT_11_2 13
#define OBJECT_11_1 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_7 9
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      goto add_reference_context_adjacent_parentsB_2;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_reference_context_adjacent_parentsB_6)
DEFLABEL (add_reference_context_adjacent_parentsB_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_10;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_10;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_9)
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 3);

DEFLABEL (label_8)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_7;
  ((Wrd15.pObj) [4]) = Rvl;
  Rvl = (current_block [OBJECT_11_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_11_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define LABEL_12_10 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define LABEL_12_12 13
#define LABEL_12_16 15
#define LABEL_12_15 17
#define ENVIRONMENT_LABEL_12_3 33
#define DEBUGGING_LABEL_12_2 32
#define OBJECT_12_2 31
#define OBJECT_12_1 30
#define OBJECT_12_0 29
#define EXECUTE_CACHE_12_17 19
#define EXECUTE_CACHE_12_14 21
#define EXECUTE_CACHE_12_13 23
#define EXECUTE_CACHE_12_11 25
#define EXECUTE_CACHE_12_7 27
#define FREE_REFERENCES_LABEL_12_0 18
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_12_4);
      goto initialize_reference_contextsB_7;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_12_10);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_12_12);
      goto lambda_5;

    case 6:
      current_block = (Rpc - LABEL_12_16);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_12_15);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_reference_contextsB_12)
DEFLABEL (initialize_reference_contextsB_7)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_16;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd23.Lng))))
    goto label_16;
  (Wrd15.Obj) = ((Wrd21.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (label_16)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [3]);
  (Wrd31.Obj) = (current_block [OBJECT_12_0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (lambda_14)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_12_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_18;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_18;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_15);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (label_18)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_12_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_5 3
#define LABEL_13_4 5
#define ENVIRONMENT_LABEL_13_3 13
#define DEBUGGING_LABEL_13_2 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_7 7
#define EXECUTE_CACHE_13_6 9
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_13_4);
      goto initialize_contexts_next_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_contexts_next_4)
DEFLABEL (initialize_contexts_next_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_6;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_13_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_8 9
#define LABEL_14_11 11
#define LABEL_14_14 13
#define LABEL_14_17 15
#define LABEL_14_20 17
#define LABEL_14_23 19
#define LABEL_14_26 21
#define LABEL_14_27 23
#define LABEL_14_29 25
#define LABEL_14_31 27
#define LABEL_14_32 29
#define LABEL_14_37 31
#define LABEL_14_28 33
#define LABEL_14_24 35
#define LABEL_14_40 37
#define LABEL_14_21 39
#define LABEL_14_42 41
#define LABEL_14_18 43
#define LABEL_14_44 45
#define LABEL_14_15 47
#define LABEL_14_46 49
#define LABEL_14_12 51
#define LABEL_14_48 53
#define LABEL_14_9 55
#define LABEL_14_50 57
#define LABEL_14_35 59
#define LABEL_14_52 61
#define LABEL_14_36 63
#define LABEL_14_39 65
#define LABEL_14_41 67
#define LABEL_14_43 69
#define LABEL_14_45 71
#define LABEL_14_47 73
#define LABEL_14_49 75
#define LABEL_14_51 77
#define ENVIRONMENT_LABEL_14_3 117
#define DEBUGGING_LABEL_14_2 116
#define OBJECT_14_4 115
#define OBJECT_14_3 114
#define OBJECT_14_2 113
#define OBJECT_14_1 112
#define OBJECT_14_0 111
#define EXECUTE_CACHE_14_38 79
#define EXECUTE_CACHE_14_34 81
#define EXECUTE_CACHE_14_33 83
#define EXECUTE_CACHE_14_30 85
#define EXECUTE_CACHE_14_25 87
#define EXECUTE_CACHE_14_22 89
#define EXECUTE_CACHE_14_19 91
#define EXECUTE_CACHE_14_16 93
#define EXECUTE_CACHE_14_13 95
#define EXECUTE_CACHE_14_10 97
#define EXECUTE_CACHE_14_6 99
#define FREE_REFERENCE_14_8 102
#define FREE_REFERENCE_14_7 103
#define FREE_REFERENCE_14_6 104
#define FREE_REFERENCE_14_5 105
#define FREE_REFERENCE_14_4 106
#define FREE_REFERENCE_14_3 107
#define FREE_REFERENCE_14_2 108
#define FREE_REFERENCE_14_1 109
#define FREE_REFERENCE_14_0 110
#define FREE_REFERENCES_LABEL_14_0 78
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd104;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd101;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_14_4);
      goto initialize_contexts_node_38;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto label_40;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_41;

    case 4:
      current_block = (Rpc - LABEL_14_11);
      goto label_42;

    case 5:
      current_block = (Rpc - LABEL_14_14);
      goto label_43;

    case 6:
      current_block = (Rpc - LABEL_14_17);
      goto label_44;

    case 7:
      current_block = (Rpc - LABEL_14_20);
      goto label_45;

    case 8:
      current_block = (Rpc - LABEL_14_23);
      goto label_46;

    case 9:
      current_block = (Rpc - LABEL_14_26);
      goto label_47;

    case 10:
      current_block = (Rpc - LABEL_14_27);
      goto label_48;

    case 11:
      current_block = (Rpc - LABEL_14_29);
      goto label_50;

    case 12:
      current_block = (Rpc - LABEL_14_31);
      goto label_49;

    case 13:
      current_block = (Rpc - LABEL_14_32);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_14_37);
      goto label_51;

    case 15:
      current_block = (Rpc - LABEL_14_28);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_14_24);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_14_40);
      goto label_52;

    case 18:
      current_block = (Rpc - LABEL_14_21);
      goto continuation_22;

    case 19:
      current_block = (Rpc - LABEL_14_42);
      goto label_53;

    case 20:
      current_block = (Rpc - LABEL_14_18);
      goto continuation_25;

    case 21:
      current_block = (Rpc - LABEL_14_44);
      goto label_54;

    case 22:
      current_block = (Rpc - LABEL_14_15);
      goto continuation_28;

    case 23:
      current_block = (Rpc - LABEL_14_46);
      goto label_55;

    case 24:
      current_block = (Rpc - LABEL_14_12);
      goto continuation_31;

    case 25:
      current_block = (Rpc - LABEL_14_48);
      goto label_56;

    case 26:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_34;

    case 27:
      current_block = (Rpc - LABEL_14_50);
      goto label_57;

    case 28:
      current_block = (Rpc - LABEL_14_35);
      goto continuation_14;

    case 29:
      current_block = (Rpc - LABEL_14_52);
      goto label_58;

    case 30:
      current_block = (Rpc - LABEL_14_36);
      goto continuation_13;

    case 31:
      current_block = (Rpc - LABEL_14_39);
      goto continuation_21;

    case 32:
      current_block = (Rpc - LABEL_14_41);
      goto continuation_24;

    case 33:
      current_block = (Rpc - LABEL_14_43);
      goto continuation_27;

    case 34:
      current_block = (Rpc - LABEL_14_45);
      goto continuation_30;

    case 35:
      current_block = (Rpc - LABEL_14_47);
      goto continuation_33;

    case 36:
      current_block = (Rpc - LABEL_14_49);
      goto continuation_36;

    case 37:
      current_block = (Rpc - LABEL_14_51);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_contexts_node_60)
DEFLABEL (initialize_contexts_node_38)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_106;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_106;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_105)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_104;
  Wrd22 = Wrd26;

DEFLABEL (label_103)
  (Wrd28.Obj) = (Rsp [0]);
  if (! ((Wrd28.Obj) == (Wrd22.Obj)))
    goto label_63;
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (Wrd141.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd141.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_62;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_62;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_14_49);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (label_62)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_14_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_50]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_63)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_102;
  Wrd30 = Wrd34;

DEFLABEL (label_101)
  (Wrd36.Obj) = (Rsp [0]);
  if (! ((Wrd36.Obj) == (Wrd30.Obj)))
    goto label_66;
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd137.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_13]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_14_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_65;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_65;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_14_47);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (label_65)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_14_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_48]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_66)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_2]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_100;
  Wrd38 = Wrd42;

DEFLABEL (label_99)
  (Wrd44.Obj) = (Rsp [0]);
  if (! ((Wrd44.Obj) == (Wrd38.Obj)))
    goto label_69;
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (Wrd133.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd133.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_14_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_68;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_68;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_67)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_14_45);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (label_68)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_14_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_46]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_69)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_3]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_98;
  Wrd46 = Wrd50;

DEFLABEL (label_97)
  (Wrd52.Obj) = (Rsp [0]);
  if (! ((Wrd52.Obj) == (Wrd46.Obj)))
    goto label_72;
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd129.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd129.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_19]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_14_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_71;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_71;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_70)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_14_43);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (label_71)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_14_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_44]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_4]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_96;
  Wrd54 = Wrd58;

DEFLABEL (label_95)
  (Wrd60.Obj) = (Rsp [0]);
  if (! ((Wrd60.Obj) == (Wrd54.Obj)))
    goto label_75;
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_21]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd125.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd125.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_22]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_14_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_74;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_74;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_73)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_14_41);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (label_74)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_14_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_42]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_75)
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_5]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_94;
  Wrd62 = Wrd66;

DEFLABEL (label_93)
  (Wrd68.Obj) = (Rsp [0]);
  if (! ((Wrd68.Obj) == (Wrd62.Obj)))
    goto label_78;
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_24]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd121.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_14_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_77;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_77;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_76)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_14_39);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (label_77)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_14_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_40]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_78)
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_6]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_92;
  Wrd70 = Wrd74;

DEFLABEL (label_91)
  (Wrd76.Obj) = (Rsp [0]);
  if ((Wrd76.Obj) == (Wrd70.Obj))
    goto label_86;
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_7]));
  (Wrd82.Obj) = ((Wrd79.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_90;
  Wrd78 = Wrd82;

DEFLABEL (label_89)
  (Wrd84.Obj) = (Rsp [0]);
  if ((Wrd84.Obj) == (Wrd78.Obj))
    goto label_86;
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_8]));
  (Wrd90.Obj) = ((Wrd87.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_85;
  Wrd86 = Wrd90;

DEFLABEL (label_84)
  (Wrd92.Obj) = (Rsp [0]);
  if ((Wrd92.Obj) == (Wrd86.Obj))
    goto label_79;
  (Rsp [1]) = (Wrd92.Obj);
  (Wrd94.Obj) = (current_block [OBJECT_14_3]);
  (Rsp [0]) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_34]));

DEFLABEL (label_79)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_32]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd98.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd98.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_33]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_83;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd19.Lng))))
    goto label_83;
  (Wrd13.Obj) = ((Wrd17.pObj) [7]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_82)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_14_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_14_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_81;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_81;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_80)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_14_51);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (label_81)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_14_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_52]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_14_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_37]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_31])), (Wrd87.pObj));

DEFLABEL (label_49)
  (Wrd86.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_86)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_28]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd111.Obj) = (Rsp [2]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 10))
    goto label_88;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd109.Obj) = ((Wrd108.pObj) [0]);
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd110.Lng))))
    goto label_88;
  (Wrd104.Obj) = ((Wrd108.pObj) [7]);
  (* (--Rsp)) = (Wrd104.Obj);

DEFLABEL (label_87)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_14_28);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_38]));

DEFLABEL (label_88)
  (Wrd113.Obj) = (Rsp [2]);
  (Wrd114.Obj) = (current_block [OBJECT_14_2]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_29]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_27])), (Wrd79.pObj));

DEFLABEL (label_48)
  (Wrd78.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_26])), (Wrd71.pObj));

DEFLABEL (label_47)
  (Wrd70.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_23])), (Wrd63.pObj));

DEFLABEL (label_46)
  (Wrd62.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_20])), (Wrd55.pObj));

DEFLABEL (label_45)
  (Wrd54.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_17])), (Wrd47.pObj));

DEFLABEL (label_44)
  (Wrd46.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_14])), (Wrd39.pObj));

DEFLABEL (label_43)
  (Wrd38.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_11])), (Wrd31.pObj));

DEFLABEL (label_42)
  (Wrd30.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_8])), (Wrd23.pObj));

DEFLABEL (label_41)
  (Wrd22.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_14_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_105;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_8 7
#define LABEL_15_5 9
#define LABEL_15_9 11
#define LABEL_15_11 13
#define LABEL_15_13 15
#define LABEL_15_10 17
#define LABEL_15_15 19
#define LABEL_15_16 21
#define LABEL_15_19 23
#define LABEL_15_17 25
#define LABEL_15_21 27
#define LABEL_15_22 29
#define ENVIRONMENT_LABEL_15_3 52
#define DEBUGGING_LABEL_15_2 51
#define OBJECT_15_7 50
#define OBJECT_15_6 49
#define OBJECT_15_5 48
#define OBJECT_15_4 47
#define OBJECT_15_3 46
#define OBJECT_15_2 45
#define OBJECT_15_1 44
#define OBJECT_15_0 43
#define EXECUTE_CACHE_15_23 31
#define EXECUTE_CACHE_15_20 33
#define EXECUTE_CACHE_15_18 35
#define EXECUTE_CACHE_15_14 37
#define EXECUTE_CACHE_15_12 39
#define EXECUTE_CACHE_15_7 41
#define FREE_REFERENCES_LABEL_15_0 30
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_15_4);
      goto initialize_contexts_parallel_17;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_15;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_15_13);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_15_15);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_15_16);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_15_19);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_15_17);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_15_21);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_15_22);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_contexts_parallel_29)
DEFLABEL (initialize_contexts_parallel_17)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_32;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd15.Lng))))
    goto label_32;
  (Wrd7.Obj) = ((Wrd13.pObj) [9]);

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (label_32)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_15_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_19)
  (Wrd7.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_30)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_15_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_52;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_52;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_51)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_34;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_34;
  (Wrd26.Obj) = ((Wrd32.pObj) [2]);

DEFLABEL (label_33)
  (Rsp [0]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (label_34)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_15_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_21)
  (Wrd26.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_50)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_49;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd54.Lng))))
    goto label_49;
  (Wrd48.Obj) = ((Wrd52.pObj) [3]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_48)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_37;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_37;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_20]));

DEFLABEL (label_37)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_15_5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_23)
  (Wrd7.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_47;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_47;
  (Wrd25.Obj) = ((Wrd29.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_46)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_45;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd47.Lng))))
    goto label_45;
  (Wrd41.Obj) = ((Wrd45.pObj) [2]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_44)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_17]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15_17);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  Rvl = (current_block [OBJECT_15_6]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_43;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd33.Lng))))
    goto label_43;
  ((Wrd31.pObj) [2]) = Rvl;

DEFLABEL (label_42)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_41;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_41;
  (Wrd8.Obj) = ((Wrd14.pObj) [4]);

DEFLABEL (label_40)
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_23]));

DEFLABEL (label_41)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_15_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_26)
  (Wrd8.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (current_block [OBJECT_15_2]);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_7]), 3);

DEFLABEL (label_27)
  goto label_42;

DEFLABEL (label_45)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (current_block [OBJECT_15_2]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_15_4]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_15_4]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_52)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_15_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_8);
  goto label_50;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_6 5
#define LABEL_16_7 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define LABEL_16_12 13
#define LABEL_16_5 15
#define LABEL_16_11 17
#define LABEL_16_16 19
#define LABEL_16_14 21
#define TAG_16_15 9
#define ENVIRONMENT_LABEL_16_3 38
#define DEBUGGING_LABEL_16_2 37
#define OBJECT_16_7 36
#define OBJECT_16_6 35
#define OBJECT_16_5 34
#define OBJECT_16_4 33
#define OBJECT_16_3 32
#define OBJECT_16_2 31
#define OBJECT_16_1 30
#define OBJECT_16_0 29
#define EXECUTE_CACHE_16_17 23
#define EXECUTE_CACHE_16_13 25
#define EXECUTE_CACHE_16_8 27
#define FREE_REFERENCES_LABEL_16_0 22
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
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
      current_block = (Rpc - LABEL_16_4);
      goto initialize_contexts_application_12;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_16_12);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_16_16);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_16_14);
      goto lambda_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_contexts_application_20)
DEFLABEL (initialize_contexts_application_12)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_34;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_34;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_32;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd56.Lng))))
    goto label_32;
  ((Wrd54.pObj) [9]) = Rvl;

DEFLABEL (label_31)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_30;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_30;
  (Wrd9.Obj) = ((Wrd15.pObj) [8]);

DEFLABEL (label_29)
  if ((Wrd9.Obj) == (current_block [OBJECT_16_4]))
    goto label_24;

DEFLABEL (label_23)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_16_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_28;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd38.Lng))))
    goto label_28;
  (Wrd32.Obj) = ((Wrd36.pObj) [10]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_27)
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_14])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_26;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd20.Lng))))
    goto label_26;
  (Wrd12.Obj) = ((Wrd18.pObj) [11]);

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_17]));

DEFLABEL (label_26)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_16_7]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_18)
  (Wrd12.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.Obj) = (current_block [OBJECT_16_5]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_16_3]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.Obj) = (current_block [OBJECT_16_0]);
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 3);

DEFLABEL (label_17)
  goto label_31;

DEFLABEL (label_34)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_16_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  goto label_22;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_16_14);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_8 9
#define LABEL_17_10 11
#define LABEL_17_9 13
#define LABEL_17_12 15
#define LABEL_17_13 17
#define LABEL_17_14 19
#define LABEL_17_16 21
#define LABEL_17_15 23
#define LABEL_17_18 25
#define ENVIRONMENT_LABEL_17_3 44
#define DEBUGGING_LABEL_17_2 43
#define OBJECT_17_9 42
#define OBJECT_17_8 41
#define OBJECT_17_7 40
#define OBJECT_17_6 39
#define OBJECT_17_5 38
#define OBJECT_17_4 37
#define OBJECT_17_3 36
#define OBJECT_17_2 35
#define OBJECT_17_1 34
#define OBJECT_17_0 33
#define EXECUTE_CACHE_17_17 27
#define EXECUTE_CACHE_17_11 29
#define EXECUTE_CACHE_17_7 31
#define FREE_REFERENCES_LABEL_17_0 26
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_17_4);
      goto initialize_contexts_virtual_return_14;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_17_12);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_17_13);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_17_14);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_17_16);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_17_18);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_contexts_virtual_return_25)
DEFLABEL (initialize_contexts_virtual_return_14)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_43;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_43;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_42)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  Rvl = (current_block [OBJECT_17_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_41;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd36.Lng))))
    goto label_41;
  ((Wrd34.pObj) [8]) = Rvl;

DEFLABEL (label_40)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_39;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd18.Lng))))
    goto label_39;
  (Wrd12.Obj) = ((Wrd16.pObj) [10]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_38)
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_36)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_35;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd69.Lng))))
    goto label_35;
  (Wrd23.Obj) = ((Wrd67.pObj) [4]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_31)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 62))
    goto label_30;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd55.Lng))))
    goto label_30;
  (Wrd49.Obj) = ((Wrd53.pObj) [2]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_29)
  (Wrd63.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17_15);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_28;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_28;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd9.Obj);

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_17_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_17_8]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_9]), 3);

DEFLABEL (label_23)
  goto label_27;

DEFLABEL (label_30)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.Obj) = (current_block [OBJECT_17_8]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_7]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_34;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd33.Lng))))
    goto label_34;
  (Wrd25.Obj) = ((Wrd31.pObj) [2]);

DEFLABEL (label_33)
  (Rsp [3]) = (Wrd25.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd42.Obj);
  (Rsp [2]) = (Wrd41.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (label_34)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (current_block [OBJECT_17_8]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_7]), 2);

DEFLABEL (label_20)
  (Wrd25.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (current_block [OBJECT_17_6]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_7]), 2);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_31;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_17_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_17_4]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.Obj) = (current_block [OBJECT_17_0]);
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_3]), 3);

DEFLABEL (label_18)
  goto label_40;

DEFLABEL (label_43)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_17_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define ENVIRONMENT_LABEL_18_3 23
#define DEBUGGING_LABEL_18_2 22
#define OBJECT_18_4 21
#define OBJECT_18_3 20
#define OBJECT_18_2 19
#define OBJECT_18_1 18
#define OBJECT_18_0 17
#define EXECUTE_CACHE_18_10 13
#define EXECUTE_CACHE_18_7 15
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_18_4);
      goto initialize_contexts_assignment_6;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_contexts_assignment_12)
DEFLABEL (initialize_contexts_assignment_6)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = (current_block [OBJECT_18_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_17;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd33.Lng))))
    goto label_17;
  ((Wrd31.pObj) [8]) = Rvl;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_15;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd15.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd13.pObj) [10]);

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd24.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_18_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (current_block [OBJECT_18_0]);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 3);

DEFLABEL (label_10)
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_18_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_8 9
#define LABEL_19_9 11
#define ENVIRONMENT_LABEL_19_3 23
#define DEBUGGING_LABEL_19_2 22
#define OBJECT_19_4 21
#define OBJECT_19_3 20
#define OBJECT_19_2 19
#define OBJECT_19_1 18
#define OBJECT_19_0 17
#define EXECUTE_CACHE_19_10 13
#define EXECUTE_CACHE_19_7 15
#define FREE_REFERENCES_LABEL_19_0 12
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_19_4);
      goto initialize_contexts_definition_6;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_contexts_definition_12)
DEFLABEL (initialize_contexts_definition_6)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = (current_block [OBJECT_19_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_17;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd33.Lng))))
    goto label_17;
  ((Wrd31.pObj) [8]) = Rvl;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_15;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd15.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd13.pObj) [10]);

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd24.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_19_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (current_block [OBJECT_19_0]);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 3);

DEFLABEL (label_10)
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_19_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_6 5
#define LABEL_20_7 7
#define LABEL_20_5 9
#define ENVIRONMENT_LABEL_20_3 18
#define DEBUGGING_LABEL_20_2 17
#define OBJECT_20_3 16
#define OBJECT_20_2 15
#define OBJECT_20_1 14
#define OBJECT_20_0 13
#define EXECUTE_CACHE_20_8 11
#define FREE_REFERENCES_LABEL_20_0 10
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_20_4);
      goto initialize_contexts_stack_overwrite_5;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_contexts_stack_overwrite_9)
DEFLABEL (initialize_contexts_stack_overwrite_5)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_15;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_14)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd10.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_11)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd21.Lng))))
    goto label_10;
  ((Wrd19.pObj) [8]) = Rvl;
  Rsp = (& (Rsp [4]));

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_20_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto label_12;

DEFLABEL (label_15)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_20_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_8 9
#define LABEL_21_9 11
#define ENVIRONMENT_LABEL_21_3 23
#define DEBUGGING_LABEL_21_2 22
#define OBJECT_21_4 21
#define OBJECT_21_3 20
#define OBJECT_21_2 19
#define OBJECT_21_1 18
#define OBJECT_21_0 17
#define EXECUTE_CACHE_21_10 13
#define EXECUTE_CACHE_21_7 15
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_21_4);
      goto initialize_contexts_true_test_6;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_contexts_true_test_12)
DEFLABEL (initialize_contexts_true_test_6)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = (current_block [OBJECT_21_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_17;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd33.Lng))))
    goto label_17;
  ((Wrd31.pObj) [9]) = Rvl;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_15;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd15.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd13.pObj) [10]);

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd24.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_21_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (current_block [OBJECT_21_0]);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 3);

DEFLABEL (label_10)
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_21_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define LABEL_22_8 11
#define LABEL_22_9 13
#define LABEL_22_12 15
#define LABEL_22_13 17
#define LABEL_22_15 19
#define LABEL_22_17 21
#define LABEL_22_18 23
#define LABEL_22_19 25
#define LABEL_22_14 27
#define LABEL_22_21 29
#define LABEL_22_11 31
#define LABEL_22_22 33
#define ENVIRONMENT_LABEL_22_3 56
#define DEBUGGING_LABEL_22_2 55
#define OBJECT_22_9 54
#define OBJECT_22_8 53
#define OBJECT_22_7 52
#define OBJECT_22_6 51
#define OBJECT_22_5 50
#define OBJECT_22_4 49
#define OBJECT_22_3 48
#define OBJECT_22_2 47
#define OBJECT_22_1 46
#define OBJECT_22_0 45
#define EXECUTE_CACHE_22_20 35
#define EXECUTE_CACHE_22_16 37
#define EXECUTE_CACHE_22_10 39
#define FREE_REFERENCE_22_2 42
#define FREE_REFERENCE_22_1 43
#define FREE_REFERENCE_22_0 44
#define FREE_REFERENCES_LABEL_22_0 34
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd60;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd150;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd86;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd83;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd136;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd133;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd117;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd124;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd101;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_22_4);
      goto initialize_contexts_rvalue_18;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_22_9);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_22_12);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_22_13);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_22_15);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_22_17);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_22_18);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_22_19);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_22_14);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_22_21);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_22_22);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_contexts_rvalue_33)
DEFLABEL (initialize_contexts_rvalue_18)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_58;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_58;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_57)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_56;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_56;
  (Wrd22.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_55)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_54;
  Wrd35 = Wrd39;

DEFLABEL (label_53)
  (Wrd41.Obj) = (Rsp [0]);
  if ((Wrd41.Obj) == (Wrd35.Obj))
    goto label_46;
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_1]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_45;
  Wrd43 = Wrd47;

DEFLABEL (label_44)
  (Wrd49.Obj) = (Rsp [0]);
  if ((Wrd49.Obj) == (Wrd43.Obj))
    goto label_40;
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_2]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_39;
  Wrd51 = Wrd55;

DEFLABEL (label_38)
  (Wrd57.Obj) = (Rsp [0]);
  if ((Wrd57.Obj) == (Wrd51.Obj))
    goto label_34;
  Rvl = (current_block [OBJECT_22_8]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd69.Obj) = (Rsp [3]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_37;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd68.Lng))))
    goto label_37;
  (Wrd60.Obj) = ((Wrd66.pObj) [19]);

DEFLABEL (label_36)
  (Rsp [3]) = (Wrd60.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_19]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_22_8]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd71.Obj) = (Rsp [3]);
  (Wrd72.Obj) = (current_block [OBJECT_22_7]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_25)
  (Wrd60.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_17])), (Wrd52.pObj));

DEFLABEL (label_24)
  (Wrd51.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd93.Obj) = (Rsp [4]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 10))
    goto label_42;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd92.Lng))))
    goto label_42;
  (Wrd86.Obj) = ((Wrd90.pObj) [3]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_41)
  (Wrd150.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd150.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_16]));

DEFLABEL (label_42)
  (Wrd95.Obj) = (Rsp [4]);
  (Wrd96.Obj) = (current_block [OBJECT_22_6]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_26)
DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_13])), (Wrd44.pObj));

DEFLABEL (label_23)
  (Wrd43.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd110.Obj) = (Rsp [3]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 10))
    goto label_52;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd109.Lng))))
    goto label_52;
  (Wrd101.Obj) = ((Wrd107.pObj) [4]);

DEFLABEL (label_51)
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd124.uLng) == 10))
    goto label_50;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd123.Lng))))
    goto label_50;
  (Wrd117.Obj) = ((Wrd121.pObj) [16]);

DEFLABEL (label_49)
  if (! ((Wrd117.Obj) == (current_block [OBJECT_22_5])))
    goto label_47;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (label_47)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (Wrd143.Obj) = (Rsp [4]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if (! ((Wrd144.uLng) == 10))
    goto label_48;
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd143.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (Wrd142.Lng) = (FIXNUM_TO_LONG (Wrd141.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd142.Lng))))
    goto label_48;
  (Wrd136.Obj) = ((Wrd140.pObj) [3]);
  (* (--Rsp)) = (Wrd136.Obj);
  goto label_41;

DEFLABEL (label_48)
  (Wrd145.Obj) = (Rsp [4]);
  (Wrd146.Obj) = (current_block [OBJECT_22_6]);
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_29)
  goto label_43;

DEFLABEL (label_50)
  (Wrd126.Obj) = (current_block [OBJECT_22_4]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_28)
  (Wrd117.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd112.Obj) = (Rsp [3]);
  (Wrd113.Obj) = (current_block [OBJECT_22_2]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_27)
  (Wrd101.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_7])), (Wrd36.pObj));

DEFLABEL (label_22)
  (Wrd35.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd30.Obj) = (current_block [OBJECT_22_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_22_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_22_14);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_60;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_60;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd9.Obj);

DEFLABEL (label_59)
  Rvl = (current_block [OBJECT_22_8]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (current_block [OBJECT_22_6]);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_9]), 3);

DEFLABEL (label_30)
  goto label_59;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_22_11);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_62;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_62;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd9.Obj);

DEFLABEL (label_61)
  Rvl = (current_block [OBJECT_22_8]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (current_block [OBJECT_22_6]);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_9]), 3);

DEFLABEL (label_31)
  goto label_61;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_6 5
#define LABEL_23_5 7
#define ENVIRONMENT_LABEL_23_3 16
#define DEBUGGING_LABEL_23_2 15
#define OBJECT_23_3 14
#define OBJECT_23_2 13
#define OBJECT_23_1 12
#define OBJECT_23_0 11
#define EXECUTE_CACHE_23_7 9
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_23_4);
      goto initialize_contexts_reference_2;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_contexts_reference_6)
DEFLABEL (initialize_contexts_reference_2)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 3);

DEFLABEL (label_8)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_7;
  ((Wrd14.pObj) [3]) = Rvl;
  Rvl = (current_block [OBJECT_23_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_23_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define ENVIRONMENT_LABEL_24_3 15
#define DEBUGGING_LABEL_24_2 14
#define OBJECT_24_0 13
#define EXECUTE_CACHE_24_8 11
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_24_4);
      goto guarantee_contextB_3;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_contextB_6)
DEFLABEL (guarantee_contextB_3)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_7);
  Rvl = (current_block [OBJECT_24_0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 10
#define DEBUGGING_LABEL_25_2 9
#define OBJECT_25_1 8
#define OBJECT_25_0 7
#define EXECUTE_CACHE_25_5 5
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_25_4);
      goto guarantee_contextB_check_old_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_contextB_check_old_4)
DEFLABEL (guarantee_contextB_check_old_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_5;
  (Wrd7.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_5]));

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_25_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 12
#define DEBUGGING_LABEL_26_2 11
#define EXECUTE_CACHE_26_7 7
#define EXECUTE_CACHE_26_6 9
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto guarantee_context_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_context_4)
DEFLABEL (guarantee_context_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (label_5)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_8 5
#define LABEL_27_5 7
#define TAG_27_6 2
#define ENVIRONMENT_LABEL_27_3 16
#define DEBUGGING_LABEL_27_2 15
#define EXECUTE_CACHE_27_10 9
#define EXECUTE_CACHE_27_9 11
#define EXECUTE_CACHE_27_7 13
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_27_4);
      goto modify_reference_contextsB_2;

    case 1:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_5);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (modify_reference_contextsB_5)
DEFLABEL (modify_reference_contextsB_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_5])));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_27_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_7)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = ((Wrd16.pObj) [4]);
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_8);
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_8 9
#define LABEL_28_10 11
#define LABEL_28_14 13
#define LABEL_28_16 15
#define LABEL_28_17 17
#define LABEL_28_19 19
#define LABEL_28_20 21
#define LABEL_28_22 23
#define LABEL_28_23 25
#define LABEL_28_25 27
#define LABEL_28_26 29
#define LABEL_28_28 31
#define LABEL_28_29 33
#define LABEL_28_30 35
#define LABEL_28_32 37
#define LABEL_28_34 39
#define LABEL_28_36 41
#define LABEL_28_35 43
#define LABEL_28_40 45
#define LABEL_28_31 47
#define LABEL_28_27 49
#define LABEL_28_43 51
#define LABEL_28_24 53
#define LABEL_28_45 55
#define LABEL_28_21 57
#define LABEL_28_47 59
#define LABEL_28_18 61
#define LABEL_28_49 63
#define LABEL_28_50 65
#define LABEL_28_51 67
#define LABEL_28_53 69
#define LABEL_28_15 71
#define LABEL_28_55 73
#define LABEL_28_9 75
#define LABEL_28_57 77
#define LABEL_28_58 79
#define LABEL_28_11 81
#define TAG_28_12 39
#define LABEL_28_59 83
#define LABEL_28_61 85
#define LABEL_28_63 87
#define LABEL_28_38 89
#define LABEL_28_65 91
#define LABEL_28_39 93
#define LABEL_28_42 95
#define LABEL_28_44 97
#define LABEL_28_46 99
#define LABEL_28_48 101
#define LABEL_28_67 103
#define LABEL_28_54 105
#define LABEL_28_69 107
#define LABEL_28_56 109
#define LABEL_28_60 111
#define LABEL_28_70 113
#define LABEL_28_71 115
#define LABEL_28_64 117
#define LABEL_28_66 119
#define LABEL_28_68 121
#define ENVIRONMENT_LABEL_28_3 160
#define DEBUGGING_LABEL_28_2 159
#define OBJECT_28_11 158
#define OBJECT_28_10 157
#define OBJECT_28_9 156
#define OBJECT_28_8 155
#define OBJECT_28_7 154
#define OBJECT_28_6 153
#define OBJECT_28_5 152
#define OBJECT_28_4 151
#define OBJECT_28_3 150
#define OBJECT_28_2 149
#define OBJECT_28_1 148
#define OBJECT_28_0 147
#define EXECUTE_CACHE_28_62 123
#define EXECUTE_CACHE_28_52 125
#define EXECUTE_CACHE_28_41 127
#define EXECUTE_CACHE_28_37 129
#define EXECUTE_CACHE_28_33 131
#define EXECUTE_CACHE_28_13 133
#define EXECUTE_CACHE_28_6 135
#define FREE_REFERENCE_28_8 138
#define FREE_REFERENCE_28_7 139
#define FREE_REFERENCE_28_6 140
#define FREE_REFERENCE_28_5 141
#define FREE_REFERENCE_28_4 142
#define FREE_REFERENCE_28_3 143
#define FREE_REFERENCE_28_2 144
#define FREE_REFERENCE_28_1 145
#define FREE_REFERENCE_28_0 146
#define FREE_REFERENCES_LABEL_28_0 122
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd64;
  machine_word Wrd48;
  machine_word Wrd24;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd93;
  machine_word Wrd234;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd101;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd98;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd121;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd118;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd140;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd137;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd160;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd157;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd193;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd180;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd177;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd213;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd200;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd197;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd233;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd220;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd217;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd257;
  machine_word Wrd256;
  machine_word Wrd254;
  machine_word Wrd255;
  machine_word Wrd253;
  machine_word Wrd250;
  machine_word Wrd249;
  machine_word Wrd240;
  machine_word Wrd246;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd237;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_28_4);
      goto modify_contexts_node_62;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_64;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto label_65;

    case 4:
      current_block = (Rpc - LABEL_28_10);
      goto label_81;

    case 5:
      current_block = (Rpc - LABEL_28_14);
      goto label_66;

    case 6:
      current_block = (Rpc - LABEL_28_16);
      goto label_80;

    case 7:
      current_block = (Rpc - LABEL_28_17);
      goto label_67;

    case 8:
      current_block = (Rpc - LABEL_28_19);
      goto label_79;

    case 9:
      current_block = (Rpc - LABEL_28_20);
      goto label_68;

    case 10:
      current_block = (Rpc - LABEL_28_22);
      goto label_78;

    case 11:
      current_block = (Rpc - LABEL_28_23);
      goto label_69;

    case 12:
      current_block = (Rpc - LABEL_28_25);
      goto label_77;

    case 13:
      current_block = (Rpc - LABEL_28_26);
      goto label_70;

    case 14:
      current_block = (Rpc - LABEL_28_28);
      goto label_76;

    case 15:
      current_block = (Rpc - LABEL_28_29);
      goto label_71;

    case 16:
      current_block = (Rpc - LABEL_28_30);
      goto label_72;

    case 17:
      current_block = (Rpc - LABEL_28_32);
      goto label_75;

    case 18:
      current_block = (Rpc - LABEL_28_34);
      goto label_73;

    case 19:
      current_block = (Rpc - LABEL_28_36);
      goto label_74;

    case 20:
      current_block = (Rpc - LABEL_28_35);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_28_40);
      goto label_82;

    case 22:
      current_block = (Rpc - LABEL_28_31);
      goto continuation_19;

    case 23:
      current_block = (Rpc - LABEL_28_27);
      goto continuation_21;

    case 24:
      current_block = (Rpc - LABEL_28_43);
      goto label_83;

    case 25:
      current_block = (Rpc - LABEL_28_24);
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_28_45);
      goto label_84;

    case 27:
      current_block = (Rpc - LABEL_28_21);
      goto continuation_29;

    case 28:
      current_block = (Rpc - LABEL_28_47);
      goto label_85;

    case 29:
      current_block = (Rpc - LABEL_28_18);
      goto continuation_33;

    case 30:
      current_block = (Rpc - LABEL_28_49);
      goto label_86;

    case 31:
      current_block = (Rpc - LABEL_28_50);
      goto label_89;

    case 32:
      current_block = (Rpc - LABEL_28_51);
      goto label_87;

    case 33:
      current_block = (Rpc - LABEL_28_53);
      goto label_88;

    case 34:
      current_block = (Rpc - LABEL_28_15);
      goto continuation_43;

    case 35:
      current_block = (Rpc - LABEL_28_55);
      goto label_90;

    case 36:
      current_block = (Rpc - LABEL_28_9);
      goto continuation_58;

    case 37:
      current_block = (Rpc - LABEL_28_57);
      goto label_91;

    case 38:
      current_block = (Rpc - LABEL_28_58);
      goto continuation_49;

    case 39:
      current_block = (Rpc - LABEL_28_11);
      goto lambda_102;

    case 40:
      current_block = (Rpc - LABEL_28_59);
      goto label_92;

    case 41:
      current_block = (Rpc - LABEL_28_61);
      goto label_94;

    case 42:
      current_block = (Rpc - LABEL_28_63);
      goto label_93;

    case 43:
      current_block = (Rpc - LABEL_28_38);
      goto continuation_15;

    case 44:
      current_block = (Rpc - LABEL_28_65);
      goto label_95;

    case 45:
      current_block = (Rpc - LABEL_28_39);
      goto continuation_14;

    case 46:
      current_block = (Rpc - LABEL_28_42);
      goto continuation_23;

    case 47:
      current_block = (Rpc - LABEL_28_44);
      goto continuation_27;

    case 48:
      current_block = (Rpc - LABEL_28_46);
      goto continuation_31;

    case 49:
      current_block = (Rpc - LABEL_28_48);
      goto continuation_35;

    case 50:
      current_block = (Rpc - LABEL_28_67);
      goto label_96;

    case 51:
      current_block = (Rpc - LABEL_28_54);
      goto continuation_45;

    case 52:
      current_block = (Rpc - LABEL_28_69);
      goto label_97;

    case 53:
      current_block = (Rpc - LABEL_28_56);
      goto continuation_60;

    case 54:
      current_block = (Rpc - LABEL_28_60);
      goto continuation_53;

    case 55:
      current_block = (Rpc - LABEL_28_70);
      goto label_98;

    case 56:
      current_block = (Rpc - LABEL_28_71);
      goto label_99;

    case 57:
      current_block = (Rpc - LABEL_28_64);
      goto continuation_17;

    case 58:
      current_block = (Rpc - LABEL_28_66);
      goto continuation_41;

    case 59:
      current_block = (Rpc - LABEL_28_68);
      goto continuation_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (modify_contexts_node_101)
DEFLABEL (modify_contexts_node_62)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_144;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_144;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_143)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_142;
  Wrd22 = Wrd26;

DEFLABEL (label_141)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_136;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_135;
  Wrd30 = Wrd34;

DEFLABEL (label_134)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_132;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_2]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_131;
  Wrd38 = Wrd42;

DEFLABEL (label_130)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_128;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_3]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_127;
  Wrd46 = Wrd50;

DEFLABEL (label_126)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == (Wrd46.Obj))
    goto label_124;
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_4]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_123;
  Wrd54 = Wrd58;

DEFLABEL (label_122)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == (Wrd54.Obj))
    goto label_120;
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_5]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_119;
  Wrd62 = Wrd66;

DEFLABEL (label_118)
  (Wrd68.Obj) = (Rsp [0]);
  if ((Wrd68.Obj) == (Wrd62.Obj))
    goto label_116;
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_6]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_115;
  Wrd70 = Wrd74;

DEFLABEL (label_114)
  (Wrd76.Obj) = (Rsp [0]);
  if ((Wrd76.Obj) == (Wrd70.Obj))
    goto label_109;
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_7]));
  (Wrd82.Obj) = ((Wrd79.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_113;
  Wrd78 = Wrd82;

DEFLABEL (label_112)
  (Wrd84.Obj) = (Rsp [0]);
  if ((Wrd84.Obj) == (Wrd78.Obj))
    goto label_109;
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_8]));
  (Wrd90.Obj) = ((Wrd87.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_108;
  Wrd86 = Wrd90;

DEFLABEL (label_107)
  (Wrd92.Obj) = (Rsp [0]);
  if ((Wrd92.Obj) == (Wrd86.Obj))
    goto label_103;
  (Wrd93.Obj) = (current_block [OBJECT_28_5]);
  (Rsp [1]) = (Wrd93.Obj);
  (Rsp [2]) = (Wrd92.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_37]));

DEFLABEL (label_103)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_35]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd108.Obj) = (Rsp [3]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 10))
    goto label_105;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd107.Lng))))
    goto label_105;
  (Wrd101.Obj) = ((Wrd105.pObj) [9]);
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_104)
  (Wrd234.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd234.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_105)
  (Wrd110.Obj) = (Rsp [3]);
  (Wrd111.Obj) = (current_block [OBJECT_28_2]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_36]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_74)
DEFLABEL (label_106)
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_34])), (Wrd87.pObj));

DEFLABEL (label_73)
  (Wrd86.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_109)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_31]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd128.Obj) = (Rsp [3]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd129.uLng) == 10))
    goto label_111;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd126.Obj) = ((Wrd125.pObj) [0]);
  (Wrd127.Lng) = (FIXNUM_TO_LONG (Wrd126.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd127.Lng))))
    goto label_111;
  (Wrd121.Obj) = ((Wrd125.pObj) [7]);
  (* (--Rsp)) = (Wrd121.Obj);

DEFLABEL (label_110)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_33]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_28_31);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_41]));

DEFLABEL (label_111)
  (Wrd130.Obj) = (Rsp [3]);
  (Wrd131.Obj) = (current_block [OBJECT_28_4]);
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_32]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_30])), (Wrd79.pObj));

DEFLABEL (label_72)
  (Wrd78.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_29])), (Wrd71.pObj));

DEFLABEL (label_71)
  (Wrd70.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_116)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_27]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (Wrd147.Obj) = (Rsp [3]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd148.uLng) == 10))
    goto label_117;
  (Wrd144.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd145.Obj) = ((Wrd144.pObj) [0]);
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Wrd145.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd146.Lng))))
    goto label_117;
  (Wrd140.Obj) = ((Wrd144.pObj) [8]);
  (* (--Rsp)) = (Wrd140.Obj);
  goto label_104;

DEFLABEL (label_117)
  (Wrd149.Obj) = (Rsp [3]);
  (Wrd150.Obj) = (current_block [OBJECT_28_3]);
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_28]))));
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_76)
  goto label_106;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_26])), (Wrd63.pObj));

DEFLABEL (label_70)
  (Wrd62.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_120)
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_24]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (Wrd167.Obj) = (Rsp [3]);
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if (! ((Wrd168.uLng) == 10))
    goto label_121;
  (Wrd164.pObj) = (OBJECT_ADDRESS (Wrd167.Obj));
  (Wrd165.Obj) = ((Wrd164.pObj) [0]);
  (Wrd166.Lng) = (FIXNUM_TO_LONG (Wrd165.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd166.Lng))))
    goto label_121;
  (Wrd160.Obj) = ((Wrd164.pObj) [8]);
  (* (--Rsp)) = (Wrd160.Obj);
  goto label_104;

DEFLABEL (label_121)
  (Wrd169.Obj) = (Rsp [3]);
  (Wrd170.Obj) = (current_block [OBJECT_28_3]);
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_25]))));
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_77)
  goto label_106;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_23])), (Wrd55.pObj));

DEFLABEL (label_69)
  (Wrd54.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_124)
  (Wrd177.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_21]))));
  (* (--Rsp)) = (Wrd177.Obj);
  (Wrd187.Obj) = (Rsp [3]);
  (Wrd188.uLng) = (OBJECT_TYPE (Wrd187.Obj));
  if (! ((Wrd188.uLng) == 10))
    goto label_125;
  (Wrd184.pObj) = (OBJECT_ADDRESS (Wrd187.Obj));
  (Wrd185.Obj) = ((Wrd184.pObj) [0]);
  (Wrd186.Lng) = (FIXNUM_TO_LONG (Wrd185.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd186.Lng))))
    goto label_125;
  (Wrd180.Obj) = ((Wrd184.pObj) [8]);
  (* (--Rsp)) = (Wrd180.Obj);
  goto label_104;

DEFLABEL (label_125)
  (Wrd189.Obj) = (Rsp [3]);
  (Wrd190.Obj) = (current_block [OBJECT_28_3]);
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_22]))));
  (* (--Rsp)) = (Wrd193.Obj);
  (* (--Rsp)) = (Wrd190.Obj);
  (* (--Rsp)) = (Wrd189.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_78)
  goto label_106;

DEFLABEL (label_127)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_20])), (Wrd47.pObj));

DEFLABEL (label_68)
  (Wrd46.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_128)
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_18]))));
  (* (--Rsp)) = (Wrd197.Obj);
  (Wrd207.Obj) = (Rsp [3]);
  (Wrd208.uLng) = (OBJECT_TYPE (Wrd207.Obj));
  if (! ((Wrd208.uLng) == 10))
    goto label_129;
  (Wrd204.pObj) = (OBJECT_ADDRESS (Wrd207.Obj));
  (Wrd205.Obj) = ((Wrd204.pObj) [0]);
  (Wrd206.Lng) = (FIXNUM_TO_LONG (Wrd205.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd206.Lng))))
    goto label_129;
  (Wrd200.Obj) = ((Wrd204.pObj) [8]);
  (* (--Rsp)) = (Wrd200.Obj);
  goto label_104;

DEFLABEL (label_129)
  (Wrd209.Obj) = (Rsp [3]);
  (Wrd210.Obj) = (current_block [OBJECT_28_3]);
  (Wrd213.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_19]))));
  (* (--Rsp)) = (Wrd213.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd209.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_79)
  goto label_106;

DEFLABEL (label_131)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_17])), (Wrd39.pObj));

DEFLABEL (label_67)
  (Wrd38.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_132)
  (Wrd217.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd217.Obj);
  (Wrd227.Obj) = (Rsp [3]);
  (Wrd228.uLng) = (OBJECT_TYPE (Wrd227.Obj));
  if (! ((Wrd228.uLng) == 10))
    goto label_133;
  (Wrd224.pObj) = (OBJECT_ADDRESS (Wrd227.Obj));
  (Wrd225.Obj) = ((Wrd224.pObj) [0]);
  (Wrd226.Lng) = (FIXNUM_TO_LONG (Wrd225.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd226.Lng))))
    goto label_133;
  (Wrd220.Obj) = ((Wrd224.pObj) [9]);
  (* (--Rsp)) = (Wrd220.Obj);
  goto label_104;

DEFLABEL (label_133)
  (Wrd229.Obj) = (Rsp [3]);
  (Wrd230.Obj) = (current_block [OBJECT_28_2]);
  (Wrd233.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_16]))));
  (* (--Rsp)) = (Wrd233.Obj);
  (* (--Rsp)) = (Wrd230.Obj);
  (* (--Rsp)) = (Wrd229.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_80)
  goto label_106;

DEFLABEL (label_135)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_14])), (Wrd31.pObj));

DEFLABEL (label_66)
  (Wrd30.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_136)
  (Wrd237.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd237.Obj);
  (Wrd247.Obj) = (Rsp [3]);
  (Wrd248.uLng) = (OBJECT_TYPE (Wrd247.Obj));
  if (! ((Wrd248.uLng) == 10))
    goto label_140;
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd247.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (Wrd246.Lng) = (FIXNUM_TO_LONG (Wrd245.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd246.Lng))))
    goto label_140;
  (Wrd240.Obj) = ((Wrd244.pObj) [9]);
  (* (--Rsp)) = (Wrd240.Obj);

DEFLABEL (label_139)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd255.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_11])));
  Rhp += 1;
  (Wrd254.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd255.pObj)));
  Wrd256 = Wrd255;
  (Wrd257.Obj) = (Rsp [3]);
  ((Wrd256.pObj) [2]) = (Wrd257.Obj);
  (* (--Rsp)) = (Wrd254.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_28_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_138;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_138;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_137)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_33]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_28_56);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_41]));

DEFLABEL (label_138)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_28_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_57]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  (Wrd249.Obj) = (Rsp [3]);
  (Wrd250.Obj) = (current_block [OBJECT_28_2]);
  (Wrd253.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd253.Obj);
  (* (--Rsp)) = (Wrd250.Obj);
  (* (--Rsp)) = (Wrd249.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_81)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_8])), (Wrd23.pObj));

DEFLABEL (label_65)
  (Wrd22.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_28_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_143;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_28_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_148;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd19.Lng))))
    goto label_148;
  (Wrd13.Obj) = ((Wrd17.pObj) [7]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_147)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_33]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_28_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_41]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_146;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_146;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_145)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_33]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_28_64);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_41]));

DEFLABEL (label_146)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_28_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_65]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_28_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_40]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_147;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_28_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_150;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_150;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_149)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_33]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_28_42);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_41]));

DEFLABEL (label_150)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_28_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_43]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_149;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_28_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_152;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_152;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_151)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_33]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_28_44);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_41]));

DEFLABEL (label_152)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_28_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_45]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_28_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_154;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_154;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_153)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_33]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_28_46);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_41]));

DEFLABEL (label_154)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_28_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_47]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_153;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_28_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_163;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_163;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_162)
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 62))
    goto label_161;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd67.Lng))))
    goto label_161;
  (Wrd26.Obj) = ((Wrd65.pObj) [4]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_158;

DEFLABEL (label_157)
  (Wrd45.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_156;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd54.Lng))))
    goto label_156;
  (Wrd46.Obj) = ((Wrd52.pObj) [2]);

DEFLABEL (label_155)
  (Rsp [1]) = (Wrd46.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_156)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_28_8]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_53]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_7]), 2);

DEFLABEL (label_88)
  (Wrd46.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_160;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_160;
  (Wrd29.Obj) = ((Wrd35.pObj) [2]);

DEFLABEL (label_159)
  (Rsp [1]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_52]));

DEFLABEL (label_160)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_28_8]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_51]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_7]), 2);

DEFLABEL (label_87)
  (Wrd29.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_161)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.Obj) = (current_block [OBJECT_28_6]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_50]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_7]), 2);

DEFLABEL (label_89)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_158;
  goto label_157;

DEFLABEL (label_163)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_28_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_49]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_162;

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_28_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_167;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_167;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_166)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_52]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_28_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_165;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_165;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_164)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_33]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_28_68);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_41]));

DEFLABEL (label_165)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_28_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_69]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_97)
  (* (--Rsp)) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_28_9]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_55]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_166;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_28_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_169;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_169;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_168)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_33]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_28_66);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_41]));

DEFLABEL (label_169)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_28_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_67]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_96)
  (* (--Rsp)) = Rvl;
  goto label_168;

DEFLABEL (lambda_102)
  CLOSURE_HEADER (LABEL_28_11);

DEFLABEL (lambda_56)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_182;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_182;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_181)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_172;
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_171;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_171;
  (Wrd29.Obj) = ((Wrd35.pObj) [2]);

DEFLABEL (label_170)
  (Rsp [1]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_41]));

DEFLABEL (label_171)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_28_8]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_63]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_93)
  (Wrd29.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_172)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_180)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_60]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 62))
    goto label_179;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd57.Lng))))
    goto label_179;
  (Wrd51.Obj) = ((Wrd55.pObj) [3]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_178)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_62]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_28_60);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_173;
  Rvl = (current_block [OBJECT_28_11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_173)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_177;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_177;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_176)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_175;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_175;
  (Wrd28.Obj) = ((Wrd32.pObj) [2]);

DEFLABEL (label_174)
  (Rsp [1]) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_175)
  (Wrd37.Obj) = (current_block [OBJECT_28_8]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_71]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_7]), 2);

DEFLABEL (label_99)
  (Wrd28.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_28_10]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_70]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_7]), 2);

DEFLABEL (label_98)
  (Wrd12.Obj) = Rvl;
  goto label_176;

DEFLABEL (label_179)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.Obj) = (current_block [OBJECT_28_10]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_61]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_7]), 2);

DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_178;

DEFLABEL (label_182)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_28_8]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_59]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_7]), 2);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_181;

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_28_58);
  goto label_180;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_8 9
#define LABEL_29_10 11
#define LABEL_29_9 13
#define ENVIRONMENT_LABEL_29_3 28
#define DEBUGGING_LABEL_29_2 27
#define OBJECT_29_3 26
#define OBJECT_29_2 25
#define OBJECT_29_1 24
#define OBJECT_29_0 23
#define EXECUTE_CACHE_29_12 15
#define EXECUTE_CACHE_29_11 17
#define EXECUTE_CACHE_29_6 19
#define FREE_REFERENCE_29_0 22
#define FREE_REFERENCES_LABEL_29_0 14
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_29_4);
      goto modify_contexts_operator_6;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_29_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (modify_contexts_operator_12)
DEFLABEL (modify_contexts_operator_6)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_29_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_20;
  Wrd7 = Wrd11;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_18;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_18;
  (Wrd13.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_17)
  (Wrd29.Obj) = (* (Rsp++));
  if (! ((Wrd13.Obj) == (Wrd29.Obj)))
    goto label_13;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_16;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd43.Lng))))
    goto label_16;
  (Wrd37.Obj) = ((Wrd41.pObj) [11]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (label_16)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_29_2]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_29_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_9)
  (Wrd13.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_7])), (Wrd8.pObj));

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_5 3
#define LABEL_30_4 5
#define ENVIRONMENT_LABEL_30_3 13
#define DEBUGGING_LABEL_30_2 12
#define OBJECT_30_0 11
#define EXECUTE_CACHE_30_7 7
#define EXECUTE_CACHE_30_6 9
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
refctx_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_30_4);
      goto modify_contexts_next_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (modify_contexts_next_4)
DEFLABEL (modify_contexts_next_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_6;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_30_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_5 7
#define LABEL_11 9
#define LABEL_12 11
#define LABEL_6 13
#define LABEL_8 15
#define LABEL_10 17
#define LABEL_16 19
#define LABEL_17 21
#define LABEL_18 23
#define ENVIRONMENT_LABEL_3 51
#define DEBUGGING_LABEL_2 50
#define PURIFICATION_ROOT 49
#define OBJECT_12 48
#define OBJECT_11 47
#define OBJECT_10 46
#define OBJECT_9 45
#define OBJECT_8 44
#define OBJECT_7 43
#define OBJECT_6 42
#define OBJECT_5 41
#define OBJECT_4 40
#define OBJECT_3 39
#define OBJECT_2 38
#define OBJECT_1 37
#define OBJECT_0 36
#define FREE_REFERENCE_1 25
#define FREE_REFERENCE_0 26
#define GLOBAL_EXECUTE_CACHE_15 28
#define GLOBAL_EXECUTE_CACHE_14 30
#define GLOBAL_EXECUTE_CACHE_13 32
#define GLOBAL_EXECUTE_CACHE_9 34
#define FREE_REFERENCES_LABEL_0 24
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
refctx_so_963b8730a728344c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_7);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_11);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_12);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_6);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_10);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_16);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto expression_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_7)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_17])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_14)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_13)
  {
    static const short sections [] =
      {
	0,
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
	1,
	2,
	1,
	1,
	1,
	1,
	0,
	1,
	0,
	0,
	0,
	0,
	0,
	2,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 30)
      goto label_12;
    blocks = (current_block [OBJECT_12]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_16])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_12)
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
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_20;
  Wrd12 = Wrd16;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd13.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd6.pObj) = (& (Rhp [-4]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_18;
  Wrd8 = Wrd12;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_16;
  Wrd14 = Wrd18;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_11]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_15]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd15.pObj));

DEFLABEL (label_10)
  (Wrd14.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd13.pObj));

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_refctx_so_963b8730a728344c [30] =
  {
    { "refctx_so_code_1", 1, refctx_so_code_1 },
    { "refctx_so_code_2", 4, refctx_so_code_2 },
    { "refctx_so_code_3", 1, refctx_so_code_3 },
    { "refctx_so_code_4", 1, refctx_so_code_4 },
    { "refctx_so_code_5", 1, refctx_so_code_5 },
    { "refctx_so_code_6", 1, refctx_so_code_6 },
    { "refctx_so_code_7", 1, refctx_so_code_7 },
    { "refctx_so_code_8", 5, refctx_so_code_8 },
    { "refctx_so_code_9", 2, refctx_so_code_9 },
    { "refctx_so_code_10", 2, refctx_so_code_10 },
    { "refctx_so_code_11", 3, refctx_so_code_11 },
    { "refctx_so_code_12", 8, refctx_so_code_12 },
    { "refctx_so_code_13", 2, refctx_so_code_13 },
    { "refctx_so_code_14", 38, refctx_so_code_14 },
    { "refctx_so_code_15", 14, refctx_so_code_15 },
    { "refctx_so_code_16", 10, refctx_so_code_16 },
    { "refctx_so_code_17", 12, refctx_so_code_17 },
    { "refctx_so_code_18", 5, refctx_so_code_18 },
    { "refctx_so_code_19", 5, refctx_so_code_19 },
    { "refctx_so_code_20", 4, refctx_so_code_20 },
    { "refctx_so_code_21", 5, refctx_so_code_21 },
    { "refctx_so_code_22", 16, refctx_so_code_22 },
    { "refctx_so_code_23", 3, refctx_so_code_23 },
    { "refctx_so_code_24", 4, refctx_so_code_24 },
    { "refctx_so_code_25", 1, refctx_so_code_25 },
    { "refctx_so_code_26", 2, refctx_so_code_26 },
    { "refctx_so_code_27", 3, refctx_so_code_27 },
    { "refctx_so_code_28", 60, refctx_so_code_28 },
    { "refctx_so_code_29", 6, refctx_so_code_29 },
    { "refctx_so_code_30", 2, refctx_so_code_30 }
  };

int
decl_refctx_so_963b8730a728344c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_refctx_so_963b8730a728344c);
  return (0);
}

DECLARE_COMPILED_CODE ("refctx.so", 11, decl_refctx_so_963b8730a728344c, refctx_so_963b8730a728344c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_refctx_so_data_963b8730a728344c [4553] =
  "\xbf\x01\x40\x91\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x22\x29"
  "\x21\x9d\x2b\xb9\x1d\xb0\x82\x88\x82\x28\x0d\x26\x0d\xba\x0d\xbb"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83"
  "\x88\xc2\xbd\x81\x22\x29\x21\x9e\x2b\xbe\x1d\xb0\x84\x88\xb5\x82"
  "\x22\x29\x21\x9e\x2b\xbf\x1d\xb0\x85\x88\xb5\x83\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x86\x88\xc3\x1c\x1d\x82\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\xb5\x80\xc1\xb3\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb5\x81\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x83\x28\x0d\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\xb5\x83\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb5"
  "\x84\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x0c\x1c\x86"
  "\xb5\x80\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x83\x82\xc2\x1c"
  "\x81\xb5\x02\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x1d\x02\x0d\x02\x1b\xb5\x02"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x81\x1b\x83\x02\x02\x1b\x1d\xb5\x02\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x1b\x1d\xb5\x02\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x1b\x1d\xb5\x02\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\xb5"
  "\x02\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x02\x1b\x1d\xb5\x02\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x02\x82\x0d\x02\x1b\x83\xb5\x80\x0d\x0d\x0d\x24\x28\x1b"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\xb5"
  "\x82\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x28\x1b\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x82\x02"
  "\x81\x1b\x83\x1b\x86\x02\x02\xb5\x80\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x02\xb5\x80\x0d\x24\x28\x0d\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb4"
  "\x2a\x17\x1b\x1b\x1b\x0d\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x17"
  "\x0d\x0d\x0d\x0d\x9a\x83\x82\x81\x9a\xb1\x2a\xb2\x0d\x84\xc3\xb3"
  "\x0c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\xb3\xb2\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f"
  "\x62\x61\x73\x65\x2f\x72\x65\x66\x63\x74\x78\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x0c\x04\x82\x02\x03\x02\x04\x28\x64\x65\x66"
  "\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x2d\x62\x79\x2d\x69"
  "\x6e\x64\x65\x78\x02\x16\x72\x74\x64\x3a\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x16\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2d\x74\x61"
  "\x67\x03\x10\x0a\x81\x85\x02\x0f\x08\x81\x83\x02\x0e\x06\x81\x87"
  "\x02\x0d\x04\x83\x04\x09\x13\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d"
  "\x72\x65\x66\x11\x04\x83\x04\x03\x02\x12\x04\x83\x04\x03\x02\x13"
  "\x04\x83\x04\x03\x09\x02\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65"
  "\x74\x21\x0a\x02\x14\x04\x84\x06\x03\x0b\x02\x08\x0a\x02\x15\x04"
  "\x84\x06\x03\x0c\x02\x09\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x02\x1a\x0c\x81\x85\x02\x19\x0a\x81\x83\x02\x18"
  "\x08\x81\x83\x02\x17\x06\x81\x83\x02\x16\x04\x83\x04\x0b\x14\x0d"
  "\x02\x0a\x08\x1c\x06\x81\x83\x02\x1b\x04\x83\x04\x05\x0b\x0e\x02"
  "\x0b\x04\x05\x6d\x65\x6d\x71\x02\x1e\x06\x81\x85\x02\x1d\x04\x84"
  "\x06\x05\x0d\x0f\x02\x0c\x0a\x02\x04\x0d\x65\x71\x2d\x73\x65\x74"
  "\x2d\x75\x6e\x69\x6f\x6e\x02\x21\x08\x81\x87\x02\x20\x06\x81\x89"
  "\x02\x1f\x04\x84\x06\x07\x11\x10\x02\x0d\x0b\x03\x14\x77\x69\x74"
  "\x68\x2d\x6e\x65\x77\x2d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x73"
  "\x11\x03\x0f\x65\x64\x67\x65\x2d\x6e\x65\x78\x74\x2d\x6e\x6f\x64"
  "\x65\x12\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x13\x03\x19\x69"
  "\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x63\x6f\x6e\x74\x65\x78"
  "\x74\x73\x2f\x6e\x6f\x64\x65\x14\x03\x19\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x73\x2f\x6e\x65"
  "\x78\x74\x15\x06\x29\x12\x81\x83\x02\x28\x10\x81\x85\x02\x27\x0e"
  "\x83\x04\x26\x0c\x81\x85\x02\x25\x0a\x81\x83\x02\x24\x08\x81\x87"
  "\x02\x23\x06\x81\x83\x02\x22\x04\x84\x06\x11\x22\x16\x02\x0e\x02"
  "\x03\x14\x03\x0d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x65\x64\x3f"
  "\x17\x03\x2b\x06\x83\x04\x2a\x04\x81\x83\x02\x05\x0e\x18\x02\x0f"
  "\x08\x13\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6e\x6f\x64\x65\x20\x74"
  "\x79\x70\x65\x3a\x19\x0d\x70\x61\x72\x61\x6c\x6c\x65\x6c\x2d\x74"
  "\x61\x67\x1a\x10\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x74\x61\x67\x1b\x13\x76\x69\x72\x74\x75\x61\x6c\x2d\x72\x65\x74"
  "\x75\x72\x6e\x2d\x74\x61\x67\x1c\x0f\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x2d\x74\x61\x67\x1d\x0f\x64\x65\x66\x69\x6e\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x61\x67\x1e\x14\x73\x74\x61\x63\x6b\x2d\x6f"
  "\x76\x65\x72\x77\x72\x69\x74\x65\x2d\x74\x61\x67\x1f\x08\x70\x6f"
  "\x70\x2d\x74\x61\x67\x20\x0c\x66\x67\x2d\x6e\x6f\x6f\x70\x2d\x74"
  "\x61\x67\x21\x0e\x74\x72\x75\x65\x2d\x74\x65\x73\x74\x2d\x74\x61"
  "\x67\x22\x0a\x03\x0b\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x21\x23"
  "\x03\x1d\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x73\x2f\x70\x61\x72\x61\x6c\x6c\x65\x6c\x24\x03"
  "\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x63\x6f\x6e\x74"
  "\x65\x78\x74\x73\x2f\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e"
  "\x25\x03\x23\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x73\x2f\x76\x69\x72\x74\x75\x61\x6c\x2d\x72"
  "\x65\x74\x75\x72\x6e\x26\x03\x1f\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x73\x2f\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x27\x03\x1f\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x73\x2f\x64\x65\x66"
  "\x69\x6e\x69\x74\x69\x6f\x6e\x28\x03\x24\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x73\x2f\x73\x74"
  "\x61\x63\x6b\x2d\x6f\x76\x65\x72\x77\x72\x69\x74\x65\x29\x03\x12"
  "\x03\x1e\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x73\x2f\x74\x72\x75\x65\x2d\x74\x65\x73\x74\x2a"
  "\x04\x06\x65\x72\x72\x6f\x72\x2b\x03\x15\x0c\x51\x4e\x81\x85\x02"
  "\x50\x4c\x81\x85\x02\x4f\x4a\x81\x85\x02\x4e\x48\x81\x85\x02\x4d"
  "\x46\x81\x85\x02\x4c\x44\x81\x85\x02\x4b\x42\x81\x85\x02\x4a\x40"
  "\x81\x87\x02\x49\x3e\x81\x87\x02\x48\x3c\x81\x85\x02\x47\x3a\x81"
  "\x87\x02\x46\x38\x81\x85\x02\x45\x36\x81\x87\x02\x44\x34\x81\x85"
  "\x02\x43\x32\x81\x87\x02\x42\x30\x81\x85\x02\x41\x2e\x81\x87\x02"
  "\x40\x2c\x81\x85\x02\x3f\x2a\x81\x87\x02\x3e\x28\x81\x85\x02\x3d"
  "\x26\x81\x87\x02\x3c\x24\x81\x85\x02\x3b\x22\x81\x85\x02\x3a\x20"
  "\x81\x89\x02\x39\x1e\x81\x85\x02\x38\x1c\x81\x85\x02\x37\x1a\x81"
  "\x87\x02\x36\x18\x81\x85\x02\x35\x16\x81\x85\x02\x34\x14\x81\x85"
  "\x02\x33\x12\x81\x85\x02\x32\x10\x81\x85\x02\x31\x0e\x81\x85\x02"
  "\x30\x0c\x81\x85\x02\x2f\x0a\x81\x85\x02\x2e\x08\x81\x83\x02\x2d"
  "\x06\x81\x83\x02\x2c\x04\x83\x04\x4d\x76\x2c\x02\x10\x0d\x25\x72"
  "\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x2d\x02\x0c\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x72\x65\x66\x2e\x09\x04\x13\x03\x0b\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x3f\x2f\x03\x15\x03\x12\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x30\x03"
  "\x1e\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x63\x6f\x6e\x74"
  "\x65\x78\x74\x73\x2f\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x31\x05"
  "\x1b\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x63\x6f\x6e\x74"
  "\x65\x78\x74\x73\x2f\x72\x76\x61\x6c\x75\x65\x32\x07\x5f\x1e\x81"
  "\x89\x02\x5e\x1c\x81\x89\x02\x5d\x1a\x81\x87\x02\x5c\x18\x81\x83"
  "\x02\x5b\x16\x81\x85\x02\x5a\x14\x81\x83\x02\x59\x12\x81\x83\x02"
  "\x58\x10\x81\x83\x02\x57\x0e\x81\x85\x02\x56\x0c\x81\x85\x02\x55"
  "\x0a\x83\x04\x54\x08\x81\x83\x02\x53\x06\x81\x85\x02\x52\x04\x83"
  "\x04\x1d\x35\x33\x02\x11\x0b\x02\x0a\x07\x72\x65\x74\x75\x72\x6e"
  "\x08\x0a\x09\x03\x30\x05\x32\x04\x13\x04\x69\x16\x81\x85\x02\x68"
  "\x14\x81\x85\x02\x67\x12\x81\x85\x02\x66\x10\x81\x83\x02\x65\x0e"
  "\x81\x87\x02\x64\x0c\x81\x85\x02\x63\x0a\x81\x85\x02\x62\x08\x81"
  "\x83\x02\x61\x06\x81\x85\x02\x60\x04\x83\x04\x15\x27\x34\x02\x12"
  "\x2d\x2e\x09\x0a\x0a\x02\x08\x03\x30\x05\x32\x04\x1d\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x21\x2f"
  "\x63\x68\x65\x63\x6b\x2d\x6f\x6c\x64\x2d\x04\x75\x1a\x81\x89\x02"
  "\x74\x18\x81\x89\x02\x73\x16\x81\x8b\x02\x72\x14\x81\x89\x02\x71"
  "\x12\x81\x89\x02\x70\x10\x81\x87\x02\x6f\x0e\x81\x87\x02\x6e\x0c"
  "\x81\x89\x02\x6d\x0a\x81\x87\x02\x6c\x08\x81\x85\x02\x6b\x06\x81"
  "\x83\x02\x6a\x04\x83\x04\x19\x2d\x35\x02\x13\x0a\x0a\x02\x08\x03"
  "\x30\x05\x32\x03\x7a\x0c\x81\x87\x02\x79\x0a\x81\x87\x02\x78\x08"
  "\x81\x85\x02\x77\x06\x81\x83\x02\x76\x04\x83\x04\x0b\x18\x36\x02"
  "\x14\x0a\x0a\x02\x08\x03\x30\x05\x32\x03\x7f\x0c\x81\x87\x02\x7e"
  "\x0a\x81\x87\x02\x7d\x08\x81\x85\x02\x7c\x06\x81\x83\x02\x7b\x04"
  "\x83\x04\x0b\x18\x37\x02\x15\x02\x0a\x08\x03\x30\x02\x83\x01\x0a"
  "\x81\x83\x02\x82\x01\x08\x81\x83\x02\x81\x01\x06\x81\x85\x02\x80"
  "\x01\x04\x83\x04\x09\x13\x38\x02\x16\x0a\x0a\x02\x09\x03\x30\x05"
  "\x32\x03\x88\x01\x0c\x81\x87\x02\x87\x01\x0a\x81\x87\x02\x86\x01"
  "\x08\x81\x85\x02\x85\x01\x06\x81\x83\x02\x84\x01\x04\x83\x04\x0b"
  "\x18\x39\x02\x17\x0a\x02\x13\x09\x23\x5b\x76\x61\x6c\x75\x65\x5d"
  "\x10\x2e\x16\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70\x65\x2f\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x1c\x72\x76\x61\x6c\x75\x65\x2d"
  "\x74\x79\x70\x65\x2f\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d"
  "\x74\x65\x73\x74\x16\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70\x65"
  "\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x04\x03\x31\x04\x2d\x03"
  "\x0b\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x3f\x04\x98\x01\x22\x81"
  "\x89\x02\x97\x01\x20\x81\x89\x02\x96\x01\x1e\x81\x89\x02\x95\x01"
  "\x1c\x81\x89\x02\x94\x01\x1a\x81\x83\x02\x93\x01\x18\x81\x89\x02"
  "\x92\x01\x16\x81\x89\x02\x91\x01\x14\x81\x8b\x02\x90\x01\x12\x81"
  "\x89\x02\x8f\x01\x10\x81\x8b\x02\x8e\x01\x0e\x81\x89\x02\x8d\x01"
  "\x0c\x81\x89\x02\x8c\x01\x0a\x81\x89\x02\x8b\x01\x08\x81\x87\x02"
  "\x8a\x01\x06\x81\x87\x02\x89\x01\x04\x85\x08\x21\x39\x3a\x02\x18"
  "\x0a\x02\x03\x17\x6d\x61\x6b\x65\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x0a\x02\x9b\x01\x08\x81"
  "\x87\x02\x9a\x01\x06\x81\x89\x02\x99\x01\x04\x83\x04\x07\x11\x3b"
  "\x02\x19\x02\x04\x2d\x02\x9f\x01\x0a\x81\x8b\x02\x9e\x01\x08\x81"
  "\x8d\x02\x9d\x01\x06\x81\x8b\x02\x9c\x01\x04\x87\x0c\x09\x10\x3c"
  "\x02\x1a\x1b\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x6f\x6e"
  "\x74\x65\x78\x74\x20\x6d\x69\x73\x6d\x61\x74\x63\x68\x02\x05\x2b"
  "\x02\xa0\x01\x04\x84\x06\x03\x0b\x3d\x02\x1b\x03\x07\x62\x6c\x6f"
  "\x63\x6b\x3f\x03\x0a\x03\xa2\x01\x06\x81\x83\x02\xa1\x01\x04\x83"
  "\x04\x05\x0d\x3e\x02\x1c\x03\x11\x04\x15\x6d\x6f\x64\x69\x66\x79"
  "\x2d\x63\x6f\x6e\x74\x65\x78\x74\x73\x2f\x6e\x6f\x64\x65\x11\x03"
  "\x23\x04\xa5\x01\x08\x81\x83\x02\xa4\x01\x06\x81\x83\x02\xa3\x01"
  "\x04\x85\x08\x07\x11\x3f\x02\x1d\x02\x0a\x2e\x19\x08\x09\x1a\x1b"
  "\x1c\x1d\x1e\x1f\x20\x21\x22\x0a\x03\x23\x04\x13\x03\x12\x04\x2b"
  "\x04\x15\x6d\x6f\x64\x69\x66\x79\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x73\x2f\x6e\x65\x78\x74\x2e\x04\x19\x6d\x6f\x64\x69\x66\x79\x2d"
  "\x63\x6f\x6e\x74\x65\x78\x74\x73\x2f\x6f\x70\x65\x72\x61\x74\x6f"
  "\x72\x2b\x03\x2f\x08\xe1\x01\x7a\x81\x87\x02\xe0\x01\x78\x81\x87"
  "\x02\xdf\x01\x76\x81\x87\x02\xde\x01\x74\x81\x85\x02\xdd\x01\x72"
  "\x81\x85\x02\xdc\x01\x70\x81\x85\x02\xdb\x01\x6e\x81\x87\x02\xda"
  "\x01\x6c\x81\x89\x02\xd9\x01\x6a\x81\x87\x02\xd8\x01\x68\x81\x89"
  "\x02\xd7\x01\x66\x81\x87\x02\xd6\x01\x64\x81\x87\x02\xd5\x01\x62"
  "\x81\x87\x02\xd4\x01\x60\x81\x87\x02\xd3\x01\x5e\x81\x89\x02\xd2"
  "\x01\x5c\x81\x89\x02\xd1\x01\x5a\x81\x87\x02\xd0\x01\x58\x81\x85"
  "\x02\xcf\x01\x56\x81\x87\x02\xce\x01\x54\x81\x87\x02\xcd\x01\x52"
  "\x81\x85\x02\xcc\x01\x50\x81\x85\x02\xcb\x01\x4e\x81\x89\x02\xca"
  "\x01\x4c\x81\x87\x02\xc9\x01\x4a\x81\x89\x02\xc8\x01\x48\x81\x87"
  "\x02\xc7\x01\x46\x81\x85\x02\xc6\x01\x44\x81\x85\x02\xc5\x01\x42"
  "\x81\x83\x02\xc4\x01\x40\x81\x89\x02\xc3\x01\x3e\x81\x87\x02\xc2"
  "\x01\x3c\x81\x89\x02\xc1\x01\x3a\x81\x87\x02\xc0\x01\x38\x81\x89"
  "\x02\xbf\x01\x36\x81\x87\x02\xbe\x01\x34\x81\x89\x02\xbd\x01\x32"
  "\x81\x87\x02\xbc\x01\x30\x81\x87\x02\xbb\x01\x2e\x81\x8b\x02\xba"
  "\x01\x2c\x81\x87\x02\xb9\x01\x2a\x81\x89\x02\xb8\x01\x28\x81\x87"
  "\x02\xb7\x01\x26\x81\x89\x02\xb6\x01\x24\x81\x87\x02\xb5\x01\x22"
  "\x81\x87\x02\xb4\x01\x20\x81\x89\x02\xb3\x01\x1e\x81\x87\x02\xb2"
  "\x01\x1c\x81\x89\x02\xb1\x01\x1a\x81\x87\x02\xb0\x01\x18\x81\x89"
  "\x02\xaf\x01\x16\x81\x87\x02\xae\x01\x14\x81\x89\x02\xad\x01\x12"
  "\x81\x87\x02\xac\x01\x10\x81\x89\x02\xab\x01\x0e\x81\x87\x02\xaa"
  "\x01\x0c\x81\x89\x02\xa9\x01\x0a\x81\x87\x02\xa8\x01\x08\x81\x85"
  "\x02\xa7\x01\x06\x81\x85\x02\xa6\x01\x04\x84\x06\x79\xa1\x01\x2f"
  "\x02\x1e\x02\x0b\x0e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74"
  "\x61\x67\x02\x03\x13\x72\x76\x61\x6c\x75\x65\x2d\x6b\x6e\x6f\x77"
  "\x6e\x2d\x76\x61\x6c\x75\x65\x03\x12\x04\x2e\x04\xe7\x01\x0e\x81"
  "\x87\x02\xe6\x01\x0c\x81\x89\x02\xe5\x01\x0a\x81\x89\x02\xe4\x01"
  "\x08\x81\x87\x02\xe3\x01\x06\x81\x85\x02\xe2\x01\x04\x84\x06\x0d"
  "\x1d\x23\x02\x1f\x02\x04\x11\x03\x17\x03\xe9\x01\x06\x84\x06\xe8"
  "\x01\x04\x81\x85\x02\x05\x0e\x22\x1f\x21\x21\x22\x06\x23\x04\x2f"
  "\x04\x3f\x04\x3e\x04\x3d\x04\x3c\x04\x3b\x04\x3a\x04\x39\x04\x38"
  "\x04\x37\x04\x36\x04\x35\x04\x34\x04\x33\x04\x2c\x04\x18\x06\x16"
  "\x04\x10\x04\x0f\x04\x0e\x04\x0d\x04\x0c\x04\x0b\x04\x09\x04\x04"
  "\x04\x04\x1e\x2e\x2b\x11\x1b\x6d\x6f\x64\x69\x66\x79\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x73"
  "\x21\x30\x2d\x13\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x21\x31\x32\x2a\x29\x28\x27\x26\x25\x24\x14"
  "\x15\x1f\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x73\x21"
  "\x28\x61\x64\x64\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63"
  "\x6f\x6e\x74\x65\x78\x74\x2f\x61\x64\x6a\x61\x63\x65\x6e\x74\x2d"
  "\x70\x61\x72\x65\x6e\x74\x73\x21\x23\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x61\x64\x6a\x61\x63"
  "\x65\x6e\x74\x2d\x70\x61\x72\x65\x6e\x74\x3f\x1c\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x13\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x3f\x28\x73\x65\x74\x2d\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x2f\x61\x64\x6a\x61\x63\x65\x6e\x74\x2d\x70\x61\x72\x65\x6e\x74"
  "\x73\x21\x1e\x73\x65\x74\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x6f\x66\x66\x73\x65\x74\x21"
  "\x23\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65"
  "\x78\x74\x2f\x61\x64\x6a\x61\x63\x65\x6e\x74\x2d\x70\x61\x72\x65"
  "\x6e\x74\x73\x19\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x2f\x6f\x66\x66\x73\x65\x74\x18\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x62"
  "\x6c\x6f\x63\x6b\x0a\x1e\x07\x76\x65\x63\x74\x6f\x72\x11\x61\x64"
  "\x6a\x61\x63\x65\x6e\x74\x2d\x70\x61\x72\x65\x6e\x74\x73\x07\x6f"
  "\x66\x66\x73\x65\x74\x06\x62\x6c\x6f\x63\x6b\x04\x12\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x11\x6c"
  "\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x12"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78"
  "\x74\x04\x19\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75\x6e\x70\x61"
  "\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x04\x25\x6e\x61\x6d"
  "\x65\x64\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x73\x65\x74"
  "\x2d\x74\x61\x67\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e"
  "\x21\x0a\x1b\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69\x6e\x65\x2d\x73"
  "\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x05\x03"
  "\x0b\x18\x80\x80\x04\x0a\x16\x81\x81\x02\x09\x14\x81\x81\x02\x08"
  "\x12\x81\x83\x02\x07\x10\x81\x8b\x02\x06\x0e\x81\x85\x02\x05\x0c"
  "\x81\x87\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x83\x02\x02\x06\x81"
  "\x89\x02\x01\x04\x81\x83\x02\x17\x34";

SCHEME_OBJECT *
refctx_so_data_963b8730a728344c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_refctx_so_data_963b8730a728344c [0]))), (sizeof (prog_refctx_so_data_963b8730a728344c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_18]));
}

DECLARE_COMPILED_DATA_NS ("refctx.so", refctx_so_data_963b8730a728344c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("refctx.so", "16968b1756defc01")
