/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:10-07 by Liar version 4.118. */

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
blocks_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto block_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_type_3)
DEFLABEL (block_type_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

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

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 8
#define DEBUGGING_LABEL_2_2 7
#define OBJECT_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto set_block_typeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_typeB_3)
DEFLABEL (set_block_typeB_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [3]));
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
blocks_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto block_parent_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_parent_3)
DEFLABEL (block_parent_0)
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
#define ENVIRONMENT_LABEL_4_3 8
#define DEBUGGING_LABEL_4_2 7
#define OBJECT_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_block_parentB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_parentB_3)
DEFLABEL (set_block_parentB_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
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
blocks_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto block_children_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_children_3)
DEFLABEL (block_children_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
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
blocks_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_block_childrenB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_childrenB_3)
DEFLABEL (set_block_childrenB_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
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
blocks_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto block_disowned_children_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_disowned_children_3)
DEFLABEL (block_disowned_children_0)
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
blocks_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_block_disowned_childrenB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_disowned_childrenB_3)
DEFLABEL (set_block_disowned_childrenB_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
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
blocks_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto block_frame_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_frame_size_3)
DEFLABEL (block_frame_size_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
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
blocks_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_block_frame_sizeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_frame_sizeB_3)
DEFLABEL (set_block_frame_sizeB_0)
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
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto block_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_procedure_3)
DEFLABEL (block_procedure_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
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
blocks_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_block_procedureB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_procedureB_3)
DEFLABEL (set_block_procedureB_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
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
blocks_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto block_bound_variables_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_bound_variables_3)
DEFLABEL (block_bound_variables_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
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
blocks_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_block_bound_variablesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_bound_variablesB_3)
DEFLABEL (set_block_bound_variablesB_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
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
blocks_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto block_free_variables_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_free_variables_3)
DEFLABEL (block_free_variables_0)
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
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
blocks_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_block_free_variablesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_free_variablesB_3)
DEFLABEL (set_block_free_variablesB_0)
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [10]) = (Wrd10.Obj);
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
blocks_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto block_variables_nontransitively_free_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_variables_nontransitively_free_3)
DEFLABEL (block_variables_nontransitively_free_0)
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
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
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
blocks_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_block_variables_nontransitively_freeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_variables_nontransitively_freeB_3)
DEFLABEL (set_block_variables_nontransitively_freeB_0)
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
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [11]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_18_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 7
#define DEBUGGING_LABEL_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto block_declarations_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_declarations_3)
DEFLABEL (block_declarations_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

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

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define OBJECT_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto set_block_declarationsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_declarationsB_3)
DEFLABEL (set_block_declarationsB_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [12]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_20_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 7
#define DEBUGGING_LABEL_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto block_applications_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_applications_3)
DEFLABEL (block_applications_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

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

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 8
#define DEBUGGING_LABEL_22_2 7
#define OBJECT_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto set_block_applicationsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_applicationsB_3)
DEFLABEL (set_block_applicationsB_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [13]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_22_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 7
#define DEBUGGING_LABEL_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto block_interned_variables_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_interned_variables_3)
DEFLABEL (block_interned_variables_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

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

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 8
#define DEBUGGING_LABEL_24_2 7
#define OBJECT_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto set_block_interned_variablesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_interned_variablesB_3)
DEFLABEL (set_block_interned_variablesB_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [14]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_24_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 7
#define DEBUGGING_LABEL_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto block_closure_offsets_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_closure_offsets_3)
DEFLABEL (block_closure_offsets_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

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

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 8
#define DEBUGGING_LABEL_26_2 7
#define OBJECT_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto set_block_closure_offsetsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_closure_offsetsB_3)
DEFLABEL (set_block_closure_offsetsB_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [15]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_26_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 7
#define DEBUGGING_LABEL_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto block_debugging_info_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_debugging_info_3)
DEFLABEL (block_debugging_info_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

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

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 8
#define DEBUGGING_LABEL_28_2 7
#define OBJECT_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto set_block_debugging_infoB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_debugging_infoB_3)
DEFLABEL (set_block_debugging_infoB_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [16]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 7
#define DEBUGGING_LABEL_29_2 6
#define OBJECT_29_1 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto block_stack_link_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_stack_link_3)
DEFLABEL (block_stack_link_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [17]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 8
#define DEBUGGING_LABEL_30_2 7
#define OBJECT_30_2 6
#define OBJECT_30_1 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto set_block_stack_linkB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_stack_linkB_3)
DEFLABEL (set_block_stack_linkB_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [17]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_30_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 7
#define DEBUGGING_LABEL_31_2 6
#define OBJECT_31_1 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto block_shared_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_shared_block_3)
DEFLABEL (block_shared_block_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [17]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
blocks_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto set_block_shared_blockB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_shared_blockB_3)
DEFLABEL (set_block_shared_blockB_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [17]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_32_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 7
#define DEBUGGING_LABEL_33_2 6
#define OBJECT_33_1 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto block_static_linkP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_static_linkP_3)
DEFLABEL (block_static_linkP_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_33_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [18]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 8
#define DEBUGGING_LABEL_34_2 7
#define OBJECT_34_2 6
#define OBJECT_34_1 5
#define OBJECT_34_0 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto set_block_static_linkPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_static_linkPB_3)
DEFLABEL (set_block_static_linkPB_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [18]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_34_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 7
#define DEBUGGING_LABEL_35_2 6
#define OBJECT_35_1 5
#define OBJECT_35_0 4
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto block_entry_number_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_entry_number_3)
DEFLABEL (block_entry_number_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [18]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 8
#define DEBUGGING_LABEL_36_2 7
#define OBJECT_36_2 6
#define OBJECT_36_1 5
#define OBJECT_36_0 4
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto set_block_entry_numberB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_entry_numberB_3)
DEFLABEL (set_block_entry_numberB_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_36_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [18]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_36_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
blocks_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto block_popping_limits_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_popping_limits_3)
DEFLABEL (block_popping_limits_0)
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
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [19]);
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
blocks_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_block_popping_limitsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_popping_limitsB_3)
DEFLABEL (set_block_popping_limitsB_0)
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
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [19]) = (Wrd10.Obj);
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
blocks_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto block_grafted_blocks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_grafted_blocks_3)
DEFLABEL (block_grafted_blocks_0)
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
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [19]);
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
blocks_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_block_grafted_blocksB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_grafted_blocksB_3)
DEFLABEL (set_block_grafted_blocksB_0)
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
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [19]) = (Wrd10.Obj);
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
blocks_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto block_popping_limit_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_popping_limit_3)
DEFLABEL (block_popping_limit_0)
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
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [20]);
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
blocks_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_block_popping_limitB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_popping_limitB_3)
DEFLABEL (set_block_popping_limitB_0)
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
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [20]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_42_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define ENVIRONMENT_LABEL_43_3 7
#define DEBUGGING_LABEL_43_2 6
#define OBJECT_43_1 5
#define OBJECT_43_0 4
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto block_layout_frozenP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_layout_frozenP_3)
DEFLABEL (block_layout_frozenP_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_43_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [21]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 8
#define DEBUGGING_LABEL_44_2 7
#define OBJECT_44_2 6
#define OBJECT_44_1 5
#define OBJECT_44_0 4
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto set_block_layout_frozenPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_layout_frozenPB_3)
DEFLABEL (set_block_layout_frozenPB_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_44_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [21]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_44_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 7
#define DEBUGGING_LABEL_45_2 6
#define OBJECT_45_1 5
#define OBJECT_45_0 4
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto block_type_checks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_type_checks_3)
DEFLABEL (block_type_checks_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [22]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 8
#define DEBUGGING_LABEL_46_2 7
#define OBJECT_46_2 6
#define OBJECT_46_1 5
#define OBJECT_46_0 4
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto set_block_type_checksB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_type_checksB_3)
DEFLABEL (set_block_type_checksB_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [22]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_46_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 7
#define DEBUGGING_LABEL_47_2 6
#define OBJECT_47_1 5
#define OBJECT_47_0 4
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto block_range_checks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_range_checks_3)
DEFLABEL (block_range_checks_0)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_47_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [23]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define ENVIRONMENT_LABEL_48_3 8
#define DEBUGGING_LABEL_48_2 7
#define OBJECT_48_2 6
#define OBJECT_48_1 5
#define OBJECT_48_0 4
#define FREE_REFERENCES_LABEL_48_0 4
#define NUMBER_OF_LINKER_SECTIONS_48_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto set_block_range_checksB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_block_range_checksB_3)
DEFLABEL (set_block_range_checksB_0)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_48_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [23]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_48_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_6 5
#define LABEL_49_7 7
#define LABEL_49_5 9
#define LABEL_49_8 11
#define LABEL_49_9 13
#define LABEL_49_10 15
#define LABEL_49_11 17
#define LABEL_49_12 19
#define LABEL_49_13 21
#define LABEL_49_14 23
#define LABEL_49_15 25
#define LABEL_49_16 27
#define LABEL_49_17 29
#define LABEL_49_18 31
#define LABEL_49_19 33
#define LABEL_49_20 35
#define LABEL_49_21 37
#define LABEL_49_22 39
#define LABEL_49_23 41
#define LABEL_49_24 43
#define LABEL_49_25 45
#define LABEL_49_26 47
#define LABEL_49_27 49
#define LABEL_49_28 51
#define ENVIRONMENT_LABEL_49_3 103
#define DEBUGGING_LABEL_49_2 102
#define OBJECT_49_44 101
#define OBJECT_49_43 100
#define OBJECT_49_42 99
#define OBJECT_49_41 98
#define OBJECT_49_40 97
#define OBJECT_49_39 96
#define OBJECT_49_38 95
#define OBJECT_49_37 94
#define OBJECT_49_36 93
#define OBJECT_49_35 92
#define OBJECT_49_34 91
#define OBJECT_49_33 90
#define OBJECT_49_32 89
#define OBJECT_49_31 88
#define OBJECT_49_30 87
#define OBJECT_49_29 86
#define OBJECT_49_28 85
#define OBJECT_49_27 84
#define OBJECT_49_26 83
#define OBJECT_49_25 82
#define OBJECT_49_24 81
#define OBJECT_49_23 80
#define OBJECT_49_22 79
#define OBJECT_49_21 78
#define OBJECT_49_20 77
#define OBJECT_49_19 76
#define OBJECT_49_18 75
#define OBJECT_49_17 74
#define OBJECT_49_16 73
#define OBJECT_49_15 72
#define OBJECT_49_14 71
#define OBJECT_49_13 70
#define OBJECT_49_12 69
#define OBJECT_49_11 68
#define OBJECT_49_10 67
#define OBJECT_49_9 66
#define OBJECT_49_8 65
#define OBJECT_49_7 64
#define OBJECT_49_6 63
#define OBJECT_49_5 62
#define OBJECT_49_4 61
#define OBJECT_49_3 60
#define OBJECT_49_2 59
#define OBJECT_49_1 58
#define OBJECT_49_0 57
#define EXECUTE_CACHE_49_29 53
#define FREE_REFERENCE_49_0 56
#define FREE_REFERENCES_LABEL_49_0 52
#define NUMBER_OF_LINKER_SECTIONS_49_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd590;
  machine_word Wrd592;
  machine_word Wrd589;
  machine_word Wrd585;
  machine_word Wrd587;
  machine_word Wrd588;
  machine_word Wrd581;
  machine_word Wrd583;
  machine_word Wrd584;
  machine_word Wrd580;
  machine_word Wrd577;
  machine_word Wrd576;
  machine_word Wrd565;
  machine_word Wrd573;
  machine_word Wrd572;
  machine_word Wrd571;
  machine_word Wrd575;
  machine_word Wrd574;
  machine_word Wrd564;
  machine_word Wrd563;
  machine_word Wrd561;
  machine_word Wrd557;
  machine_word Wrd559;
  machine_word Wrd560;
  machine_word Wrd553;
  machine_word Wrd555;
  machine_word Wrd556;
  machine_word Wrd552;
  machine_word Wrd549;
  machine_word Wrd548;
  machine_word Wrd537;
  machine_word Wrd545;
  machine_word Wrd544;
  machine_word Wrd543;
  machine_word Wrd547;
  machine_word Wrd546;
  machine_word Wrd536;
  machine_word Wrd535;
  machine_word Wrd533;
  machine_word Wrd529;
  machine_word Wrd531;
  machine_word Wrd532;
  machine_word Wrd525;
  machine_word Wrd527;
  machine_word Wrd528;
  machine_word Wrd524;
  machine_word Wrd521;
  machine_word Wrd520;
  machine_word Wrd509;
  machine_word Wrd517;
  machine_word Wrd516;
  machine_word Wrd515;
  machine_word Wrd519;
  machine_word Wrd518;
  machine_word Wrd508;
  machine_word Wrd507;
  machine_word Wrd505;
  machine_word Wrd501;
  machine_word Wrd503;
  machine_word Wrd504;
  machine_word Wrd497;
  machine_word Wrd499;
  machine_word Wrd500;
  machine_word Wrd496;
  machine_word Wrd493;
  machine_word Wrd492;
  machine_word Wrd481;
  machine_word Wrd489;
  machine_word Wrd488;
  machine_word Wrd487;
  machine_word Wrd491;
  machine_word Wrd490;
  machine_word Wrd480;
  machine_word Wrd479;
  machine_word Wrd477;
  machine_word Wrd473;
  machine_word Wrd475;
  machine_word Wrd476;
  machine_word Wrd469;
  machine_word Wrd471;
  machine_word Wrd472;
  machine_word Wrd468;
  machine_word Wrd465;
  machine_word Wrd464;
  machine_word Wrd453;
  machine_word Wrd461;
  machine_word Wrd460;
  machine_word Wrd459;
  machine_word Wrd463;
  machine_word Wrd462;
  machine_word Wrd452;
  machine_word Wrd451;
  machine_word Wrd449;
  machine_word Wrd445;
  machine_word Wrd447;
  machine_word Wrd448;
  machine_word Wrd441;
  machine_word Wrd443;
  machine_word Wrd444;
  machine_word Wrd440;
  machine_word Wrd437;
  machine_word Wrd436;
  machine_word Wrd425;
  machine_word Wrd433;
  machine_word Wrd432;
  machine_word Wrd431;
  machine_word Wrd435;
  machine_word Wrd434;
  machine_word Wrd424;
  machine_word Wrd423;
  machine_word Wrd421;
  machine_word Wrd417;
  machine_word Wrd419;
  machine_word Wrd420;
  machine_word Wrd413;
  machine_word Wrd415;
  machine_word Wrd416;
  machine_word Wrd412;
  machine_word Wrd409;
  machine_word Wrd408;
  machine_word Wrd397;
  machine_word Wrd405;
  machine_word Wrd404;
  machine_word Wrd403;
  machine_word Wrd407;
  machine_word Wrd406;
  machine_word Wrd396;
  machine_word Wrd395;
  machine_word Wrd393;
  machine_word Wrd389;
  machine_word Wrd391;
  machine_word Wrd392;
  machine_word Wrd385;
  machine_word Wrd387;
  machine_word Wrd388;
  machine_word Wrd384;
  machine_word Wrd381;
  machine_word Wrd380;
  machine_word Wrd369;
  machine_word Wrd377;
  machine_word Wrd376;
  machine_word Wrd375;
  machine_word Wrd379;
  machine_word Wrd378;
  machine_word Wrd368;
  machine_word Wrd367;
  machine_word Wrd365;
  machine_word Wrd361;
  machine_word Wrd363;
  machine_word Wrd364;
  machine_word Wrd357;
  machine_word Wrd359;
  machine_word Wrd360;
  machine_word Wrd356;
  machine_word Wrd353;
  machine_word Wrd352;
  machine_word Wrd341;
  machine_word Wrd349;
  machine_word Wrd348;
  machine_word Wrd347;
  machine_word Wrd351;
  machine_word Wrd350;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd337;
  machine_word Wrd333;
  machine_word Wrd335;
  machine_word Wrd336;
  machine_word Wrd329;
  machine_word Wrd331;
  machine_word Wrd332;
  machine_word Wrd328;
  machine_word Wrd325;
  machine_word Wrd324;
  machine_word Wrd313;
  machine_word Wrd321;
  machine_word Wrd320;
  machine_word Wrd319;
  machine_word Wrd323;
  machine_word Wrd322;
  machine_word Wrd312;
  machine_word Wrd311;
  machine_word Wrd309;
  machine_word Wrd305;
  machine_word Wrd307;
  machine_word Wrd308;
  machine_word Wrd301;
  machine_word Wrd303;
  machine_word Wrd304;
  machine_word Wrd300;
  machine_word Wrd297;
  machine_word Wrd296;
  machine_word Wrd285;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd291;
  machine_word Wrd295;
  machine_word Wrd294;
  machine_word Wrd284;
  machine_word Wrd283;
  machine_word Wrd281;
  machine_word Wrd277;
  machine_word Wrd279;
  machine_word Wrd280;
  machine_word Wrd273;
  machine_word Wrd275;
  machine_word Wrd276;
  machine_word Wrd272;
  machine_word Wrd269;
  machine_word Wrd268;
  machine_word Wrd257;
  machine_word Wrd265;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd267;
  machine_word Wrd266;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd253;
  machine_word Wrd249;
  machine_word Wrd251;
  machine_word Wrd252;
  machine_word Wrd245;
  machine_word Wrd247;
  machine_word Wrd248;
  machine_word Wrd244;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd229;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd239;
  machine_word Wrd238;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd225;
  machine_word Wrd221;
  machine_word Wrd223;
  machine_word Wrd224;
  machine_word Wrd217;
  machine_word Wrd219;
  machine_word Wrd220;
  machine_word Wrd216;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd201;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd197;
  machine_word Wrd193;
  machine_word Wrd195;
  machine_word Wrd196;
  machine_word Wrd189;
  machine_word Wrd191;
  machine_word Wrd192;
  machine_word Wrd188;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd173;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd172;
  machine_word Wrd171;
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
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_49_4);
      goto lambda_86;

    case 1:
      current_block = (Rpc - LABEL_49_6);
      goto label_88;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto label_89;

    case 3:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_49_8);
      goto label_90;

    case 5:
      current_block = (Rpc - LABEL_49_9);
      goto label_91;

    case 6:
      current_block = (Rpc - LABEL_49_10);
      goto label_92;

    case 7:
      current_block = (Rpc - LABEL_49_11);
      goto label_93;

    case 8:
      current_block = (Rpc - LABEL_49_12);
      goto label_94;

    case 9:
      current_block = (Rpc - LABEL_49_13);
      goto label_95;

    case 10:
      current_block = (Rpc - LABEL_49_14);
      goto label_96;

    case 11:
      current_block = (Rpc - LABEL_49_15);
      goto label_97;

    case 12:
      current_block = (Rpc - LABEL_49_16);
      goto label_98;

    case 13:
      current_block = (Rpc - LABEL_49_17);
      goto label_99;

    case 14:
      current_block = (Rpc - LABEL_49_18);
      goto label_100;

    case 15:
      current_block = (Rpc - LABEL_49_19);
      goto label_101;

    case 16:
      current_block = (Rpc - LABEL_49_20);
      goto label_102;

    case 17:
      current_block = (Rpc - LABEL_49_21);
      goto label_103;

    case 18:
      current_block = (Rpc - LABEL_49_22);
      goto label_104;

    case 19:
      current_block = (Rpc - LABEL_49_23);
      goto label_105;

    case 20:
      current_block = (Rpc - LABEL_49_24);
      goto label_106;

    case 21:
      current_block = (Rpc - LABEL_49_25);
      goto label_107;

    case 22:
      current_block = (Rpc - LABEL_49_26);
      goto label_108;

    case 23:
      current_block = (Rpc - LABEL_49_27);
      goto label_109;

    case 24:
      current_block = (Rpc - LABEL_49_28);
      goto label_110;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_112)
DEFLABEL (lambda_86)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_158;
  Wrd10 = Wrd14;

DEFLABEL (label_157)
  Wrd9 = Wrd10;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_156;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_156;
  (Wrd17.Obj) = ((Wrd20.pObj) [6]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_155)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_154;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd13.Lng))))
    goto label_154;
  (Wrd5.Obj) = ((Wrd11.pObj) [23]);

DEFLABEL (label_153)
  (Wrd24.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_49_5]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_152;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd41.Lng))))
    goto label_152;
  (Wrd33.Obj) = ((Wrd39.pObj) [22]);

DEFLABEL (label_151)
  (Wrd52.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_49_7]);
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
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_150;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd69.Lng))))
    goto label_150;
  (Wrd61.Obj) = ((Wrd67.pObj) [21]);

DEFLABEL (label_149)
  (Wrd80.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (Wrd84.Obj) = (current_block [OBJECT_49_9]);
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
  (Wrd98.Obj) = (Rsp [2]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 10))
    goto label_148;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd97.Lng))))
    goto label_148;
  (Wrd89.Obj) = ((Wrd95.pObj) [20]);

DEFLABEL (label_147)
  (Wrd108.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd112.Obj) = (current_block [OBJECT_49_11]);
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
  (Wrd126.Obj) = (Rsp [2]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 10))
    goto label_146;
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd124.Obj) = ((Wrd123.pObj) [0]);
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd125.Lng))))
    goto label_146;
  (Wrd117.Obj) = ((Wrd123.pObj) [19]);

DEFLABEL (label_145)
  (Wrd136.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd117.Obj);
  (* (Rhp++)) = (Wrd136.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  (Wrd140.Obj) = (current_block [OBJECT_49_13]);
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
  (Wrd154.Obj) = (Rsp [2]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd155.uLng) == 10))
    goto label_144;
  (Wrd151.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd152.Obj) = ((Wrd151.pObj) [0]);
  (Wrd153.Lng) = (FIXNUM_TO_LONG (Wrd152.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd153.Lng))))
    goto label_144;
  (Wrd145.Obj) = ((Wrd151.pObj) [18]);

DEFLABEL (label_143)
  (Wrd164.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd145.Obj);
  (* (Rhp++)) = (Wrd164.Obj);
  (Wrd163.pObj) = (& (Rhp [-2]));
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd163.pObj)));
  (Wrd168.Obj) = (current_block [OBJECT_49_15]);
  (* (Rhp++)) = (Wrd168.Obj);
  (* (Rhp++)) = (Wrd161.Obj);
  (Wrd167.pObj) = (& (Rhp [-2]));
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd167.pObj)));
  (Wrd169.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd165.Obj);
  (* (Rhp++)) = (Wrd169.Obj);
  (Wrd171.pObj) = (& (Rhp [-2]));
  (Wrd172.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd171.pObj)));
  (* (--Rsp)) = (Wrd172.Obj);
  (Wrd182.Obj) = (Rsp [2]);
  (Wrd183.uLng) = (OBJECT_TYPE (Wrd182.Obj));
  if (! ((Wrd183.uLng) == 10))
    goto label_142;
  (Wrd179.pObj) = (OBJECT_ADDRESS (Wrd182.Obj));
  (Wrd180.Obj) = ((Wrd179.pObj) [0]);
  (Wrd181.Lng) = (FIXNUM_TO_LONG (Wrd180.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd181.Lng))))
    goto label_142;
  (Wrd173.Obj) = ((Wrd179.pObj) [17]);

DEFLABEL (label_141)
  (Wrd192.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd173.Obj);
  (* (Rhp++)) = (Wrd192.Obj);
  (Wrd191.pObj) = (& (Rhp [-2]));
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd191.pObj)));
  (Wrd196.Obj) = (current_block [OBJECT_49_17]);
  (* (Rhp++)) = (Wrd196.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd195.pObj) = (& (Rhp [-2]));
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd195.pObj)));
  (Wrd197.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd193.Obj);
  (* (Rhp++)) = (Wrd197.Obj);
  (Wrd199.pObj) = (& (Rhp [-2]));
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd199.pObj)));
  (* (--Rsp)) = (Wrd200.Obj);
  (Wrd210.Obj) = (Rsp [2]);
  (Wrd211.uLng) = (OBJECT_TYPE (Wrd210.Obj));
  if (! ((Wrd211.uLng) == 10))
    goto label_140;
  (Wrd207.pObj) = (OBJECT_ADDRESS (Wrd210.Obj));
  (Wrd208.Obj) = ((Wrd207.pObj) [0]);
  (Wrd209.Lng) = (FIXNUM_TO_LONG (Wrd208.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd209.Lng))))
    goto label_140;
  (Wrd201.Obj) = ((Wrd207.pObj) [16]);

DEFLABEL (label_139)
  (Wrd220.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd201.Obj);
  (* (Rhp++)) = (Wrd220.Obj);
  (Wrd219.pObj) = (& (Rhp [-2]));
  (Wrd217.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd219.pObj)));
  (Wrd224.Obj) = (current_block [OBJECT_49_19]);
  (* (Rhp++)) = (Wrd224.Obj);
  (* (Rhp++)) = (Wrd217.Obj);
  (Wrd223.pObj) = (& (Rhp [-2]));
  (Wrd221.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd223.pObj)));
  (Wrd225.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd221.Obj);
  (* (Rhp++)) = (Wrd225.Obj);
  (Wrd227.pObj) = (& (Rhp [-2]));
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd227.pObj)));
  (* (--Rsp)) = (Wrd228.Obj);
  (Wrd238.Obj) = (Rsp [2]);
  (Wrd239.uLng) = (OBJECT_TYPE (Wrd238.Obj));
  if (! ((Wrd239.uLng) == 10))
    goto label_138;
  (Wrd235.pObj) = (OBJECT_ADDRESS (Wrd238.Obj));
  (Wrd236.Obj) = ((Wrd235.pObj) [0]);
  (Wrd237.Lng) = (FIXNUM_TO_LONG (Wrd236.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd237.Lng))))
    goto label_138;
  (Wrd229.Obj) = ((Wrd235.pObj) [15]);

DEFLABEL (label_137)
  (Wrd248.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd229.Obj);
  (* (Rhp++)) = (Wrd248.Obj);
  (Wrd247.pObj) = (& (Rhp [-2]));
  (Wrd245.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd247.pObj)));
  (Wrd252.Obj) = (current_block [OBJECT_49_21]);
  (* (Rhp++)) = (Wrd252.Obj);
  (* (Rhp++)) = (Wrd245.Obj);
  (Wrd251.pObj) = (& (Rhp [-2]));
  (Wrd249.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd251.pObj)));
  (Wrd253.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd249.Obj);
  (* (Rhp++)) = (Wrd253.Obj);
  (Wrd255.pObj) = (& (Rhp [-2]));
  (Wrd256.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd255.pObj)));
  (* (--Rsp)) = (Wrd256.Obj);
  (Wrd266.Obj) = (Rsp [2]);
  (Wrd267.uLng) = (OBJECT_TYPE (Wrd266.Obj));
  if (! ((Wrd267.uLng) == 10))
    goto label_136;
  (Wrd263.pObj) = (OBJECT_ADDRESS (Wrd266.Obj));
  (Wrd264.Obj) = ((Wrd263.pObj) [0]);
  (Wrd265.Lng) = (FIXNUM_TO_LONG (Wrd264.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd265.Lng))))
    goto label_136;
  (Wrd257.Obj) = ((Wrd263.pObj) [14]);

DEFLABEL (label_135)
  (Wrd276.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd257.Obj);
  (* (Rhp++)) = (Wrd276.Obj);
  (Wrd275.pObj) = (& (Rhp [-2]));
  (Wrd273.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd275.pObj)));
  (Wrd280.Obj) = (current_block [OBJECT_49_23]);
  (* (Rhp++)) = (Wrd280.Obj);
  (* (Rhp++)) = (Wrd273.Obj);
  (Wrd279.pObj) = (& (Rhp [-2]));
  (Wrd277.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd279.pObj)));
  (Wrd281.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd277.Obj);
  (* (Rhp++)) = (Wrd281.Obj);
  (Wrd283.pObj) = (& (Rhp [-2]));
  (Wrd284.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd283.pObj)));
  (* (--Rsp)) = (Wrd284.Obj);
  (Wrd294.Obj) = (Rsp [2]);
  (Wrd295.uLng) = (OBJECT_TYPE (Wrd294.Obj));
  if (! ((Wrd295.uLng) == 10))
    goto label_134;
  (Wrd291.pObj) = (OBJECT_ADDRESS (Wrd294.Obj));
  (Wrd292.Obj) = ((Wrd291.pObj) [0]);
  (Wrd293.Lng) = (FIXNUM_TO_LONG (Wrd292.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd293.Lng))))
    goto label_134;
  (Wrd285.Obj) = ((Wrd291.pObj) [13]);

DEFLABEL (label_133)
  (Wrd304.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd285.Obj);
  (* (Rhp++)) = (Wrd304.Obj);
  (Wrd303.pObj) = (& (Rhp [-2]));
  (Wrd301.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd303.pObj)));
  (Wrd308.Obj) = (current_block [OBJECT_49_25]);
  (* (Rhp++)) = (Wrd308.Obj);
  (* (Rhp++)) = (Wrd301.Obj);
  (Wrd307.pObj) = (& (Rhp [-2]));
  (Wrd305.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd307.pObj)));
  (Wrd309.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd305.Obj);
  (* (Rhp++)) = (Wrd309.Obj);
  (Wrd311.pObj) = (& (Rhp [-2]));
  (Wrd312.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd311.pObj)));
  (* (--Rsp)) = (Wrd312.Obj);
  (Wrd322.Obj) = (Rsp [2]);
  (Wrd323.uLng) = (OBJECT_TYPE (Wrd322.Obj));
  if (! ((Wrd323.uLng) == 10))
    goto label_132;
  (Wrd319.pObj) = (OBJECT_ADDRESS (Wrd322.Obj));
  (Wrd320.Obj) = ((Wrd319.pObj) [0]);
  (Wrd321.Lng) = (FIXNUM_TO_LONG (Wrd320.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd321.Lng))))
    goto label_132;
  (Wrd313.Obj) = ((Wrd319.pObj) [12]);

DEFLABEL (label_131)
  (Wrd332.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd313.Obj);
  (* (Rhp++)) = (Wrd332.Obj);
  (Wrd331.pObj) = (& (Rhp [-2]));
  (Wrd329.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd331.pObj)));
  (Wrd336.Obj) = (current_block [OBJECT_49_27]);
  (* (Rhp++)) = (Wrd336.Obj);
  (* (Rhp++)) = (Wrd329.Obj);
  (Wrd335.pObj) = (& (Rhp [-2]));
  (Wrd333.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd335.pObj)));
  (Wrd337.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd333.Obj);
  (* (Rhp++)) = (Wrd337.Obj);
  (Wrd339.pObj) = (& (Rhp [-2]));
  (Wrd340.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd339.pObj)));
  (* (--Rsp)) = (Wrd340.Obj);
  (Wrd350.Obj) = (Rsp [2]);
  (Wrd351.uLng) = (OBJECT_TYPE (Wrd350.Obj));
  if (! ((Wrd351.uLng) == 10))
    goto label_130;
  (Wrd347.pObj) = (OBJECT_ADDRESS (Wrd350.Obj));
  (Wrd348.Obj) = ((Wrd347.pObj) [0]);
  (Wrd349.Lng) = (FIXNUM_TO_LONG (Wrd348.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd349.Lng))))
    goto label_130;
  (Wrd341.Obj) = ((Wrd347.pObj) [11]);

DEFLABEL (label_129)
  (Wrd360.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd341.Obj);
  (* (Rhp++)) = (Wrd360.Obj);
  (Wrd359.pObj) = (& (Rhp [-2]));
  (Wrd357.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd359.pObj)));
  (Wrd364.Obj) = (current_block [OBJECT_49_29]);
  (* (Rhp++)) = (Wrd364.Obj);
  (* (Rhp++)) = (Wrd357.Obj);
  (Wrd363.pObj) = (& (Rhp [-2]));
  (Wrd361.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd363.pObj)));
  (Wrd365.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd361.Obj);
  (* (Rhp++)) = (Wrd365.Obj);
  (Wrd367.pObj) = (& (Rhp [-2]));
  (Wrd368.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd367.pObj)));
  (* (--Rsp)) = (Wrd368.Obj);
  (Wrd378.Obj) = (Rsp [2]);
  (Wrd379.uLng) = (OBJECT_TYPE (Wrd378.Obj));
  if (! ((Wrd379.uLng) == 10))
    goto label_128;
  (Wrd375.pObj) = (OBJECT_ADDRESS (Wrd378.Obj));
  (Wrd376.Obj) = ((Wrd375.pObj) [0]);
  (Wrd377.Lng) = (FIXNUM_TO_LONG (Wrd376.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd377.Lng))))
    goto label_128;
  (Wrd369.Obj) = ((Wrd375.pObj) [10]);

DEFLABEL (label_127)
  (Wrd388.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd369.Obj);
  (* (Rhp++)) = (Wrd388.Obj);
  (Wrd387.pObj) = (& (Rhp [-2]));
  (Wrd385.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd387.pObj)));
  (Wrd392.Obj) = (current_block [OBJECT_49_31]);
  (* (Rhp++)) = (Wrd392.Obj);
  (* (Rhp++)) = (Wrd385.Obj);
  (Wrd391.pObj) = (& (Rhp [-2]));
  (Wrd389.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd391.pObj)));
  (Wrd393.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd389.Obj);
  (* (Rhp++)) = (Wrd393.Obj);
  (Wrd395.pObj) = (& (Rhp [-2]));
  (Wrd396.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd395.pObj)));
  (* (--Rsp)) = (Wrd396.Obj);
  (Wrd406.Obj) = (Rsp [2]);
  (Wrd407.uLng) = (OBJECT_TYPE (Wrd406.Obj));
  if (! ((Wrd407.uLng) == 10))
    goto label_126;
  (Wrd403.pObj) = (OBJECT_ADDRESS (Wrd406.Obj));
  (Wrd404.Obj) = ((Wrd403.pObj) [0]);
  (Wrd405.Lng) = (FIXNUM_TO_LONG (Wrd404.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd405.Lng))))
    goto label_126;
  (Wrd397.Obj) = ((Wrd403.pObj) [9]);

DEFLABEL (label_125)
  (Wrd416.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd397.Obj);
  (* (Rhp++)) = (Wrd416.Obj);
  (Wrd415.pObj) = (& (Rhp [-2]));
  (Wrd413.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd415.pObj)));
  (Wrd420.Obj) = (current_block [OBJECT_49_33]);
  (* (Rhp++)) = (Wrd420.Obj);
  (* (Rhp++)) = (Wrd413.Obj);
  (Wrd419.pObj) = (& (Rhp [-2]));
  (Wrd417.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd419.pObj)));
  (Wrd421.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd417.Obj);
  (* (Rhp++)) = (Wrd421.Obj);
  (Wrd423.pObj) = (& (Rhp [-2]));
  (Wrd424.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd423.pObj)));
  (* (--Rsp)) = (Wrd424.Obj);
  (Wrd434.Obj) = (Rsp [2]);
  (Wrd435.uLng) = (OBJECT_TYPE (Wrd434.Obj));
  if (! ((Wrd435.uLng) == 10))
    goto label_124;
  (Wrd431.pObj) = (OBJECT_ADDRESS (Wrd434.Obj));
  (Wrd432.Obj) = ((Wrd431.pObj) [0]);
  (Wrd433.Lng) = (FIXNUM_TO_LONG (Wrd432.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd433.Lng))))
    goto label_124;
  (Wrd425.Obj) = ((Wrd431.pObj) [8]);

DEFLABEL (label_123)
  (Wrd444.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd425.Obj);
  (* (Rhp++)) = (Wrd444.Obj);
  (Wrd443.pObj) = (& (Rhp [-2]));
  (Wrd441.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd443.pObj)));
  (Wrd448.Obj) = (current_block [OBJECT_49_35]);
  (* (Rhp++)) = (Wrd448.Obj);
  (* (Rhp++)) = (Wrd441.Obj);
  (Wrd447.pObj) = (& (Rhp [-2]));
  (Wrd445.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd447.pObj)));
  (Wrd449.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd445.Obj);
  (* (Rhp++)) = (Wrd449.Obj);
  (Wrd451.pObj) = (& (Rhp [-2]));
  (Wrd452.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd451.pObj)));
  (* (--Rsp)) = (Wrd452.Obj);
  (Wrd462.Obj) = (Rsp [2]);
  (Wrd463.uLng) = (OBJECT_TYPE (Wrd462.Obj));
  if (! ((Wrd463.uLng) == 10))
    goto label_122;
  (Wrd459.pObj) = (OBJECT_ADDRESS (Wrd462.Obj));
  (Wrd460.Obj) = ((Wrd459.pObj) [0]);
  (Wrd461.Lng) = (FIXNUM_TO_LONG (Wrd460.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd461.Lng))))
    goto label_122;
  (Wrd453.Obj) = ((Wrd459.pObj) [7]);

DEFLABEL (label_121)
  (Wrd472.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd453.Obj);
  (* (Rhp++)) = (Wrd472.Obj);
  (Wrd471.pObj) = (& (Rhp [-2]));
  (Wrd469.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd471.pObj)));
  (Wrd476.Obj) = (current_block [OBJECT_49_37]);
  (* (Rhp++)) = (Wrd476.Obj);
  (* (Rhp++)) = (Wrd469.Obj);
  (Wrd475.pObj) = (& (Rhp [-2]));
  (Wrd473.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd475.pObj)));
  (Wrd477.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd473.Obj);
  (* (Rhp++)) = (Wrd477.Obj);
  (Wrd479.pObj) = (& (Rhp [-2]));
  (Wrd480.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd479.pObj)));
  (* (--Rsp)) = (Wrd480.Obj);
  (Wrd490.Obj) = (Rsp [2]);
  (Wrd491.uLng) = (OBJECT_TYPE (Wrd490.Obj));
  if (! ((Wrd491.uLng) == 10))
    goto label_120;
  (Wrd487.pObj) = (OBJECT_ADDRESS (Wrd490.Obj));
  (Wrd488.Obj) = ((Wrd487.pObj) [0]);
  (Wrd489.Lng) = (FIXNUM_TO_LONG (Wrd488.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd489.Lng))))
    goto label_120;
  (Wrd481.Obj) = ((Wrd487.pObj) [6]);

DEFLABEL (label_119)
  (Wrd500.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd481.Obj);
  (* (Rhp++)) = (Wrd500.Obj);
  (Wrd499.pObj) = (& (Rhp [-2]));
  (Wrd497.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd499.pObj)));
  (Wrd504.Obj) = (current_block [OBJECT_49_38]);
  (* (Rhp++)) = (Wrd504.Obj);
  (* (Rhp++)) = (Wrd497.Obj);
  (Wrd503.pObj) = (& (Rhp [-2]));
  (Wrd501.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd503.pObj)));
  (Wrd505.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd501.Obj);
  (* (Rhp++)) = (Wrd505.Obj);
  (Wrd507.pObj) = (& (Rhp [-2]));
  (Wrd508.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd507.pObj)));
  (* (--Rsp)) = (Wrd508.Obj);
  (Wrd518.Obj) = (Rsp [2]);
  (Wrd519.uLng) = (OBJECT_TYPE (Wrd518.Obj));
  if (! ((Wrd519.uLng) == 10))
    goto label_118;
  (Wrd515.pObj) = (OBJECT_ADDRESS (Wrd518.Obj));
  (Wrd516.Obj) = ((Wrd515.pObj) [0]);
  (Wrd517.Lng) = (FIXNUM_TO_LONG (Wrd516.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd517.Lng))))
    goto label_118;
  (Wrd509.Obj) = ((Wrd515.pObj) [5]);

DEFLABEL (label_117)
  (Wrd528.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd509.Obj);
  (* (Rhp++)) = (Wrd528.Obj);
  (Wrd527.pObj) = (& (Rhp [-2]));
  (Wrd525.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd527.pObj)));
  (Wrd532.Obj) = (current_block [OBJECT_49_40]);
  (* (Rhp++)) = (Wrd532.Obj);
  (* (Rhp++)) = (Wrd525.Obj);
  (Wrd531.pObj) = (& (Rhp [-2]));
  (Wrd529.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd531.pObj)));
  (Wrd533.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd529.Obj);
  (* (Rhp++)) = (Wrd533.Obj);
  (Wrd535.pObj) = (& (Rhp [-2]));
  (Wrd536.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd535.pObj)));
  (* (--Rsp)) = (Wrd536.Obj);
  (Wrd546.Obj) = (Rsp [2]);
  (Wrd547.uLng) = (OBJECT_TYPE (Wrd546.Obj));
  if (! ((Wrd547.uLng) == 10))
    goto label_116;
  (Wrd543.pObj) = (OBJECT_ADDRESS (Wrd546.Obj));
  (Wrd544.Obj) = ((Wrd543.pObj) [0]);
  (Wrd545.Lng) = (FIXNUM_TO_LONG (Wrd544.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd545.Lng))))
    goto label_116;
  (Wrd537.Obj) = ((Wrd543.pObj) [4]);

DEFLABEL (label_115)
  (Wrd556.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd537.Obj);
  (* (Rhp++)) = (Wrd556.Obj);
  (Wrd555.pObj) = (& (Rhp [-2]));
  (Wrd553.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd555.pObj)));
  (Wrd560.Obj) = (current_block [OBJECT_49_42]);
  (* (Rhp++)) = (Wrd560.Obj);
  (* (Rhp++)) = (Wrd553.Obj);
  (Wrd559.pObj) = (& (Rhp [-2]));
  (Wrd557.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd559.pObj)));
  (Wrd561.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd557.Obj);
  (* (Rhp++)) = (Wrd561.Obj);
  (Wrd563.pObj) = (& (Rhp [-2]));
  (Wrd564.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd563.pObj)));
  (* (--Rsp)) = (Wrd564.Obj);
  (Wrd574.Obj) = (Rsp [2]);
  (Wrd575.uLng) = (OBJECT_TYPE (Wrd574.Obj));
  if (! ((Wrd575.uLng) == 10))
    goto label_114;
  (Wrd571.pObj) = (OBJECT_ADDRESS (Wrd574.Obj));
  (Wrd572.Obj) = ((Wrd571.pObj) [0]);
  (Wrd573.Lng) = (FIXNUM_TO_LONG (Wrd572.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd573.Lng))))
    goto label_114;
  (Wrd565.Obj) = ((Wrd571.pObj) [3]);

DEFLABEL (label_113)
  (Wrd584.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd565.Obj);
  (* (Rhp++)) = (Wrd584.Obj);
  (Wrd583.pObj) = (& (Rhp [-2]));
  (Wrd581.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd583.pObj)));
  (Wrd588.Obj) = (current_block [OBJECT_49_44]);
  (* (Rhp++)) = (Wrd588.Obj);
  (* (Rhp++)) = (Wrd581.Obj);
  (Wrd587.pObj) = (& (Rhp [-2]));
  (Wrd585.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd587.pObj)));
  (Wrd589.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd585.Obj);
  (* (Rhp++)) = (Wrd589.Obj);
  (Wrd592.pObj) = (& (Rhp [-2]));
  (Wrd590.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd592.pObj)));
  (Rsp [1]) = (Wrd590.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_29]));

DEFLABEL (label_114)
  (Wrd576.Obj) = (Rsp [2]);
  (Wrd577.Obj) = (current_block [OBJECT_49_43]);
  (Wrd580.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_28]))));
  (* (--Rsp)) = (Wrd580.Obj);
  (* (--Rsp)) = (Wrd577.Obj);
  (* (--Rsp)) = (Wrd576.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_110)
  (Wrd565.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd548.Obj) = (Rsp [2]);
  (Wrd549.Obj) = (current_block [OBJECT_49_41]);
  (Wrd552.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_27]))));
  (* (--Rsp)) = (Wrd552.Obj);
  (* (--Rsp)) = (Wrd549.Obj);
  (* (--Rsp)) = (Wrd548.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_109)
  (Wrd537.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd520.Obj) = (Rsp [2]);
  (Wrd521.Obj) = (current_block [OBJECT_49_39]);
  (Wrd524.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_26]))));
  (* (--Rsp)) = (Wrd524.Obj);
  (* (--Rsp)) = (Wrd521.Obj);
  (* (--Rsp)) = (Wrd520.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_108)
  (Wrd509.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd492.Obj) = (Rsp [2]);
  (Wrd493.Obj) = (current_block [OBJECT_49_0]);
  (Wrd496.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_25]))));
  (* (--Rsp)) = (Wrd496.Obj);
  (* (--Rsp)) = (Wrd493.Obj);
  (* (--Rsp)) = (Wrd492.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_107)
  (Wrd481.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd464.Obj) = (Rsp [2]);
  (Wrd465.Obj) = (current_block [OBJECT_49_36]);
  (Wrd468.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_24]))));
  (* (--Rsp)) = (Wrd468.Obj);
  (* (--Rsp)) = (Wrd465.Obj);
  (* (--Rsp)) = (Wrd464.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_106)
  (Wrd453.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd436.Obj) = (Rsp [2]);
  (Wrd437.Obj) = (current_block [OBJECT_49_34]);
  (Wrd440.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_23]))));
  (* (--Rsp)) = (Wrd440.Obj);
  (* (--Rsp)) = (Wrd437.Obj);
  (* (--Rsp)) = (Wrd436.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_105)
  (Wrd425.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd408.Obj) = (Rsp [2]);
  (Wrd409.Obj) = (current_block [OBJECT_49_32]);
  (Wrd412.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_22]))));
  (* (--Rsp)) = (Wrd412.Obj);
  (* (--Rsp)) = (Wrd409.Obj);
  (* (--Rsp)) = (Wrd408.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_104)
  (Wrd397.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd380.Obj) = (Rsp [2]);
  (Wrd381.Obj) = (current_block [OBJECT_49_30]);
  (Wrd384.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_21]))));
  (* (--Rsp)) = (Wrd384.Obj);
  (* (--Rsp)) = (Wrd381.Obj);
  (* (--Rsp)) = (Wrd380.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_103)
  (Wrd369.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd352.Obj) = (Rsp [2]);
  (Wrd353.Obj) = (current_block [OBJECT_49_28]);
  (Wrd356.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_20]))));
  (* (--Rsp)) = (Wrd356.Obj);
  (* (--Rsp)) = (Wrd353.Obj);
  (* (--Rsp)) = (Wrd352.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_102)
  (Wrd341.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd324.Obj) = (Rsp [2]);
  (Wrd325.Obj) = (current_block [OBJECT_49_26]);
  (Wrd328.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_19]))));
  (* (--Rsp)) = (Wrd328.Obj);
  (* (--Rsp)) = (Wrd325.Obj);
  (* (--Rsp)) = (Wrd324.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_101)
  (Wrd313.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd296.Obj) = (Rsp [2]);
  (Wrd297.Obj) = (current_block [OBJECT_49_24]);
  (Wrd300.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_18]))));
  (* (--Rsp)) = (Wrd300.Obj);
  (* (--Rsp)) = (Wrd297.Obj);
  (* (--Rsp)) = (Wrd296.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_100)
  (Wrd285.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd268.Obj) = (Rsp [2]);
  (Wrd269.Obj) = (current_block [OBJECT_49_22]);
  (Wrd272.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_17]))));
  (* (--Rsp)) = (Wrd272.Obj);
  (* (--Rsp)) = (Wrd269.Obj);
  (* (--Rsp)) = (Wrd268.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_99)
  (Wrd257.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd240.Obj) = (Rsp [2]);
  (Wrd241.Obj) = (current_block [OBJECT_49_20]);
  (Wrd244.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_16]))));
  (* (--Rsp)) = (Wrd244.Obj);
  (* (--Rsp)) = (Wrd241.Obj);
  (* (--Rsp)) = (Wrd240.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_98)
  (Wrd229.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  (Wrd212.Obj) = (Rsp [2]);
  (Wrd213.Obj) = (current_block [OBJECT_49_18]);
  (Wrd216.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_15]))));
  (* (--Rsp)) = (Wrd216.Obj);
  (* (--Rsp)) = (Wrd213.Obj);
  (* (--Rsp)) = (Wrd212.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_97)
  (Wrd201.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd184.Obj) = (Rsp [2]);
  (Wrd185.Obj) = (current_block [OBJECT_49_16]);
  (Wrd188.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_14]))));
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  (* (--Rsp)) = (Wrd184.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_96)
  (Wrd173.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd156.Obj) = (Rsp [2]);
  (Wrd157.Obj) = (current_block [OBJECT_49_14]);
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_13]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_95)
  (Wrd145.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  (Wrd128.Obj) = (Rsp [2]);
  (Wrd129.Obj) = (current_block [OBJECT_49_12]);
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_94)
  (Wrd117.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd100.Obj) = (Rsp [2]);
  (Wrd101.Obj) = (current_block [OBJECT_49_10]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_93)
  (Wrd89.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (current_block [OBJECT_49_8]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_92)
  (Wrd61.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (current_block [OBJECT_49_6]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_91)
  (Wrd33.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_49_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_90)
  (Wrd5.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  (Wrd25.Obj) = (current_block [OBJECT_49_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_6])), (Wrd11.pObj));

DEFLABEL (label_88)
  (Wrd10.Obj) = Rvl;
  goto label_157;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_6 5
#define LABEL_50_8 7
#define LABEL_50_9 9
#define LABEL_50_5 11
#define LABEL_50_10 13
#define LABEL_50_11 15
#define LABEL_50_12 17
#define LABEL_50_13 19
#define LABEL_50_14 21
#define LABEL_50_15 23
#define LABEL_50_16 25
#define LABEL_50_17 27
#define LABEL_50_18 29
#define LABEL_50_19 31
#define ENVIRONMENT_LABEL_50_3 53
#define DEBUGGING_LABEL_50_2 52
#define OBJECT_50_8 51
#define OBJECT_50_7 50
#define OBJECT_50_6 49
#define OBJECT_50_5 48
#define OBJECT_50_4 47
#define OBJECT_50_3 46
#define OBJECT_50_2 45
#define OBJECT_50_1 44
#define OBJECT_50_0 43
#define EXECUTE_CACHE_50_7 33
#define FREE_REFERENCE_50_4 36
#define FREE_REFERENCE_50_3 37
#define FREE_REFERENCE_50_2 38
#define FREE_REFERENCE_50_1 39
#define FREE_REFERENCE_50_0 40
#define FREE_ASSIGNMENT_50_0 42
#define FREE_REFERENCES_LABEL_50_0 32
#define NUMBER_OF_LINKER_SECTIONS_50_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd131;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd130;
  machine_word Wrd121;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd160;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd100;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd110;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd80;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd96;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd47;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd163;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd171;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd172;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_50_4);
      goto make_block_10;

    case 1:
      current_block = (Rpc - LABEL_50_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_50_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_50_11);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_50_12);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_50_13);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_50_14);
      goto label_15;

    case 10:
      current_block = (Rpc - LABEL_50_15);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_50_16);
      goto label_17;

    case 12:
      current_block = (Rpc - LABEL_50_17);
      goto label_20;

    case 13:
      current_block = (Rpc - LABEL_50_18);
      goto label_18;

    case 14:
      current_block = (Rpc - LABEL_50_19);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_block_24)
DEFLABEL (make_block_10)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_51;
  Wrd9 = Wrd13;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_49;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_49;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_48)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_44;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd33.Lng))))
    goto label_44;
  (Wrd25.Obj) = ((Wrd31.pObj) [22]);

DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_42)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  if ((Wrd44.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_38;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd55.Lng))))
    goto label_38;
  (Wrd47.Obj) = ((Wrd53.pObj) [23]);

DEFLABEL (label_37)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_36)
  (Wrd65.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_3]));
  (Wrd68.Obj) = ((Wrd65.pObj) [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 50)
    goto label_35;
  Wrd64 = Wrd68;

DEFLABEL (label_34)
  (Wrd70.Obj) = (* (Rsp++));
  (Wrd71.Obj) = (* (Rsp++));
  (Wrd72.Obj) = (* (Rsp++));
  (Wrd96.Obj) = (MAKE_OBJECT (0, 23));
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.Obj) = (current_block [OBJECT_50_5]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd80.Obj) = (current_block [OBJECT_50_6]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd71.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd74.pObj) = (& (Rhp [-24]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd74.pObj)));
  (* (--Rsp)) = (Wrd75.Obj);
  if ((Wrd90.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd110.uLng) == 10))
    goto label_33;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [0]);
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd108.Lng))))
    goto label_33;
  (Wrd100.Obj) = ((Wrd106.pObj) [5]);

DEFLABEL (label_32)
  (Wrd119.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd100.Obj);
  (Wrd118.pObj) = (& (Rhp [-2]));
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd118.pObj)));
  (Wrd153.Obj) = (Rsp [1]);
  (Wrd154.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  if (! ((Wrd154.uLng) == 10))
    goto label_31;
  (Wrd150.pObj) = (OBJECT_ADDRESS (Wrd153.Obj));
  (Wrd151.Obj) = ((Wrd150.pObj) [0]);
  (Wrd152.Lng) = (FIXNUM_TO_LONG (Wrd151.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd152.Lng))))
    goto label_31;
  ((Wrd150.pObj) [5]) = (Wrd116.Obj);

DEFLABEL (label_30)
  (Wrd122.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_4]));
  (Wrd125.Obj) = ((Wrd122.pObj) [0]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if ((Wrd126.uLng) == 50)
    goto label_29;
  Wrd121 = Wrd125;

DEFLABEL (label_28)
  (Wrd130.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd130.Obj);
  (* (Rhp++)) = (Wrd121.Obj);
  (Wrd129.pObj) = (& (Rhp [-2]));
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd129.pObj)));
  (Wrd131.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_50_0]));
  (Wrd139.Obj) = ((Wrd131.pObj) [0]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if ((Wrd140.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd131.pObj) [0]) = (Wrd127.Obj);

DEFLABEL (label_25)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  if ((Wrd139.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_50_19])), (Wrd131.pObj), (Wrd127.Obj));

DEFLABEL (label_19)
  goto label_25;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_18])), (Wrd122.pObj));

DEFLABEL (label_18)
  (Wrd121.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd155.Obj) = (Rsp [1]);
  (Wrd156.Obj) = (current_block [OBJECT_50_7]);
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_17]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  (* (--Rsp)) = (Wrd155.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_8]), 3);

DEFLABEL (label_20)
  goto label_30;

DEFLABEL (label_33)
  (Wrd111.Obj) = (Rsp [1]);
  (Wrd112.Obj) = (current_block [OBJECT_50_7]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_16]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

DEFLABEL (label_17)
  (Wrd100.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_15])), (Wrd65.pObj));

DEFLABEL (label_16)
  (Wrd64.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  (Wrd58.Obj) = (Rsp [3]);
  (Wrd59.Obj) = (current_block [OBJECT_50_4]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

DEFLABEL (label_15)
  (Wrd47.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd164.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_2]));
  (Wrd167.Obj) = ((Wrd164.pObj) [0]);
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if ((Wrd168.uLng) == 50)
    goto label_41;
  Wrd163 = Wrd167;

DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd163.Obj);
  goto label_36;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_13])), (Wrd164.pObj));

DEFLABEL (label_21)
  (Wrd163.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_44)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (current_block [OBJECT_50_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

DEFLABEL (label_14)
  (Wrd25.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd172.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_1]));
  (Wrd175.Obj) = ((Wrd172.pObj) [0]);
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if ((Wrd176.uLng) == 50)
    goto label_47;
  Wrd171 = Wrd175;

DEFLABEL (label_46)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd171.Obj);
  goto label_42;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_11])), (Wrd172.pObj));

DEFLABEL (label_22)
  (Wrd171.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd15.Obj) = (current_block [OBJECT_50_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_6])), (Wrd10.pObj));

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_50;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_8);
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_9);
  (* (--Rsp)) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_6 7
#define LABEL_51_10 9
#define LABEL_51_11 11
#define LABEL_51_12 13
#define LABEL_51_13 15
#define LABEL_51_14 17
#define LABEL_51_7 19
#define LABEL_51_9 21
#define LABEL_51_17 23
#define LABEL_51_18 25
#define LABEL_51_19 27
#define LABEL_51_20 29
#define LABEL_51_23 31
#define LABEL_51_22 33
#define ENVIRONMENT_LABEL_51_3 57
#define DEBUGGING_LABEL_51_2 56
#define OBJECT_51_9 55
#define OBJECT_51_8 54
#define OBJECT_51_7 53
#define OBJECT_51_6 52
#define OBJECT_51_5 51
#define OBJECT_51_4 50
#define OBJECT_51_3 49
#define OBJECT_51_2 48
#define OBJECT_51_1 47
#define OBJECT_51_0 46
#define EXECUTE_CACHE_51_21 35
#define EXECUTE_CACHE_51_16 37
#define EXECUTE_CACHE_51_15 39
#define EXECUTE_CACHE_51_8 41
#define FREE_REFERENCE_51_1 44
#define FREE_REFERENCE_51_0 45
#define FREE_REFERENCES_LABEL_51_0 34
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_51_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_14;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto lambda_13;

    case 3:
      current_block = (Rpc - LABEL_51_10);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_51_11);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_51_12);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_51_13);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_51_14);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_51_9);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_51_17);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_51_18);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_51_19);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_51_20);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_51_23);
      goto label_25;

    case 15:
      current_block = (Rpc - LABEL_51_22);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_28)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_51_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_48;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_48;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_47)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_46;
  Wrd25 = Wrd29;

DEFLABEL (label_45)
  Wrd24 = Wrd25;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_44;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_44;
  (Wrd31.Obj) = ((Wrd35.pObj) [2]);

DEFLABEL (label_43)
  (Wrd44.Obj) = (* (Rsp++));
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_42;
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd49.uLng) == 26))
    goto label_42;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) (Wrd50.Lng)) < ((unsigned long) (Wrd53.Lng))))
    goto label_42;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd48.pObj) = (& ((Wrd51.pObj) [(Wrd46.Lng)]));
  (Wrd45.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_41)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_40;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd66.Lng))))
    goto label_40;
  (Wrd61.Obj) = ((Wrd64.pObj) [3]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_39)
  (Wrd73.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_51_9);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_38;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_30;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_51_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_1]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_36;
  Wrd23 = Wrd27;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_34;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_34;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_33)
  (Wrd45.Obj) = (* (Rsp++));
  if (! ((Wrd29.Obj) == (Wrd45.Obj)))
    goto label_29;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_20]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_51_7]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_51_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_32;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd16.Lng))))
    goto label_32;
  (Wrd10.Obj) = ((Wrd14.pObj) [15]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_51_22);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_21]));

DEFLABEL (label_32)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_51_9]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_23]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_51_6]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_19]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_24)
  (Wrd29.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_18])), (Wrd24.pObj));

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_51_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd69.Obj) = (current_block [OBJECT_51_1]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_14]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_4]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_13]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_20)
  (Wrd45.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd40.Obj) = (current_block [OBJECT_51_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_4]), 2);

DEFLABEL (label_19)
  (Wrd31.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_11])), (Wrd26.pObj));

DEFLABEL (label_18)
  (Wrd25.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_51_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define ENVIRONMENT_LABEL_52_3 14
#define DEBUGGING_LABEL_52_2 13
#define OBJECT_52_2 12
#define OBJECT_52_1 11
#define OBJECT_52_0 10
#define FREE_REFERENCE_52_0 9
#define FREE_REFERENCES_LABEL_52_0 8
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto rvalue_blockP_1;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_blockP_6)
DEFLABEL (rvalue_blockP_1)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_10)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_52_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_52_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
blocks_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_53_4);
      goto add_block_applicationB_2;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_block_applicationB_6)
DEFLABEL (add_block_applicationB_2)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_10;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd14.Lng))))
    goto label_10;
  (Wrd6.Obj) = ((Wrd12.pObj) [13]);

DEFLABEL (label_9)
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_53_0]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_3]), 3);

DEFLABEL (label_8)
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd37.Lng))))
    goto label_7;
  ((Wrd35.pObj) [13]) = (Wrd22.Obj);
  Rvl = (current_block [OBJECT_53_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_53_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_6 5
#define LABEL_54_5 7
#define LABEL_54_8 9
#define LABEL_54_10 11
#define LABEL_54_11 13
#define ENVIRONMENT_LABEL_54_3 24
#define DEBUGGING_LABEL_54_2 23
#define OBJECT_54_3 22
#define OBJECT_54_2 21
#define OBJECT_54_1 20
#define OBJECT_54_0 19
#define EXECUTE_CACHE_54_9 15
#define EXECUTE_CACHE_54_7 17
#define FREE_REFERENCES_LABEL_54_0 14
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_54_4);
      goto intern_scode_variableB_9;

    case 1:
      current_block = (Rpc - LABEL_54_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_54_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_54_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_54_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (intern_scode_variableB_15)
DEFLABEL (intern_scode_variableB_9)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd16.Lng))))
    goto label_23;
  (Wrd10.Obj) = ((Wrd14.pObj) [14]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_22)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_8);
  (Rsp [0]) = Rvl;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd14.Lng))))
    goto label_19;
  (Wrd6.Obj) = ((Wrd12.pObj) [14]);

DEFLABEL (label_18)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_17;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd39.Lng))))
    goto label_17;
  ((Wrd37.pObj) [14]) = (Wrd27.Obj);

DEFLABEL (label_16)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (current_block [OBJECT_54_0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_11]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 3);

DEFLABEL (label_13)
  goto label_16;

DEFLABEL (label_19)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_54_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_21;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 1);

DEFLABEL (label_23)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_54_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define ENVIRONMENT_LABEL_55_3 12
#define DEBUGGING_LABEL_55_2 11
#define EXECUTE_CACHE_55_6 7
#define FREE_REFERENCE_55_0 10
#define FREE_REFERENCES_LABEL_55_0 6
#define NUMBER_OF_LINKER_SECTIONS_55_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto block_generate_type_checksP_0;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_generate_type_checksP_4)
DEFLABEL (block_generate_type_checksP_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_6;
  Wrd8 = Wrd12;

DEFLABEL (label_5)
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_5])), (Wrd9.pObj));

DEFLABEL (label_2)
  (Wrd8.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define ENVIRONMENT_LABEL_56_3 12
#define DEBUGGING_LABEL_56_2 11
#define EXECUTE_CACHE_56_6 7
#define FREE_REFERENCE_56_0 10
#define FREE_REFERENCES_LABEL_56_0 6
#define NUMBER_OF_LINKER_SECTIONS_56_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto block_generate_range_checksP_0;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_generate_range_checksP_4)
DEFLABEL (block_generate_range_checksP_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_6;
  Wrd8 = Wrd12;

DEFLABEL (label_5)
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_5])), (Wrd9.pObj));

DEFLABEL (label_2)
  (Wrd8.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define LABEL_57_8 9
#define LABEL_57_9 11
#define LABEL_57_10 13
#define LABEL_57_11 15
#define LABEL_57_12 17
#define LABEL_57_13 19
#define LABEL_57_15 21
#define LABEL_57_14 23
#define LABEL_57_18 25
#define LABEL_57_20 27
#define ENVIRONMENT_LABEL_57_3 41
#define DEBUGGING_LABEL_57_2 40
#define OBJECT_57_2 39
#define OBJECT_57_1 38
#define OBJECT_57_0 37
#define EXECUTE_CACHE_57_19 29
#define EXECUTE_CACHE_57_17 31
#define EXECUTE_CACHE_57_16 33
#define EXECUTE_CACHE_57_7 35
#define FREE_REFERENCES_LABEL_57_0 28
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_57_4);
      goto block_generate_checksP_14;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_57_8);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_57_9);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_57_10);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_57_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_57_12);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_57_13);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_57_15);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_57_14);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_57_18);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_57_20);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_generate_checksP_23)
DEFLABEL (block_generate_checksP_14)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_57_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_40;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_39)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_38;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd27.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_37)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_36;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd34.Obj) = ((Wrd35.pObj) [0]);

DEFLABEL (label_35)
  (Rsp [3]) = (Wrd34.Obj);
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_34;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_33)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_32;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_31)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_14]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_15]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_57_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_57_14);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_57_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = (current_block [OBJECT_57_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_57_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_26;

DEFLABEL (label_27)
  Rvl = (Rsp [1]);

DEFLABEL (label_26)
DEFLABEL (label_28)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd5.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [1]));
  goto label_29;

DEFLABEL (label_32)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_13]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_12]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_20)
  (Wrd41.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_0]), 1);

DEFLABEL (label_19)
  (Wrd34.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_18)
  (Wrd27.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_17)
  (Wrd18.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_0]), 1);

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define LABEL_58_7 9
#define ENVIRONMENT_LABEL_58_3 17
#define DEBUGGING_LABEL_58_2 16
#define OBJECT_58_2 15
#define OBJECT_58_1 14
#define OBJECT_58_0 13
#define FREE_REFERENCE_58_1 11
#define FREE_REFERENCE_58_0 12
#define FREE_REFERENCES_LABEL_58_0 10
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_58_4);
      goto ic_blockP_3;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_58_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_blockP_9)
DEFLABEL (ic_blockP_3)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_16;
  Wrd22 = Wrd26;

DEFLABEL (label_15)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_11;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_14;
  Wrd30 = Wrd34;

DEFLABEL (label_13)
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == (Wrd30.Obj))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_58_2]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_7])), (Wrd31.pObj));

DEFLABEL (label_7)
  (Wrd30.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_6])), (Wrd23.pObj));

DEFLABEL (label_6)
  (Wrd22.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_58_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_6 7
#define ENVIRONMENT_LABEL_59_3 14
#define DEBUGGING_LABEL_59_2 13
#define OBJECT_59_2 12
#define OBJECT_59_1 11
#define OBJECT_59_0 10
#define FREE_REFERENCE_59_0 9
#define FREE_REFERENCES_LABEL_59_0 8
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto closure_blockP_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_blockP_6)
DEFLABEL (closure_blockP_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
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
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_59_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_59_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_6 7
#define ENVIRONMENT_LABEL_60_3 14
#define DEBUGGING_LABEL_60_2 13
#define OBJECT_60_2 12
#define OBJECT_60_1 11
#define OBJECT_60_0 10
#define FREE_REFERENCE_60_0 9
#define FREE_REFERENCES_LABEL_60_0 8
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto stack_blockP_1;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_60_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_blockP_6)
DEFLABEL (stack_blockP_1)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
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
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_60_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_60_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_6 7
#define ENVIRONMENT_LABEL_61_3 14
#define DEBUGGING_LABEL_61_2 13
#define OBJECT_61_2 12
#define OBJECT_61_1 11
#define OBJECT_61_0 10
#define FREE_REFERENCE_61_0 9
#define FREE_REFERENCES_LABEL_61_0 8
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_61_4);
      goto continuation_blockP_1;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_61_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_blockP_6)
DEFLABEL (continuation_blockP_1)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
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
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_61_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_61_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_6 7
#define LABEL_62_7 9
#define ENVIRONMENT_LABEL_62_3 19
#define DEBUGGING_LABEL_62_2 18
#define OBJECT_62_2 17
#define OBJECT_62_1 16
#define OBJECT_62_0 15
#define EXECUTE_CACHE_62_8 11
#define FREE_REFERENCE_62_0 14
#define FREE_REFERENCES_LABEL_62_0 10
#define NUMBER_OF_LINKER_SECTIONS_62_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_62_4);
      goto block_externalP_3;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_62_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_62_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_externalP_8)
DEFLABEL (block_externalP_3)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_14;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_13)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_62_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_62_2]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_62_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_6 7
#define ENVIRONMENT_LABEL_63_3 16
#define DEBUGGING_LABEL_63_2 15
#define OBJECT_63_1 14
#define OBJECT_63_0 13
#define EXECUTE_CACHE_63_7 9
#define FREE_REFERENCE_63_0 12
#define FREE_REFERENCES_LABEL_63_0 8
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto block_internalP_2;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_63_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_internalP_7)
DEFLABEL (block_internalP_2)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_10;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_10;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_9)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_7]));

DEFLABEL (label_10)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_63_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_6 7
#define LABEL_64_7 9
#define LABEL_64_8 11
#define ENVIRONMENT_LABEL_64_3 19
#define DEBUGGING_LABEL_64_2 18
#define OBJECT_64_3 17
#define OBJECT_64_2 16
#define OBJECT_64_1 15
#define OBJECT_64_0 14
#define FREE_REFERENCE_64_0 13
#define FREE_REFERENCES_LABEL_64_0 12
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd7;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  INVOKE_INTERFACE_DECLS
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
      goto stack_parentP_3;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_64_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_64_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_64_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_parentP_10)
DEFLABEL (stack_parentP_3)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_22;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd55.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd53.pObj) [4]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_21)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_20;
  Wrd11 = Wrd15;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_18;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd25.Lng))))
    goto label_18;
  (Wrd17.Obj) = ((Wrd23.pObj) [4]);

DEFLABEL (label_17)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_16;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd39.Lng))))
    goto label_16;
  (Wrd33.Obj) = ((Wrd37.pObj) [3]);

DEFLABEL (label_15)
  (Wrd46.Obj) = (* (Rsp++));
  if ((Wrd33.Obj) == (Wrd46.Obj))
    goto label_12;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_64_3]);

DEFLABEL (label_11)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd42.Obj) = (current_block [OBJECT_64_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_7)
  (Wrd33.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (current_block [OBJECT_64_0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_6)
  (Wrd17.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_6])), (Wrd12.pObj));

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.Obj) = (current_block [OBJECT_64_0]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_6 7
#define LABEL_65_7 9
#define LABEL_65_8 11
#define ENVIRONMENT_LABEL_65_3 20
#define DEBUGGING_LABEL_65_2 19
#define OBJECT_65_3 18
#define OBJECT_65_2 17
#define OBJECT_65_1 16
#define OBJECT_65_0 15
#define FREE_REFERENCE_65_1 13
#define FREE_REFERENCE_65_0 14
#define FREE_REFERENCES_LABEL_65_0 12
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_65_4);
      goto ic_block_use_lookupP_3;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_65_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_65_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_65_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ic_block_use_lookupP_10)
DEFLABEL (ic_block_use_lookupP_3)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_19;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd19.Lng))))
    goto label_19;
  (Wrd11.Obj) = ((Wrd17.pObj) [8]);

DEFLABEL (label_18)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_17;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd33.Lng))))
    goto label_17;
  (Wrd27.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_16)
  (Wrd40.Obj) = (* (Rsp++));
  if ((Wrd27.Obj) == (Wrd40.Obj))
    goto label_12;
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_1]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_15;
  Wrd41 = Wrd45;

DEFLABEL (label_14)
  if ((Wrd41.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_65_3]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_8])), (Wrd42.pObj));

DEFLABEL (label_8)
  (Wrd41.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd36.Obj) = (current_block [OBJECT_65_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_7)
  (Wrd27.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_65_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define ENVIRONMENT_LABEL_66_3 9
#define DEBUGGING_LABEL_66_2 8
#define OBJECT_66_0 7
#define EXECUTE_CACHE_66_5 5
#define FREE_REFERENCES_LABEL_66_0 4
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_66_4);
      goto block_ancestor_or_selfP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_ancestor_or_selfP_4)
DEFLABEL (block_ancestor_or_selfP_1)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_5]));

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_66_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define LABEL_67_7 9
#define ENVIRONMENT_LABEL_67_3 14
#define DEBUGGING_LABEL_67_2 13
#define OBJECT_67_2 12
#define OBJECT_67_1 11
#define OBJECT_67_0 10
#define FREE_REFERENCES_LABEL_67_0 10
#define NUMBER_OF_LINKER_SECTIONS_67_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_67_4);
      goto block_ancestorP_6;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto loop_4;

    case 3:
      current_block = (Rpc - LABEL_67_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_ancestorP_11)
DEFLABEL (block_ancestorP_6)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_13)
  goto loop_4;

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_67_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (loop_12)
DEFLABEL (loop_4)
  INTERRUPT_CHECK (26, LABEL_67_6);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_17;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_16;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_16;
  (Wrd9.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_4;

DEFLABEL (label_16)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_67_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_67_2]);

DEFLABEL (label_18)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define ENVIRONMENT_LABEL_68_3 10
#define DEBUGGING_LABEL_68_2 9
#define OBJECT_68_2 8
#define OBJECT_68_1 7
#define OBJECT_68_0 6
#define FREE_REFERENCES_LABEL_68_0 6
#define NUMBER_OF_LINKER_SECTIONS_68_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_68_4);
      goto block_childP_1;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_childP_5)
DEFLABEL (block_childP_1)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_9)
  (Wrd22.Obj) = (Rsp [0]);
  if ((Wrd22.Obj) == (Wrd5.Obj))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_68_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_68_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define ENVIRONMENT_LABEL_69_3 12
#define DEBUGGING_LABEL_69_2 11
#define OBJECT_69_2 10
#define OBJECT_69_1 9
#define OBJECT_69_0 8
#define FREE_REFERENCES_LABEL_69_0 8
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  INVOKE_INTERFACE_DECLS
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
      goto block_siblingP_2;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_siblingP_7)
DEFLABEL (block_siblingP_2)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_13)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_12;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_12;
  (Wrd21.Obj) = ((Wrd27.pObj) [4]);

DEFLABEL (label_11)
  (Wrd37.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd37.Obj))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_69_2]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_69_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_69_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_7 7
#define LABEL_70_8 9
#define LABEL_70_9 11
#define LABEL_70_10 13
#define LABEL_70_11 15
#define LABEL_70_12 17
#define LABEL_70_13 19
#define ENVIRONMENT_LABEL_70_3 26
#define DEBUGGING_LABEL_70_2 25
#define OBJECT_70_1 24
#define OBJECT_70_0 23
#define EXECUTE_CACHE_70_6 21
#define FREE_REFERENCES_LABEL_70_0 20
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_70_4);
      goto block_nearest_common_ancestor_13;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_70_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_70_8);
      goto loop_11;

    case 4:
      current_block = (Rpc - LABEL_70_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_70_10);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_70_11);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_70_12);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_70_13);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_nearest_common_ancestor_21)
DEFLABEL (block_nearest_common_ancestor_13)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_70_7);
  (Rsp [2]) = Rvl;
  goto loop_11;

DEFLABEL (loop_22)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_70_8);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_24;

DEFLABEL (label_23)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_23;
  if (! ((Wrd10.uLng) == 1))
    goto label_34;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_33)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_32;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_31)
  (Wrd29.Obj) = (* (Rsp++));
  if (! ((Wrd20.Obj) == (Wrd29.Obj)))
    goto label_23;
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_30;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_29)
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_28;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [2]) = (Wrd39.Obj);
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_26;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd48.Obj);
  goto loop_11;

DEFLABEL (label_26)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_13]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 1);

DEFLABEL (label_19)
  (Wrd48.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_12]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 1);

DEFLABEL (label_18)
  (Wrd39.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_11]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_0]), 1);

DEFLABEL (label_17)
  (Wrd30.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_0]), 1);

DEFLABEL (label_16)
  (Wrd20.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define LABEL_71_7 7
#define LABEL_71_8 9
#define LABEL_71_9 11
#define LABEL_71_10 13
#define LABEL_71_11 15
#define LABEL_71_12 17
#define ENVIRONMENT_LABEL_71_3 24
#define DEBUGGING_LABEL_71_2 23
#define OBJECT_71_1 22
#define OBJECT_71_0 21
#define EXECUTE_CACHE_71_6 19
#define FREE_REFERENCES_LABEL_71_0 18
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_71_4);
      goto block_farthest_uncommon_ancestor_12;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_71_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_71_8);
      goto loop_10;

    case 4:
      current_block = (Rpc - LABEL_71_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_71_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_71_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_71_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_farthest_uncommon_ancestor_19)
DEFLABEL (block_farthest_uncommon_ancestor_12)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_71_7);
  (Rsp [1]) = Rvl;
  goto loop_10;

DEFLABEL (loop_20)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_71_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_24;

DEFLABEL (label_23)
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_22;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  Rvl = ((Wrd14.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 1);

DEFLABEL (label_24)
  if (! ((Wrd10.uLng) == 1))
    goto label_32;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_31)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_30;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);

DEFLABEL (label_29)
  (Wrd37.Obj) = (* (Rsp++));
  if (! ((Wrd28.Obj) == (Wrd37.Obj)))
    goto label_23;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_28;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd38.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_26;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd47.Obj);
  goto loop_10;

DEFLABEL (label_26)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_12]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 1);

DEFLABEL (label_17)
  (Wrd47.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_11]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 1);

DEFLABEL (label_16)
  (Wrd38.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 1);

DEFLABEL (label_15)
  (Wrd28.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_6 7
#define LABEL_72_7 9
#define ENVIRONMENT_LABEL_72_3 14
#define DEBUGGING_LABEL_72_2 13
#define OBJECT_72_2 12
#define OBJECT_72_1 11
#define OBJECT_72_0 10
#define FREE_REFERENCES_LABEL_72_0 10
#define NUMBER_OF_LINKER_SECTIONS_72_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_72_4);
      goto block_ancestry_7;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_72_6);
      goto loop_5;

    case 3:
      current_block = (Rpc - LABEL_72_7);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_ancestry_12)
DEFLABEL (block_ancestry_7)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_72_2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Rsp [1]) = (Wrd21.Obj);
  goto loop_5;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_72_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (loop_13)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_72_6);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_18;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_18;
  (Wrd12.Obj) = ((Wrd18.pObj) [4]);

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd12.Obj);
  goto loop_5;

DEFLABEL (label_18)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_72_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_10)
  (Wrd12.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define LABEL_73_6 7
#define LABEL_73_7 9
#define ENVIRONMENT_LABEL_73_3 14
#define DEBUGGING_LABEL_73_2 13
#define OBJECT_73_2 12
#define OBJECT_73_1 11
#define OBJECT_73_0 10
#define FREE_REFERENCES_LABEL_73_0 10
#define NUMBER_OF_LINKER_SECTIONS_73_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_73_4);
      goto block_partial_ancestry_9;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_73_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_73_7);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_partial_ancestry_14)
DEFLABEL (block_partial_ancestry_9)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_16;
  Rvl = (current_block [OBJECT_73_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (current_block [OBJECT_73_0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_18;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_18;
  (Wrd14.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_17)
  goto loop_7;

DEFLABEL (label_18)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_73_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_2]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (loop_15)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_73_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_19;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_21;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_21;
  (Wrd12.Obj) = ((Wrd18.pObj) [4]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd12.Obj);
  goto loop_7;

DEFLABEL (label_21)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_73_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_2]), 2);

DEFLABEL (label_12)
  (Wrd12.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_6 7
#define ENVIRONMENT_LABEL_74_3 14
#define DEBUGGING_LABEL_74_2 13
#define OBJECT_74_1 12
#define OBJECT_74_0 11
#define EXECUTE_CACHE_74_7 9
#define FREE_REFERENCES_LABEL_74_0 8
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_74_4);
      goto find_outermost_block_2;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_74_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_outermost_block_7)
DEFLABEL (find_outermost_block_2)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_12;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd30.pObj) [4]);
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd17.pObj) [4]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_7]));

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_74_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_12)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_74_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_6 7
#define LABEL_75_7 9
#define ENVIRONMENT_LABEL_75_3 19
#define DEBUGGING_LABEL_75_2 18
#define OBJECT_75_2 17
#define OBJECT_75_1 16
#define OBJECT_75_0 15
#define EXECUTE_CACHE_75_8 11
#define FREE_REFERENCE_75_0 14
#define FREE_REFERENCES_LABEL_75_0 10
#define NUMBER_OF_LINKER_SECTIONS_75_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_75_4);
      goto stack_block_external_ancestor_4;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_75_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_75_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_block_external_ancestor_10)
DEFLABEL (stack_block_external_ancestor_4)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_16;
  Wrd23 = Wrd27;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_14;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_14;
  (Wrd29.Obj) = ((Wrd35.pObj) [3]);

DEFLABEL (label_13)
  (Wrd45.Obj) = (* (Rsp++));
  if (! ((Wrd29.Obj) == (Wrd45.Obj)))
    goto label_11;
  (Wrd48.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd48.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_8]));

DEFLABEL (label_14)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_75_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_8)
  (Wrd29.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_6])), (Wrd24.pObj));

DEFLABEL (label_7)
  (Wrd23.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_75_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_6 7
#define ENVIRONMENT_LABEL_76_3 16
#define DEBUGGING_LABEL_76_2 15
#define OBJECT_76_1 14
#define OBJECT_76_0 13
#define EXECUTE_CACHE_76_7 9
#define FREE_REFERENCE_76_0 12
#define FREE_REFERENCES_LABEL_76_0 8
#define NUMBER_OF_LINKER_SECTIONS_76_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_76_4);
      goto block_external_ancestor_2;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_76_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_external_ancestor_7)
DEFLABEL (block_external_ancestor_2)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_10;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_10;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_9)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (label_10)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_76_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_6 7
#define LABEL_77_7 9
#define LABEL_77_8 11
#define ENVIRONMENT_LABEL_77_3 16
#define DEBUGGING_LABEL_77_2 15
#define OBJECT_77_2 14
#define OBJECT_77_1 13
#define OBJECT_77_0 12
#define FREE_REFERENCES_LABEL_77_0 12
#define NUMBER_OF_LINKER_SECTIONS_77_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_77_4);
      goto stack_block_ancestor_distance_7;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto loop_5;

    case 2:
      current_block = (Rpc - LABEL_77_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_77_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_77_8);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_block_ancestor_distance_13)
DEFLABEL (stack_block_ancestor_distance_7)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_5;

DEFLABEL (loop_14)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_77_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [4]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_15;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_21;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd15.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd13.pObj) [7]);

DEFLABEL (label_20)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_19;
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_19;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) + (Wrd35.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_19;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_18)
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_17;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd44.Lng))))
    goto label_17;
  (Wrd36.Obj) = ((Wrd42.pObj) [4]);

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd36.Obj);
  goto loop_5;

DEFLABEL (label_17)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (current_block [OBJECT_77_2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_8]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_11)
  (Wrd36.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_10)
  (Wrd28.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_77_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define TAG_78_6 1
#define LABEL_78_7 7
#define LABEL_78_8 9
#define ENVIRONMENT_LABEL_78_3 16
#define DEBUGGING_LABEL_78_2 15
#define OBJECT_78_1 14
#define OBJECT_78_0 13
#define EXECUTE_CACHE_78_9 11
#define FREE_REFERENCES_LABEL_78_0 10
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_78_4);
      goto for_each_block_descendantB_5;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto loop_10;

    case 2:
      current_block = (Rpc - LABEL_78_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_78_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_block_descendantB_9)
DEFLABEL (for_each_block_descendantB_5)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_78_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_78_5])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  Wrd10 = Wrd12;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd8.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_3;

DEFLABEL (loop_10)
  CLOSURE_HEADER (LABEL_78_5);

DEFLABEL (loop_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
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
  INTERRUPT_CHECK (27, LABEL_78_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_12;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd14.Lng))))
    goto label_12;
  (Wrd6.Obj) = ((Wrd12.pObj) [5]);

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_9]));

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_78_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define ENVIRONMENT_LABEL_79_3 7
#define DEBUGGING_LABEL_79_2 6
#define OBJECT_79_1 5
#define OBJECT_79_0 4
#define FREE_REFERENCES_LABEL_79_0 4
#define NUMBER_OF_LINKER_SECTIONS_79_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_79_4);
      goto stack_block_static_linkP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_block_static_linkP_3)
DEFLABEL (stack_block_static_linkP_0)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_79_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [18]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_6 7
#define ENVIRONMENT_LABEL_80_3 13
#define DEBUGGING_LABEL_80_2 12
#define OBJECT_80_3 11
#define OBJECT_80_2 10
#define OBJECT_80_1 9
#define OBJECT_80_0 8
#define FREE_REFERENCES_LABEL_80_0 8
#define NUMBER_OF_LINKER_SECTIONS_80_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_80_4);
      goto stack_block_continuation_lvalue_2;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_80_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_block_continuation_lvalue_7)
DEFLABEL (stack_block_continuation_lvalue_2)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_11)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_10;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd27.Lng))))
    goto label_10;
  (Wrd21.Obj) = ((Wrd25.pObj) [6]);

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_8;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  Rvl = ((Wrd36.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_3]), 1);

DEFLABEL (label_10)
  (Wrd30.Obj) = (current_block [OBJECT_80_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_80_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define LABEL_81_6 7
#define ENVIRONMENT_LABEL_81_3 16
#define DEBUGGING_LABEL_81_2 15
#define OBJECT_81_1 14
#define OBJECT_81_0 13
#define EXECUTE_CACHE_81_7 9
#define FREE_REFERENCE_81_0 12
#define FREE_REFERENCES_LABEL_81_0 8
#define NUMBER_OF_LINKER_SECTIONS_81_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_81_4);
      goto block_dynamic_linkP_2;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_81_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_dynamic_linkP_7)
DEFLABEL (block_dynamic_linkP_2)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_81_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_10;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_10;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_9)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_7]));

DEFLABEL (label_10)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_81_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define LABEL_82_7 7
#define ENVIRONMENT_LABEL_82_3 15
#define DEBUGGING_LABEL_82_2 14
#define OBJECT_82_2 13
#define OBJECT_82_1 12
#define OBJECT_82_0 11
#define EXECUTE_CACHE_82_6 9
#define FREE_REFERENCES_LABEL_82_0 8
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_82_4);
      goto stack_block_dynamic_linkP_2;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_82_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_block_dynamic_linkP_6)
DEFLABEL (stack_block_dynamic_linkP_2)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_82_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_11;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd20.Lng))))
    goto label_11;
  (Wrd9.Obj) = ((Wrd18.pObj) [20]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_82_2]);

DEFLABEL (label_7)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_82_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define ENVIRONMENT_LABEL_83_3 10
#define DEBUGGING_LABEL_83_2 9
#define OBJECT_83_2 8
#define OBJECT_83_1 7
#define OBJECT_83_0 6
#define FREE_REFERENCES_LABEL_83_0 6
#define NUMBER_OF_LINKER_SECTIONS_83_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  INVOKE_INTERFACE_DECLS
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
      goto internal_block_dynamic_linkP_1;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (internal_block_dynamic_linkP_5)
DEFLABEL (internal_block_dynamic_linkP_1)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd16.pObj) [20]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_83_2]);

DEFLABEL (label_6)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_83_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_6 7
#define LABEL_84_7 9
#define ENVIRONMENT_LABEL_84_3 17
#define DEBUGGING_LABEL_84_2 16
#define OBJECT_84_3 15
#define OBJECT_84_2 14
#define OBJECT_84_1 13
#define OBJECT_84_0 12
#define FREE_REFERENCE_84_0 11
#define FREE_REFERENCES_LABEL_84_0 10
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_84_4);
      goto original_block_parent_4;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_84_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_84_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (original_block_parent_10)
DEFLABEL (original_block_parent_4)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd5.Obj);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_18;
  Wrd23 = Wrd27;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_16;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_16;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_15)
  (Wrd45.Obj) = (* (Rsp++));
  if (! ((Wrd29.Obj) == (Wrd45.Obj)))
    goto label_11;
  (Wrd48.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_84_3]);
  (Rsp [1]) = (Wrd49.Obj);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd61.uLng) == 10)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_14)
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd59.Lng))))
    goto label_13;
  Rvl = ((Wrd57.pObj) [23]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_84_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_8)
  (Wrd29.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_6])), (Wrd24.pObj));

DEFLABEL (label_7)
  (Wrd23.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_84_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_5 3
#define LABEL_85_4 5
#define LABEL_85_6 7
#define LABEL_85_7 9
#define LABEL_85_8 11
#define LABEL_85_10 13
#define LABEL_85_9 15
#define LABEL_85_12 17
#define LABEL_85_13 19
#define LABEL_85_14 21
#define LABEL_85_15 23
#define LABEL_85_16 25
#define LABEL_85_17 27
#define LABEL_85_19 29
#define LABEL_85_18 31
#define ENVIRONMENT_LABEL_85_3 47
#define DEBUGGING_LABEL_85_2 46
#define OBJECT_85_8 45
#define OBJECT_85_7 44
#define OBJECT_85_6 43
#define OBJECT_85_5 42
#define OBJECT_85_4 41
#define OBJECT_85_3 40
#define OBJECT_85_2 39
#define OBJECT_85_1 38
#define OBJECT_85_0 37
#define EXECUTE_CACHE_85_11 33
#define FREE_REFERENCE_85_0 36
#define FREE_REFERENCES_LABEL_85_0 32
#define NUMBER_OF_LINKER_SECTIONS_85_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd73;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd123;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd104;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd88;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd6;
  machine_word Wrd139;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd5;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd74;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd72;
  machine_word Wrd71;
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
      current_block = (Rpc - LABEL_85_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_85_4);
      goto transfer_block_childB_20;

    case 2:
      current_block = (Rpc - LABEL_85_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_85_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_85_8);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_85_10);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_85_9);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_85_12);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_85_13);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_85_14);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_85_15);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_85_16);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_85_17);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_85_19);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_85_18);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transfer_block_childB_34)
DEFLABEL (transfer_block_childB_20)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_66;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_66;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_65)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_64;
  Wrd26 = Wrd30;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_62;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_62;
  (Wrd32.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_61)
  (Wrd48.Obj) = (* (Rsp++));
  if ((Wrd32.Obj) == (Wrd48.Obj))
    goto label_58;

DEFLABEL (label_57)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_56)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_9]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_55;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd62.Lng))))
    goto label_55;
  (Wrd56.Obj) = ((Wrd60.pObj) [5]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_54)
  (Wrd70.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_85_9);
  (Wrd5.Obj) = Rvl;
  (Wrd132.Obj) = (Rsp [2]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd133.uLng) == 10))
    goto label_53;
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd132.Obj));
  (Wrd130.Obj) = ((Wrd129.pObj) [0]);
  (Wrd131.Lng) = (FIXNUM_TO_LONG (Wrd130.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd131.Lng))))
    goto label_53;
  ((Wrd129.pObj) [5]) = Rvl;

DEFLABEL (label_52)
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (Wrd7.Obj))
    goto label_48;

DEFLABEL (label_47)
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 10))
    goto label_46;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd79.Lng))))
    goto label_46;
  (Wrd73.Obj) = (Rsp [3]);
  ((Wrd77.pObj) [4]) = (Wrd73.Obj);

DEFLABEL (label_45)
  (Wrd8.Obj) = (Rsp [3]);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_36;

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_85_8]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_44;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_44;
  (Wrd10.Obj) = ((Wrd16.pObj) [5]);

DEFLABEL (label_43)
  (Wrd29.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_42;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd62.Lng))))
    goto label_42;
  ((Wrd60.pObj) [5]) = (Wrd26.Obj);

DEFLABEL (label_41)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.Obj) = (Rsp [0]);
  if (! ((Wrd30.Obj) == (Wrd31.Obj)))
    goto label_35;
  (Wrd34.Obj) = (current_block [OBJECT_85_6]);
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_18]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_40;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd46.Lng))))
    goto label_40;
  (Wrd40.Obj) = ((Wrd44.pObj) [6]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_39)
  (Wrd54.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_11]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_85_18);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_38;

DEFLABEL (label_37)
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_5]), 3);

DEFLABEL (label_38)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_37;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_85_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.Obj) = (current_block [OBJECT_85_6]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_19]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.Obj) = (current_block [OBJECT_85_4]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_17]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_5]), 3);

DEFLABEL (label_28)
  goto label_41;

DEFLABEL (label_44)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_85_4]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_16]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_26)
  (Wrd10.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.Obj) = (current_block [OBJECT_85_7]);
  (Wrd84.Obj) = (Rsp [3]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_15]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_5]), 3);

DEFLABEL (label_29)
  goto label_45;

DEFLABEL (label_48)
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd98.uLng) == 10))
    goto label_51;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd96.Lng))))
    goto label_51;
  (Wrd88.Obj) = ((Wrd94.pObj) [6]);

DEFLABEL (label_50)
  (Wrd107.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd107.Obj);
  (* (Rhp++)) = (Wrd88.Obj);
  (Wrd106.pObj) = (& (Rhp [-2]));
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd106.pObj)));
  (Wrd116.Obj) = (Rsp [2]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 10))
    goto label_49;
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [0]);
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd115.Lng))))
    goto label_49;
  ((Wrd113.pObj) [6]) = (Wrd104.Obj);
  goto label_47;

DEFLABEL (label_49)
  (Wrd118.Obj) = (Rsp [2]);
  (Wrd119.Obj) = (current_block [OBJECT_85_6]);
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_14]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_5]), 3);

DEFLABEL (label_31)
  goto label_47;

DEFLABEL (label_51)
  (Wrd99.Obj) = (Rsp [2]);
  (Wrd100.Obj) = (current_block [OBJECT_85_6]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_13]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_30)
  (Wrd88.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd134.Obj) = (Rsp [2]);
  (Wrd135.Obj) = (current_block [OBJECT_85_4]);
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_12]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_5]), 3);

DEFLABEL (label_32)
  goto label_52;

DEFLABEL (label_55)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.Obj) = (current_block [OBJECT_85_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_10]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  (Wrd71.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (current_block [OBJECT_85_3]);
  (Rsp [1]) = (Wrd72.Obj);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd84.uLng) == 10)
    goto label_60;

DEFLABEL (label_59)
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_60)
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd82.Lng))))
    goto label_59;
  (Wrd74.Obj) = ((Wrd80.pObj) [23]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd74.Obj);
  goto label_56;

DEFLABEL (label_62)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_85_2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_24)
  (Wrd32.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_7])), (Wrd27.pObj));

DEFLABEL (label_23)
  (Wrd26.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_85_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (* (--Rsp)) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define ENVIRONMENT_LABEL_86_3 7
#define DEBUGGING_LABEL_86_2 6
#define OBJECT_86_1 5
#define OBJECT_86_0 4
#define FREE_REFERENCES_LABEL_86_0 4
#define NUMBER_OF_LINKER_SECTIONS_86_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_86_4);
      goto block_number_of_entries_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_number_of_entries_3)
DEFLABEL (block_number_of_entries_0)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_86_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [18]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define ENVIRONMENT_LABEL_87_3 11
#define DEBUGGING_LABEL_87_2 10
#define OBJECT_87_3 9
#define OBJECT_87_2 8
#define OBJECT_87_1 7
#define OBJECT_87_0 6
#define FREE_REFERENCES_LABEL_87_0 6
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_87_4);
      goto closure_block_entry_number_2;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_block_entry_number_6)
DEFLABEL (closure_block_entry_number_2)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [17]);

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == (Wrd5.Obj)))
    goto label_7;
  Rvl = (current_block [OBJECT_87_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_87_3]);
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd35.uLng) == 10)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

DEFLABEL (label_9)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd33.Lng))))
    goto label_8;
  Rvl = ((Wrd31.pObj) [18]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_87_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_5 3
#define LABEL_88_4 5
#define LABEL_88_6 7
#define LABEL_88_7 9
#define LABEL_88_8 11
#define ENVIRONMENT_LABEL_88_3 20
#define DEBUGGING_LABEL_88_2 19
#define OBJECT_88_3 18
#define OBJECT_88_2 17
#define OBJECT_88_1 16
#define OBJECT_88_0 15
#define EXECUTE_CACHE_88_9 13
#define FREE_REFERENCES_LABEL_88_0 12
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd43;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd25;
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
  machine_word Wrd27;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_88_4);
      goto closure_block_first_offset_5;

    case 2:
      current_block = (Rpc - LABEL_88_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_88_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_88_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_block_first_offset_11)
DEFLABEL (closure_block_first_offset_5)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [17]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (Rsp [1]);
  if ((Wrd24.Obj) == (Wrd25.Obj))
    goto label_17;
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_16;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd35.Lng))))
    goto label_16;
  (Wrd27.Obj) = ((Wrd33.pObj) [18]);

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_13;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd51.Lng))))
    goto label_13;
  (Wrd43.Obj) = ((Wrd49.pObj) [18]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_9]));

DEFLABEL (label_13)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.Obj) = (current_block [OBJECT_88_3]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_8]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 2);

DEFLABEL (label_9)
  (Wrd43.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_16)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_88_3]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 2);

DEFLABEL (label_8)
  (Wrd27.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  (Wrd27.Obj) = (current_block [OBJECT_88_2]);
  goto label_15;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_88_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (Wrd27.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define LABEL_89_6 7
#define LABEL_89_7 9
#define LABEL_89_8 11
#define LABEL_89_9 13
#define LABEL_89_10 15
#define ENVIRONMENT_LABEL_89_3 23
#define DEBUGGING_LABEL_89_2 22
#define OBJECT_89_2 21
#define OBJECT_89_1 20
#define OBJECT_89_0 19
#define FREE_REFERENCE_89_1 17
#define FREE_REFERENCE_89_0 18
#define FREE_REFERENCES_LABEL_89_0 16
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
blocks_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd57;
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
  machine_word Wrd7;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_89_4);
      goto block_nearest_closure_ancestor_8;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_89_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_89_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_89_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_89_9);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_89_10);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_nearest_closure_ancestor_16)
DEFLABEL (block_nearest_closure_ancestor_8)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  goto loop_6;

DEFLABEL (loop_17)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_89_5);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_89_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_32;
  Wrd7 = Wrd11;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_30;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_30;
  (Wrd13.Obj) = ((Wrd19.pObj) [3]);

DEFLABEL (label_29)
  (Wrd29.Obj) = (* (Rsp++));
  if ((Wrd13.Obj) == (Wrd29.Obj))
    goto label_26;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_89_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_25;
  Wrd30 = Wrd34;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_23;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd44.Lng))))
    goto label_23;
  (Wrd36.Obj) = ((Wrd42.pObj) [3]);

DEFLABEL (label_22)
  (Wrd52.Obj) = (* (Rsp++));
  if ((Wrd36.Obj) == (Wrd52.Obj))
    goto label_19;

DEFLABEL (label_20)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_19)
  Rvl = (Rsp [1]);

DEFLABEL (label_18)
DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_89_0]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_10]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_13)
  (Wrd36.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89_9])), (Wrd31.pObj));

DEFLABEL (label_12)
  (Wrd30.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd57.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd57.Obj);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd68.uLng) == 10))
    goto label_28;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd66.Lng))))
    goto label_28;
  (Wrd58.Obj) = ((Wrd64.pObj) [4]);

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd58.Obj);
  goto loop_6;

DEFLABEL (label_28)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.Obj) = (current_block [OBJECT_89_2]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_14)
  (Wrd58.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_89_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89_6])), (Wrd8.pObj));

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6 3
#define LABEL_7 5
#define LABEL_4 7
#define LABEL_11 9
#define LABEL_5 11
#define LABEL_9 13
#define LABEL_10 15
#define LABEL_13 17
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_19 25
#define LABEL_18 27
#define LABEL_21 29
#define LABEL_23 31
#define LABEL_22 33
#define LABEL_24 35
#define LABEL_25 37
#define LABEL_30 39
#define LABEL_26 41
#define LABEL_28 43
#define LABEL_34 45
#define LABEL_29 47
#define LABEL_35 49
#define LABEL_32 51
#define LABEL_38 53
#define LABEL_33 55
#define LABEL_39 57
#define LABEL_36 59
#define LABEL_42 61
#define LABEL_37 63
#define LABEL_43 65
#define LABEL_40 67
#define LABEL_46 69
#define LABEL_41 71
#define LABEL_47 73
#define LABEL_44 75
#define LABEL_50 77
#define LABEL_45 79
#define LABEL_51 81
#define LABEL_48 83
#define LABEL_49 85
#define LABEL_52 87
#define LABEL_53 89
#define LABEL_54 91
#define LABEL_55 93
#define ENVIRONMENT_LABEL_3 152
#define DEBUGGING_LABEL_2 151
#define PURIFICATION_ROOT 150
#define OBJECT_35 149
#define OBJECT_34 148
#define OBJECT_33 147
#define OBJECT_32 146
#define OBJECT_31 145
#define OBJECT_30 144
#define OBJECT_29 143
#define OBJECT_28 142
#define OBJECT_27 141
#define OBJECT_26 140
#define OBJECT_25 139
#define OBJECT_24 138
#define OBJECT_23 137
#define OBJECT_22 136
#define OBJECT_21 135
#define OBJECT_20 134
#define OBJECT_19 133
#define OBJECT_18 132
#define OBJECT_17 131
#define OBJECT_16 130
#define OBJECT_15 129
#define OBJECT_14 128
#define OBJECT_13 127
#define OBJECT_12 126
#define OBJECT_11 125
#define OBJECT_10 124
#define OBJECT_9 123
#define OBJECT_8 122
#define OBJECT_7 121
#define OBJECT_6 120
#define OBJECT_5 119
#define OBJECT_4 118
#define OBJECT_3 117
#define OBJECT_2 116
#define OBJECT_1 115
#define OBJECT_0 114
#define EXECUTE_CACHE_31 95
#define EXECUTE_CACHE_27 97
#define EXECUTE_CACHE_20 99
#define EXECUTE_CACHE_12 101
#define EXECUTE_CACHE_8 103
#define FREE_REFERENCE_4 106
#define FREE_REFERENCE_3 107
#define FREE_REFERENCE_2 108
#define FREE_REFERENCE_1 109
#define FREE_REFERENCE_0 110
#define GLOBAL_EXECUTE_CACHE_14 112
#define FREE_REFERENCES_LABEL_0 94
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
blocks_so_0d5b5895a9e41b36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto label_33;

    case 1:
      current_block = (Rpc - LABEL_7);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_4);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto label_39;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_30);
      goto label_40;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_15;

    case 21:
      current_block = (Rpc - LABEL_34);
      goto label_41;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_13;

    case 23:
      current_block = (Rpc - LABEL_35);
      goto label_42;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_18;

    case 25:
      current_block = (Rpc - LABEL_38);
      goto label_43;

    case 26:
      current_block = (Rpc - LABEL_33);
      goto continuation_16;

    case 27:
      current_block = (Rpc - LABEL_39);
      goto label_44;

    case 28:
      current_block = (Rpc - LABEL_36);
      goto continuation_21;

    case 29:
      current_block = (Rpc - LABEL_42);
      goto label_45;

    case 30:
      current_block = (Rpc - LABEL_37);
      goto continuation_19;

    case 31:
      current_block = (Rpc - LABEL_43);
      goto label_46;

    case 32:
      current_block = (Rpc - LABEL_40);
      goto continuation_24;

    case 33:
      current_block = (Rpc - LABEL_46);
      goto label_47;

    case 34:
      current_block = (Rpc - LABEL_41);
      goto continuation_22;

    case 35:
      current_block = (Rpc - LABEL_47);
      goto label_48;

    case 36:
      current_block = (Rpc - LABEL_44);
      goto continuation_27;

    case 37:
      current_block = (Rpc - LABEL_50);
      goto label_49;

    case 38:
      current_block = (Rpc - LABEL_45);
      goto continuation_25;

    case 39:
      current_block = (Rpc - LABEL_51);
      goto label_50;

    case 40:
      current_block = (Rpc - LABEL_48);
      goto continuation_30;

    case 41:
      current_block = (Rpc - LABEL_49);
      goto continuation_28;

    case 42:
      current_block = (Rpc - LABEL_52);
      goto label_51;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto label_54;

    case 44:
      current_block = (Rpc - LABEL_54);
      goto label_55;

    case 45:
      current_block = (Rpc - LABEL_55);
      goto expression_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_32)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_54])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_55)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_54)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	0,
	0,
	2,
	1,
	0,
	1,
	2,
	0,
	0,
	1,
	0,
	2,
	2,
	1,
	0,
	0,
	1,
	1,
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
	2,
	1,
	0,
	1,
	2,
	3,
	2,
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
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 89)
      goto label_53;
    blocks = (current_block [OBJECT_35]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_53])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_53)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_93;
  Wrd12 = Wrd16;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_91;
  Wrd19 = Wrd23;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

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
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_89;
  Wrd11 = Wrd15;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_87;
  Wrd6 = Wrd10;

DEFLABEL (label_86)
  Wrd5 = Wrd6;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_85;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd24.Lng))))
    goto label_85;
  (Wrd19.Obj) = (current_block [OBJECT_6]);
  ((Wrd22.pObj) [6]) = (Wrd19.Obj);

DEFLABEL (label_84)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_83;
  Wrd9 = Wrd13;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_81;
  Wrd8 = Wrd12;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_79;
  Wrd12 = Wrd16;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_77;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_77;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_76)
  (Wrd19.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_75;
  Wrd12 = Wrd16;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_73;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_73;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_72)
  (Wrd19.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_71;
  Wrd12 = Wrd16;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_69;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_69;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_68)
  (Wrd19.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_67;
  Wrd12 = Wrd16;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_65;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_65;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_64)
  (Wrd19.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_63;
  Wrd12 = Wrd16;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_61;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_61;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_60)
  (Wrd19.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_59;
  Wrd12 = Wrd16;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_57;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_57;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_56)
  (Wrd19.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd5.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_33]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (label_57)
  (Wrd15.Obj) = (current_block [OBJECT_21]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd13.pObj));

DEFLABEL (label_49)
  (Wrd12.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd15.Obj) = (current_block [OBJECT_21]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd13.pObj));

DEFLABEL (label_47)
  (Wrd12.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd15.Obj) = (current_block [OBJECT_21]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd13.pObj));

DEFLABEL (label_45)
  (Wrd12.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd15.Obj) = (current_block [OBJECT_21]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd13.pObj));

DEFLABEL (label_43)
  (Wrd12.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd15.Obj) = (current_block [OBJECT_21]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd13.pObj));

DEFLABEL (label_41)
  (Wrd12.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd15.Obj) = (current_block [OBJECT_21]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd13.pObj));

DEFLABEL (label_40)
  (Wrd12.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd9.pObj));

DEFLABEL (label_39)
  (Wrd8.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd10.pObj));

DEFLABEL (label_38)
  (Wrd9.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd27.Obj) = (current_block [OBJECT_7]);
  (Wrd28.Obj) = (current_block [OBJECT_6]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (label_37)
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd7.pObj));

DEFLABEL (label_36)
  (Wrd6.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_35)
  (Wrd11.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd20.pObj));

DEFLABEL (label_34)
  (Wrd19.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6])), (Wrd13.pObj));

DEFLABEL (label_33)
  (Wrd12.Obj) = Rvl;
  goto label_92;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_blocks_so_0d5b5895a9e41b36 [89] =
  {
    { "blocks_so_code_1", 1, blocks_so_code_1 },
    { "blocks_so_code_2", 1, blocks_so_code_2 },
    { "blocks_so_code_3", 1, blocks_so_code_3 },
    { "blocks_so_code_4", 1, blocks_so_code_4 },
    { "blocks_so_code_5", 1, blocks_so_code_5 },
    { "blocks_so_code_6", 1, blocks_so_code_6 },
    { "blocks_so_code_7", 1, blocks_so_code_7 },
    { "blocks_so_code_8", 1, blocks_so_code_8 },
    { "blocks_so_code_9", 1, blocks_so_code_9 },
    { "blocks_so_code_10", 1, blocks_so_code_10 },
    { "blocks_so_code_11", 1, blocks_so_code_11 },
    { "blocks_so_code_12", 1, blocks_so_code_12 },
    { "blocks_so_code_13", 1, blocks_so_code_13 },
    { "blocks_so_code_14", 1, blocks_so_code_14 },
    { "blocks_so_code_15", 1, blocks_so_code_15 },
    { "blocks_so_code_16", 1, blocks_so_code_16 },
    { "blocks_so_code_17", 1, blocks_so_code_17 },
    { "blocks_so_code_18", 1, blocks_so_code_18 },
    { "blocks_so_code_19", 1, blocks_so_code_19 },
    { "blocks_so_code_20", 1, blocks_so_code_20 },
    { "blocks_so_code_21", 1, blocks_so_code_21 },
    { "blocks_so_code_22", 1, blocks_so_code_22 },
    { "blocks_so_code_23", 1, blocks_so_code_23 },
    { "blocks_so_code_24", 1, blocks_so_code_24 },
    { "blocks_so_code_25", 1, blocks_so_code_25 },
    { "blocks_so_code_26", 1, blocks_so_code_26 },
    { "blocks_so_code_27", 1, blocks_so_code_27 },
    { "blocks_so_code_28", 1, blocks_so_code_28 },
    { "blocks_so_code_29", 1, blocks_so_code_29 },
    { "blocks_so_code_30", 1, blocks_so_code_30 },
    { "blocks_so_code_31", 1, blocks_so_code_31 },
    { "blocks_so_code_32", 1, blocks_so_code_32 },
    { "blocks_so_code_33", 1, blocks_so_code_33 },
    { "blocks_so_code_34", 1, blocks_so_code_34 },
    { "blocks_so_code_35", 1, blocks_so_code_35 },
    { "blocks_so_code_36", 1, blocks_so_code_36 },
    { "blocks_so_code_37", 1, blocks_so_code_37 },
    { "blocks_so_code_38", 1, blocks_so_code_38 },
    { "blocks_so_code_39", 1, blocks_so_code_39 },
    { "blocks_so_code_40", 1, blocks_so_code_40 },
    { "blocks_so_code_41", 1, blocks_so_code_41 },
    { "blocks_so_code_42", 1, blocks_so_code_42 },
    { "blocks_so_code_43", 1, blocks_so_code_43 },
    { "blocks_so_code_44", 1, blocks_so_code_44 },
    { "blocks_so_code_45", 1, blocks_so_code_45 },
    { "blocks_so_code_46", 1, blocks_so_code_46 },
    { "blocks_so_code_47", 1, blocks_so_code_47 },
    { "blocks_so_code_48", 1, blocks_so_code_48 },
    { "blocks_so_code_49", 25, blocks_so_code_49 },
    { "blocks_so_code_50", 15, blocks_so_code_50 },
    { "blocks_so_code_51", 16, blocks_so_code_51 },
    { "blocks_so_code_52", 3, blocks_so_code_52 },
    { "blocks_so_code_53", 2, blocks_so_code_53 },
    { "blocks_so_code_54", 6, blocks_so_code_54 },
    { "blocks_so_code_55", 2, blocks_so_code_55 },
    { "blocks_so_code_56", 2, blocks_so_code_56 },
    { "blocks_so_code_57", 13, blocks_so_code_57 },
    { "blocks_so_code_58", 4, blocks_so_code_58 },
    { "blocks_so_code_59", 3, blocks_so_code_59 },
    { "blocks_so_code_60", 3, blocks_so_code_60 },
    { "blocks_so_code_61", 3, blocks_so_code_61 },
    { "blocks_so_code_62", 4, blocks_so_code_62 },
    { "blocks_so_code_63", 3, blocks_so_code_63 },
    { "blocks_so_code_64", 5, blocks_so_code_64 },
    { "blocks_so_code_65", 5, blocks_so_code_65 },
    { "blocks_so_code_66", 1, blocks_so_code_66 },
    { "blocks_so_code_67", 4, blocks_so_code_67 },
    { "blocks_so_code_68", 2, blocks_so_code_68 },
    { "blocks_so_code_69", 3, blocks_so_code_69 },
    { "blocks_so_code_70", 9, blocks_so_code_70 },
    { "blocks_so_code_71", 8, blocks_so_code_71 },
    { "blocks_so_code_72", 4, blocks_so_code_72 },
    { "blocks_so_code_73", 4, blocks_so_code_73 },
    { "blocks_so_code_74", 3, blocks_so_code_74 },
    { "blocks_so_code_75", 4, blocks_so_code_75 },
    { "blocks_so_code_76", 3, blocks_so_code_76 },
    { "blocks_so_code_77", 5, blocks_so_code_77 },
    { "blocks_so_code_78", 4, blocks_so_code_78 },
    { "blocks_so_code_79", 1, blocks_so_code_79 },
    { "blocks_so_code_80", 3, blocks_so_code_80 },
    { "blocks_so_code_81", 3, blocks_so_code_81 },
    { "blocks_so_code_82", 3, blocks_so_code_82 },
    { "blocks_so_code_83", 2, blocks_so_code_83 },
    { "blocks_so_code_84", 4, blocks_so_code_84 },
    { "blocks_so_code_85", 15, blocks_so_code_85 },
    { "blocks_so_code_86", 1, blocks_so_code_86 },
    { "blocks_so_code_87", 2, blocks_so_code_87 },
    { "blocks_so_code_88", 5, blocks_so_code_88 },
    { "blocks_so_code_89", 7, blocks_so_code_89 }
  };

int
decl_blocks_so_0d5b5895a9e41b36 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_blocks_so_0d5b5895a9e41b36);
  return (0);
}

DECLARE_COMPILED_CODE ("blocks.so", 46, decl_blocks_so_0d5b5895a9e41b36, blocks_so_0d5b5895a9e41b36)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_blocks_so_data_0d5b5895a9e41b36 [7515] =
  "\x9b\x01\x86\x01\xe4\x10\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9"
  "\x82\x22\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xc3\xbb\x1d\x82\x22"
  "\x29\x21\x9f\x2b\xbc\x1d\xb0\x83\x88\xb1\x83\x22\x29\x21\x9e\x2b"
  "\xbd\x1d\xb0\x84\x88\xb3\x1d\x83\x22\x29\x21\x9f\x2b\xbe\x1d\xb0"
  "\x85\x88\xb1\x84\x22\x29\x21\x9e\x2b\xbf\x1d\xb0\x86\x88\xb3\x1d"
  "\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x85\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x85\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x1d\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x02\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x02\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x02"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x02\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb3\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x02\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x02\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\xb3\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d"
  "\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x02\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x02\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x02\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x82\x0d\x1c\x83\x0d\x1c"
  "\x84\x0d\x1c\x0d\x1c\x86\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d"
  "\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c"
  "\x02\x0d\x1c\x0d\x1c\x08\x89\x02\x0d\x1c\x0d\x1c\x08\x89\x02\x0d"
  "\x1c\x0d\x1c\x08\x89\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d"
  "\x1c\x08\xb1\x02\xc2\x1c\x85\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x84\x0d\x08\x02\xb1\x02\x1b\x83"
  "\x0d\x1c\x25\x0d\x1c\x0d\x0d\x0d\x1c\x1b\x24\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x1d\x0c\x80\x02\x1b\x81\xb1\x82\x0d\x1c"
  "\x1b\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\xb1\x80\x1b\x24\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\xb1\x02\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\xc1\x1c\xb1\x02\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\xc1\x1c\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x82\x0d\x1c\x0d\x1c\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb1\x82\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\xb1\x82\x0d\x1c\x24\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x82\x0d\x1c\x24\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x82\x1b"
  "\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x82\x1b\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x82\xb1\x83\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x80\xb1\x02\x1b\x0d\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\x1c\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x83\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x83"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x83\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\xb1\x83\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x83\x08"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x83\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x82\xb1\x83\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x1b"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x83\xb1\x86\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x84\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\xb1\x02\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x1b\x24\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb1\x02\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\xb1\x02\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x02\x80\xb1\x02\x1b\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x83\x85\xb3\x84\x02\x80"
  "\xb1\x02\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22"
  "\x29\x21\x9e\x2b\xbb\x1d\xb0\x02\x88\x02\x80\xb1\x02\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x80\xb1\x02\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x83\xb1\x82\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x17\xb8\x88\xb0\x1b\xb1"
  "\x2a\x1b\x2a\x1b\x2a\xb3\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b"
  "\x0d\x1b\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x17\x0d\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x1b\x83"
  "\x0d\x1c\x1b\x0d\x1c\x1b\x1b\x1b\x1b\x1b\x1b\x08\x8d\x1b\x0d\x0d"
  "\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d\x0d\x0d\x0d\x9a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x9a\x1b\x2a\x0d\x1b\x99\x1b\x2a\x1e\x99\xc3\x85\x1b"
  "\x2a\x0d\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b"
  "\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b"
  "\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b"
  "\x0d\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb5\x2a\xb4"
  "\x2a\xb2\x2a\x17\xc3\x1b\x1b\x28\x0d\x26\x0d\x1b\x1b\x0d\x1b\x24"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2f\x62\x61\x73\x65\x2f\x62\x6c\x6f\x63\x6b\x73\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0b\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x2f\x04\x83\x04\x03\x02\x0c\x76\x65\x63\x74\x6f"
  "\x72\x2d\x73\x65\x74\x21\x02\x30\x04\x84\x06\x03\x02\x31\x04\x83"
  "\x04\x03\x02\x02\x32\x04\x84\x06\x03\x02\x33\x04\x83\x04\x03\x02"
  "\x02\x34\x04\x84\x06\x03\x09\x02\x08\x35\x04\x83\x04\x03\x0a\x02"
  "\x09\x02\x36\x04\x84\x06\x03\x0b\x02\x0a\x37\x04\x83\x04\x03\x0c"
  "\x02\x0b\x02\x38\x04\x84\x06\x03\x0d\x02\x0c\x08\x39\x04\x83\x04"
  "\x03\x0e\x02\x0d\x02\x08\x3a\x04\x84\x06\x03\x0f\x02\x0e\x09\x3b"
  "\x04\x83\x04\x03\x10\x02\x0f\x02\x09\x3c\x04\x84\x06\x03\x11\x02"
  "\x10\x0a\x3d\x04\x83\x04\x03\x12\x02\x11\x02\x0a\x3e\x04\x84\x06"
  "\x03\x13\x02\x12\x0b\x3f\x04\x83\x04\x03\x14\x02\x13\x02\x0b\x40"
  "\x04\x84\x06\x03\x15\x02\x14\x0c\x41\x04\x83\x04\x03\x16\x02\x15"
  "\x02\x0c\x42\x04\x84\x06\x03\x17\x02\x16\x0d\x43\x04\x83\x04\x03"
  "\x18\x02\x17\x02\x0d\x44\x04\x84\x06\x03\x19\x02\x18\x0e\x45\x04"
  "\x83\x04\x03\x1a\x02\x19\x02\x0e\x46\x04\x84\x06\x03\x1b\x02\x1a"
  "\x0f\x47\x04\x83\x04\x03\x1c\x02\x1b\x02\x0f\x48\x04\x84\x06\x03"
  "\x1d\x02\x1c\x10\x49\x04\x83\x04\x03\x1e\x02\x1d\x02\x10\x4a\x04"
  "\x84\x06\x03\x1f\x02\x1e\x11\x4b\x04\x83\x04\x03\x20\x02\x1f\x02"
  "\x11\x4c\x04\x84\x06\x03\x21\x02\x20\x11\x4d\x04\x83\x04\x03\x22"
  "\x02\x21\x02\x11\x4e\x04\x84\x06\x03\x23\x02\x22\x12\x4f\x04\x83"
  "\x04\x03\x24\x02\x23\x02\x12\x50\x04\x84\x06\x03\x25\x02\x24\x12"
  "\x51\x04\x83\x04\x03\x26\x02\x25\x02\x12\x52\x04\x84\x06\x03\x27"
  "\x02\x26\x13\x53\x04\x83\x04\x03\x28\x02\x27\x02\x13\x54\x04\x84"
  "\x06\x03\x29\x02\x28\x13\x55\x04\x83\x04\x03\x2a\x02\x29\x02\x13"
  "\x56\x04\x84\x06\x03\x2b\x02\x2a\x14\x57\x04\x83\x04\x03\x2c\x02"
  "\x2b\x02\x14\x58\x04\x84\x06\x03\x2d\x02\x2c\x15\x59\x04\x83\x04"
  "\x03\x2e\x02\x2d\x02\x15\x5a\x04\x84\x06\x03\x2f\x02\x2e\x16\x5b"
  "\x04\x83\x04\x03\x30\x02\x2f\x02\x16\x5c\x04\x84\x06\x03\x31\x02"
  "\x30\x17\x5d\x04\x83\x04\x03\x32\x02\x31\x02\x17\x5e\x04\x84\x06"
  "\x03\x33\x02\x32\x0b\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x34"
  "\x0d\x62\x6c\x6f\x63\x6b\x2d\x70\x61\x72\x65\x6e\x74\x35\x0f\x62"
  "\x6c\x6f\x63\x6b\x2d\x63\x68\x69\x6c\x64\x72\x65\x6e\x36\x18\x62"
  "\x6c\x6f\x63\x6b\x2d\x64\x69\x73\x6f\x77\x6e\x65\x64\x2d\x63\x68"
  "\x69\x6c\x64\x72\x65\x6e\x37\x11\x62\x6c\x6f\x63\x6b\x2d\x66\x72"
  "\x61\x6d\x65\x2d\x73\x69\x7a\x65\x38\x10\x62\x6c\x6f\x63\x6b\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x39\x08\x16\x62\x6c\x6f\x63"
  "\x6b\x2d\x62\x6f\x75\x6e\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x73\x3a\x09\x15\x62\x6c\x6f\x63\x6b\x2d\x66\x72\x65\x65\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x73\x3b\x0a\x25\x62\x6c\x6f\x63\x6b"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x2d\x6e\x6f\x6e\x74\x72"
  "\x61\x6e\x73\x69\x74\x69\x76\x65\x6c\x79\x2d\x66\x72\x65\x65\x3c"
  "\x0b\x13\x62\x6c\x6f\x63\x6b\x2d\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x73\x3d\x0c\x13\x62\x6c\x6f\x63\x6b\x2d\x61\x70\x70"
  "\x6c\x69\x63\x61\x74\x69\x6f\x6e\x73\x3e\x0d\x19\x62\x6c\x6f\x63"
  "\x6b\x2d\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x73\x3f\x0e\x16\x62\x6c\x6f\x63\x6b\x2d\x63\x6c\x6f"
  "\x73\x75\x72\x65\x2d\x6f\x66\x66\x73\x65\x74\x73\x40\x0f\x15\x62"
  "\x6c\x6f\x63\x6b\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69"
  "\x6e\x66\x6f\x41\x10\x11\x62\x6c\x6f\x63\x6b\x2d\x73\x74\x61\x63"
  "\x6b\x2d\x6c\x69\x6e\x6b\x42\x13\x62\x6c\x6f\x63\x6b\x2d\x73\x68"
  "\x61\x72\x65\x64\x2d\x62\x6c\x6f\x63\x6b\x43\x11\x13\x62\x6c\x6f"
  "\x63\x6b\x2d\x73\x74\x61\x74\x69\x63\x2d\x6c\x69\x6e\x6b\x3f\x44"
  "\x13\x62\x6c\x6f\x63\x6b\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x75\x6d"
  "\x62\x65\x72\x45\x12\x15\x62\x6c\x6f\x63\x6b\x2d\x70\x6f\x70\x70"
  "\x69\x6e\x67\x2d\x6c\x69\x6d\x69\x74\x73\x46\x15\x62\x6c\x6f\x63"
  "\x6b\x2d\x67\x72\x61\x66\x74\x65\x64\x2d\x62\x6c\x6f\x63\x6b\x73"
  "\x47\x13\x14\x62\x6c\x6f\x63\x6b\x2d\x70\x6f\x70\x70\x69\x6e\x67"
  "\x2d\x6c\x69\x6d\x69\x74\x48\x14\x15\x62\x6c\x6f\x63\x6b\x2d\x6c"
  "\x61\x79\x6f\x75\x74\x2d\x66\x72\x6f\x7a\x65\x6e\x3f\x49\x15\x12"
  "\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2d\x63\x68\x65\x63\x6b"
  "\x73\x4a\x16\x13\x62\x6c\x6f\x63\x6b\x2d\x72\x61\x6e\x67\x65\x2d"
  "\x63\x68\x65\x63\x6b\x73\x4b\x17\x0c\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x72\x65\x66\x4c\x0b\x72\x76\x61\x6c\x75\x65\x2d\x74\x61\x67"
  "\x4d\x02\x04\x08\x61\x70\x70\x65\x6e\x64\x21\x02\x77\x34\x81\x87"
  "\x02\x76\x32\x81\x87\x02\x75\x30\x81\x87\x02\x74\x2e\x81\x87\x02"
  "\x73\x2c\x81\x87\x02\x72\x2a\x81\x87\x02\x71\x28\x81\x87\x02\x70"
  "\x26\x81\x87\x02\x6f\x24\x81\x87\x02\x6e\x22\x81\x87\x02\x6d\x20"
  "\x81\x87\x02\x6c\x1e\x81\x87\x02\x6b\x1c\x81\x87\x02\x6a\x1a\x81"
  "\x87\x02\x69\x18\x81\x87\x02\x68\x16\x81\x87\x02\x67\x14\x81\x87"
  "\x02\x66\x12\x81\x87\x02\x65\x10\x81\x87\x02\x64\x0e\x81\x87\x02"
  "\x63\x0c\x81\x85\x02\x62\x0a\x81\x83\x02\x61\x08\x81\x87\x02\x60"
  "\x06\x81\x87\x02\x5f\x04\x83\x04\x33\x68\x4e\x02\x33\x08\x75\x6e"
  "\x6b\x6e\x6f\x77\x6e\x17\x16\x4c\x09\x2a\x62\x6c\x6f\x63\x6b\x73"
  "\x2a\x4f\x02\x0c\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x73\x50"
  "\x1f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x67\x65\x6e\x65\x72\x61"
  "\x74\x65\x2d\x74\x79\x70\x65\x2d\x63\x68\x65\x63\x6b\x73\x3f\x20"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x67\x65\x6e\x65\x72\x61\x74"
  "\x65\x2d\x72\x61\x6e\x67\x65\x2d\x63\x68\x65\x63\x6b\x73\x3f\x0a"
  "\x62\x6c\x6f\x63\x6b\x2d\x74\x61\x67\x51\x4f\x06\x04\x1c\x65\x6e"
  "\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x2f\x6e\x61\x6d\x65\x2d\x3e"
  "\x65\x6e\x75\x6d\x65\x72\x61\x6e\x64\x52\x02\x86\x01\x20\x81\x87"
  "\x02\x85\x01\x1e\x81\x87\x02\x84\x01\x1c\x81\x87\x02\x83\x01\x1a"
  "\x81\x87\x02\x82\x01\x18\x81\x8b\x02\x81\x01\x16\x81\x8b\x02\x80"
  "\x01\x14\x81\x8b\x02\x7f\x12\x81\x89\x02\x7e\x10\x81\x89\x02\x7d"
  "\x0e\x81\x85\x02\x7c\x0c\x81\x85\x02\x7b\x0a\x81\x87\x02\x7a\x08"
  "\x81\x89\x02\x79\x06\x81\x89\x02\x78\x04\x84\x06\x1f\x36\x53\x02"
  "\x34\x0f\x02\x02\x20\x08\x4c\x06\x62\x6c\x6f\x63\x6b\x54\x50\x0e"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x55\x03\x03"
  "\x0f\x73\x79\x6d\x62\x6f\x6c\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04"
  "\x0f\x75\x6e\x70\x61\x72\x73\x65\x2d\x6f\x62\x6a\x65\x63\x74\x04"
  "\x12\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x04\x0f\x75\x6e\x70\x61\x72\x73\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x05\x96\x01\x22\x81\x87\x02\x95\x01\x20\x81\x89\x02\x94"
  "\x01\x1e\x81\x87\x02\x93\x01\x1c\x81\x89\x02\x92\x01\x1a\x81\x87"
  "\x02\x91\x01\x18\x81\x85\x02\x90\x01\x16\x81\x85\x02\x8f\x01\x14"
  "\x81\x89\x02\x8e\x01\x12\x81\x87\x02\x8d\x01\x10\x81\x87\x02\x8c"
  "\x01\x0e\x81\x89\x02\x8b\x01\x0c\x81\x89\x02\x8a\x01\x0a\x81\x87"
  "\x02\x89\x01\x08\x84\x06\x88\x01\x06\x81\x85\x02\x87\x01\x04\x84"
  "\x06\x21\x3a\x56\x02\x35\x51\x02\x99\x01\x08\x81\x85\x02\x98\x01"
  "\x06\x81\x83\x02\x97\x01\x04\x83\x04\x07\x0f\x57\x02\x36\x02\x0d"
  "\x9b\x01\x06\x81\x87\x02\x9a\x01\x04\x84\x06\x05\x0c\x58\x02\x37"
  "\x04\x63\x64\x72\x59\x0e\x04\x05\x61\x73\x73\x71\x03\x14\x73\x63"
  "\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x03\xa1\x01\x0e\x81\x87\x02\xa0\x01\x0c\x81\x87\x02\x9f\x01"
  "\x0a\x81\x87\x02\x9e\x01\x08\x81\x85\x02\x9d\x01\x06\x81\x87\x02"
  "\x9c\x01\x04\x84\x06\x0d\x19\x5a\x02\x38\x4a\x02\x05\x17\x62\x6c"
  "\x6f\x63\x6b\x2f\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x63\x68\x65"
  "\x63\x6b\x73\x3f\x5b\x02\xa3\x01\x06\x81\x87\x02\xa2\x01\x04\x84"
  "\x06\x05\x0d\x5c\x02\x39\x4b\x02\x05\x5b\x02\xa5\x01\x06\x81\x87"
  "\x02\xa4\x01\x04\x84\x06\x05\x0d\x5d\x02\x3a\x59\x04\x63\x61\x72"
  "\x5e\x03\x09\x62\x6f\x6f\x6c\x65\x61\x6e\x3f\x03\x1b\x73\x63\x6f"
  "\x64\x65\x2f\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x3f\x03\x19\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d"
  "\x65\x04\x05\x6d\x65\x6d\x71\x05\xb2\x01\x1c\x81\x89\x02\xb1\x01"
  "\x1a\x81\x89\x02\xb0\x01\x18\x81\x8b\x02\xaf\x01\x16\x81\x8d\x02"
  "\xae\x01\x14\x81\x89\x02\xad\x01\x12\x81\x89\x02\xac\x01\x10\x81"
  "\x89\x02\xab\x01\x0e\x81\x89\x02\xaa\x01\x0c\x81\x89\x02\xa9\x01"
  "\x0a\x81\x89\x02\xa8\x01\x08\x81\x89\x02\xa7\x01\x06\x81\x87\x02"
  "\xa6\x01\x04\x85\x08\x1b\x2a\x5f\x02\x3b\x0e\x62\x6c\x6f\x63\x6b"
  "\x2d\x74\x79\x70\x65\x2f\x69\x63\x60\x16\x62\x6c\x6f\x63\x6b\x2d"
  "\x74\x79\x70\x65\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x61"
  "\x03\xb6\x01\x0a\x81\x83\x02\xb5\x01\x08\x81\x83\x02\xb4\x01\x06"
  "\x81\x83\x02\xb3\x01\x04\x83\x04\x09\x12\x62\x02\x3c\x13\x62\x6c"
  "\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f\x63\x6c\x6f\x73\x75\x72\x65"
  "\x63\x02\xb9\x01\x08\x81\x85\x02\xb8\x01\x06\x81\x83\x02\xb7\x01"
  "\x04\x83\x04\x07\x0f\x64\x02\x3d\x11\x62\x6c\x6f\x63\x6b\x2d\x74"
  "\x79\x70\x65\x2f\x73\x74\x61\x63\x6b\x65\x02\xbc\x01\x08\x81\x85"
  "\x02\xbb\x01\x06\x81\x83\x02\xba\x01\x04\x83\x04\x07\x0f\x66\x02"
  "\x3e\x18\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x67\x02\xbf\x01\x08\x81\x85"
  "\x02\xbe\x01\x06\x81\x83\x02\xbd\x01\x04\x83\x04\x07\x0f\x68\x02"
  "\x3f\x65\x02\x03\x0e\x73\x74\x61\x63\x6b\x2d\x70\x61\x72\x65\x6e"
  "\x74\x3f\x69\x02\xc3\x01\x0a\x81\x83\x02\xc2\x01\x08\x81\x85\x02"
  "\xc1\x01\x06\x81\x83\x02\xc0\x01\x04\x83\x04\x09\x14\x6a\x02\x40"
  "\x65\x02\x03\x69\x02\xc6\x01\x08\x81\x85\x02\xc5\x01\x06\x81\x83"
  "\x02\xc4\x01\x04\x83\x04\x07\x11\x6b\x02\x41\x65\x02\xcb\x01\x0c"
  "\x81\x85\x02\xca\x01\x0a\x81\x85\x02\xc9\x01\x08\x81\x83\x02\xc8"
  "\x01\x06\x81\x83\x02\xc7\x01\x04\x83\x04\x0b\x14\x6c\x02\x42\x08"
  "\x55\x1f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63\x61\x63\x68\x65"
  "\x2d\x66\x72\x65\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x3f"
  "\x03\xd0\x01\x0c\x81\x83\x02\xcf\x01\x0a\x81\x85\x02\xce\x01\x08"
  "\x81\x85\x02\xcd\x01\x06\x81\x83\x02\xcc\x01\x04\x83\x04\x0b\x15"
  "\x6d\x02\x43\x04\x10\x62\x6c\x6f\x63\x6b\x2d\x61\x6e\x63\x65\x73"
  "\x74\x6f\x72\x3f\x6e\x02\xd1\x01\x04\x84\x06\x03\x0a\x6f\x02\x44"
  "\xd5\x01\x0a\x81\x87\x02\xd4\x01\x08\x81\x87\x02\xd3\x01\x06\x81"
  "\x85\x02\xd2\x01\x04\x84\x06\x09\x0f\x70\x02\x45\xd7\x01\x06\x81"
  "\x85\x02\xd6\x01\x04\x84\x06\x05\x0b\x71\x02\x46\xda\x01\x08\x81"
  "\x87\x02\xd9\x01\x06\x81\x85\x02\xd8\x01\x04\x84\x06\x07\x0d\x72"
  "\x02\x47\x59\x5e\x03\x0f\x62\x6c\x6f\x63\x6b\x2d\x61\x6e\x63\x65"
  "\x73\x74\x72\x79\x73\x02\xe3\x01\x14\x81\x87\x02\xe2\x01\x12\x81"
  "\x87\x02\xe1\x01\x10\x81\x87\x02\xe0\x01\x0e\x81\x89\x02\xdf\x01"
  "\x0c\x81\x87\x02\xde\x01\x0a\x81\x87\x02\xdd\x01\x08\x81\x87\x02"
  "\xdc\x01\x06\x81\x87\x02\xdb\x01\x04\x84\x06\x13\x1b\x74\x02\x48"
  "\x59\x5e\x03\x73\x02\xeb\x01\x12\x81\x85\x02\xea\x01\x10\x81\x85"
  "\x02\xe9\x01\x0e\x81\x87\x02\xe8\x01\x0c\x81\x85\x02\xe7\x01\x0a"
  "\x81\x85\x02\xe6\x01\x08\x81\x85\x02\xe5\x01\x06\x81\x85\x02\xe4"
  "\x01\x04\x84\x06\x11\x19\x59\x02\x49\xef\x01\x0a\x81\x85\x02\xee"
  "\x01\x08\x81\x85\x02\xed\x01\x06\x81\x83\x02\xec\x01\x04\x83\x04"
  "\x09\x0f\x75\x02\x4a\xf3\x01\x0a\x81\x89\x02\xf2\x01\x08\x81\x89"
  "\x02\xf1\x01\x06\x81\x87\x02\xf0\x01\x04\x84\x06\x09\x0f\x76\x02"
  "\x4b\x03\x15\x66\x69\x6e\x64\x2d\x6f\x75\x74\x65\x72\x6d\x6f\x73"
  "\x74\x2d\x62\x6c\x6f\x63\x6b\x77\x02\xf6\x01\x08\x81\x83\x02\xf5"
  "\x01\x06\x81\x83\x02\xf4\x01\x04\x83\x04\x07\x0f\x78\x02\x4c\x65"
  "\x02\x03\x1e\x73\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b\x2f\x65"
  "\x78\x74\x65\x72\x6e\x61\x6c\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72"
  "\x79\x02\xfa\x01\x0a\x81\x87\x02\xf9\x01\x08\x81\x85\x02\xf8\x01"
  "\x06\x81\x83\x02\xf7\x01\x04\x83\x04\x09\x14\x7a\x02\x4d\x65\x02"
  "\x03\x79\x02\xfd\x01\x08\x81\x85\x02\xfc\x01\x06\x81\x83\x02\xfb"
  "\x01\x04\x83\x04\x07\x11\x7b\x02\x4e\x82\x02\x0c\x81\x8b\x02\x81"
  "\x02\x0a\x81\x8b\x02\x80\x02\x08\x81\x8b\x02\xff\x01\x06\x81\x8b"
  "\x02\xfe\x01\x04\x85\x08\x0b\x11\x7c\x02\x4f\x04\x09\x66\x6f\x72"
  "\x2d\x65\x61\x63\x68\x02\x86\x02\x0a\x81\x85\x02\x85\x02\x08\x81"
  "\x85\x02\x84\x02\x06\x81\x85\x02\x83\x02\x04\x84\x06\x09\x11\x7d"
  "\x02\x50\x12\x87\x02\x04\x83\x04\x03\x7e\x02\x51\x5e\x08\x8a\x02"
  "\x08\x81\x83\x02\x89\x02\x06\x81\x83\x02\x88\x02\x04\x83\x04\x07"
  "\x0e\x5e\x02\x52\x65\x02\x03\x1a\x73\x74\x61\x63\x6b\x2d\x62\x6c"
  "\x6f\x63\x6b\x2f\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b"
  "\x3f\x7f\x02\x8d\x02\x08\x81\x85\x02\x8c\x02\x06\x81\x83\x02\x8b"
  "\x02\x04\x83\x04\x07\x11\x80\x01\x02\x53\x14\x03\x69\x02\x90\x02"
  "\x08\x81\x83\x02\x8f\x02\x06\x81\x83\x02\x8e\x02\x04\x83\x04\x07"
  "\x10\x81\x01\x02\x54\x14\x92\x02\x06\x81\x83\x02\x91\x02\x04\x83"
  "\x04\x05\x0b\x82\x01\x02\x55\x17\x08\x55\x02\x96\x02\x0a\x81\x85"
  "\x02\x95\x02\x08\x81\x83\x02\x94\x02\x06\x81\x83\x02\x93\x02\x04"
  "\x83\x04\x09\x12\x83\x01\x02\x56\x02\x17\x08\x55\x02\x04\x06\x64"
  "\x65\x6c\x71\x21\x02\xa5\x02\x20\x81\x89\x02\xa4\x02\x1e\x81\x8b"
  "\x02\xa3\x02\x1c\x81\x89\x02\xa2\x02\x1a\x81\x89\x02\xa1\x02\x18"
  "\x81\x89\x02\xa0\x02\x16\x81\x89\x02\x9f\x02\x14\x81\x89\x02\x9e"
  "\x02\x12\x81\x89\x02\x9d\x02\x10\x81\x89\x02\x9c\x02\x0e\x81\x8b"
  "\x02\x9b\x02\x0c\x81\x85\x02\x9a\x02\x0a\x81\x83\x02\x99\x02\x08"
  "\x81\x89\x02\x98\x02\x06\x85\x08\x97\x02\x04\x81\x87\x02\x1f\x30"
  "\x55\x02\x57\x12\xa6\x02\x04\x83\x04\x03\x02\x58\x12\x11\xa8\x02"
  "\x06\x81\x83\x02\xa7\x02\x04\x83\x04\x05\x0c\x84\x01\x02\x59\x12"
  "\x11\x04\x15\x63\x6c\x6f\x73\x75\x72\x65\x2d\x66\x69\x72\x73\x74"
  "\x2d\x6f\x66\x66\x73\x65\x74\x02\xad\x02\x0c\x81\x85\x02\xac\x02"
  "\x0a\x81\x87\x02\xab\x02\x08\x81\x83\x02\xaa\x02\x06\x83\x04\xa9"
  "\x02\x04\x81\x85\x02\x0b\x15\x85\x01\x02\x5a\x65\x63\x03\xb4\x02"
  "\x10\x81\x87\x02\xb3\x02\x0e\x81\x85\x02\xb2\x02\x0c\x81\x85\x02"
  "\xb1\x02\x0a\x81\x87\x02\xb0\x02\x08\x81\x85\x02\xaf\x02\x06\x81"
  "\x85\x02\xae\x02\x04\x83\x04\x0f\x18\x5a\x65\x04\x85\x01\x06\x84"
  "\x01\x04\x04\x55\x06\x83\x01\x04\x82\x01\x04\x81\x01\x04\x80\x01"
  "\x04\x5e\x04\x7e\x04\x7d\x04\x7c\x04\x7b\x04\x7a\x04\x78\x04\x76"
  "\x04\x75\x04\x59\x04\x74\x04\x72\x04\x71\x04\x70\x04\x6f\x04\x6d"
  "\x04\x6c\x04\x6b\x04\x6a\x04\x68\x04\x66\x04\x64\x04\x62\x04\x21"
  "\x1f\x62\x6c\x6f\x63\x6b\x2d\x6e\x65\x61\x72\x65\x73\x74\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72\x1b"
  "\x63\x6c\x6f\x73\x75\x72\x65\x2d\x62\x6c\x6f\x63\x6b\x2d\x66\x69"
  "\x72\x73\x74\x2d\x6f\x66\x66\x73\x65\x74\x1b\x63\x6c\x6f\x73\x75"
  "\x72\x65\x2d\x62\x6c\x6f\x63\x6b\x2d\x65\x6e\x74\x72\x79\x2d\x6e"
  "\x75\x6d\x62\x65\x72\x18\x62\x6c\x6f\x63\x6b\x2d\x6e\x75\x6d\x62"
  "\x65\x72\x2d\x6f\x66\x2d\x65\x6e\x74\x72\x69\x65\x73\x16\x74\x72"
  "\x61\x6e\x73\x66\x65\x72\x2d\x62\x6c\x6f\x63\x6b\x2d\x63\x68\x69"
  "\x6c\x64\x21\x16\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x62\x6c\x6f"
  "\x63\x6b\x2d\x70\x61\x72\x65\x6e\x74\x1d\x69\x6e\x74\x65\x72\x6e"
  "\x61\x6c\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x79\x6e\x61\x6d\x69\x63"
  "\x2d\x6c\x69\x6e\x6b\x3f\x7f\x14\x62\x6c\x6f\x63\x6b\x2f\x64\x79"
  "\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x3f\x20\x73\x74\x61\x63"
  "\x6b\x2d\x62\x6c\x6f\x63\x6b\x2f\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x2d\x6c\x76\x61\x6c\x75\x65\x19\x73\x74\x61\x63"
  "\x6b\x2d\x62\x6c\x6f\x63\x6b\x2f\x73\x74\x61\x74\x69\x63\x2d\x6c"
  "\x69\x6e\x6b\x3f\x1b\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x64\x65\x73\x63\x65\x6e\x64\x61\x6e\x74\x21\x1e"
  "\x73\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b\x2f\x61\x6e\x63\x65"
  "\x73\x74\x6f\x72\x2d\x64\x69\x73\x74\x61\x6e\x63\x65\x18\x62\x6c"
  "\x6f\x63\x6b\x2f\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x61\x6e\x63"
  "\x65\x73\x74\x6f\x72\x79\x77\x17\x62\x6c\x6f\x63\x6b\x2d\x70\x61"
  "\x72\x74\x69\x61\x6c\x2d\x61\x6e\x63\x65\x73\x74\x72\x79\x73\x21"
  "\x62\x6c\x6f\x63\x6b\x2d\x66\x61\x72\x74\x68\x65\x73\x74\x2d\x75"
  "\x6e\x63\x6f\x6d\x6d\x6f\x6e\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72"
  "\x1e\x62\x6c\x6f\x63\x6b\x2d\x6e\x65\x61\x72\x65\x73\x74\x2d\x63"
  "\x6f\x6d\x6d\x6f\x6e\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72\x0f\x62"
  "\x6c\x6f\x63\x6b\x2d\x73\x69\x62\x6c\x69\x6e\x67\x3f\x0d\x62\x6c"
  "\x6f\x63\x6b\x2d\x63\x68\x69\x6c\x64\x3f\x6e\x18\x62\x6c\x6f\x63"
  "\x6b\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72\x2d\x6f\x72\x2d\x73\x65"
  "\x6c\x66\x3f\x15\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x2f\x75\x73\x65"
  "\x2d\x6c\x6f\x6f\x6b\x75\x70\x3f\x69\x10\x62\x6c\x6f\x63\x6b\x2f"
  "\x69\x6e\x74\x65\x72\x6e\x61\x6c\x3f\x10\x62\x6c\x6f\x63\x6b\x2f"
  "\x65\x78\x74\x65\x72\x6e\x61\x6c\x3f\x14\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2d\x62\x6c\x6f\x63\x6b\x3f\x0d\x73\x74"
  "\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b\x3f\x0f\x63\x6c\x6f\x73\x75"
  "\x72\x65\x2d\x62\x6c\x6f\x63\x6b\x3f\x0a\x69\x63\x2d\x62\x6c\x6f"
  "\x63\x6b\x3f\x21\x15\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x06\x73\x74\x61\x63\x6b\x85"
  "\x01\x60\x0a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x84\x01\x61\x03"
  "\x69\x63\x83\x01\x67\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x82\x01\x63\x4c\x0d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x81\x01\x50\x08\x63\x6c\x6f\x73\x75\x72\x65\x80\x01\x80\x01"
  "\x81\x01\x82\x01\x83\x01\x84\x01\x85\x01\x5b\x1d\x62\x6c\x6f\x63"
  "\x6b\x2f\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x72\x61\x6e\x67\x65"
  "\x2d\x63\x68\x65\x63\x6b\x73\x3f\x1c\x62\x6c\x6f\x63\x6b\x2f\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2d\x74\x79\x70\x65\x2d\x63\x68\x65"
  "\x63\x6b\x73\x3f\x5f\x04\x5d\x04\x5c\x04\x12\x62\x6c\x6f\x63\x6b"
  "\x2d\x70\x61\x73\x73\x65\x64\x2d\x6f\x75\x74\x3f\x17\x69\x6e\x74"
  "\x65\x72\x6e\x2d\x73\x63\x6f\x64\x65\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x21\x17\x61\x64\x64\x2d\x62\x6c\x6f\x63\x6b\x2d\x61\x70"
  "\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x21\x0e\x72\x76\x61\x6c\x75"
  "\x65\x2f\x62\x6c\x6f\x63\x6b\x3f\x5a\x04\x58\x04\x57\x04\x56\x04"
  "\x0b\x6d\x61\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x4f\x53\x04\x0d\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x4e\x04\x07\x62\x6c"
  "\x6f\x63\x6b\x3f\x18\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x72"
  "\x61\x6e\x67\x65\x2d\x63\x68\x65\x63\x6b\x73\x21\x4b\x17\x73\x65"
  "\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2d\x63\x68\x65"
  "\x63\x6b\x73\x21\x4a\x1a\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x6c\x61\x79\x6f\x75\x74\x2d\x66\x72\x6f\x7a\x65\x6e\x3f\x21\x49"
  "\x19\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x70\x6f\x70\x70\x69"
  "\x6e\x67\x2d\x6c\x69\x6d\x69\x74\x21\x48\x1a\x73\x65\x74\x2d\x62"
  "\x6c\x6f\x63\x6b\x2d\x67\x72\x61\x66\x74\x65\x64\x2d\x62\x6c\x6f"
  "\x63\x6b\x73\x21\x47\x1a\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x70\x6f\x70\x70\x69\x6e\x67\x2d\x6c\x69\x6d\x69\x74\x73\x21\x46"
  "\x18\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x65\x6e\x74\x72\x79"
  "\x2d\x6e\x75\x6d\x62\x65\x72\x21\x45\x18\x73\x65\x74\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x73\x74\x61\x74\x69\x63\x2d\x6c\x69\x6e\x6b\x3f"
  "\x21\x44\x18\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x73\x68\x61"
  "\x72\x65\x64\x2d\x62\x6c\x6f\x63\x6b\x21\x43\x16\x73\x65\x74\x2d"
  "\x62\x6c\x6f\x63\x6b\x2d\x73\x74\x61\x63\x6b\x2d\x6c\x69\x6e\x6b"
  "\x21\x42\x1a\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x64\x65\x62"
  "\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x21\x41\x1b\x73\x65"
  "\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d"
  "\x6f\x66\x66\x73\x65\x74\x73\x21\x40\x1e\x73\x65\x74\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x73\x21\x3f\x18\x73\x65\x74\x2d\x62\x6c\x6f"
  "\x63\x6b\x2d\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x73\x21"
  "\x3e\x18\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x64\x65\x63\x6c"
  "\x61\x72\x61\x74\x69\x6f\x6e\x73\x21\x3d\x2a\x73\x65\x74\x2d\x62"
  "\x6c\x6f\x63\x6b\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x2d\x6e"
  "\x6f\x6e\x74\x72\x61\x6e\x73\x69\x74\x69\x76\x65\x6c\x79\x2d\x66"
  "\x72\x65\x65\x21\x3c\x1a\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x66\x72\x65\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x21\x3b"
  "\x1b\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x62\x6f\x75\x6e\x64"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x21\x3a\x15\x73\x65\x74"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x21\x39\x16\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x66\x72\x61"
  "\x6d\x65\x2d\x73\x69\x7a\x65\x21\x38\x1d\x73\x65\x74\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x64\x69\x73\x6f\x77\x6e\x65\x64\x2d\x63\x68\x69"
  "\x6c\x64\x72\x65\x6e\x21\x37\x14\x73\x65\x74\x2d\x62\x6c\x6f\x63"
  "\x6b\x2d\x63\x68\x69\x6c\x64\x72\x65\x6e\x21\x36\x12\x73\x65\x74"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x70\x61\x72\x65\x6e\x74\x21\x35\x10"
  "\x73\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x21\x34"
  "\x31\x33\x04\x32\x04\x31\x04\x30\x04\x2f\x04\x2e\x04\x2d\x04\x2c"
  "\x04\x2b\x04\x2a\x04\x29\x04\x28\x04\x27\x04\x26\x04\x25\x04\x24"
  "\x04\x23\x04\x22\x04\x21\x04\x20\x04\x1f\x04\x1e\x04\x1d\x04\x1c"
  "\x04\x1b\x04\x1a\x04\x19\x04\x18\x04\x17\x04\x16\x04\x15\x04\x14"
  "\x04\x13\x04\x12\x04\x11\x04\x10\x04\x0f\x04\x0e\x04\x0d\x04\x0c"
  "\x04\x0b\x04\x0a\x04\x09\x04\x04\x04\x04\x04\x04\x31\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x51\x54"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x0d\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70\x65\x73\x4d"
  "\x51\x14\x72\x76\x61\x6c\x75\x65\x2d\x25\x70\x61\x73\x73\x65\x64"
  "\x2d\x6f\x75\x74\x3f\x50\x06\x05\x10\x6d\x61\x6b\x65\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x74\x61\x67\x03\x18\x74\x61\x67\x67\x65\x64"
  "\x2d\x76\x65\x63\x74\x6f\x72\x2f\x70\x72\x65\x64\x69\x63\x61\x74"
  "\x65\x04\x1b\x64\x65\x66\x69\x6e\x65\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2d\x74\x61\x67\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x03\x11\x6d"
  "\x61\x6b\x65\x2d\x65\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x04"
  "\x52\x06\x2e\x5e\x80\x80\x04\x2d\x5c\x81\x81\x02\x2c\x5a\x81\x81"
  "\x02\x2b\x58\x81\x85\x02\x2a\x56\x81\x85\x02\x29\x54\x81\x83\x02"
  "\x28\x52\x81\x85\x02\x27\x50\x81\x85\x02\x26\x4e\x81\x89\x02\x25"
  "\x4c\x81\x83\x02\x24\x4a\x81\x85\x02\x23\x48\x81\x85\x02\x22\x46"
  "\x81\x89\x02\x21\x44\x81\x83\x02\x20\x42\x81\x85\x02\x1f\x40\x81"
  "\x85\x02\x1e\x3e\x81\x89\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x85"
  "\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x89\x02\x19\x34\x81\x83\x02"
  "\x18\x32\x81\x85\x02\x17\x30\x81\x85\x02\x16\x2e\x81\x89\x02\x15"
  "\x2c\x81\x83\x02\x14\x2a\x81\x85\x02\x13\x28\x81\x89\x02\x12\x26"
  "\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81"
  "\x85\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x87"
  "\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02"
  "\x08\x12\x81\x83\x02\x07\x10\x81\x85\x02\x06\x0e\x81\x83\x02\x05"
  "\x0c\x81\x85\x02\x04\x0a\x81\x87\x02\x03\x08\x81\x83\x02\x02\x06"
  "\x81\x8b\x02\x01\x04\x81\x87\x02\x5d\x99\x01";

SCHEME_OBJECT *
blocks_so_data_0d5b5895a9e41b36 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_blocks_so_data_0d5b5895a9e41b36 [0]))), (sizeof (prog_blocks_so_data_0d5b5895a9e41b36)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_55]));
}

DECLARE_COMPILED_DATA_NS ("blocks.so", blocks_so_data_0d5b5895a9e41b36)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("blocks.so", "4ae95cece45b5872")
