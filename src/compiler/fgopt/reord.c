/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:16-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 7
#define DEBUGGING_LABEL_1_2 6
#define OBJECT_1_1 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto node_target_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_target_3)
DEFLABEL (node_target_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

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

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 7
#define DEBUGGING_LABEL_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto node_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_value_3)
DEFLABEL (node_value_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

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

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 7
#define DEBUGGING_LABEL_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto node_original_dependencies_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_original_dependencies_3)
DEFLABEL (node_original_dependencies_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

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

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 7
#define DEBUGGING_LABEL_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto node_original_dependents_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_original_dependents_3)
DEFLABEL (node_original_dependents_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
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
reord_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto node_dependencies_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_dependencies_3)
DEFLABEL (node_dependencies_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
reord_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto node_dependents_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_dependents_3)
DEFLABEL (node_dependents_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
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
reord_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_node_original_dependenciesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_original_dependenciesB_3)
DEFLABEL (set_node_original_dependenciesB_0)
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
#define ENVIRONMENT_LABEL_8_3 8
#define DEBUGGING_LABEL_8_2 7
#define OBJECT_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_node_original_dependentsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_original_dependentsB_3)
DEFLABEL (set_node_original_dependentsB_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
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
reord_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_node_dependenciesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_dependenciesB_3)
DEFLABEL (set_node_dependenciesB_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_9_1]);
  Rsp = (& (Rsp [3]));
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
reord_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_node_dependentsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_dependentsB_3)
DEFLABEL (set_node_dependentsB_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_10_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define ENVIRONMENT_LABEL_11_3 17
#define DEBUGGING_LABEL_11_2 16
#define OBJECT_11_3 15
#define OBJECT_11_2 14
#define OBJECT_11_1 13
#define OBJECT_11_0 12
#define FREE_REFERENCE_11_0 11
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto nodeP_4;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nodeP_10)
DEFLABEL (nodeP_4)
  INTERRUPT_CHECK (26, LABEL_11_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
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
  Rvl = (current_block [OBJECT_11_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_11_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define ENVIRONMENT_LABEL_12_3 14
#define DEBUGGING_LABEL_12_2 13
#define EXECUTE_CACHE_12_8 9
#define EXECUTE_CACHE_12_6 11
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_12_4);
      goto make_node_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_node_5)
DEFLABEL (make_node_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Rsp [5]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define LABEL_13_8 7
#define LABEL_13_10 9
#define LABEL_13_12 11
#define LABEL_13_13 13
#define LABEL_13_14 15
#define LABEL_13_15 17
#define LABEL_13_16 19
#define LABEL_13_17 21
#define LABEL_13_18 23
#define LABEL_13_11 25
#define LABEL_13_20 27
#define ENVIRONMENT_LABEL_13_3 39
#define DEBUGGING_LABEL_13_2 38
#define OBJECT_13_2 37
#define OBJECT_13_1 36
#define OBJECT_13_0 35
#define EXECUTE_CACHE_13_19 29
#define EXECUTE_CACHE_13_9 31
#define EXECUTE_CACHE_13_7 33
#define FREE_REFERENCES_LABEL_13_0 28
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd80;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_13_4);
      goto make_node_set_16;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto lambda_27;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_13_12);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_13_13);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_13_14);
      goto loop_13;

    case 7:
      current_block = (Rpc - LABEL_13_15);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_13_16);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_13_17);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_13_18);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_13_20);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_node_set_26)
DEFLABEL (make_node_set_16)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_13_5);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_13;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (loop_28)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_13_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_13_1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_29;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_42;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_41)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  if ((Wrd18.Obj) == (Wrd7.Obj))
    goto label_34;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_40;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_39)
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd60.pObj)));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_33;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_32)
  (Wrd75.Obj) = (Rsp [3]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_31;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [1]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_30)
  goto loop_13;

DEFLABEL (label_31)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_38;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_37)
  (Rsp [0]) = (Wrd34.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_36;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd43.Obj);
  goto label_30;

DEFLABEL (label_36)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_21)
  (Wrd43.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_20)
  (Wrd34.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_18)
  (Wrd7.Obj) = Rvl;
  goto label_41;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13_11);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_44;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_43)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 12
#define DEBUGGING_LABEL_14_2 11
#define EXECUTE_CACHE_14_6 7
#define FREE_REFERENCE_14_0 10
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto copy_node_set_0;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_node_set_4)
DEFLABEL (copy_node_set_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define LABEL_15_8 11
#define ENVIRONMENT_LABEL_15_3 21
#define DEBUGGING_LABEL_15_2 20
#define OBJECT_15_4 19
#define OBJECT_15_3 18
#define OBJECT_15_2 17
#define OBJECT_15_1 16
#define OBJECT_15_0 15
#define EXECUTE_CACHE_15_9 13
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd53;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_15_4);
      goto node_copy_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_15_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_copy_11)
DEFLABEL (node_copy_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_17;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_17;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_16)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_15;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_15;
  (Wrd39.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_14)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_13;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd61.Lng))))
    goto label_13;
  (Wrd53.Obj) = ((Wrd59.pObj) [5]);

DEFLABEL (label_12)
  (Rsp [3]) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (label_13)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.Obj) = (current_block [OBJECT_15_4]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_9)
  (Wrd53.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_15_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_15_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_9 7
#define LABEL_16_11 9
#define LABEL_16_12 11
#define LABEL_16_14 13
#define LABEL_16_16 15
#define LABEL_16_7 17
#define LABEL_16_18 19
#define LABEL_16_13 21
#define LABEL_16_15 23
#define LABEL_16_20 25
#define LABEL_16_21 27
#define LABEL_16_22 29
#define LABEL_16_23 31
#define LABEL_16_24 33
#define ENVIRONMENT_LABEL_16_3 57
#define DEBUGGING_LABEL_16_2 56
#define OBJECT_16_6 55
#define OBJECT_16_5 54
#define OBJECT_16_4 53
#define OBJECT_16_3 52
#define OBJECT_16_2 51
#define OBJECT_16_1 50
#define OBJECT_16_0 49
#define EXECUTE_CACHE_16_19 35
#define EXECUTE_CACHE_16_17 37
#define EXECUTE_CACHE_16_10 39
#define EXECUTE_CACHE_16_8 41
#define EXECUTE_CACHE_16_6 43
#define FREE_REFERENCE_16_2 46
#define FREE_REFERENCE_16_1 47
#define FREE_REFERENCE_16_0 48
#define FREE_REFERENCES_LABEL_16_0 34
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_16_4);
      goto reorder_assignments_23;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_9);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_16_11);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_16_12);
      goto loop_17;

    case 5:
      current_block = (Rpc - LABEL_16_14);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_16_16);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_19;

    case 8:
      current_block = (Rpc - LABEL_16_18);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_16_13);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_16_20);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_16_21);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_16_22);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_16_23);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_16_24);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reorder_assignments_35)
DEFLABEL (reorder_assignments_23)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_16_0])))
    goto label_38;

DEFLABEL (label_37)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  if (Rvl == (current_block [OBJECT_16_1]))
    goto label_37;
  if (! (Rvl == (current_block [OBJECT_16_2])))
    goto label_42;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_41;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd15.Lng) == 0)
    goto label_40;

DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (label_40)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_40;

DEFLABEL (label_42)
  if (Rvl == (current_block [OBJECT_16_3]))
    goto label_45;
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_44;
  Wrd13 = Wrd17;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd19.Obj);
  goto loop_17;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_11])), (Wrd14.pObj));

DEFLABEL (label_25)
  (Wrd13.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd21.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_47;
  Wrd23 = Wrd27;

DEFLABEL (label_46)
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_9])), (Wrd24.pObj));

DEFLABEL (label_26)
  (Wrd23.Obj) = Rvl;
  goto label_46;

DEFLABEL (loop_36)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_16_12);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_16_4])))
    goto label_48;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_63;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_62)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_61;
  Wrd23 = Wrd27;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_20);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_59;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd8.Lng) < 2L))
    goto label_50;

DEFLABEL (label_49)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_58;
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_58;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd44.Lng) < (Wrd46.Lng))
    goto label_55;

DEFLABEL (label_54)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_53;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_52)
  (Rsp [2]) = (Wrd21.Obj);

DEFLABEL (label_51)
  Rsp = (& (Rsp [2]));
  goto loop_17;

DEFLABEL (label_53)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 1);

DEFLABEL (label_31)
  (Wrd21.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_57;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_56)
  (Rsp [2]) = (Wrd31.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd41.Obj);
  goto label_51;

DEFLABEL (label_57)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_24]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 1);

DEFLABEL (label_32)
  (Wrd31.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_22]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_55;

DEFLABEL (label_59)
  (Wrd50.Obj) = (current_block [OBJECT_16_2]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  goto label_49;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_16])), (Wrd24.pObj));

DEFLABEL (label_28)
  (Wrd23.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_62;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_8 9
#define LABEL_17_10 11
#define LABEL_17_7 13
#define LABEL_17_11 15
#define ENVIRONMENT_LABEL_17_3 23
#define DEBUGGING_LABEL_17_2 22
#define OBJECT_17_2 21
#define OBJECT_17_1 20
#define OBJECT_17_0 19
#define EXECUTE_CACHE_17_9 17
#define FREE_REFERENCES_LABEL_17_0 16
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_17_4);
      goto add_up_cost_9;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_17_11);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_up_cost_15)
DEFLABEL (add_up_cost_9)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_17_0]))
    goto label_17;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_1]);
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_7;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_17_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_17_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_26;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_25)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_17_0])))
    goto label_18;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_23;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_23;
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_20;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_7;

DEFLABEL (label_20)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_23)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd5.Obj) = (Rsp [2]);
  goto label_22;

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_25;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define LABEL_18_8 11
#define TAG_18_9 4
#define LABEL_18_11 13
#define ENVIRONMENT_LABEL_18_3 25
#define DEBUGGING_LABEL_18_2 24
#define OBJECT_18_4 23
#define OBJECT_18_3 22
#define OBJECT_18_2 21
#define OBJECT_18_1 20
#define OBJECT_18_0 19
#define EXECUTE_CACHE_18_12 15
#define EXECUTE_CACHE_18_10 17
#define FREE_REFERENCES_LABEL_18_0 14
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_18_4);
      goto first_node_needs_temporaryP_7;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto lambda_15;

    case 5:
      current_block = (Rpc - LABEL_18_11);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (first_node_needs_temporaryP_14)
DEFLABEL (first_node_needs_temporaryP_7)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_19;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_18)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_17;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_17;
  (Wrd24.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_16)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd38.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_8])));
  Rhp += 1;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd38.pObj)));
  Wrd39 = Wrd38;
  (Wrd40.Obj) = (Rsp [0]);
  ((Wrd39.pObj) [2]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (label_17)
  (Wrd32.Obj) = (current_block [OBJECT_18_2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_10)
  (Wrd14.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_18_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_23;
  (Wrd8.Obj) = ((Wrd14.pObj) [4]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (label_23)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_18_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 2);

DEFLABEL (label_12)
  (Wrd8.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_8 9
#define LABEL_19_9 11
#define LABEL_19_10 13
#define LABEL_19_14 15
#define LABEL_19_15 17
#define LABEL_19_16 19
#define LABEL_19_17 21
#define LABEL_19_18 23
#define LABEL_19_19 25
#define LABEL_19_21 27
#define LABEL_19_23 29
#define LABEL_19_24 31
#define LABEL_19_12 33
#define LABEL_19_25 35
#define LABEL_19_13 37
#define LABEL_19_26 39
#define LABEL_19_27 41
#define LABEL_19_20 43
#define LABEL_19_28 45
#define LABEL_19_29 47
#define ENVIRONMENT_LABEL_19_3 65
#define DEBUGGING_LABEL_19_2 64
#define OBJECT_19_8 63
#define OBJECT_19_7 62
#define OBJECT_19_6 61
#define OBJECT_19_5 60
#define OBJECT_19_4 59
#define OBJECT_19_3 58
#define OBJECT_19_2 57
#define OBJECT_19_1 56
#define OBJECT_19_0 55
#define EXECUTE_CACHE_19_22 49
#define EXECUTE_CACHE_19_11 51
#define EXECUTE_CACHE_19_6 53
#define FREE_REFERENCES_LABEL_19_0 48
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd123;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd144;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd132;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd83;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd53;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd148;
  machine_word Wrd146;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_19_4);
      goto reorderB_35;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto label_37;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto label_38;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto loop_31;

    case 5:
      current_block = (Rpc - LABEL_19_10);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_19_14);
      goto continuation_20;

    case 7:
      current_block = (Rpc - LABEL_19_15);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_19_16);
      goto loop_23;

    case 9:
      current_block = (Rpc - LABEL_19_17);
      goto label_43;

    case 10:
      current_block = (Rpc - LABEL_19_18);
      goto label_44;

    case 11:
      current_block = (Rpc - LABEL_19_19);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_19_21);
      goto label_45;

    case 13:
      current_block = (Rpc - LABEL_19_23);
      goto label_47;

    case 14:
      current_block = (Rpc - LABEL_19_24);
      goto label_48;

    case 15:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_19_25);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_6;

    case 18:
      current_block = (Rpc - LABEL_19_26);
      goto label_41;

    case 19:
      current_block = (Rpc - LABEL_19_27);
      goto label_42;

    case 20:
      current_block = (Rpc - LABEL_19_20);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_19_28);
      goto label_50;

    case 22:
      current_block = (Rpc - LABEL_19_29);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reorderB_52)
DEFLABEL (reorderB_35)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 10))
    goto label_58;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_57)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_56;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.Lng) = ((Wrd22.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_56;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_55)
  (Wrd24.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto loop_31;

DEFLABEL (label_56)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (loop_53)
DEFLABEL (loop_31)
  INTERRUPT_CHECK (26, LABEL_19_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_65;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_65;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd29.Lng) < (Wrd31.Lng))
    goto label_60;

DEFLABEL (label_59)
  Rsp = (& (Rsp [2]));
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (label_60)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_13);
  (* (--Rsp)) = Rvl;
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_64;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_64;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd18.Lng))))
    goto label_64;
  (Wrd6.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd9.pObj) = (& ((Wrd16.pObj) [(Wrd6.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_63)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_62;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_62;
  (Wrd28.Obj) = ((Wrd32.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_61)
  (Wrd42.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd42.Obj);
  goto loop_23;

DEFLABEL (label_62)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_19_7]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_27]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_26]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_60;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19_12);

DEFLABEL (label_68)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_67;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_67;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_66)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_31;

DEFLABEL (label_67)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_40)
  (Wrd9.Obj) = Rvl;
  goto label_66;

DEFLABEL (loop_54)
DEFLABEL (loop_23)
  INTERRUPT_CHECK (26, LABEL_19_16);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_91;
  (Wrd17.Obj) = (Rsp [6]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_91;
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd148.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if ((Wrd146.Lng) > (Wrd148.Lng))
    goto label_84;

DEFLABEL (label_83)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd42.Obj) = (Rsp [8]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_82;
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_82;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_82;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd32.pObj) = (& ((Wrd39.pObj) [(Wrd29.Lng)]));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_81)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (Rsp [4]);
  if ((Wrd49.Obj) == (Wrd50.Obj))
    goto label_80;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_20]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd64.uLng) == 62))
    goto label_79;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd62.Lng))))
    goto label_79;
  (Wrd56.Obj) = ((Wrd60.pObj) [6]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_78)
  (Wrd70.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_22]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_19_20);
  (Wrd5.Obj) = Rvl;
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_77;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng))))
    goto label_77;
  ((Wrd33.pObj) [6]) = Rvl;

DEFLABEL (label_76)
  (Wrd6.Obj) = (current_block [OBJECT_19_8]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_75;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd19.Lng))))
    goto label_75;
  (Wrd13.Obj) = ((Wrd17.pObj) [7]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_74)
  (Wrd27.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_22]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_19_14);
  (Rsp [2]) = Rvl;
  (Wrd160.Obj) = (Rsp [0]);
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if ((Wrd161.uLng) == 62)
    goto label_70;

DEFLABEL (label_69)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 3);

DEFLABEL (label_70)
  (Wrd157.pObj) = (OBJECT_ADDRESS (Wrd160.Obj));
  (Wrd158.Obj) = ((Wrd157.pObj) [0]);
  (Wrd159.Lng) = (FIXNUM_TO_LONG (Wrd158.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd159.Lng))))
    goto label_69;
  ((Wrd157.pObj) [7]) = Rvl;
  Rsp = (& (Rsp [4]));

DEFLABEL (label_73)
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 26))
    goto label_72;
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  (Wrd79.Lng) = ((Wrd81.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd79.Lng)))
    goto label_72;
  (Wrd76.Obj) = (LONG_TO_FIXNUM (Wrd79.Lng));

DEFLABEL (label_71)
  (Rsp [0]) = (Wrd76.Obj);
  goto loop_23;

DEFLABEL (label_72)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_46)
  (Wrd76.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_75)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_19_8]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_29]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_19_4]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_28]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 3);

DEFLABEL (label_50)
  goto label_76;

DEFLABEL (label_79)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.Obj) = (current_block [OBJECT_19_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_21]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_80)
  Rsp = (& (Rsp [2]));
  goto label_73;

DEFLABEL (label_82)
  (Wrd44.Obj) = (Rsp [8]);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  Rsp = (& (Rsp [1]));
  (Wrd97.Obj) = (Rsp [6]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 10))
    goto label_90;
  (Wrd89.Obj) = (Rsp [4]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 26))
    goto label_90;
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) (Wrd92.Lng)) < ((unsigned long) (Wrd96.Lng))))
    goto label_90;
  (Wrd85.uLng) = (OBJECT_DATUM (Wrd89.Obj));
  (Wrd88.pObj) = (& ((Wrd94.pObj) [(Wrd85.Lng)]));
  (Wrd83.Obj) = ((Wrd88.pObj) [1]);

DEFLABEL (label_89)
  (Wrd137.Obj) = (Rsp [6]);
  (Wrd138.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if (! ((Wrd138.uLng) == 10))
    goto label_88;
  (Wrd129.Obj) = (Rsp [2]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd130.uLng) == 26))
    goto label_88;
  (Wrd132.Lng) = (FIXNUM_TO_LONG (Wrd129.Obj));
  (Wrd134.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd135.Obj) = ((Wrd134.pObj) [0]);
  (Wrd136.Lng) = (FIXNUM_TO_LONG (Wrd135.Obj));
  if (! (((unsigned long) (Wrd132.Lng)) < ((unsigned long) (Wrd136.Lng))))
    goto label_88;
  (Wrd125.uLng) = (OBJECT_DATUM (Wrd129.Obj));
  (Wrd128.pObj) = (& ((Wrd134.pObj) [(Wrd125.Lng)]));
  ((Wrd128.pObj) [1]) = (Wrd83.Obj);

DEFLABEL (label_87)
  (Wrd104.Obj) = (Rsp [6]);
  (Rsp [0]) = (Wrd104.Obj);
  (Wrd105.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd105.Obj);
  (Wrd106.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd106.Obj);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd123.uLng) == 10)
    goto label_86;

DEFLABEL (label_85)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_6]), 3);

DEFLABEL (label_86)
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd115.uLng) == 26))
    goto label_85;
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd120.Obj) = ((Wrd119.pObj) [0]);
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd120.Obj));
  if (! (((unsigned long) (Wrd117.Lng)) < ((unsigned long) (Wrd121.Lng))))
    goto label_85;
  (Wrd109.uLng) = (OBJECT_DATUM (Wrd106.Obj));
  (Wrd112.pObj) = (& ((Wrd119.pObj) [(Wrd109.Lng)]));
  ((Wrd112.pObj) [1]) = (Wrd105.Obj);
  Rsp = (& (Rsp [4]));
  goto label_68;

DEFLABEL (label_88)
  (Wrd139.Obj) = (Rsp [6]);
  (Wrd140.Obj) = (Rsp [2]);
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_24]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_6]), 3);

DEFLABEL (label_48)
  goto label_87;

DEFLABEL (label_90)
  (Wrd99.Obj) = (Rsp [6]);
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_23]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (label_47)
  (Wrd83.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_91)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_83;
  goto label_84;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_19_15);
  goto label_73;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define TAG_20_6 1
#define LABEL_20_7 7
#define LABEL_20_8 9
#define LABEL_20_10 11
#define LABEL_20_9 13
#define LABEL_20_12 15
#define LABEL_20_14 17
#define LABEL_20_13 19
#define LABEL_20_15 21
#define LABEL_20_16 23
#define LABEL_20_17 25
#define LABEL_20_18 27
#define LABEL_20_20 29
#define LABEL_20_19 31
#define LABEL_20_22 33
#define LABEL_20_21 35
#define LABEL_20_23 37
#define LABEL_20_24 39
#define LABEL_20_25 41
#define ENVIRONMENT_LABEL_20_3 51
#define DEBUGGING_LABEL_20_2 50
#define OBJECT_20_4 49
#define OBJECT_20_3 48
#define OBJECT_20_2 47
#define OBJECT_20_1 46
#define OBJECT_20_0 45
#define EXECUTE_CACHE_20_11 43
#define FREE_REFERENCES_LABEL_20_0 42
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd5;
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
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_20_4);
      goto find_index_maker_26;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto lambda_42;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_20_12);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_20_14);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_20_15);
      goto loop_22;

    case 10:
      current_block = (Rpc - LABEL_20_16);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_20_17);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_20_18);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_20_20);
      goto label_36;

    case 14:
      current_block = (Rpc - LABEL_20_19);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_20_22);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_20_21);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_20_23);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_20_24);
      goto label_39;

    case 19:
      current_block = (Rpc - LABEL_20_25);
      goto label_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_index_maker_41)
DEFLABEL (find_index_maker_26)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_20_5);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_54;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_54;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd18.Lng))))
    goto label_54;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd9.pObj) = (& ((Wrd16.pObj) [(Wrd6.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_53)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_52;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd34.Lng))))
    goto label_52;
  (Wrd26.Obj) = ((Wrd32.pObj) [7]);

DEFLABEL (label_51)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_20_3])))
    goto label_44;
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_50;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd54.Lng))))
    goto label_50;
  (Wrd48.Obj) = ((Wrd52.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_48;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_48;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_47)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 62))
    goto label_46;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd27.Lng))))
    goto label_46;
  (Wrd21.Obj) = ((Wrd25.pObj) [7]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (Rsp [3]) = Rvl;
  goto loop_22;

DEFLABEL (label_46)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.Obj) = (current_block [OBJECT_20_1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd6.Obj) = (Rsp [5]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_20_4]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_20_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_29)
  (Wrd26.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (loop_43)
DEFLABEL (loop_22)
  INTERRUPT_CHECK (26, LABEL_20_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_72;
  (Wrd7.Obj) = (Rsp [7]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_72;
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd77.Lng) > (Wrd79.Lng)))
    goto label_56;

DEFLABEL (label_55)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_71;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_71;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_71;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd19.pObj) = (& ((Wrd26.pObj) [(Wrd16.Lng)]));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_70)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_69;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd44.Lng))))
    goto label_69;
  (Wrd36.Obj) = ((Wrd42.pObj) [7]);

DEFLABEL (label_68)
  if (! ((Wrd36.Obj) == (current_block [OBJECT_20_3])))
    goto label_57;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_67;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd64.Lng))))
    goto label_67;
  (Wrd58.Obj) = ((Wrd62.pObj) [6]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_66)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_20_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_65;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_65;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20_21);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_23]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [11]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_20_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd9.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_60;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_60;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));

DEFLABEL (label_59)
  (Rsp [2]) = (Wrd14.Obj);

DEFLABEL (label_58)
  Rsp = (& (Rsp [2]));
  goto loop_22;

DEFLABEL (label_60)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_38)
  (Wrd14.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_61)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_63;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd30.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_63;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_62)
  (Rsp [2]) = (Wrd25.Obj);
  goto label_58;

DEFLABEL (label_63)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_24]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_39)
  (Wrd25.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_20_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_20_4]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (current_block [OBJECT_20_1]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_35)
  (Wrd36.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [7]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_55;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_9 11
#define LABEL_21_8 13
#define LABEL_21_12 15
#define LABEL_21_11 17
#define ENVIRONMENT_LABEL_21_3 23
#define DEBUGGING_LABEL_21_2 22
#define OBJECT_21_0 21
#define EXECUTE_CACHE_21_10 19
#define FREE_REFERENCES_LABEL_21_0 18
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd76;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto lambda_8;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_21_12);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_16)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_37;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_37;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_37;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_36)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_35;
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_35;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_35;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_34)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_33;
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_33;
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_23;

DEFLABEL (label_22)
  (Wrd45.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd46.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 26)
    goto label_18;

DEFLABEL (label_17)
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_18)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_17;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if ((Wrd53.Lng) > (Wrd55.Lng))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_19;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_21_0]);

DEFLABEL (label_19)
DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd67.Obj) = (Rsp [5]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_32;
  (Wrd69.Obj) = (Rsp [6]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 26))
    goto label_32;
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  (Wrd71.Lng) = ((Wrd73.Lng) - (Wrd75.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd71.Lng)))
    goto label_32;
  (Wrd76.Obj) = (LONG_TO_FIXNUM (Wrd71.Lng));
  (* (--Rsp)) = (Wrd76.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_30;
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_30;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_30;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_11);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_25;

DEFLABEL (label_24)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_25)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_24;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd12.Lng) < (Wrd14.Lng))
    goto label_27;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_26;

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_21_0]);

DEFLABEL (label_26)
DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd62.Obj) = (Rsp [5]);
  (Wrd63.Obj) = (Rsp [6]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

DEFLABEL (label_35)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define OBJECT_22_0 10
#define FREE_REFERENCES_LABEL_22_0 10
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_23;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_23;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_23;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_22)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_21;
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_21;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_21;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_20)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_19;
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_19;
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_18;

DEFLABEL (label_17)
  (Wrd45.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd46.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 26)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_12)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_11;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if ((Wrd53.Lng) > (Wrd55.Lng))
    goto label_14;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_22_0]);

DEFLABEL (label_13)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd59.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd59.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 26))
    goto label_11;
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 26))
    goto label_11;
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if ((Wrd66.Lng) > (Wrd68.Lng))
    goto label_14;
  goto label_15;

DEFLABEL (label_19)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (label_21)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define ENVIRONMENT_LABEL_23_3 12
#define DEBUGGING_LABEL_23_2 11
#define OBJECT_23_0 10
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_23;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_23;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_23;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_22)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_21;
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_21;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_21;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_20)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_19;
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_19;
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_18;

DEFLABEL (label_17)
  (Wrd45.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd46.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 26)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_12)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_11;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if ((Wrd53.Lng) > (Wrd55.Lng))
    goto label_14;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_23_0]);

DEFLABEL (label_13)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd59.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd60.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_11;
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_11;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if ((Wrd67.Lng) > (Wrd69.Lng))
    goto label_14;
  goto label_15;

DEFLABEL (label_19)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (label_21)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define LABEL_24_8 11
#define ENVIRONMENT_LABEL_24_3 14
#define DEBUGGING_LABEL_24_2 13
#define OBJECT_24_0 12
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_24_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_12)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_29;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_29;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_29;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_28)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_27;
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_27;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_27;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_26)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_25;
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_25;
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_19;

DEFLABEL (label_18)
  (Wrd45.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd46.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 26)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_14)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_13;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if ((Wrd53.Lng) > (Wrd55.Lng))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_24_0]);

DEFLABEL (label_15)
DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd59.Obj) = (Rsp [4]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_24;
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 26))
    goto label_24;
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if ((Wrd74.Lng) < (Wrd76.Lng))
    goto label_21;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_24_0]);
  goto label_20;

DEFLABEL (label_21)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_20)
DEFLABEL (label_23)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd63.Obj) = (Rsp [4]);
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_21;

DEFLABEL (label_25)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (label_27)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define LABEL_25_8 11
#define ENVIRONMENT_LABEL_25_3 14
#define DEBUGGING_LABEL_25_2 13
#define OBJECT_25_0 12
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reord_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_25_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_12)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_29;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_29;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_29;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_28)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_27;
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_27;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_27;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_26)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_25;
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_25;
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_19;

DEFLABEL (label_18)
  (Wrd45.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd46.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 26)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_14)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_13;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if ((Wrd53.Lng) > (Wrd55.Lng))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_25_0]);

DEFLABEL (label_15)
DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd59.Obj) = (Rsp [5]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_24;
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 26))
    goto label_24;
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if ((Wrd74.Lng) < (Wrd76.Lng))
    goto label_21;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_25_0]);
  goto label_20;

DEFLABEL (label_21)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_20)
DEFLABEL (label_23)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd63.Obj) = (Rsp [5]);
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_21;

DEFLABEL (label_25)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (label_27)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_11 13
#define LABEL_17 15
#define LABEL_13 17
#define TAG_14 7
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_18 23
#define LABEL_19 25
#define LABEL_20 27
#define LABEL_22 29
#define LABEL_23 31
#define LABEL_24 33
#define LABEL_25 35
#define LABEL_26 37
#define LABEL_27 39
#define LABEL_28 41
#define LABEL_30 43
#define LABEL_31 45
#define LABEL_32 47
#define LABEL_33 49
#define LABEL_34 51
#define LABEL_29 53
#define LABEL_35 55
#define LABEL_36 57
#define LABEL_37 59
#define ENVIRONMENT_LABEL_3 102
#define DEBUGGING_LABEL_2 101
#define PURIFICATION_ROOT 100
#define OBJECT_22 99
#define OBJECT_21 98
#define OBJECT_20 97
#define OBJECT_19 96
#define OBJECT_18 95
#define OBJECT_17 94
#define OBJECT_16 93
#define OBJECT_15 92
#define OBJECT_14 91
#define OBJECT_13 90
#define OBJECT_12 89
#define OBJECT_11 88
#define OBJECT_10 87
#define OBJECT_9 86
#define OBJECT_8 85
#define OBJECT_7 84
#define OBJECT_6 83
#define OBJECT_5 82
#define OBJECT_4 81
#define OBJECT_3 80
#define OBJECT_2 79
#define OBJECT_1 78
#define OBJECT_0 77
#define EXECUTE_CACHE_21 61
#define FREE_REFERENCE_5 64
#define FREE_REFERENCE_4 65
#define FREE_REFERENCE_3 66
#define FREE_REFERENCE_2 67
#define FREE_REFERENCE_1 68
#define FREE_REFERENCE_0 69
#define GLOBAL_EXECUTE_CACHE_12 71
#define GLOBAL_EXECUTE_CACHE_10 73
#define GLOBAL_EXECUTE_CACHE_6 75
#define FREE_REFERENCES_LABEL_0 60
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
reord_so_fabf794d7f306179 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
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
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_35;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto Z__make_node_42;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_18;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto continuation_20;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto continuation_19;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto continuation_22;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto continuation_21;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto continuation_24;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto continuation_23;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto continuation_26;

    case 20:
      current_block = (Rpc - LABEL_30);
      goto label_36;

    case 21:
      current_block = (Rpc - LABEL_31);
      goto label_37;

    case 22:
      current_block = (Rpc - LABEL_32);
      goto label_38;

    case 23:
      current_block = (Rpc - LABEL_33);
      goto label_39;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto label_40;

    case 25:
      current_block = (Rpc - LABEL_29);
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_35);
      goto label_44;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto label_45;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto expression_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_33)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_36])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_45)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_44)
  {
    static const short sections [] =
      {
	0,
	0,
	0,
	0,
	0,
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 25)
      goto label_43;
    blocks = (current_block [OBJECT_22]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_35])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_43)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_59;
  Wrd11 = Wrd15;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_57;
  Wrd11 = Wrd15;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_55;
  Wrd8 = Wrd12;

DEFLABEL (label_54)
  (Wrd17.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_53;
  Wrd19 = Wrd23;

DEFLABEL (label_52)
  (Wrd25.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_51;
  Wrd30 = Wrd34;

DEFLABEL (label_50)
  (Wrd36.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_49;
  Wrd41 = Wrd45;

DEFLABEL (label_48)
  (Wrd47.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_47;
  Wrd52 = Wrd56;

DEFLABEL (label_46)
  (Wrd58.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (Rsp [2]) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd53.pObj));

DEFLABEL (label_40)
  (Wrd52.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd42.pObj));

DEFLABEL (label_39)
  (Wrd41.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd31.pObj));

DEFLABEL (label_38)
  (Wrd30.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd20.pObj));

DEFLABEL (label_37)
  (Wrd19.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd9.pObj));

DEFLABEL (label_36)
  (Wrd8.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_35)
  (Wrd11.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_34)
  (Wrd11.Obj) = Rvl;
  goto label_58;

DEFLABEL (Z__make_node_42)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (Z__make_node_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd15.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd7.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_reord_so_fabf794d7f306179 [25] =
  {
    { "reord_so_code_1", 1, reord_so_code_1 },
    { "reord_so_code_2", 1, reord_so_code_2 },
    { "reord_so_code_3", 1, reord_so_code_3 },
    { "reord_so_code_4", 1, reord_so_code_4 },
    { "reord_so_code_5", 1, reord_so_code_5 },
    { "reord_so_code_6", 1, reord_so_code_6 },
    { "reord_so_code_7", 1, reord_so_code_7 },
    { "reord_so_code_8", 1, reord_so_code_8 },
    { "reord_so_code_9", 1, reord_so_code_9 },
    { "reord_so_code_10", 1, reord_so_code_10 },
    { "reord_so_code_11", 4, reord_so_code_11 },
    { "reord_so_code_12", 3, reord_so_code_12 },
    { "reord_so_code_13", 13, reord_so_code_13 },
    { "reord_so_code_14", 2, reord_so_code_14 },
    { "reord_so_code_15", 5, reord_so_code_15 },
    { "reord_so_code_16", 16, reord_so_code_16 },
    { "reord_so_code_17", 7, reord_so_code_17 },
    { "reord_so_code_18", 6, reord_so_code_18 },
    { "reord_so_code_19", 23, reord_so_code_19 },
    { "reord_so_code_20", 20, reord_so_code_20 },
    { "reord_so_code_21", 8, reord_so_code_21 },
    { "reord_so_code_22", 4, reord_so_code_22 },
    { "reord_so_code_23", 4, reord_so_code_23 },
    { "reord_so_code_24", 5, reord_so_code_24 },
    { "reord_so_code_25", 5, reord_so_code_25 }
  };

int
decl_reord_so_fabf794d7f306179 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_reord_so_fabf794d7f306179);
  return (0);
}

DECLARE_COMPILED_CODE ("reord.so", 29, decl_reord_so_fabf794d7f306179, reord_so_fabf794d7f306179)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_reord_so_data_fabf794d7f306179 [2855] =
  "\x67\x24\xa1\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x81\x22"
  "\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xb1\x82\x22\x29\x21\x9e\x2b"
  "\xbb\x1d\xb0\x83\x88\xb1\x83\x22\x29\x21\x9e\x2b\xbc\x1d\xb0\x84"
  "\x88\xb1\x84\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88\xb1\x85\x22"
  "\x29\x21\x9e\x2b\xbe\x1d\xb0\x86\x88\xb1\x86\x22\x29\x21\x9e\x2b"
  "\xbf\x1d\xb0\x02\x88\xc3\x1c\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x86"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x80\xc1\x0e\x1c"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x1c\x08\xc1\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x81\x82\xb1\x83\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x08\x83\x82\x81\x80\x0d\x1c\x0d\x1c\x1b\x24\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x80\x08\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x83\xb1\x81\x1b\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x86\x81\xc3\xb1\x85\xc2\x1c\x1b\x80\xc1\x28\x0d\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x08\xb1\x86\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x07\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb8\x17"
  "\x1c\x88\x1b\x0d\x1c\x1b\x0d\x1c\xb0\x2a\x0d\xb8\x1b\x2a\x1b\xb1"
  "\x2a\x0d\x1c\x1b\x2a\x1b\x2a\x1b\x0d\x1c\x1b\x1b\x1b\x0d\x1b\x0d"
  "\x0d\x1b\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6"
  "\x2a\xb5\x2a\xb4\x2a\xb3\x2a\xb2\x2a\x17\xc3\x0d\x1c\x0c\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x08\x8d\x08\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b"
  "\x1b\x1b\xb0\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66"
  "\x67\x6f\x70\x74\x2f\x72\x65\x6f\x72\x64\x2e\x69\x6e\x66\x15\x23"
  "\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f"
  "\x6f\x74\x5d\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66"
  "\x1e\x04\x83\x04\x03\x02\x1f\x04\x83\x04\x03\x02\x20\x04\x83\x04"
  "\x03\x02\x21\x04\x83\x04\x03\x02\x22\x04\x83\x04\x03\x02\x23\x04"
  "\x83\x04\x03\x02\x08\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65"
  "\x74\x21\x09\x02\x24\x04\x84\x06\x03\x0a\x02\x09\x09\x02\x25\x04"
  "\x84\x06\x03\x0b\x02\x0a\x09\x02\x26\x04\x84\x06\x03\x0c\x02\x0b"
  "\x09\x02\x27\x04\x84\x06\x03\x0d\x02\x0c\x0f\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31"
  "\x0e\x02\x2b\x0a\x81\x85\x02\x2a\x08\x81\x83\x02\x29\x06\x81\x83"
  "\x02\x28\x04\x83\x04\x09\x12\x0f\x02\x0d\x03\x0a\x6c\x69\x73\x74"
  "\x2d\x63\x6f\x70\x79\x08\x0b\x25\x6d\x61\x6b\x65\x2d\x6e\x6f\x64"
  "\x65\x10\x03\x2e\x08\x81\x8d\x02\x2d\x06\x81\x8d\x02\x2c\x04\x86"
  "\x0a\x07\x0f\x11\x02\x0e\x04\x63\x61\x72\x12\x04\x63\x64\x72\x13"
  "\x06\x04\x6d\x61\x70\x14\x06\x0a\x6d\x61\x6b\x65\x2d\x6e\x6f\x64"
  "\x65\x15\x04\x05\x6d\x65\x6d\x71\x16\x04\x3b\x1c\x81\x89\x02\x3a"
  "\x1a\x81\x87\x02\x39\x18\x81\x89\x02\x38\x16\x81\x87\x02\x37\x14"
  "\x81\x87\x02\x36\x12\x81\x87\x02\x35\x10\x81\x87\x02\x34\x0e\x81"
  "\x8d\x02\x33\x0c\x81\x8b\x02\x32\x0a\x81\x87\x02\x31\x08\x81\x89"
  "\x02\x30\x06\x81\x89\x02\x2f\x04\x85\x08\x1b\x28\x17\x02\x0f\x0a"
  "\x6e\x6f\x64\x65\x2d\x63\x6f\x70\x79\x18\x02\x04\x14\x02\x3d\x06"
  "\x81\x83\x02\x3c\x04\x83\x04\x05\x0d\x19\x02\x10\x06\x15\x02\x42"
  "\x0c\x81\x89\x02\x41\x0a\x81\x87\x02\x40\x08\x81\x85\x02\x3f\x06"
  "\x81\x83\x02\x3e\x04\x83\x04\x0b\x16\x1a\x02\x11\x13\x12\x1d\x66"
  "\x69\x6e\x64\x2d\x69\x6e\x64\x65\x78\x2d\x6d\x6f\x73\x74\x2f\x64"
  "\x65\x70\x65\x6e\x64\x65\x6e\x63\x69\x65\x73\x1b\x0b\x68\x65\x75"
  "\x72\x69\x73\x74\x69\x63\x73\x1c\x18\x04\x03\x07\x6c\x65\x6e\x67"
  "\x74\x68\x1d\x03\x0c\x61\x64\x64\x2d\x75\x70\x2d\x63\x6f\x73\x74"
  "\x1e\x04\x09\x72\x65\x6f\x72\x64\x65\x72\x21\x1f\x04\x14\x03\x08"
  "\x72\x65\x76\x65\x72\x73\x65\x06\x52\x22\x81\x8b\x02\x51\x20\x81"
  "\x8b\x02\x50\x1e\x81\x8b\x02\x4f\x1c\x81\x8b\x02\x4e\x1a\x81\x89"
  "\x02\x4d\x18\x81\x8b\x02\x4c\x16\x81\x87\x02\x4b\x14\x81\x85\x02"
  "\x4a\x12\x81\x85\x02\x49\x10\x81\x8f\x02\x48\x0e\x81\x89\x02\x47"
  "\x0c\x81\x87\x02\x46\x0a\x81\x85\x02\x45\x08\x81\x85\x02\x44\x06"
  "\x81\x83\x02\x43\x04\x83\x04\x21\x3a\x14\x02\x12\x13\x03\x1c\x66"
  "\x69\x72\x73\x74\x2d\x6e\x6f\x64\x65\x2d\x6e\x65\x65\x64\x73\x2d"
  "\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x3f\x20\x02\x59\x10\x81\x85"
  "\x02\x58\x0e\x81\x85\x02\x57\x0c\x81\x87\x02\x56\x0a\x81\x87\x02"
  "\x55\x08\x81\x85\x02\x54\x06\x81\x85\x02\x53\x04\x83\x04\x0f\x18"
  "\x21\x02\x13\x12\x13\x04\x0e\x74\x68\x65\x72\x65\x2d\x65\x78\x69"
  "\x73\x74\x73\x3f\x04\x16\x03\x5f\x0e\x81\x85\x02\x5e\x0c\x81\x85"
  "\x02\x5d\x0a\x81\x85\x02\x5c\x08\x81\x85\x02\x5b\x06\x81\x83\x02"
  "\x5a\x04\x83\x04\x0d\x1a\x16\x02\x14\x0c\x76\x65\x63\x74\x6f\x72"
  "\x2d\x73\x65\x74\x21\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66"
  "\x13\x09\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x03\x0d"
  "\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73\x74\x04\x06\x64\x65"
  "\x6c\x71\x21\x04\x76\x30\x81\x89\x02\x75\x2e\x81\x83\x02\x74\x2c"
  "\x81\x83\x02\x73\x2a\x81\x85\x02\x72\x28\x81\x83\x02\x71\x26\x81"
  "\x8d\x02\x70\x24\x81\x8b\x02\x6f\x22\x81\x8b\x02\x6e\x20\x81\x87"
  "\x02\x6d\x1e\x81\x87\x02\x6c\x1c\x81\x85\x02\x6b\x1a\x81\x89\x02"
  "\x6a\x18\x81\x8b\x02\x69\x16\x81\x89\x02\x68\x14\x81\x89\x02\x67"
  "\x12\x81\x89\x02\x66\x10\x81\x87\x02\x65\x0e\x81\x8b\x02\x64\x0c"
  "\x81\x8b\x02\x63\x0a\x81\x87\x02\x62\x08\x81\x87\x02\x61\x06\x81"
  "\x85\x02\x60\x04\x84\x06\x2f\x42\x12\x02\x15\x13\x03\x1d\x02\x8a"
  "\x01\x2a\x81\x95\x02\x89\x01\x28\x81\x95\x02\x88\x01\x26\x81\x95"
  "\x02\x87\x01\x24\x81\x95\x02\x86\x01\x22\x81\x97\x02\x85\x01\x20"
  "\x81\x93\x02\x84\x01\x1e\x81\x95\x02\x83\x01\x1c\x81\x93\x02\x82"
  "\x01\x1a\x81\x91\x02\x81\x01\x18\x81\x91\x02\x80\x01\x16\x81\x91"
  "\x02\x7f\x14\x81\x91\x02\x7e\x12\x81\x93\x02\x7d\x10\x81\x8f\x02"
  "\x7c\x0e\x81\x8b\x02\x7b\x0c\x81\x8d\x02\x7a\x0a\x81\x8b\x02\x79"
  "\x08\x81\x89\x02\x78\x06\x81\x89\x02\x77\x04\x83\x04\x29\x34\x1d"
  "\x02\x16\x03\x04\x61\x62\x73\x02\x92\x01\x12\x81\x8d\x02\x91\x01"
  "\x10\x81\x8f\x02\x90\x01\x0e\x81\x8d\x02\x8f\x01\x0c\x81\x8f\x02"
  "\x8e\x01\x0a\x81\x8d\x02\x8d\x01\x08\x81\x8b\x02\x8c\x01\x06\x81"
  "\x89\x02\x8b\x01\x04\x86\x0a\x11\x18\x13\x02\x17\x96\x01\x0a\x81"
  "\x8d\x02\x95\x01\x08\x81\x8b\x02\x94\x01\x06\x81\x89\x02\x93\x01"
  "\x04\x86\x0a\x09\x0d\x09\x02\x18\x9a\x01\x0a\x81\x8d\x02\x99\x01"
  "\x08\x81\x8b\x02\x98\x01\x06\x81\x89\x02\x97\x01\x04\x86\x0a\x09"
  "\x0d\x02\x19\x9f\x01\x0c\x81\x8d\x02\x9e\x01\x0a\x81\x8d\x02\x9d"
  "\x01\x08\x81\x8b\x02\x9c\x01\x06\x81\x89\x02\x9b\x01\x04\x86\x0a"
  "\x0b\x0f\x22\x02\x1a\xa4\x01\x0c\x81\x8d\x02\xa3\x01\x0a\x81\x8d"
  "\x02\xa2\x01\x08\x81\x8b\x02\xa1\x01\x06\x81\x89\x02\xa0\x01\x04"
  "\x86\x0a\x0b\x0f\x1a\x23\x23\x1c\x66\x69\x6e\x64\x2d\x69\x6e\x64"
  "\x65\x78\x2d\x6d\x6f\x73\x74\x2f\x64\x65\x70\x65\x6e\x64\x65\x6e"
  "\x74\x73\x2d\x23\x1c\x1e\x66\x69\x6e\x64\x2d\x69\x6e\x64\x65\x78"
  "\x2d\x6d\x6f\x73\x74\x2f\x64\x65\x70\x65\x6e\x64\x65\x6e\x63\x69"
  "\x65\x73\x2d\x1c\x04\x1b\x66\x69\x6e\x64\x2d\x69\x6e\x64\x65\x78"
  "\x2d\x6d\x6f\x73\x74\x2f\x64\x65\x70\x65\x6e\x64\x65\x6e\x74\x73"
  "\x22\x04\x1b\x04\x19\x66\x69\x6e\x64\x2d\x69\x6e\x64\x65\x78\x2d"
  "\x6d\x6f\x73\x74\x2f\x62\x61\x6c\x61\x6e\x63\x65\x64\x22\x09\x04"
  "\x13\x04\x0e\x11\x66\x69\x6e\x64\x2d\x69\x6e\x64\x65\x78\x2d\x6d"
  "\x61\x6b\x65\x72\x13\x1f\x20\x1e\x14\x72\x65\x6f\x72\x64\x65\x72"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x73\x18\x0e\x63\x6f"
  "\x70\x79\x2d\x6e\x6f\x64\x65\x2d\x73\x65\x74\x0e\x6d\x61\x6b\x65"
  "\x2d\x6e\x6f\x64\x65\x2d\x73\x65\x74\x15\x06\x6e\x6f\x64\x65\x3f"
  "\x0b\x1d\x04\x12\x04\x16\x04\x21\x04\x14\x04\x1a\x04\x19\x04\x17"
  "\x04\x11\x04\x0f\x04\x0b\x10\x15\x73\x65\x74\x2d\x6e\x6f\x64\x65"
  "\x2d\x64\x65\x70\x65\x6e\x64\x65\x6e\x74\x73\x21\x17\x73\x65\x74"
  "\x2d\x6e\x6f\x64\x65\x2d\x64\x65\x70\x65\x6e\x64\x65\x6e\x63\x69"
  "\x65\x73\x21\x1e\x73\x65\x74\x2d\x6e\x6f\x64\x65\x2d\x6f\x72\x69"
  "\x67\x69\x6e\x61\x6c\x2d\x64\x65\x70\x65\x6e\x64\x65\x6e\x74\x73"
  "\x21\x20\x73\x65\x74\x2d\x6e\x6f\x64\x65\x2d\x6f\x72\x69\x67\x69"
  "\x6e\x61\x6c\x2d\x64\x65\x70\x65\x6e\x64\x65\x6e\x63\x69\x65\x73"
  "\x21\x10\x6e\x6f\x64\x65\x2d\x64\x65\x70\x65\x6e\x64\x65\x6e\x74"
  "\x73\x12\x6e\x6f\x64\x65\x2d\x64\x65\x70\x65\x6e\x64\x65\x6e\x63"
  "\x69\x65\x73\x19\x6e\x6f\x64\x65\x2d\x6f\x72\x69\x67\x69\x6e\x61"
  "\x6c\x2d\x64\x65\x70\x65\x6e\x64\x65\x6e\x74\x73\x1b\x6e\x6f\x64"
  "\x65\x2d\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x64\x65\x70\x65\x6e"
  "\x64\x65\x6e\x63\x69\x65\x73\x0b\x6e\x6f\x64\x65\x2d\x76\x61\x6c"
  "\x75\x65\x0c\x6e\x6f\x64\x65\x2d\x74\x61\x72\x67\x65\x74\x0b\x0d"
  "\x04\x0c\x04\x0b\x04\x0a\x04\x04\x04\x04\x04\x04\x04\x0b\x11\x6c"
  "\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x09"
  "\x72\x74\x64\x3a\x6e\x6f\x64\x65\x21\x05\x6e\x6f\x64\x65\x07\x74"
  "\x61\x72\x67\x65\x74\x06\x76\x61\x6c\x75\x65\x16\x6f\x72\x69\x67"
  "\x69\x6e\x61\x6c\x2d\x64\x65\x70\x65\x6e\x64\x65\x6e\x63\x69\x65"
  "\x73\x14\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x64\x65\x70\x65\x6e"
  "\x64\x65\x6e\x74\x73\x0d\x64\x65\x70\x65\x6e\x64\x65\x6e\x63\x69"
  "\x65\x73\x0b\x64\x65\x70\x65\x6e\x64\x65\x6e\x74\x73\x06\x11\x6d"
  "\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03"
  "\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73"
  "\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x21\x22\x23\x1c\x1b"
  "\x07\x03\x13\x02\x1d\x3c\x80\x80\x04\x1c\x3a\x81\x81\x02\x1b\x38"
  "\x81\x81\x02\x1a\x36\x81\x85\x02\x19\x34\x81\x89\x02\x18\x32\x81"
  "\x89\x02\x17\x30\x81\x89\x02\x16\x2e\x81\x89\x02\x15\x2c\x81\x87"
  "\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x85\x02\x12\x26\x81\x83\x02"
  "\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x85\x02\x0e"
  "\x1e\x81\x83\x02\x0d\x1c\x81\x85\x02\x0c\x1a\x81\x83\x02\x0b\x18"
  "\x81\x83\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12\x81"
  "\x8f\x02\x07\x10\x81\x87\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85"
  "\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x85\x02\x02\x06\x81\x87\x02"
  "\x01\x04\x81\x83\x02\x3b\x67";

SCHEME_OBJECT *
reord_so_data_fabf794d7f306179 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_reord_so_data_fabf794d7f306179 [0]))), (sizeof (prog_reord_so_data_fabf794d7f306179)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_37]));
}

DECLARE_COMPILED_DATA_NS ("reord.so", reord_so_data_fabf794d7f306179)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("reord.so", "d722242e0a9edff8")
