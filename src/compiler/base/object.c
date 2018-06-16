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
object_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
#define ENVIRONMENT_LABEL_2_3 7
#define DEBUGGING_LABEL_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto vector_tag_parent_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tag_parent_3)
DEFLABEL (vector_tag_parent_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
object_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto vector_tag_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tag_name_3)
DEFLABEL (vector_tag_name_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
object_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto vector_tag_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tag_index_3)
DEFLABEL (vector_tag_index_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
object_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto vector_tag__unparser_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tag__unparser_3)
DEFLABEL (vector_tag__unparser_0)
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
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto vector_tag_description_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tag_description_3)
DEFLABEL (vector_tag_description_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
object_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto vector_tag_method_alist_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tag_method_alist_3)
DEFLABEL (vector_tag_method_alist_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 7
#define DEBUGGING_LABEL_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto vector_tag_noop_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tag_noop_3)
DEFLABEL (vector_tag_noop_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

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
object_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_vector_tag__unparserB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_vector_tag__unparserB_3)
DEFLABEL (set_vector_tag__unparserB_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
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
object_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_vector_tag_descriptionB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_vector_tag_descriptionB_3)
DEFLABEL (set_vector_tag_descriptionB_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
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
object_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_vector_tag_method_alistB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_vector_tag_method_alistB_3)
DEFLABEL (set_vector_tag_method_alistB_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = (& (Rsp [3]));
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
object_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_vector_tag_noopB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_vector_tag_noopB_3)
DEFLABEL (set_vector_tag_noopB_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
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
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define ENVIRONMENT_LABEL_13_3 17
#define DEBUGGING_LABEL_13_2 16
#define OBJECT_13_3 15
#define OBJECT_13_2 14
#define OBJECT_13_1 13
#define OBJECT_13_0 12
#define FREE_REFERENCE_13_0 11
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto vector_tagP_4;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tagP_10)
DEFLABEL (vector_tagP_4)
  INTERRUPT_CHECK (26, LABEL_13_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
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
  Rvl = (current_block [OBJECT_13_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_13_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 11
#define DEBUGGING_LABEL_14_2 10
#define OBJECT_14_3 9
#define OBJECT_14_2 8
#define OBJECT_14_1 7
#define OBJECT_14_0 6
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_14_4);
      goto define_vector_tag_unparser_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_vector_tag_unparser_5)
DEFLABEL (define_vector_tag_unparser_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_9;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd26.Lng))))
    goto label_9;
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [5]) = (Wrd20.Obj);

DEFLABEL (label_8)
  (Wrd5.Obj) = (current_block [OBJECT_14_2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_7)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_6;
  Rvl = ((Wrd13.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (current_block [OBJECT_14_0]);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 3);

DEFLABEL (label_3)
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define ENVIRONMENT_LABEL_15_3 18
#define DEBUGGING_LABEL_15_2 17
#define OBJECT_15_3 16
#define OBJECT_15_2 15
#define OBJECT_15_1 14
#define OBJECT_15_0 13
#define EXECUTE_CACHE_15_8 9
#define EXECUTE_CACHE_15_7 11
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_15_4);
      goto vector_tag_unparser_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tag_unparser_9)
DEFLABEL (vector_tag_unparser_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_13;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd33.Lng))))
    goto label_13;
  (Wrd25.Obj) = ((Wrd31.pObj) [2]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd25.Obj);
  if ((Wrd25.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Rsp [1]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (label_11)
  (Wrd45.Obj) = (current_block [OBJECT_15_3]);
  (Rsp [0]) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (label_13)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_15_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_7)
  (Wrd25.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_6 5
#define LABEL_16_5 7
#define LABEL_16_8 9
#define ENVIRONMENT_LABEL_16_3 19
#define DEBUGGING_LABEL_16_2 18
#define OBJECT_16_4 17
#define OBJECT_16_3 16
#define OBJECT_16_2 15
#define OBJECT_16_1 14
#define OBJECT_16_0 13
#define EXECUTE_CACHE_16_7 11
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd44;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_16_4);
      goto vector_tag_putB_6;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tag_putB_11)
DEFLABEL (vector_tag_putB_6)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_19;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_19;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_18)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [1]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_16_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 2);

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_17;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd24.Lng))))
    goto label_17;
  (Wrd16.Obj) = ((Wrd22.pObj) [7]);

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Rsp [3]) = (Wrd37.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [2]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 62)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 3);

DEFLABEL (label_15)
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd51.Lng))))
    goto label_14;
  (Wrd44.Obj) = (Rsp [2]);
  ((Wrd49.pObj) [7]) = (Wrd44.Obj);
  Rvl = (current_block [OBJECT_16_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (current_block [OBJECT_16_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_9)
  (Wrd16.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_16_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_8 7
#define LABEL_17_9 9
#define LABEL_17_10 11
#define LABEL_17_11 13
#define LABEL_17_5 15
#define LABEL_17_12 17
#define ENVIRONMENT_LABEL_17_3 26
#define DEBUGGING_LABEL_17_2 25
#define OBJECT_17_3 24
#define OBJECT_17_2 23
#define OBJECT_17_1 22
#define OBJECT_17_0 21
#define EXECUTE_CACHE_17_7 19
#define FREE_REFERENCES_LABEL_17_0 18
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd8;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd62;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
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
      current_block = (Rpc - LABEL_17_4);
      goto vector_tag_get_13;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto loop_9;

    case 5:
      current_block = (Rpc - LABEL_17_11);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_17_12);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tag_get_20)
DEFLABEL (vector_tag_get_13)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_31;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_31;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_30)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd8.Obj) = Rvl;

DEFLABEL (label_26)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd9.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd16.uLng) == 1)
    goto label_22;
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_3]), 1);

DEFLABEL (label_22)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd13.pObj) [1]);

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_23;

DEFLABEL (label_27)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_29;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_29;
  (Wrd20.Obj) = ((Wrd26.pObj) [2]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd20.Obj);
  goto loop_9;

DEFLABEL (label_29)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (current_block [OBJECT_17_2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_16)
  (Wrd20.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_17_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (loop_21)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_17_10);
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_36;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd49.Lng))))
    goto label_36;
  (Wrd43.Obj) = ((Wrd47.pObj) [7]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_35)
  (Wrd57.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd8.Obj) = Rvl;
  Rsp = (& (Rsp [2]));
  goto label_25;

DEFLABEL (label_32)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_34;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd70.Lng))))
    goto label_34;
  (Wrd62.Obj) = ((Wrd68.pObj) [2]);

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd62.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_34)
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.Obj) = (current_block [OBJECT_17_2]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_18)
  (Wrd62.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.Obj) = (current_block [OBJECT_17_0]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd8.Obj) = ((SCHEME_OBJECT) 0);
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 10
#define DEBUGGING_LABEL_18_2 9
#define EXECUTE_CACHE_18_6 7
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_18_4);
      goto define_vector_tag_method_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_vector_tag_method_4)
DEFLABEL (define_vector_tag_method_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 13
#define DEBUGGING_LABEL_19_2 12
#define OBJECT_19_0 11
#define EXECUTE_CACHE_19_7 7
#define EXECUTE_CACHE_19_6 9
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_19_4);
      goto vector_tag_method_2;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tag_method_5)
DEFLABEL (vector_tag_method_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

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
object_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto tagged_vector_tag_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tagged_vector_tag_3)
DEFLABEL (tagged_vector_tag_0)
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
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 11
#define DEBUGGING_LABEL_21_2 10
#define OBJECT_21_3 9
#define OBJECT_21_2 8
#define OBJECT_21_1 7
#define OBJECT_21_0 6
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto tagged_vector_index_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tagged_vector_index_5)
DEFLABEL (tagged_vector_index_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_21_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_21_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define OBJECT_22_1 10
#define OBJECT_22_0 9
#define EXECUTE_CACHE_22_6 7
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto tagged_vector_unparser_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tagged_vector_unparser_5)
DEFLABEL (tagged_vector_unparser_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_22_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define ENVIRONMENT_LABEL_23_3 17
#define DEBUGGING_LABEL_23_2 16
#define OBJECT_23_2 15
#define OBJECT_23_1 14
#define OBJECT_23_0 13
#define EXECUTE_CACHE_23_8 11
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_23_4);
      goto tagged_vectorP_4;

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

DEFLABEL (tagged_vectorP_10)
DEFLABEL (tagged_vectorP_4)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_12;

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  if (! ((Wrd6.uLng) == 10))
    goto label_18;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_17)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_16;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd42.Lng) == 0)
    goto label_11;

DEFLABEL (label_15)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_14;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_14;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (label_14)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_23_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_11;

DEFLABEL (label_18)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_5 7
#define LABEL_24_11 9
#define LABEL_24_9 11
#define ENVIRONMENT_LABEL_24_3 22
#define DEBUGGING_LABEL_24_2 21
#define EXECUTE_CACHE_24_12 13
#define EXECUTE_CACHE_24_10 15
#define EXECUTE_CACHE_24_8 17
#define EXECUTE_CACHE_24_7 19
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd5;
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
      goto Z___tagged_vector_5;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___tagged_vector_8)
DEFLABEL (Z___tagged_vector_5)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd5.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_7 7
#define LABEL_25_8 9
#define LABEL_25_9 11
#define ENVIRONMENT_LABEL_25_3 17
#define DEBUGGING_LABEL_25_2 16
#define OBJECT_25_3 15
#define OBJECT_25_2 14
#define OBJECT_25_1 13
#define OBJECT_25_0 12
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd48;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_25_4);
      goto tagged_vector_predicate_5;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_25_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_25_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tagged_vector_predicate_11)
DEFLABEL (tagged_vector_predicate_5)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_15;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  if (! ((Wrd6.uLng) == 10))
    goto label_21;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_20)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_19;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd48.Lng) == 0)
    goto label_14;

DEFLABEL (label_18)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_17;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_17;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_16)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [2]);
  if (! ((Wrd45.Obj) == (Wrd26.Obj)))
    goto label_14;
  Rvl = (current_block [OBJECT_25_3]);
  goto label_13;

DEFLABEL (label_17)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_25_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_9)
  (Wrd26.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_14;

DEFLABEL (label_21)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define TAG_26_6 1
#define LABEL_26_7 7
#define LABEL_26_8 9
#define LABEL_26_9 11
#define LABEL_26_10 13
#define LABEL_26_11 15
#define LABEL_26_13 17
#define ENVIRONMENT_LABEL_26_3 28
#define DEBUGGING_LABEL_26_2 27
#define OBJECT_26_5 26
#define OBJECT_26_4 25
#define OBJECT_26_3 24
#define OBJECT_26_2 23
#define OBJECT_26_1 22
#define OBJECT_26_0 21
#define EXECUTE_CACHE_26_12 19
#define FREE_REFERENCES_LABEL_26_0 18
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd42;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_26_4);
      goto tagged_vector_subclass_predicate_11;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto lambda_19;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_26_10);
      goto loop_8;

    case 6:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_26_13);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tagged_vector_subclass_predicate_18)
DEFLABEL (tagged_vector_subclass_predicate_11)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_26_5);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_22;

DEFLABEL (label_21)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  if (! ((Wrd6.uLng) == 10))
    goto label_28;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_27)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_26;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd42.Lng) == 0)
    goto label_21;

DEFLABEL (label_25)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_24;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_24;
  (Wrd28.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_23)
  goto loop_8;

DEFLABEL (label_24)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_26_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_21;

DEFLABEL (label_28)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_13)
  (Wrd9.Obj) = Rvl;
  goto label_27;

DEFLABEL (loop_20)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_26_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == (Wrd10.Obj))
    goto label_31;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_30;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_30;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_29)
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_8;

DEFLABEL (label_30)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_26_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_5]), 2);

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  Rvl = (current_block [OBJECT_26_3]);

DEFLABEL (label_32)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_9 7
#define LABEL_27_7 9
#define LABEL_27_11 11
#define ENVIRONMENT_LABEL_27_3 27
#define DEBUGGING_LABEL_27_2 26
#define OBJECT_27_4 25
#define OBJECT_27_3 24
#define OBJECT_27_2 23
#define OBJECT_27_1 22
#define OBJECT_27_0 21
#define EXECUTE_CACHE_27_10 13
#define EXECUTE_CACHE_27_8 15
#define EXECUTE_CACHE_27_6 17
#define FREE_REFERENCE_27_0 20
#define FREE_REFERENCES_LABEL_27_0 12
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd36;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_27_4);
      goto tagged_vector_description_3;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_9);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_27_11);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tagged_vector_description_8)
DEFLABEL (tagged_vector_description_3)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd36.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_13;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_13;
  (Wrd9.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_12)
  (Wrd23.Obj) = (current_block [OBJECT_27_3]);
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 62)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 2);

DEFLABEL (label_11)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd33.Lng))))
    goto label_10;
  Rvl = ((Wrd31.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_27_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_14)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_9])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define ENVIRONMENT_LABEL_28_3 20
#define DEBUGGING_LABEL_28_2 19
#define OBJECT_28_1 18
#define OBJECT_28_0 17
#define EXECUTE_CACHE_28_10 9
#define EXECUTE_CACHE_28_9 11
#define EXECUTE_CACHE_28_8 13
#define EXECUTE_CACHE_28_7 15
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_28_4);
      goto standard_unparser_3;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_unparser_6)
DEFLABEL (standard_unparser_3)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_28_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (label_7)
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_7 5
#define TAG_29_8 1
#define LABEL_29_11 7
#define LABEL_29_5 9
#define TAG_29_6 3
#define LABEL_29_13 11
#define LABEL_29_14 13
#define LABEL_29_15 15
#define LABEL_29_10 17
#define ENVIRONMENT_LABEL_29_3 32
#define DEBUGGING_LABEL_29_2 31
#define OBJECT_29_3 30
#define OBJECT_29_2 29
#define OBJECT_29_1 28
#define OBJECT_29_0 27
#define EXECUTE_CACHE_29_12 19
#define EXECUTE_CACHE_29_9 21
#define FREE_REFERENCE_29_0 24
#define FREE_ASSIGNMENT_29_0 26
#define FREE_REFERENCES_LABEL_29_0 18
#define NUMBER_OF_LINKER_SECTIONS_29_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
object_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_29_4);
      goto tagged_vector_unparse_11;

    case 1:
      current_block = (Rpc - LABEL_29_7);
      goto lambda_20;

    case 2:
      current_block = (Rpc - LABEL_29_11);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_29_5);
      goto swapB_19;

    case 4:
      current_block = (Rpc - LABEL_29_13);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_29_14);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_29_15);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_29_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tagged_vector_unparse_18)
DEFLABEL (tagged_vector_unparse_11)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_7])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_29_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd26.Obj) = ((Wrd6.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_22;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd23.Lng))))
    goto label_22;
  (Wrd15.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_22)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd31.Obj) = (current_block [OBJECT_29_1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (swapB_19)
  CLOSURE_HEADER (LABEL_29_5);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  Wrd5 = Wrd9;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_26)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_29_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_28)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_15)
  goto label_26;

DEFLABEL (label_31)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_29_13])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
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
#define LABEL_22 29
#define LABEL_23 31
#define LABEL_27 33
#define LABEL_25 35
#define LABEL_31 37
#define LABEL_26 39
#define LABEL_34 41
#define LABEL_35 43
#define LABEL_37 45
#define LABEL_38 47
#define LABEL_39 49
#define LABEL_40 51
#define LABEL_28 53
#define TAG_29 25
#define LABEL_42 55
#define LABEL_30 57
#define LABEL_32 59
#define LABEL_33 61
#define LABEL_41 63
#define LABEL_46 65
#define LABEL_45 67
#define LABEL_48 69
#define LABEL_49 71
#define LABEL_50 73
#define ENVIRONMENT_LABEL_3 129
#define DEBUGGING_LABEL_2 128
#define PURIFICATION_ROOT 127
#define OBJECT_28 126
#define OBJECT_27 125
#define OBJECT_26 124
#define OBJECT_25 123
#define OBJECT_24 122
#define OBJECT_23 121
#define OBJECT_22 120
#define OBJECT_21 119
#define OBJECT_20 118
#define OBJECT_19 117
#define OBJECT_18 116
#define OBJECT_17 115
#define OBJECT_16 114
#define OBJECT_15 113
#define OBJECT_14 112
#define OBJECT_13 111
#define OBJECT_12 110
#define OBJECT_11 109
#define OBJECT_10 108
#define OBJECT_9 107
#define OBJECT_8 106
#define OBJECT_7 105
#define OBJECT_6 104
#define OBJECT_5 103
#define OBJECT_4 102
#define OBJECT_3 101
#define OBJECT_2 100
#define OBJECT_1 99
#define OBJECT_0 98
#define EXECUTE_CACHE_47 75
#define EXECUTE_CACHE_44 77
#define EXECUTE_CACHE_43 79
#define EXECUTE_CACHE_36 81
#define EXECUTE_CACHE_24 83
#define FREE_REFERENCE_2 86
#define FREE_REFERENCE_1 87
#define FREE_REFERENCE_0 88
#define GLOBAL_EXECUTE_CACHE_20 90
#define GLOBAL_EXECUTE_CACHE_12 92
#define GLOBAL_EXECUTE_CACHE_10 94
#define GLOBAL_EXECUTE_CACHE_6 96
#define FREE_REFERENCES_LABEL_0 74
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
object_so_6de2feb5287ac268 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd25;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
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
      goto continuation_8;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_42;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_14;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_43;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto Z__make_vector_tag_53;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_44;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_17;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto continuation_37;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto continuation_19;

    case 15:
      current_block = (Rpc - LABEL_27);
      goto label_45;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto continuation_38;

    case 17:
      current_block = (Rpc - LABEL_31);
      goto label_46;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto lambda_25;

    case 19:
      current_block = (Rpc - LABEL_34);
      goto label_47;

    case 20:
      current_block = (Rpc - LABEL_35);
      goto label_48;

    case 21:
      current_block = (Rpc - LABEL_37);
      goto continuation_30;

    case 22:
      current_block = (Rpc - LABEL_38);
      goto label_51;

    case 23:
      current_block = (Rpc - LABEL_39);
      goto continuation_29;

    case 24:
      current_block = (Rpc - LABEL_40);
      goto continuation_31;

    case 25:
      current_block = (Rpc - LABEL_28);
      goto make_vector_tag_54;

    case 26:
      current_block = (Rpc - LABEL_42);
      goto label_49;

    case 27:
      current_block = (Rpc - LABEL_30);
      goto continuation_39;

    case 28:
      current_block = (Rpc - LABEL_32);
      goto continuation_24;

    case 29:
      current_block = (Rpc - LABEL_33);
      goto continuation_23;

    case 30:
      current_block = (Rpc - LABEL_41);
      goto continuation_32;

    case 31:
      current_block = (Rpc - LABEL_46);
      goto label_50;

    case 32:
      current_block = (Rpc - LABEL_45);
      goto continuation_33;

    case 33:
      current_block = (Rpc - LABEL_48);
      goto label_57;

    case 34:
      current_block = (Rpc - LABEL_49);
      goto label_58;

    case 35:
      current_block = (Rpc - LABEL_50);
      goto expression_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_41)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_49])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_58)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_57)
  {
    static const short sections [] =
      {
	0,
	3,
	1,
	2,
	1,
	0,
	1,
	1,
	1,
	0,
	0,
	1,
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
    if (counter > 29)
      goto label_56;
    blocks = (current_block [OBJECT_28]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_48])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_56)
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
  (Wrd21.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = (Wrd21.Obj);
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
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_66;
  Wrd11 = Wrd15;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_64;
  Wrd11 = Wrd15;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (Wrd26.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd26.uLng) == 62))
    goto label_62;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd24.Lng))))
    goto label_62;
  ((Wrd22.pObj) [5]) = (Wrd5.Obj);

DEFLABEL (label_61)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_60;
  Wrd8 = Wrd12;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_27]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd9.pObj));

DEFLABEL (label_46)
  (Wrd8.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_16]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17]), 3);

DEFLABEL (label_45)
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_43)
  (Wrd11.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_42)
  (Wrd11.Obj) = Rvl;
  goto label_65;

DEFLABEL (Z__make_vector_tag_53)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (Z__make_vector_tag_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_68;
  Wrd9 = Wrd13;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd16.Obj) = (MAKE_OBJECT (0, 8));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-9]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd10.pObj));

DEFLABEL (label_44)
  (Wrd9.Obj) = Rvl;
  goto label_67;

DEFLABEL (lambda_55)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_72;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd20.Lng))))
    goto label_72;
  (Wrd12.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_71)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_70;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_70;
  (Wrd29.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_70)
  (Wrd37.Obj) = (current_block [OBJECT_22]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.Obj) = (current_block [OBJECT_20]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 2);

DEFLABEL (label_47)
  (Wrd12.Obj) = Rvl;
  goto label_71;

DEFLABEL (make_vector_tag_54)
  CLOSURE_HEADER (LABEL_28);

DEFLABEL (make_vector_tag_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_85;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_84;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd22.Lng))))
    goto label_84;
  (Wrd14.Obj) = ((Wrd20.pObj) [8]);

DEFLABEL (label_83)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_82)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [6]);
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd51.Obj) = Rvl;
  (Wrd60.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd60.uLng) == 62))
    goto label_80;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd59.Lng))))
    goto label_80;
  (Wrd53.Obj) = ((Wrd57.pObj) [4]);

DEFLABEL (label_79)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_78)
  (Wrd42.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [5]);
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;
  (* (--Rsp)) = (Wrd43.Obj);
  goto label_73;

DEFLABEL (label_74)
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [2]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_73)
DEFLABEL (label_77)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_41);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_76;
  Wrd9 = Wrd13;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_45);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd10.pObj));

DEFLABEL (label_50)
  (Wrd9.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_80)
  (Wrd62.Obj) = (current_block [OBJECT_24]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 2);

DEFLABEL (label_51)
  (Wrd53.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_81)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_78;

DEFLABEL (label_84)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.Obj) = (current_block [OBJECT_25]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23]), 2);

DEFLABEL (label_49)
  (Wrd14.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_85)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_82;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  goto label_82;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_object_so_6de2feb5287ac268 [29] =
  {
    { "object_so_code_1", 1, object_so_code_1 },
    { "object_so_code_2", 1, object_so_code_2 },
    { "object_so_code_3", 1, object_so_code_3 },
    { "object_so_code_4", 1, object_so_code_4 },
    { "object_so_code_5", 1, object_so_code_5 },
    { "object_so_code_6", 1, object_so_code_6 },
    { "object_so_code_7", 1, object_so_code_7 },
    { "object_so_code_8", 1, object_so_code_8 },
    { "object_so_code_9", 1, object_so_code_9 },
    { "object_so_code_10", 1, object_so_code_10 },
    { "object_so_code_11", 1, object_so_code_11 },
    { "object_so_code_12", 1, object_so_code_12 },
    { "object_so_code_13", 4, object_so_code_13 },
    { "object_so_code_14", 2, object_so_code_14 },
    { "object_so_code_15", 3, object_so_code_15 },
    { "object_so_code_16", 4, object_so_code_16 },
    { "object_so_code_17", 8, object_so_code_17 },
    { "object_so_code_18", 2, object_so_code_18 },
    { "object_so_code_19", 2, object_so_code_19 },
    { "object_so_code_20", 1, object_so_code_20 },
    { "object_so_code_21", 2, object_so_code_21 },
    { "object_so_code_22", 2, object_so_code_22 },
    { "object_so_code_23", 4, object_so_code_23 },
    { "object_so_code_24", 5, object_so_code_24 },
    { "object_so_code_25", 5, object_so_code_25 },
    { "object_so_code_26", 8, object_so_code_26 },
    { "object_so_code_27", 5, object_so_code_27 },
    { "object_so_code_28", 3, object_so_code_28 },
    { "object_so_code_29", 8, object_so_code_29 }
  };

int
decl_object_so_6de2feb5287ac268 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_object_so_6de2feb5287ac268);
  return (0);
}

DECLARE_COMPILED_CODE ("object.so", 36, decl_object_so_6de2feb5287ac268, object_so_6de2feb5287ac268)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_object_so_data_6de2feb5287ac268 [2979] =
  "\x82\x01\x29\x91\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x22\x29"
  "\x21\x9d\x2b\xb9\x1d\xb0\x82\x88\xc2\xba\x81\x22\x29\x21\x9e\x2b"
  "\xbb\x1d\xb0\x83\x88\xb2\x82\x22\x29\x21\x9e\x2b\xbc\x1d\xb0\x84"
  "\x88\xb2\x83\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88\xb2\x84\x22"
  "\x29\x21\x9e\x2b\xbe\x1d\xb0\x86\x88\xb2\x85\x22\x29\x21\x9e\x2b"
  "\xbf\x1d\xb0\x02\x88\xb2\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb2\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d"
  "\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x86\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\xb2\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x82\x1b\x84\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x81\xb2\x84\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x1b\x1d\xb2\x86\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x81\xb2\x86\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x80"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb2\x83\x1b\x80\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\xc1\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x1b\x80\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb2\x81\x07\x1b\x80\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x85\x1b\x80\x0c\x0d\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x1b\x80\x02\x0d\xb8\x25\xb0\x24\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xb8\x17\x1c\x88\x1b\xb0\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1c\x0d"
  "\x1c\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x17\x02\x83\xb2\x82\x1b\x80"
  "\x0d\x0d\x1b\x84\x0d\x0d\x1b\x1b\x1b\x0d\x9d\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x0d\x1b\x1b\x1b\x2a\x86\x0d\x1c"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb5\x2a\xb4\x2a"
  "\xb3\x2a\x17\xc3\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x8e"
  "\xb1\x2a\x08\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x0d\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f"
  "\x62\x61\x73\x65\x2f\x6f\x62\x6a\x65\x63\x74\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x25\x04\x82\x02\x03\x02\x0c\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x72\x65\x66\x26\x04\x83\x04\x03\x02\x27\x04\x83"
  "\x04\x03\x02\x28\x04\x83\x04\x03\x02\x29\x04\x83\x04\x03\x02\x2a"
  "\x04\x83\x04\x03\x02\x08\x2b\x04\x83\x04\x03\x09\x02\x09\x08\x2c"
  "\x04\x83\x04\x03\x0a\x02\x0a\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d"
  "\x73\x65\x74\x21\x0b\x02\x2d\x04\x84\x06\x03\x0c\x02\x0b\x0b\x02"
  "\x2e\x04\x84\x06\x03\x0d\x02\x0c\x0b\x02\x2f\x04\x84\x06\x03\x0e"
  "\x02\x0d\x0b\x02\x08\x30\x04\x84\x06\x03\x0f\x02\x0e\x0f\x25\x72"
  "\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61"
  "\x67\x2e\x31\x10\x02\x34\x0a\x81\x85\x02\x33\x08\x81\x83\x02\x32"
  "\x06\x81\x83\x02\x31\x04\x83\x04\x09\x12\x11\x02\x0f\x0b\x36\x06"
  "\x81\x85\x02\x35\x04\x84\x06\x05\x0c\x12\x02\x10\x11\x4d\x69\x73"
  "\x73\x69\x6e\x67\x20\x75\x6e\x70\x61\x72\x73\x65\x72\x04\x06\x65"
  "\x72\x72\x6f\x72\x13\x03\x14\x76\x65\x63\x74\x6f\x72\x2d\x74\x61"
  "\x67\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x14\x03\x39\x08\x81\x85"
  "\x02\x38\x06\x81\x83\x02\x37\x04\x83\x04\x07\x13\x15\x02\x11\x09"
  "\x73\x65\x74\x2d\x63\x64\x72\x21\x0b\x02\x04\x05\x61\x73\x73\x71"
  "\x16\x02\x3d\x0a\x81\x89\x02\x3c\x08\x81\x87\x02\x3b\x06\x81\x89"
  "\x02\x3a\x04\x85\x08\x09\x14\x17\x02\x12\x04\x63\x64\x72\x04\x16"
  "\x02\x45\x12\x81\x87\x02\x44\x10\x81\x85\x02\x43\x0e\x81\x89\x02"
  "\x42\x0c\x81\x87\x02\x41\x0a\x81\x89\x02\x40\x08\x81\x87\x02\x3f"
  "\x06\x81\x87\x02\x3e\x04\x84\x06\x11\x1b\x16\x02\x13\x05\x10\x76"
  "\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d\x70\x75\x74\x21\x18\x02"
  "\x47\x06\x81\x87\x02\x46\x04\x85\x08\x05\x0b\x19\x02\x14\x0f\x55"
  "\x6e\x62\x6f\x75\x6e\x64\x20\x6d\x65\x74\x68\x6f\x64\x04\x0f\x76"
  "\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d\x67\x65\x74\x1a\x05\x13"
  "\x03\x49\x06\x81\x85\x02\x48\x04\x84\x06\x05\x0e\x1b\x02\x15\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x1c\x4a\x04\x83\x04\x03"
  "\x1d\x02\x16\x1c\x4c\x06\x81\x83\x02\x4b\x04\x83\x04\x05\x0c\x1e"
  "\x02\x17\x1c\x03\x14\x02\x4e\x06\x81\x83\x02\x4d\x04\x83\x04\x05"
  "\x0d\x1f\x02\x18\x1c\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x20\x03\x0c\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67"
  "\x3f\x21\x02\x52\x0a\x81\x83\x02\x51\x08\x81\x83\x02\x50\x06\x81"
  "\x83\x02\x4f\x04\x83\x04\x09\x12\x22\x02\x19\x03\x1b\x65\x78\x61"
  "\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69"
  "\x6e\x74\x65\x67\x65\x72\x3f\x03\x07\x75\x6e\x68\x61\x73\x68\x03"
  "\x0f\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x3f\x23"
  "\x03\x11\x6e\x61\x6d\x65\x64\x2d\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x3f\x24\x05\x57\x0c\x81\x83\x02\x56\x0a\x81\x83\x02\x55\x08"
  "\x81\x83\x02\x54\x06\x81\x85\x02\x53\x04\x83\x04\x0b\x17\x25\x02"
  "\x1a\x1c\x20\x5c\x0c\x81\x85\x02\x5b\x0a\x81\x85\x02\x5a\x08\x81"
  "\x85\x02\x59\x06\x81\x85\x02\x58\x04\x83\x04\x0b\x12\x26\x02\x1b"
  "\x1c\x20\x03\x21\x02\x64\x12\x81\x87\x02\x63\x10\x81\x87\x02\x62"
  "\x0e\x81\x87\x02\x61\x0c\x81\x85\x02\x60\x0a\x81\x85\x02\x5f\x08"
  "\x81\x85\x02\x5e\x06\x81\x85\x02\x5d\x04\x83\x04\x11\x1d\x20\x02"
  "\x1c\x1c\x14\x4e\x6f\x74\x20\x61\x20\x74\x61\x67\x67\x65\x64\x20"
  "\x76\x65\x63\x74\x6f\x72\x1c\x6e\x61\x6d\x65\x64\x2d\x73\x74\x72"
  "\x75\x63\x74\x75\x72\x65\x2f\x64\x65\x73\x63\x72\x69\x70\x74\x69"
  "\x6f\x6e\x02\x03\x24\x03\x23\x04\x13\x04\x69\x0c\x81\x83\x02\x68"
  "\x0a\x81\x83\x02\x67\x08\x81\x83\x02\x66\x06\x81\x83\x02\x65\x04"
  "\x83\x04\x0b\x1c\x24\x02\x1d\x05\x6c\x69\x61\x72\x02\x3a\x03\x0f"
  "\x73\x79\x6d\x62\x6f\x6c\x2d\x3e\x73\x74\x72\x69\x6e\x67\x13\x03"
  "\x19\x75\x6e\x70\x61\x72\x73\x65\x72\x2f\x73\x74\x61\x6e\x64\x61"
  "\x72\x64\x2d\x6d\x65\x74\x68\x6f\x64\x27\x04\x27\x05\x0e\x73\x74"
  "\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x05\x6c\x08\x81\x8b"
  "\x02\x6b\x06\x81\x85\x02\x6a\x04\x84\x06\x07\x15\x27\x02\x1e\x02"
  "\x1c\x11\x11\x2a\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x72\x61\x64"
  "\x69\x78\x2a\x02\x02\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66"
  "\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x03\x14\x03\x74\x12\x81\x85"
  "\x02\x73\x10\x81\x83\x02\x72\x0e\x81\x85\x02\x71\x0c\x81\x83\x02"
  "\x70\x0a\x81\x83\x02\x6f\x08\x81\x87\x02\x6e\x06\x81\x83\x02\x6d"
  "\x04\x84\x06\x11\x21\x1e\x28\x28\x04\x27\x04\x24\x04\x20\x04\x26"
  "\x04\x25\x04\x22\x04\x1f\x04\x1e\x04\x1d\x04\x0b\x16\x74\x61\x67"
  "\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x2f\x75\x6e\x70\x61\x72"
  "\x73\x65\x28\x12\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75\x6e\x70"
  "\x61\x72\x73\x65\x72\x27\x1a\x74\x61\x67\x67\x65\x64\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2f\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e"
  "\x21\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x2f\x73"
  "\x75\x62\x63\x6c\x61\x73\x73\x2d\x70\x72\x65\x64\x69\x63\x61\x74"
  "\x65\x18\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x2f"
  "\x70\x72\x65\x64\x69\x63\x61\x74\x65\x10\x2d\x3e\x74\x61\x67\x67"
  "\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x23\x17\x74\x61\x67\x67\x65"
  "\x64\x2d\x76\x65\x63\x74\x6f\x72\x2f\x75\x6e\x70\x61\x72\x73\x65"
  "\x72\x14\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x2f"
  "\x69\x6e\x64\x65\x78\x12\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63"
  "\x74\x6f\x72\x2f\x74\x61\x67\x0b\x08\x1c\x13\x6d\x61\x6b\x65\x2d"
  "\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x10\x6d\x61"
  "\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x0b\x12\x76"
  "\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d\x6d\x65\x74\x68\x6f\x64"
  "\x19\x64\x65\x66\x69\x6e\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74"
  "\x61\x67\x2d\x6d\x65\x74\x68\x6f\x64\x1a\x18\x14\x1b\x64\x65\x66"
  "\x69\x6e\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x1b\x04\x19\x04\x16\x04\x17\x04\x15"
  "\x04\x12\x04\x07\x6f\x62\x6a\x65\x63\x74\x10\x21\x11\x04\x11\x25"
  "\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x26"
  "\x15\x73\x65\x74\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d"
  "\x6e\x6f\x6f\x70\x21\x1d\x73\x65\x74\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2d\x74\x61\x67\x2d\x6d\x65\x74\x68\x6f\x64\x2d\x61\x6c\x69\x73"
  "\x74\x21\x1c\x73\x65\x74\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61"
  "\x67\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x21\x1a\x73"
  "\x65\x74\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d\x25\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x21\x10\x76\x65\x63\x74\x6f\x72\x2d"
  "\x74\x61\x67\x2d\x6e\x6f\x6f\x70\x18\x76\x65\x63\x74\x6f\x72\x2d"
  "\x74\x61\x67\x2d\x6d\x65\x74\x68\x6f\x64\x2d\x61\x6c\x69\x73\x74"
  "\x17\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d\x64\x65\x73\x63"
  "\x72\x69\x70\x74\x69\x6f\x6e\x15\x76\x65\x63\x74\x6f\x72\x2d\x74"
  "\x61\x67\x2d\x25\x75\x6e\x70\x61\x72\x73\x65\x72\x11\x76\x65\x63"
  "\x74\x6f\x72\x2d\x74\x61\x67\x2d\x69\x6e\x64\x65\x78\x10\x76\x65"
  "\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d\x6e\x61\x6d\x65\x12\x76\x65"
  "\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d\x70\x61\x72\x65\x6e\x74\x0c"
  "\x0f\x04\x0e\x04\x0d\x04\x0c\x04\x0a\x04\x09\x04\x04\x04\x04\x04"
  "\x04\x0c\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x0f\x72\x74\x64\x3a\x76\x65\x63\x74\x6f\x72\x2d\x74"
  "\x61\x67\x25\x0b\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x07\x70"
  "\x61\x72\x65\x6e\x74\x05\x6e\x61\x6d\x65\x06\x69\x6e\x64\x65\x78"
  "\x0a\x25\x75\x6e\x70\x61\x72\x73\x65\x72\x0c\x64\x65\x73\x63\x72"
  "\x69\x70\x74\x69\x6f\x6e\x0d\x6d\x65\x74\x68\x6f\x64\x2d\x61\x6c"
  "\x69\x73\x74\x05\x6e\x6f\x6f\x70\x04\x06\x11\x6d\x61\x6b\x65\x2d"
  "\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x74\x61\x67\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75"
  "\x65\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x05\x25\x07\x76\x65\x63"
  "\x74\x6f\x72\x28\x04\x06\x26\x03\x13\x04\x1c\x65\x6e\x75\x6d\x65"
  "\x72\x61\x74\x69\x6f\x6e\x2f\x6e\x61\x6d\x65\x2d\x3e\x65\x6e\x75"
  "\x6d\x65\x72\x61\x6e\x64\x04\x27\x04\x23\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2f\x73\x65\x74\x2d\x74\x61\x67\x67\x65\x64\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x6d\x65\x74\x68\x6f\x64\x21\x06\x24\x4a\x80"
  "\x80\x04\x23\x48\x81\x81\x02\x22\x46\x81\x81\x02\x21\x44\x81\x83"
  "\x02\x20\x42\x81\x85\x02\x1f\x40\x81\x89\x02\x1e\x3e\x81\x89\x02"
  "\x1d\x3c\x81\x85\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x8d\x02\x1a"
  "\x36\x81\x89\x02\x19\x34\x81\x8b\x02\x18\x32\x81\x8d\x02\x17\x30"
  "\x81\x8f\x02\x16\x2e\x81\x8f\x02\x15\x2c\x81\x8b\x02\x14\x2a\x81"
  "\x8b\x02\x13\x28\x84\x06\x12\x26\x81\x85\x02\x11\x24\x81\x83\x02"
  "\x10\x22\x81\x87\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x83\x02\x0d"
  "\x1c\x81\x83\x02\x0c\x1a\x81\x8b\x02\x0b\x18\x81\x85\x02\x0a\x16"
  "\x81\x83\x02\x09\x14\x81\x8f\x02\x08\x12\x81\x8b\x02\x07\x10\x81"
  "\x87\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83"
  "\x02\x03\x08\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02"
  "\x49\x82\x01";

SCHEME_OBJECT *
object_so_data_6de2feb5287ac268 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_object_so_data_6de2feb5287ac268 [0]))), (sizeof (prog_object_so_data_6de2feb5287ac268)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_50]));
}

DECLARE_COMPILED_DATA_NS ("object.so", object_so_data_6de2feb5287ac268)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("object.so", "a77ad44c5ce95477")
