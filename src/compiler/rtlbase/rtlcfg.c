/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:20-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_7 5
#define LABEL_1_5 7
#define LABEL_1_6 9
#define ENVIRONMENT_LABEL_1_3 19
#define DEBUGGING_LABEL_1_2 18
#define OBJECT_1_0 17
#define EXECUTE_CACHE_1_9 11
#define EXECUTE_CACHE_1_8 13
#define FREE_REFERENCE_1_0 16
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_8;
  Wrd12 = Wrd16;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd13.pObj));

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_5 7
#define LABEL_2_6 9
#define ENVIRONMENT_LABEL_2_3 19
#define DEBUGGING_LABEL_2_2 18
#define OBJECT_2_0 17
#define EXECUTE_CACHE_2_9 11
#define EXECUTE_CACHE_2_8 13
#define FREE_REFERENCE_2_0 16
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_2_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_8;
  Wrd12 = Wrd16;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd13.pObj));

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_7;

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
rtlcfg_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bblock_instructions_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_instructions_3)
DEFLABEL (bblock_instructions_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 8
#define DEBUGGING_LABEL_4_2 7
#define OBJECT_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto set_bblock_instructionsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_bblock_instructionsB_3)
DEFLABEL (set_bblock_instructionsB_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_4_1]);
  Rsp = (& (Rsp [3]));
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
rtlcfg_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto bblock_live_at_entry_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_live_at_entry_3)
DEFLABEL (bblock_live_at_entry_0)
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
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
rtlcfg_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_bblock_live_at_entryB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_bblock_live_at_entryB_3)
DEFLABEL (set_bblock_live_at_entryB_0)
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [10]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 7
#define DEBUGGING_LABEL_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto bblock_live_at_exit_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_live_at_exit_3)
DEFLABEL (bblock_live_at_exit_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 8
#define DEBUGGING_LABEL_8_2 7
#define OBJECT_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto set_bblock_live_at_exitB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_bblock_live_at_exitB_3)
DEFLABEL (set_bblock_live_at_exitB_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [11]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_8_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto bblock_new_live_at_exit_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_new_live_at_exit_3)
DEFLABEL (bblock_new_live_at_exit_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [12]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 8
#define DEBUGGING_LABEL_10_2 7
#define OBJECT_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto set_bblock_new_live_at_exitB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_bblock_new_live_at_exitB_3)
DEFLABEL (set_bblock_new_live_at_exitB_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [12]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_10_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto bblock_register_map_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_register_map_3)
DEFLABEL (bblock_register_map_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [12]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 8
#define DEBUGGING_LABEL_12_2 7
#define OBJECT_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto set_bblock_register_mapB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_bblock_register_mapB_3)
DEFLABEL (set_bblock_register_mapB_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [12]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_12_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto bblock_label_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_label_3)
DEFLABEL (bblock_label_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [13]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 8
#define DEBUGGING_LABEL_14_2 7
#define OBJECT_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto set_bblock_labelB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_bblock_labelB_3)
DEFLABEL (set_bblock_labelB_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [13]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 7
#define DEBUGGING_LABEL_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto bblock_continuations_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_continuations_3)
DEFLABEL (bblock_continuations_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [14]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

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
rtlcfg_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto set_bblock_continuationsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_bblock_continuationsB_3)
DEFLABEL (set_bblock_continuationsB_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [14]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_16_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 7
#define DEBUGGING_LABEL_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto sblock_continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sblock_continuation_3)
DEFLABEL (sblock_continuation_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [15]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 8
#define DEBUGGING_LABEL_18_2 7
#define OBJECT_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto set_sblock_continuationB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_sblock_continuationB_3)
DEFLABEL (set_sblock_continuationB_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [15]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_18_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 10
#define DEBUGGING_LABEL_19_2 9
#define OBJECT_19_0 8
#define FREE_REFERENCE_19_0 7
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_19_4);
      goto make_sblock_0;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_sblock_4)
DEFLABEL (make_sblock_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd30.Obj) = (MAKE_OBJECT (0, 15));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd25.Obj) = (current_block [OBJECT_19_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = (Rsp [0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = (& (Rhp [-16]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd14.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 7
#define DEBUGGING_LABEL_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto pblock_consequent_lap_generator_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pblock_consequent_lap_generator_3)
DEFLABEL (pblock_consequent_lap_generator_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [15]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 8
#define DEBUGGING_LABEL_21_2 7
#define OBJECT_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto set_pblock_consequent_lap_generatorB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_pblock_consequent_lap_generatorB_3)
DEFLABEL (set_pblock_consequent_lap_generatorB_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [15]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_21_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 7
#define DEBUGGING_LABEL_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto pblock_alternative_lap_generator_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pblock_alternative_lap_generator_3)
DEFLABEL (pblock_alternative_lap_generator_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [16]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 8
#define DEBUGGING_LABEL_23_2 7
#define OBJECT_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto set_pblock_alternative_lap_generatorB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_pblock_alternative_lap_generatorB_3)
DEFLABEL (set_pblock_alternative_lap_generatorB_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [16]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_23_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 10
#define DEBUGGING_LABEL_24_2 9
#define OBJECT_24_0 8
#define FREE_REFERENCE_24_0 7
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_24_4);
      goto make_pblock_0;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_pblock_4)
DEFLABEL (make_pblock_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd31.Obj) = (MAKE_OBJECT (0, 16));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd26.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (Rsp [0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = (& (Rhp [-17]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd14.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_8 7
#define LABEL_25_6 9
#define ENVIRONMENT_LABEL_25_3 20
#define DEBUGGING_LABEL_25_2 19
#define EXECUTE_CACHE_25_10 11
#define EXECUTE_CACHE_25_9 13
#define EXECUTE_CACHE_25_7 15
#define FREE_REFERENCE_25_0 18
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_25_4);
      goto statement__srtl_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (statement__srtl_6)
DEFLABEL (statement__srtl_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_8])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_9 9
#define LABEL_26_7 11
#define ENVIRONMENT_LABEL_26_3 23
#define DEBUGGING_LABEL_26_2 22
#define EXECUTE_CACHE_26_11 13
#define EXECUTE_CACHE_26_10 15
#define EXECUTE_CACHE_26_8 17
#define FREE_REFERENCE_26_1 20
#define FREE_REFERENCE_26_0 21
#define FREE_REFERENCES_LABEL_26_0 12
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_26_4);
      goto predicate__prtl_2;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_9);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (predicate__prtl_7)
DEFLABEL (predicate__prtl_2)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_9])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define OBJECT_27_1 10
#define OBJECT_27_0 9
#define EXECUTE_CACHE_27_6 7
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto bblock_reversed_instructions_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_reversed_instructions_5)
DEFLABEL (bblock_reversed_instructions_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [9]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_27_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_6 5
#define TAG_28_7 1
#define LABEL_28_9 7
#define LABEL_28_5 9
#define LABEL_28_8 11
#define LABEL_28_10 13
#define LABEL_28_12 15
#define LABEL_28_14 17
#define LABEL_28_18 19
#define LABEL_28_20 21
#define LABEL_28_19 23
#define LABEL_28_23 25
#define LABEL_28_16 27
#define LABEL_28_25 29
#define LABEL_28_17 31
#define LABEL_28_26 33
#define LABEL_28_22 35
#define LABEL_28_27 37
#define LABEL_28_28 39
#define LABEL_28_29 41
#define LABEL_28_31 43
#define LABEL_28_24 45
#define LABEL_28_30 47
#define LABEL_28_34 49
#define LABEL_28_35 51
#define LABEL_28_36 53
#define LABEL_28_33 55
#define ENVIRONMENT_LABEL_28_3 81
#define DEBUGGING_LABEL_28_2 80
#define OBJECT_28_10 79
#define OBJECT_28_9 78
#define OBJECT_28_8 77
#define OBJECT_28_7 76
#define OBJECT_28_6 75
#define OBJECT_28_5 74
#define OBJECT_28_4 73
#define OBJECT_28_3 72
#define OBJECT_28_2 71
#define OBJECT_28_1 70
#define OBJECT_28_0 69
#define EXECUTE_CACHE_28_37 57
#define EXECUTE_CACHE_28_32 59
#define EXECUTE_CACHE_28_21 61
#define EXECUTE_CACHE_28_15 63
#define EXECUTE_CACHE_28_13 65
#define EXECUTE_CACHE_28_11 67
#define FREE_REFERENCES_LABEL_28_0 56
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd83;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd74;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd49;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd93;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd55;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_28_4);
      goto bblock_compressB_34;

    case 1:
      current_block = (Rpc - LABEL_28_6);
      goto lambda_48;

    case 2:
      current_block = (Rpc - LABEL_28_9);
      goto walk_bblock_31;

    case 3:
      current_block = (Rpc - LABEL_28_5);
      goto lambda_1;

    case 4:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_28_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_28_14);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_28_18);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_28_20);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_28_19);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_28_23);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_28_16);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_28_25);
      goto label_38;

    case 14:
      current_block = (Rpc - LABEL_28_17);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_28_26);
      goto continuation_29;

    case 16:
      current_block = (Rpc - LABEL_28_22);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_28_27);
      goto label_39;

    case 18:
      current_block = (Rpc - LABEL_28_28);
      goto label_40;

    case 19:
      current_block = (Rpc - LABEL_28_29);
      goto label_41;

    case 20:
      current_block = (Rpc - LABEL_28_31);
      goto label_42;

    case 21:
      current_block = (Rpc - LABEL_28_24);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_28_30);
      goto continuation_24;

    case 23:
      current_block = (Rpc - LABEL_28_34);
      goto label_45;

    case 24:
      current_block = (Rpc - LABEL_28_35);
      goto label_43;

    case 25:
      current_block = (Rpc - LABEL_28_36);
      goto label_44;

    case 26:
      current_block = (Rpc - LABEL_28_33);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_compressB_47)
DEFLABEL (bblock_compressB_34)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_6])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_51;

DEFLABEL (label_52)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_51)
DEFLABEL (label_53)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  Rdl = (& (Rsp [5]));
  goto walk_bblock_31;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_28_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_54;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_55;

DEFLABEL (label_56)
  Rvl = (current_block [OBJECT_28_0]);

DEFLABEL (label_55)
DEFLABEL (label_57)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (walk_bblock_49)
DEFLABEL (walk_bblock_31)
  DLINK_INTERRUPT_CHECK (25, LABEL_28_9);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_28_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_58)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_28_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_28_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_60;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd22.Lng))))
    goto label_60;
  (Wrd16.Obj) = ((Wrd20.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_21]));

DEFLABEL (label_60)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Obj) = (current_block [OBJECT_28_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_20]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (label_36)
DEFLABEL (label_61)
  (Wrd55.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd55.Obj));
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_16]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_17]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd53.Obj) = (Rsp [4]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_63;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd52.Lng))))
    goto label_63;
  (Wrd46.Obj) = ((Wrd50.pObj) [7]);
  (* (--Rsp)) = (Wrd46.Obj);
  goto label_59;

DEFLABEL (label_63)
  (Wrd59.Obj) = (Rsp [4]);
  (Wrd60.Obj) = (current_block [OBJECT_28_2]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_18]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (label_37)
  goto label_61;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_28_19);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto pop_return;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_28_22);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_64;
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_64)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_80;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_80;
  (Wrd9.Obj) = ((Wrd15.pObj) [6]);

DEFLABEL (label_79)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_78;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd29.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_77)
  if ((Wrd29.Obj) == (current_block [OBJECT_28_7]))
    goto label_66;

DEFLABEL (label_65)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.pObj) = (& (Rsp [5]));
  {
    SCHEME_OBJECT * IPDLp1 = (((Wrd46.pObj) <= Rdl) ? (Wrd46.pObj) : Rdl);
    (* (--IPDLp1)) = (Rsp [1]);
    (* (--IPDLp1)) = (Rsp [0]);
    Rsp = IPDLp1;
  }
  goto walk_bblock_31;

DEFLABEL (label_66)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_76;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd55.Lng))))
    goto label_76;
  (Wrd49.Obj) = ((Wrd53.pObj) [9]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_75)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_30]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd81.Obj) = (Rsp [4]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 10))
    goto label_74;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd80.Lng))))
    goto label_74;
  (Wrd74.Obj) = ((Wrd78.pObj) [9]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_73)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_32]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_28_30);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = Rvl;
  (Wrd7.Obj) = (* (Rsp++));
  (Wrd61.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd61.uLng) == 10))
    goto label_72;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd60.Lng))))
    goto label_72;
  ((Wrd58.pObj) [3]) = (Wrd7.Obj);

DEFLABEL (label_71)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_70;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_70;
  (Wrd9.Obj) = ((Wrd15.pObj) [9]);

DEFLABEL (label_69)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_68;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd42.Lng))))
    goto label_68;
  ((Wrd40.pObj) [9]) = (Wrd9.Obj);

DEFLABEL (label_67)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_26]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_37]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_28_26);
  (Wrd93.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd93.Obj));
  goto label_65;

DEFLABEL (label_68)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_28_8]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_36]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_10]), 3);

DEFLABEL (label_44)
  (Wrd45.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd45.Obj));
  goto label_67;

DEFLABEL (label_70)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_28_8]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_35]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (label_43)
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd9.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd67.Obj) = (current_block [OBJECT_28_9]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_34]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_10]), 3);

DEFLABEL (label_45)
  (Wrd62.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd62.Obj));
  goto label_71;

DEFLABEL (label_74)
  (Wrd87.Obj) = (Rsp [4]);
  (Wrd88.Obj) = (current_block [OBJECT_28_8]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_31]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (label_42)
  (Wrd83.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd83.Obj));
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.Obj) = (current_block [OBJECT_28_8]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_29]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (label_41)
  (Wrd58.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd58.Obj));
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_28]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_6]), 1);

DEFLABEL (label_40)
  (Wrd32.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (current_block [OBJECT_28_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_27]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (label_39)
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd9.Obj) = Rvl;
  goto label_79;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_28_17);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [6]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto pop_return;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_28_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd34.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd37.pObj)));
  (Rsp [1]) = (Wrd39.Obj);
  Rdl = (& (Rsp [2]));
  goto walk_bblock_31;

DEFLABEL (label_81)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_85)
  (Wrd41.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_84;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd20.Lng))))
    goto label_84;
  (Wrd14.Obj) = ((Wrd18.pObj) [8]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_83)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_28_24);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_33]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto pop_return;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28_33);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto walk_bblock_31;

DEFLABEL (label_82)
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_84)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_28_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_25]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (label_38)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_28_16);
  goto label_85;

DEFLABEL (lambda_50)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_28_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define LABEL_29_7 9
#define LABEL_29_8 11
#define LABEL_29_9 13
#define ENVIRONMENT_LABEL_29_3 19
#define DEBUGGING_LABEL_29_2 18
#define OBJECT_29_3 17
#define OBJECT_29_2 16
#define OBJECT_29_1 15
#define OBJECT_29_0 14
#define FREE_REFERENCES_LABEL_29_0 14
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_29_4);
      goto bblock_walk_forward_7;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto loop_5;

    case 3:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_29_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_29_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_walk_forward_13)
DEFLABEL (bblock_walk_forward_7)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  goto loop_5;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_29_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (loop_14)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_29_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_21;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd30.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_29_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_20;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_20;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_5;

DEFLABEL (label_20)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_29_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_10)
  (Wrd11.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_29_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_7 9
#define LABEL_30_8 11
#define LABEL_30_9 13
#define ENVIRONMENT_LABEL_30_3 18
#define DEBUGGING_LABEL_30_2 17
#define OBJECT_30_2 16
#define OBJECT_30_1 15
#define OBJECT_30_0 14
#define FREE_REFERENCES_LABEL_30_0 14
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd51;
  machine_word Wrd59;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd7;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd61;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_30_4);
      goto bblock_walk_backward_7;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto loop_5;

    case 4:
      current_block = (Rpc - LABEL_30_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_30_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_walk_backward_13)
DEFLABEL (bblock_walk_backward_7)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_16;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd15.Lng))))
    goto label_16;
  (Wrd9.Obj) = ((Wrd13.pObj) [9]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_15)
  Rdl = (& (Rsp [4]));
  goto loop_5;

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_30_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (loop_14)
DEFLABEL (loop_5)
  DLINK_INTERRUPT_CHECK (25, LABEL_30_7);
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_21;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd48.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd46.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_18)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_20;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_20;
  (Wrd24.Obj) = ((Wrd28.pObj) [3]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_19)
  Rdl = (& (Rsp [2]));
  goto loop_5;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (Wrd61.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd61.Obj));
  goto label_17;

DEFLABEL (label_20)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.Obj) = (current_block [OBJECT_30_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_10)
  (Wrd33.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd33.Obj));
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.Obj) = (current_block [OBJECT_30_2]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_11)
  (Wrd51.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd51.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_8 9
#define ENVIRONMENT_LABEL_31_3 17
#define DEBUGGING_LABEL_31_2 16
#define OBJECT_31_2 15
#define OBJECT_31_1 14
#define OBJECT_31_0 13
#define EXECUTE_CACHE_31_7 11
#define FREE_REFERENCES_LABEL_31_0 10
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_31_4);
      goto bblock_labelB_5;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_labelB_10)
DEFLABEL (bblock_labelB_5)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd11.pObj) [13]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_6);
  (Rsp [0]) = Rvl;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  ((Wrd14.pObj) [13]) = Rvl;

DEFLABEL (label_12)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_31_0]);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 3);

DEFLABEL (label_8)
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_31_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_6 5
#define LABEL_32_5 7
#define LABEL_32_9 9
#define LABEL_32_10 11
#define LABEL_32_11 13
#define LABEL_32_12 15
#define LABEL_32_13 17
#define LABEL_32_14 19
#define LABEL_32_7 21
#define LABEL_32_15 23
#define LABEL_32_18 25
#define LABEL_32_16 27
#define LABEL_32_17 29
#define ENVIRONMENT_LABEL_32_3 48
#define DEBUGGING_LABEL_32_2 47
#define OBJECT_32_5 46
#define OBJECT_32_4 45
#define OBJECT_32_3 44
#define OBJECT_32_2 43
#define OBJECT_32_1 42
#define OBJECT_32_0 41
#define EXECUTE_CACHE_32_21 31
#define EXECUTE_CACHE_32_20 33
#define EXECUTE_CACHE_32_19 35
#define EXECUTE_CACHE_32_8 37
#define FREE_REFERENCE_32_0 40
#define FREE_REFERENCES_LABEL_32_0 30
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd31;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd49;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_32_4);
      goto bblock_perform_deletionsB_13;

    case 1:
      current_block = (Rpc - LABEL_32_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_32_9);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_32_10);
      goto loop_12;

    case 5:
      current_block = (Rpc - LABEL_32_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_32_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_32_13);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_32_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_32_15);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_32_18);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_32_16);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_32_17);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bblock_perform_deletionsB_23)
DEFLABEL (bblock_perform_deletionsB_13)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_33;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_33;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_32)
  goto loop_12;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_28;
  Wrd6 = Wrd10;

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_17]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_26;
  Wrd18 = Wrd22;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_16);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_20]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_18])), (Wrd19.pObj));

DEFLABEL (label_21)
  (Wrd18.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_15])), (Wrd7.pObj));

DEFLABEL (label_20)
  (Wrd6.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_3]), 3);

DEFLABEL (label_31)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd20.Lng))))
    goto label_30;
  ((Wrd18.pObj) [9]) = Rvl;
  Rvl = (current_block [OBJECT_32_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_32_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (loop_24)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_32_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 10))
    goto label_45;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd81.Lng))))
    goto label_45;
  (Wrd10.Obj) = ((Wrd79.pObj) [3]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;

DEFLABEL (label_43)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_42;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd68.Lng))))
    goto label_42;
  (Wrd62.Obj) = ((Wrd66.pObj) [3]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_41)
  goto loop_12;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_32_9);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_40)
  Rdl = (& (Rsp [2]));
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_39;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd46.Lng))))
    goto label_39;
  (Wrd16.Obj) = ((Wrd44.pObj) [1]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;

DEFLABEL (label_37)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_36;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd28.Lng))))
    goto label_36;
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [3]) = (Wrd22.Obj);

DEFLABEL (label_35)
  Rvl = (Rsp [1]);

DEFLABEL (label_34)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_36)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_32_4]);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_3]), 3);

DEFLABEL (label_16)
  (Wrd31.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd31.Obj));
  goto label_35;

DEFLABEL (label_38)
  Rvl = (Rsp [0]);
  goto label_34;

DEFLABEL (label_39)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (current_block [OBJECT_32_5]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_17)
  (Wrd49.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd49.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_37;

DEFLABEL (label_42)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.Obj) = (current_block [OBJECT_32_4]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_40;

DEFLABEL (label_45)
  (Wrd84.Obj) = (Rsp [1]);
  (Wrd85.Obj) = (current_block [OBJECT_32_4]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_43;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 9
#define DEBUGGING_LABEL_33_2 8
#define OBJECT_33_0 7
#define EXECUTE_CACHE_33_5 5
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto pcfg_prefer_consequentB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_prefer_consequentB_3)
DEFLABEL (pcfg_prefer_consequentB_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 9
#define DEBUGGING_LABEL_34_2 8
#define OBJECT_34_0 7
#define EXECUTE_CACHE_34_5 5
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto pcfg_prefer_alternativeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_prefer_alternativeB_3)
DEFLABEL (pcfg_prefer_alternativeB_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_6 5
#define LABEL_35_5 7
#define LABEL_35_7 9
#define LABEL_35_8 11
#define LABEL_35_12 13
#define LABEL_35_10 15
#define LABEL_35_16 17
#define LABEL_35_15 19
#define ENVIRONMENT_LABEL_35_3 38
#define DEBUGGING_LABEL_35_2 37
#define OBJECT_35_3 36
#define OBJECT_35_2 35
#define OBJECT_35_1 34
#define OBJECT_35_0 33
#define EXECUTE_CACHE_35_17 21
#define EXECUTE_CACHE_35_14 23
#define EXECUTE_CACHE_35_13 25
#define EXECUTE_CACHE_35_11 27
#define EXECUTE_CACHE_35_9 29
#define FREE_REFERENCE_35_0 32
#define FREE_REFERENCES_LABEL_35_0 20
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_35_4);
      goto pcfg_prefer_branchB_9;

    case 1:
      current_block = (Rpc - LABEL_35_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto loop_7;

    case 4:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_35_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_35_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_35_16);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_35_15);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_prefer_branchB_15)
DEFLABEL (pcfg_prefer_branchB_9)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_18;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_18;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_17)
  goto loop_7;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_5);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_35_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_35_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  (Wrd26.Obj) = (current_block [OBJECT_35_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_14]));

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_21;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_21;
  (Wrd12.Obj) = ((Wrd16.pObj) [7]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_15);
  (Rsp [0]) = Rvl;
  goto loop_7;

DEFLABEL (label_21)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_35_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_16]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_24;
  Wrd7 = Wrd11;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_13]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_12])), (Wrd8.pObj));

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define ENVIRONMENT_LABEL_36_3 12
#define DEBUGGING_LABEL_36_2 11
#define EXECUTE_CACHE_36_6 7
#define FREE_REFERENCE_36_0 10
#define FREE_REFERENCES_LABEL_36_0 6
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_36_4);
      goto pnode_preferred_branch_0;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pnode_preferred_branch_4)
DEFLABEL (pnode_preferred_branch_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 7
#define DEBUGGING_LABEL_37_2 6
#define OBJECT_37_1 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto rinst_rtl_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rinst_rtl_3)
DEFLABEL (rinst_rtl_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 8
#define DEBUGGING_LABEL_38_2 7
#define OBJECT_38_2 6
#define OBJECT_38_1 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto set_rinst_rtlB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_rinst_rtlB_3)
DEFLABEL (set_rinst_rtlB_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_38_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [1]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_38_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 7
#define DEBUGGING_LABEL_39_2 6
#define OBJECT_39_1 5
#define OBJECT_39_0 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto rinst_dead_registers_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rinst_dead_registers_3)
DEFLABEL (rinst_dead_registers_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_39_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

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

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 8
#define DEBUGGING_LABEL_40_2 7
#define OBJECT_40_2 6
#define OBJECT_40_1 5
#define OBJECT_40_0 4
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto set_rinst_dead_registersB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_rinst_dead_registersB_3)
DEFLABEL (set_rinst_dead_registersB_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_40_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 7
#define DEBUGGING_LABEL_41_2 6
#define OBJECT_41_1 5
#define OBJECT_41_0 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto rinst_next_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rinst_next_3)
DEFLABEL (rinst_next_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

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

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 8
#define DEBUGGING_LABEL_42_2 7
#define OBJECT_42_2 6
#define OBJECT_42_1 5
#define OBJECT_42_0 4
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto set_rinst_nextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_rinst_nextB_3)
DEFLABEL (set_rinst_nextB_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_42_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define ENVIRONMENT_LABEL_43_3 6
#define DEBUGGING_LABEL_43_2 5
#define OBJECT_43_0 4
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto make_rtl_instruction_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_rtl_instruction_3)
DEFLABEL (make_rtl_instruction_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (current_block [OBJECT_43_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define ENVIRONMENT_LABEL_44_3 12
#define DEBUGGING_LABEL_44_2 11
#define OBJECT_44_1 10
#define OBJECT_44_0 9
#define EXECUTE_CACHE_44_6 7
#define FREE_REFERENCES_LABEL_44_0 6
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto rinst_dead_registerP_1;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rinst_dead_registerP_5)
DEFLABEL (rinst_dead_registerP_1)
  INTERRUPT_CHECK (26, LABEL_44_4);
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
  (Wrd21.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd21.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_44_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_6 7
#define ENVIRONMENT_LABEL_45_3 14
#define DEBUGGING_LABEL_45_2 13
#define OBJECT_45_1 12
#define OBJECT_45_0 11
#define EXECUTE_CACHE_45_7 9
#define FREE_REFERENCES_LABEL_45_0 8
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd7;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      goto rinst_last_2;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rinst_last_7)
DEFLABEL (rinst_last_2)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_12;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd30.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_45_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_12)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_45_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_6 7
#define LABEL_46_7 9
#define LABEL_46_8 11
#define ENVIRONMENT_LABEL_46_3 18
#define DEBUGGING_LABEL_46_2 17
#define OBJECT_46_4 16
#define OBJECT_46_3 15
#define OBJECT_46_2 14
#define OBJECT_46_1 13
#define OBJECT_46_0 12
#define FREE_REFERENCES_LABEL_46_0 12
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd38;
  machine_word Wrd21;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_46_4);
      goto rinst_disconnect_previousB_7;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_46_6);
      goto loop_5;

    case 3:
      current_block = (Rpc - LABEL_46_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_46_8);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rinst_disconnect_previousB_13)
DEFLABEL (rinst_disconnect_previousB_7)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  goto loop_5;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_46_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (loop_14)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_46_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_22)
  (Wrd21.Obj) = (Rsp [2]);
  if ((Wrd21.Obj) == (Wrd5.Obj))
    goto label_19;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_18;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_18;
  (Wrd22.Obj) = ((Wrd28.pObj) [3]);

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd22.Obj);
  goto loop_5;

DEFLABEL (label_18)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (current_block [OBJECT_46_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_11)
  (Wrd22.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd38.Obj) = (current_block [OBJECT_46_2]);
  (Rsp [1]) = (Wrd38.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 10)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 3);

DEFLABEL (label_21)
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd50.Lng))))
    goto label_20;
  ((Wrd48.pObj) [3]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_46_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_46_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_6 7
#define LABEL_47_7 9
#define ENVIRONMENT_LABEL_47_3 14
#define DEBUGGING_LABEL_47_2 13
#define OBJECT_47_2 12
#define OBJECT_47_1 11
#define OBJECT_47_0 10
#define FREE_REFERENCES_LABEL_47_0 10
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_47_4);
      goto rinst_length_5;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto loop_3;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_47_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rinst_length_10)
DEFLABEL (rinst_length_5)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_47_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_3;

DEFLABEL (loop_11)
DEFLABEL (loop_3)
  INTERRUPT_CHECK (26, LABEL_47_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_16;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_14;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd32.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_14;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd27.Obj);
  goto loop_3;

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_8)
  (Wrd27.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_47_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 2);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define ENVIRONMENT_LABEL_48_3 12
#define DEBUGGING_LABEL_48_2 11
#define OBJECT_48_2 10
#define OBJECT_48_1 9
#define OBJECT_48_0 8
#define FREE_REFERENCES_LABEL_48_0 8
#define NUMBER_OF_LINKER_SECTIONS_48_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcfg_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_48_4);
      goto rinst_reversed_5;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto loop_3;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rinst_reversed_9)
DEFLABEL (rinst_reversed_5)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_48_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_3;

DEFLABEL (loop_10)
DEFLABEL (loop_3)
  INTERRUPT_CHECK (26, LABEL_48_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_13;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_13;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd12.Obj);
  goto loop_3;

DEFLABEL (label_13)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_48_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_7)
  (Wrd12.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6 3
#define LABEL_4 5
#define LABEL_10 7
#define LABEL_5 9
#define LABEL_8 11
#define LABEL_13 13
#define LABEL_9 15
#define LABEL_12 17
#define LABEL_17 19
#define LABEL_15 21
#define LABEL_20 23
#define LABEL_16 25
#define LABEL_18 27
#define LABEL_22 29
#define LABEL_19 31
#define LABEL_21 33
#define LABEL_23 35
#define LABEL_28 37
#define LABEL_25 39
#define LABEL_26 41
#define LABEL_30 43
#define LABEL_27 45
#define LABEL_29 47
#define LABEL_31 49
#define LABEL_35 51
#define LABEL_37 53
#define LABEL_38 55
#define LABEL_39 57
#define LABEL_40 59
#define LABEL_41 61
#define LABEL_42 63
#define LABEL_43 65
#define LABEL_32 67
#define LABEL_46 69
#define LABEL_33 71
#define LABEL_47 73
#define LABEL_34 75
#define LABEL_44 77
#define LABEL_49 79
#define LABEL_50 81
#define LABEL_45 83
#define LABEL_51 85
#define LABEL_52 87
#define LABEL_53 89
#define ENVIRONMENT_LABEL_3 144
#define DEBUGGING_LABEL_2 143
#define PURIFICATION_ROOT 142
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
#define EXECUTE_CACHE_48 91
#define EXECUTE_CACHE_36 93
#define EXECUTE_CACHE_14 95
#define EXECUTE_CACHE_11 97
#define EXECUTE_CACHE_7 99
#define FREE_REFERENCE_3 102
#define FREE_REFERENCE_2 103
#define FREE_REFERENCE_1 104
#define FREE_REFERENCE_0 105
#define GLOBAL_EXECUTE_CACHE_24 107
#define FREE_REFERENCES_LABEL_0 90
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rtlcfg_so_04f8615bd5241dfb (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd29;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd165;
  machine_word Wrd167;
  machine_word Wrd168;
  machine_word Wrd161;
  machine_word Wrd163;
  machine_word Wrd164;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd145;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd141;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd140;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd117;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd113;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd112;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd89;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_6);
      goto label_60;

    case 1:
      current_block = (Rpc - LABEL_4);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10);
      goto label_61;

    case 3:
      current_block = (Rpc - LABEL_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_13);
      goto label_62;

    case 6:
      current_block = (Rpc - LABEL_9);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_17);
      goto label_63;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_20);
      goto label_64;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto label_65;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_28);
      goto label_66;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto continuation_35;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto continuation_44;

    case 20:
      current_block = (Rpc - LABEL_30);
      goto label_67;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto lambda_43;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto lambda_56;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_38;

    case 24:
      current_block = (Rpc - LABEL_35);
      goto label_68;

    case 25:
      current_block = (Rpc - LABEL_37);
      goto lambda_34;

    case 26:
      current_block = (Rpc - LABEL_38);
      goto label_69;

    case 27:
      current_block = (Rpc - LABEL_39);
      goto label_70;

    case 28:
      current_block = (Rpc - LABEL_40);
      goto label_71;

    case 29:
      current_block = (Rpc - LABEL_41);
      goto label_72;

    case 30:
      current_block = (Rpc - LABEL_42);
      goto label_73;

    case 31:
      current_block = (Rpc - LABEL_43);
      goto label_74;

    case 32:
      current_block = (Rpc - LABEL_32);
      goto continuation_47;

    case 33:
      current_block = (Rpc - LABEL_46);
      goto label_75;

    case 34:
      current_block = (Rpc - LABEL_33);
      goto continuation_36;

    case 35:
      current_block = (Rpc - LABEL_47);
      goto label_76;

    case 36:
      current_block = (Rpc - LABEL_34);
      goto continuation_37;

    case 37:
      current_block = (Rpc - LABEL_44);
      goto continuation_45;

    case 38:
      current_block = (Rpc - LABEL_49);
      goto label_77;

    case 39:
      current_block = (Rpc - LABEL_50);
      goto label_78;

    case 40:
      current_block = (Rpc - LABEL_45);
      goto continuation_46;

    case 41:
      current_block = (Rpc - LABEL_51);
      goto label_84;

    case 42:
      current_block = (Rpc - LABEL_52);
      goto label_85;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto expression_59;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_59)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_52])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_85)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_84)
  {
    static const short sections [] =
      {
	0,
	0,
	0,
	0,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	2,
	2,
	1,
	1,
	2,
	1,
	0,
	0,
	1,
	1,
	2,
	2,
	1,
	0,
	0,
	0,
	0,
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
	0,
	0,
	0,
	0,
	0,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 48)
      goto label_83;
    blocks = (current_block [OBJECT_32]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_51])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_83)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_101;
  Wrd14 = Wrd18;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

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
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_99;
  Wrd11 = Wrd15;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_97;
  Wrd9 = Wrd13;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_95;
  Wrd13 = Wrd17;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_93;
  Wrd11 = Wrd15;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_91;
  Wrd9 = Wrd13;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_89;
  Wrd13 = Wrd17;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_87;
  Wrd7 = Wrd11;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd8.pObj));

DEFLABEL (label_67)
  (Wrd7.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd14.pObj));

DEFLABEL (label_66)
  (Wrd13.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd10.pObj));

DEFLABEL (label_65)
  (Wrd9.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd12.pObj));

DEFLABEL (label_64)
  (Wrd11.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd14.pObj));

DEFLABEL (label_63)
  (Wrd13.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd10.pObj));

DEFLABEL (label_62)
  (Wrd9.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd12.pObj));

DEFLABEL (label_61)
  (Wrd11.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6])), (Wrd15.pObj));

DEFLABEL (label_60)
  (Wrd14.Obj) = Rvl;
  goto label_100;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_12]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_24]));

DEFLABEL (lambda_80)
DEFLABEL (lambda_43)
  INTERRUPT_CHECK (26, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_34;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_105;
  Wrd12 = Wrd16;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_103;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd13.Lng))))
    goto label_103;
  (Wrd5.Obj) = ((Wrd11.pObj) [15]);

DEFLABEL (label_102)
  (Wrd24.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_28]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Rsp [2]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48]));

DEFLABEL (label_103)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_27]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_76)
  (Wrd5.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd13.pObj));

DEFLABEL (label_68)
  (Wrd12.Obj) = Rvl;
  goto label_104;

DEFLABEL (lambda_81)
DEFLABEL (lambda_56)
  INTERRUPT_CHECK (26, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_34;

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_111;
  Wrd12 = Wrd16;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_109;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd13.Lng))))
    goto label_109;
  (Wrd5.Obj) = ((Wrd11.pObj) [16]);

DEFLABEL (label_108)
  (Wrd24.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_30]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_107;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd41.Lng))))
    goto label_107;
  (Wrd33.Obj) = ((Wrd39.pObj) [15]);

DEFLABEL (label_106)
  (Wrd52.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_31]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd57.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Rsp [2]) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48]));

DEFLABEL (label_107)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.Obj) = (current_block [OBJECT_27]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_78)
  (Wrd33.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_29]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_77)
  (Wrd5.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd13.pObj));

DEFLABEL (label_75)
  (Wrd12.Obj) = Rvl;
  goto label_110;

DEFLABEL (lambda_82)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_37);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_123;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd13.Lng))))
    goto label_123;
  (Wrd5.Obj) = ((Wrd11.pObj) [14]);

DEFLABEL (label_122)
  (Wrd24.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_121;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd41.Lng))))
    goto label_121;
  (Wrd33.Obj) = ((Wrd39.pObj) [13]);

DEFLABEL (label_120)
  (Wrd52.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd57.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_119;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd69.Lng))))
    goto label_119;
  (Wrd61.Obj) = ((Wrd67.pObj) [12]);

DEFLABEL (label_118)
  (Wrd80.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (Wrd84.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd77.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd85.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (Wrd87.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd87.pObj)));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 10))
    goto label_117;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd97.Lng))))
    goto label_117;
  (Wrd89.Obj) = ((Wrd95.pObj) [11]);

DEFLABEL (label_116)
  (Wrd108.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd112.Obj) = (current_block [OBJECT_22]);
  (* (Rhp++)) = (Wrd112.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (Wrd111.pObj) = (& (Rhp [-2]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd111.pObj)));
  (Wrd113.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd109.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd126.Obj) = (Rsp [1]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 10))
    goto label_115;
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd124.Obj) = ((Wrd123.pObj) [0]);
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd125.Lng))))
    goto label_115;
  (Wrd117.Obj) = ((Wrd123.pObj) [10]);

DEFLABEL (label_114)
  (Wrd136.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd117.Obj);
  (* (Rhp++)) = (Wrd136.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  (Wrd140.Obj) = (current_block [OBJECT_24]);
  (* (Rhp++)) = (Wrd140.Obj);
  (* (Rhp++)) = (Wrd133.Obj);
  (Wrd139.pObj) = (& (Rhp [-2]));
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd139.pObj)));
  (Wrd141.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd137.Obj);
  (* (Rhp++)) = (Wrd141.Obj);
  (Wrd143.pObj) = (& (Rhp [-2]));
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd143.pObj)));
  (* (--Rsp)) = (Wrd144.Obj);
  (Wrd154.Obj) = (Rsp [1]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd155.uLng) == 10))
    goto label_113;
  (Wrd151.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd152.Obj) = ((Wrd151.pObj) [0]);
  (Wrd153.Lng) = (FIXNUM_TO_LONG (Wrd152.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd153.Lng))))
    goto label_113;
  (Wrd145.Obj) = ((Wrd151.pObj) [9]);

DEFLABEL (label_112)
  (Wrd164.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd145.Obj);
  (* (Rhp++)) = (Wrd164.Obj);
  (Wrd163.pObj) = (& (Rhp [-2]));
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd163.pObj)));
  (Wrd168.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd168.Obj);
  (* (Rhp++)) = (Wrd161.Obj);
  (Wrd167.pObj) = (& (Rhp [-2]));
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd167.pObj)));
  (Wrd169.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd165.Obj);
  (* (Rhp++)) = (Wrd169.Obj);
  (Wrd172.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd172.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd156.Obj) = (Rsp [1]);
  (Wrd157.Obj) = (current_block [OBJECT_25]);
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_74)
  (Wrd145.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd128.Obj) = (Rsp [1]);
  (Wrd129.Obj) = (current_block [OBJECT_23]);
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_73)
  (Wrd117.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd100.Obj) = (Rsp [1]);
  (Wrd101.Obj) = (current_block [OBJECT_21]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_72)
  (Wrd89.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.Obj) = (current_block [OBJECT_19]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_71)
  (Wrd61.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (current_block [OBJECT_17]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_70)
  (Wrd33.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_69)
  (Wrd5.Obj) = Rvl;
  goto label_122;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rtlcfg_so_04f8615bd5241dfb [48] =
  {
    { "rtlcfg_so_code_1", 4, rtlcfg_so_code_1 },
    { "rtlcfg_so_code_2", 4, rtlcfg_so_code_2 },
    { "rtlcfg_so_code_3", 1, rtlcfg_so_code_3 },
    { "rtlcfg_so_code_4", 1, rtlcfg_so_code_4 },
    { "rtlcfg_so_code_5", 1, rtlcfg_so_code_5 },
    { "rtlcfg_so_code_6", 1, rtlcfg_so_code_6 },
    { "rtlcfg_so_code_7", 1, rtlcfg_so_code_7 },
    { "rtlcfg_so_code_8", 1, rtlcfg_so_code_8 },
    { "rtlcfg_so_code_9", 1, rtlcfg_so_code_9 },
    { "rtlcfg_so_code_10", 1, rtlcfg_so_code_10 },
    { "rtlcfg_so_code_11", 1, rtlcfg_so_code_11 },
    { "rtlcfg_so_code_12", 1, rtlcfg_so_code_12 },
    { "rtlcfg_so_code_13", 1, rtlcfg_so_code_13 },
    { "rtlcfg_so_code_14", 1, rtlcfg_so_code_14 },
    { "rtlcfg_so_code_15", 1, rtlcfg_so_code_15 },
    { "rtlcfg_so_code_16", 1, rtlcfg_so_code_16 },
    { "rtlcfg_so_code_17", 1, rtlcfg_so_code_17 },
    { "rtlcfg_so_code_18", 1, rtlcfg_so_code_18 },
    { "rtlcfg_so_code_19", 2, rtlcfg_so_code_19 },
    { "rtlcfg_so_code_20", 1, rtlcfg_so_code_20 },
    { "rtlcfg_so_code_21", 1, rtlcfg_so_code_21 },
    { "rtlcfg_so_code_22", 1, rtlcfg_so_code_22 },
    { "rtlcfg_so_code_23", 1, rtlcfg_so_code_23 },
    { "rtlcfg_so_code_24", 2, rtlcfg_so_code_24 },
    { "rtlcfg_so_code_25", 4, rtlcfg_so_code_25 },
    { "rtlcfg_so_code_26", 5, rtlcfg_so_code_26 },
    { "rtlcfg_so_code_27", 2, rtlcfg_so_code_27 },
    { "rtlcfg_so_code_28", 27, rtlcfg_so_code_28 },
    { "rtlcfg_so_code_29", 6, rtlcfg_so_code_29 },
    { "rtlcfg_so_code_30", 6, rtlcfg_so_code_30 },
    { "rtlcfg_so_code_31", 4, rtlcfg_so_code_31 },
    { "rtlcfg_so_code_32", 14, rtlcfg_so_code_32 },
    { "rtlcfg_so_code_33", 1, rtlcfg_so_code_33 },
    { "rtlcfg_so_code_34", 1, rtlcfg_so_code_34 },
    { "rtlcfg_so_code_35", 9, rtlcfg_so_code_35 },
    { "rtlcfg_so_code_36", 2, rtlcfg_so_code_36 },
    { "rtlcfg_so_code_37", 1, rtlcfg_so_code_37 },
    { "rtlcfg_so_code_38", 1, rtlcfg_so_code_38 },
    { "rtlcfg_so_code_39", 1, rtlcfg_so_code_39 },
    { "rtlcfg_so_code_40", 1, rtlcfg_so_code_40 },
    { "rtlcfg_so_code_41", 1, rtlcfg_so_code_41 },
    { "rtlcfg_so_code_42", 1, rtlcfg_so_code_42 },
    { "rtlcfg_so_code_43", 1, rtlcfg_so_code_43 },
    { "rtlcfg_so_code_44", 2, rtlcfg_so_code_44 },
    { "rtlcfg_so_code_45", 3, rtlcfg_so_code_45 },
    { "rtlcfg_so_code_46", 5, rtlcfg_so_code_46 },
    { "rtlcfg_so_code_47", 4, rtlcfg_so_code_47 },
    { "rtlcfg_so_code_48", 3, rtlcfg_so_code_48 }
  };

int
decl_rtlcfg_so_04f8615bd5241dfb (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rtlcfg_so_04f8615bd5241dfb);
  return (0);
}

DECLARE_COMPILED_CODE ("rtlcfg.so", 44, decl_rtlcfg_so_04f8615bd5241dfb, rtlcfg_so_04f8615bd5241dfb)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rtlcfg_so_data_04f8615bd5241dfb [4303] =
  "\x91\x01\x4a\xab\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x0d\xb9"
  "\x24\x28\x0d\xba\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbc\x1d\xb0\x82\x88\x08\x0d\xbd\x24\x28\xb2\x28\xb3"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x83"
  "\x88\xc2\xbf\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x84\x88\xc3\x1c"
  "\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x85\x88\xb7\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x86\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\xb7\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb7\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\xb7\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\xb7\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb7\x02\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\xb7\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x24\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\xb7\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c"
  "\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x24\x28\x1b\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb7\x02\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x02\x08\xc1\x85\x02\xb7\x86"
  "\x1d\x07\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x82\xb7\x02\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb7\x02\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\xb7\x02\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x80\x82\x1b\x1d\xb7\x02\x0d\x24\x28\x1b"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x0d\x1c\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x1b\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\x0c\xb7\x81\x0d\x1c\x24\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb7\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x80\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb7"
  "\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x81\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb7\x82\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb7\x81\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x82\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x82\xb7\x02\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x82\x80\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x82\x08\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xb8\x17\x1c\x88\x1b\x0d\x1c\x0d\x1c\x02"
  "\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d"
  "\x1c\x02\x0d\x1c\x08\xb7\x02\xb0\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x17\x1b\x0d\x0d\x1b\x0d\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x1b\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x0d\x0d\x1b"
  "\x0d\x1b\x0d\x1b\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x0d\x0d"
  "\x1b\x0d\x1b\x0d\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\xb6\x2a\x1b\x0d\x1b\xb4\x2a\xc3"
  "\x1b\x0d\x28\x0d\x26\xb1\x1b\xb5\x1b\x24\x28\x0d\x28\x0d\x28\x0d"
  "\x28\xb2\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x5c\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x62\x61\x73"
  "\x65\x2f\x72\x74\x6c\x63\x66\x67\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x0a\x73\x6e\x6f\x64\x65\x2d\x74\x61\x67\x02\x03\x17\x76"
  "\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x69\x6f\x6e\x04\x08\x61\x70\x70\x65\x6e\x64\x21\x03\x30"
  "\x0a\x81\x87\x02\x2f\x08\x81\x83\x02\x2e\x06\x81\x89\x02\x2d\x04"
  "\x83\x04\x09\x14\x02\x0a\x70\x6e\x6f\x64\x65\x2d\x74\x61\x67\x02"
  "\x03\x04\x03\x34\x0a\x81\x87\x02\x33\x08\x81\x83\x02\x32\x06\x81"
  "\x89\x02\x31\x04\x83\x04\x09\x14\x02\x0b\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x09\x35\x04\x83\x04\x03\x09\x02\x0c\x76\x65\x63"
  "\x74\x6f\x72\x2d\x73\x65\x74\x21\x0a\x02\x09\x36\x04\x84\x06\x03"
  "\x0b\x02\x0a\x37\x04\x83\x04\x03\x0c\x02\x0a\x02\x0a\x38\x04\x84"
  "\x06\x03\x0d\x02\x08\x0b\x39\x04\x83\x04\x03\x0e\x02\x09\x0a\x02"
  "\x0b\x3a\x04\x84\x06\x03\x0f\x02\x0a\x0c\x3b\x04\x83\x04\x03\x10"
  "\x02\x0b\x0a\x02\x0c\x3c\x04\x84\x06\x03\x11\x02\x0c\x0c\x3d\x04"
  "\x83\x04\x03\x12\x02\x0d\x0a\x02\x0c\x3e\x04\x84\x06\x03\x13\x02"
  "\x0e\x0d\x3f\x04\x83\x04\x03\x14\x02\x0f\x0a\x02\x0d\x40\x04\x84"
  "\x06\x03\x15\x02\x10\x0e\x41\x04\x83\x04\x03\x16\x02\x11\x0a\x02"
  "\x0e\x42\x04\x84\x06\x03\x17\x02\x12\x0f\x43\x04\x83\x04\x03\x18"
  "\x02\x13\x0a\x02\x0f\x44\x04\x84\x06\x03\x19\x02\x14\x0b\x73\x62"
  "\x6c\x6f\x63\x6b\x2d\x74\x61\x67\x1a\x02\x46\x06\x81\x83\x02\x45"
  "\x04\x83\x04\x05\x0b\x1b\x02\x15\x0f\x47\x04\x83\x04\x03\x1c\x02"
  "\x16\x0a\x02\x0f\x48\x04\x84\x06\x03\x1d\x02\x17\x10\x49\x04\x83"
  "\x04\x03\x1e\x02\x18\x0a\x02\x10\x4a\x04\x84\x06\x03\x1f\x02\x19"
  "\x0b\x70\x62\x6c\x6f\x63\x6b\x2d\x74\x61\x67\x20\x02\x4c\x06\x81"
  "\x83\x02\x4b\x04\x83\x04\x05\x0b\x21\x02\x1a\x15\x73\x65\x74\x2d"
  "\x73\x6e\x6f\x64\x65\x2d\x6e\x65\x78\x74\x2d\x65\x64\x67\x65\x21"
  "\x02\x03\x15\x6d\x61\x6b\x65\x2d\x72\x74\x6c\x2d\x69\x6e\x73\x74"
  "\x72\x75\x63\x74\x69\x6f\x6e\x22\x04\x0b\x6e\x6f\x64\x65\x2d\x3e"
  "\x73\x63\x66\x67\x03\x0c\x6d\x61\x6b\x65\x2d\x73\x62\x6c\x6f\x63"
  "\x6b\x23\x04\x50\x0a\x81\x85\x02\x4f\x08\x81\x85\x02\x4e\x06\x81"
  "\x83\x02\x4d\x04\x83\x04\x09\x15\x24\x02\x1b\x1b\x73\x65\x74\x2d"
  "\x70\x6e\x6f\x64\x65\x2d\x63\x6f\x6e\x73\x65\x71\x75\x65\x6e\x74"
  "\x2d\x65\x64\x67\x65\x21\x1c\x73\x65\x74\x2d\x70\x6e\x6f\x64\x65"
  "\x2d\x61\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65\x2d\x65\x64\x67"
  "\x65\x21\x03\x03\x22\x05\x0b\x6e\x6f\x64\x65\x2d\x3e\x70\x63\x66"
  "\x67\x03\x0c\x6d\x61\x6b\x65\x2d\x70\x62\x6c\x6f\x63\x6b\x25\x04"
  "\x55\x0c\x81\x87\x02\x54\x0a\x81\x87\x02\x53\x08\x81\x85\x02\x52"
  "\x06\x81\x83\x02\x51\x04\x83\x04\x0b\x18\x26\x02\x1c\x09\x03\x0f"
  "\x72\x69\x6e\x73\x74\x2d\x72\x65\x76\x65\x72\x73\x65\x64\x27\x02"
  "\x57\x06\x81\x83\x02\x56\x04\x83\x04\x05\x0d\x28\x02\x1d\x0a\x09"
  "\x04\x63\x64\x72\x08\x02\x03\x0d\x6e\x6f\x64\x65\x2d\x6d\x61\x72"
  "\x6b\x65\x64\x3f\x03\x0b\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x21"
  "\x03\x08\x73\x62\x6c\x6f\x63\x6b\x3f\x29\x03\x0f\x65\x64\x67\x65"
  "\x2d\x6e\x65\x78\x74\x2d\x6e\x6f\x64\x65\x2a\x03\x0b\x72\x69\x6e"
  "\x73\x74\x2d\x6c\x61\x73\x74\x2b\x03\x0e\x73\x6e\x6f\x64\x65\x2d"
  "\x64\x65\x6c\x65\x74\x65\x21\x2c\x07\x72\x38\xfd\xff\x03\x71\x36"
  "\xfd\xff\x03\x70\x34\xfd\xff\x03\x6f\x32\xfd\xff\x03\x6e\x30\xfd"
  "\xff\x03\x6d\x2e\xfd\xff\x03\x6c\x2c\xfd\xff\x03\x6b\x2a\xfd\xff"
  "\x03\x6a\x28\xfd\xff\x03\x69\x26\xfd\xff\x03\x68\x24\xfd\xff\x03"
  "\x67\x22\xfd\xff\x03\x66\x20\xfd\xff\x03\x65\x1e\xfd\xff\x03\x64"
  "\x1c\xfd\xff\x03\x63\x1a\x81\x83\x02\x62\x18\xfd\xff\x03\x61\x16"
  "\xfd\xff\x03\x60\x14\xfd\xff\x03\x5f\x12\xfd\xff\x03\x5e\x10\xfd"
  "\xff\x03\x5d\x0e\xfd\xff\x03\x5c\x0c\x81\x85\x02\x5b\x0a\x83\x04"
  "\x5a\x08\xff\xff\x03\x59\x06\x81\x85\x02\x58\x04\x84\x06\x37\x52"
  "\x2d\x02\x1e\x02\x09\x78\x0e\x81\x87\x02\x77\x0c\x81\x87\x02\x76"
  "\x0a\x81\x87\x02\x75\x08\x81\x87\x02\x74\x06\x81\x85\x02\x73\x04"
  "\x84\x06\x0d\x14\x2e\x02\x1f\x09\x7e\x0e\xfd\xff\x03\x7d\x0c\xfd"
  "\xff\x03\x7c\x0a\xff\xff\x03\x7b\x08\xfd\xff\x03\x7a\x06\x81\x87"
  "\x02\x79\x04\x84\x06\x0d\x13\x2f\x02\x20\x0a\x0d\x02\x0f\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2d\x6c\x61\x62\x65\x6c\x02\x82\x01\x0a"
  "\x81\x85\x02\x81\x01\x08\x81\x85\x02\x80\x01\x06\x81\x83\x02\x7f"
  "\x04\x83\x04\x09\x12\x30\x02\x21\x0a\x02\x09\x11\x2a\x63\x75\x72"
  "\x72\x65\x6e\x74\x2d\x72\x67\x72\x61\x70\x68\x2a\x02\x03\x2c\x03"
  "\x0f\x72\x67\x72\x61\x70\x68\x2d\x62\x62\x6c\x6f\x63\x6b\x73\x04"
  "\x14\x73\x65\x74\x2d\x72\x67\x72\x61\x70\x68\x2d\x62\x62\x6c\x6f"
  "\x63\x6b\x73\x21\x04\x06\x64\x65\x6c\x71\x21\x05\x90\x01\x1e\x81"
  "\x87\x02\x8f\x01\x1c\x81\x85\x02\x8e\x01\x1a\x81\x89\x02\x8d\x01"
  "\x18\x81\x85\x02\x8c\x01\x16\x81\x85\x02\x8b\x01\x14\x81\x85\x02"
  "\x8a\x01\x12\xfd\xff\x03\x89\x01\x10\xfd\xff\x03\x88\x01\x0e\x81"
  "\x85\x02\x87\x01\x0c\x81\x83\x02\x86\x01\x0a\x81\x83\x02\x85\x01"
  "\x08\x81\x83\x02\x84\x01\x06\x81\x85\x02\x83\x01\x04\x83\x04\x1d"
  "\x31\x2c\x02\x22\x0b\x63\x6f\x6e\x73\x65\x71\x75\x65\x6e\x74\x04"
  "\x14\x70\x63\x66\x67\x2f\x70\x72\x65\x66\x65\x72\x2d\x62\x72\x61"
  "\x6e\x63\x68\x21\x31\x02\x91\x01\x04\x83\x04\x03\x0a\x32\x02\x23"
  "\x0c\x61\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65\x04\x31\x02\x92"
  "\x01\x04\x83\x04\x03\x0a\x33\x02\x24\x29\x50\x43\x46\x47\x2f\x50"
  "\x52\x45\x46\x45\x52\x2d\x42\x52\x41\x4e\x43\x48\x21\x3a\x20\x55"
  "\x6e\x6b\x6e\x6f\x77\x6e\x20\x62\x62\x6c\x6f\x63\x6b\x20\x74\x79"
  "\x70\x65\x16\x63\x66\x67\x2f\x70\x72\x65\x66\x65\x72\x2d\x62\x72"
  "\x61\x6e\x63\x68\x2f\x74\x61\x67\x34\x02\x03\x08\x70\x62\x6c\x6f"
  "\x63\x6b\x3f\x35\x03\x29\x05\x0e\x63\x66\x67\x2d\x6e\x6f\x64\x65"
  "\x2d\x70\x75\x74\x21\x04\x06\x65\x72\x72\x6f\x72\x03\x2a\x06\x9b"
  "\x01\x14\x81\x83\x02\x9a\x01\x12\x81\x85\x02\x99\x01\x10\x81\x83"
  "\x02\x98\x01\x0e\x81\x83\x02\x97\x01\x0c\x81\x83\x02\x96\x01\x0a"
  "\x81\x83\x02\x95\x01\x08\x81\x85\x02\x94\x01\x06\x81\x87\x02\x93"
  "\x01\x04\x84\x06\x13\x27\x2a\x02\x25\x34\x02\x04\x0d\x63\x66\x67"
  "\x2d\x6e\x6f\x64\x65\x2d\x67\x65\x74\x02\x9d\x01\x06\x81\x85\x02"
  "\x9c\x01\x04\x83\x04\x05\x0d\x36\x02\x26\x9e\x01\x04\x83\x04\x03"
  "\x37\x02\x27\x0a\x02\x9f\x01\x04\x84\x06\x03\x38\x02\x28\xa0\x01"
  "\x04\x83\x04\x03\x39\x02\x29\x0a\x02\xa1\x01\x04\x84\x06\x03\x3a"
  "\x02\x2a\xa2\x01\x04\x83\x04\x03\x3b\x02\x2b\x0a\x02\xa3\x01\x04"
  "\x84\x06\x03\x3c\x02\x2c\xa4\x01\x04\x83\x04\x03\x3d\x02\x2d\x04"
  "\x05\x6d\x65\x6d\x71\x02\xa6\x01\x06\x81\x85\x02\xa5\x01\x04\x84"
  "\x06\x05\x0d\x3e\x02\x2e\x03\x2b\x02\xa9\x01\x08\x81\x83\x02\xa8"
  "\x01\x06\x81\x83\x02\xa7\x01\x04\x83\x04\x07\x0f\x3f\x02\x2f\x0a"
  "\x02\x09\xae\x01\x0c\x81\x87\x02\xad\x01\x0a\x81\x87\x02\xac\x01"
  "\x08\x81\x87\x02\xab\x01\x06\x81\x85\x02\xaa\x01\x04\x84\x06\x0b"
  "\x13\x0a\x02\x30\xb2\x01\x0a\x81\x85\x02\xb1\x01\x08\x81\x85\x02"
  "\xb0\x01\x06\x81\x85\x02\xaf\x01\x04\x83\x04\x09\x0f\x40\x02\x31"
  "\xb5\x01\x08\x81\x85\x02\xb4\x01\x06\x81\x85\x02\xb3\x01\x04\x83"
  "\x04\x07\x0d\x31\x41\x41\x20\x70\x62\x6c\x6f\x63\x6b\x2d\x63\x6f"
  "\x6e\x73\x65\x71\x75\x65\x6e\x74\x2d\x6c\x61\x70\x2d\x67\x65\x6e"
  "\x65\x72\x61\x74\x6f\x72\x41\x21\x70\x62\x6c\x6f\x63\x6b\x2d\x61"
  "\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65\x2d\x6c\x61\x70\x2d\x67"
  "\x65\x6e\x65\x72\x61\x74\x6f\x72\x42\x10\x14\x73\x62\x6c\x6f\x63"
  "\x6b\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x43\x0f"
  "\x14\x62\x62\x6c\x6f\x63\x6b\x2d\x69\x6e\x73\x74\x72\x75\x63\x74"
  "\x69\x6f\x6e\x73\x44\x09\x15\x62\x62\x6c\x6f\x63\x6b\x2d\x6c\x69"
  "\x76\x65\x2d\x61\x74\x2d\x65\x6e\x74\x72\x79\x45\x0a\x14\x62\x62"
  "\x6c\x6f\x63\x6b\x2d\x6c\x69\x76\x65\x2d\x61\x74\x2d\x65\x78\x69"
  "\x74\x46\x0b\x14\x62\x62\x6c\x6f\x63\x6b\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x2d\x6d\x61\x70\x47\x0c\x0d\x62\x62\x6c\x6f\x63\x6b"
  "\x2d\x6c\x61\x62\x65\x6c\x48\x0d\x15\x62\x62\x6c\x6f\x63\x6b\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x73\x49\x0e\x04"
  "\x40\x04\x0a\x04\x3f\x04\x3e\x04\x3d\x04\x3c\x04\x3b\x04\x3a\x04"
  "\x39\x04\x38\x04\x37\x04\x1f\x23\x5b\x28\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x29\x63\x66\x67\x2f\x70\x72\x65\x66\x65\x72\x2d\x62\x72"
  "\x61\x6e\x63\x68\x5d\x36\x04\x2a\x04\x33\x04\x32\x04\x2c\x04\x30"
  "\x04\x2f\x04\x2e\x04\x2d\x04\x28\x04\x18\x27\x0d\x72\x69\x6e\x73"
  "\x74\x2d\x6c\x65\x6e\x67\x74\x68\x1b\x72\x69\x6e\x73\x74\x2d\x64"
  "\x69\x73\x63\x6f\x6e\x6e\x65\x63\x74\x2d\x70\x72\x65\x76\x69\x6f"
  "\x75\x73\x21\x2b\x15\x72\x69\x6e\x73\x74\x2d\x64\x65\x61\x64\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x3f\x22\x10\x73\x65\x74\x2d\x72"
  "\x69\x6e\x73\x74\x2d\x6e\x65\x78\x74\x21\x0b\x72\x69\x6e\x73\x74"
  "\x2d\x6e\x65\x78\x74\x1a\x73\x65\x74\x2d\x72\x69\x6e\x73\x74\x2d"
  "\x64\x65\x61\x64\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x21\x15"
  "\x72\x69\x6e\x73\x74\x2d\x64\x65\x61\x64\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x73\x0f\x73\x65\x74\x2d\x72\x69\x6e\x73\x74\x2d\x72"
  "\x74\x6c\x21\x0a\x72\x69\x6e\x73\x74\x2d\x72\x74\x6c\x34\x17\x70"
  "\x6e\x6f\x64\x65\x2f\x70\x72\x65\x66\x65\x72\x72\x65\x64\x2d\x62"
  "\x72\x61\x6e\x63\x68\x31\x19\x70\x63\x66\x67\x2f\x70\x72\x65\x66"
  "\x65\x72\x2d\x61\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65\x21\x18"
  "\x70\x63\x66\x67\x2f\x70\x72\x65\x66\x65\x72\x2d\x63\x6f\x6e\x73"
  "\x65\x71\x75\x65\x6e\x74\x21\x1a\x62\x62\x6c\x6f\x63\x6b\x2d\x70"
  "\x65\x72\x66\x6f\x72\x6d\x2d\x64\x65\x6c\x65\x74\x69\x6f\x6e\x73"
  "\x21\x0e\x62\x62\x6c\x6f\x63\x6b\x2d\x6c\x61\x62\x65\x6c\x21\x15"
  "\x62\x62\x6c\x6f\x63\x6b\x2d\x77\x61\x6c\x6b\x2d\x62\x61\x63\x6b"
  "\x77\x61\x72\x64\x14\x62\x62\x6c\x6f\x63\x6b\x2d\x77\x61\x6c\x6b"
  "\x2d\x66\x6f\x72\x77\x61\x72\x64\x11\x62\x62\x6c\x6f\x63\x6b\x2d"
  "\x63\x6f\x6d\x70\x72\x65\x73\x73\x21\x1d\x62\x62\x6c\x6f\x63\x6b"
  "\x2d\x72\x65\x76\x65\x72\x73\x65\x64\x2d\x69\x6e\x73\x74\x72\x75"
  "\x63\x74\x69\x6f\x6e\x73\x18\x10\x70\x72\x65\x64\x69\x63\x61\x74"
  "\x65\x2d\x3e\x70\x72\x74\x6c\x10\x73\x74\x61\x74\x65\x6d\x65\x6e"
  "\x74\x2d\x3e\x73\x72\x74\x6c\x25\x26\x73\x65\x74\x2d\x70\x62\x6c"
  "\x6f\x63\x6b\x2d\x61\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65\x2d"
  "\x6c\x61\x70\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x21\x42\x25"
  "\x73\x65\x74\x2d\x70\x62\x6c\x6f\x63\x6b\x2d\x63\x6f\x6e\x73\x65"
  "\x71\x75\x65\x6e\x74\x2d\x6c\x61\x70\x2d\x67\x65\x6e\x65\x72\x61"
  "\x74\x6f\x72\x21\x41\x23\x19\x73\x65\x74\x2d\x73\x62\x6c\x6f\x63"
  "\x6b\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x21\x43"
  "\x1a\x73\x65\x74\x2d\x62\x62\x6c\x6f\x63\x6b\x2d\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x61\x74\x69\x6f\x6e\x73\x21\x49\x12\x73\x65\x74\x2d"
  "\x62\x62\x6c\x6f\x63\x6b\x2d\x6c\x61\x62\x65\x6c\x21\x48\x19\x73"
  "\x65\x74\x2d\x62\x62\x6c\x6f\x63\x6b\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x6d\x61\x70\x21\x47\x1d\x73\x65\x74\x2d\x62\x62\x6c"
  "\x6f\x63\x6b\x2d\x6e\x65\x77\x2d\x6c\x69\x76\x65\x2d\x61\x74\x2d"
  "\x65\x78\x69\x74\x21\x18\x62\x62\x6c\x6f\x63\x6b\x2d\x6e\x65\x77"
  "\x2d\x6c\x69\x76\x65\x2d\x61\x74\x2d\x65\x78\x69\x74\x19\x73\x65"
  "\x74\x2d\x62\x62\x6c\x6f\x63\x6b\x2d\x6c\x69\x76\x65\x2d\x61\x74"
  "\x2d\x65\x78\x69\x74\x21\x46\x1a\x73\x65\x74\x2d\x62\x62\x6c\x6f"
  "\x63\x6b\x2d\x6c\x69\x76\x65\x2d\x61\x74\x2d\x65\x6e\x74\x72\x79"
  "\x21\x45\x19\x73\x65\x74\x2d\x62\x62\x6c\x6f\x63\x6b\x2d\x69\x6e"
  "\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x73\x21\x44\x19\x26\x04\x24"
  "\x04\x21\x04\x1f\x04\x1e\x04\x1d\x04\x1c\x04\x1b\x04\x19\x04\x18"
  "\x04\x17\x04\x16\x04\x15\x04\x14\x04\x13\x04\x12\x04\x11\x04\x10"
  "\x04\x0f\x04\x0e\x04\x0d\x04\x0c\x04\x0b\x04\x09\x04\x19\x35\x04"
  "\x20\x07\x70\x62\x6c\x6f\x63\x6b\x29\x04\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x1a\x07\x73\x62\x6c"
  "\x6f\x63\x6b\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x02\x1a\x20\x05\x05\x10\x6d\x61\x6b\x65\x2d\x76"
  "\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x03\x18\x74\x61\x67\x67\x65"
  "\x64\x2d\x76\x65\x63\x74\x6f\x72\x2f\x70\x72\x65\x64\x69\x63\x61"
  "\x74\x65\x04\x1c\x73\x65\x74\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74"
  "\x61\x67\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x21\x03"
  "\x05\x06\x2c\x5a\x80\x80\x04\x2b\x58\x81\x81\x02\x2a\x56\x81\x81"
  "\x02\x29\x54\x81\x89\x02\x28\x52\x81\x89\x02\x27\x50\x81\x87\x02"
  "\x26\x4e\x81\x85\x02\x25\x4c\x81\x89\x02\x24\x4a\x81\x87\x02\x23"
  "\x48\x81\x85\x02\x22\x46\x81\x8b\x02\x21\x44\x81\x83\x02\x20\x42"
  "\x81\x85\x02\x1f\x40\x81\x85\x02\x1e\x3e\x81\x85\x02\x1d\x3c\x81"
  "\x85\x02\x1c\x3a\x81\x85\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x83"
  "\x02\x19\x34\x81\x8b\x02\x18\x32\x81\x83\x02\x17\x30\x83\x04\x16"
  "\x2e\x83\x04\x15\x2c\x81\x83\x02\x14\x2a\x81\x81\x02\x13\x28\x81"
  "\x83\x02\x12\x26\x81\x85\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83"
  "\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x87\x02\x0d\x1c\x81\x83\x02"
  "\x0c\x1a\x81\x85\x02\x0b\x18\x81\x87\x02\x0a\x16\x81\x83\x02\x09"
  "\x14\x81\x8b\x02\x08\x12\x81\x83\x02\x07\x10\x81\x85\x02\x06\x0e"
  "\x81\x87\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81"
  "\x87\x02\x02\x06\x81\x83\x02\x01\x04\x81\x8b\x02\x59\x91\x01";

SCHEME_OBJECT *
rtlcfg_so_data_04f8615bd5241dfb (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rtlcfg_so_data_04f8615bd5241dfb [0]))), (sizeof (prog_rtlcfg_so_data_04f8615bd5241dfb)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_53]));
}

DECLARE_COMPILED_DATA_NS ("rtlcfg.so", rtlcfg_so_data_04f8615bd5241dfb)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rtlcfg.so", "b833e79503b5d7bc")
