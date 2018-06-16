/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:31-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define ENVIRONMENT_LABEL_1_3 22
#define DEBUGGING_LABEL_1_2 21
#define OBJECT_1_2 20
#define OBJECT_1_1 19
#define OBJECT_1_0 18
#define EXECUTE_CACHE_1_6 13
#define FREE_ASSIGNMENT_1_1 16
#define FREE_ASSIGNMENT_1_0 17
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
events_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      goto initialize_packageB_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_7)
DEFLABEL (initialize_packageB_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_11)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_1_2]);
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 8
#define DEBUGGING_LABEL_2_2 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
events_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 6
#define DEBUGGING_LABEL_3_2 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
events_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  Rvl = (current_block [OBJECT_3_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
events_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto event_distributor_events_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (event_distributor_events_3)
DEFLABEL (event_distributor_events_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

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

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 7
#define DEBUGGING_LABEL_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
events_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto event_distributor_lock_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (event_distributor_lock_3)
DEFLABEL (event_distributor_lock_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

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

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
events_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto event_distributor_receivers_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (event_distributor_receivers_3)
DEFLABEL (event_distributor_receivers_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

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
events_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_event_distributor_eventsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_event_distributor_eventsB_3)
DEFLABEL (set_event_distributor_eventsB_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_7_1]);
  Rsp = (& (Rsp [3]));
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
events_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_event_distributor_lockB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_event_distributor_lockB_3)
DEFLABEL (set_event_distributor_lockB_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_8_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 8
#define DEBUGGING_LABEL_9_2 7
#define OBJECT_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
events_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto set_event_distributor_receiversB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_event_distributor_receiversB_3)
DEFLABEL (set_event_distributor_receiversB_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_9_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define ENVIRONMENT_LABEL_10_3 17
#define DEBUGGING_LABEL_10_2 16
#define OBJECT_10_3 15
#define OBJECT_10_2 14
#define OBJECT_10_1 13
#define OBJECT_10_0 12
#define FREE_REFERENCE_10_0 11
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
events_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_10_4);
      goto event_distributorP_4;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (event_distributorP_10)
DEFLABEL (event_distributorP_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_10_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_10_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define ENVIRONMENT_LABEL_11_3 17
#define DEBUGGING_LABEL_11_2 16
#define OBJECT_11_2 15
#define OBJECT_11_1 14
#define OBJECT_11_0 13
#define EXECUTE_CACHE_11_8 9
#define EXECUTE_CACHE_11_7 11
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
events_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto event_distributor_invokeB_3;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (event_distributor_invokeB_7)
DEFLABEL (event_distributor_invokeB_3)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11_0]);
  (Wrd12.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_9;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_9;
  (Wrd15.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (label_9)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_11_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define LABEL_12_9 7
#define LABEL_12_7 9
#define LABEL_12_12 11
#define LABEL_12_11 13
#define ENVIRONMENT_LABEL_12_3 27
#define DEBUGGING_LABEL_12_2 26
#define OBJECT_12_2 25
#define OBJECT_12_1 24
#define OBJECT_12_0 23
#define EXECUTE_CACHE_12_14 15
#define EXECUTE_CACHE_12_13 17
#define EXECUTE_CACHE_12_10 19
#define EXECUTE_CACHE_12_8 21
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
events_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd9;
  machine_word Wrd8;
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
      goto make_receiver_modifier_6;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_12_12);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_receiver_modifier_10)
DEFLABEL (make_receiver_modifier_6)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_9);

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_13;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_13;
  (Wrd19.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (label_13)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Obj) = (current_block [OBJECT_12_1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define LABEL_13_12 7
#define LABEL_13_13 9
#define LABEL_13_7 11
#define TAG_13_8 4
#define LABEL_13_9 13
#define TAG_13_10 5
#define LABEL_13_14 15
#define LABEL_13_15 17
#define TAG_13_16 7
#define LABEL_13_18 19
#define LABEL_13_19 21
#define LABEL_13_20 23
#define LABEL_13_21 25
#define LABEL_13_25 27
#define LABEL_13_26 29
#define LABEL_13_24 31
#define LABEL_13_22 33
#define LABEL_13_31 35
#define LABEL_13_33 37
#define LABEL_13_34 39
#define LABEL_13_29 41
#define LABEL_13_32 43
#define LABEL_13_35 45
#define ENVIRONMENT_LABEL_13_3 75
#define DEBUGGING_LABEL_13_2 74
#define OBJECT_13_14 73
#define OBJECT_13_13 72
#define OBJECT_13_12 71
#define OBJECT_13_11 70
#define OBJECT_13_10 69
#define OBJECT_13_9 68
#define OBJECT_13_8 67
#define OBJECT_13_7 66
#define OBJECT_13_6 65
#define OBJECT_13_5 64
#define OBJECT_13_4 63
#define OBJECT_13_3 62
#define OBJECT_13_2 61
#define OBJECT_13_1 60
#define OBJECT_13_0 59
#define EXECUTE_CACHE_13_30 47
#define EXECUTE_CACHE_13_28 49
#define EXECUTE_CACHE_13_27 51
#define EXECUTE_CACHE_13_23 53
#define EXECUTE_CACHE_13_17 55
#define EXECUTE_CACHE_13_11 57
#define FREE_REFERENCES_LABEL_13_0 46
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
events_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd27;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd70;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd99;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd14;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd40;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd10;
  INVOKE_INTERFACE_DECLS
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
      goto process_eventsB_32;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto lambda_48;

    case 2:
      current_block = (Rpc - LABEL_13_12);
      goto label_34;

    case 3:
      current_block = (Rpc - LABEL_13_13);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_13_7);
      goto lambda_49;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto lambda_50;

    case 6:
      current_block = (Rpc - LABEL_13_14);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_13_15);
      goto lambda_51;

    case 8:
      current_block = (Rpc - LABEL_13_18);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_13_19);
      goto label_42;

    case 10:
      current_block = (Rpc - LABEL_13_20);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_13_21);
      goto label_41;

    case 12:
      current_block = (Rpc - LABEL_13_25);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_13_26);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_13_24);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_13_22);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_13_31);
      goto do_loop_25;

    case 17:
      current_block = (Rpc - LABEL_13_33);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_13_34);
      goto label_44;

    case 19:
      current_block = (Rpc - LABEL_13_29);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_13_32);
      goto continuation_23;

    case 21:
      current_block = (Rpc - LABEL_13_35);
      goto label_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_eventsB_47)
DEFLABEL (process_eventsB_32)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  ((Wrd15.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_7])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  ((Wrd22.pObj) [2]) = (Wrd16.Obj);
  ((Wrd22.pObj) [3]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_9])));
  Rhp += 2;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd29 = Wrd26;
  ((Wrd29.pObj) [2]) = (Wrd16.Obj);
  ((Wrd29.pObj) [3]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_13_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_56;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_56;
  (Wrd9.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_55)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_54;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd48.Lng))))
    goto label_54;
  (Wrd40.Obj) = (current_block [OBJECT_13_2]);
  ((Wrd46.pObj) [3]) = (Wrd40.Obj);

DEFLABEL (label_53)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [3]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = (Rsp [0]);
  ((Wrd32.pObj) [0]) = (Wrd33.Obj);
  Rvl = (current_block [OBJECT_13_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [2]);
  (Wrd56.Obj) = (current_block [OBJECT_13_0]);
  (Wrd57.Obj) = (current_block [OBJECT_13_2]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 3);

DEFLABEL (label_35)
  goto label_53;

DEFLABEL (label_56)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_13_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_13_7);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd13.pObj) [0]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd26.uLng) == 62)
    goto label_58;

DEFLABEL (label_57)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 3);

DEFLABEL (label_58)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd24.Lng))))
    goto label_57;
  ((Wrd22.pObj) [3]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_13_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_13_9);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;
  Rvl = (current_block [OBJECT_13_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd28.Obj) = ((Wrd6.pObj) [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 62))
    goto label_61;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_61;
  (Wrd17.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_60)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_15])));
  Rhp += 1;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  Wrd40 = Wrd39;
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [2]);
  ((Wrd40.pObj) [2]) = (Wrd43.Obj);
  (Rsp [1]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_17]));

DEFLABEL (label_61)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [2]);
  (Wrd33.Obj) = (current_block [OBJECT_13_5]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_13_15);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_81;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_80)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (current_block [OBJECT_13_7]))
    goto label_77;
  if ((Wrd14.Obj) == (current_block [OBJECT_13_9]))
    goto label_69;
  if ((Wrd14.Obj) == (current_block [OBJECT_13_11]))
    goto label_62;
  (Wrd20.Obj) = (current_block [OBJECT_13_12]);
  (Rsp [1]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_28]));

DEFLABEL (label_62)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Rsp [0]) = (Wrd22.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd44.uLng) == 62))
    goto label_68;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_68;
  (Wrd32.Obj) = ((Wrd38.pObj) [4]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_67)
  (Wrd55.Obj) = (Rsp [4]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_66;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [1]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_65)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13_24);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_13_8]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_64;

DEFLABEL (label_63)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 3);

DEFLABEL (label_64)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_63;
  ((Wrd15.pObj) [4]) = Rvl;
  Rvl = (current_block [OBJECT_13_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_26]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_10]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [2]);
  (Wrd48.Obj) = (current_block [OBJECT_13_8]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_25]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_69)
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_76;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [1]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_75)
  (Wrd83.Obj) = (Rsp [2]);
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [2]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 62))
    goto label_74;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd82.Lng))))
    goto label_74;
  (Wrd70.Obj) = ((Wrd80.pObj) [4]);

DEFLABEL (label_73)
  (Rsp [1]) = (Wrd70.Obj);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd98.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd98.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_23]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_13_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  Rvl = (current_block [OBJECT_13_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (current_block [OBJECT_13_13]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_30]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_13_29);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13_8]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 62)
    goto label_72;

DEFLABEL (label_71)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 3);

DEFLABEL (label_72)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_71;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  Rvl = (current_block [OBJECT_13_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd88.Obj) = (Rsp [2]);
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd87.Obj) = ((Wrd89.pObj) [2]);
  (Wrd90.Obj) = (current_block [OBJECT_13_8]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_41)
  (Wrd70.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_10]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd112.Obj) = (Rsp [1]);
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [2]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd115.uLng) == 62))
    goto label_79;
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd110.Obj) = ((Wrd109.pObj) [0]);
  (Wrd111.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd111.Lng))))
    goto label_79;
  (Wrd99.Obj) = ((Wrd109.pObj) [4]);

DEFLABEL (label_78)
  (Rsp [0]) = (Wrd99.Obj);
  goto do_loop_25;

DEFLABEL (label_79)
  (Wrd117.Obj) = (Rsp [1]);
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd116.Obj) = ((Wrd118.pObj) [2]);
  (Wrd119.Obj) = (current_block [OBJECT_13_8]);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_42)
  (Wrd99.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_6]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (do_loop_52)
DEFLABEL (do_loop_25)
  INTERRUPT_CHECK (26, LABEL_13_31);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_13_13])))
    goto label_82;
  Rvl = (current_block [OBJECT_13_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_88;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_87)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_86;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_85)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_14]), 2);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_13_32);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_84;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_83)
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_25;

DEFLABEL (label_84)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_10]), 1);

DEFLABEL (label_45)
  (Wrd5.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_34]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_6]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_33]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_10]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_87;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_10 7
#define LABEL_6 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_12 15
#define LABEL_18 17
#define LABEL_14 19
#define TAG_15 8
#define LABEL_20 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_19 27
#define LABEL_23 29
#define LABEL_22 31
#define LABEL_24 33
#define LABEL_25 35
#define LABEL_26 37
#define ENVIRONMENT_LABEL_3 69
#define DEBUGGING_LABEL_2 68
#define PURIFICATION_ROOT 67
#define OBJECT_17 66
#define OBJECT_16 65
#define OBJECT_15 64
#define OBJECT_14 63
#define OBJECT_13 62
#define OBJECT_12 61
#define OBJECT_11 60
#define OBJECT_10 59
#define OBJECT_9 58
#define OBJECT_8 57
#define OBJECT_7 56
#define OBJECT_6 55
#define OBJECT_5 54
#define OBJECT_4 53
#define OBJECT_3 52
#define OBJECT_2 51
#define OBJECT_1 50
#define OBJECT_0 49
#define FREE_REFERENCE_0 39
#define GLOBAL_EXECUTE_CACHE_21 41
#define GLOBAL_EXECUTE_CACHE_13 43
#define GLOBAL_EXECUTE_CACHE_11 45
#define GLOBAL_EXECUTE_CACHE_7 47
#define FREE_REFERENCES_LABEL_0 38
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
events_so_54490c878a930af5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_10);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto make_event_distributor_23;

    case 9:
      current_block = (Rpc - LABEL_20);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_23);
      goto label_21;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto label_25;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto label_26;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto expression_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_17)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_25])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_26)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_25)
  {
    static const short sections [] =
      {
	0,
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
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 13)
      goto label_24;
    blocks = (current_block [OBJECT_17]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_24])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_24)
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
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_3]);
  (Wrd16.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_30;
  Wrd11 = Wrd15;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_28;
  Wrd11 = Wrd15;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_14]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_19)
  (Wrd11.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd12.pObj));

DEFLABEL (label_18)
  (Wrd11.Obj) = Rvl;
  goto label_29;

DEFLABEL (make_event_distributor_23)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (make_event_distributor_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_34;
  Wrd9 = Wrd13;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_32;
  Wrd9 = Wrd13;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd10.pObj));

DEFLABEL (label_21)
  (Wrd9.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd10.pObj));

DEFLABEL (label_20)
  (Wrd9.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_events_so_54490c878a930af5 [13] =
  {
    { "events_so_code_1", 5, events_so_code_1 },
    { "events_so_code_2", 1, events_so_code_2 },
    { "events_so_code_3", 1, events_so_code_3 },
    { "events_so_code_4", 1, events_so_code_4 },
    { "events_so_code_5", 1, events_so_code_5 },
    { "events_so_code_6", 1, events_so_code_6 },
    { "events_so_code_7", 1, events_so_code_7 },
    { "events_so_code_8", 1, events_so_code_8 },
    { "events_so_code_9", 1, events_so_code_9 },
    { "events_so_code_10", 4, events_so_code_10 },
    { "events_so_code_11", 3, events_so_code_11 },
    { "events_so_code_12", 6, events_so_code_12 },
    { "events_so_code_13", 22, events_so_code_13 }
  };

int
decl_events_so_54490c878a930af5 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_events_so_54490c878a930af5);
  return (0);
}

DECLARE_COMPILED_CODE ("events.so", 18, decl_events_so_54490c878a930af5, events_so_54490c878a930af5)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_events_so_data_54490c878a930af5 [1699] =
  "\x5b\x1a\x9c\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d\xb9\x0d"
  "\xba\x0d\xbb\x0d\xbc\x25\x28\x0d\xbd\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x82\x88\x28\x0d\x23\x22"
  "\x29\x21\x9f\x2b\xbf\x1d\xb0\x83\x88\x08\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x84\x88\xc2\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x85"
  "\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x86\x88\x1b\x83\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x81\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x81\x0c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x08\x0c\xb1\xc1\xb2\x83\x1b\xc1\x81\x1d\x1b\x07"
  "\x1b\x82\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17"
  "\x1c\x88\x1b\x81\x1b\x1b\x2a\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x9d"
  "\x1b\xb4\xb3\xb5\x0d\x1b\x9d\x83\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x9d"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x0d\x1c\x0c"
  "\x0d\x0d\x0d\x08\x8a\xb7\x2a\x08\x1b\x2a\xc3\x0d\xb6\x2a\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x65\x76\x65\x6e\x74"
  "\x73\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x10\x72\x65\x6d"
  "\x6f\x76\x65\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x0d\x61\x64\x64"
  "\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x14\x61\x64\x64\x2d\x65\x76"
  "\x65\x6e\x74\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x21\x17\x72\x65"
  "\x6d\x6f\x76\x65\x2d\x65\x76\x65\x6e\x74\x2d\x72\x65\x63\x65\x69"
  "\x76\x65\x72\x21\x03\x03\x17\x6d\x61\x6b\x65\x2d\x72\x65\x63\x65"
  "\x69\x76\x65\x72\x2d\x6d\x6f\x64\x69\x66\x69\x65\x72\x02\x17\x0c"
  "\x81\x81\x02\x16\x0a\x81\x81\x02\x15\x08\x81\x81\x02\x14\x06\x81"
  "\x81\x02\x13\x04\x82\x02\x0b\x17\x02\x02\x0b\x6d\x61\x6b\x65\x2d"
  "\x71\x75\x65\x75\x65\x02\x18\x04\x82\x02\x03\x02\x19\x04\x82\x02"
  "\x03\x09\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x0a"
  "\x1a\x04\x83\x04\x03\x0b\x02\x0a\x1b\x04\x83\x04\x03\x0c\x02\x0a"
  "\x1c\x04\x83\x04\x03\x0d\x02\x08\x0d\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x73\x65\x74\x21\x0e\x02\x1d\x04\x84\x06\x03\x0f\x02\x09\x0e"
  "\x02\x1e\x04\x84\x06\x03\x10\x02\x0a\x0e\x02\x1f\x04\x84\x06\x03"
  "\x11\x02\x0b\x0a\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x12\x02\x23\x0a\x81\x85"
  "\x02\x22\x08\x81\x83\x02\x21\x06\x81\x83\x02\x20\x04\x83\x04\x09"
  "\x12\x13\x02\x0c\x0a\x11\x69\x6e\x76\x6f\x6b\x65\x2d\x72\x65\x63"
  "\x65\x69\x76\x65\x72\x73\x14\x04\x09\x65\x6e\x71\x75\x65\x75\x65"
  "\x21\x15\x03\x10\x70\x72\x6f\x63\x65\x73\x73\x2d\x65\x76\x65\x6e"
  "\x74\x73\x21\x16\x03\x26\x08\x81\x85\x02\x25\x06\x81\x89\x02\x24"
  "\x04\xfe\x05\x07\x12\x17\x02\x0d\x0a\x19\x4e\x6f\x74\x20\x61\x6e"
  "\x20\x65\x76\x65\x6e\x74\x20\x64\x69\x73\x74\x72\x69\x62\x75\x74"
  "\x6f\x72\x03\x13\x65\x76\x65\x6e\x74\x2d\x64\x69\x73\x74\x72\x69"
  "\x62\x75\x74\x6f\x72\x3f\x18\x04\x06\x65\x72\x72\x6f\x72\x19\x04"
  "\x15\x03\x16\x05\x2c\x0e\x81\x87\x02\x2b\x0c\x81\x8b\x02\x2a\x0a"
  "\x81\x87\x02\x29\x08\x81\x87\x02\x28\x06\x81\x87\x02\x27\x04\x83"
  "\x04\x0d\x1c\x15\x02\x0e\x06\x61\x70\x70\x6c\x79\x0e\x49\x6c\x6c"
  "\x65\x67\x61\x6c\x20\x65\x76\x65\x6e\x74\x04\x63\x64\x72\x14\x04"
  "\x63\x61\x72\x02\x0e\x0a\x05\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d"
  "\x77\x69\x6e\x64\x04\x0b\x71\x75\x65\x75\x65\x2d\x6d\x61\x70\x21"
  "\x04\x05\x6d\x65\x6d\x76\x04\x06\x64\x65\x6c\x76\x21\x04\x19\x04"
  "\x08\x61\x70\x70\x65\x6e\x64\x21\x07\x42\x2e\x81\x87\x02\x41\x2c"
  "\x81\x87\x02\x40\x2a\x81\x89\x02\x3f\x28\x81\x8b\x02\x3e\x26\x81"
  "\x89\x02\x3d\x24\x81\x87\x02\x3c\x22\x81\x89\x02\x3b\x20\x81\x87"
  "\x02\x3a\x1e\x81\x8b\x02\x39\x1c\x81\x89\x02\x38\x1a\x81\x89\x02"
  "\x37\x18\x81\x87\x02\x36\x16\x81\x87\x02\x35\x14\x81\x85\x02\x34"
  "\x12\x81\x85\x02\x33\x10\x81\x83\x02\x32\x0e\x81\x83\x02\x31\x0c"
  "\x81\x83\x02\x30\x0a\x81\x85\x02\x2f\x08\x81\x83\x02\x2e\x06\x81"
  "\x83\x02\x2d\x04\x83\x04\x2d\x4c\x19\x0e\x14\x14\x12\x19\x04\x15"
  "\x04\x17\x04\x13\x04\x16\x1a\x65\x76\x65\x6e\x74\x2d\x64\x69\x73"
  "\x74\x72\x69\x62\x75\x74\x6f\x72\x2f\x69\x6e\x76\x6f\x6b\x65\x21"
  "\x18\x17\x6d\x61\x6b\x65\x2d\x65\x76\x65\x6e\x74\x2d\x64\x69\x73"
  "\x74\x72\x69\x62\x75\x74\x6f\x72\x21\x73\x65\x74\x2d\x65\x76\x65"
  "\x6e\x74\x2d\x64\x69\x73\x74\x72\x69\x62\x75\x74\x6f\x72\x2f\x72"
  "\x65\x63\x65\x69\x76\x65\x72\x73\x21\x1c\x73\x65\x74\x2d\x65\x76"
  "\x65\x6e\x74\x2d\x64\x69\x73\x74\x72\x69\x62\x75\x74\x6f\x72\x2f"
  "\x6c\x6f\x63\x6b\x21\x1e\x73\x65\x74\x2d\x65\x76\x65\x6e\x74\x2d"
  "\x64\x69\x73\x74\x72\x69\x62\x75\x74\x6f\x72\x2f\x65\x76\x65\x6e"
  "\x74\x73\x21\x1c\x65\x76\x65\x6e\x74\x2d\x64\x69\x73\x74\x72\x69"
  "\x62\x75\x74\x6f\x72\x2f\x72\x65\x63\x65\x69\x76\x65\x72\x73\x17"
  "\x65\x76\x65\x6e\x74\x2d\x64\x69\x73\x74\x72\x69\x62\x75\x74\x6f"
  "\x72\x2f\x6c\x6f\x63\x6b\x19\x65\x76\x65\x6e\x74\x2d\x64\x69\x73"
  "\x74\x72\x69\x62\x75\x74\x6f\x72\x2f\x65\x76\x65\x6e\x74\x73\x11"
  "\x04\x10\x04\x0f\x04\x0d\x04\x0c\x04\x0b\x04\x16\x72\x74\x64\x3a"
  "\x65\x76\x65\x6e\x74\x2d\x64\x69\x73\x74\x72\x69\x62\x75\x74\x6f"
  "\x72\x19\x12\x65\x76\x65\x6e\x74\x2d\x64\x69\x73\x74\x72\x69\x62"
  "\x75\x74\x6f\x72\x07\x65\x76\x65\x6e\x74\x73\x05\x6c\x6f\x63\x6b"
  "\x0a\x72\x65\x63\x65\x69\x76\x65\x72\x73\x04\x09\x04\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x14\x69"
  "\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67"
  "\x65\x21\x04\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x2d\x62\x79\x2d\x69"
  "\x6e\x64\x65\x78\x05\x19\x02\x12\x26\x80\x80\x04\x11\x24\x81\x81"
  "\x02\x10\x22\x81\x81\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x89\x02"
  "\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x83\x02\x0a"
  "\x16\x81\x87\x02\x09\x14\x81\x83\x02\x08\x12\x81\x87\x02\x07\x10"
  "\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04\x0a\x81"
  "\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83"
  "\x02\x25\x46";

SCHEME_OBJECT *
events_so_data_54490c878a930af5 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_events_so_data_54490c878a930af5 [0]))), (sizeof (prog_events_so_data_54490c878a930af5)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_26]));
}

DECLARE_COMPILED_DATA_NS ("events.so", events_so_data_54490c878a930af5)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("events.so", "42435a9d4ecc8bf0")
