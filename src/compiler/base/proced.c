/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:12-07 by Liar version 4.118. */

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
proced_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_type_3)
DEFLABEL (procedure_type_0)
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
proced_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_typeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_typeB_3)
DEFLABEL (set_procedure_typeB_0)
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
proced_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_block_3)
DEFLABEL (procedure_block_0)
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
proced_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_blockB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_blockB_3)
DEFLABEL (set_procedure_blockB_0)
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
proced_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_name_3)
DEFLABEL (procedure_name_0)
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
proced_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_nameB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_nameB_3)
DEFLABEL (set_procedure_nameB_0)
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
proced_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_required_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_required_3)
DEFLABEL (procedure_required_0)
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
proced_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_requiredB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_requiredB_3)
DEFLABEL (set_procedure_requiredB_0)
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
proced_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_optional_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_optional_3)
DEFLABEL (procedure_optional_0)
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
proced_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_optionalB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_optionalB_3)
DEFLABEL (set_procedure_optionalB_0)
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
proced_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_rest_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_rest_3)
DEFLABEL (procedure_rest_0)
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
proced_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_restB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_restB_3)
DEFLABEL (set_procedure_restB_0)
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
proced_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_names_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_names_3)
DEFLABEL (procedure_names_0)
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
proced_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_namesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_namesB_3)
DEFLABEL (set_procedure_namesB_0)
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
proced_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_values_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_values_3)
DEFLABEL (procedure_values_0)
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
proced_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_valuesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_valuesB_3)
DEFLABEL (set_procedure_valuesB_0)
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
proced_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_entry_edge_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_entry_edge_3)
DEFLABEL (procedure_entry_edge_0)
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
proced_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_entry_edgeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_entry_edgeB_3)
DEFLABEL (set_procedure_entry_edgeB_0)
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
proced_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_original_required_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_original_required_3)
DEFLABEL (procedure_original_required_0)
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
proced_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_original_requiredB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_original_requiredB_3)
DEFLABEL (set_procedure_original_requiredB_0)
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
proced_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_original_optional_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_original_optional_3)
DEFLABEL (procedure_original_optional_0)
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
proced_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_original_optionalB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_original_optionalB_3)
DEFLABEL (set_procedure_original_optionalB_0)
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
proced_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_original_rest_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_original_rest_3)
DEFLABEL (procedure_original_rest_0)
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
proced_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_original_restB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_original_restB_3)
DEFLABEL (set_procedure_original_restB_0)
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
proced_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_label_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_label_3)
DEFLABEL (procedure_label_0)
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
proced_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_labelB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_labelB_3)
DEFLABEL (set_procedure_labelB_0)
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
proced_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_applications_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_applications_3)
DEFLABEL (procedure_applications_0)
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
proced_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_applicationsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_applicationsB_3)
DEFLABEL (set_procedure_applicationsB_0)
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
proced_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_always_known_operatorP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_always_known_operatorP_3)
DEFLABEL (procedure_always_known_operatorP_0)
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
proced_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_always_known_operatorPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_always_known_operatorPB_3)
DEFLABEL (set_procedure_always_known_operatorPB_0)
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
proced_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_closure_cons_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_closure_cons_3)
DEFLABEL (procedure_closure_cons_0)
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
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [18]);
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
proced_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_closure_consB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_closure_consB_3)
DEFLABEL (set_procedure_closure_consB_0)
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
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [18]) = (Wrd10.Obj);
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
proced_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_closure_context_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_closure_context_3)
DEFLABEL (procedure_closure_context_0)
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
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [19]);
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
proced_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_closure_contextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_closure_contextB_3)
DEFLABEL (set_procedure_closure_contextB_0)
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
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [19]) = (Wrd10.Obj);
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
proced_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_closure_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_closure_offset_3)
DEFLABEL (procedure_closure_offset_0)
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
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [20]);
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
proced_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_closure_offsetB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_closure_offsetB_3)
DEFLABEL (set_procedure_closure_offsetB_0)
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
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [20]) = (Wrd10.Obj);
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
proced_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_register_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_register_3)
DEFLABEL (procedure_register_0)
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
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [21]);
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
proced_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_registerB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_registerB_3)
DEFLABEL (set_procedure_registerB_0)
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
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [21]) = (Wrd10.Obj);
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
proced_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_closure_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_closure_size_3)
DEFLABEL (procedure_closure_size_0)
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
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [22]);
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
proced_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_closure_sizeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_closure_sizeB_3)
DEFLABEL (set_procedure_closure_sizeB_0)
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
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [22]) = (Wrd10.Obj);
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
proced_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_target_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_target_block_3)
DEFLABEL (procedure_target_block_0)
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
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [23]);
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
proced_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_target_blockB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_target_blockB_3)
DEFLABEL (set_procedure_target_blockB_0)
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
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [23]) = (Wrd10.Obj);
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
proced_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_initial_callees_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_initial_callees_3)
DEFLABEL (procedure_initial_callees_0)
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
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [24]);
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
proced_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_initial_calleesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_initial_calleesB_3)
DEFLABEL (set_procedure_initial_calleesB_0)
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
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [24]) = (Wrd10.Obj);
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
proced_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_free_callees_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_free_callees_3)
DEFLABEL (procedure_free_callees_0)
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
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [25]);
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
proced_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_free_calleesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_free_calleesB_3)
DEFLABEL (set_procedure_free_calleesB_0)
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
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [25]) = (Wrd10.Obj);
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
proced_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto procedure_callees_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_callees_3)
DEFLABEL (procedure_callees_0)
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
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [25]);
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
proced_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_procedure_calleesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_calleesB_3)
DEFLABEL (set_procedure_calleesB_0)
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
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [25]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_48_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define ENVIRONMENT_LABEL_49_3 7
#define DEBUGGING_LABEL_49_2 6
#define OBJECT_49_1 5
#define OBJECT_49_0 4
#define FREE_REFERENCES_LABEL_49_0 4
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto procedure_free_callers_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_free_callers_3)
DEFLABEL (procedure_free_callers_0)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_49_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 25L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [26]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define ENVIRONMENT_LABEL_50_3 8
#define DEBUGGING_LABEL_50_2 7
#define OBJECT_50_2 6
#define OBJECT_50_1 5
#define OBJECT_50_0 4
#define FREE_REFERENCES_LABEL_50_0 4
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_50_4);
      goto set_procedure_free_callersB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_free_callersB_3)
DEFLABEL (set_procedure_free_callersB_0)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_50_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 25L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [26]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_50_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define ENVIRONMENT_LABEL_51_3 7
#define DEBUGGING_LABEL_51_2 6
#define OBJECT_51_1 5
#define OBJECT_51_0 4
#define FREE_REFERENCES_LABEL_51_0 4
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_51_4);
      goto procedure_callers_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_callers_3)
DEFLABEL (procedure_callers_0)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_51_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 25L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [26]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define ENVIRONMENT_LABEL_52_3 8
#define DEBUGGING_LABEL_52_2 7
#define OBJECT_52_2 6
#define OBJECT_52_1 5
#define OBJECT_52_0 4
#define FREE_REFERENCES_LABEL_52_0 4
#define NUMBER_OF_LINKER_SECTIONS_52_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto set_procedure_callersB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_callersB_3)
DEFLABEL (set_procedure_callersB_0)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_52_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 25L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [26]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_52_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define ENVIRONMENT_LABEL_53_3 7
#define DEBUGGING_LABEL_53_2 6
#define OBJECT_53_1 5
#define OBJECT_53_0 4
#define FREE_REFERENCES_LABEL_53_0 4
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto procedure_virtual_closureP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_virtual_closureP_3)
DEFLABEL (procedure_virtual_closureP_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_53_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [27]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 8
#define DEBUGGING_LABEL_54_2 7
#define OBJECT_54_2 6
#define OBJECT_54_1 5
#define OBJECT_54_0 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto set_procedure_virtual_closurePB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_virtual_closurePB_3)
DEFLABEL (set_procedure_virtual_closurePB_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [27]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_54_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define ENVIRONMENT_LABEL_55_3 7
#define DEBUGGING_LABEL_55_2 6
#define OBJECT_55_1 5
#define OBJECT_55_0 4
#define FREE_REFERENCES_LABEL_55_0 4
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto procedure_closure_reasons_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_closure_reasons_3)
DEFLABEL (procedure_closure_reasons_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_55_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 27L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [28]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 8
#define DEBUGGING_LABEL_56_2 7
#define OBJECT_56_2 6
#define OBJECT_56_1 5
#define OBJECT_56_0 4
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto set_procedure_closure_reasonsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_closure_reasonsB_3)
DEFLABEL (set_procedure_closure_reasonsB_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 27L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [28]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_56_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define ENVIRONMENT_LABEL_57_3 7
#define DEBUGGING_LABEL_57_2 6
#define OBJECT_57_1 5
#define OBJECT_57_0 4
#define FREE_REFERENCES_LABEL_57_0 4
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto procedure_variables_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_variables_3)
DEFLABEL (procedure_variables_0)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_57_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 28L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [29]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define ENVIRONMENT_LABEL_58_3 8
#define DEBUGGING_LABEL_58_2 7
#define OBJECT_58_2 6
#define OBJECT_58_1 5
#define OBJECT_58_0 4
#define FREE_REFERENCES_LABEL_58_0 4
#define NUMBER_OF_LINKER_SECTIONS_58_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto set_procedure_variablesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_variablesB_3)
DEFLABEL (set_procedure_variablesB_0)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 28L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [29]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_58_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define ENVIRONMENT_LABEL_59_3 7
#define DEBUGGING_LABEL_59_2 6
#define OBJECT_59_1 5
#define OBJECT_59_0 4
#define FREE_REFERENCES_LABEL_59_0 4
#define NUMBER_OF_LINKER_SECTIONS_59_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto procedure_side_effects_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_side_effects_3)
DEFLABEL (procedure_side_effects_0)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_59_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 28L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [29]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define ENVIRONMENT_LABEL_60_3 8
#define DEBUGGING_LABEL_60_2 7
#define OBJECT_60_2 6
#define OBJECT_60_1 5
#define OBJECT_60_0 4
#define FREE_REFERENCES_LABEL_60_0 4
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto set_procedure_side_effectsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_side_effectsB_3)
DEFLABEL (set_procedure_side_effectsB_0)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 28L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [29]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_60_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define ENVIRONMENT_LABEL_61_3 7
#define DEBUGGING_LABEL_61_2 6
#define OBJECT_61_1 5
#define OBJECT_61_0 4
#define FREE_REFERENCES_LABEL_61_0 4
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_61_4);
      goto procedure_alist_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_alist_3)
DEFLABEL (procedure_alist_0)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_61_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [30]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define ENVIRONMENT_LABEL_62_3 8
#define DEBUGGING_LABEL_62_2 7
#define OBJECT_62_2 6
#define OBJECT_62_1 5
#define OBJECT_62_0 4
#define FREE_REFERENCES_LABEL_62_0 4
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_62_4);
      goto set_procedure_alistB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_alistB_3)
DEFLABEL (set_procedure_alistB_0)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_62_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [30]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_62_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define ENVIRONMENT_LABEL_63_3 7
#define DEBUGGING_LABEL_63_2 6
#define OBJECT_63_1 5
#define OBJECT_63_0 4
#define FREE_REFERENCES_LABEL_63_0 4
#define NUMBER_OF_LINKER_SECTIONS_63_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto procedure_debugging_info_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_debugging_info_3)
DEFLABEL (procedure_debugging_info_0)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 30L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [31]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define ENVIRONMENT_LABEL_64_3 8
#define DEBUGGING_LABEL_64_2 7
#define OBJECT_64_2 6
#define OBJECT_64_1 5
#define OBJECT_64_0 4
#define FREE_REFERENCES_LABEL_64_0 4
#define NUMBER_OF_LINKER_SECTIONS_64_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto set_procedure_debugging_infoB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_debugging_infoB_3)
DEFLABEL (set_procedure_debugging_infoB_0)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_64_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 30L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [31]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_64_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_6 5
#define LABEL_65_7 7
#define LABEL_65_5 9
#define LABEL_65_8 11
#define LABEL_65_9 13
#define LABEL_65_10 15
#define LABEL_65_11 17
#define LABEL_65_12 19
#define LABEL_65_13 21
#define LABEL_65_14 23
#define LABEL_65_15 25
#define LABEL_65_16 27
#define LABEL_65_17 29
#define LABEL_65_18 31
#define LABEL_65_19 33
#define LABEL_65_20 35
#define LABEL_65_21 37
#define LABEL_65_22 39
#define LABEL_65_23 41
#define LABEL_65_24 43
#define LABEL_65_25 45
#define LABEL_65_26 47
#define LABEL_65_27 49
#define LABEL_65_28 51
#define LABEL_65_29 53
#define LABEL_65_30 55
#define LABEL_65_31 57
#define LABEL_65_32 59
#define LABEL_65_33 61
#define LABEL_65_34 63
#define LABEL_65_35 65
#define LABEL_65_36 67
#define ENVIRONMENT_LABEL_65_3 135
#define DEBUGGING_LABEL_65_2 134
#define OBJECT_65_60 133
#define OBJECT_65_59 132
#define OBJECT_65_58 131
#define OBJECT_65_57 130
#define OBJECT_65_56 129
#define OBJECT_65_55 128
#define OBJECT_65_54 127
#define OBJECT_65_53 126
#define OBJECT_65_52 125
#define OBJECT_65_51 124
#define OBJECT_65_50 123
#define OBJECT_65_49 122
#define OBJECT_65_48 121
#define OBJECT_65_47 120
#define OBJECT_65_46 119
#define OBJECT_65_45 118
#define OBJECT_65_44 117
#define OBJECT_65_43 116
#define OBJECT_65_42 115
#define OBJECT_65_41 114
#define OBJECT_65_40 113
#define OBJECT_65_39 112
#define OBJECT_65_38 111
#define OBJECT_65_37 110
#define OBJECT_65_36 109
#define OBJECT_65_35 108
#define OBJECT_65_34 107
#define OBJECT_65_33 106
#define OBJECT_65_32 105
#define OBJECT_65_31 104
#define OBJECT_65_30 103
#define OBJECT_65_29 102
#define OBJECT_65_28 101
#define OBJECT_65_27 100
#define OBJECT_65_26 99
#define OBJECT_65_25 98
#define OBJECT_65_24 97
#define OBJECT_65_23 96
#define OBJECT_65_22 95
#define OBJECT_65_21 94
#define OBJECT_65_20 93
#define OBJECT_65_19 92
#define OBJECT_65_18 91
#define OBJECT_65_17 90
#define OBJECT_65_16 89
#define OBJECT_65_15 88
#define OBJECT_65_14 87
#define OBJECT_65_13 86
#define OBJECT_65_12 85
#define OBJECT_65_11 84
#define OBJECT_65_10 83
#define OBJECT_65_9 82
#define OBJECT_65_8 81
#define OBJECT_65_7 80
#define OBJECT_65_6 79
#define OBJECT_65_5 78
#define OBJECT_65_4 77
#define OBJECT_65_3 76
#define OBJECT_65_2 75
#define OBJECT_65_1 74
#define OBJECT_65_0 73
#define EXECUTE_CACHE_65_37 69
#define FREE_REFERENCE_65_0 72
#define FREE_REFERENCES_LABEL_65_0 68
#define NUMBER_OF_LINKER_SECTIONS_65_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd814;
  machine_word Wrd816;
  machine_word Wrd813;
  machine_word Wrd809;
  machine_word Wrd811;
  machine_word Wrd812;
  machine_word Wrd805;
  machine_word Wrd807;
  machine_word Wrd808;
  machine_word Wrd804;
  machine_word Wrd801;
  machine_word Wrd800;
  machine_word Wrd789;
  machine_word Wrd797;
  machine_word Wrd796;
  machine_word Wrd795;
  machine_word Wrd799;
  machine_word Wrd798;
  machine_word Wrd788;
  machine_word Wrd787;
  machine_word Wrd785;
  machine_word Wrd781;
  machine_word Wrd783;
  machine_word Wrd784;
  machine_word Wrd777;
  machine_word Wrd779;
  machine_word Wrd780;
  machine_word Wrd776;
  machine_word Wrd773;
  machine_word Wrd772;
  machine_word Wrd761;
  machine_word Wrd769;
  machine_word Wrd768;
  machine_word Wrd767;
  machine_word Wrd771;
  machine_word Wrd770;
  machine_word Wrd760;
  machine_word Wrd759;
  machine_word Wrd757;
  machine_word Wrd753;
  machine_word Wrd755;
  machine_word Wrd756;
  machine_word Wrd749;
  machine_word Wrd751;
  machine_word Wrd752;
  machine_word Wrd748;
  machine_word Wrd745;
  machine_word Wrd744;
  machine_word Wrd733;
  machine_word Wrd741;
  machine_word Wrd740;
  machine_word Wrd739;
  machine_word Wrd743;
  machine_word Wrd742;
  machine_word Wrd732;
  machine_word Wrd731;
  machine_word Wrd729;
  machine_word Wrd725;
  machine_word Wrd727;
  machine_word Wrd728;
  machine_word Wrd721;
  machine_word Wrd723;
  machine_word Wrd724;
  machine_word Wrd720;
  machine_word Wrd717;
  machine_word Wrd716;
  machine_word Wrd705;
  machine_word Wrd713;
  machine_word Wrd712;
  machine_word Wrd711;
  machine_word Wrd715;
  machine_word Wrd714;
  machine_word Wrd704;
  machine_word Wrd703;
  machine_word Wrd701;
  machine_word Wrd697;
  machine_word Wrd699;
  machine_word Wrd700;
  machine_word Wrd693;
  machine_word Wrd695;
  machine_word Wrd696;
  machine_word Wrd692;
  machine_word Wrd689;
  machine_word Wrd688;
  machine_word Wrd677;
  machine_word Wrd685;
  machine_word Wrd684;
  machine_word Wrd683;
  machine_word Wrd687;
  machine_word Wrd686;
  machine_word Wrd676;
  machine_word Wrd675;
  machine_word Wrd673;
  machine_word Wrd669;
  machine_word Wrd671;
  machine_word Wrd672;
  machine_word Wrd665;
  machine_word Wrd667;
  machine_word Wrd668;
  machine_word Wrd664;
  machine_word Wrd661;
  machine_word Wrd660;
  machine_word Wrd649;
  machine_word Wrd657;
  machine_word Wrd656;
  machine_word Wrd655;
  machine_word Wrd659;
  machine_word Wrd658;
  machine_word Wrd648;
  machine_word Wrd647;
  machine_word Wrd645;
  machine_word Wrd641;
  machine_word Wrd643;
  machine_word Wrd644;
  machine_word Wrd637;
  machine_word Wrd639;
  machine_word Wrd640;
  machine_word Wrd636;
  machine_word Wrd633;
  machine_word Wrd632;
  machine_word Wrd621;
  machine_word Wrd629;
  machine_word Wrd628;
  machine_word Wrd627;
  machine_word Wrd631;
  machine_word Wrd630;
  machine_word Wrd620;
  machine_word Wrd619;
  machine_word Wrd617;
  machine_word Wrd613;
  machine_word Wrd615;
  machine_word Wrd616;
  machine_word Wrd609;
  machine_word Wrd611;
  machine_word Wrd612;
  machine_word Wrd608;
  machine_word Wrd605;
  machine_word Wrd604;
  machine_word Wrd593;
  machine_word Wrd601;
  machine_word Wrd600;
  machine_word Wrd599;
  machine_word Wrd603;
  machine_word Wrd602;
  machine_word Wrd592;
  machine_word Wrd591;
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
      current_block = (Rpc - LABEL_65_4);
      goto lambda_118;

    case 1:
      current_block = (Rpc - LABEL_65_6);
      goto label_120;

    case 2:
      current_block = (Rpc - LABEL_65_7);
      goto label_121;

    case 3:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_65_8);
      goto label_122;

    case 5:
      current_block = (Rpc - LABEL_65_9);
      goto label_123;

    case 6:
      current_block = (Rpc - LABEL_65_10);
      goto label_124;

    case 7:
      current_block = (Rpc - LABEL_65_11);
      goto label_125;

    case 8:
      current_block = (Rpc - LABEL_65_12);
      goto label_126;

    case 9:
      current_block = (Rpc - LABEL_65_13);
      goto label_127;

    case 10:
      current_block = (Rpc - LABEL_65_14);
      goto label_128;

    case 11:
      current_block = (Rpc - LABEL_65_15);
      goto label_129;

    case 12:
      current_block = (Rpc - LABEL_65_16);
      goto label_130;

    case 13:
      current_block = (Rpc - LABEL_65_17);
      goto label_131;

    case 14:
      current_block = (Rpc - LABEL_65_18);
      goto label_132;

    case 15:
      current_block = (Rpc - LABEL_65_19);
      goto label_133;

    case 16:
      current_block = (Rpc - LABEL_65_20);
      goto label_134;

    case 17:
      current_block = (Rpc - LABEL_65_21);
      goto label_135;

    case 18:
      current_block = (Rpc - LABEL_65_22);
      goto label_136;

    case 19:
      current_block = (Rpc - LABEL_65_23);
      goto label_137;

    case 20:
      current_block = (Rpc - LABEL_65_24);
      goto label_138;

    case 21:
      current_block = (Rpc - LABEL_65_25);
      goto label_139;

    case 22:
      current_block = (Rpc - LABEL_65_26);
      goto label_140;

    case 23:
      current_block = (Rpc - LABEL_65_27);
      goto label_141;

    case 24:
      current_block = (Rpc - LABEL_65_28);
      goto label_142;

    case 25:
      current_block = (Rpc - LABEL_65_29);
      goto label_143;

    case 26:
      current_block = (Rpc - LABEL_65_30);
      goto label_144;

    case 27:
      current_block = (Rpc - LABEL_65_31);
      goto label_145;

    case 28:
      current_block = (Rpc - LABEL_65_32);
      goto label_146;

    case 29:
      current_block = (Rpc - LABEL_65_33);
      goto label_147;

    case 30:
      current_block = (Rpc - LABEL_65_34);
      goto label_148;

    case 31:
      current_block = (Rpc - LABEL_65_35);
      goto label_149;

    case 32:
      current_block = (Rpc - LABEL_65_36);
      goto label_150;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_152)
DEFLABEL (lambda_118)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_214;
  Wrd10 = Wrd14;

DEFLABEL (label_213)
  Wrd9 = Wrd10;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_212;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_212;
  (Wrd17.Obj) = ((Wrd20.pObj) [6]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_211)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_210;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 30L) < ((unsigned long) (Wrd13.Lng))))
    goto label_210;
  (Wrd5.Obj) = ((Wrd11.pObj) [31]);

DEFLABEL (label_209)
  (Wrd24.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_65_5]);
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
    goto label_208;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd41.Lng))))
    goto label_208;
  (Wrd33.Obj) = ((Wrd39.pObj) [30]);

DEFLABEL (label_207)
  (Wrd52.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_65_7]);
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
    goto label_206;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 28L) < ((unsigned long) (Wrd69.Lng))))
    goto label_206;
  (Wrd61.Obj) = ((Wrd67.pObj) [29]);

DEFLABEL (label_205)
  (Wrd80.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (Wrd84.Obj) = (current_block [OBJECT_65_9]);
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
    goto label_204;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  if (! (((unsigned long) 27L) < ((unsigned long) (Wrd97.Lng))))
    goto label_204;
  (Wrd89.Obj) = ((Wrd95.pObj) [28]);

DEFLABEL (label_203)
  (Wrd108.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd112.Obj) = (current_block [OBJECT_65_11]);
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
    goto label_202;
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd124.Obj) = ((Wrd123.pObj) [0]);
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd125.Lng))))
    goto label_202;
  (Wrd117.Obj) = ((Wrd123.pObj) [27]);

DEFLABEL (label_201)
  (Wrd136.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd117.Obj);
  (* (Rhp++)) = (Wrd136.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  (Wrd140.Obj) = (current_block [OBJECT_65_13]);
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
    goto label_200;
  (Wrd151.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd152.Obj) = ((Wrd151.pObj) [0]);
  (Wrd153.Lng) = (FIXNUM_TO_LONG (Wrd152.Obj));
  if (! (((unsigned long) 25L) < ((unsigned long) (Wrd153.Lng))))
    goto label_200;
  (Wrd145.Obj) = ((Wrd151.pObj) [26]);

DEFLABEL (label_199)
  (Wrd164.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd145.Obj);
  (* (Rhp++)) = (Wrd164.Obj);
  (Wrd163.pObj) = (& (Rhp [-2]));
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd163.pObj)));
  (Wrd168.Obj) = (current_block [OBJECT_65_15]);
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
    goto label_198;
  (Wrd179.pObj) = (OBJECT_ADDRESS (Wrd182.Obj));
  (Wrd180.Obj) = ((Wrd179.pObj) [0]);
  (Wrd181.Lng) = (FIXNUM_TO_LONG (Wrd180.Obj));
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd181.Lng))))
    goto label_198;
  (Wrd173.Obj) = ((Wrd179.pObj) [25]);

DEFLABEL (label_197)
  (Wrd192.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd173.Obj);
  (* (Rhp++)) = (Wrd192.Obj);
  (Wrd191.pObj) = (& (Rhp [-2]));
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd191.pObj)));
  (Wrd196.Obj) = (current_block [OBJECT_65_17]);
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
    goto label_196;
  (Wrd207.pObj) = (OBJECT_ADDRESS (Wrd210.Obj));
  (Wrd208.Obj) = ((Wrd207.pObj) [0]);
  (Wrd209.Lng) = (FIXNUM_TO_LONG (Wrd208.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd209.Lng))))
    goto label_196;
  (Wrd201.Obj) = ((Wrd207.pObj) [24]);

DEFLABEL (label_195)
  (Wrd220.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd201.Obj);
  (* (Rhp++)) = (Wrd220.Obj);
  (Wrd219.pObj) = (& (Rhp [-2]));
  (Wrd217.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd219.pObj)));
  (Wrd224.Obj) = (current_block [OBJECT_65_19]);
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
    goto label_194;
  (Wrd235.pObj) = (OBJECT_ADDRESS (Wrd238.Obj));
  (Wrd236.Obj) = ((Wrd235.pObj) [0]);
  (Wrd237.Lng) = (FIXNUM_TO_LONG (Wrd236.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd237.Lng))))
    goto label_194;
  (Wrd229.Obj) = ((Wrd235.pObj) [23]);

DEFLABEL (label_193)
  (Wrd248.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd229.Obj);
  (* (Rhp++)) = (Wrd248.Obj);
  (Wrd247.pObj) = (& (Rhp [-2]));
  (Wrd245.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd247.pObj)));
  (Wrd252.Obj) = (current_block [OBJECT_65_21]);
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
    goto label_192;
  (Wrd263.pObj) = (OBJECT_ADDRESS (Wrd266.Obj));
  (Wrd264.Obj) = ((Wrd263.pObj) [0]);
  (Wrd265.Lng) = (FIXNUM_TO_LONG (Wrd264.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd265.Lng))))
    goto label_192;
  (Wrd257.Obj) = ((Wrd263.pObj) [22]);

DEFLABEL (label_191)
  (Wrd276.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd257.Obj);
  (* (Rhp++)) = (Wrd276.Obj);
  (Wrd275.pObj) = (& (Rhp [-2]));
  (Wrd273.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd275.pObj)));
  (Wrd280.Obj) = (current_block [OBJECT_65_23]);
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
    goto label_190;
  (Wrd291.pObj) = (OBJECT_ADDRESS (Wrd294.Obj));
  (Wrd292.Obj) = ((Wrd291.pObj) [0]);
  (Wrd293.Lng) = (FIXNUM_TO_LONG (Wrd292.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd293.Lng))))
    goto label_190;
  (Wrd285.Obj) = ((Wrd291.pObj) [21]);

DEFLABEL (label_189)
  (Wrd304.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd285.Obj);
  (* (Rhp++)) = (Wrd304.Obj);
  (Wrd303.pObj) = (& (Rhp [-2]));
  (Wrd301.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd303.pObj)));
  (Wrd308.Obj) = (current_block [OBJECT_65_25]);
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
    goto label_188;
  (Wrd319.pObj) = (OBJECT_ADDRESS (Wrd322.Obj));
  (Wrd320.Obj) = ((Wrd319.pObj) [0]);
  (Wrd321.Lng) = (FIXNUM_TO_LONG (Wrd320.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd321.Lng))))
    goto label_188;
  (Wrd313.Obj) = ((Wrd319.pObj) [20]);

DEFLABEL (label_187)
  (Wrd332.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd313.Obj);
  (* (Rhp++)) = (Wrd332.Obj);
  (Wrd331.pObj) = (& (Rhp [-2]));
  (Wrd329.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd331.pObj)));
  (Wrd336.Obj) = (current_block [OBJECT_65_27]);
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
    goto label_186;
  (Wrd347.pObj) = (OBJECT_ADDRESS (Wrd350.Obj));
  (Wrd348.Obj) = ((Wrd347.pObj) [0]);
  (Wrd349.Lng) = (FIXNUM_TO_LONG (Wrd348.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd349.Lng))))
    goto label_186;
  (Wrd341.Obj) = ((Wrd347.pObj) [19]);

DEFLABEL (label_185)
  (Wrd360.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd341.Obj);
  (* (Rhp++)) = (Wrd360.Obj);
  (Wrd359.pObj) = (& (Rhp [-2]));
  (Wrd357.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd359.pObj)));
  (Wrd364.Obj) = (current_block [OBJECT_65_29]);
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
    goto label_184;
  (Wrd375.pObj) = (OBJECT_ADDRESS (Wrd378.Obj));
  (Wrd376.Obj) = ((Wrd375.pObj) [0]);
  (Wrd377.Lng) = (FIXNUM_TO_LONG (Wrd376.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd377.Lng))))
    goto label_184;
  (Wrd369.Obj) = ((Wrd375.pObj) [18]);

DEFLABEL (label_183)
  (Wrd388.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd369.Obj);
  (* (Rhp++)) = (Wrd388.Obj);
  (Wrd387.pObj) = (& (Rhp [-2]));
  (Wrd385.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd387.pObj)));
  (Wrd392.Obj) = (current_block [OBJECT_65_31]);
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
    goto label_182;
  (Wrd403.pObj) = (OBJECT_ADDRESS (Wrd406.Obj));
  (Wrd404.Obj) = ((Wrd403.pObj) [0]);
  (Wrd405.Lng) = (FIXNUM_TO_LONG (Wrd404.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd405.Lng))))
    goto label_182;
  (Wrd397.Obj) = ((Wrd403.pObj) [17]);

DEFLABEL (label_181)
  (Wrd416.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd397.Obj);
  (* (Rhp++)) = (Wrd416.Obj);
  (Wrd415.pObj) = (& (Rhp [-2]));
  (Wrd413.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd415.pObj)));
  (Wrd420.Obj) = (current_block [OBJECT_65_33]);
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
    goto label_180;
  (Wrd431.pObj) = (OBJECT_ADDRESS (Wrd434.Obj));
  (Wrd432.Obj) = ((Wrd431.pObj) [0]);
  (Wrd433.Lng) = (FIXNUM_TO_LONG (Wrd432.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd433.Lng))))
    goto label_180;
  (Wrd425.Obj) = ((Wrd431.pObj) [16]);

DEFLABEL (label_179)
  (Wrd444.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd425.Obj);
  (* (Rhp++)) = (Wrd444.Obj);
  (Wrd443.pObj) = (& (Rhp [-2]));
  (Wrd441.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd443.pObj)));
  (Wrd448.Obj) = (current_block [OBJECT_65_35]);
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
    goto label_178;
  (Wrd459.pObj) = (OBJECT_ADDRESS (Wrd462.Obj));
  (Wrd460.Obj) = ((Wrd459.pObj) [0]);
  (Wrd461.Lng) = (FIXNUM_TO_LONG (Wrd460.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd461.Lng))))
    goto label_178;
  (Wrd453.Obj) = ((Wrd459.pObj) [15]);

DEFLABEL (label_177)
  (Wrd472.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd453.Obj);
  (* (Rhp++)) = (Wrd472.Obj);
  (Wrd471.pObj) = (& (Rhp [-2]));
  (Wrd469.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd471.pObj)));
  (Wrd476.Obj) = (current_block [OBJECT_65_37]);
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
    goto label_176;
  (Wrd487.pObj) = (OBJECT_ADDRESS (Wrd490.Obj));
  (Wrd488.Obj) = ((Wrd487.pObj) [0]);
  (Wrd489.Lng) = (FIXNUM_TO_LONG (Wrd488.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd489.Lng))))
    goto label_176;
  (Wrd481.Obj) = ((Wrd487.pObj) [14]);

DEFLABEL (label_175)
  (Wrd500.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd481.Obj);
  (* (Rhp++)) = (Wrd500.Obj);
  (Wrd499.pObj) = (& (Rhp [-2]));
  (Wrd497.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd499.pObj)));
  (Wrd504.Obj) = (current_block [OBJECT_65_39]);
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
    goto label_174;
  (Wrd515.pObj) = (OBJECT_ADDRESS (Wrd518.Obj));
  (Wrd516.Obj) = ((Wrd515.pObj) [0]);
  (Wrd517.Lng) = (FIXNUM_TO_LONG (Wrd516.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd517.Lng))))
    goto label_174;
  (Wrd509.Obj) = ((Wrd515.pObj) [13]);

DEFLABEL (label_173)
  (Wrd528.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd509.Obj);
  (* (Rhp++)) = (Wrd528.Obj);
  (Wrd527.pObj) = (& (Rhp [-2]));
  (Wrd525.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd527.pObj)));
  (Wrd532.Obj) = (current_block [OBJECT_65_41]);
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
    goto label_172;
  (Wrd543.pObj) = (OBJECT_ADDRESS (Wrd546.Obj));
  (Wrd544.Obj) = ((Wrd543.pObj) [0]);
  (Wrd545.Lng) = (FIXNUM_TO_LONG (Wrd544.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd545.Lng))))
    goto label_172;
  (Wrd537.Obj) = ((Wrd543.pObj) [12]);

DEFLABEL (label_171)
  (Wrd556.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd537.Obj);
  (* (Rhp++)) = (Wrd556.Obj);
  (Wrd555.pObj) = (& (Rhp [-2]));
  (Wrd553.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd555.pObj)));
  (Wrd560.Obj) = (current_block [OBJECT_65_43]);
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
    goto label_170;
  (Wrd571.pObj) = (OBJECT_ADDRESS (Wrd574.Obj));
  (Wrd572.Obj) = ((Wrd571.pObj) [0]);
  (Wrd573.Lng) = (FIXNUM_TO_LONG (Wrd572.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd573.Lng))))
    goto label_170;
  (Wrd565.Obj) = ((Wrd571.pObj) [11]);

DEFLABEL (label_169)
  (Wrd584.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd565.Obj);
  (* (Rhp++)) = (Wrd584.Obj);
  (Wrd583.pObj) = (& (Rhp [-2]));
  (Wrd581.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd583.pObj)));
  (Wrd588.Obj) = (current_block [OBJECT_65_45]);
  (* (Rhp++)) = (Wrd588.Obj);
  (* (Rhp++)) = (Wrd581.Obj);
  (Wrd587.pObj) = (& (Rhp [-2]));
  (Wrd585.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd587.pObj)));
  (Wrd589.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd585.Obj);
  (* (Rhp++)) = (Wrd589.Obj);
  (Wrd591.pObj) = (& (Rhp [-2]));
  (Wrd592.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd591.pObj)));
  (* (--Rsp)) = (Wrd592.Obj);
  (Wrd602.Obj) = (Rsp [2]);
  (Wrd603.uLng) = (OBJECT_TYPE (Wrd602.Obj));
  if (! ((Wrd603.uLng) == 10))
    goto label_168;
  (Wrd599.pObj) = (OBJECT_ADDRESS (Wrd602.Obj));
  (Wrd600.Obj) = ((Wrd599.pObj) [0]);
  (Wrd601.Lng) = (FIXNUM_TO_LONG (Wrd600.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd601.Lng))))
    goto label_168;
  (Wrd593.Obj) = ((Wrd599.pObj) [10]);

DEFLABEL (label_167)
  (Wrd612.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd593.Obj);
  (* (Rhp++)) = (Wrd612.Obj);
  (Wrd611.pObj) = (& (Rhp [-2]));
  (Wrd609.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd611.pObj)));
  (Wrd616.Obj) = (current_block [OBJECT_65_47]);
  (* (Rhp++)) = (Wrd616.Obj);
  (* (Rhp++)) = (Wrd609.Obj);
  (Wrd615.pObj) = (& (Rhp [-2]));
  (Wrd613.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd615.pObj)));
  (Wrd617.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd613.Obj);
  (* (Rhp++)) = (Wrd617.Obj);
  (Wrd619.pObj) = (& (Rhp [-2]));
  (Wrd620.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd619.pObj)));
  (* (--Rsp)) = (Wrd620.Obj);
  (Wrd630.Obj) = (Rsp [2]);
  (Wrd631.uLng) = (OBJECT_TYPE (Wrd630.Obj));
  if (! ((Wrd631.uLng) == 10))
    goto label_166;
  (Wrd627.pObj) = (OBJECT_ADDRESS (Wrd630.Obj));
  (Wrd628.Obj) = ((Wrd627.pObj) [0]);
  (Wrd629.Lng) = (FIXNUM_TO_LONG (Wrd628.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd629.Lng))))
    goto label_166;
  (Wrd621.Obj) = ((Wrd627.pObj) [9]);

DEFLABEL (label_165)
  (Wrd640.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd621.Obj);
  (* (Rhp++)) = (Wrd640.Obj);
  (Wrd639.pObj) = (& (Rhp [-2]));
  (Wrd637.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd639.pObj)));
  (Wrd644.Obj) = (current_block [OBJECT_65_49]);
  (* (Rhp++)) = (Wrd644.Obj);
  (* (Rhp++)) = (Wrd637.Obj);
  (Wrd643.pObj) = (& (Rhp [-2]));
  (Wrd641.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd643.pObj)));
  (Wrd645.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd641.Obj);
  (* (Rhp++)) = (Wrd645.Obj);
  (Wrd647.pObj) = (& (Rhp [-2]));
  (Wrd648.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd647.pObj)));
  (* (--Rsp)) = (Wrd648.Obj);
  (Wrd658.Obj) = (Rsp [2]);
  (Wrd659.uLng) = (OBJECT_TYPE (Wrd658.Obj));
  if (! ((Wrd659.uLng) == 10))
    goto label_164;
  (Wrd655.pObj) = (OBJECT_ADDRESS (Wrd658.Obj));
  (Wrd656.Obj) = ((Wrd655.pObj) [0]);
  (Wrd657.Lng) = (FIXNUM_TO_LONG (Wrd656.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd657.Lng))))
    goto label_164;
  (Wrd649.Obj) = ((Wrd655.pObj) [8]);

DEFLABEL (label_163)
  (Wrd668.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd649.Obj);
  (* (Rhp++)) = (Wrd668.Obj);
  (Wrd667.pObj) = (& (Rhp [-2]));
  (Wrd665.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd667.pObj)));
  (Wrd672.Obj) = (current_block [OBJECT_65_51]);
  (* (Rhp++)) = (Wrd672.Obj);
  (* (Rhp++)) = (Wrd665.Obj);
  (Wrd671.pObj) = (& (Rhp [-2]));
  (Wrd669.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd671.pObj)));
  (Wrd673.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd669.Obj);
  (* (Rhp++)) = (Wrd673.Obj);
  (Wrd675.pObj) = (& (Rhp [-2]));
  (Wrd676.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd675.pObj)));
  (* (--Rsp)) = (Wrd676.Obj);
  (Wrd686.Obj) = (Rsp [2]);
  (Wrd687.uLng) = (OBJECT_TYPE (Wrd686.Obj));
  if (! ((Wrd687.uLng) == 10))
    goto label_162;
  (Wrd683.pObj) = (OBJECT_ADDRESS (Wrd686.Obj));
  (Wrd684.Obj) = ((Wrd683.pObj) [0]);
  (Wrd685.Lng) = (FIXNUM_TO_LONG (Wrd684.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd685.Lng))))
    goto label_162;
  (Wrd677.Obj) = ((Wrd683.pObj) [7]);

DEFLABEL (label_161)
  (Wrd696.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd677.Obj);
  (* (Rhp++)) = (Wrd696.Obj);
  (Wrd695.pObj) = (& (Rhp [-2]));
  (Wrd693.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd695.pObj)));
  (Wrd700.Obj) = (current_block [OBJECT_65_53]);
  (* (Rhp++)) = (Wrd700.Obj);
  (* (Rhp++)) = (Wrd693.Obj);
  (Wrd699.pObj) = (& (Rhp [-2]));
  (Wrd697.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd699.pObj)));
  (Wrd701.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd697.Obj);
  (* (Rhp++)) = (Wrd701.Obj);
  (Wrd703.pObj) = (& (Rhp [-2]));
  (Wrd704.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd703.pObj)));
  (* (--Rsp)) = (Wrd704.Obj);
  (Wrd714.Obj) = (Rsp [2]);
  (Wrd715.uLng) = (OBJECT_TYPE (Wrd714.Obj));
  if (! ((Wrd715.uLng) == 10))
    goto label_160;
  (Wrd711.pObj) = (OBJECT_ADDRESS (Wrd714.Obj));
  (Wrd712.Obj) = ((Wrd711.pObj) [0]);
  (Wrd713.Lng) = (FIXNUM_TO_LONG (Wrd712.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd713.Lng))))
    goto label_160;
  (Wrd705.Obj) = ((Wrd711.pObj) [6]);

DEFLABEL (label_159)
  (Wrd724.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd705.Obj);
  (* (Rhp++)) = (Wrd724.Obj);
  (Wrd723.pObj) = (& (Rhp [-2]));
  (Wrd721.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd723.pObj)));
  (Wrd728.Obj) = (current_block [OBJECT_65_54]);
  (* (Rhp++)) = (Wrd728.Obj);
  (* (Rhp++)) = (Wrd721.Obj);
  (Wrd727.pObj) = (& (Rhp [-2]));
  (Wrd725.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd727.pObj)));
  (Wrd729.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd725.Obj);
  (* (Rhp++)) = (Wrd729.Obj);
  (Wrd731.pObj) = (& (Rhp [-2]));
  (Wrd732.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd731.pObj)));
  (* (--Rsp)) = (Wrd732.Obj);
  (Wrd742.Obj) = (Rsp [2]);
  (Wrd743.uLng) = (OBJECT_TYPE (Wrd742.Obj));
  if (! ((Wrd743.uLng) == 10))
    goto label_158;
  (Wrd739.pObj) = (OBJECT_ADDRESS (Wrd742.Obj));
  (Wrd740.Obj) = ((Wrd739.pObj) [0]);
  (Wrd741.Lng) = (FIXNUM_TO_LONG (Wrd740.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd741.Lng))))
    goto label_158;
  (Wrd733.Obj) = ((Wrd739.pObj) [5]);

DEFLABEL (label_157)
  (Wrd752.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd733.Obj);
  (* (Rhp++)) = (Wrd752.Obj);
  (Wrd751.pObj) = (& (Rhp [-2]));
  (Wrd749.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd751.pObj)));
  (Wrd756.Obj) = (current_block [OBJECT_65_56]);
  (* (Rhp++)) = (Wrd756.Obj);
  (* (Rhp++)) = (Wrd749.Obj);
  (Wrd755.pObj) = (& (Rhp [-2]));
  (Wrd753.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd755.pObj)));
  (Wrd757.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd753.Obj);
  (* (Rhp++)) = (Wrd757.Obj);
  (Wrd759.pObj) = (& (Rhp [-2]));
  (Wrd760.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd759.pObj)));
  (* (--Rsp)) = (Wrd760.Obj);
  (Wrd770.Obj) = (Rsp [2]);
  (Wrd771.uLng) = (OBJECT_TYPE (Wrd770.Obj));
  if (! ((Wrd771.uLng) == 10))
    goto label_156;
  (Wrd767.pObj) = (OBJECT_ADDRESS (Wrd770.Obj));
  (Wrd768.Obj) = ((Wrd767.pObj) [0]);
  (Wrd769.Lng) = (FIXNUM_TO_LONG (Wrd768.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd769.Lng))))
    goto label_156;
  (Wrd761.Obj) = ((Wrd767.pObj) [4]);

DEFLABEL (label_155)
  (Wrd780.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd761.Obj);
  (* (Rhp++)) = (Wrd780.Obj);
  (Wrd779.pObj) = (& (Rhp [-2]));
  (Wrd777.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd779.pObj)));
  (Wrd784.Obj) = (current_block [OBJECT_65_58]);
  (* (Rhp++)) = (Wrd784.Obj);
  (* (Rhp++)) = (Wrd777.Obj);
  (Wrd783.pObj) = (& (Rhp [-2]));
  (Wrd781.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd783.pObj)));
  (Wrd785.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd781.Obj);
  (* (Rhp++)) = (Wrd785.Obj);
  (Wrd787.pObj) = (& (Rhp [-2]));
  (Wrd788.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd787.pObj)));
  (* (--Rsp)) = (Wrd788.Obj);
  (Wrd798.Obj) = (Rsp [2]);
  (Wrd799.uLng) = (OBJECT_TYPE (Wrd798.Obj));
  if (! ((Wrd799.uLng) == 10))
    goto label_154;
  (Wrd795.pObj) = (OBJECT_ADDRESS (Wrd798.Obj));
  (Wrd796.Obj) = ((Wrd795.pObj) [0]);
  (Wrd797.Lng) = (FIXNUM_TO_LONG (Wrd796.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd797.Lng))))
    goto label_154;
  (Wrd789.Obj) = ((Wrd795.pObj) [3]);

DEFLABEL (label_153)
  (Wrd808.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd789.Obj);
  (* (Rhp++)) = (Wrd808.Obj);
  (Wrd807.pObj) = (& (Rhp [-2]));
  (Wrd805.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd807.pObj)));
  (Wrd812.Obj) = (current_block [OBJECT_65_60]);
  (* (Rhp++)) = (Wrd812.Obj);
  (* (Rhp++)) = (Wrd805.Obj);
  (Wrd811.pObj) = (& (Rhp [-2]));
  (Wrd809.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd811.pObj)));
  (Wrd813.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd809.Obj);
  (* (Rhp++)) = (Wrd813.Obj);
  (Wrd816.pObj) = (& (Rhp [-2]));
  (Wrd814.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd816.pObj)));
  (Rsp [1]) = (Wrd814.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_37]));

DEFLABEL (label_154)
  (Wrd800.Obj) = (Rsp [2]);
  (Wrd801.Obj) = (current_block [OBJECT_65_59]);
  (Wrd804.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_36]))));
  (* (--Rsp)) = (Wrd804.Obj);
  (* (--Rsp)) = (Wrd801.Obj);
  (* (--Rsp)) = (Wrd800.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_150)
  (Wrd789.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  (Wrd772.Obj) = (Rsp [2]);
  (Wrd773.Obj) = (current_block [OBJECT_65_57]);
  (Wrd776.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_35]))));
  (* (--Rsp)) = (Wrd776.Obj);
  (* (--Rsp)) = (Wrd773.Obj);
  (* (--Rsp)) = (Wrd772.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_149)
  (Wrd761.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  (Wrd744.Obj) = (Rsp [2]);
  (Wrd745.Obj) = (current_block [OBJECT_65_55]);
  (Wrd748.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_34]))));
  (* (--Rsp)) = (Wrd748.Obj);
  (* (--Rsp)) = (Wrd745.Obj);
  (* (--Rsp)) = (Wrd744.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_148)
  (Wrd733.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  (Wrd716.Obj) = (Rsp [2]);
  (Wrd717.Obj) = (current_block [OBJECT_65_0]);
  (Wrd720.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_33]))));
  (* (--Rsp)) = (Wrd720.Obj);
  (* (--Rsp)) = (Wrd717.Obj);
  (* (--Rsp)) = (Wrd716.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_147)
  (Wrd705.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  (Wrd688.Obj) = (Rsp [2]);
  (Wrd689.Obj) = (current_block [OBJECT_65_52]);
  (Wrd692.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_32]))));
  (* (--Rsp)) = (Wrd692.Obj);
  (* (--Rsp)) = (Wrd689.Obj);
  (* (--Rsp)) = (Wrd688.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_146)
  (Wrd677.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  (Wrd660.Obj) = (Rsp [2]);
  (Wrd661.Obj) = (current_block [OBJECT_65_50]);
  (Wrd664.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_31]))));
  (* (--Rsp)) = (Wrd664.Obj);
  (* (--Rsp)) = (Wrd661.Obj);
  (* (--Rsp)) = (Wrd660.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_145)
  (Wrd649.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  (Wrd632.Obj) = (Rsp [2]);
  (Wrd633.Obj) = (current_block [OBJECT_65_48]);
  (Wrd636.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_30]))));
  (* (--Rsp)) = (Wrd636.Obj);
  (* (--Rsp)) = (Wrd633.Obj);
  (* (--Rsp)) = (Wrd632.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_144)
  (Wrd621.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  (Wrd604.Obj) = (Rsp [2]);
  (Wrd605.Obj) = (current_block [OBJECT_65_46]);
  (Wrd608.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_29]))));
  (* (--Rsp)) = (Wrd608.Obj);
  (* (--Rsp)) = (Wrd605.Obj);
  (* (--Rsp)) = (Wrd604.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_143)
  (Wrd593.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  (Wrd576.Obj) = (Rsp [2]);
  (Wrd577.Obj) = (current_block [OBJECT_65_44]);
  (Wrd580.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_28]))));
  (* (--Rsp)) = (Wrd580.Obj);
  (* (--Rsp)) = (Wrd577.Obj);
  (* (--Rsp)) = (Wrd576.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_142)
  (Wrd565.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  (Wrd548.Obj) = (Rsp [2]);
  (Wrd549.Obj) = (current_block [OBJECT_65_42]);
  (Wrd552.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_27]))));
  (* (--Rsp)) = (Wrd552.Obj);
  (* (--Rsp)) = (Wrd549.Obj);
  (* (--Rsp)) = (Wrd548.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_141)
  (Wrd537.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  (Wrd520.Obj) = (Rsp [2]);
  (Wrd521.Obj) = (current_block [OBJECT_65_40]);
  (Wrd524.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_26]))));
  (* (--Rsp)) = (Wrd524.Obj);
  (* (--Rsp)) = (Wrd521.Obj);
  (* (--Rsp)) = (Wrd520.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_140)
  (Wrd509.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd492.Obj) = (Rsp [2]);
  (Wrd493.Obj) = (current_block [OBJECT_65_38]);
  (Wrd496.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_25]))));
  (* (--Rsp)) = (Wrd496.Obj);
  (* (--Rsp)) = (Wrd493.Obj);
  (* (--Rsp)) = (Wrd492.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_139)
  (Wrd481.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd464.Obj) = (Rsp [2]);
  (Wrd465.Obj) = (current_block [OBJECT_65_36]);
  (Wrd468.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_24]))));
  (* (--Rsp)) = (Wrd468.Obj);
  (* (--Rsp)) = (Wrd465.Obj);
  (* (--Rsp)) = (Wrd464.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_138)
  (Wrd453.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  (Wrd436.Obj) = (Rsp [2]);
  (Wrd437.Obj) = (current_block [OBJECT_65_34]);
  (Wrd440.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_23]))));
  (* (--Rsp)) = (Wrd440.Obj);
  (* (--Rsp)) = (Wrd437.Obj);
  (* (--Rsp)) = (Wrd436.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_137)
  (Wrd425.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  (Wrd408.Obj) = (Rsp [2]);
  (Wrd409.Obj) = (current_block [OBJECT_65_32]);
  (Wrd412.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_22]))));
  (* (--Rsp)) = (Wrd412.Obj);
  (* (--Rsp)) = (Wrd409.Obj);
  (* (--Rsp)) = (Wrd408.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_136)
  (Wrd397.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  (Wrd380.Obj) = (Rsp [2]);
  (Wrd381.Obj) = (current_block [OBJECT_65_30]);
  (Wrd384.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_21]))));
  (* (--Rsp)) = (Wrd384.Obj);
  (* (--Rsp)) = (Wrd381.Obj);
  (* (--Rsp)) = (Wrd380.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_135)
  (Wrd369.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  (Wrd352.Obj) = (Rsp [2]);
  (Wrd353.Obj) = (current_block [OBJECT_65_28]);
  (Wrd356.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_20]))));
  (* (--Rsp)) = (Wrd356.Obj);
  (* (--Rsp)) = (Wrd353.Obj);
  (* (--Rsp)) = (Wrd352.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_134)
  (Wrd341.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  (Wrd324.Obj) = (Rsp [2]);
  (Wrd325.Obj) = (current_block [OBJECT_65_26]);
  (Wrd328.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_19]))));
  (* (--Rsp)) = (Wrd328.Obj);
  (* (--Rsp)) = (Wrd325.Obj);
  (* (--Rsp)) = (Wrd324.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_133)
  (Wrd313.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  (Wrd296.Obj) = (Rsp [2]);
  (Wrd297.Obj) = (current_block [OBJECT_65_24]);
  (Wrd300.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_18]))));
  (* (--Rsp)) = (Wrd300.Obj);
  (* (--Rsp)) = (Wrd297.Obj);
  (* (--Rsp)) = (Wrd296.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_132)
  (Wrd285.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  (Wrd268.Obj) = (Rsp [2]);
  (Wrd269.Obj) = (current_block [OBJECT_65_22]);
  (Wrd272.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_17]))));
  (* (--Rsp)) = (Wrd272.Obj);
  (* (--Rsp)) = (Wrd269.Obj);
  (* (--Rsp)) = (Wrd268.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_131)
  (Wrd257.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd240.Obj) = (Rsp [2]);
  (Wrd241.Obj) = (current_block [OBJECT_65_20]);
  (Wrd244.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_16]))));
  (* (--Rsp)) = (Wrd244.Obj);
  (* (--Rsp)) = (Wrd241.Obj);
  (* (--Rsp)) = (Wrd240.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_130)
  (Wrd229.Obj) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  (Wrd212.Obj) = (Rsp [2]);
  (Wrd213.Obj) = (current_block [OBJECT_65_18]);
  (Wrd216.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_15]))));
  (* (--Rsp)) = (Wrd216.Obj);
  (* (--Rsp)) = (Wrd213.Obj);
  (* (--Rsp)) = (Wrd212.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_129)
  (Wrd201.Obj) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  (Wrd184.Obj) = (Rsp [2]);
  (Wrd185.Obj) = (current_block [OBJECT_65_16]);
  (Wrd188.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_14]))));
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  (* (--Rsp)) = (Wrd184.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_128)
  (Wrd173.Obj) = Rvl;
  goto label_197;

DEFLABEL (label_200)
  (Wrd156.Obj) = (Rsp [2]);
  (Wrd157.Obj) = (current_block [OBJECT_65_14]);
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_13]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_127)
  (Wrd145.Obj) = Rvl;
  goto label_199;

DEFLABEL (label_202)
  (Wrd128.Obj) = (Rsp [2]);
  (Wrd129.Obj) = (current_block [OBJECT_65_12]);
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_12]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_126)
  (Wrd117.Obj) = Rvl;
  goto label_201;

DEFLABEL (label_204)
  (Wrd100.Obj) = (Rsp [2]);
  (Wrd101.Obj) = (current_block [OBJECT_65_10]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_11]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_125)
  (Wrd89.Obj) = Rvl;
  goto label_203;

DEFLABEL (label_206)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (current_block [OBJECT_65_8]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_10]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_124)
  (Wrd61.Obj) = Rvl;
  goto label_205;

DEFLABEL (label_208)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (current_block [OBJECT_65_6]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_123)
  (Wrd33.Obj) = Rvl;
  goto label_207;

DEFLABEL (label_210)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_65_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_122)
  (Wrd5.Obj) = Rvl;
  goto label_209;

DEFLABEL (label_212)
  (Wrd25.Obj) = (current_block [OBJECT_65_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_121)
  (* (--Rsp)) = Rvl;
  goto label_211;

DEFLABEL (label_214)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_6])), (Wrd11.pObj));

DEFLABEL (label_120)
  (Wrd10.Obj) = Rvl;
  goto label_213;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_6 5
#define LABEL_66_5 7
#define LABEL_66_9 9
#define LABEL_66_8 11
#define LABEL_66_11 13
#define LABEL_66_13 15
#define LABEL_66_14 17
#define LABEL_66_15 19
#define LABEL_66_17 21
#define LABEL_66_18 23
#define LABEL_66_19 25
#define LABEL_66_20 27
#define ENVIRONMENT_LABEL_66_3 50
#define DEBUGGING_LABEL_66_2 49
#define OBJECT_66_4 48
#define OBJECT_66_3 47
#define OBJECT_66_2 46
#define OBJECT_66_1 45
#define OBJECT_66_0 44
#define EXECUTE_CACHE_66_16 29
#define EXECUTE_CACHE_66_12 31
#define EXECUTE_CACHE_66_10 33
#define EXECUTE_CACHE_66_7 35
#define FREE_REFERENCE_66_3 38
#define FREE_REFERENCE_66_2 39
#define FREE_REFERENCE_66_1 40
#define FREE_REFERENCE_66_0 41
#define FREE_ASSIGNMENT_66_0 43
#define FREE_REFERENCES_LABEL_66_0 28
#define NUMBER_OF_LINKER_SECTIONS_66_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd75;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_66_4);
      goto make_procedure_12;

    case 1:
      current_block = (Rpc - LABEL_66_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_66_9);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_66_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_66_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_66_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_66_14);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_66_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_66_17);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_66_18);
      goto label_18;

    case 11:
      current_block = (Rpc - LABEL_66_19);
      goto label_19;

    case 12:
      current_block = (Rpc - LABEL_66_20);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_procedure_22)
DEFLABEL (make_procedure_12)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_40;
  Wrd10 = Wrd14;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [9]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_38;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_38;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_37)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_66_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_66_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_66_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_36;
  Wrd6 = Wrd10;

DEFLABEL (label_35)
  (Wrd12.Obj) = (Rsp [3]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_24;
  (Wrd13.Obj) = (current_block [OBJECT_66_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_23;

DEFLABEL (label_24)
  (Wrd18.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_23)
DEFLABEL (label_34)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_66_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_33;
  Wrd6 = Wrd10;

DEFLABEL (label_32)
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (* (Rsp++));
  (Wrd14.Obj) = (* (Rsp++));
  (Wrd15.Obj) = (* (Rsp++));
  (Wrd16.Obj) = (* (Rsp++));
  (Wrd45.Obj) = (MAKE_OBJECT (0, 31));
  (Wrd47.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.Obj) = (Rsp [6]);
  (Wrd38.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_66_2]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd18.pObj) = (& (Rhp [-32]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_3]));
  (Wrd53.Obj) = ((Wrd50.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_31;
  Wrd49 = Wrd53;

DEFLABEL (label_30)
  (Wrd58.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_0]));
  (Wrd67.Obj) = ((Wrd59.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd59.pObj) [0]) = (Wrd55.Obj);

DEFLABEL (label_27)
  (Wrd82.Obj) = (Rsp [2]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 10))
    goto label_26;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd81.Lng))))
    goto label_26;
  (Wrd75.Obj) = (Rsp [0]);
  ((Wrd79.pObj) [8]) = (Wrd75.Obj);

DEFLABEL (label_25)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd84.Obj) = (Rsp [2]);
  (Wrd85.Obj) = (current_block [OBJECT_66_3]);
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_20]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_4]), 3);

DEFLABEL (label_20)
  goto label_25;

DEFLABEL (label_29)
  if ((Wrd67.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_19])), (Wrd59.pObj), (Wrd55.Obj));

DEFLABEL (label_19)
  goto label_27;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_18])), (Wrd50.pObj));

DEFLABEL (label_18)
  (Wrd49.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_17])), (Wrd7.pObj));

DEFLABEL (label_17)
  (Wrd6.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_14])), (Wrd7.pObj));

DEFLABEL (label_16)
  (Wrd6.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd19.Obj) = (Rsp [9]);
  (Wrd20.Obj) = (current_block [OBJECT_66_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_6])), (Wrd11.pObj));

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_6 5
#define LABEL_67_7 7
#define LABEL_67_8 9
#define LABEL_67_9 11
#define LABEL_67_10 13
#define LABEL_67_13 15
#define LABEL_67_5 17
#define LABEL_67_12 19
#define LABEL_67_11 21
#define LABEL_67_15 23
#define TAG_67_16 10
#define LABEL_67_18 25
#define LABEL_67_21 27
#define LABEL_67_20 29
#define ENVIRONMENT_LABEL_67_3 48
#define DEBUGGING_LABEL_67_2 47
#define OBJECT_67_5 46
#define OBJECT_67_4 45
#define OBJECT_67_3 44
#define OBJECT_67_2 43
#define OBJECT_67_1 42
#define OBJECT_67_0 41
#define EXECUTE_CACHE_67_22 31
#define EXECUTE_CACHE_67_19 33
#define EXECUTE_CACHE_67_17 35
#define EXECUTE_CACHE_67_14 37
#define FREE_REFERENCE_67_0 40
#define FREE_REFERENCES_LABEL_67_0 30
#define NUMBER_OF_LINKER_SECTIONS_67_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd80;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd77;
  machine_word Wrd96;
  machine_word Wrd74;
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
      current_block = (Rpc - LABEL_67_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_67_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_67_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_67_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_67_9);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_67_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_67_13);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_67_12);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_67_11);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_67_15);
      goto lambda_25;

    case 11:
      current_block = (Rpc - LABEL_67_18);
      goto lambda_12;

    case 12:
      current_block = (Rpc - LABEL_67_21);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_67_20);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_24)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_39;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_39;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_38)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_37;
  Wrd25 = Wrd29;

DEFLABEL (label_36)
  Wrd24 = Wrd25;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_35;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_35;
  (Wrd31.Obj) = ((Wrd35.pObj) [2]);

DEFLABEL (label_34)
  (Wrd44.Obj) = (* (Rsp++));
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_33;
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd49.uLng) == 26))
    goto label_33;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) (Wrd50.Lng)) < ((unsigned long) (Wrd53.Lng))))
    goto label_33;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd48.pObj) = (& ((Wrd51.pObj) [(Wrd46.Lng)]));
  (Wrd45.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_32)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_31;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd66.Lng))))
    goto label_31;
  (Wrd61.Obj) = ((Wrd64.pObj) [3]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_30)
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.Obj) = (current_block [OBJECT_67_4]);
  if ((Wrd73.Obj) == (Wrd74.Obj))
    goto label_29;
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_12]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd87.Obj) = (Rsp [4]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 10))
    goto label_28;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd86.Lng))))
    goto label_28;
  (Wrd80.Obj) = ((Wrd84.pObj) [15]);
  (* (--Rsp)) = (Wrd80.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_14]));

DEFLABEL (label_28)
  (Wrd89.Obj) = (Rsp [4]);
  (Wrd90.Obj) = (current_block [OBJECT_67_5]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_13]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_11]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  goto label_27;

DEFLABEL (label_31)
  (Wrd69.Obj) = (current_block [OBJECT_67_0]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_10]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_3]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_9]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_19)
  (Wrd45.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd40.Obj) = (current_block [OBJECT_67_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_3]), 2);

DEFLABEL (label_18)
  (Wrd31.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_7])), (Wrd26.pObj));

DEFLABEL (label_17)
  (Wrd25.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_67_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_67_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_15])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_67_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_18]))));
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_67_15);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_19]));

DEFLABEL (lambda_26)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_67_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_41;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd16.Lng))))
    goto label_41;
  (Wrd10.Obj) = ((Wrd14.pObj) [15]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_67_20);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_22]));

DEFLABEL (label_41)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_67_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define ENVIRONMENT_LABEL_68_3 12
#define DEBUGGING_LABEL_68_2 11
#define EXECUTE_CACHE_68_7 7
#define EXECUTE_CACHE_68_6 9
#define FREE_REFERENCES_LABEL_68_0 6
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto unparse_label_1;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_label_4)
DEFLABEL (unparse_label_1)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define ENVIRONMENT_LABEL_69_3 14
#define DEBUGGING_LABEL_69_2 13
#define OBJECT_69_2 12
#define OBJECT_69_1 11
#define OBJECT_69_0 10
#define FREE_REFERENCE_69_0 9
#define FREE_REFERENCES_LABEL_69_0 8
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_69_4);
      goto rvalue_procedureP_1;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_procedureP_6)
DEFLABEL (rvalue_procedureP_1)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_0]));
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
  Rvl = (current_block [OBJECT_69_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_69_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_6 7
#define LABEL_70_7 9
#define LABEL_70_8 11
#define ENVIRONMENT_LABEL_70_3 20
#define DEBUGGING_LABEL_70_2 19
#define OBJECT_70_3 18
#define OBJECT_70_2 17
#define OBJECT_70_1 16
#define OBJECT_70_0 15
#define FREE_REFERENCE_70_1 13
#define FREE_REFERENCE_70_0 14
#define FREE_REFERENCES_LABEL_70_0 12
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_70_4);
      goto rvalue_true_procedureP_3;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_70_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_70_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_70_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_true_procedureP_10)
DEFLABEL (rvalue_true_procedureP_3)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
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
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_19;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_18)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_17;
  Wrd30 = Wrd34;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_15;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd44.Lng))))
    goto label_15;
  (Wrd36.Obj) = ((Wrd42.pObj) [3]);

DEFLABEL (label_14)
  (Wrd52.Obj) = (* (Rsp++));
  if (! ((Wrd36.Obj) == (Wrd52.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_70_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_70_2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_8]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_8)
  (Wrd36.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_7])), (Wrd31.pObj));

DEFLABEL (label_7)
  (Wrd30.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_70_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_6 5
#define LABEL_71_5 7
#define LABEL_71_8 9
#define LABEL_71_9 11
#define LABEL_71_11 13
#define LABEL_71_10 15
#define LABEL_71_12 17
#define LABEL_71_13 19
#define ENVIRONMENT_LABEL_71_3 29
#define DEBUGGING_LABEL_71_2 28
#define OBJECT_71_4 27
#define OBJECT_71_3 26
#define OBJECT_71_2 25
#define OBJECT_71_1 24
#define OBJECT_71_0 23
#define EXECUTE_CACHE_71_7 21
#define FREE_REFERENCES_LABEL_71_0 20
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_71_4);
      goto procedure_arity_correctP_9;

    case 1:
      current_block = (Rpc - LABEL_71_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_71_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_71_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_71_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_71_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_71_12);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_71_13);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_arity_correctP_18)
DEFLABEL (procedure_arity_correctP_9)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_36;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_36;
  (Wrd10.Obj) = ((Wrd14.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_34;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_34;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd57.Lng) < (Wrd59.Lng))
    goto label_33;

DEFLABEL (label_32)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_31;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd45.Lng))))
    goto label_31;
  (Wrd17.Obj) = ((Wrd43.pObj) [8]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_71_4]);

DEFLABEL (label_19)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_30;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd30.Lng))))
    goto label_30;
  (Wrd24.Obj) = ((Wrd28.pObj) [7]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_71_10);
  (Wrd5.Obj) = Rvl;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_28;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_28;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd15.Lng) = ((Wrd17.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_28;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_27)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_26;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_26;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd33.Lng) > (Wrd34.Lng))
    goto label_23;

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_71_4]);
  goto label_22;

DEFLABEL (label_23)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_22)
DEFLABEL (label_25)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_23;

DEFLABEL (label_28)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_15)
  (Wrd11.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (current_block [OBJECT_71_3]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_11]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_71_2]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_20;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_19;

DEFLABEL (label_34)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_33;

DEFLABEL (label_36)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_71_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_6 5
#define LABEL_72_7 7
#define LABEL_72_5 9
#define LABEL_72_9 11
#define LABEL_72_11 13
#define LABEL_72_12 15
#define LABEL_72_10 17
#define LABEL_72_13 19
#define LABEL_72_14 21
#define LABEL_72_15 23
#define LABEL_72_16 25
#define LABEL_72_17 27
#define TAG_72_18 12
#define ENVIRONMENT_LABEL_72_3 38
#define DEBUGGING_LABEL_72_2 37
#define OBJECT_72_5 36
#define OBJECT_72_4 35
#define OBJECT_72_3 34
#define OBJECT_72_2 33
#define OBJECT_72_1 32
#define OBJECT_72_0 31
#define EXECUTE_CACHE_72_8 29
#define FREE_REFERENCES_LABEL_72_0 28
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_72_4);
      goto procedure_arity_encoding_14;

    case 1:
      current_block = (Rpc - LABEL_72_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_72_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_72_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_72_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_72_12);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_72_10);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_72_13);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_72_14);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_72_15);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_72_16);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_72_17);
      goto lambda_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_arity_encoding_25)
DEFLABEL (procedure_arity_encoding_14)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_44;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_44;
  (Wrd8.Obj) = ((Wrd14.pObj) [6]);

DEFLABEL (label_43)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_42;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (Wrd5.Obj) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_40;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd12.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_40;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_39)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_38;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd25.Lng))))
    goto label_38;
  (Wrd19.Obj) = ((Wrd23.pObj) [7]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_72_10);
  (Wrd5.Obj) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_36;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_36;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_36;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_35)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_34;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd62.Lng))))
    goto label_34;
  (Wrd24.Obj) = ((Wrd60.pObj) [8]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;

DEFLABEL (label_32)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_31;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd45.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_31;
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));

DEFLABEL (label_30)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_29;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd53.Lng) = (0 - (Wrd56.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd53.Lng)))
    goto label_29;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd53.Lng));

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_27)
  (Rsp [2]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_72_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_72_17])));
  Rhp += 2;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  Wrd33 = Wrd30;
  (Wrd34.Obj) = (Rsp [1]);
  ((Wrd33.pObj) [2]) = (Wrd34.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  ((Wrd33.pObj) [3]) = (Wrd32.Obj);
  Rvl = (Wrd29.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd47.Obj) = (current_block [OBJECT_72_5]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_16]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_22)
  (Wrd27.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_15]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_21)
  (Wrd40.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd27.Obj) = (Rsp [1]);
  goto label_28;

DEFLABEL (label_34)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.Obj) = (current_block [OBJECT_72_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_14]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_32;

DEFLABEL (label_36)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.Obj) = (current_block [OBJECT_72_3]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_72_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_43;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_72_12);
  (Wrd27.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_72_17);

DEFLABEL (lambda_10)
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

#define LABEL_73_4 3
#define LABEL_73_5 5
#define ENVIRONMENT_LABEL_73_3 9
#define DEBUGGING_LABEL_73_2 8
#define OBJECT_73_1 7
#define OBJECT_73_0 6
#define FREE_REFERENCES_LABEL_73_0 6
#define NUMBER_OF_LINKER_SECTIONS_73_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_73_4);
      goto procedure_closing_block_1;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_closing_block_5)
DEFLABEL (procedure_closing_block_1)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_73_0]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

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
  (Wrd17.Obj) = (current_block [OBJECT_73_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define ENVIRONMENT_LABEL_74_3 10
#define DEBUGGING_LABEL_74_2 9
#define OBJECT_74_2 8
#define OBJECT_74_1 7
#define OBJECT_74_0 6
#define FREE_REFERENCES_LABEL_74_0 6
#define NUMBER_OF_LINKER_SECTIONS_74_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_74_4);
      goto procedure_continuation_lvalue_1;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_continuation_lvalue_5)
DEFLABEL (procedure_continuation_lvalue_1)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_6;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd23.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_2]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_74_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define ENVIRONMENT_LABEL_75_3 10
#define DEBUGGING_LABEL_75_2 9
#define OBJECT_75_2 8
#define OBJECT_75_1 7
#define OBJECT_75_0 6
#define FREE_REFERENCES_LABEL_75_0 6
#define NUMBER_OF_LINKER_SECTIONS_75_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_75_4);
      goto procedure_required_arguments_1;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_required_arguments_5)
DEFLABEL (procedure_required_arguments_1)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_6;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd23.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_2]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_75_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define ENVIRONMENT_LABEL_76_3 12
#define DEBUGGING_LABEL_76_2 11
#define OBJECT_76_1 10
#define OBJECT_76_0 9
#define EXECUTE_CACHE_76_6 7
#define FREE_REFERENCES_LABEL_76_0 6
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_76_4);
      goto procedure_entry_node_1;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_entry_node_5)
DEFLABEL (procedure_entry_node_1)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [11]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_76_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_6 7
#define ENVIRONMENT_LABEL_77_3 16
#define DEBUGGING_LABEL_77_2 15
#define OBJECT_77_1 14
#define OBJECT_77_0 13
#define EXECUTE_CACHE_77_8 9
#define EXECUTE_CACHE_77_7 11
#define FREE_REFERENCES_LABEL_77_0 8
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_77_4);
      goto set_procedure_entry_nodeB_3;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_77_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_procedure_entry_nodeB_7)
DEFLABEL (set_procedure_entry_nodeB_3)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [11]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_77_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_8]));

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_77_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define ENVIRONMENT_LABEL_78_3 11
#define DEBUGGING_LABEL_78_2 10
#define OBJECT_78_0 9
#define EXECUTE_CACHE_78_6 7
#define FREE_REFERENCES_LABEL_78_0 6
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_78_4);
      goto closure_procedure_needs_operatorP_1;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_procedure_needs_operatorP_4)
DEFLABEL (closure_procedure_needs_operatorP_1)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_78_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_6 7
#define ENVIRONMENT_LABEL_79_3 14
#define DEBUGGING_LABEL_79_2 13
#define OBJECT_79_4 12
#define OBJECT_79_3 11
#define OBJECT_79_2 10
#define OBJECT_79_1 9
#define OBJECT_79_0 8
#define FREE_REFERENCES_LABEL_79_0 8
#define NUMBER_OF_LINKER_SECTIONS_79_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_79_4);
      goto procedure_application_uniqueP_2;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_79_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_application_uniqueP_7)
DEFLABEL (procedure_application_uniqueP_2)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd5.Obj) = ((Wrd11.pObj) [16]);

DEFLABEL (label_13)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_12;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_11)
  if ((Wrd21.Obj) == (current_block [OBJECT_79_3]))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_79_4]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_2]), 1);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_79_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_6 5
#define LABEL_80_5 7
#define LABEL_80_8 9
#define ENVIRONMENT_LABEL_80_3 20
#define DEBUGGING_LABEL_80_2 19
#define OBJECT_80_5 18
#define OBJECT_80_4 17
#define OBJECT_80_3 16
#define OBJECT_80_2 15
#define OBJECT_80_1 14
#define OBJECT_80_0 13
#define EXECUTE_CACHE_80_7 11
#define FREE_REFERENCES_LABEL_80_0 10
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_80_4);
      goto delete_procedure_applicationB_5;

    case 1:
      current_block = (Rpc - LABEL_80_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_80_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_procedure_applicationB_10)
DEFLABEL (delete_procedure_applicationB_5)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_18;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd16.Lng))))
    goto label_18;
  (Wrd10.Obj) = ((Wrd14.pObj) [16]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_17)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (* (--Rsp)) = Rvl;
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_16;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd33.Lng))))
    goto label_16;
  ((Wrd31.pObj) [16]) = Rvl;

DEFLABEL (label_15)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_80_3]))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_80_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (current_block [OBJECT_80_4]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd24.uLng) == 10)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_2]), 3);

DEFLABEL (label_14)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd22.Lng))))
    goto label_13;
  ((Wrd20.pObj) [17]) = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_16)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_80_0]);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_2]), 3);

DEFLABEL (label_8)
  goto label_15;

DEFLABEL (label_18)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_80_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_6 5
#define LABEL_81_5 7
#define ENVIRONMENT_LABEL_81_3 15
#define DEBUGGING_LABEL_81_2 14
#define OBJECT_81_2 13
#define OBJECT_81_1 12
#define OBJECT_81_0 11
#define EXECUTE_CACHE_81_7 9
#define FREE_REFERENCES_LABEL_81_0 8
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_81_4);
      goto procedure_get_3;

    case 1:
      current_block = (Rpc - LABEL_81_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_get_7)
DEFLABEL (procedure_get_3)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd10.Obj) = ((Wrd14.pObj) [30]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_8;
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 1);

DEFLABEL (label_8)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_81_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_6 5
#define LABEL_82_5 7
#define LABEL_82_8 9
#define ENVIRONMENT_LABEL_82_3 19
#define DEBUGGING_LABEL_82_2 18
#define OBJECT_82_4 17
#define OBJECT_82_3 16
#define OBJECT_82_2 15
#define OBJECT_82_1 14
#define OBJECT_82_0 13
#define EXECUTE_CACHE_82_7 11
#define FREE_REFERENCES_LABEL_82_0 10
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_82_4);
      goto procedure_putB_6;

    case 1:
      current_block = (Rpc - LABEL_82_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_82_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_82_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_putB_11)
DEFLABEL (procedure_putB_6)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_19;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd16.Lng))))
    goto label_19;
  (Wrd10.Obj) = ((Wrd14.pObj) [30]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_18)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_82_5);
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
  Rvl = (current_block [OBJECT_82_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_4]), 2);

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_17;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd24.Lng))))
    goto label_17;
  (Wrd16.Obj) = ((Wrd22.pObj) [30]);

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
  (Wrd40.Obj) = (current_block [OBJECT_82_0]);
  (Rsp [2]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 10)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 3);

DEFLABEL (label_15)
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd51.Lng))))
    goto label_14;
  (Wrd44.Obj) = (Rsp [2]);
  ((Wrd49.pObj) [30]) = (Wrd44.Obj);
  Rvl = (current_block [OBJECT_82_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (current_block [OBJECT_82_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_9)
  (Wrd16.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_82_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_6 5
#define LABEL_83_5 7
#define ENVIRONMENT_LABEL_83_3 16
#define DEBUGGING_LABEL_83_2 15
#define OBJECT_83_3 14
#define OBJECT_83_2 13
#define OBJECT_83_1 12
#define OBJECT_83_0 11
#define EXECUTE_CACHE_83_7 9
#define FREE_REFERENCES_LABEL_83_0 8
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_83_4);
      goto procedure_removeB_2;

    case 1:
      current_block = (Rpc - LABEL_83_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_removeB_6)
DEFLABEL (procedure_removeB_2)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_10;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd17.Lng))))
    goto label_10;
  (Wrd11.Obj) = ((Wrd15.pObj) [30]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_9)
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_83_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_3]), 3);

DEFLABEL (label_8)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd17.Lng))))
    goto label_7;
  ((Wrd15.pObj) [30]) = Rvl;
  Rvl = (current_block [OBJECT_83_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_83_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define ENVIRONMENT_LABEL_84_3 9
#define DEBUGGING_LABEL_84_2 8
#define OBJECT_84_0 7
#define EXECUTE_CACHE_84_5 5
#define FREE_REFERENCES_LABEL_84_0 4
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_84_4);
      goto procedure_simplifiedP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_simplifiedP_3)
DEFLABEL (procedure_simplifiedP_0)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_84_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define ENVIRONMENT_LABEL_85_3 9
#define DEBUGGING_LABEL_85_2 8
#define OBJECT_85_0 7
#define EXECUTE_CACHE_85_5 5
#define FREE_REFERENCES_LABEL_85_0 4
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_85_4);
      goto procedure_trivialP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_trivialP_3)
DEFLABEL (procedure_trivialP_0)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_85_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_6 7
#define LABEL_86_8 9
#define LABEL_86_9 11
#define LABEL_86_10 13
#define ENVIRONMENT_LABEL_86_3 27
#define DEBUGGING_LABEL_86_2 26
#define OBJECT_86_6 25
#define OBJECT_86_5 24
#define OBJECT_86_4 23
#define OBJECT_86_3 22
#define OBJECT_86_2 21
#define OBJECT_86_1 20
#define OBJECT_86_0 19
#define EXECUTE_CACHE_86_11 15
#define EXECUTE_CACHE_86_7 17
#define FREE_REFERENCES_LABEL_86_0 14
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd7;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  INVOKE_INTERFACE_DECLS
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
      goto procedure_inline_codeP_7;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_86_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_86_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_86_9);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_86_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_inline_codeP_14)
DEFLABEL (procedure_inline_codeP_7)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_26;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd21.Lng))))
    goto label_26;
  (Wrd7.Obj) = ((Wrd19.pObj) [8]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_86_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = Rvl;

DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_25;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd45.Lng))))
    goto label_25;
  (Wrd11.Obj) = ((Wrd43.pObj) [17]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_24)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_23;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd23.Lng))))
    goto label_23;
  (Wrd15.Obj) = ((Wrd21.pObj) [16]);

DEFLABEL (label_22)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_21;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd31.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_20)
  if (! ((Wrd31.Obj) == (current_block [OBJECT_86_6])))
    goto label_19;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_11]));

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_21)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_5]), 1);

DEFLABEL (label_11)
  (Wrd31.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (current_block [OBJECT_86_4]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_10)
  (Wrd15.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (current_block [OBJECT_86_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_24;

DEFLABEL (label_26)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (current_block [OBJECT_86_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define ENVIRONMENT_LABEL_87_3 10
#define DEBUGGING_LABEL_87_2 9
#define OBJECT_87_2 8
#define OBJECT_87_1 7
#define OBJECT_87_0 6
#define FREE_REFERENCES_LABEL_87_0 6
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_87_4);
      goto open_procedure_needs_static_linkP_1;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_procedure_needs_static_linkP_5)
DEFLABEL (open_procedure_needs_static_linkP_1)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_87_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [18]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_87_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define ENVIRONMENT_LABEL_88_3 12
#define DEBUGGING_LABEL_88_2 11
#define OBJECT_88_1 10
#define OBJECT_88_0 9
#define EXECUTE_CACHE_88_6 7
#define FREE_REFERENCES_LABEL_88_0 6
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_88_4);
      goto open_procedure_needs_dynamic_linkP_1;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_procedure_needs_dynamic_linkP_5)
DEFLABEL (open_procedure_needs_dynamic_linkP_1)
  INTERRUPT_CHECK (26, LABEL_88_4);
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
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_88_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define LABEL_89_6 7
#define LABEL_89_7 9
#define LABEL_89_8 11
#define LABEL_89_13 13
#define LABEL_89_14 15
#define LABEL_89_9 17
#define LABEL_89_11 19
#define ENVIRONMENT_LABEL_89_3 43
#define DEBUGGING_LABEL_89_2 42
#define OBJECT_89_10 41
#define OBJECT_89_9 40
#define OBJECT_89_8 39
#define OBJECT_89_7 38
#define OBJECT_89_6 37
#define OBJECT_89_5 36
#define OBJECT_89_4 35
#define OBJECT_89_3 34
#define OBJECT_89_2 33
#define OBJECT_89_1 32
#define OBJECT_89_0 31
#define EXECUTE_CACHE_89_15 21
#define EXECUTE_CACHE_89_12 23
#define EXECUTE_CACHE_89_10 25
#define FREE_REFERENCE_89_2 28
#define FREE_REFERENCE_89_1 29
#define FREE_REFERENCE_89_0 30
#define FREE_REFERENCES_LABEL_89_0 20
#define NUMBER_OF_LINKER_SECTIONS_89_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd70;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_89_4);
      goto procedure_type_10;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_89_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_89_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_89_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_89_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_89_14);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_89_9);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_89_11);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_type_19)
DEFLABEL (procedure_type_10)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_43;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_43;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_42)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_41;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_41;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_40)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_89_0]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_39;
  Wrd38 = Wrd42;

DEFLABEL (label_38)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_28;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_89_1]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_27;
  Wrd46 = Wrd50;

DEFLABEL (label_26)
  (Wrd52.Obj) = (Rsp [0]);
  if (! ((Wrd52.Obj) == (Wrd46.Obj)))
    goto label_20;
  Rvl = (current_block [OBJECT_89_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_89_2]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_25;
  Wrd54 = Wrd58;

DEFLABEL (label_24)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == (Wrd54.Obj))
    goto label_22;
  (Wrd61.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd61.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_89_6]);
  (Rsp [1]) = (Wrd62.Obj);
  goto label_21;

DEFLABEL (label_22)
  (Wrd64.Obj) = (current_block [OBJECT_89_5]);
  (Rsp [1]) = (Wrd64.Obj);

DEFLABEL (label_21)
DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_15]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89_14])), (Wrd55.pObj));

DEFLABEL (label_16)
  (Wrd54.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89_13])), (Wrd47.pObj));

DEFLABEL (label_15)
  (Wrd46.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd86.Obj) = (Rsp [2]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 10))
    goto label_37;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd85.Lng))))
    goto label_37;
  (Wrd70.Obj) = ((Wrd83.pObj) [19]);
  if ((Wrd70.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;

DEFLABEL (label_32)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_11]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_89_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = (current_block [OBJECT_89_10]);
  goto label_29;

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_89_9]);

DEFLABEL (label_29)
DEFLABEL (label_31)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_9]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_89_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  Rvl = (current_block [OBJECT_89_8]);
  goto label_34;

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_89_7]);

DEFLABEL (label_34)
DEFLABEL (label_36)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd88.Obj) = (Rsp [2]);
  (Wrd89.Obj) = (current_block [OBJECT_89_3]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_32;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89_7])), (Wrd39.pObj));

DEFLABEL (label_14)
  (Wrd38.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_89_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_89_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define ENVIRONMENT_LABEL_90_3 12
#define DEBUGGING_LABEL_90_2 11
#define OBJECT_90_1 10
#define OBJECT_90_0 9
#define EXECUTE_CACHE_90_6 7
#define FREE_REFERENCES_LABEL_90_0 6
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_90_4);
      goto procedure_icP_1;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_icP_5)
DEFLABEL (procedure_icP_1)
  INTERRUPT_CHECK (26, LABEL_90_4);
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
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_90_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define LABEL_91_7 7
#define LABEL_91_6 9
#define ENVIRONMENT_LABEL_91_3 18
#define DEBUGGING_LABEL_91_2 17
#define OBJECT_91_3 16
#define OBJECT_91_2 15
#define OBJECT_91_1 14
#define OBJECT_91_0 13
#define EXECUTE_CACHE_91_8 11
#define FREE_REFERENCES_LABEL_91_0 10
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd7;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_91_4);
      goto procedure_closureP_3;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_91_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_91_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_closureP_8)
DEFLABEL (procedure_closureP_3)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_16;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd35.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd33.pObj) [19]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_10;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_15;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd22.Lng))))
    goto label_15;
  (Wrd16.Obj) = ((Wrd20.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_91_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_91_3]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_91_2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_91_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_6 7
#define LABEL_92_7 9
#define LABEL_92_9 11
#define ENVIRONMENT_LABEL_92_3 21
#define DEBUGGING_LABEL_92_2 20
#define OBJECT_92_2 19
#define OBJECT_92_1 18
#define OBJECT_92_0 17
#define EXECUTE_CACHE_92_10 13
#define EXECUTE_CACHE_92_8 15
#define FREE_REFERENCES_LABEL_92_0 12
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd45;
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
      current_block = (Rpc - LABEL_92_4);
      goto procedure_trivial_closureP_7;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_92_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_92_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_92_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_trivial_closureP_12)
DEFLABEL (procedure_trivial_closureP_7)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_23)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_22;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_22;
  (Wrd21.Obj) = ((Wrd25.pObj) [4]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd21.Obj);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  (Wrd45.Obj) = (current_block [OBJECT_92_2]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_13)
DEFLABEL (label_20)
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (Wrd37.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_92_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_92_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_92_2]);

DEFLABEL (label_17)
DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd30.Obj) = (current_block [OBJECT_92_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

DEFLABEL (label_10)
  (Wrd21.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_92_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define ENVIRONMENT_LABEL_93_3 10
#define DEBUGGING_LABEL_93_2 9
#define OBJECT_93_2 8
#define OBJECT_93_1 7
#define OBJECT_93_0 6
#define FREE_REFERENCES_LABEL_93_0 6
#define NUMBER_OF_LINKER_SECTIONS_93_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_93_4);
      goto procedure_openP_1;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_openP_5)
DEFLABEL (procedure_openP_1)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd16.pObj) [19]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_93_2]);

DEFLABEL (label_6)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_93_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define ENVIRONMENT_LABEL_94_3 12
#define DEBUGGING_LABEL_94_2 11
#define OBJECT_94_1 10
#define OBJECT_94_0 9
#define EXECUTE_CACHE_94_6 7
#define FREE_REFERENCES_LABEL_94_0 6
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_94_4);
      goto procedure_externalP_1;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_externalP_5)
DEFLABEL (procedure_externalP_1)
  INTERRUPT_CHECK (26, LABEL_94_4);
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
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_94_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define ENVIRONMENT_LABEL_95_3 12
#define DEBUGGING_LABEL_95_2 11
#define OBJECT_95_1 10
#define OBJECT_95_0 9
#define EXECUTE_CACHE_95_6 7
#define FREE_REFERENCES_LABEL_95_0 6
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_95_4);
      goto procedure_internalP_1;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_internalP_5)
DEFLABEL (procedure_internalP_1)
  INTERRUPT_CHECK (26, LABEL_95_4);
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
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_95_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define LABEL_96_6 7
#define ENVIRONMENT_LABEL_96_3 15
#define DEBUGGING_LABEL_96_2 14
#define OBJECT_96_2 13
#define OBJECT_96_1 12
#define OBJECT_96_0 11
#define EXECUTE_CACHE_96_7 9
#define FREE_REFERENCES_LABEL_96_0 8
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_96_4);
      goto procedure_open_externalP_2;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_96_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_open_externalP_7)
DEFLABEL (procedure_open_externalP_2)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_12;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd32.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd30.pObj) [19]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_11;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_11;
  (Wrd9.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_7]));

DEFLABEL (label_11)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_96_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 2);

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_12)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_96_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define LABEL_97_5 5
#define LABEL_97_6 7
#define ENVIRONMENT_LABEL_97_3 15
#define DEBUGGING_LABEL_97_2 14
#define OBJECT_97_2 13
#define OBJECT_97_1 12
#define OBJECT_97_0 11
#define EXECUTE_CACHE_97_7 9
#define FREE_REFERENCES_LABEL_97_0 8
#define NUMBER_OF_LINKER_SECTIONS_97_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_97_4);
      goto procedure_open_internalP_2;

    case 1:
      current_block = (Rpc - LABEL_97_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_97_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_open_internalP_7)
DEFLABEL (procedure_open_internalP_2)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_12;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd32.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd30.pObj) [19]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_11;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_11;
  (Wrd9.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_7]));

DEFLABEL (label_11)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_97_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_1]), 2);

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_12)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_97_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define LABEL_98_5 5
#define LABEL_98_6 7
#define ENVIRONMENT_LABEL_98_3 17
#define DEBUGGING_LABEL_98_2 16
#define OBJECT_98_2 15
#define OBJECT_98_1 14
#define OBJECT_98_0 13
#define EXECUTE_CACHE_98_8 9
#define EXECUTE_CACHE_98_7 11
#define FREE_REFERENCES_LABEL_98_0 8
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd7;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_98_4);
      goto procedure_virtually_openP_4;

    case 1:
      current_block = (Rpc - LABEL_98_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_98_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_virtually_openP_8)
DEFLABEL (procedure_virtually_openP_4)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_15;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd24.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd22.pObj) [19]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_11)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  (Wrd9.Obj) = (current_block [OBJECT_98_2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_9)
DEFLABEL (label_14)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_98_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_8]));

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_98_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_5]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_5 5
#define LABEL_99_6 7
#define ENVIRONMENT_LABEL_99_3 16
#define DEBUGGING_LABEL_99_2 15
#define OBJECT_99_1 14
#define OBJECT_99_0 13
#define EXECUTE_CACHE_99_8 9
#define EXECUTE_CACHE_99_7 11
#define FREE_REFERENCES_LABEL_99_0 8
#define NUMBER_OF_LINKER_SECTIONS_99_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_99_4);
      goto procedure_trivial_or_virtualP_3;

    case 1:
      current_block = (Rpc - LABEL_99_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_99_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_trivial_or_virtualP_7)
DEFLABEL (procedure_trivial_or_virtualP_3)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd11.pObj) [27]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_99_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_8]));

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_99_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define LABEL_100_5 5
#define LABEL_100_8 7
#define LABEL_100_9 9
#define LABEL_100_6 11
#define LABEL_100_10 13
#define ENVIRONMENT_LABEL_100_3 27
#define DEBUGGING_LABEL_100_2 26
#define OBJECT_100_6 25
#define OBJECT_100_5 24
#define OBJECT_100_4 23
#define OBJECT_100_3 22
#define OBJECT_100_2 21
#define OBJECT_100_1 20
#define OBJECT_100_0 19
#define EXECUTE_CACHE_100_11 15
#define EXECUTE_CACHE_100_7 17
#define FREE_REFERENCES_LABEL_100_0 14
#define NUMBER_OF_LINKER_SECTIONS_100_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd43;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
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
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_100_4);
      goto add_closure_reasonB_11;

    case 1:
      current_block = (Rpc - LABEL_100_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_100_8);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_100_9);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_100_6);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_100_10);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_closure_reasonB_17)
DEFLABEL (add_closure_reasonB_11)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 27L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd7.Obj) = ((Wrd11.pObj) [28]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_31)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_100_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd7.Obj) = (Rsp [4]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_100_3]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 1))
    goto label_24;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_23)
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_100_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd56.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd56.Obj);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_22;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_21)
  (Wrd69.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Rsp [4]) = (Wrd66.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_20;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = (Rsp [1]);
  ((Wrd72.pObj) [1]) = (Wrd73.Obj);
  Rvl = (current_block [OBJECT_100_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_4]), 2);

DEFLABEL (label_22)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_9]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_2]), 1);

DEFLABEL (label_15)
  (Wrd57.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_2]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  (Wrd24.Obj) = (Rsp [4]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd30.Obj) = (current_block [OBJECT_100_5]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  goto label_26;

DEFLABEL (label_27)
  (Wrd26.Obj) = (current_block [OBJECT_100_5]);

DEFLABEL (label_26)
DEFLABEL (label_30)
  (Wrd34.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Rsp [4]) = (Wrd35.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_100_0]);
  (Rsp [3]) = (Wrd39.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 10)
    goto label_29;

DEFLABEL (label_28)
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_6]), 3);

DEFLABEL (label_29)
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 27L) < ((unsigned long) (Wrd50.Lng))))
    goto label_28;
  (Wrd43.Obj) = (Rsp [2]);
  ((Wrd48.pObj) [28]) = (Wrd43.Obj);
  Rvl = (current_block [OBJECT_100_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_100_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define LABEL_101_5 5
#define LABEL_101_6 7
#define LABEL_101_8 9
#define LABEL_101_9 11
#define LABEL_101_7 13
#define LABEL_101_11 15
#define ENVIRONMENT_LABEL_101_3 25
#define DEBUGGING_LABEL_101_2 24
#define OBJECT_101_4 23
#define OBJECT_101_3 22
#define OBJECT_101_2 21
#define OBJECT_101_1 20
#define OBJECT_101_0 19
#define EXECUTE_CACHE_101_10 17
#define FREE_REFERENCES_LABEL_101_0 16
#define NUMBER_OF_LINKER_SECTIONS_101_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_101_4);
      goto closure_procedure_needs_external_descriptorP_10;

    case 1:
      current_block = (Rpc - LABEL_101_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_101_6);
      goto loop_8;

    case 3:
      current_block = (Rpc - LABEL_101_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_101_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_101_7);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_101_11);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_procedure_needs_external_descriptorP_17)
DEFLABEL (closure_procedure_needs_external_descriptorP_10)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 27L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd5.Obj) = ((Wrd11.pObj) [28]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_8;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_101_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (loop_18)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_101_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_101_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_28;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_27)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_26;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_101_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_8;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_4]), 1);

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_3]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_3]), 1);

DEFLABEL (label_13)
  (Wrd13.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define LABEL_102_5 5
#define LABEL_102_6 7
#define LABEL_102_7 9
#define LABEL_102_8 11
#define LABEL_102_10 13
#define LABEL_102_11 15
#define ENVIRONMENT_LABEL_102_3 28
#define DEBUGGING_LABEL_102_2 27
#define OBJECT_102_7 26
#define OBJECT_102_6 25
#define OBJECT_102_5 24
#define OBJECT_102_4 23
#define OBJECT_102_3 22
#define OBJECT_102_2 21
#define OBJECT_102_1 20
#define OBJECT_102_0 19
#define EXECUTE_CACHE_102_9 17
#define FREE_REFERENCES_LABEL_102_0 16
#define NUMBER_OF_LINKER_SECTIONS_102_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
proced_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd24;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd7;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_102_4);
      goto procedure_maybe_registerizableP_7;

    case 1:
      current_block = (Rpc - LABEL_102_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_102_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_102_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_102_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_102_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_102_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_maybe_registerizableP_15)
DEFLABEL (procedure_maybe_registerizableP_7)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_29;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd44.Lng))))
    goto label_29;
  (Wrd7.Obj) = ((Wrd42.pObj) [17]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_28;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd19.Lng))))
    goto label_28;
  (Wrd11.Obj) = ((Wrd17.pObj) [16]);

DEFLABEL (label_27)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_26;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd27.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_25)
  if (! ((Wrd27.Obj) == (current_block [OBJECT_102_4])))
    goto label_16;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_102_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_24;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_23)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_22;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd34.Lng))))
    goto label_22;
  (Wrd24.Obj) = ((Wrd32.pObj) [21]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_20)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_102_7]);

DEFLABEL (label_18)
DEFLABEL (label_21)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd37.Obj) = (current_block [OBJECT_102_6]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_20;

DEFLABEL (label_24)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_102_5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_3]), 1);

DEFLABEL (label_10)
  (Wrd27.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_102_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_9)
  (Wrd11.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (current_block [OBJECT_102_0]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_5]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_17;

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
#define LABEL_25 35
#define LABEL_24 37
#define LABEL_26 39
#define LABEL_28 41
#define LABEL_27 43
#define LABEL_29 45
#define LABEL_30 47
#define LABEL_31 49
#define ENVIRONMENT_LABEL_3 91
#define DEBUGGING_LABEL_2 90
#define PURIFICATION_ROOT 89
#define OBJECT_21 88
#define OBJECT_20 87
#define OBJECT_19 86
#define OBJECT_18 85
#define OBJECT_17 84
#define OBJECT_16 83
#define OBJECT_15 82
#define OBJECT_14 81
#define OBJECT_13 80
#define OBJECT_12 79
#define OBJECT_11 78
#define OBJECT_10 77
#define OBJECT_9 76
#define OBJECT_8 75
#define OBJECT_7 74
#define OBJECT_6 73
#define OBJECT_5 72
#define OBJECT_4 71
#define OBJECT_3 70
#define OBJECT_2 69
#define OBJECT_1 68
#define OBJECT_0 67
#define EXECUTE_CACHE_20 51
#define EXECUTE_CACHE_12 53
#define EXECUTE_CACHE_8 55
#define FREE_REFERENCE_5 58
#define FREE_REFERENCE_4 59
#define FREE_REFERENCE_3 60
#define FREE_REFERENCE_2 61
#define FREE_REFERENCE_1 62
#define FREE_REFERENCE_0 63
#define GLOBAL_EXECUTE_CACHE_14 65
#define FREE_REFERENCES_LABEL_0 50
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
proced_so_8510cb384c7632e5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto label_15;

    case 1:
      current_block = (Rpc - LABEL_7);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_4);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11);
      goto label_17;

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
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto label_21;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto label_22;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_11;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto label_23;

    case 20:
      current_block = (Rpc - LABEL_27);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto label_26;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto label_27;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto expression_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_14)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_30])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_27)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_26)
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
	1,
	1,
	0,
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
	1,
	1,
	1,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
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
    if (counter > 102)
      goto label_25;
    blocks = (current_block [OBJECT_21]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_29])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_25)
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
    goto label_45;
  Wrd12 = Wrd16;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_43;
  Wrd19 = Wrd23;

DEFLABEL (label_42)
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
    goto label_41;
  Wrd11 = Wrd15;

DEFLABEL (label_40)
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
    goto label_39;
  Wrd6 = Wrd10;

DEFLABEL (label_38)
  Wrd5 = Wrd6;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_37;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd24.Lng))))
    goto label_37;
  (Wrd19.Obj) = (current_block [OBJECT_6]);
  ((Wrd22.pObj) [6]) = (Wrd19.Obj);

DEFLABEL (label_36)
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
    goto label_35;
  Wrd9 = Wrd13;

DEFLABEL (label_34)
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
    goto label_33;
  Wrd8 = Wrd12;

DEFLABEL (label_32)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_31;
  Wrd8 = Wrd12;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_29;
  Wrd8 = Wrd12;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_20]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd9.pObj));

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd10.pObj));

DEFLABEL (label_20)
  (Wrd9.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd27.Obj) = (current_block [OBJECT_7]);
  (Wrd28.Obj) = (current_block [OBJECT_6]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (label_19)
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd7.pObj));

DEFLABEL (label_18)
  (Wrd6.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd20.pObj));

DEFLABEL (label_16)
  (Wrd19.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6])), (Wrd13.pObj));

DEFLABEL (label_15)
  (Wrd12.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_proced_so_8510cb384c7632e5 [102] =
  {
    { "proced_so_code_1", 1, proced_so_code_1 },
    { "proced_so_code_2", 1, proced_so_code_2 },
    { "proced_so_code_3", 1, proced_so_code_3 },
    { "proced_so_code_4", 1, proced_so_code_4 },
    { "proced_so_code_5", 1, proced_so_code_5 },
    { "proced_so_code_6", 1, proced_so_code_6 },
    { "proced_so_code_7", 1, proced_so_code_7 },
    { "proced_so_code_8", 1, proced_so_code_8 },
    { "proced_so_code_9", 1, proced_so_code_9 },
    { "proced_so_code_10", 1, proced_so_code_10 },
    { "proced_so_code_11", 1, proced_so_code_11 },
    { "proced_so_code_12", 1, proced_so_code_12 },
    { "proced_so_code_13", 1, proced_so_code_13 },
    { "proced_so_code_14", 1, proced_so_code_14 },
    { "proced_so_code_15", 1, proced_so_code_15 },
    { "proced_so_code_16", 1, proced_so_code_16 },
    { "proced_so_code_17", 1, proced_so_code_17 },
    { "proced_so_code_18", 1, proced_so_code_18 },
    { "proced_so_code_19", 1, proced_so_code_19 },
    { "proced_so_code_20", 1, proced_so_code_20 },
    { "proced_so_code_21", 1, proced_so_code_21 },
    { "proced_so_code_22", 1, proced_so_code_22 },
    { "proced_so_code_23", 1, proced_so_code_23 },
    { "proced_so_code_24", 1, proced_so_code_24 },
    { "proced_so_code_25", 1, proced_so_code_25 },
    { "proced_so_code_26", 1, proced_so_code_26 },
    { "proced_so_code_27", 1, proced_so_code_27 },
    { "proced_so_code_28", 1, proced_so_code_28 },
    { "proced_so_code_29", 1, proced_so_code_29 },
    { "proced_so_code_30", 1, proced_so_code_30 },
    { "proced_so_code_31", 1, proced_so_code_31 },
    { "proced_so_code_32", 1, proced_so_code_32 },
    { "proced_so_code_33", 1, proced_so_code_33 },
    { "proced_so_code_34", 1, proced_so_code_34 },
    { "proced_so_code_35", 1, proced_so_code_35 },
    { "proced_so_code_36", 1, proced_so_code_36 },
    { "proced_so_code_37", 1, proced_so_code_37 },
    { "proced_so_code_38", 1, proced_so_code_38 },
    { "proced_so_code_39", 1, proced_so_code_39 },
    { "proced_so_code_40", 1, proced_so_code_40 },
    { "proced_so_code_41", 1, proced_so_code_41 },
    { "proced_so_code_42", 1, proced_so_code_42 },
    { "proced_so_code_43", 1, proced_so_code_43 },
    { "proced_so_code_44", 1, proced_so_code_44 },
    { "proced_so_code_45", 1, proced_so_code_45 },
    { "proced_so_code_46", 1, proced_so_code_46 },
    { "proced_so_code_47", 1, proced_so_code_47 },
    { "proced_so_code_48", 1, proced_so_code_48 },
    { "proced_so_code_49", 1, proced_so_code_49 },
    { "proced_so_code_50", 1, proced_so_code_50 },
    { "proced_so_code_51", 1, proced_so_code_51 },
    { "proced_so_code_52", 1, proced_so_code_52 },
    { "proced_so_code_53", 1, proced_so_code_53 },
    { "proced_so_code_54", 1, proced_so_code_54 },
    { "proced_so_code_55", 1, proced_so_code_55 },
    { "proced_so_code_56", 1, proced_so_code_56 },
    { "proced_so_code_57", 1, proced_so_code_57 },
    { "proced_so_code_58", 1, proced_so_code_58 },
    { "proced_so_code_59", 1, proced_so_code_59 },
    { "proced_so_code_60", 1, proced_so_code_60 },
    { "proced_so_code_61", 1, proced_so_code_61 },
    { "proced_so_code_62", 1, proced_so_code_62 },
    { "proced_so_code_63", 1, proced_so_code_63 },
    { "proced_so_code_64", 1, proced_so_code_64 },
    { "proced_so_code_65", 33, proced_so_code_65 },
    { "proced_so_code_66", 13, proced_so_code_66 },
    { "proced_so_code_67", 14, proced_so_code_67 },
    { "proced_so_code_68", 2, proced_so_code_68 },
    { "proced_so_code_69", 3, proced_so_code_69 },
    { "proced_so_code_70", 5, proced_so_code_70 },
    { "proced_so_code_71", 9, proced_so_code_71 },
    { "proced_so_code_72", 13, proced_so_code_72 },
    { "proced_so_code_73", 2, proced_so_code_73 },
    { "proced_so_code_74", 2, proced_so_code_74 },
    { "proced_so_code_75", 2, proced_so_code_75 },
    { "proced_so_code_76", 2, proced_so_code_76 },
    { "proced_so_code_77", 3, proced_so_code_77 },
    { "proced_so_code_78", 2, proced_so_code_78 },
    { "proced_so_code_79", 3, proced_so_code_79 },
    { "proced_so_code_80", 4, proced_so_code_80 },
    { "proced_so_code_81", 3, proced_so_code_81 },
    { "proced_so_code_82", 4, proced_so_code_82 },
    { "proced_so_code_83", 3, proced_so_code_83 },
    { "proced_so_code_84", 1, proced_so_code_84 },
    { "proced_so_code_85", 1, proced_so_code_85 },
    { "proced_so_code_86", 6, proced_so_code_86 },
    { "proced_so_code_87", 2, proced_so_code_87 },
    { "proced_so_code_88", 2, proced_so_code_88 },
    { "proced_so_code_89", 9, proced_so_code_89 },
    { "proced_so_code_90", 2, proced_so_code_90 },
    { "proced_so_code_91", 4, proced_so_code_91 },
    { "proced_so_code_92", 5, proced_so_code_92 },
    { "proced_so_code_93", 2, proced_so_code_93 },
    { "proced_so_code_94", 2, proced_so_code_94 },
    { "proced_so_code_95", 2, proced_so_code_95 },
    { "proced_so_code_96", 3, proced_so_code_96 },
    { "proced_so_code_97", 3, proced_so_code_97 },
    { "proced_so_code_98", 3, proced_so_code_98 },
    { "proced_so_code_99", 3, proced_so_code_99 },
    { "proced_so_code_100", 6, proced_so_code_100 },
    { "proced_so_code_101", 7, proced_so_code_101 },
    { "proced_so_code_102", 7, proced_so_code_102 }
  };

int
decl_proced_so_8510cb384c7632e5 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_proced_so_8510cb384c7632e5);
  return (0);
}

DECLARE_COMPILED_CODE ("proced.so", 24, decl_proced_so_8510cb384c7632e5, proced_so_8510cb384c7632e5)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_proced_so_data_8510cb384c7632e5 [8287] =
  "\xcb\x01\x93\x01\xfa\x11\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9"
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
  "\x0d\x1c\x82\x0d\x1c\x83\x0d\x1c\x84\x0d\x1c\x0d\x1c\x86\x0d\x1c"
  "\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02"
  "\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d"
  "\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c\x02\x0d\x1c"
  "\x02\x0d\x1c\x0d\x1c\x08\x89\x02\x0d\x1c\x0d\x1c\x08\x89\x02\x0d"
  "\x1c\x02\x0d\x1c\x02\x0d\x1c\x0d\x1c\x08\x89\x02\x0d\x1c\x02\x0d"
  "\x1c\x08\xb1\x02\xc2\x1c\x85\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x08\xb1\x81\x0d\x1c\x25\x0d"
  "\x0d\x1c\x0d\x1c\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x0d\x1c\x1b\x81\xb1\x82\x0d\x24\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x80\x1b\x24\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x82\xb1"
  "\x80\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x86\x02\xb1\x85\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x02\x86\xc1\x1c\xb1\x85"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x83\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc1\x1c\xb1\x85\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\xb1\x85\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x02\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\x02\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x1b\xb1\x02\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x08\xb3"
  "\xb1\x02\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\xb1\x02\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\xb3\x1d\xb1\x02"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x1d\xb1\x02\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x0d\x1c\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x02\x02\x1b\xb1\x02\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb1\x83\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x83\x28\x0d\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x0d\x0d\x0c\x0c\x0d\x02\x82"
  "\xb1\x83\x0d\x0d\x0d\x24\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x83\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x83\xb1\x02\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb1\x83\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x02\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x83\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x83\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\xb1\x02"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x83\xb1\x02\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\xb1\x02\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb3\x08\x1b\x1d\x1b\xb1\x02\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x08\x8c\xb1\x02\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x83\x08\x1b\x02\xb1\x02\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0d\x0d\x0d"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x17\x0d\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x2a\x0d\x1b\x99\x1b\x2a"
  "\x1e\x99\xc3\x85\x1b\x2a\x0d\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d"
  "\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d"
  "\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d"
  "\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d"
  "\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a"
  "\xb6\x2a\xb5\x2a\xb4\x2a\xb2\x2a\x17\xc3\x1b\x1b\x28\x0d\x26\x0d"
  "\x1b\x1b\x0d\x0d\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x73\x65\x2f\x70"
  "\x72\x6f\x63\x65\x64\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x19\x04\x83\x04\x03\x02"
  "\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02\x1a\x04\x84"
  "\x06\x03\x02\x1b\x04\x83\x04\x03\x02\x02\x1c\x04\x84\x06\x03\x02"
  "\x1d\x04\x83\x04\x03\x02\x02\x1e\x04\x84\x06\x03\x09\x02\x08\x1f"
  "\x04\x83\x04\x03\x0a\x02\x09\x02\x20\x04\x84\x06\x03\x0b\x02\x0a"
  "\x21\x04\x83\x04\x03\x0c\x02\x0b\x02\x22\x04\x84\x06\x03\x0d\x02"
  "\x0c\x08\x23\x04\x83\x04\x03\x0e\x02\x0d\x02\x08\x24\x04\x84\x06"
  "\x03\x0f\x02\x0e\x09\x25\x04\x83\x04\x03\x10\x02\x0f\x02\x09\x26"
  "\x04\x84\x06\x03\x11\x02\x10\x0a\x27\x04\x83\x04\x03\x12\x02\x11"
  "\x02\x0a\x28\x04\x84\x06\x03\x13\x02\x12\x0b\x29\x04\x83\x04\x03"
  "\x14\x02\x13\x02\x0b\x2a\x04\x84\x06\x03\x15\x02\x14\x0c\x2b\x04"
  "\x83\x04\x03\x16\x02\x15\x02\x0c\x2c\x04\x84\x06\x03\x17\x02\x16"
  "\x0d\x2d\x04\x83\x04\x03\x18\x02\x17\x02\x0d\x2e\x04\x84\x06\x03"
  "\x19\x02\x18\x0e\x2f\x04\x83\x04\x03\x1a\x02\x19\x02\x0e\x30\x04"
  "\x84\x06\x03\x1b\x02\x1a\x0f\x31\x04\x83\x04\x03\x1c\x02\x1b\x02"
  "\x0f\x32\x04\x84\x06\x03\x1d\x02\x1c\x10\x33\x04\x83\x04\x03\x1e"
  "\x02\x1d\x02\x10\x34\x04\x84\x06\x03\x1f\x02\x1e\x11\x35\x04\x83"
  "\x04\x03\x20\x02\x1f\x02\x11\x36\x04\x84\x06\x03\x21\x02\x20\x12"
  "\x37\x04\x83\x04\x03\x22\x02\x21\x02\x12\x38\x04\x84\x06\x03\x23"
  "\x02\x22\x13\x39\x04\x83\x04\x03\x24\x02\x23\x02\x13\x3a\x04\x84"
  "\x06\x03\x25\x02\x24\x14\x3b\x04\x83\x04\x03\x26\x02\x25\x02\x14"
  "\x3c\x04\x84\x06\x03\x27\x02\x26\x15\x3d\x04\x83\x04\x03\x28\x02"
  "\x27\x02\x15\x3e\x04\x84\x06\x03\x29\x02\x28\x16\x3f\x04\x83\x04"
  "\x03\x2a\x02\x29\x02\x16\x40\x04\x84\x06\x03\x2b\x02\x2a\x17\x41"
  "\x04\x83\x04\x03\x2c\x02\x2b\x02\x17\x42\x04\x84\x06\x03\x2d\x02"
  "\x2c\x18\x43\x04\x83\x04\x03\x2e\x02\x2d\x02\x18\x44\x04\x84\x06"
  "\x03\x2f\x02\x2e\x19\x45\x04\x83\x04\x03\x30\x02\x2f\x02\x19\x46"
  "\x04\x84\x06\x03\x31\x02\x30\x19\x47\x04\x83\x04\x03\x32\x02\x31"
  "\x02\x19\x48\x04\x84\x06\x03\x33\x02\x32\x1a\x49\x04\x83\x04\x03"
  "\x34\x02\x33\x02\x1a\x4a\x04\x84\x06\x03\x35\x02\x34\x1a\x4b\x04"
  "\x83\x04\x03\x36\x02\x35\x02\x1a\x4c\x04\x84\x06\x03\x37\x02\x36"
  "\x1b\x4d\x04\x83\x04\x03\x38\x02\x37\x02\x1b\x4e\x04\x84\x06\x03"
  "\x39\x02\x38\x1c\x4f\x04\x83\x04\x03\x3a\x02\x39\x02\x1c\x50\x04"
  "\x84\x06\x03\x3b\x02\x3a\x1d\x51\x04\x83\x04\x03\x3c\x02\x3b\x02"
  "\x1d\x52\x04\x84\x06\x03\x3d\x02\x3c\x1d\x53\x04\x83\x04\x03\x3e"
  "\x02\x3d\x02\x1d\x54\x04\x84\x06\x03\x3f\x02\x3e\x1e\x55\x04\x83"
  "\x04\x03\x40\x02\x3f\x02\x1e\x56\x04\x84\x06\x03\x41\x02\x40\x1f"
  "\x57\x04\x83\x04\x03\x42\x02\x41\x02\x1f\x58\x04\x84\x06\x03\x43"
  "\x02\x42\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x79\x70"
  "\x65\x44\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x62\x6c\x6f"
  "\x63\x6b\x45\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61"
  "\x6d\x65\x46\x13\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x72\x65"
  "\x71\x75\x69\x72\x65\x64\x47\x13\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x48\x0f\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x72\x65\x73\x74\x49\x08\x10\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x73\x4a\x09\x11\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x76\x61\x6c\x75\x65\x73\x4b"
  "\x0a\x15\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x65\x6e\x74\x72"
  "\x79\x2d\x65\x64\x67\x65\x4c\x0b\x1c\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x72\x65\x71\x75"
  "\x69\x72\x65\x64\x4d\x0c\x1c\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x6f\x70\x74\x69\x6f\x6e"
  "\x61\x6c\x4e\x0d\x18\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6f"
  "\x72\x69\x67\x69\x6e\x61\x6c\x2d\x72\x65\x73\x74\x4f\x0e\x10\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6c\x61\x62\x65\x6c\x50\x0f"
  "\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x70\x70\x6c\x69"
  "\x63\x61\x74\x69\x6f\x6e\x73\x51\x10\x21\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x61\x6c\x77\x61\x79\x73\x2d\x6b\x6e\x6f\x77\x6e"
  "\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x3f\x52\x11\x17\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63"
  "\x6f\x6e\x73\x53\x12\x1a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x54"
  "\x13\x19\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x6c\x6f\x73"
  "\x75\x72\x65\x2d\x6f\x66\x66\x73\x65\x74\x55\x14\x13\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x56"
  "\x15\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x6c\x6f\x73"
  "\x75\x72\x65\x2d\x73\x69\x7a\x65\x57\x16\x17\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x74\x61\x72\x67\x65\x74\x2d\x62\x6c\x6f\x63"
  "\x6b\x58\x17\x1a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x69\x6e"
  "\x69\x74\x69\x61\x6c\x2d\x63\x61\x6c\x6c\x65\x65\x73\x59\x18\x17"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x66\x72\x65\x65\x2d\x63"
  "\x61\x6c\x6c\x65\x65\x73\x5a\x12\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x63\x61\x6c\x6c\x65\x65\x73\x5b\x19\x17\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x66\x72\x65\x65\x2d\x63\x61\x6c\x6c\x65"
  "\x72\x73\x5c\x12\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x61"
  "\x6c\x6c\x65\x72\x73\x5d\x1a\x1b\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x76\x69\x72\x74\x75\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72"
  "\x65\x3f\x5e\x1b\x1a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x72\x65\x61\x73\x6f\x6e\x73\x5f\x1c"
  "\x14\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x73\x60\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x73\x69\x64\x65\x2d\x65\x66\x66\x65\x63\x74\x73\x61\x1d\x10\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x6c\x69\x73\x74\x62\x1e"
  "\x19\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x64\x65\x62\x75\x67"
  "\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x63\x1f\x0c\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x72\x65\x66\x64\x0b\x72\x76\x61\x6c\x75\x65\x2d"
  "\x74\x61\x67\x65\x02\x04\x08\x61\x70\x70\x65\x6e\x64\x21\x02\x79"
  "\x44\x81\x87\x02\x78\x42\x81\x87\x02\x77\x40\x81\x87\x02\x76\x3e"
  "\x81\x87\x02\x75\x3c\x81\x87\x02\x74\x3a\x81\x87\x02\x73\x38\x81"
  "\x87\x02\x72\x36\x81\x87\x02\x71\x34\x81\x87\x02\x70\x32\x81\x87"
  "\x02\x6f\x30\x81\x87\x02\x6e\x2e\x81\x87\x02\x6d\x2c\x81\x87\x02"
  "\x6c\x2a\x81\x87\x02\x6b\x28\x81\x87\x02\x6a\x26\x81\x87\x02\x69"
  "\x24\x81\x87\x02\x68\x22\x81\x87\x02\x67\x20\x81\x87\x02\x66\x1e"
  "\x81\x87\x02\x65\x1c\x81\x87\x02\x64\x1a\x81\x87\x02\x63\x18\x81"
  "\x87\x02\x62\x16\x81\x87\x02\x61\x14\x81\x87\x02\x60\x12\x81\x87"
  "\x02\x5f\x10\x81\x87\x02\x5e\x0e\x81\x87\x02\x5d\x0c\x81\x85\x02"
  "\x5c\x0a\x81\x83\x02\x5b\x08\x81\x87\x02\x5a\x06\x81\x87\x02\x59"
  "\x04\x83\x04\x43\x88\x01\x66\x02\x43\x08\x0d\x2a\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x73\x2a\x67\x02\x10\x6c\x76\x61\x6c\x75\x65"
  "\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x21\x1c\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x68\x0e\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x74\x61\x67\x69\x67\x05\x05\x04\x6d\x61\x70\x05\x0d\x63\x72"
  "\x65\x61\x74\x65\x2d\x65\x64\x67\x65\x21\x03\x0a\x6c\x69\x73\x74"
  "\x2d\x63\x6f\x70\x79\x03\x0f\x67\x65\x6e\x65\x72\x61\x74\x65\x2d"
  "\x6c\x61\x62\x65\x6c\x05\x86\x01\x1c\x81\x95\x02\x85\x01\x1a\x81"
  "\x95\x02\x84\x01\x18\x81\x95\x02\x83\x01\x16\x81\x9d\x02\x82\x01"
  "\x14\x81\x9b\x02\x81\x01\x12\x81\x99\x02\x80\x01\x10\x81\x97\x02"
  "\x7f\x0e\x81\x95\x02\x7e\x0c\x81\x93\x02\x7d\x0a\x81\x95\x02\x7c"
  "\x08\x81\x93\x02\x7b\x06\x81\x99\x02\x7a\x04\x8b\x14\x1b\x33\x6a"
  "\x02\x44\x0f\x0a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x6b\x64\x13"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70"
  "\x65\x73\x02\x03\x0f\x73\x79\x6d\x62\x6f\x6c\x2d\x3e\x73\x74\x72"
  "\x69\x6e\x67\x64\x04\x12\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x04\x0f\x75\x6e\x70\x61\x72\x73\x65"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x04\x0f\x75\x6e\x70\x61\x72\x73\x65"
  "\x2d\x73\x74\x72\x69\x6e\x67\x6c\x05\x94\x01\x1e\x81\x85\x02\x93"
  "\x01\x1c\x81\x87\x02\x92\x01\x1a\x84\x06\x91\x01\x18\x81\x87\x02"
  "\x90\x01\x16\x81\x83\x02\x8f\x01\x14\x81\x83\x02\x8e\x01\x12\x81"
  "\x85\x02\x8d\x01\x10\x81\x85\x02\x8c\x01\x0e\x81\x87\x02\x8b\x01"
  "\x0c\x81\x87\x02\x8a\x01\x0a\x81\x89\x02\x89\x01\x08\x81\x89\x02"
  "\x88\x01\x06\x81\x87\x02\x87\x01\x04\x84\x06\x1d\x31\x6d\x02\x45"
  "\x03\x64\x04\x6c\x03\x96\x01\x06\x81\x85\x02\x95\x01\x04\x84\x06"
  "\x05\x0d\x6c\x02\x46\x69\x02\x99\x01\x08\x81\x85\x02\x98\x01\x06"
  "\x81\x83\x02\x97\x01\x04\x83\x04\x07\x0f\x64\x02\x47\x69\x68\x03"
  "\x9e\x01\x0c\x81\x85\x02\x9d\x01\x0a\x81\x83\x02\x9c\x01\x08\x81"
  "\x85\x02\x9b\x01\x06\x81\x83\x02\x9a\x01\x04\x83\x04\x0b\x15\x68"
  "\x02\x48\x08\x03\x07\x6c\x65\x6e\x67\x74\x68\x6e\x02\xa7\x01\x14"
  "\x81\x87\x02\xa6\x01\x12\x81\x87\x02\xa5\x01\x10\x81\x87\x02\xa4"
  "\x01\x0e\x81\x89\x02\xa3\x01\x0c\x81\x87\x02\xa2\x01\x0a\x81\x87"
  "\x02\xa1\x01\x08\x81\x85\x02\xa0\x01\x06\x81\x87\x02\x9f\x01\x04"
  "\x84\x06\x13\x1e\x6f\x02\x49\x08\x04\x63\x64\x72\x70\x03\x6e\x02"
  "\xb4\x01\x1c\x81\x85\x02\xb3\x01\x1a\x81\x89\x02\xb2\x01\x18\x81"
  "\x89\x02\xb1\x01\x16\x81\x89\x02\xb0\x01\x14\x81\x85\x02\xaf\x01"
  "\x12\x81\x85\x02\xae\x01\x10\x81\x87\x02\xad\x01\x0e\x81\x87\x02"
  "\xac\x01\x0c\x81\x83\x02\xab\x01\x0a\x81\x83\x02\xaa\x01\x08\x81"
  "\x85\x02\xa9\x01\x06\x81\x85\x02\xa8\x01\x04\x83\x04\x1b\x27\x6e"
  "\x02\x4a\xb6\x01\x06\x81\x83\x02\xb5\x01\x04\x83\x04\x05\x0a\x71"
  "\x02\x4b\x04\x63\x61\x72\x72\xb8\x01\x06\x81\x83\x02\xb7\x01\x04"
  "\x83\x04\x05\x0b\x73\x02\x4c\x70\xba\x01\x06\x81\x83\x02\xb9\x01"
  "\x04\x83\x04\x05\x0b\x74\x02\x4d\x0b\x03\x0f\x65\x64\x67\x65\x2d"
  "\x6e\x65\x78\x74\x2d\x6e\x6f\x64\x65\x02\xbc\x01\x06\x81\x83\x02"
  "\xbb\x01\x04\x83\x04\x05\x0d\x75\x02\x4e\x0b\x03\x17\x65\x64\x67"
  "\x65\x2d\x64\x69\x73\x63\x6f\x6e\x6e\x65\x63\x74\x2d\x72\x69\x67"
  "\x68\x74\x21\x04\x14\x65\x64\x67\x65\x2d\x63\x6f\x6e\x6e\x65\x63"
  "\x74\x2d\x72\x69\x67\x68\x74\x21\x03\xbf\x01\x08\x81\x87\x02\xbe"
  "\x01\x06\x81\x85\x02\xbd\x01\x04\x84\x06\x07\x11\x76\x02\x4f\x03"
  "\x1b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x72\x69\x76\x69"
  "\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f\x77\x02\xc1\x01\x06"
  "\x81\x83\x02\xc0\x01\x04\x83\x04\x05\x0c\x78\x02\x50\x70\x10\xc4"
  "\x01\x08\x81\x83\x02\xc3\x01\x06\x81\x83\x02\xc2\x01\x04\x83\x04"
  "\x07\x0f\x79\x02\x51\x02\x11\x10\x04\x06\x64\x65\x6c\x71\x21\x02"
  "\xc8\x01\x0a\x81\x87\x02\xc7\x01\x08\x81\x85\x02\xc6\x01\x06\x81"
  "\x87\x02\xc5\x01\x04\x84\x06\x09\x15\x7a\x02\x52\x70\x1e\x04\x05"
  "\x61\x73\x73\x71\x7b\x02\xcb\x01\x08\x81\x85\x02\xca\x01\x06\x81"
  "\x87\x02\xc9\x01\x04\x84\x06\x07\x10\x7c\x02\x53\x09\x73\x65\x74"
  "\x2d\x63\x64\x72\x21\x7d\x02\x1e\x04\x7b\x02\xcf\x01\x0a\x81\x89"
  "\x02\xce\x01\x08\x81\x87\x02\xcd\x01\x06\x81\x89\x02\xcc\x01\x04"
  "\x85\x08\x09\x14\x7e\x02\x54\x02\x1e\x04\x0a\x64\x65\x6c\x2d\x61"
  "\x73\x73\x71\x21\x02\xd2\x01\x08\x81\x87\x02\xd1\x01\x06\x81\x89"
  "\x02\xd0\x01\x04\x84\x06\x07\x11\x7f\x02\x55\x0b\x73\x69\x6d\x70"
  "\x6c\x69\x66\x69\x65\x64\x04\x0e\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x67\x65\x74\x80\x01\x02\xd3\x01\x04\x83\x04\x03\x0a\x81"
  "\x01\x02\x56\x08\x74\x72\x69\x76\x69\x61\x6c\x82\x01\x04\x80\x01"
  "\x02\xd4\x01\x04\x83\x04\x03\x0a\x83\x01\x02\x57\x70\x10\x11\x82"
  "\x01\x08\x04\x80\x01\x03\x1a\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2f\x76\x69\x72\x74\x75\x61\x6c\x6c\x79\x2d\x6f\x70\x65\x6e\x3f"
  "\x82\x01\x03\xda\x01\x0e\x81\x85\x02\xd9\x01\x0c\x81\x85\x02\xd8"
  "\x01\x0a\x81\x85\x02\xd7\x01\x08\x81\x83\x02\xd6\x01\x06\x81\x83"
  "\x02\xd5\x01\x04\x83\x04\x0d\x1c\x84\x01\x02\x58\x12\xdc\x01\x06"
  "\x81\x83\x02\xdb\x01\x04\x83\x04\x05\x0b\x85\x01\x02\x59\x03\x1a"
  "\x73\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x79\x6e\x61"
  "\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x3f\x02\xde\x01\x06\x81\x83\x02"
  "\xdd\x01\x04\x83\x04\x05\x0d\x86\x01\x02\x5a\x10\x74\x72\x69\x76"
  "\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x08\x63\x6c\x6f\x73"
  "\x75\x72\x65\x0e\x6f\x70\x65\x6e\x2d\x69\x6e\x74\x65\x72\x6e\x61"
  "\x6c\x0e\x6f\x70\x65\x6e\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x13"
  "\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x62\x6c\x6f\x63\x6b\x20\x74\x79"
  "\x70\x65\x24\x49\x6c\x6c\x65\x67\x61\x6c\x20\x6f\x63\x63\x75\x72"
  "\x72\x65\x6e\x63\x65\x20\x6f\x66\x20\x43\x4c\x4f\x53\x55\x52\x45"
  "\x20\x62\x6c\x6f\x63\x6b\x03\x69\x63\x13\x11\x62\x6c\x6f\x63\x6b"
  "\x2d\x74\x79\x70\x65\x2f\x73\x74\x61\x63\x6b\x0e\x62\x6c\x6f\x63"
  "\x6b\x2d\x74\x79\x70\x65\x2f\x69\x63\x13\x62\x6c\x6f\x63\x6b\x2d"
  "\x74\x79\x70\x65\x2f\x63\x6c\x6f\x73\x75\x72\x65\x04\x03\x0e\x73"
  "\x74\x61\x63\x6b\x2d\x70\x61\x72\x65\x6e\x74\x3f\x03\x77\x04\x06"
  "\x65\x72\x72\x6f\x72\x04\xe7\x01\x14\x81\x87\x02\xe6\x01\x12\x81"
  "\x87\x02\xe5\x01\x10\x81\x87\x02\xe4\x01\x0e\x81\x87\x02\xe3\x01"
  "\x0c\x81\x87\x02\xe2\x01\x0a\x81\x87\x02\xe1\x01\x08\x81\x85\x02"
  "\xe0\x01\x06\x81\x83\x02\xdf\x01\x04\x83\x04\x13\x2c\x87\x01\x02"
  "\x5b\x03\x0a\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x3f\x88\x01\x02\xe9"
  "\x01\x06\x81\x83\x02\xe8\x01\x04\x83\x04\x05\x0d\x89\x01\x02\x5c"
  "\x13\x03\x88\x01\x02\xed\x01\x0a\x81\x83\x02\xec\x01\x08\x81\x85"
  "\x02\xeb\x01\x06\x81\x83\x02\xea\x01\x04\x83\x04\x09\x13\x8a\x01"
  "\x02\x5d\x03\x88\x01\x03\x15\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x2f"
  "\x75\x73\x65\x2d\x6c\x6f\x6f\x6b\x75\x70\x3f\x03\xf2\x01\x0c\x81"
  "\x85\x02\xf1\x01\x0a\x81\x85\x02\xf0\x01\x08\x81\x83\x02\xef\x01"
  "\x06\x81\x83\x02\xee\x01\x04\x83\x04\x0b\x16\x88\x01\x02\x5e\x13"
  "\xf4\x01\x06\x81\x83\x02\xf3\x01\x04\x83\x04\x05\x0b\x8b\x01\x02"
  "\x5f\x03\x10\x62\x6c\x6f\x63\x6b\x2f\x65\x78\x74\x65\x72\x6e\x61"
  "\x6c\x3f\x8c\x01\x02\xf6\x01\x06\x81\x83\x02\xf5\x01\x04\x83\x04"
  "\x05\x0d\x8d\x01\x02\x60\x03\x10\x62\x6c\x6f\x63\x6b\x2f\x69\x6e"
  "\x74\x65\x72\x6e\x61\x6c\x3f\x8e\x01\x02\xf8\x01\x06\x81\x83\x02"
  "\xf7\x01\x04\x83\x04\x05\x0d\x8f\x01\x02\x61\x13\x03\x8c\x01\x02"
  "\xfb\x01\x08\x81\x83\x02\xfa\x01\x06\x81\x83\x02\xf9\x01\x04\x83"
  "\x04\x07\x10\x8c\x01\x02\x62\x13\x03\x8e\x01\x02\xfe\x01\x08\x81"
  "\x83\x02\xfd\x01\x06\x81\x83\x02\xfc\x01\x04\x83\x04\x07\x10\x8e"
  "\x01\x02\x63\x13\x03\x13\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f"
  "\x63\x6c\x6f\x73\x75\x72\x65\x3f\x90\x01\x03\x77\x03\x81\x02\x08"
  "\x81\x85\x02\x80\x02\x06\x81\x83\x02\xff\x01\x04\x83\x04\x07\x12"
  "\x91\x01\x02\x64\x1b\x03\x90\x01\x03\x77\x03\x84\x02\x08\x81\x85"
  "\x02\x83\x02\x06\x81\x83\x02\x82\x02\x04\x83\x04\x07\x11\x92\x01"
  "\x02\x65\x7d\x02\x70\x1c\x04\x7b\x04\x05\x6d\x65\x6d\x71\x7d\x03"
  "\x8a\x02\x0e\x81\x8d\x02\x89\x02\x0c\x81\x89\x02\x88\x02\x0a\x81"
  "\x8b\x02\x87\x02\x08\x81\x8b\x02\x86\x02\x06\x81\x87\x02\x85\x02"
  "\x04\x85\x08\x0d\x1c\x7b\x02\x66\x70\x72\x0b\x70\x61\x73\x73\x65"
  "\x64\x2d\x6f\x75\x74\x09\x61\x72\x67\x75\x6d\x65\x6e\x74\x0b\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0e\x63\x6f\x6d\x70\x61\x74"
  "\x69\x62\x69\x6c\x69\x74\x79\x14\x61\x70\x70\x6c\x79\x2d\x63\x6f"
  "\x6d\x70\x61\x74\x69\x62\x69\x6c\x69\x74\x79\x1c\x04\x7d\x02\x91"
  "\x02\x10\x81\x85\x02\x90\x02\x0e\x81\x83\x02\x8f\x02\x0c\x81\x87"
  "\x02\x8e\x02\x0a\x81\x87\x02\x8d\x02\x08\x81\x83\x02\x8c\x02\x06"
  "\x81\x83\x02\x8b\x02\x04\x83\x04\x0f\x1a\x7d\x02\x67\x15\x70\x10"
  "\x11\x03\x82\x01\x02\x98\x02\x10\x81\x83\x02\x97\x02\x0e\x81\x83"
  "\x02\x96\x02\x0c\x81\x83\x02\x95\x02\x0a\x81\x83\x02\x94\x02\x08"
  "\x81\x83\x02\x93\x02\x06\x81\x83\x02\x92\x02\x04\x83\x04\x0f\x1d"
  "\x72\x67\x70\x70\x72\x04\x7d\x04\x7b\x04\x92\x01\x04\x91\x01\x04"
  "\x8e\x01\x04\x8c\x01\x04\x8f\x01\x04\x8d\x01\x04\x8b\x01\x04\x0b"
  "\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6d\x61\x79\x62\x65"
  "\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x69\x7a\x61\x62\x6c\x65\x3f"
  "\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x6e\x65\x65\x64\x73\x2d\x65\x78\x74\x65\x72\x6e\x61"
  "\x6c\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3f\x14\x61\x64"
  "\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x72\x65\x61\x73\x6f\x6e"
  "\x21\x1e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x72\x69\x76"
  "\x69\x61\x6c\x2d\x6f\x72\x2d\x76\x69\x72\x74\x75\x61\x6c\x3f\x82"
  "\x01\x19\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x6f\x70\x65\x6e"
  "\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x3f\x19\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2f\x6f\x70\x65\x6e\x2d\x65\x78\x74\x65\x72\x6e"
  "\x61\x6c\x3f\x14\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x69\x6e"
  "\x74\x65\x72\x6e\x61\x6c\x3f\x14\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2f\x65\x78\x74\x65\x72\x6e\x61\x6c\x3f\x10\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2f\x6f\x70\x65\x6e\x3f\x0b\x12\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2f\x63\x6c\x6f\x73\x65\x64\x3f\x77\x90"
  "\x01\x0e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x69\x63\x3f\x0f"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x79\x70\x65\x23\x6f"
  "\x70\x65\x6e\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x65"
  "\x65\x64\x73\x2d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b"
  "\x3f\x22\x6f\x70\x65\x6e\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x6e\x65\x65\x64\x73\x2d\x73\x74\x61\x74\x69\x63\x2d\x6c\x69"
  "\x6e\x6b\x3f\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x69\x6e"
  "\x6c\x69\x6e\x65\x2d\x63\x6f\x64\x65\x3f\x13\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2f\x74\x72\x69\x76\x69\x61\x6c\x3f\x16\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2f\x73\x69\x6d\x70\x6c\x69\x66\x69"
  "\x65\x64\x3f\x12\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x72\x65"
  "\x6d\x6f\x76\x65\x21\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x70\x75\x74\x21\x80\x01\x1e\x64\x65\x6c\x65\x74\x65\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x70\x70\x6c\x69\x63\x61\x74"
  "\x69\x6f\x6e\x21\x1e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61"
  "\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2d\x75\x6e\x69\x71\x75"
  "\x65\x3f\x22\x63\x6c\x6f\x73\x75\x72\x65\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x6e\x65\x65\x64\x73\x2d\x6f\x70\x65\x72\x61"
  "\x74\x6f\x72\x3f\x10\x88\x01\x04\x8a\x01\x04\x89\x01\x04\x87\x01"
  "\x04\x86\x01\x04\x85\x01\x04\x84\x01\x04\x83\x01\x04\x81\x01\x04"
  "\x7f\x04\x7e\x04\x7c\x04\x7a\x04\x79\x04\x78\x04\x10\x1b\x73\x65"
  "\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x70\x61\x73\x73"
  "\x65\x64\x2d\x6f\x75\x74\x3f\x21\x16\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x70\x61\x73\x73\x65\x64\x2d\x6f\x75\x74\x3f\x1a\x73"
  "\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x65\x6e\x74"
  "\x72\x79\x2d\x6e\x6f\x64\x65\x21\x15\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64\x65\x1d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x72\x65\x71\x75\x69\x72\x65\x64"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x1e\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2d\x6c\x76\x61\x6c\x75\x65\x18\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x63\x6c\x6f\x73\x69\x6e\x67\x2d\x62\x6c\x6f\x63\x6b"
  "\x19\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79"
  "\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x19\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x63\x6f\x72\x72\x65\x63"
  "\x74\x3f\x17\x72\x76\x61\x6c\x75\x65\x2f\x74\x72\x75\x65\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x12\x72\x76\x61\x6c\x75\x65"
  "\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x0e\x75\x6e\x70\x61"
  "\x72\x73\x65\x2d\x6c\x61\x62\x65\x6c\x0b\x76\x04\x75\x04\x74\x04"
  "\x73\x04\x71\x04\x6e\x04\x6f\x04\x68\x04\x64\x04\x6c\x04\x0b\x6d"
  "\x04\x0f\x6d\x61\x6b\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x67\x6a\x04\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21"
  "\x66\x04\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x1e\x73\x65"
  "\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x64\x65\x62\x75"
  "\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x21\x63\x15\x73\x65\x74"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x6c\x69\x73\x74"
  "\x21\x62\x1c\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x73\x69\x64\x65\x2d\x65\x66\x66\x65\x63\x74\x73\x21\x61\x19"
  "\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x73\x21\x60\x1f\x73\x65\x74\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d"
  "\x72\x65\x61\x73\x6f\x6e\x73\x21\x5f\x20\x73\x65\x74\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x76\x69\x72\x74\x75\x61\x6c\x2d"
  "\x63\x6c\x6f\x73\x75\x72\x65\x3f\x21\x5e\x17\x73\x65\x74\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x61\x6c\x6c\x65\x72\x73"
  "\x21\x5d\x1c\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x66\x72\x65\x65\x2d\x63\x61\x6c\x6c\x65\x72\x73\x21\x5c\x17"
  "\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x61"
  "\x6c\x6c\x65\x65\x73\x21\x5b\x1c\x73\x65\x74\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x66\x72\x65\x65\x2d\x63\x61\x6c\x6c\x65"
  "\x65\x73\x21\x5a\x1f\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x69\x6e\x69\x74\x69\x61\x6c\x2d\x63\x61\x6c\x6c\x65"
  "\x65\x73\x21\x59\x1c\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x74\x61\x72\x67\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x21"
  "\x58\x1c\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x63\x6c\x6f\x73\x75\x72\x65\x2d\x73\x69\x7a\x65\x21\x57\x18\x73"
  "\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x21\x56\x1e\x73\x65\x74\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x6f\x66"
  "\x66\x73\x65\x74\x21\x55\x1f\x73\x65\x74\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x21\x54\x1c\x73\x65\x74\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x6e"
  "\x73\x21\x53\x26\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x61\x6c\x77\x61\x79\x73\x2d\x6b\x6e\x6f\x77\x6e\x2d\x6f"
  "\x70\x65\x72\x61\x74\x6f\x72\x3f\x21\x52\x1c\x73\x65\x74\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x70\x70\x6c\x69\x63\x61"
  "\x74\x69\x6f\x6e\x73\x21\x51\x15\x73\x65\x74\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x6c\x61\x62\x65\x6c\x21\x50\x1d\x73\x65"
  "\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6f\x72\x69\x67"
  "\x69\x6e\x61\x6c\x2d\x72\x65\x73\x74\x21\x4f\x21\x73\x65\x74\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6f\x72\x69\x67\x69\x6e"
  "\x61\x6c\x2d\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x21\x4e\x21\x73\x65"
  "\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6f\x72\x69\x67"
  "\x69\x6e\x61\x6c\x2d\x72\x65\x71\x75\x69\x72\x65\x64\x21\x4d\x1a"
  "\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x65\x6e"
  "\x74\x72\x79\x2d\x65\x64\x67\x65\x21\x4c\x16\x73\x65\x74\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x76\x61\x6c\x75\x65\x73\x21"
  "\x4b\x15\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x6e\x61\x6d\x65\x73\x21\x4a\x14\x73\x65\x74\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x72\x65\x73\x74\x21\x49\x18\x73\x65\x74"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6f\x70\x74\x69\x6f"
  "\x6e\x61\x6c\x21\x48\x18\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x72\x65\x71\x75\x69\x72\x65\x64\x21\x47\x14\x73"
  "\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d"
  "\x65\x21\x46\x15\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x62\x6c\x6f\x63\x6b\x21\x45\x14\x73\x65\x74\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x79\x70\x65\x21\x44\x41\x43"
  "\x04\x42\x04\x41\x04\x40\x04\x3f\x04\x3e\x04\x3d\x04\x3c\x04\x3b"
  "\x04\x3a\x04\x39\x04\x38\x04\x37\x04\x36\x04\x35\x04\x34\x04\x33"
  "\x04\x32\x04\x31\x04\x30\x04\x2f\x04\x2e\x04\x2d\x04\x2c\x04\x2b"
  "\x04\x2a\x04\x29\x04\x28\x04\x27\x04\x26\x04\x25\x04\x24\x04\x23"
  "\x04\x22\x04\x21\x04\x20\x04\x1f\x04\x1e\x04\x1d\x04\x1c\x04\x1b"
  "\x04\x1a\x04\x19\x04\x18\x04\x17\x04\x16\x04\x15\x04\x14\x04\x13"
  "\x04\x12\x04\x11\x04\x10\x04\x0f\x04\x0e\x04\x0d\x04\x0c\x04\x0b"
  "\x04\x0a\x04\x09\x04\x04\x04\x04\x04\x04\x41\x11\x6c\x6f\x63\x61"
  "\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x69\x6b\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\x0d\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70\x65\x73\x65\x69\x14"
  "\x72\x76\x61\x6c\x75\x65\x2d\x25\x70\x61\x73\x73\x65\x64\x2d\x6f"
  "\x75\x74\x3f\x19\x73\x65\x74\x2d\x72\x76\x61\x6c\x75\x65\x2d\x25"
  "\x70\x61\x73\x73\x65\x64\x2d\x6f\x75\x74\x3f\x21\x54\x07\x05\x10"
  "\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x03"
  "\x18\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x2f\x70"
  "\x72\x65\x64\x69\x63\x61\x74\x65\x04\x1b\x64\x65\x66\x69\x6e\x65"
  "\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d\x75\x6e\x70\x61"
  "\x72\x73\x65\x72\x04\x18\x32\x80\x80\x04\x17\x30\x81\x81\x02\x16"
  "\x2e\x81\x81\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x85\x02\x13\x28"
  "\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81"
  "\x83\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83"
  "\x02\x0c\x1a\x81\x87\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02"
  "\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x85\x02\x06"
  "\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x87\x02\x03\x08"
  "\x81\x83\x02\x02\x06\x81\x8b\x02\x01\x04\x81\x87\x02\x31\x5c";

SCHEME_OBJECT *
proced_so_data_8510cb384c7632e5 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_proced_so_data_8510cb384c7632e5 [0]))), (sizeof (prog_proced_so_data_8510cb384c7632e5)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_31]));
}

DECLARE_COMPILED_DATA_NS ("proced.so", proced_so_data_8510cb384c7632e5)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("proced.so", "5b72a2bcb00e277c")
