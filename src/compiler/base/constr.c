/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:10-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
#define ENVIRONMENT_LABEL_2_3 6
#define DEBUGGING_LABEL_2_2 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  Rvl = (current_block [OBJECT_2_0]);
  goto pop_return;

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
constr_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto constraint_element_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constraint_element_3)
DEFLABEL (constraint_element_0)
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
constr_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto constraint_graph_head_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constraint_graph_head_3)
DEFLABEL (constraint_graph_head_0)
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
constr_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto constraint_afters_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constraint_afters_3)
DEFLABEL (constraint_afters_0)
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
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto constraint_generation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constraint_generation_3)
DEFLABEL (constraint_generation_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
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
constr_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto constraint_closedP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constraint_closedP_3)
DEFLABEL (constraint_closedP_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

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
constr_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_constraint_graph_headB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_constraint_graph_headB_3)
DEFLABEL (set_constraint_graph_headB_0)
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
constr_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_constraint_aftersB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_constraint_aftersB_3)
DEFLABEL (set_constraint_aftersB_0)
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
#define ENVIRONMENT_LABEL_10_3 8
#define DEBUGGING_LABEL_10_2 7
#define OBJECT_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_constraint_generationB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_constraint_generationB_3)
DEFLABEL (set_constraint_generationB_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_10_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 8
#define DEBUGGING_LABEL_11_2 7
#define OBJECT_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto set_constraint_closedPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_constraint_closedPB_3)
DEFLABEL (set_constraint_closedPB_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define ENVIRONMENT_LABEL_12_3 17
#define DEBUGGING_LABEL_12_2 16
#define OBJECT_12_3 15
#define OBJECT_12_2 14
#define OBJECT_12_1 13
#define OBJECT_12_0 12
#define FREE_REFERENCE_12_0 11
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto constraintP_4;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constraintP_10)
DEFLABEL (constraintP_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
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
  Rvl = (current_block [OBJECT_12_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_12_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
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
constr_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  Rvl = (current_block [OBJECT_13_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
constr_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  Rvl = (current_block [OBJECT_14_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
constr_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto constraint_graph_entry_nodes_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constraint_graph_entry_nodes_3)
DEFLABEL (constraint_graph_entry_nodes_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

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

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 7
#define DEBUGGING_LABEL_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto constraint_graph_closedP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constraint_graph_closedP_3)
DEFLABEL (constraint_graph_closedP_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

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

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 8
#define DEBUGGING_LABEL_17_2 7
#define OBJECT_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto set_constraint_graph_entry_nodesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_constraint_graph_entry_nodesB_3)
DEFLABEL (set_constraint_graph_entry_nodesB_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_17_1]);
  Rsp = (& (Rsp [3]));
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
constr_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_constraint_graph_closedPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_constraint_graph_closedPB_3)
DEFLABEL (set_constraint_graph_closedPB_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_18_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define ENVIRONMENT_LABEL_19_3 17
#define DEBUGGING_LABEL_19_2 16
#define OBJECT_19_3 15
#define OBJECT_19_2 14
#define OBJECT_19_1 13
#define OBJECT_19_0 12
#define FREE_REFERENCE_19_0 11
#define FREE_REFERENCES_LABEL_19_0 10
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto constraint_graphP_4;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constraint_graphP_10)
DEFLABEL (constraint_graphP_4)
  INTERRUPT_CHECK (26, LABEL_19_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
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
  Rvl = (current_block [OBJECT_19_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_19_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_7 5
#define LABEL_20_8 7
#define LABEL_20_9 9
#define LABEL_20_10 11
#define LABEL_20_11 13
#define LABEL_20_5 15
#define LABEL_20_12 17
#define TAG_20_13 7
#define ENVIRONMENT_LABEL_20_3 33
#define DEBUGGING_LABEL_20_2 32
#define OBJECT_20_4 31
#define OBJECT_20_3 30
#define OBJECT_20_2 29
#define OBJECT_20_1 28
#define OBJECT_20_0 27
#define EXECUTE_CACHE_20_16 19
#define EXECUTE_CACHE_20_15 21
#define EXECUTE_CACHE_20_14 23
#define EXECUTE_CACHE_20_6 25
#define FREE_REFERENCES_LABEL_20_0 18
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd63;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
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
      goto make_constraint_11;

    case 1:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_20_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_20_12);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_constraint_17)
DEFLABEL (make_constraint_11)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_20_4]))
    goto label_21;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_26;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd69.Lng))))
    goto label_26;
  (Wrd63.Obj) = (Rsp [2]);
  ((Wrd67.pObj) [3]) = (Wrd63.Obj);

DEFLABEL (label_25)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_24;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd33.Lng))))
    goto label_24;
  (Wrd25.Obj) = ((Wrd31.pObj) [2]);

DEFLABEL (label_23)
  (Wrd44.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_22;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd52.Lng))))
    goto label_22;
  ((Wrd50.pObj) [2]) = (Wrd41.Obj);

DEFLABEL (label_21)
  (Wrd11.Obj) = (Rsp [3]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_20_4])))
    goto label_20;

DEFLABEL (label_19)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_12])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd19 = Wrd18;
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20_7);
  goto label_19;

DEFLABEL (label_22)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.Obj) = (current_block [OBJECT_20_2]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 3);

DEFLABEL (label_14)
  goto label_21;

DEFLABEL (label_24)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (current_block [OBJECT_20_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 2);

DEFLABEL (label_13)
  (Wrd25.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (current_block [OBJECT_20_0]);
  (Wrd74.Obj) = (Rsp [2]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 3);

DEFLABEL (label_15)
  goto label_25;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_20_12);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_8 9
#define LABEL_21_10 11
#define LABEL_21_9 13
#define LABEL_21_12 15
#define LABEL_21_7 17
#define LABEL_21_13 19
#define ENVIRONMENT_LABEL_21_3 29
#define DEBUGGING_LABEL_21_2 28
#define OBJECT_21_4 27
#define OBJECT_21_3 26
#define OBJECT_21_2 25
#define OBJECT_21_1 24
#define OBJECT_21_0 23
#define EXECUTE_CACHE_21_11 21
#define FREE_REFERENCES_LABEL_21_0 20
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_21_4);
      goto find_constraint_11;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_21_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_21_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_21_13);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_constraint_19)
DEFLABEL (find_constraint_11)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_22;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_22;
  (Wrd9.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_21)
  Rdl = (& (Rsp [4]));
  goto loop_6;

DEFLABEL (label_22)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_21_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_6)
  DLINK_INTERRUPT_CHECK (25, LABEL_21_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_34;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_33)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_32;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_32;
  (Wrd31.Obj) = ((Wrd35.pObj) [2]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_31)
  (Wrd45.Obj) = (Rsp [6]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_21_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd33.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (Wrd30.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd30.Obj));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_27)
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = (Wrd7.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_24)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_26;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_25)
  (Wrd27.pObj) = (& (Rsp [5]));
  {
    SCHEME_OBJECT * IPDLp1 = (((Wrd27.pObj) <= Rdl) ? (Wrd27.pObj) : Rdl);
    (* (--IPDLp1)) = (Rsp [1]);
    (* (--IPDLp1)) = (Rsp [0]);
    Rsp = IPDLp1;
  }
  goto loop_6;

DEFLABEL (label_26)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 1);

DEFLABEL (label_16)
  (Wrd19.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd19.Obj));
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 62))
    goto label_30;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd42.Lng))))
    goto label_30;
  (Wrd36.Obj) = ((Wrd40.pObj) [4]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_29)
  (Wrd51.Obj) = (Rsp [5]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd52.pObj)));
  (Rsp [1]) = (Wrd54.Obj);
  Rdl = (& (Rsp [2]));
  goto loop_6;

DEFLABEL (label_30)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (current_block [OBJECT_21_3]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_21_0]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_14)
  (Wrd18.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd18.Obj));
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 15
#define DEBUGGING_LABEL_22_2 14
#define OBJECT_22_0 13
#define EXECUTE_CACHE_22_8 7
#define EXECUTE_CACHE_22_7 9
#define EXECUTE_CACHE_22_6 11
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto find_or_make_constraint_3;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_or_make_constraint_6)
DEFLABEL (find_or_make_constraint_3)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == (current_block [OBJECT_22_0]))
    goto label_8;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (label_8)
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_5 3
#define LABEL_23_6 5
#define LABEL_23_7 7
#define LABEL_23_4 9
#define LABEL_23_8 11
#define LABEL_23_9 13
#define LABEL_23_11 15
#define LABEL_23_12 17
#define LABEL_23_13 19
#define LABEL_23_14 21
#define LABEL_23_15 23
#define LABEL_23_16 25
#define LABEL_23_17 27
#define ENVIRONMENT_LABEL_23_3 42
#define DEBUGGING_LABEL_23_2 41
#define OBJECT_23_7 40
#define OBJECT_23_6 39
#define OBJECT_23_5 38
#define OBJECT_23_4 37
#define OBJECT_23_3 36
#define OBJECT_23_2 35
#define OBJECT_23_1 34
#define OBJECT_23_0 33
#define EXECUTE_CACHE_23_18 29
#define EXECUTE_CACHE_23_10 31
#define FREE_REFERENCES_LABEL_23_0 28
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd86;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd94;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd110;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd104;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd169;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd63;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd185;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd37;
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
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd203;
  machine_word Wrd202;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_23_4);
      goto constraint_addB_15;

    case 4:
      current_block = (Rpc - LABEL_23_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_23_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_23_12);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_23_13);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_23_14);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_23_15);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_23_16);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_23_17);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constraint_addB_27)
DEFLABEL (constraint_addB_15)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_51;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_51;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_50)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_49;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_49;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_48)
  (Wrd37.Obj) = (* (Rsp++));
  if (! ((Wrd21.Obj) == (Wrd37.Obj)))
    goto label_47;
  (Wrd188.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd189.Obj);
  (Wrd190.Obj) = (current_block [OBJECT_23_2]);
  (* (--Rsp)) = (Wrd190.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_5);

DEFLABEL (label_47)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_46;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd46.Lng))))
    goto label_46;
  (Wrd38.Obj) = ((Wrd44.pObj) [4]);

DEFLABEL (label_45)
  (Wrd57.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd178.Obj) = (Rsp [0]);
  (Wrd179.uLng) = (OBJECT_TYPE (Wrd178.Obj));
  if (! ((Wrd179.uLng) == 62))
    goto label_44;
  (Wrd175.pObj) = (OBJECT_ADDRESS (Wrd178.Obj));
  (Wrd176.Obj) = ((Wrd175.pObj) [0]);
  (Wrd177.Lng) = (FIXNUM_TO_LONG (Wrd176.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd177.Lng))))
    goto label_44;
  ((Wrd175.pObj) [4]) = (Wrd54.Obj);

DEFLABEL (label_43)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_42;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd69.Lng))))
    goto label_42;
  (Wrd63.Obj) = ((Wrd67.pObj) [3]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_41)
  (Wrd77.Obj) = (Rsp [0]);
  if ((Wrd77.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd79.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd94.uLng) == 62))
    goto label_39;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd92.Lng))))
    goto label_39;
  (Wrd86.Obj) = ((Wrd90.pObj) [2]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_38)
  (Wrd100.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd100.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_23_6);
  (Rsp [2]) = Rvl;
  (Wrd202.Obj) = (Rsp [0]);
  (Wrd203.uLng) = (OBJECT_TYPE (Wrd202.Obj));
  if ((Wrd203.uLng) == 62)
    goto label_29;

DEFLABEL (label_28)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 3);

DEFLABEL (label_29)
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd202.Obj));
  (Wrd200.Obj) = ((Wrd199.pObj) [0]);
  (Wrd201.Lng) = (FIXNUM_TO_LONG (Wrd200.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd201.Lng))))
    goto label_28;
  ((Wrd199.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [4]));

DEFLABEL (label_37)
  (Wrd162.Obj) = (Rsp [0]);
  (Wrd163.uLng) = (OBJECT_TYPE (Wrd162.Obj));
  if (! ((Wrd163.uLng) == 62))
    goto label_36;
  (Wrd159.pObj) = (OBJECT_ADDRESS (Wrd162.Obj));
  (Wrd160.Obj) = ((Wrd159.pObj) [0]);
  (Wrd161.Lng) = (FIXNUM_TO_LONG (Wrd160.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd161.Lng))))
    goto label_36;
  ((Wrd159.pObj) [6]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_35)
  (Wrd145.Obj) = (Rsp [0]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd146.uLng) == 62))
    goto label_34;
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd143.Obj) = ((Wrd142.pObj) [0]);
  (Wrd144.Lng) = (FIXNUM_TO_LONG (Wrd143.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd144.Lng))))
    goto label_34;
  (Wrd104.Obj) = ((Wrd142.pObj) [3]);
  if (! ((Wrd104.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_31;

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_23_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd117.Obj) = (Rsp [0]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 62))
    goto label_33;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [0]);
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd116.Lng))))
    goto label_33;
  (Wrd110.Obj) = ((Wrd114.pObj) [3]);
  (* (--Rsp)) = (Wrd110.Obj);

DEFLABEL (label_32)
  (Wrd124.Obj) = (current_block [OBJECT_23_5]);
  (Rsp [1]) = (Wrd124.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd137.Obj) = (Rsp [0]);
  (Wrd138.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if (! ((Wrd138.uLng) == 62))
    goto label_28;
  (Wrd134.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd135.Obj) = ((Wrd134.pObj) [0]);
  (Wrd136.Lng) = (FIXNUM_TO_LONG (Wrd135.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd136.Lng))))
    goto label_28;
  ((Wrd134.pObj) [3]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_23_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd119.Obj) = (Rsp [0]);
  (Wrd120.Obj) = (current_block [OBJECT_23_5]);
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_16]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd147.Obj) = (Rsp [0]);
  (Wrd148.Obj) = (current_block [OBJECT_23_5]);
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (label_36)
  (Wrd164.Obj) = (Rsp [0]);
  (Wrd165.Obj) = (current_block [OBJECT_23_6]);
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 3);

DEFLABEL (label_24)
  goto label_35;

DEFLABEL (label_39)
  (Wrd95.Obj) = (Rsp [3]);
  (Wrd96.Obj) = (current_block [OBJECT_23_0]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_17]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  Rsp = (& (Rsp [2]));
  goto label_37;

DEFLABEL (label_42)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (current_block [OBJECT_23_5]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd180.Obj) = (Rsp [0]);
  (Wrd181.Obj) = (current_block [OBJECT_23_3]);
  (Wrd185.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd185.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 3);

DEFLABEL (label_25)
  goto label_43;

DEFLABEL (label_46)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_23_3]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_19)
  (Wrd38.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_49)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_23_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_18)
  (Wrd21.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_23_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_23_7);
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 9
#define DEBUGGING_LABEL_24_2 8
#define OBJECT_24_0 7
#define EXECUTE_CACHE_24_5 5
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_24_4);
      goto add_constraint_elementB_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_constraint_elementB_4)
DEFLABEL (add_constraint_elementB_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define TAG_25_7 2
#define LABEL_25_9 9
#define TAG_25_10 3
#define ENVIRONMENT_LABEL_25_3 20
#define DEBUGGING_LABEL_25_2 19
#define EXECUTE_CACHE_25_13 11
#define EXECUTE_CACHE_25_12 13
#define EXECUTE_CACHE_25_11 15
#define EXECUTE_CACHE_25_8 17
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_25_4);
      goto add_constraint_setB_4;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_constraint_setB_7)
DEFLABEL (add_constraint_setB_4)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_6])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [4]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_9])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_25_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_12]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_25_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define TAG_26_7 2
#define LABEL_26_9 9
#define LABEL_26_10 11
#define ENVIRONMENT_LABEL_26_3 26
#define DEBUGGING_LABEL_26_2 25
#define OBJECT_26_5 24
#define OBJECT_26_4 23
#define OBJECT_26_3 22
#define OBJECT_26_2 21
#define OBJECT_26_1 20
#define OBJECT_26_0 19
#define EXECUTE_CACHE_26_11 13
#define EXECUTE_CACHE_26_8 15
#define FREE_REFERENCE_26_0 18
#define FREE_REFERENCES_LABEL_26_0 12
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_26_4);
      goto close_constraint_graphB_3;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_26_9);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_constraint_graphB_8)
DEFLABEL (close_constraint_graphB_3)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Wrd5.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_26_1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 3);

DEFLABEL (label_11)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  ((Wrd16.pObj) [3]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_26_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_26_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;
  Wrd5 = Wrd9;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_13;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd23.Lng))))
    goto label_13;
  (Wrd11.Obj) = ((Wrd21.pObj) [2]);

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (label_13)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd31.Obj) = (current_block [OBJECT_26_4]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_5]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_9])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define TAG_27_6 1
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define EXECUTE_CACHE_27_8 7
#define EXECUTE_CACHE_27_7 9
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto close_constraint_nodeB_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_constraint_nodeB_4)
DEFLABEL (close_constraint_nodeB_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_27_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_8 7
#define LABEL_28_6 9
#define TAG_28_7 3
#define LABEL_28_9 11
#define LABEL_28_11 13
#define LABEL_28_13 15
#define LABEL_28_12 17
#define LABEL_28_18 19
#define LABEL_28_15 21
#define ENVIRONMENT_LABEL_28_3 44
#define DEBUGGING_LABEL_28_2 43
#define OBJECT_28_6 42
#define OBJECT_28_5 41
#define OBJECT_28_4 40
#define OBJECT_28_3 39
#define OBJECT_28_2 38
#define OBJECT_28_1 37
#define OBJECT_28_0 36
#define EXECUTE_CACHE_28_19 23
#define EXECUTE_CACHE_28_17 25
#define EXECUTE_CACHE_28_16 27
#define EXECUTE_CACHE_28_14 29
#define EXECUTE_CACHE_28_10 31
#define FREE_REFERENCE_28_1 34
#define FREE_REFERENCE_28_0 35
#define FREE_REFERENCES_LABEL_28_0 22
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_28_4);
      goto Z__close_constraint_nodeB_7;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_28_8);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_28_6);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_28_9);
      goto lambda_6;

    case 5:
      current_block = (Rpc - LABEL_28_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_28_13);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_28_12);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_28_18);
      goto label_11;

    case 9:
      current_block = (Rpc - LABEL_28_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__close_constraint_nodeB_13)
DEFLABEL (Z__close_constraint_nodeB_7)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_6])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_17;
  Wrd15 = Wrd19;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (Rsp [4]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_8])), (Wrd16.pObj));

DEFLABEL (label_10)
  (Wrd15.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_5])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_28_6);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_28_3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_12);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_24)
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_11);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 3);

DEFLABEL (label_21)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_20;
  ((Wrd16.pObj) [4]) = Rvl;
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_28_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd28.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd28.Obj);
  goto label_24;

DEFLABEL (lambda_15)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_28_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_28_15);
  (Wrd5.Obj) = (current_block [OBJECT_28_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_28_6]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_27;

DEFLABEL (label_26)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 3);

DEFLABEL (label_27)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_26;
  ((Wrd16.pObj) [6]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define TAG_29_6 1
#define LABEL_29_8 7
#define LABEL_29_7 9
#define LABEL_29_9 11
#define LABEL_29_10 13
#define LABEL_29_11 15
#define ENVIRONMENT_LABEL_29_3 21
#define DEBUGGING_LABEL_29_2 20
#define OBJECT_29_0 19
#define EXECUTE_CACHE_29_12 17
#define FREE_REFERENCES_LABEL_29_0 16
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
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
      goto transitively_close_dagB_10;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto transitively_close_B_14;

    case 2:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_29_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transitively_close_dagB_13)
DEFLABEL (transitively_close_dagB_10)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
  Rhp += 4;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  Wrd19 = Wrd21;
  (Wrd20.Obj) = (Rsp [5]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd19.pObj) [3]) = (Wrd17.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [5]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd22.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto transitively_close_B_8;

DEFLABEL (transitively_close_B_14)
  CLOSURE_HEADER (LABEL_29_5);

DEFLABEL (transitively_close_B_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_29_0])))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_29_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_29_10);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [5]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 12
#define DEBUGGING_LABEL_30_2 11
#define EXECUTE_CACHE_30_6 7
#define FREE_REFERENCE_30_0 10
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_30_4);
      goto order_per_constraints_0;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (order_per_constraints_4)
DEFLABEL (order_per_constraints_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_6;
  Wrd8 = Wrd12;

DEFLABEL (label_5)
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_5])), (Wrd9.pObj));

DEFLABEL (label_2)
  (Wrd8.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_6 5
#define LABEL_31_7 7
#define LABEL_31_8 9
#define LABEL_31_9 11
#define LABEL_31_10 13
#define LABEL_31_5 15
#define LABEL_31_12 17
#define LABEL_31_13 19
#define LABEL_31_18 21
#define LABEL_31_14 23
#define TAG_31_15 10
#define LABEL_31_22 25
#define LABEL_31_19 27
#define LABEL_31_21 29
#define LABEL_31_24 31
#define LABEL_31_25 33
#define ENVIRONMENT_LABEL_31_3 58
#define DEBUGGING_LABEL_31_2 57
#define OBJECT_31_4 56
#define OBJECT_31_3 55
#define OBJECT_31_2 54
#define OBJECT_31_1 53
#define OBJECT_31_0 52
#define EXECUTE_CACHE_31_26 35
#define EXECUTE_CACHE_31_23 37
#define EXECUTE_CACHE_31_20 39
#define EXECUTE_CACHE_31_17 41
#define EXECUTE_CACHE_31_16 43
#define EXECUTE_CACHE_31_11 45
#define FREE_REFERENCE_31_3 48
#define FREE_REFERENCE_31_2 49
#define FREE_REFERENCE_31_1 50
#define FREE_REFERENCE_31_0 51
#define FREE_REFERENCES_LABEL_31_0 34
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_31_4);
      goto order_per_constraints_extracted_17;

    case 1:
      current_block = (Rpc - LABEL_31_6);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_31_9);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_31_10);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_31_12);
      goto loop_15;

    case 8:
      current_block = (Rpc - LABEL_31_13);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_31_18);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_31_14);
      goto lambda_30;

    case 11:
      current_block = (Rpc - LABEL_31_22);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_31_19);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_31_21);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_31_24);
      goto label_25;

    case 15:
      current_block = (Rpc - LABEL_31_25);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (order_per_constraints_extracted_28)
DEFLABEL (order_per_constraints_extracted_17)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_40;
  Wrd10 = Wrd14;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_38;
  Wrd16 = Wrd20;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_36;
  Wrd22 = Wrd26;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_3]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_34;
  Wrd28 = Wrd32;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd43.Obj) = (Rsp [8]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 62))
    goto label_32;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd42.Lng))))
    goto label_32;
  (Wrd36.Obj) = ((Wrd40.pObj) [2]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  goto loop_15;

DEFLABEL (label_32)
  (Wrd45.Obj) = (Rsp [8]);
  (Wrd46.Obj) = (current_block [OBJECT_31_1]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_9])), (Wrd29.pObj));

DEFLABEL (label_22)
  (Wrd28.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_8])), (Wrd23.pObj));

DEFLABEL (label_21)
  (Wrd22.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_7])), (Wrd17.pObj));

DEFLABEL (label_20)
  (Wrd16.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_6])), (Wrd11.pObj));

DEFLABEL (label_19)
  (Wrd10.Obj) = Rvl;
  goto label_39;

DEFLABEL (loop_29)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_31_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_42;

DEFLABEL (label_41)
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (label_42)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_41;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_14])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd19.Obj) = (Rsp [6]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  ((Wrd18.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_31_13);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_48;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_47)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_19]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_31_19);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_23]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_31_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;

DEFLABEL (label_45)
  (Wrd13.Obj) = (Rsp [3]);
  goto label_43;

DEFLABEL (label_44)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));

DEFLABEL (label_43)
DEFLABEL (label_46)
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_48)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_3]), 1);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_31_14);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_21]))));
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

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_31_21);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_52;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_51)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_50;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd27.Lng))))
    goto label_50;
  (Wrd21.Obj) = ((Wrd25.pObj) [2]);

DEFLABEL (label_49)
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_26]));

DEFLABEL (label_50)
  (Wrd30.Obj) = (current_block [OBJECT_31_1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_25]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_26)
  (Wrd21.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 1);

DEFLABEL (label_25)
  (Wrd6.Obj) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_11 9
#define TAG_32_12 3
#define LABEL_32_14 11
#define LABEL_32_15 13
#define LABEL_32_9 15
#define TAG_32_10 6
#define LABEL_32_18 17
#define LABEL_32_7 19
#define TAG_32_8 8
#define LABEL_32_20 21
#define LABEL_32_16 23
#define LABEL_32_21 25
#define LABEL_32_22 27
#define LABEL_32_23 29
#define LABEL_32_24 31
#define LABEL_32_25 33
#define ENVIRONMENT_LABEL_32_3 49
#define DEBUGGING_LABEL_32_2 48
#define OBJECT_32_6 47
#define OBJECT_32_5 46
#define OBJECT_32_4 45
#define OBJECT_32_3 44
#define OBJECT_32_2 43
#define OBJECT_32_1 42
#define OBJECT_32_0 41
#define EXECUTE_CACHE_32_19 35
#define EXECUTE_CACHE_32_17 37
#define EXECUTE_CACHE_32_13 39
#define FREE_REFERENCES_LABEL_32_0 34
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd71;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd70;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_32_4);
      goto legal_ordering_per_constraintsP_22;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto loop_20;

    case 3:
      current_block = (Rpc - LABEL_32_11);
      goto lambda_37;

    case 4:
      current_block = (Rpc - LABEL_32_14);
      goto continuation_16;

    case 5:
      current_block = (Rpc - LABEL_32_15);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_32_9);
      goto depth_first_searchP_13;

    case 7:
      current_block = (Rpc - LABEL_32_18);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_32_7);
      goto multiple_searchP_19;

    case 9:
      current_block = (Rpc - LABEL_32_20);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_32_16);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_32_21);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_32_22);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_32_23);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_32_24);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_32_25);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (legal_ordering_per_constraintsP_33)
DEFLABEL (legal_ordering_per_constraintsP_22)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_39;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_39;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_20;

DEFLABEL (label_39)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_32_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_38;

DEFLABEL (loop_34)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_32_6);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_7])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_9])));
  Rhp += 2;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  Wrd21 = Wrd26;
  ((Wrd21.pObj) [2]) = (Wrd29.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [3]) = (Wrd19.Obj);
  ((Wrd28.pObj) [2]) = (Wrd27.Obj);
  if ((Wrd19.Obj) == (current_block [OBJECT_32_2]))
    goto label_40;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_11])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  ((Wrd12.pObj) [2]) = (Wrd29.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_13]));

DEFLABEL (label_40)
  Rvl = (current_block [OBJECT_32_3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_32_11);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  goto multiple_searchP_19;

DEFLABEL (depth_first_searchP_36)
DEFLABEL (depth_first_searchP_13)
  INTERRUPT_CHECK (26, LABEL_32_9);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_32_2]))
    goto label_52;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_52;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_32_16);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_51;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_50)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_49;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_49;
  (Wrd20.Obj) = ((Wrd26.pObj) [2]);

DEFLABEL (label_48)
  (Wrd36.Obj) = (* (Rsp++));
  if ((Wrd20.Obj) == (Wrd36.Obj))
    goto label_43;
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [2]);
  (Rsp [0]) = (Wrd37.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_42;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd48.Lng))))
    goto label_42;
  (Wrd40.Obj) = ((Wrd46.pObj) [4]);

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd40.Obj);
  goto multiple_searchP_19;

DEFLABEL (label_42)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (current_block [OBJECT_32_6]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_25]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_29)
  (Wrd40.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_47;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd56.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_46)
  (Rsp [0]) = (Wrd56.Obj);
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 62))
    goto label_45;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd79.Lng))))
    goto label_45;
  (Wrd71.Obj) = ((Wrd77.pObj) [4]);

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd71.Obj);
  goto loop_20;

DEFLABEL (label_45)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.Obj) = (current_block [OBJECT_32_6]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_24]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_31)
  (Wrd71.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_23]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 1);

DEFLABEL (label_30)
  (Wrd56.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.Obj) = (current_block [OBJECT_32_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_22]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_28)
  (Wrd20.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_56)
  (Wrd13.Obj) = (Rsp [0]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_55;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_54)
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto multiple_searchP_19;

DEFLABEL (label_55)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_18]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 1);

DEFLABEL (label_25)
  (Wrd18.Obj) = Rvl;
  goto label_54;

DEFLABEL (multiple_searchP_35)
DEFLABEL (multiple_searchP_19)
  INTERRUPT_CHECK (26, LABEL_32_7);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_32_2])))
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_59;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_58)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto depth_first_searchP_13;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_32_14);
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_20]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_11 5
#define TAG_33_12 1
#define LABEL_33_9 7
#define TAG_33_10 2
#define LABEL_33_7 9
#define TAG_33_8 3
#define LABEL_33_5 11
#define TAG_33_6 4
#define LABEL_33_14 13
#define LABEL_33_15 15
#define LABEL_33_16 17
#define LABEL_33_17 19
#define LABEL_33_18 21
#define ENVIRONMENT_LABEL_33_3 31
#define DEBUGGING_LABEL_33_2 30
#define OBJECT_33_0 29
#define EXECUTE_CACHE_33_20 23
#define EXECUTE_CACHE_33_19 25
#define EXECUTE_CACHE_33_13 27
#define FREE_REFERENCES_LABEL_33_0 22
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
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
      goto reverse_postorder_12;

    case 1:
      current_block = (Rpc - LABEL_33_11);
      goto lambda_19;

    case 2:
      current_block = (Rpc - LABEL_33_9);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto next_17;

    case 4:
      current_block = (Rpc - LABEL_33_5);
      goto doit_16;

    case 5:
      current_block = (Rpc - LABEL_33_14);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_33_15);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_33_16);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_33_17);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_33_18);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reverse_postorder_15)
DEFLABEL (reverse_postorder_12)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd48.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_5])));
  Rhp += 2;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_7])));
  Rhp += 2;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd44.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_9])));
  Rhp += 4;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd43.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd39.pObj) = (& (Rhp [-1]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  Wrd24 = Wrd44;
  ((Wrd24.pObj) [2]) = (Wrd47.Obj);
  ((Wrd24.pObj) [3]) = (Wrd40.Obj);
  (Wrd19.Obj) = (Rsp [7]);
  ((Wrd24.pObj) [4]) = (Wrd19.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  ((Wrd24.pObj) [5]) = (Wrd16.Obj);
  Wrd30 = Wrd46;
  ((Wrd30.pObj) [2]) = (Wrd45.Obj);
  (Wrd28.Obj) = (Rsp [8]);
  ((Wrd30.pObj) [3]) = (Wrd28.Obj);
  Wrd36 = Wrd48;
  ((Wrd36.pObj) [2]) = (Wrd45.Obj);
  ((Wrd36.pObj) [3]) = (Wrd40.Obj);
  (Wrd5.Obj) = (Rsp [6]);
  (Rsp [7]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_11])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  ((Wrd11.pObj) [2]) = (Wrd49.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [8]) = (Wrd7.Obj);
  Rsp = (& (Rsp [7]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_33_11);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_13]));

DEFLABEL (loop_18)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_33_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_17);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  ((Wrd12.pObj) [0]) = (Wrd7.Obj);
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (next_17)
  CLOSURE_HEADER (LABEL_33_7);

DEFLABEL (next_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_33_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_7;

DEFLABEL (doit_16)
  CLOSURE_HEADER (LABEL_33_5);

DEFLABEL (doit_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = (current_block [OBJECT_33_0]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_7;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_33_16);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_19]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_9 7
#define TAG_34_10 2
#define LABEL_34_7 9
#define TAG_34_8 3
#define LABEL_34_12 11
#define LABEL_34_13 13
#define LABEL_34_14 15
#define ENVIRONMENT_LABEL_34_3 27
#define DEBUGGING_LABEL_34_2 26
#define OBJECT_34_0 25
#define EXECUTE_CACHE_34_11 17
#define EXECUTE_CACHE_34_6 19
#define FREE_REFERENCE_34_0 22
#define FREE_ASSIGNMENT_34_0 24
#define FREE_REFERENCES_LABEL_34_0 16
#define NUMBER_OF_LINKER_SECTIONS_34_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
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
      goto with_new_constraint_marks_10;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_9);
      goto lambda_18;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto swapB_17;

    case 4:
      current_block = (Rpc - LABEL_34_12);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_34_13);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_34_14);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_new_constraint_marks_16)
DEFLABEL (with_new_constraint_marks_10)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_7])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (Rsp [1]) = (Wrd17.Obj);
  ((Wrd19.pObj) [2]) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_9])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_34_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_17)
  CLOSURE_HEADER (LABEL_34_7);

DEFLABEL (swapB_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  Wrd5 = Wrd9;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_34_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_22)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_34_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_34_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_34_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_14)
  goto label_19;

DEFLABEL (label_24)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_34_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_13)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_34_12])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define ENVIRONMENT_LABEL_35_3 14
#define DEBUGGING_LABEL_35_2 13
#define OBJECT_35_2 12
#define OBJECT_35_1 11
#define OBJECT_35_0 10
#define FREE_REFERENCE_35_0 9
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_35_4);
      goto constraint_markedP_1;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constraint_markedP_6)
DEFLABEL (constraint_markedP_1)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd17.pObj) [5]);

DEFLABEL (label_10)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_35_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_35_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define ENVIRONMENT_LABEL_36_3 12
#define DEBUGGING_LABEL_36_2 11
#define OBJECT_36_2 10
#define OBJECT_36_1 9
#define OBJECT_36_0 8
#define FREE_REFERENCE_36_0 7
#define FREE_REFERENCES_LABEL_36_0 6
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
constr_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_36_4);
      goto constraint_markB_0;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constraint_markB_4)
DEFLABEL (constraint_markB_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_8;
  Wrd8 = Wrd12;

DEFLABEL (label_7)
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 3);

DEFLABEL (label_6)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd24.Lng))))
    goto label_5;
  ((Wrd22.pObj) [5]) = (Wrd8.Obj);
  Rvl = (current_block [OBJECT_36_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_5])), (Wrd9.pObj));

DEFLABEL (label_2)
  (Wrd8.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
#define LABEL_19 19
#define LABEL_15 21
#define LABEL_16 23
#define LABEL_18 25
#define LABEL_21 27
#define LABEL_25 29
#define LABEL_22 31
#define LABEL_23 33
#define LABEL_24 35
#define LABEL_26 37
#define LABEL_31 39
#define LABEL_27 41
#define TAG_28 19
#define LABEL_33 43
#define LABEL_29 45
#define LABEL_30 47
#define LABEL_32 49
#define LABEL_34 51
#define LABEL_35 53
#define TAG_36 25
#define LABEL_37 55
#define LABEL_38 57
#define LABEL_39 59
#define LABEL_40 61
#define ENVIRONMENT_LABEL_3 105
#define DEBUGGING_LABEL_2 104
#define PURIFICATION_ROOT 103
#define OBJECT_28 102
#define OBJECT_27 101
#define OBJECT_26 100
#define OBJECT_25 99
#define OBJECT_24 98
#define OBJECT_23 97
#define OBJECT_22 96
#define OBJECT_21 95
#define OBJECT_20 94
#define OBJECT_19 93
#define OBJECT_18 92
#define OBJECT_17 91
#define OBJECT_16 90
#define OBJECT_15 89
#define OBJECT_14 88
#define OBJECT_13 87
#define OBJECT_12 86
#define OBJECT_11 85
#define OBJECT_10 84
#define OBJECT_9 83
#define OBJECT_8 82
#define OBJECT_7 81
#define OBJECT_6 80
#define OBJECT_5 79
#define OBJECT_4 78
#define OBJECT_3 77
#define OBJECT_2 76
#define OBJECT_1 75
#define OBJECT_0 74
#define FREE_REFERENCE_1 63
#define FREE_REFERENCE_0 64
#define GLOBAL_EXECUTE_CACHE_20 66
#define GLOBAL_EXECUTE_CACHE_12 68
#define GLOBAL_EXECUTE_CACHE_10 70
#define GLOBAL_EXECUTE_CACHE_6 72
#define FREE_REFERENCES_LABEL_0 62
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
constr_so_9b3e72c5fce3982f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_38;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_39;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto Z__make_constraint_46;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_40;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto continuation_20;

    case 13:
      current_block = (Rpc - LABEL_25);
      goto label_41;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_26;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_21;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto continuation_27;

    case 18:
      current_block = (Rpc - LABEL_31);
      goto label_42;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto make_constraint_graph_47;

    case 20:
      current_block = (Rpc - LABEL_33);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_29;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto continuation_28;

    case 23:
      current_block = (Rpc - LABEL_32);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto continuation_35;

    case 25:
      current_block = (Rpc - LABEL_35);
      goto make_constraint_generation_48;

    case 26:
      current_block = (Rpc - LABEL_37);
      goto label_44;

    case 27:
      current_block = (Rpc - LABEL_38);
      goto label_50;

    case 28:
      current_block = (Rpc - LABEL_39);
      goto label_51;

    case 29:
      current_block = (Rpc - LABEL_40);
      goto expression_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_37)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_39])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_51)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_50)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	3,
	1,
	1,
	2,
	2,
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
	0,
	0,
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
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 36)
      goto label_49;
    blocks = (current_block [OBJECT_28]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_38])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_49)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (Wrd17.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_6)
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

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
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
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_11]);
  (Wrd16.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_12]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_17]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_55;
  Wrd11 = Wrd15;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_53;
  Wrd11 = Wrd15;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_27]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd12.pObj));

DEFLABEL (label_42)
  (Wrd11.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd12.pObj));

DEFLABEL (label_41)
  (Wrd11.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_39)
  (Wrd11.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_38)
  (Wrd11.Obj) = Rvl;
  goto label_58;

DEFLABEL (Z__make_constraint_46)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (Z__make_constraint_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_61;
  Wrd9 = Wrd13;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd14.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd8.pObj) = (& (Rhp [-7]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd10.pObj));

DEFLABEL (label_40)
  (Wrd9.Obj) = Rvl;
  goto label_60;

DEFLABEL (make_constraint_graph_47)
  CLOSURE_HEADER (LABEL_27);

DEFLABEL (make_constraint_graph_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_63;
  Wrd9 = Wrd13;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd8.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd10.pObj));

DEFLABEL (label_43)
  (Wrd9.Obj) = Rvl;
  goto label_62;

DEFLABEL (make_constraint_generation_48)
  CLOSURE_HEADER (LABEL_35);

DEFLABEL (make_constraint_generation_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_65;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd25.Lng) = ((Wrd31.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_65;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));

DEFLABEL (label_64)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  ((Wrd35.pObj) [0]) = (Wrd18.Obj);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd14.pObj) [0]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_44)
  (Wrd18.Obj) = Rvl;
  goto label_64;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_constr_so_9b3e72c5fce3982f [36] =
  {
    { "constr_so_code_1", 1, constr_so_code_1 },
    { "constr_so_code_2", 1, constr_so_code_2 },
    { "constr_so_code_3", 1, constr_so_code_3 },
    { "constr_so_code_4", 1, constr_so_code_4 },
    { "constr_so_code_5", 1, constr_so_code_5 },
    { "constr_so_code_6", 1, constr_so_code_6 },
    { "constr_so_code_7", 1, constr_so_code_7 },
    { "constr_so_code_8", 1, constr_so_code_8 },
    { "constr_so_code_9", 1, constr_so_code_9 },
    { "constr_so_code_10", 1, constr_so_code_10 },
    { "constr_so_code_11", 1, constr_so_code_11 },
    { "constr_so_code_12", 4, constr_so_code_12 },
    { "constr_so_code_13", 1, constr_so_code_13 },
    { "constr_so_code_14", 1, constr_so_code_14 },
    { "constr_so_code_15", 1, constr_so_code_15 },
    { "constr_so_code_16", 1, constr_so_code_16 },
    { "constr_so_code_17", 1, constr_so_code_17 },
    { "constr_so_code_18", 1, constr_so_code_18 },
    { "constr_so_code_19", 4, constr_so_code_19 },
    { "constr_so_code_20", 8, constr_so_code_20 },
    { "constr_so_code_21", 9, constr_so_code_21 },
    { "constr_so_code_22", 2, constr_so_code_22 },
    { "constr_so_code_23", 13, constr_so_code_23 },
    { "constr_so_code_24", 1, constr_so_code_24 },
    { "constr_so_code_25", 4, constr_so_code_25 },
    { "constr_so_code_26", 5, constr_so_code_26 },
    { "constr_so_code_27", 2, constr_so_code_27 },
    { "constr_so_code_28", 10, constr_so_code_28 },
    { "constr_so_code_29", 7, constr_so_code_29 },
    { "constr_so_code_30", 2, constr_so_code_30 },
    { "constr_so_code_31", 16, constr_so_code_31 },
    { "constr_so_code_32", 16, constr_so_code_32 },
    { "constr_so_code_33", 10, constr_so_code_33 },
    { "constr_so_code_34", 7, constr_so_code_34 },
    { "constr_so_code_35", 3, constr_so_code_35 },
    { "constr_so_code_36", 2, constr_so_code_36 }
  };

int
decl_constr_so_9b3e72c5fce3982f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_constr_so_9b3e72c5fce3982f);
  return (0);
}

DECLARE_COMPILED_CODE ("constr.so", 30, decl_constr_so_9b3e72c5fce3982f, constr_so_9b3e72c5fce3982f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_constr_so_data_9b3e72c5fce3982f [3769] =
  "\x6a\x39\x92\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x22\x29\x21"
  "\x9d\x2b\xb9\x1d\xb0\x82\x88\x07\x22\x29\x21\x9d\x2b\xba\x1d\xb0"
  "\x83\x88\xc2\xbb\x81\x22\x29\x21\x9e\x2b\xbc\x1d\xb0\x84\x88\xb3"
  "\x82\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88\xb3\x83\x22\x29\x21"
  "\x9e\x2b\xbe\x1d\xb0\x86\x88\xb3\x84\x22\x29\x21\x9e\x2b\xbf\x1d"
  "\xb0\x02\x88\xb3\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3"
  "\x1c\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\xb3\x80\xc1\x1c\x0e\x1c\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x82"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x81\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\xb3\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb3\x81\x1b\x82"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x1c\x83\xc1\x1c\xb3\x81\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x85\x82\x1b\x83\x0c\xb3\x81\x28\x0d\x1c\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x81\x1b\x1d\x07\x82\x0d\x1c"
  "\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x85\xb3\x0c\x1b"
  "\x1d\x83\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb3\x81"
  "\x08\x1b\x1b\x1b\x1b\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x1b\x1b"
  "\x07\x08\xb3\x81\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x25\x1b\x24\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x84\x1b\x24\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x02\x88\x1b\x1d\x84\x1b"
  "\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xb8\x88\xb0\x1b\x2a\xb3"
  "\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x0d\x1b\x1b\x1b\x0d\x0d"
  "\x0d\x1b\x1b\x1b\x1b\x1b\x17\x1b\x1b\x80\x81\x0d\x0d\x0d\x0d\x0d"
  "\x9b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9b\x0d\x1c\x0d\x99\x1b\x2a"
  "\x07\x1b\x0c\x0d\x0d\x1c\x08\x89\x1b\x2a\x1b\x2a\x83\x1b\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\xb7\x2a\xb6\x2a\xb5\x2a\xb4\x2a\x17\xc3\x0d\x1c\x0c\x0d"
  "\x0d\x0d\x0d\x1b\x08\x8c\xb1\x2a\x08\xb2\x2a\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x26\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f"
  "\x62\x61\x73\x65\x2f\x63\x6f\x6e\x73\x74\x72\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x1f\x04\x82\x02\x03\x02\x20\x04\x82\x02\x03"
  "\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x21\x04\x83"
  "\x04\x03\x02\x22\x04\x83\x04\x03\x02\x23\x04\x83\x04\x03\x02\x24"
  "\x04\x83\x04\x03\x02\x08\x25\x04\x83\x04\x03\x09\x02\x09\x0d\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x0a\x02\x26\x04\x84"
  "\x06\x03\x0b\x02\x0a\x0a\x02\x27\x04\x84\x06\x03\x0c\x02\x0b\x0a"
  "\x02\x28\x04\x84\x06\x03\x0d\x02\x0c\x0a\x02\x29\x04\x84\x06\x03"
  "\x0e\x02\x0d\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x0f\x07\x2e\x74\x61\x67\x2e\x31\x10\x02\x2d\x0a\x81\x85"
  "\x02\x2c\x08\x81\x83\x02\x2b\x06\x81\x83\x02\x2a\x04\x83\x04\x09"
  "\x12\x11\x02\x0e\x2e\x04\x82\x02\x03\x12\x02\x0f\x2f\x04\x82\x02"
  "\x03\x13\x02\x10\x30\x04\x83\x04\x03\x14\x02\x11\x31\x04\x83\x04"
  "\x03\x15\x02\x12\x0a\x02\x32\x04\x84\x06\x03\x16\x02\x13\x0a\x02"
  "\x33\x04\x84\x06\x03\x17\x02\x14\x0f\x07\x2e\x74\x61\x67\x2e\x32"
  "\x0f\x02\x37\x0a\x81\x85\x02\x36\x08\x81\x83\x02\x35\x06\x81\x83"
  "\x02\x34\x04\x83\x04\x09\x12\x18\x02\x15\x08\x0a\x03\x11\x26\x6d"
  "\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x19\x04"
  "\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x1a\x03\x12\x63\x6f\x6e\x73"
  "\x74\x72\x61\x69\x6e\x74\x2d\x67\x72\x61\x70\x68\x3f\x1b\x04\x10"
  "\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2d\x61\x64\x64\x21\x1c"
  "\x05\x3f\x12\x81\x85\x02\x3e\x10\x81\x87\x02\x3d\x0e\x81\x89\x02"
  "\x3c\x0c\x81\x89\x02\x3b\x0a\x81\x89\x02\x3a\x08\x81\x89\x02\x39"
  "\x06\x81\x89\x02\x38\x04\x85\x04\x11\x22\x1d\x02\x16\x04\x63\x64"
  "\x72\x1e\x04\x63\x61\x72\x1f\x04\x05\x65\x71\x76\x3f\x20\x02\x48"
  "\x14\xfd\xff\x03\x47\x12\xfd\xff\x03\x46\x10\x81\x83\x02\x45\x0e"
  "\x81\x83\x02\x44\x0c\x81\x85\x02\x43\x0a\xfd\xff\x03\x42\x08\xff"
  "\xff\x03\x41\x06\x81\x87\x02\x40\x04\x84\x06\x13\x1e\x21\x02\x17"
  "\x08\x04\x10\x66\x69\x6e\x64\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69"
  "\x6e\x74\x22\x04\x10\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x74\x72"
  "\x61\x69\x6e\x74\x23\x05\x23\x04\x4a\x06\x81\x87\x02\x49\x04\x85"
  "\x06\x05\x10\x24\x02\x18\x02\x0a\x32\x41\x20\x6e\x6f\x64\x65\x20"
  "\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x63\x6f\x6e\x73\x74\x72"
  "\x61\x69\x6e\x65\x64\x20\x74\x6f\x20\x63\x6f\x6d\x65\x20\x61\x66"
  "\x74\x65\x72\x20\x69\x74\x73\x65\x6c\x66\x04\x06\x65\x72\x72\x6f"
  "\x72\x25\x04\x06\x64\x65\x6c\x71\x21\x03\x57\x1c\x81\x89\x02\x56"
  "\x1a\x81\x85\x02\x55\x18\x81\x85\x02\x54\x16\x81\x85\x02\x53\x14"
  "\x81\x87\x02\x52\x12\x81\x85\x02\x51\x10\x81\x85\x02\x50\x0e\x81"
  "\x87\x02\x4f\x0c\x81\x85\x02\x4e\x0a\x84\x06\x4d\x08\x81\x85\x02"
  "\x4c\x06\x81\x87\x02\x4b\x04\x81\x85\x02\x1b\x2b\x26\x02\x19\x05"
  "\x18\x66\x69\x6e\x64\x2d\x6f\x72\x2d\x6d\x61\x6b\x65\x2d\x63\x6f"
  "\x6e\x73\x74\x72\x61\x69\x6e\x74\x27\x02\x58\x04\x85\x08\x03\x0a"
  "\x28\x02\x1a\x04\x04\x6d\x61\x70\x04\x1a\x04\x27\x05\x27\x05\x5c"
  "\x0a\x81\x85\x02\x5b\x08\x81\x85\x02\x5a\x06\x81\x87\x02\x59\x04"
  "\x85\x08\x09\x15\x29\x02\x1b\x0a\x02\x17\x63\x6c\x6f\x73\x65\x2d"
  "\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2d\x6e\x6f\x64\x65\x21"
  "\x2a\x02\x03\x1a\x77\x69\x74\x68\x2d\x6e\x65\x77\x2d\x63\x6f\x6e"
  "\x73\x74\x72\x61\x69\x6e\x74\x2d\x6d\x61\x72\x6b\x73\x2b\x04\x1a"
  "\x03\x61\x0c\x81\x85\x02\x60\x0a\x81\x83\x02\x5f\x08\x81\x83\x02"
  "\x5e\x06\x81\x83\x02\x5d\x04\x83\x04\x0b\x1b\x2c\x02\x1c\x03\x2b"
  "\x03\x18\x26\x63\x6c\x6f\x73\x65\x2d\x63\x6f\x6e\x73\x74\x72\x61"
  "\x69\x6e\x74\x2d\x6e\x6f\x64\x65\x21\x2d\x03\x63\x06\x81\x83\x02"
  "\x62\x04\x83\x04\x05\x0d\x2e\x02\x1d\x32\x49\x6c\x6c\x65\x67\x61"
  "\x6c\x20\x63\x79\x63\x6c\x65\x20\x69\x6e\x20\x63\x6f\x6e\x73\x74"
  "\x72\x61\x69\x6e\x74\x20\x67\x72\x61\x70\x68\x20\x69\x6e\x76\x6f"
  "\x6c\x76\x69\x6e\x67\x20\x6e\x6f\x64\x65\x3a\x0a\x02\x13\x63\x6f"
  "\x6e\x73\x74\x72\x61\x69\x6e\x74\x2d\x6d\x61\x72\x6b\x65\x64\x3f"
  "\x2f\x12\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2f\x61\x66\x74"
  "\x65\x72\x73\x30\x03\x07\x18\x74\x72\x61\x6e\x73\x69\x74\x69\x76"
  "\x65\x6c\x79\x2d\x63\x6c\x6f\x73\x65\x2d\x64\x61\x67\x21\x31\x04"
  "\x05\x6d\x65\x6d\x71\x03\x11\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e"
  "\x74\x2d\x6d\x61\x72\x6b\x21\x32\x04\x25\x04\x07\x61\x70\x70\x65"
  "\x6e\x64\x06\x6d\x16\x81\x83\x02\x6c\x14\x81\x8b\x02\x6b\x12\x81"
  "\x89\x02\x6a\x10\x81\x8b\x02\x69\x0e\x81\x87\x02\x68\x0c\x83\x04"
  "\x67\x0a\x81\x87\x02\x66\x08\x81\x87\x02\x65\x06\x81\x83\x02\x64"
  "\x04\x83\x04\x15\x2d\x25\x02\x1e\x04\x0b\x61\x70\x70\x65\x6e\x64"
  "\x2d\x6d\x61\x70\x02\x74\x10\x81\x89\x02\x73\x0e\x81\x87\x02\x72"
  "\x0c\x81\x87\x02\x71\x0a\x81\x85\x02\x70\x08\x81\x87\x02\x6f\x06"
  "\x81\x85\x02\x6e\x04\x87\x0c\x0f\x16\x33\x02\x1f\x13\x69\x64\x65"
  "\x6e\x74\x69\x74\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x02"
  "\x05\x20\x6f\x72\x64\x65\x72\x2d\x70\x65\x72\x2d\x63\x6f\x6e\x73"
  "\x74\x72\x61\x69\x6e\x74\x73\x2f\x65\x78\x74\x72\x61\x63\x74\x65"
  "\x64\x34\x02\x76\x06\x81\x87\x02\x75\x04\x84\x06\x05\x0d\x35\x02"
  "\x20\x1f\x1e\x2f\x32\x2b\x30\x05\x07\x12\x72\x65\x76\x65\x72\x73"
  "\x65\x2d\x70\x6f\x73\x74\x6f\x72\x64\x65\x72\x36\x04\x15\x6c\x69"
  "\x73\x74\x2d\x73\x65\x61\x72\x63\x68\x2d\x70\x6f\x73\x69\x74\x69"
  "\x76\x65\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x37\x04\x05\x64"
  "\x65\x6c\x76\x04\x05\x6d\x65\x6d\x76\x04\x20\x07\x86\x01\x22\x81"
  "\x85\x02\x85\x01\x20\x81\x85\x02\x84\x01\x1e\x81\x85\x02\x83\x01"
  "\x1c\x81\x8f\x02\x82\x01\x1a\x81\x8f\x02\x81\x01\x18\x81\x85\x02"
  "\x80\x01\x16\x81\x8f\x02\x7f\x14\x81\x8d\x02\x7e\x12\x81\x8d\x02"
  "\x7d\x10\x81\x8b\x02\x7c\x0e\x81\x95\x02\x7b\x0c\x81\x93\x02\x7a"
  "\x0a\x81\x91\x02\x79\x08\x81\x8f\x02\x78\x06\x81\x8d\x02\x77\x04"
  "\x85\x08\x21\x3b\x20\x02\x21\x1f\x1e\x03\x2b\x03\x32\x03\x2f\x04"
  "\x96\x01\x22\x81\x85\x02\x95\x01\x20\x81\x85\x02\x94\x01\x1e\x81"
  "\x85\x02\x93\x01\x1c\x81\x87\x02\x92\x01\x1a\x81\x85\x02\x91\x01"
  "\x18\x81\x85\x02\x90\x01\x16\x81\x87\x02\x8f\x01\x14\x81\x85\x02"
  "\x8e\x01\x12\x81\x87\x02\x8d\x01\x10\x81\x85\x02\x8c\x01\x0e\x81"
  "\x85\x02\x8b\x01\x0c\x81\x85\x02\x8a\x01\x0a\x81\x83\x02\x89\x01"
  "\x08\x81\x89\x02\x88\x01\x06\x81\x85\x02\x87\x01\x04\x84\x06\x21"
  "\x32\x1f\x02\x22\x04\x0c\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70"
  "\x21\x03\x37\x04\x1a\x04\xa0\x01\x16\x81\x87\x02\x9f\x01\x14\x81"
  "\x85\x02\x9e\x01\x12\x81\x85\x02\x9d\x01\x10\x81\x85\x02\x9c\x01"
  "\x0e\x81\x85\x02\x9b\x01\x0c\x81\x85\x02\x9a\x01\x0a\x81\x85\x02"
  "\x99\x01\x08\x81\x85\x02\x98\x01\x06\x81\x83\x02\x97\x01\x04\x87"
  "\x0c\x15\x20\x37\x02\x23\x02\x18\x2a\x63\x6f\x6e\x73\x74\x72\x61"
  "\x69\x6e\x74\x2d\x67\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x2a\x1e"
  "\x02\x1e\x02\x02\x1b\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x74\x72"
  "\x61\x69\x6e\x74\x2d\x67\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x1a"
  "\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d"
  "\x62\x69\x6e\x64\x03\xa7\x01\x10\x81\x83\x02\xa6\x01\x0e\x81\x85"
  "\x02\xa5\x01\x0c\x81\x83\x02\xa4\x01\x0a\x81\x83\x02\xa3\x01\x08"
  "\x81\x83\x02\xa2\x01\x06\x81\x83\x02\xa1\x01\x04\x83\x04\x0f\x1c"
  "\x38\x02\x24\x1e\x02\xaa\x01\x08\x81\x85\x02\xa9\x01\x06\x81\x83"
  "\x02\xa8\x01\x04\x83\x04\x07\x0f\x02\x25\x0a\x02\x1e\x02\xac\x01"
  "\x06\x81\x87\x02\xab\x01\x04\x83\x04\x05\x0d\x0a\x25\x0a\x04\x04"
  "\x38\x04\x37\x04\x1f\x04\x20\x04\x35\x04\x33\x04\x25\x04\x2e\x04"
  "\x2c\x04\x29\x04\x28\x04\x26\x0a\x24\x04\x21\x04\x1d\x04\x18\x04"
  "\x14\x32\x2f\x2b\x1e\x36\x20\x6c\x65\x67\x61\x6c\x2d\x6f\x72\x64"
  "\x65\x72\x69\x6e\x67\x2d\x70\x65\x72\x2d\x63\x6f\x6e\x73\x74\x72"
  "\x61\x69\x6e\x74\x73\x3f\x34\x16\x6f\x72\x64\x65\x72\x2d\x70\x65"
  "\x72\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x73\x31\x2d\x2a"
  "\x18\x63\x6c\x6f\x73\x65\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e"
  "\x74\x2d\x67\x72\x61\x70\x68\x21\x14\x61\x64\x64\x2d\x63\x6f\x6e"
  "\x73\x74\x72\x61\x69\x6e\x74\x2d\x73\x65\x74\x21\x18\x61\x64\x64"
  "\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2d\x65\x6c\x65\x6d"
  "\x65\x6e\x74\x21\x1c\x27\x22\x23\x1b\x14\x0f\x1a\x16\x6d\x61\x6b"
  "\x65\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2d\x67\x72\x61"
  "\x70\x68\x1e\x73\x65\x74\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e"
  "\x74\x2d\x67\x72\x61\x70\x68\x2f\x63\x6c\x6f\x73\x65\x64\x3f\x21"
  "\x22\x73\x65\x74\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2d"
  "\x67\x72\x61\x70\x68\x2f\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64\x65"
  "\x73\x21\x19\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2d\x67\x72"
  "\x61\x70\x68\x2f\x63\x6c\x6f\x73\x65\x64\x3f\x1d\x63\x6f\x6e\x73"
  "\x74\x72\x61\x69\x6e\x74\x2d\x67\x72\x61\x70\x68\x2f\x65\x6e\x74"
  "\x72\x79\x2d\x6e\x6f\x64\x65\x73\x17\x04\x16\x04\x15\x04\x14\x04"
  "\x15\x72\x74\x64\x3a\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2d"
  "\x67\x72\x61\x70\x68\x38\x0c\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e"
  "\x74\x3f\x11\x04\x10\x11\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74"
  "\x2d\x67\x72\x61\x70\x68\x0c\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64"
  "\x65\x73\x08\x63\x6c\x6f\x73\x65\x64\x3f\x37\x12\x04\x13\x04\x19"
  "\x18\x73\x65\x74\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2f"
  "\x63\x6c\x6f\x73\x65\x64\x3f\x21\x1b\x73\x65\x74\x2d\x63\x6f\x6e"
  "\x73\x74\x72\x61\x69\x6e\x74\x2f\x67\x65\x6e\x65\x72\x61\x74\x69"
  "\x6f\x6e\x21\x17\x73\x65\x74\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69"
  "\x6e\x74\x2f\x61\x66\x74\x65\x72\x73\x21\x1b\x73\x65\x74\x2d\x63"
  "\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2f\x67\x72\x61\x70\x68\x2d"
  "\x68\x65\x61\x64\x21\x13\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74"
  "\x2f\x63\x6c\x6f\x73\x65\x64\x3f\x16\x63\x6f\x6e\x73\x74\x72\x61"
  "\x69\x6e\x74\x2f\x67\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x30\x16"
  "\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2f\x67\x72\x61\x70\x68"
  "\x2d\x68\x65\x61\x64\x13\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74"
  "\x2f\x65\x6c\x65\x6d\x65\x6e\x74\x0a\x0e\x04\x0d\x04\x0c\x04\x0b"
  "\x04\x09\x04\x04\x04\x04\x04\x0a\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0f\x72\x74\x64\x3a\x63\x6f"
  "\x6e\x73\x74\x72\x61\x69\x6e\x74\x36\x0b\x63\x6f\x6e\x73\x74\x72"
  "\x61\x69\x6e\x74\x08\x65\x6c\x65\x6d\x65\x6e\x74\x0b\x67\x72\x61"
  "\x70\x68\x2d\x68\x65\x61\x64\x07\x61\x66\x74\x65\x72\x73\x0b\x67"
  "\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x37\x04\x04\x06\x11\x6d\x61"
  "\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19"
  "\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70"
  "\x61\x74\x63\x68\x2d\x74\x61\x67\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x23\x72\x65\x63\x6f\x72"
  "\x64\x2d\x74\x79\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76"
  "\x61\x6c\x75\x65\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x05\x36\x38"
  "\x03\x1e\x3e\x80\x80\x04\x1d\x3c\x81\x81\x02\x1c\x3a\x81\x81\x02"
  "\x1b\x38\x81\x85\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x83\x02\x18"
  "\x32\x81\x83\x02\x17\x30\x81\x85\x02\x16\x2e\x81\x83\x02\x15\x2c"
  "\x81\x87\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x87\x02\x12\x26\x81"
  "\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x85"
  "\x02\x0e\x1e\x81\x87\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x85\x02"
  "\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x89\x02\x08"
  "\x12\x81\x85\x02\x07\x10\x81\x87\x02\x06\x0e\x81\x83\x02\x05\x0c"
  "\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x85\x02\x02\x06\x81"
  "\x87\x02\x01\x04\x81\x83\x02\x3d\x6a";

SCHEME_OBJECT *
constr_so_data_9b3e72c5fce3982f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_constr_so_data_9b3e72c5fce3982f [0]))), (sizeof (prog_constr_so_data_9b3e72c5fce3982f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_40]));
}

DECLARE_COMPILED_DATA_NS ("constr.so", constr_so_data_9b3e72c5fce3982f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("constr.so", "7027a530b8e4b5d4")
