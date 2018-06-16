/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:14-07 by Liar version 4.118. */

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
canon_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto canout_expr_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canout_expr_3)
DEFLABEL (canout_expr_0)
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
canon_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto canout_safeP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canout_safeP_3)
DEFLABEL (canout_safeP_0)
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
canon_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto canout_needsP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canout_needsP_3)
DEFLABEL (canout_needsP_0)
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
canon_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto canout_spliceP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canout_spliceP_3)
DEFLABEL (canout_spliceP_0)
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
#define ENVIRONMENT_LABEL_5_3 8
#define DEBUGGING_LABEL_5_2 7
#define OBJECT_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto set_canout_exprB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_canout_exprB_3)
DEFLABEL (set_canout_exprB_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_5_1]);
  Rsp = (& (Rsp [3]));
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
canon_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_canout_safePB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_canout_safePB_3)
DEFLABEL (set_canout_safePB_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
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
canon_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_canout_needsPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_canout_needsPB_3)
DEFLABEL (set_canout_needsPB_0)
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
canon_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_canout_splicePB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_canout_splicePB_3)
DEFLABEL (set_canout_splicePB_0)
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
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define ENVIRONMENT_LABEL_9_3 17
#define DEBUGGING_LABEL_9_2 16
#define OBJECT_9_3 15
#define OBJECT_9_2 14
#define OBJECT_9_1 13
#define OBJECT_9_0 12
#define FREE_REFERENCE_9_0 11
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto canoutP_4;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canoutP_10)
DEFLABEL (canoutP_4)
  INTERRUPT_CHECK (26, LABEL_9_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
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
  Rvl = (current_block [OBJECT_9_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_9_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_10 7
#define TAG_10_11 2
#define LABEL_10_14 9
#define LABEL_10_15 11
#define LABEL_10_8 13
#define TAG_10_9 5
#define LABEL_10_17 15
#define LABEL_10_18 17
#define LABEL_10_19 19
#define LABEL_10_20 21
#define LABEL_10_21 23
#define LABEL_10_22 25
#define LABEL_10_6 27
#define TAG_10_7 12
#define LABEL_10_23 29
#define LABEL_10_13 31
#define LABEL_10_24 33
#define LABEL_10_25 35
#define LABEL_10_26 37
#define LABEL_10_27 39
#define TAG_10_28 18
#define LABEL_10_29 41
#define LABEL_10_31 43
#define ENVIRONMENT_LABEL_10_3 71
#define DEBUGGING_LABEL_10_2 70
#define OBJECT_10_8 69
#define OBJECT_10_7 68
#define OBJECT_10_6 67
#define OBJECT_10_5 66
#define OBJECT_10_4 65
#define OBJECT_10_3 64
#define OBJECT_10_2 63
#define OBJECT_10_1 62
#define OBJECT_10_0 61
#define EXECUTE_CACHE_10_32 45
#define EXECUTE_CACHE_10_30 47
#define EXECUTE_CACHE_10_16 49
#define EXECUTE_CACHE_10_12 51
#define FREE_REFERENCE_10_3 54
#define FREE_REFERENCE_10_2 55
#define FREE_REFERENCE_10_1 56
#define FREE_REFERENCE_10_0 57
#define FREE_ASSIGNMENT_10_1 59
#define FREE_ASSIGNMENT_10_0 60
#define FREE_REFERENCES_LABEL_10_0 44
#define NUMBER_OF_LINKER_SECTIONS_10_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_10_4);
      goto canonicalize_top_level_28;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_30;

    case 2:
      current_block = (Rpc - LABEL_10_10);
      goto lambda_47;

    case 3:
      current_block = (Rpc - LABEL_10_14);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_10_15);
      goto label_32;

    case 5:
      current_block = (Rpc - LABEL_10_8);
      goto swapB_46;

    case 6:
      current_block = (Rpc - LABEL_10_17);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_10_18);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_10_19);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_10_20);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_10_21);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_10_22);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_10_6);
      goto lambda_45;

    case 13:
      current_block = (Rpc - LABEL_10_23);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_3;

    case 15:
      current_block = (Rpc - LABEL_10_24);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_10_25);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_10_26);
      goto label_40;

    case 18:
      current_block = (Rpc - LABEL_10_27);
      goto lambda_48;

    case 19:
      current_block = (Rpc - LABEL_10_29);
      goto continuation_7;

    case 20:
      current_block = (Rpc - LABEL_10_31);
      goto label_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_top_level_44)
DEFLABEL (canonicalize_top_level_28)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_51;
  Wrd6 = Wrd10;

DEFLABEL (label_50)
  if ((Wrd6.Obj) == (current_block [OBJECT_10_0]))
    goto label_49;
  (Wrd16.Obj) = (current_block [OBJECT_10_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_8])));
  Rhp += 2;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  Wrd33 = Wrd35;
  ((Wrd33.pObj) [2]) = (Wrd15.Obj);
  ((Wrd33.pObj) [3]) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_10])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Rsp [3]) = (Wrd36.Obj);
  (Rsp [2]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd36.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (label_49)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_6])));
  Rhp += 1;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  Wrd40 = Wrd39;
  (Wrd41.Obj) = (Rsp [0]);
  ((Wrd40.pObj) [2]) = (Wrd41.Obj);
  Rvl = (Wrd38.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd7.pObj));

DEFLABEL (label_30)
  (Wrd6.Obj) = Rvl;
  goto label_50;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_10_10);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_68;
  Wrd8 = Wrd12;

DEFLABEL (label_67)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_66;
  Wrd16 = Wrd20;

DEFLABEL (label_65)
  if ((Wrd16.Obj) == (current_block [OBJECT_10_2]))
    goto label_53;
  (Wrd23.Obj) = (current_block [OBJECT_10_4]);
  (* (--Rsp)) = (Wrd23.Obj);
  goto label_52;

DEFLABEL (label_53)
  (Wrd28.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_52)
DEFLABEL (label_64)
  (Wrd24.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd56.uLng) == 62))
    goto label_63;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd54.Lng))))
    goto label_63;
  (Wrd10.Obj) = ((Wrd52.pObj) [4]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;

DEFLABEL (label_59)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_29]))));
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_30]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_29);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_58;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_58;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_32]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_23);
  (Wrd13.Obj) = Rvl;

DEFLABEL (label_56)
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_3]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_55;
  Wrd30 = Wrd34;

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd30.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd38.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_27])));
  Rhp += 2;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd38.pObj)));
  Wrd41 = Wrd38;
  ((Wrd41.pObj) [2]) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [0]);
  ((Wrd41.pObj) [3]) = (Wrd40.Obj);
  Rvl = (Wrd37.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_26])), (Wrd31.pObj));

DEFLABEL (label_40)
  (Wrd30.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_10_8]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_62;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_62;
  (Wrd13.Obj) = ((Wrd19.pObj) [2]);

DEFLABEL (label_61)
  Rsp = (& (Rsp [1]));
  goto label_56;

DEFLABEL (label_62)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_10_8]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_25]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 2);

DEFLABEL (label_39)
  (Wrd13.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_63)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_10_6]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_24]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_59;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_15])), (Wrd17.pObj));

DEFLABEL (label_32)
  (Wrd16.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_14])), (Wrd9.pObj));

DEFLABEL (label_31)
  (Wrd8.Obj) = Rvl;
  goto label_67;

DEFLABEL (swapB_46)
  CLOSURE_HEADER (LABEL_10_8);

DEFLABEL (swapB_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_86;

DEFLABEL (label_85)
  Wrd5 = Wrd9;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_83;

DEFLABEL (label_82)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_81)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_80;

DEFLABEL (label_79)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_78)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_3]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  Wrd57 = Wrd61;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_72)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_69)
  Rvl = (current_block [OBJECT_10_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_71)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_70;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_22])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_38)
  goto label_69;

DEFLABEL (label_74)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_73;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_21])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_37)
  goto label_72;

DEFLABEL (label_77)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_10_20])), (Wrd58.pObj));

DEFLABEL (label_36)
  (Wrd57.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_80)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_79;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_19])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_35)
  goto label_78;

DEFLABEL (label_83)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_82;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_18])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_34)
  goto label_81;

DEFLABEL (label_86)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_85;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_10_17])), (Wrd6.pObj));

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_84;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_10_6);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_10_27);

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

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define ENVIRONMENT_LABEL_11_3 16
#define DEBUGGING_LABEL_11_2 15
#define OBJECT_11_4 14
#define OBJECT_11_3 13
#define OBJECT_11_2 12
#define OBJECT_11_1 11
#define OBJECT_11_0 10
#define FREE_REFERENCE_11_0 9
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_11_4);
      goto canonicalize_optimization_lowP_3;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_optimization_lowP_8)
DEFLABEL (canonicalize_optimization_lowP_3)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_11_0]))
    goto label_12;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  if ((Wrd8.Obj) == (current_block [OBJECT_11_1]))
    goto label_12;
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_14;
  Wrd16 = Wrd20;

DEFLABEL (label_13)
  if ((Wrd16.Obj) == (current_block [OBJECT_11_2]))
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd26.Obj) = (Rsp [0]);
  if (! ((Wrd26.Obj) == (current_block [OBJECT_11_3])))
    goto label_10;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_11_4]);
  goto label_9;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_6])), (Wrd17.pObj));

DEFLABEL (label_6)
  (Wrd16.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 9
#define DEBUGGING_LABEL_12_2 8
#define OBJECT_12_0 7
#define EXECUTE_CACHE_12_5 5
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto canonicalize_trivial_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_trivial_3)
DEFLABEL (canonicalize_trivial_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_6 9
#define LABEL_13_8 11
#define LABEL_13_9 13
#define ENVIRONMENT_LABEL_13_3 23
#define DEBUGGING_LABEL_13_2 22
#define OBJECT_13_4 21
#define OBJECT_13_3 20
#define OBJECT_13_2 19
#define OBJECT_13_1 18
#define OBJECT_13_0 17
#define EXECUTE_CACHE_13_10 15
#define FREE_REFERENCES_LABEL_13_0 14
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_13_4);
      goto canonicalize_combine_unary_5;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_combine_unary_12)
DEFLABEL (canonicalize_combine_unary_5)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_18;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_18;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_17)
  (Wrd40.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd40.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_15)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_14;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd29.Lng))))
    goto label_14;
  (Wrd21.Obj) = ((Wrd27.pObj) [5]);

DEFLABEL (label_13)
  (Rsp [3]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (label_14)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_13_4]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_10)
  (Wrd21.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_13_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_13_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_13_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define LABEL_14_7 7
#define TAG_14_8 2
#define LABEL_14_9 9
#define LABEL_14_11 11
#define LABEL_14_13 13
#define LABEL_14_12 15
#define LABEL_14_14 17
#define LABEL_14_15 19
#define ENVIRONMENT_LABEL_14_3 31
#define DEBUGGING_LABEL_14_2 30
#define OBJECT_14_4 29
#define OBJECT_14_3 28
#define OBJECT_14_2 27
#define OBJECT_14_1 26
#define OBJECT_14_0 25
#define EXECUTE_CACHE_14_16 21
#define EXECUTE_CACHE_14_10 23
#define FREE_REFERENCES_LABEL_14_0 20
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd5;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_14_4);
      goto canonicalize_unary_9;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_18;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_14_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_14_13);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_14_12);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_14_14);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_14_15);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_unary_16)
DEFLABEL (canonicalize_unary_9)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_7])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_14_7);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 62))
    goto label_26;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_26;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_25)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_24;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_24;
  (Wrd30.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_23)
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_12);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_21)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_20;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd29.Lng))))
    goto label_20;
  (Wrd21.Obj) = ((Wrd27.pObj) [5]);

DEFLABEL (label_19)
  (Rsp [3]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (label_20)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_14_4]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_14)
  (Wrd21.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_14_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (current_block [OBJECT_14_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_14_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_7 7
#define LABEL_15_8 9
#define LABEL_15_9 11
#define LABEL_15_10 13
#define LABEL_15_5 15
#define LABEL_15_11 17
#define LABEL_15_12 19
#define LABEL_15_13 21
#define LABEL_15_14 23
#define LABEL_15_15 25
#define ENVIRONMENT_LABEL_15_3 36
#define DEBUGGING_LABEL_15_2 35
#define OBJECT_15_5 34
#define OBJECT_15_4 33
#define OBJECT_15_3 32
#define OBJECT_15_2 31
#define OBJECT_15_1 30
#define OBJECT_15_0 29
#define EXECUTE_CACHE_15_16 27
#define FREE_REFERENCES_LABEL_15_0 26
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd13;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_15_4);
      goto canonicalize_combine_binary_10;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_15_11);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_15_12);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_15_13);
      goto label_16;

    case 10:
      current_block = (Rpc - LABEL_15_14);
      goto label_15;

    case 11:
      current_block = (Rpc - LABEL_15_15);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_combine_binary_20)
DEFLABEL (canonicalize_combine_binary_10)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_42;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_42;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_41)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_40;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_40;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_39)
  (Wrd40.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd40.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_38;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd112.Lng))))
    goto label_38;
  (Wrd10.Obj) = ((Wrd110.pObj) [3]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;

DEFLABEL (label_36)
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_35;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd99.Lng))))
    goto label_35;
  (Wrd13.Obj) = ((Wrd97.pObj) [3]);

DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_32;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd82.Lng))))
    goto label_32;
  (Wrd19.Obj) = ((Wrd80.pObj) [5]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;

DEFLABEL (label_30)
  (Wrd70.Obj) = (Rsp [4]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_29;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_29;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_27)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_26;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_26;
  (Wrd28.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_25)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  Wrd45 = Wrd42;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_21)
  (Rsp [3]) = (Wrd45.Obj);
  (Wrd46.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (label_22)
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_15_5]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd59.uLng) == 62)
    goto label_24;

DEFLABEL (label_23)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_24)
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_23;
  (Wrd45.Obj) = ((Wrd55.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto label_21;

DEFLABEL (label_26)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_15_5]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.Obj) = (current_block [OBJECT_15_4]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_15)
  (Wrd61.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_27;

DEFLABEL (label_32)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_15_4]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_30;

DEFLABEL (label_35)
  (Wrd102.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (current_block [OBJECT_15_2]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_17)
  (Wrd13.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd13.Obj) = (current_block [OBJECT_15_3]);
  goto label_34;

DEFLABEL (label_38)
  (Wrd115.Obj) = (Rsp [3]);
  (Wrd116.Obj) = (current_block [OBJECT_15_2]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_36;

DEFLABEL (label_40)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_15_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_15_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (Wrd45.Obj) = Rvl;
  goto label_21;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (Wrd13.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define TAG_16_6 1
#define LABEL_16_7 7
#define TAG_16_8 2
#define LABEL_16_9 9
#define LABEL_16_11 11
#define LABEL_16_13 13
#define LABEL_16_14 15
#define LABEL_16_15 17
#define LABEL_16_16 19
#define LABEL_16_17 21
#define LABEL_16_12 23
#define LABEL_16_18 25
#define LABEL_16_19 27
#define LABEL_16_20 29
#define LABEL_16_21 31
#define LABEL_16_22 33
#define ENVIRONMENT_LABEL_16_3 46
#define DEBUGGING_LABEL_16_2 45
#define OBJECT_16_5 44
#define OBJECT_16_4 43
#define OBJECT_16_3 42
#define OBJECT_16_2 41
#define OBJECT_16_1 40
#define OBJECT_16_0 39
#define EXECUTE_CACHE_16_23 35
#define EXECUTE_CACHE_16_10 37
#define FREE_REFERENCES_LABEL_16_0 34
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_16_4);
      goto canonicalize_binary_15;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_26;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto lambda_27;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_16_13);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_16_14);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_16_16);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_16_17);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_16_18);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_16_19);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_16_20);
      goto label_21;

    case 14:
      current_block = (Rpc - LABEL_16_21);
      goto label_20;

    case 15:
      current_block = (Rpc - LABEL_16_22);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_binary_25)
DEFLABEL (canonicalize_binary_15)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_16_5);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_7])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_16_7);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd22.uLng) == 62))
    goto label_49;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_49;
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_48)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_47;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_47;
  (Wrd30.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_46)
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_45;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd112.Lng))))
    goto label_45;
  (Wrd10.Obj) = ((Wrd110.pObj) [3]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;

DEFLABEL (label_43)
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_42;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd99.Lng))))
    goto label_42;
  (Wrd13.Obj) = ((Wrd97.pObj) [3]);

DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_39;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd82.Lng))))
    goto label_39;
  (Wrd19.Obj) = ((Wrd80.pObj) [5]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;

DEFLABEL (label_37)
  (Wrd70.Obj) = (Rsp [4]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_36;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_36;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_35)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_34)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_33;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_33;
  (Wrd28.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_32)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  Wrd45 = Wrd42;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_28)
  (Rsp [3]) = (Wrd45.Obj);
  (Wrd46.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_23]));

DEFLABEL (label_29)
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_16_5]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd59.uLng) == 62)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_31)
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_30;
  (Wrd45.Obj) = ((Wrd55.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto label_28;

DEFLABEL (label_33)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_16_5]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_22]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_36)
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.Obj) = (current_block [OBJECT_16_4]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_20)
  (Wrd61.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_34;

DEFLABEL (label_39)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_16_4]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_37;

DEFLABEL (label_42)
  (Wrd102.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (current_block [OBJECT_16_2]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_22)
  (Wrd13.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd13.Obj) = (current_block [OBJECT_16_3]);
  goto label_41;

DEFLABEL (label_45)
  (Wrd115.Obj) = (Rsp [3]);
  (Wrd116.Obj) = (current_block [OBJECT_16_2]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_43;

DEFLABEL (label_47)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (current_block [OBJECT_16_0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_16_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (Wrd45.Obj) = Rvl;
  goto label_28;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16_16);
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_17);
  (Wrd13.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_7 7
#define LABEL_17_8 9
#define LABEL_17_9 11
#define LABEL_17_10 13
#define LABEL_17_11 15
#define LABEL_17_5 17
#define LABEL_17_12 19
#define LABEL_17_13 21
#define LABEL_17_14 23
#define LABEL_17_15 25
#define LABEL_17_16 27
#define LABEL_17_17 29
#define LABEL_17_18 31
#define LABEL_17_19 33
#define ENVIRONMENT_LABEL_17_3 44
#define DEBUGGING_LABEL_17_2 43
#define OBJECT_17_5 42
#define OBJECT_17_4 41
#define OBJECT_17_3 40
#define OBJECT_17_2 39
#define OBJECT_17_1 38
#define OBJECT_17_0 37
#define EXECUTE_CACHE_17_20 35
#define FREE_REFERENCES_LABEL_17_0 34
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd43;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd40;
  machine_word Wrd121;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd131;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd98;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd154;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd139;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd134;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd11;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd8;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      goto canonicalize_combine_ternary_15;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_17_12);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_17_13);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_17_14);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_17_15);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_17_16);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_17_17);
      goto label_23;

    case 14:
      current_block = (Rpc - LABEL_17_18);
      goto label_22;

    case 15:
      current_block = (Rpc - LABEL_17_19);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_combine_ternary_29)
DEFLABEL (canonicalize_combine_ternary_15)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_60;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_60;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_59)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_58;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_58;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_57)
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_56;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd48.Lng))))
    goto label_56;
  (Wrd42.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_55)
  (Wrd56.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd56.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd175.Obj) = (Rsp [2]);
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if (! ((Wrd176.uLng) == 62))
    goto label_54;
  (Wrd172.pObj) = (OBJECT_ADDRESS (Wrd175.Obj));
  (Wrd173.Obj) = ((Wrd172.pObj) [0]);
  (Wrd174.Lng) = (FIXNUM_TO_LONG (Wrd173.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd174.Lng))))
    goto label_54;
  (Wrd11.Obj) = ((Wrd172.pObj) [3]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;

DEFLABEL (label_53)
  (Wrd161.Obj) = (Rsp [3]);
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd162.uLng) == 62))
    goto label_52;
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd159.Obj) = ((Wrd158.pObj) [0]);
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd159.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd160.Lng))))
    goto label_52;
  (Wrd134.Obj) = ((Wrd158.pObj) [3]);
  if ((Wrd134.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;

DEFLABEL (label_50)
  (Wrd148.Obj) = (Rsp [4]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd149.uLng) == 62))
    goto label_49;
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd146.Obj) = ((Wrd145.pObj) [0]);
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Wrd146.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd147.Lng))))
    goto label_49;
  (Wrd139.Obj) = ((Wrd145.pObj) [3]);

DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd139.Obj);

DEFLABEL (label_47)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_46;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd26.Lng))))
    goto label_46;
  (Wrd20.Obj) = ((Wrd24.pObj) [4]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_45)
  (Wrd34.Obj) = (Rsp [0]);
  if ((Wrd34.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_38)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd90.Obj) = (Rsp [4]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 62))
    goto label_37;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd89.Lng))))
    goto label_37;
  (Wrd43.Obj) = ((Wrd87.pObj) [5]);
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_36)
  (Wrd76.Obj) = (Rsp [5]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 62))
    goto label_35;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd75.Lng))))
    goto label_35;
  (Wrd51.Obj) = ((Wrd73.pObj) [5]);
  if ((Wrd51.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_33)
  (Wrd63.Obj) = (Rsp [6]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 62))
    goto label_32;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd62.Lng))))
    goto label_32;
  (Wrd46.Obj) = ((Wrd60.pObj) [5]);

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_30)
  (Rsp [5]) = (Wrd46.Obj);
  (Wrd47.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd47.Obj);
  (Wrd48.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_20]));

DEFLABEL (label_32)
  (Wrd65.Obj) = (Rsp [6]);
  (Wrd66.Obj) = (current_block [OBJECT_17_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_21)
  (Wrd46.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd46.Obj) = (current_block [OBJECT_17_5]);
  goto label_31;

DEFLABEL (label_35)
  (Wrd78.Obj) = (Rsp [5]);
  (Wrd79.Obj) = (current_block [OBJECT_17_4]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (label_37)
  (Wrd92.Obj) = (Rsp [4]);
  (Wrd93.Obj) = (current_block [OBJECT_17_4]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_36;

DEFLABEL (label_39)
  (Wrd107.Obj) = (Rsp [5]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd108.uLng) == 62))
    goto label_44;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [0]);
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd106.Lng))))
    goto label_44;
  (Wrd98.Obj) = ((Wrd104.pObj) [4]);

DEFLABEL (label_43)
  (Rsp [0]) = (Wrd98.Obj);
  if ((Wrd98.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd98.Obj);
  goto label_38;

DEFLABEL (label_40)
  (Wrd118.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = (current_block [OBJECT_17_3]);
  (Rsp [1]) = (Wrd119.Obj);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd131.uLng) == 62)
    goto label_42;

DEFLABEL (label_41)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_42)
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd128.Obj) = ((Wrd127.pObj) [0]);
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd128.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd129.Lng))))
    goto label_41;
  (Wrd121.Obj) = ((Wrd127.pObj) [4]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd121.Obj);
  goto label_38;

DEFLABEL (label_44)
  (Wrd109.Obj) = (Rsp [5]);
  (Wrd110.Obj) = (current_block [OBJECT_17_3]);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_24)
  (Wrd98.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.Obj) = (current_block [OBJECT_17_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_49)
  (Wrd150.Obj) = (Rsp [4]);
  (Wrd151.Obj) = (current_block [OBJECT_17_2]);
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_25)
  (Wrd139.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_47;

DEFLABEL (label_52)
  (Wrd163.Obj) = (Rsp [3]);
  (Wrd164.Obj) = (current_block [OBJECT_17_2]);
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_50;

DEFLABEL (label_54)
  (Wrd177.Obj) = (Rsp [2]);
  (Wrd178.Obj) = (current_block [OBJECT_17_2]);
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd177.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_53;

DEFLABEL (label_56)
  (Wrd51.Obj) = (Rsp [4]);
  (Wrd52.Obj) = (current_block [OBJECT_17_0]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_17_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_17_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (Wrd46.Obj) = Rvl;
  goto label_30;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17_10);
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define LABEL_18_7 7
#define TAG_18_8 2
#define LABEL_18_9 9
#define LABEL_18_11 11
#define LABEL_18_12 13
#define LABEL_18_14 15
#define LABEL_18_15 17
#define LABEL_18_16 19
#define LABEL_18_17 21
#define LABEL_18_18 23
#define LABEL_18_19 25
#define LABEL_18_13 27
#define LABEL_18_20 29
#define LABEL_18_21 31
#define LABEL_18_22 33
#define LABEL_18_23 35
#define LABEL_18_24 37
#define LABEL_18_25 39
#define LABEL_18_26 41
#define LABEL_18_27 43
#define ENVIRONMENT_LABEL_18_3 56
#define DEBUGGING_LABEL_18_2 55
#define OBJECT_18_5 54
#define OBJECT_18_4 53
#define OBJECT_18_3 52
#define OBJECT_18_2 51
#define OBJECT_18_1 50
#define OBJECT_18_0 49
#define EXECUTE_CACHE_18_28 45
#define EXECUTE_CACHE_18_10 47
#define FREE_REFERENCES_LABEL_18_0 44
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd121;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd131;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd98;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd154;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd139;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd134;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_18_4);
      goto canonicalize_ternary_21;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_36;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_37;

    case 3:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_18_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_18_12);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_18_14);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_18_15);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_18_16);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_18_17);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_18_18);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_18_19);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_18_13);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_18_20);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_18_21);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_18_22);
      goto label_31;

    case 16:
      current_block = (Rpc - LABEL_18_23);
      goto label_26;

    case 17:
      current_block = (Rpc - LABEL_18_24);
      goto label_30;

    case 18:
      current_block = (Rpc - LABEL_18_25);
      goto label_29;

    case 19:
      current_block = (Rpc - LABEL_18_26);
      goto label_28;

    case 20:
      current_block = (Rpc - LABEL_18_27);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_ternary_35)
DEFLABEL (canonicalize_ternary_21)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_7])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_18_7);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_11);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_12);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd22.uLng) == 62))
    goto label_68;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_68;
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_67)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_66;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_66;
  (Wrd30.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_65)
  (Wrd53.Obj) = (Rsp [4]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_64;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd52.Lng))))
    goto label_64;
  (Wrd46.Obj) = ((Wrd50.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_63)
  (Wrd60.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd60.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_18_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd175.Obj) = (Rsp [2]);
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if (! ((Wrd176.uLng) == 62))
    goto label_62;
  (Wrd172.pObj) = (OBJECT_ADDRESS (Wrd175.Obj));
  (Wrd173.Obj) = ((Wrd172.pObj) [0]);
  (Wrd174.Lng) = (FIXNUM_TO_LONG (Wrd173.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd174.Lng))))
    goto label_62;
  (Wrd11.Obj) = ((Wrd172.pObj) [3]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;

DEFLABEL (label_61)
  (Wrd161.Obj) = (Rsp [3]);
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd162.uLng) == 62))
    goto label_60;
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd159.Obj) = ((Wrd158.pObj) [0]);
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd159.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd160.Lng))))
    goto label_60;
  (Wrd134.Obj) = ((Wrd158.pObj) [3]);
  if ((Wrd134.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;

DEFLABEL (label_58)
  (Wrd148.Obj) = (Rsp [4]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd149.uLng) == 62))
    goto label_57;
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd146.Obj) = ((Wrd145.pObj) [0]);
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Wrd146.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd147.Lng))))
    goto label_57;
  (Wrd139.Obj) = ((Wrd145.pObj) [3]);

DEFLABEL (label_56)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd139.Obj);

DEFLABEL (label_55)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_54;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd26.Lng))))
    goto label_54;
  (Wrd20.Obj) = ((Wrd24.pObj) [4]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_53)
  (Wrd34.Obj) = (Rsp [0]);
  if ((Wrd34.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_46)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd90.Obj) = (Rsp [4]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 62))
    goto label_45;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd89.Lng))))
    goto label_45;
  (Wrd43.Obj) = ((Wrd87.pObj) [5]);
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;

DEFLABEL (label_44)
  (Wrd76.Obj) = (Rsp [5]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 62))
    goto label_43;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd75.Lng))))
    goto label_43;
  (Wrd51.Obj) = ((Wrd73.pObj) [5]);
  if ((Wrd51.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;

DEFLABEL (label_41)
  (Wrd63.Obj) = (Rsp [6]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 62))
    goto label_40;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd62.Lng))))
    goto label_40;
  (Wrd46.Obj) = ((Wrd60.pObj) [5]);

DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_38)
  (Rsp [5]) = (Wrd46.Obj);
  (Wrd47.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd47.Obj);
  (Wrd48.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_28]));

DEFLABEL (label_40)
  (Wrd65.Obj) = (Rsp [6]);
  (Wrd66.Obj) = (current_block [OBJECT_18_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_27]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_27)
  (Wrd46.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd46.Obj) = (current_block [OBJECT_18_5]);
  goto label_39;

DEFLABEL (label_43)
  (Wrd78.Obj) = (Rsp [5]);
  (Wrd79.Obj) = (current_block [OBJECT_18_4]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_26]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_41;

DEFLABEL (label_45)
  (Wrd92.Obj) = (Rsp [4]);
  (Wrd93.Obj) = (current_block [OBJECT_18_4]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_25]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_44;

DEFLABEL (label_47)
  (Wrd107.Obj) = (Rsp [5]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd108.uLng) == 62))
    goto label_52;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [0]);
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd106.Lng))))
    goto label_52;
  (Wrd98.Obj) = ((Wrd104.pObj) [4]);

DEFLABEL (label_51)
  (Rsp [0]) = (Wrd98.Obj);
  if ((Wrd98.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd98.Obj);
  goto label_46;

DEFLABEL (label_48)
  (Wrd118.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = (current_block [OBJECT_18_3]);
  (Rsp [1]) = (Wrd119.Obj);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd131.uLng) == 62)
    goto label_50;

DEFLABEL (label_49)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_50)
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd128.Obj) = ((Wrd127.pObj) [0]);
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd128.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd129.Lng))))
    goto label_49;
  (Wrd121.Obj) = ((Wrd127.pObj) [4]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd121.Obj);
  goto label_46;

DEFLABEL (label_52)
  (Wrd109.Obj) = (Rsp [5]);
  (Wrd110.Obj) = (current_block [OBJECT_18_3]);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_24]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_30)
  (Wrd98.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.Obj) = (current_block [OBJECT_18_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_23]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_57)
  (Wrd150.Obj) = (Rsp [4]);
  (Wrd151.Obj) = (current_block [OBJECT_18_2]);
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_22]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_31)
  (Wrd139.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_55;

DEFLABEL (label_60)
  (Wrd163.Obj) = (Rsp [3]);
  (Wrd164.Obj) = (current_block [OBJECT_18_2]);
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_21]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_58;

DEFLABEL (label_62)
  (Wrd177.Obj) = (Rsp [2]);
  (Wrd178.Obj) = (current_block [OBJECT_18_2]);
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_20]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd177.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_61;

DEFLABEL (label_64)
  (Wrd55.Obj) = (Rsp [4]);
  (Wrd56.Obj) = (current_block [OBJECT_18_0]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (current_block [OBJECT_18_0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.Obj) = (current_block [OBJECT_18_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_18_17);
  (Wrd46.Obj) = Rvl;
  goto label_38;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_18_18);
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_18_19);
  (* (--Rsp)) = Rvl;
  goto label_55;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_7 5
#define LABEL_19_8 7
#define LABEL_19_9 9
#define LABEL_19_5 11
#define LABEL_19_6 13
#define LABEL_19_14 15
#define LABEL_19_15 17
#define LABEL_19_11 19
#define LABEL_19_16 21
#define LABEL_19_18 23
#define LABEL_19_19 25
#define LABEL_19_13 27
#define LABEL_19_21 29
#define LABEL_19_22 31
#define LABEL_19_23 33
#define LABEL_19_24 35
#define LABEL_19_17 37
#define LABEL_19_25 39
#define LABEL_19_26 41
#define LABEL_19_27 43
#define LABEL_19_28 45
#define LABEL_19_29 47
#define LABEL_19_20 49
#define ENVIRONMENT_LABEL_19_3 70
#define DEBUGGING_LABEL_19_2 69
#define OBJECT_19_9 68
#define OBJECT_19_8 67
#define OBJECT_19_7 66
#define OBJECT_19_6 65
#define OBJECT_19_5 64
#define OBJECT_19_4 63
#define OBJECT_19_3 62
#define OBJECT_19_2 61
#define OBJECT_19_1 60
#define OBJECT_19_0 59
#define EXECUTE_CACHE_19_30 51
#define EXECUTE_CACHE_19_12 53
#define EXECUTE_CACHE_19_10 55
#define FREE_REFERENCE_19_0 58
#define FREE_REFERENCES_LABEL_19_0 50
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd5;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd32;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_19_4);
      goto canonicalize_error_26;

    case 1:
      current_block = (Rpc - LABEL_19_7);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_19_8);
      goto label_29;

    case 3:
      current_block = (Rpc - LABEL_19_9);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_19_14);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_19_15);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_19_16);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_19_18);
      goto label_34;

    case 11:
      current_block = (Rpc - LABEL_19_19);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_19_21);
      goto label_36;

    case 14:
      current_block = (Rpc - LABEL_19_22);
      goto continuation_21;

    case 15:
      current_block = (Rpc - LABEL_19_23);
      goto continuation_24;

    case 16:
      current_block = (Rpc - LABEL_19_24);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_19_17);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_19_25);
      goto label_41;

    case 19:
      current_block = (Rpc - LABEL_19_26);
      goto label_40;

    case 20:
      current_block = (Rpc - LABEL_19_27);
      goto label_39;

    case 21:
      current_block = (Rpc - LABEL_19_28);
      goto label_38;

    case 22:
      current_block = (Rpc - LABEL_19_29);
      goto label_37;

    case 23:
      current_block = (Rpc - LABEL_19_20);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_error_43)
DEFLABEL (canonicalize_error_26)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_49;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_48)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_47;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_46)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_45;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_44)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd35.Obj) = (current_block [OBJECT_19_2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Rsp [3]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (label_45)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_29)
  (Wrd20.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_28)
  (Wrd11.Obj) = Rvl;
  goto label_48;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (Wrd9.Obj) = (current_block [OBJECT_19_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_79;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_78)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_77;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_76)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_13);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_75;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_74)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_30]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_11);
  (Rsp [3]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_73;
  Wrd7 = Wrd11;

DEFLABEL (label_72)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd13.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_71;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_71;
  (Wrd19.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_70)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_69;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd41.Lng))))
    goto label_69;
  (Wrd35.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_68)
  (Wrd49.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd49.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_19_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_67;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd112.Lng))))
    goto label_67;
  (Wrd10.Obj) = ((Wrd110.pObj) [3]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;

DEFLABEL (label_65)
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_64;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd99.Lng))))
    goto label_64;
  (Wrd13.Obj) = ((Wrd97.pObj) [3]);

DEFLABEL (label_63)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_62)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_61;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd82.Lng))))
    goto label_61;
  (Wrd19.Obj) = ((Wrd80.pObj) [5]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;

DEFLABEL (label_59)
  (Wrd70.Obj) = (Rsp [4]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_58;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_58;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_57)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_56)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_22]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_55;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_55;
  (Wrd28.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_54)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  Wrd45 = Wrd42;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_50)
  (Rsp [3]) = (Wrd45.Obj);
  (Wrd46.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (label_51)
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_19_9]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd59.uLng) == 62)
    goto label_53;

DEFLABEL (label_52)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_53)
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_52;
  (Wrd45.Obj) = ((Wrd55.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto label_50;

DEFLABEL (label_55)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_19_9]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_29]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.Obj) = (current_block [OBJECT_19_8]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_28]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_38)
  (Wrd61.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_56;

DEFLABEL (label_61)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_19_8]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_27]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_59;

DEFLABEL (label_64)
  (Wrd102.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (current_block [OBJECT_19_6]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_26]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_40)
  (Wrd13.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd13.Obj) = (current_block [OBJECT_19_7]);
  goto label_63;

DEFLABEL (label_67)
  (Wrd115.Obj) = (Rsp [3]);
  (Wrd116.Obj) = (current_block [OBJECT_19_6]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_25]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_65;

DEFLABEL (label_69)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.Obj) = (current_block [OBJECT_19_4]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Obj) = (current_block [OBJECT_19_4]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_16])), (Wrd8.pObj));

DEFLABEL (label_33)
  (Wrd7.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_31)
  (Wrd15.Obj) = Rvl;
  goto label_78;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_19_22);
  (Wrd45.Obj) = Rvl;
  goto label_50;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_19_23);
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_19_24);
  (Wrd13.Obj) = Rvl;
  goto label_62;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_9 5
#define LABEL_20_7 7
#define TAG_20_8 2
#define LABEL_20_17 9
#define LABEL_20_18 11
#define LABEL_20_5 13
#define TAG_20_6 5
#define LABEL_20_13 15
#define LABEL_20_23 17
#define LABEL_20_11 19
#define LABEL_20_15 21
#define LABEL_20_16 23
#define LABEL_20_20 25
#define TAG_20_21 11
#define LABEL_20_25 27
#define LABEL_20_35 29
#define LABEL_20_28 31
#define LABEL_20_32 33
#define TAG_20_33 15
#define LABEL_20_30 35
#define LABEL_20_38 37
#define LABEL_20_39 39
#define LABEL_20_41 41
#define LABEL_20_43 43
#define LABEL_20_45 45
#define LABEL_20_46 47
#define LABEL_20_47 49
#define LABEL_20_48 51
#define LABEL_20_49 53
#define LABEL_20_50 55
#define LABEL_20_51 57
#define LABEL_20_36 59
#define TAG_20_37 28
#define LABEL_20_52 61
#define LABEL_20_40 63
#define LABEL_20_42 65
#define ENVIRONMENT_LABEL_20_3 104
#define DEBUGGING_LABEL_20_2 103
#define OBJECT_20_6 102
#define OBJECT_20_5 101
#define OBJECT_20_4 100
#define OBJECT_20_3 99
#define OBJECT_20_2 98
#define OBJECT_20_1 97
#define OBJECT_20_0 96
#define EXECUTE_CACHE_20_53 67
#define EXECUTE_CACHE_20_44 69
#define EXECUTE_CACHE_20_34 71
#define EXECUTE_CACHE_20_31 73
#define EXECUTE_CACHE_20_29 75
#define EXECUTE_CACHE_20_27 77
#define EXECUTE_CACHE_20_26 79
#define EXECUTE_CACHE_20_24 81
#define EXECUTE_CACHE_20_22 83
#define EXECUTE_CACHE_20_19 85
#define EXECUTE_CACHE_20_14 87
#define EXECUTE_CACHE_20_12 89
#define EXECUTE_CACHE_20_10 91
#define FREE_REFERENCE_20_1 94
#define FREE_REFERENCE_20_0 95
#define FREE_REFERENCES_LABEL_20_0 66
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd87;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  INVOKE_INTERFACE_DECLS
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
      goto canonicalize_bind_environment_36;

    case 1:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto normal_18;

    case 3:
      current_block = (Rpc - LABEL_20_17);
      goto label_38;

    case 4:
      current_block = (Rpc - LABEL_20_18);
      goto label_39;

    case 5:
      current_block = (Rpc - LABEL_20_5);
      goto comment_35;

    case 6:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_20_23);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_20_11);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_20_15);
      goto continuation_17;

    case 10:
      current_block = (Rpc - LABEL_20_16);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_20_20);
      goto lambda_52;

    case 12:
      current_block = (Rpc - LABEL_20_25);
      goto continuation_2;

    case 13:
      current_block = (Rpc - LABEL_20_35);
      goto continuation_20;

    case 14:
      current_block = (Rpc - LABEL_20_28);
      goto continuation_19;

    case 15:
      current_block = (Rpc - LABEL_20_32);
      goto lambda_53;

    case 16:
      current_block = (Rpc - LABEL_20_30);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_20_38);
      goto continuation_5;

    case 18:
      current_block = (Rpc - LABEL_20_39);
      goto lambda_4;

    case 19:
      current_block = (Rpc - LABEL_20_41);
      goto continuation_29;

    case 20:
      current_block = (Rpc - LABEL_20_43);
      goto label_47;

    case 21:
      current_block = (Rpc - LABEL_20_45);
      goto continuation_26;

    case 22:
      current_block = (Rpc - LABEL_20_46);
      goto label_44;

    case 23:
      current_block = (Rpc - LABEL_20_47);
      goto label_45;

    case 24:
      current_block = (Rpc - LABEL_20_48);
      goto label_46;

    case 25:
      current_block = (Rpc - LABEL_20_49);
      goto continuation_23;

    case 26:
      current_block = (Rpc - LABEL_20_50);
      goto label_42;

    case 27:
      current_block = (Rpc - LABEL_20_51);
      goto label_43;

    case 28:
      current_block = (Rpc - LABEL_20_36);
      goto lambda_54;

    case 29:
      current_block = (Rpc - LABEL_20_52);
      goto label_41;

    case 30:
      current_block = (Rpc - LABEL_20_40);
      goto lambda_7;

    case 31:
      current_block = (Rpc - LABEL_20_42);
      goto continuation_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_bind_environment_49)
DEFLABEL (canonicalize_bind_environment_36)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_5])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_7])));
  Rhp += 3;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  Wrd16 = Wrd21;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd14.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  ((Wrd23.pObj) [2]) = (Wrd22.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_59;
  Wrd6 = Wrd10;

DEFLABEL (label_58)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_57;
  (Wrd17.Obj) = (current_block [OBJECT_20_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [5]) = (Wrd18.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_20_2]);
  (Rsp [4]) = (Wrd22.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_24]));

DEFLABEL (label_57)
  Rvl = (Rsp [4]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_23])), (Wrd7.pObj));

DEFLABEL (label_40)
  (Wrd6.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_61;
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd11.Obj);
  Rsp = (& (Rsp [4]));
  goto normal_18;

DEFLABEL (label_61)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_26]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_32])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [4]) = (Wrd9.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_34]));

DEFLABEL (label_62)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_30]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_31]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_39]))));
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  goto comment_35;

DEFLABEL (label_63)
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd12.Obj);
  Rsp = (& (Rsp [4]));
  goto normal_18;

DEFLABEL (normal_51)
DEFLABEL (normal_18)
  INTERRUPT_CHECK (26, LABEL_20_7);
  (Wrd5.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (Wrd15.Obj) = (current_block [OBJECT_20_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_67;
  Wrd27 = Wrd31;

DEFLABEL (label_66)
  (Wrd36.Obj) = (current_block [OBJECT_20_1]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_65;
  Wrd37 = Wrd41;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_20_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_24]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_20_15);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_27]));

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_18])), (Wrd38.pObj));

DEFLABEL (label_39)
  (Wrd37.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_17])), (Wrd28.pObj));

DEFLABEL (label_38)
  (Wrd27.Obj) = Rvl;
  goto label_66;

DEFLABEL (comment_50)
DEFLABEL (comment_35)
  INTERRUPT_CHECK (26, LABEL_20_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_20])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_22]));

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_20_20);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_29]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_20_28);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_69;

DEFLABEL (label_68)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto normal_18;

DEFLABEL (label_69)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_35]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_26]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_20_35);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd17.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_36])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd25 = Wrd20;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  ((Wrd25.pObj) [2]) = (Wrd28.Obj);
  (Wrd24.Obj) = ((Wrd27.pObj) [3]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (Rsp [2]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_34]));

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_20_32);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_31]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_38);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_71;

DEFLABEL (label_70)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [3]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto normal_18;

DEFLABEL (label_71)
  (Wrd7.Obj) = (Rsp [2]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_20_1])))
    goto label_70;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_40]))));
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [2]);
  (Rsp [0]) = (Wrd15.Obj);
  goto comment_35;

DEFLABEL (lambda_55)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_20_39);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_20_36);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_20_6]))
    goto label_73;

DEFLABEL (label_72)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto normal_18;

DEFLABEL (label_73)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_49]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_87;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_86)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_53]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_20_49);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_45]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_85;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_84)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_83;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_82)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_10]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_20_45);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_81;
  Wrd46 = Wrd50;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_41]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd58.Obj) = (Rsp [4]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_79;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_78)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_77;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_76)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_20_41);
  (Wrd71.Obj) = (* (Rsp++));
  if (! (Rvl == (Wrd71.Obj)))
    goto label_72;
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd73.Obj) = ((Wrd75.pObj) [3]);
  (Rsp [1]) = (Wrd73.Obj);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_42]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd82.Obj) = (Rsp [3]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_75;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_74)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_44]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_20_42);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_43]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_48]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_47]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 1);

DEFLABEL (label_45)
  (Wrd55.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_46])), (Wrd47.pObj));

DEFLABEL (label_44)
  (Wrd46.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_51]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_50]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 1);

DEFLABEL (label_42)
  (Wrd28.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_52]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (lambda_56)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_20_40);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_1]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_24]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_6 5
#define LABEL_21_7 7
#define LABEL_21_9 9
#define LABEL_21_8 11
#define LABEL_21_12 13
#define LABEL_21_13 15
#define LABEL_21_14 17
#define LABEL_21_15 19
#define LABEL_21_16 21
#define LABEL_21_11 23
#define LABEL_21_17 25
#define LABEL_21_18 27
#define LABEL_21_19 29
#define LABEL_21_20 31
#define LABEL_21_21 33
#define ENVIRONMENT_LABEL_21_3 52
#define DEBUGGING_LABEL_21_2 51
#define OBJECT_21_9 50
#define OBJECT_21_8 49
#define OBJECT_21_7 48
#define OBJECT_21_6 47
#define OBJECT_21_5 46
#define OBJECT_21_4 45
#define OBJECT_21_3 44
#define OBJECT_21_2 43
#define OBJECT_21_1 42
#define OBJECT_21_0 41
#define EXECUTE_CACHE_21_10 35
#define EXECUTE_CACHE_21_5 37
#define FREE_REFERENCE_21_0 40
#define FREE_REFERENCES_LABEL_21_0 34
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd25;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd10;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd19;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd35;
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
      goto combine_list_15;

    case 1:
      current_block = (Rpc - LABEL_21_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_21_9);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_21_12);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_21_13);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_21_14);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_21_15);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_21_16);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_21_17);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_21_18);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_21_19);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_21_20);
      goto label_23;

    case 15:
      current_block = (Rpc - LABEL_21_21);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (combine_list_28)
DEFLABEL (combine_list_15)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_29;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd35.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [3]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_5]));

DEFLABEL (label_29)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_57;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_56)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_55;
  Wrd16 = Wrd20;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_53;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_52)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 62))
    goto label_51;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_51;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_50)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_49;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd33.Lng))))
    goto label_49;
  (Wrd27.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_48)
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_47;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd112.Lng))))
    goto label_47;
  (Wrd10.Obj) = ((Wrd110.pObj) [3]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;

DEFLABEL (label_45)
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_44;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd99.Lng))))
    goto label_44;
  (Wrd13.Obj) = ((Wrd97.pObj) [3]);

DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_42)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_41;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd82.Lng))))
    goto label_41;
  (Wrd19.Obj) = ((Wrd80.pObj) [5]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;

DEFLABEL (label_39)
  (Wrd70.Obj) = (Rsp [4]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_38;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_38;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_37)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_36)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_35;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_35;
  (Wrd28.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_34)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;
  Wrd45 = Wrd42;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_30)
  (Rsp [3]) = (Wrd45.Obj);
  (Wrd46.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_5]));

DEFLABEL (label_31)
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_21_9]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd59.uLng) == 62)
    goto label_33;

DEFLABEL (label_32)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 2);

DEFLABEL (label_33)
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_32;
  (Wrd45.Obj) = ((Wrd55.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto label_30;

DEFLABEL (label_35)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_21_9]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.Obj) = (current_block [OBJECT_21_8]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_20]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 2);

DEFLABEL (label_23)
  (Wrd61.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_36;

DEFLABEL (label_41)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_21_8]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 2);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_39;

DEFLABEL (label_44)
  (Wrd102.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (current_block [OBJECT_21_6]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_18]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 2);

DEFLABEL (label_25)
  (Wrd13.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd13.Obj) = (current_block [OBJECT_21_7]);
  goto label_43;

DEFLABEL (label_47)
  (Wrd115.Obj) = (Rsp [3]);
  (Wrd116.Obj) = (current_block [OBJECT_21_6]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_45;

DEFLABEL (label_49)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.Obj) = (current_block [OBJECT_21_4]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_21_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_7])), (Wrd17.pObj));

DEFLABEL (label_18)
  (Wrd16.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21_14);
  (Wrd45.Obj) = Rvl;
  goto label_30;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_21_15);
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_21_16);
  (Wrd13.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define LABEL_22_10 9
#define LABEL_22_9 11
#define LABEL_22_14 13
#define LABEL_22_12 15
#define LABEL_22_13 17
#define ENVIRONMENT_LABEL_22_3 36
#define DEBUGGING_LABEL_22_2 35
#define OBJECT_22_3 34
#define OBJECT_22_2 33
#define OBJECT_22_1 32
#define OBJECT_22_0 31
#define EXECUTE_CACHE_22_16 19
#define EXECUTE_CACHE_22_15 21
#define EXECUTE_CACHE_22_11 23
#define EXECUTE_CACHE_22_8 25
#define EXECUTE_CACHE_22_6 27
#define FREE_REFERENCE_22_0 30
#define FREE_REFERENCES_LABEL_22_0 18
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_22_4);
      goto canonicalize_variable_11;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_22_14);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_22_12);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_22_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_variable_16)
DEFLABEL (canonicalize_variable_11)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_22;
  Wrd6 = Wrd10;

DEFLABEL (label_21)
  (Wrd12.Obj) = (Rsp [0]);
  if (! ((Wrd12.Obj) == (Wrd6.Obj)))
    goto label_17;
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [2]) = (Wrd26.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  (Rsp [1]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (label_17)
  (Wrd13.Obj) = (Rsp [3]);
  if ((Wrd13.Obj) == (current_block [OBJECT_22_1]))
    goto label_19;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  goto label_18;

DEFLABEL (label_19)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_18)
DEFLABEL (label_20)
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_7])), (Wrd7.pObj));

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_21;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_22_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd7.Obj) = (current_block [OBJECT_22_0]);
  goto label_23;

DEFLABEL (label_24)
  (Wrd7.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_23)
DEFLABEL (label_25)
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd9.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_28;
  Wrd17 = Wrd21;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_13);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_22_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_22_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_22_12);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_14])), (Wrd18.pObj));

DEFLABEL (label_14)
  (Wrd17.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define TAG_23_6 1
#define LABEL_23_8 7
#define LABEL_23_13 9
#define LABEL_23_15 11
#define LABEL_23_17 13
#define LABEL_23_10 15
#define LABEL_23_21 17
#define LABEL_23_23 19
#define LABEL_23_24 21
#define LABEL_23_11 23
#define LABEL_23_19 25
#define LABEL_23_25 27
#define LABEL_23_27 29
#define LABEL_23_28 31
#define LABEL_23_14 33
#define LABEL_23_29 35
#define LABEL_23_16 37
#define LABEL_23_31 39
#define LABEL_23_32 41
#define LABEL_23_33 43
#define LABEL_23_22 45
#define LABEL_23_34 47
#define LABEL_23_35 49
#define LABEL_23_36 51
#define LABEL_23_37 53
#define LABEL_23_38 55
#define LABEL_23_39 57
#define LABEL_23_40 59
#define LABEL_23_41 61
#define LABEL_23_26 63
#define LABEL_23_42 65
#define LABEL_23_43 67
#define LABEL_23_44 69
#define LABEL_23_45 71
#define LABEL_23_46 73
#define ENVIRONMENT_LABEL_23_3 101
#define DEBUGGING_LABEL_23_2 100
#define OBJECT_23_9 99
#define OBJECT_23_8 98
#define OBJECT_23_7 97
#define OBJECT_23_6 96
#define OBJECT_23_5 95
#define OBJECT_23_4 94
#define OBJECT_23_3 93
#define OBJECT_23_2 92
#define OBJECT_23_1 91
#define OBJECT_23_0 90
#define EXECUTE_CACHE_23_30 75
#define EXECUTE_CACHE_23_20 77
#define EXECUTE_CACHE_23_18 79
#define EXECUTE_CACHE_23_12 81
#define EXECUTE_CACHE_23_9 83
#define EXECUTE_CACHE_23_7 85
#define FREE_REFERENCE_23_1 88
#define FREE_REFERENCE_23_0 89
#define FREE_REFERENCES_LABEL_23_0 74
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd48;
  machine_word Wrd35;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_23_4);
      goto canonicalize_assignment_38;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_61;

    case 2:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_23_13);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_23_15);
      goto label_40;

    case 5:
      current_block = (Rpc - LABEL_23_17);
      goto label_41;

    case 6:
      current_block = (Rpc - LABEL_23_10);
      goto continuation_24;

    case 7:
      current_block = (Rpc - LABEL_23_21);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_23_23);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_23_24);
      goto label_44;

    case 10:
      current_block = (Rpc - LABEL_23_11);
      goto continuation_22;

    case 11:
      current_block = (Rpc - LABEL_23_19);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_23_25);
      goto label_45;

    case 13:
      current_block = (Rpc - LABEL_23_27);
      goto label_46;

    case 14:
      current_block = (Rpc - LABEL_23_28);
      goto label_47;

    case 15:
      current_block = (Rpc - LABEL_23_14);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_23_29);
      goto label_48;

    case 17:
      current_block = (Rpc - LABEL_23_16);
      goto continuation_3;

    case 18:
      current_block = (Rpc - LABEL_23_31);
      goto continuation_31;

    case 19:
      current_block = (Rpc - LABEL_23_32);
      goto continuation_34;

    case 20:
      current_block = (Rpc - LABEL_23_33);
      goto continuation_29;

    case 21:
      current_block = (Rpc - LABEL_23_22);
      goto continuation_27;

    case 22:
      current_block = (Rpc - LABEL_23_34);
      goto label_53;

    case 23:
      current_block = (Rpc - LABEL_23_35);
      goto label_52;

    case 24:
      current_block = (Rpc - LABEL_23_36);
      goto label_51;

    case 25:
      current_block = (Rpc - LABEL_23_37);
      goto label_50;

    case 26:
      current_block = (Rpc - LABEL_23_38);
      goto label_49;

    case 27:
      current_block = (Rpc - LABEL_23_39);
      goto continuation_17;

    case 28:
      current_block = (Rpc - LABEL_23_40);
      goto continuation_20;

    case 29:
      current_block = (Rpc - LABEL_23_41);
      goto continuation_15;

    case 30:
      current_block = (Rpc - LABEL_23_26);
      goto continuation_13;

    case 31:
      current_block = (Rpc - LABEL_23_42);
      goto label_58;

    case 32:
      current_block = (Rpc - LABEL_23_43);
      goto label_57;

    case 33:
      current_block = (Rpc - LABEL_23_44);
      goto label_56;

    case 34:
      current_block = (Rpc - LABEL_23_45);
      goto label_55;

    case 35:
      current_block = (Rpc - LABEL_23_46);
      goto label_54;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_assignment_60)
DEFLABEL (canonicalize_assignment_38)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_23_5);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_23_0]))
    goto label_93;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_86;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_23_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_23_19);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_85;
  Wrd8 = Wrd12;

DEFLABEL (label_84)
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_83;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_83;
  (Wrd19.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_82)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_81;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd41.Lng))))
    goto label_81;
  (Wrd35.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_80)
  (Wrd49.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd49.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_23_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_79;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd112.Lng))))
    goto label_79;
  (Wrd10.Obj) = ((Wrd110.pObj) [3]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_78;

DEFLABEL (label_77)
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_76;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd99.Lng))))
    goto label_76;
  (Wrd13.Obj) = ((Wrd97.pObj) [3]);

DEFLABEL (label_75)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_74)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_40]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_73;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd82.Lng))))
    goto label_73;
  (Wrd19.Obj) = ((Wrd80.pObj) [5]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_72;

DEFLABEL (label_71)
  (Wrd70.Obj) = (Rsp [4]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_70;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_70;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_69)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_68)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_39]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_67;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_67;
  (Wrd28.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_66)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_63;
  Wrd45 = Wrd42;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_62)
  (Rsp [3]) = (Wrd45.Obj);
  (Wrd46.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

DEFLABEL (label_63)
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_23_9]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd59.uLng) == 62)
    goto label_65;

DEFLABEL (label_64)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_65)
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_64;
  (Wrd45.Obj) = ((Wrd55.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto label_62;

DEFLABEL (label_67)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_23_9]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_46]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_70)
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.Obj) = (current_block [OBJECT_23_8]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_45]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_55)
  (Wrd61.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_68;

DEFLABEL (label_73)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_23_8]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_44]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_56)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  goto label_71;

DEFLABEL (label_76)
  (Wrd102.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (current_block [OBJECT_23_5]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_43]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_57)
  (Wrd13.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd13.Obj) = (current_block [OBJECT_23_7]);
  goto label_75;

DEFLABEL (label_79)
  (Wrd115.Obj) = (Rsp [3]);
  (Wrd116.Obj) = (current_block [OBJECT_23_5]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_42]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_58)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  goto label_77;

DEFLABEL (label_81)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.Obj) = (current_block [OBJECT_23_1]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_28]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Obj) = (current_block [OBJECT_23_1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_27]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_25])), (Wrd9.pObj));

DEFLABEL (label_45)
  (Wrd8.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_86)
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_92;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd26.Lng))))
    goto label_92;
  (Wrd18.Obj) = ((Wrd24.pObj) [2]);

DEFLABEL (label_91)
  (Wrd37.Obj) = (current_block [OBJECT_23_3]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_16]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_90;
  Wrd45 = Wrd49;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_23_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_30]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_23_14);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_88;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_88;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_87)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_23_4]);
  (Rsp [3]) = (Wrd21.Obj);
  (Wrd22.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

DEFLABEL (label_88)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_23_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_48)
  (Wrd5.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_17])), (Wrd46.pObj));

DEFLABEL (label_41)
  (Wrd45.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (current_block [OBJECT_23_1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_40)
  (Wrd18.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_93)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_23_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  (Wrd7.Obj) = (current_block [OBJECT_23_4]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_94;

DEFLABEL (label_95)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_94)
DEFLABEL (label_120)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_23_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_23_10);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_119;
  Wrd8 = Wrd12;

DEFLABEL (label_118)
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_117;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_117;
  (Wrd19.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_116)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_115;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd41.Lng))))
    goto label_115;
  (Wrd35.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_114)
  (Wrd49.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd49.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_23_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_113;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd112.Lng))))
    goto label_113;
  (Wrd10.Obj) = ((Wrd110.pObj) [3]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_112;

DEFLABEL (label_111)
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_110;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd99.Lng))))
    goto label_110;
  (Wrd13.Obj) = ((Wrd97.pObj) [3]);

DEFLABEL (label_109)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_108)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_107;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd82.Lng))))
    goto label_107;
  (Wrd19.Obj) = ((Wrd80.pObj) [5]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_106;

DEFLABEL (label_105)
  (Wrd70.Obj) = (Rsp [4]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_104;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_104;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_103)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_102)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_31]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_101;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_101;
  (Wrd28.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_100)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_97;
  Wrd45 = Wrd42;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_96)
  (Rsp [3]) = (Wrd45.Obj);
  (Wrd46.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

DEFLABEL (label_97)
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_23_9]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd59.uLng) == 62)
    goto label_99;

DEFLABEL (label_98)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_99)
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_98;
  (Wrd45.Obj) = ((Wrd55.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto label_96;

DEFLABEL (label_101)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_23_9]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_38]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (label_104)
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.Obj) = (current_block [OBJECT_23_8]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_37]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_50)
  (Wrd61.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_102;

DEFLABEL (label_107)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_23_8]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_36]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_106;
  goto label_105;

DEFLABEL (label_110)
  (Wrd102.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (current_block [OBJECT_23_5]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_35]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_52)
  (Wrd13.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd13.Obj) = (current_block [OBJECT_23_7]);
  goto label_109;

DEFLABEL (label_113)
  (Wrd115.Obj) = (Rsp [3]);
  (Wrd116.Obj) = (current_block [OBJECT_23_5]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_34]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_112;
  goto label_111;

DEFLABEL (label_115)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.Obj) = (current_block [OBJECT_23_1]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_24]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Obj) = (current_block [OBJECT_23_1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_23]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_21])), (Wrd9.pObj));

DEFLABEL (label_42)
  (Wrd8.Obj) = Rvl;
  goto label_118;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_23_39);
  (Wrd45.Obj) = Rvl;
  goto label_62;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_23_40);
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_23_41);
  (Wrd13.Obj) = Rvl;
  goto label_74;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_23_31);
  (Wrd45.Obj) = Rvl;
  goto label_96;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_23_32);
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_23_33);
  (Wrd13.Obj) = Rvl;
  goto label_108;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_8 7
#define LABEL_24_12 9
#define LABEL_24_10 11
#define ENVIRONMENT_LABEL_24_3 26
#define DEBUGGING_LABEL_24_2 25
#define OBJECT_24_1 24
#define OBJECT_24_0 23
#define EXECUTE_CACHE_24_14 13
#define EXECUTE_CACHE_24_13 15
#define EXECUTE_CACHE_24_11 17
#define EXECUTE_CACHE_24_9 19
#define EXECUTE_CACHE_24_7 21
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_24_4);
      goto canonicalize_definition_5;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_12);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_definition_8)
DEFLABEL (canonicalize_definition_5)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
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
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_12);
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_6 5
#define LABEL_25_5 7
#define ENVIRONMENT_LABEL_25_3 17
#define DEBUGGING_LABEL_25_2 16
#define OBJECT_25_0 15
#define EXECUTE_CACHE_25_8 9
#define EXECUTE_CACHE_25_7 11
#define FREE_REFERENCE_25_0 14
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_25_4);
      goto canonicalize_the_environment_1;

    case 1:
      current_block = (Rpc - LABEL_25_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_the_environment_5)
DEFLABEL (canonicalize_the_environment_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_7;
  Wrd8 = Wrd12;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_7 5
#define LABEL_26_5 7
#define LABEL_26_8 9
#define LABEL_26_9 11
#define LABEL_26_10 13
#define LABEL_26_11 15
#define LABEL_26_12 17
#define LABEL_26_14 19
#define LABEL_26_15 21
#define LABEL_26_17 23
#define LABEL_26_18 25
#define LABEL_26_13 27
#define ENVIRONMENT_LABEL_26_3 52
#define DEBUGGING_LABEL_26_2 51
#define OBJECT_26_10 50
#define OBJECT_26_9 49
#define OBJECT_26_8 48
#define OBJECT_26_7 47
#define OBJECT_26_6 46
#define OBJECT_26_5 45
#define OBJECT_26_4 44
#define OBJECT_26_3 43
#define OBJECT_26_2 42
#define OBJECT_26_1 41
#define OBJECT_26_0 40
#define EXECUTE_CACHE_26_20 29
#define EXECUTE_CACHE_26_19 31
#define EXECUTE_CACHE_26_16 33
#define EXECUTE_CACHE_26_6 35
#define FREE_REFERENCE_26_1 38
#define FREE_REFERENCE_26_0 39
#define FREE_REFERENCES_LABEL_26_0 28
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd94;
  machine_word Wrd88;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd74;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd96;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd15;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd133;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_26_4);
      goto canonicalize_lambda_13;

    case 1:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_26_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_26_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_26_12);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_26_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_26_15);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_26_17);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_26_18);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_26_13);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_lambda_25)
DEFLABEL (canonicalize_lambda_13)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_26_0]);
  if ((Wrd8.Obj) == (Wrd9.Obj))
    goto label_27;
  (Wrd10.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_26;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_26)
DEFLABEL (label_50)
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (current_block [OBJECT_26_2]))
    goto label_29;

DEFLABEL (label_28)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd133.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd133.uLng) == 62))
    goto label_49;
  (Wrd129.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd130.Obj) = ((Wrd129.pObj) [0]);
  (Wrd131.Lng) = (FIXNUM_TO_LONG (Wrd130.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd131.Lng))))
    goto label_49;
  (Wrd11.Obj) = ((Wrd129.pObj) [3]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;

DEFLABEL (label_48)
  (Wrd118.Obj) = (Rsp [0]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 62))
    goto label_47;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd117.Lng))))
    goto label_47;
  (Wrd15.Obj) = ((Wrd115.pObj) [4]);
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_28;

DEFLABEL (label_46)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_45;
  Wrd17 = Wrd21;

DEFLABEL (label_44)
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_43;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_43;
  (Wrd24.Obj) = ((Wrd30.pObj) [4]);

DEFLABEL (label_42)
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_41;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd48.Lng))))
    goto label_41;
  (Wrd40.Obj) = ((Wrd46.pObj) [5]);

DEFLABEL (label_40)
  (Rsp [3]) = (Wrd40.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_26_7]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd69.Obj) = ((Wrd66.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_39;
  Wrd65 = Wrd69;

DEFLABEL (label_38)
  if ((Wrd65.Obj) == (current_block [OBJECT_26_8]))
    goto label_35;
  (Wrd81.Obj) = (Rsp [4]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 62))
    goto label_34;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd80.Lng))))
    goto label_34;
  (Wrd74.Obj) = ((Wrd78.pObj) [2]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_33)
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd92.Obj) = ((Wrd89.pObj) [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if ((Wrd93.uLng) == 50)
    goto label_32;
  Wrd88 = Wrd92;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd94.Obj) = (current_block [OBJECT_26_8]);
  (* (--Rsp)) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_26_13);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_26_10]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_20]));

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_18])), (Wrd89.pObj));

DEFLABEL (label_20)
  (Wrd88.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd83.Obj) = (Rsp [4]);
  (Wrd84.Obj) = (current_block [OBJECT_26_9]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd105.Obj) = (Rsp [4]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd106.uLng) == 62))
    goto label_37;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd104.Lng))))
    goto label_37;
  (Wrd96.Obj) = ((Wrd102.pObj) [2]);

DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd96.Obj);
  goto label_30;

DEFLABEL (label_37)
  (Wrd107.Obj) = (Rsp [4]);
  (Wrd108.Obj) = (current_block [OBJECT_26_9]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 2);

DEFLABEL (label_21)
  (Wrd96.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_14])), (Wrd66.pObj));

DEFLABEL (label_18)
  (Wrd65.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (current_block [OBJECT_26_6]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 2);

DEFLABEL (label_17)
  (Wrd40.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_26_5]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 2);

DEFLABEL (label_16)
  (Wrd24.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_10])), (Wrd18.pObj));

DEFLABEL (label_15)
  (Wrd17.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd120.Obj) = (Rsp [0]);
  (Wrd121.Obj) = (current_block [OBJECT_26_5]);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 2);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_28;

DEFLABEL (label_49)
  (Wrd134.Obj) = (Rsp [0]);
  (Wrd135.Obj) = (current_block [OBJECT_26_3]);
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_11 7
#define TAG_27_12 2
#define LABEL_27_15 9
#define LABEL_27_7 11
#define TAG_27_8 4
#define LABEL_27_14 13
#define LABEL_27_17 15
#define LABEL_27_27 17
#define LABEL_27_28 19
#define LABEL_27_30 21
#define LABEL_27_18 23
#define LABEL_27_19 25
#define TAG_27_20 11
#define LABEL_27_24 27
#define TAG_27_25 12
#define LABEL_27_22 29
#define TAG_27_23 13
#define LABEL_27_35 31
#define LABEL_27_36 33
#define LABEL_27_37 35
#define LABEL_27_29 37
#define LABEL_27_38 39
#define LABEL_27_39 41
#define LABEL_27_41 43
#define LABEL_27_42 45
#define LABEL_27_43 47
#define LABEL_27_33 49
#define LABEL_27_44 51
#define LABEL_27_46 53
#define ENVIRONMENT_LABEL_27_3 100
#define DEBUGGING_LABEL_27_2 99
#define OBJECT_27_11 98
#define OBJECT_27_10 97
#define OBJECT_27_9 96
#define OBJECT_27_8 95
#define OBJECT_27_7 94
#define OBJECT_27_6 93
#define OBJECT_27_5 92
#define OBJECT_27_4 91
#define OBJECT_27_3 90
#define OBJECT_27_2 89
#define OBJECT_27_1 88
#define OBJECT_27_0 87
#define EXECUTE_CACHE_27_45 55
#define EXECUTE_CACHE_27_40 57
#define EXECUTE_CACHE_27_34 59
#define EXECUTE_CACHE_27_32 61
#define EXECUTE_CACHE_27_31 63
#define EXECUTE_CACHE_27_26 65
#define EXECUTE_CACHE_27_21 67
#define EXECUTE_CACHE_27_16 69
#define EXECUTE_CACHE_27_13 71
#define EXECUTE_CACHE_27_10 73
#define EXECUTE_CACHE_27_9 75
#define EXECUTE_CACHE_27_6 77
#define FREE_REFERENCE_27_4 80
#define FREE_REFERENCE_27_3 81
#define FREE_REFERENCE_27_2 82
#define FREE_REFERENCE_27_1 83
#define FREE_REFERENCE_27_0 84
#define FREE_ASSIGNMENT_27_0 86
#define FREE_REFERENCES_LABEL_27_0 54
#define NUMBER_OF_LINKER_SECTIONS_27_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd28;
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
      goto canonicalize_sequence_32;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_11);
      goto lambda_50;

    case 3:
      current_block = (Rpc - LABEL_27_15);
      goto label_34;

    case 4:
      current_block = (Rpc - LABEL_27_7);
      goto lambda_49;

    case 5:
      current_block = (Rpc - LABEL_27_14);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_27_17);
      goto continuation_24;

    case 7:
      current_block = (Rpc - LABEL_27_27);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_27_28);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_27_30);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_27_18);
      goto continuation_23;

    case 11:
      current_block = (Rpc - LABEL_27_19);
      goto lambda_51;

    case 12:
      current_block = (Rpc - LABEL_27_24);
      goto lambda_53;

    case 13:
      current_block = (Rpc - LABEL_27_22);
      goto swapB_52;

    case 14:
      current_block = (Rpc - LABEL_27_35);
      goto label_38;

    case 15:
      current_block = (Rpc - LABEL_27_36);
      goto label_39;

    case 16:
      current_block = (Rpc - LABEL_27_37);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_27_29);
      goto continuation_26;

    case 18:
      current_block = (Rpc - LABEL_27_38);
      goto label_41;

    case 19:
      current_block = (Rpc - LABEL_27_39);
      goto label_42;

    case 20:
      current_block = (Rpc - LABEL_27_41);
      goto continuation_8;

    case 21:
      current_block = (Rpc - LABEL_27_42);
      goto label_46;

    case 22:
      current_block = (Rpc - LABEL_27_43);
      goto label_45;

    case 23:
      current_block = (Rpc - LABEL_27_33);
      goto continuation_6;

    case 24:
      current_block = (Rpc - LABEL_27_44);
      goto label_44;

    case 25:
      current_block = (Rpc - LABEL_27_46);
      goto label_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_sequence_48)
DEFLABEL (canonicalize_sequence_32)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_54;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_7])));
  Rhp += 2;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd31 = Wrd28;
  (Wrd32.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (Rsp [2]) = (Wrd27.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

DEFLABEL (label_54)
  (Wrd7.Obj) = (Rsp [2]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_27_0])))
    goto label_56;

DEFLABEL (label_55)
  (Wrd24.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_27_4]);
  (Rsp [0]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (label_56)
  if ((Wrd7.Obj) == (current_block [OBJECT_27_1]))
    goto label_55;
  if ((Wrd7.Obj) == (current_block [OBJECT_27_2]))
    goto label_58;

DEFLABEL (label_57)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_11])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_13]));

DEFLABEL (label_58)
  (Wrd22.Obj) = (Rsp [1]);
  if ((Wrd22.Obj) == (current_block [OBJECT_27_3]))
    goto label_57;
  goto label_55;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_27_11);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_60;
  Wrd8 = Wrd12;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_27_14);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_22])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd29.pObj) = (& (Rhp [-1]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd29.pObj)));
  (Rsp [1]) = (Wrd30.Obj);
  ((Wrd32.pObj) [2]) = (Wrd30.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_24])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [6]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Rsp [3]) = (Wrd33.Obj);
  (Rsp [5]) = (Wrd33.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_26]));

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_15])), (Wrd9.pObj));

DEFLABEL (label_34)
  (Wrd8.Obj) = Rvl;
  goto label_59;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_27_7);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_19])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd18 = Wrd13;
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_21]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_31]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_27_17);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_70;
  Wrd7 = Wrd11;

DEFLABEL (label_69)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_68;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_68;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_67)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_29]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_66;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd40.Lng))))
    goto label_66;
  (Wrd34.Obj) = ((Wrd38.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_65)
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_27_29);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_64;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_64;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_63)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_62;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd29.Lng))))
    goto label_62;
  (Wrd21.Obj) = ((Wrd27.pObj) [5]);

DEFLABEL (label_61)
  (Rsp [3]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_40]));

DEFLABEL (label_62)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_27_10]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_39]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_6]), 2);

DEFLABEL (label_42)
  (Wrd21.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_27_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_38]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_6]), 2);

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.Obj) = (current_block [OBJECT_27_7]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_30]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_6]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_27_5]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_28]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_6]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_27])), (Wrd8.pObj));

DEFLABEL (label_35)
  (Wrd7.Obj) = Rvl;
  goto label_69;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_27_19);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_32]));

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_27_24);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_34]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_33);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_27_11]))
    goto label_75;

DEFLABEL (label_74)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_4]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_73;
  Wrd10 = Wrd14;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_71)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [3]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (Rsp [3]) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_46])), (Wrd11.pObj));

DEFLABEL (label_43)
  (Wrd10.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_3]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_81;
  Wrd22 = Wrd26;

DEFLABEL (label_80)
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_41]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [6]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_45]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_27_41);
  (Wrd36.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd36.uLng) == 26))
    goto label_79;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd37.Lng) > 1L))
    goto label_74;

DEFLABEL (label_78)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_2]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_77;
  Wrd40 = Wrd44;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd40.Obj);
  goto label_71;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_43])), (Wrd41.pObj));

DEFLABEL (label_45)
  (Wrd40.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd47.Obj) = (current_block [OBJECT_27_7]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_42]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_46)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_44])), (Wrd23.pObj));

DEFLABEL (label_44)
  (Wrd22.Obj) = Rvl;
  goto label_80;

DEFLABEL (swapB_52)
  CLOSURE_HEADER (LABEL_27_22);

DEFLABEL (swapB_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_90;

DEFLABEL (label_89)
  Wrd5 = Wrd9;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_87;

DEFLABEL (label_86)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_85)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_82)
  Rvl = (current_block [OBJECT_27_8]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_84)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_37])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_40)
  goto label_82;

DEFLABEL (label_87)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_86;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_36])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_39)
  goto label_85;

DEFLABEL (label_90)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_89;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_27_35])), (Wrd6.pObj));

DEFLABEL (label_38)
  (Wrd5.Obj) = Rvl;
  goto label_88;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_6 9
#define ENVIRONMENT_LABEL_28_3 22
#define DEBUGGING_LABEL_28_2 21
#define OBJECT_28_3 20
#define OBJECT_28_2 19
#define OBJECT_28_1 18
#define OBJECT_28_0 17
#define EXECUTE_CACHE_28_9 11
#define EXECUTE_CACHE_28_8 13
#define FREE_REFERENCE_28_0 16
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_28_4);
      goto Z__single_definition_5;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_28_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__single_definition_10)
DEFLABEL (Z__single_definition_5)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_13)
  (Wrd24.Obj) = (current_block [OBJECT_28_2]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_12;
  Wrd32 = Wrd36;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_6);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_28_3]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_7])), (Wrd33.pObj));

DEFLABEL (label_8)
  (Wrd32.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_28_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_5 3
#define LABEL_29_6 5
#define LABEL_29_7 7
#define LABEL_29_4 9
#define LABEL_29_8 11
#define LABEL_29_10 13
#define LABEL_29_12 15
#define ENVIRONMENT_LABEL_29_3 32
#define DEBUGGING_LABEL_29_2 31
#define OBJECT_29_3 30
#define OBJECT_29_2 29
#define OBJECT_29_1 28
#define OBJECT_29_0 27
#define EXECUTE_CACHE_29_13 17
#define EXECUTE_CACHE_29_11 19
#define EXECUTE_CACHE_29_9 21
#define FREE_REFERENCE_29_0 24
#define FREE_ASSIGNMENT_29_0 26
#define FREE_REFERENCES_LABEL_29_0 16
#define NUMBER_OF_LINKER_SECTIONS_29_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_29_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_29_4);
      goto single_definition_5;

    case 4:
      current_block = (Rpc - LABEL_29_8);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_29_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_29_12);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (single_definition_12)
DEFLABEL (single_definition_5)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_29_0]))
    goto label_16;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_10);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (current_block [OBJECT_29_3]);
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_29_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_22;
  Wrd15 = Wrd19;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_20;
  Wrd25 = Wrd29;

DEFLABEL (label_19)
  (Wrd34.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd43.Obj) = ((Wrd35.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd35.pObj) [0]) = (Wrd31.Obj);
  goto label_15;

DEFLABEL (label_18)
  if ((Wrd43.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_7])), (Wrd35.pObj), (Wrd31.Obj));

DEFLABEL (label_10)
  goto label_15;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_6])), (Wrd26.pObj));

DEFLABEL (label_9)
  (Wrd25.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_8])), (Wrd16.pObj));

DEFLABEL (label_7)
  (Wrd15.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_5 3
#define LABEL_30_6 5
#define LABEL_30_4 7
#define LABEL_30_7 9
#define LABEL_30_8 11
#define LABEL_30_10 13
#define LABEL_30_13 15
#define LABEL_30_14 17
#define LABEL_30_18 19
#define LABEL_30_19 21
#define LABEL_30_22 23
#define LABEL_30_25 25
#define LABEL_30_20 27
#define LABEL_30_17 29
#define LABEL_30_28 31
#define LABEL_30_29 33
#define LABEL_30_30 35
#define LABEL_30_31 37
#define LABEL_30_32 39
#define LABEL_30_33 41
#define LABEL_30_34 43
#define LABEL_30_35 45
#define LABEL_30_11 47
#define LABEL_30_37 49
#define LABEL_30_15 51
#define LABEL_30_40 53
#define LABEL_30_41 55
#define LABEL_30_42 57
#define LABEL_30_43 59
#define LABEL_30_48 61
#define LABEL_30_12 63
#define LABEL_30_36 65
#define LABEL_30_39 67
#define LABEL_30_45 69
#define LABEL_30_46 71
#define LABEL_30_47 73
#define LABEL_30_52 75
#define LABEL_30_53 77
#define LABEL_30_58 79
#define LABEL_30_23 81
#define LABEL_30_56 83
#define LABEL_30_57 85
#define LABEL_30_62 87
#define LABEL_30_66 89
#define LABEL_30_61 91
#define LABEL_30_68 93
#define LABEL_30_63 95
#define LABEL_30_65 97
#define LABEL_30_67 99
#define LABEL_30_69 101
#define ENVIRONMENT_LABEL_30_3 161
#define DEBUGGING_LABEL_30_2 160
#define OBJECT_30_13 159
#define OBJECT_30_12 158
#define OBJECT_30_11 157
#define OBJECT_30_10 156
#define OBJECT_30_9 155
#define OBJECT_30_8 154
#define OBJECT_30_7 153
#define OBJECT_30_6 152
#define OBJECT_30_5 151
#define OBJECT_30_4 150
#define OBJECT_30_3 149
#define OBJECT_30_2 148
#define OBJECT_30_1 147
#define OBJECT_30_0 146
#define EXECUTE_CACHE_30_70 103
#define EXECUTE_CACHE_30_64 105
#define EXECUTE_CACHE_30_60 107
#define EXECUTE_CACHE_30_59 109
#define EXECUTE_CACHE_30_55 111
#define EXECUTE_CACHE_30_54 113
#define EXECUTE_CACHE_30_51 115
#define EXECUTE_CACHE_30_50 117
#define EXECUTE_CACHE_30_49 119
#define EXECUTE_CACHE_30_44 121
#define EXECUTE_CACHE_30_38 123
#define EXECUTE_CACHE_30_27 125
#define EXECUTE_CACHE_30_26 127
#define EXECUTE_CACHE_30_24 129
#define EXECUTE_CACHE_30_21 131
#define EXECUTE_CACHE_30_16 133
#define EXECUTE_CACHE_30_9 135
#define FREE_REFERENCE_30_5 138
#define FREE_REFERENCE_30_4 139
#define FREE_REFERENCE_30_3 140
#define FREE_REFERENCE_30_2 141
#define FREE_REFERENCE_30_1 142
#define FREE_REFERENCE_30_0 143
#define FREE_ASSIGNMENT_30_0 145
#define FREE_REFERENCES_LABEL_30_0 102
#define NUMBER_OF_LINKER_SECTIONS_30_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd96;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd87;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd74;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd69;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto label_71;

    case 2:
      current_block = (Rpc - LABEL_30_4);
      goto multi_definition_63;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto label_65;

    case 4:
      current_block = (Rpc - LABEL_30_8);
      goto label_66;

    case 5:
      current_block = (Rpc - LABEL_30_10);
      goto loop_34;

    case 6:
      current_block = (Rpc - LABEL_30_13);
      goto label_69;

    case 7:
      current_block = (Rpc - LABEL_30_14);
      goto label_70;

    case 8:
      current_block = (Rpc - LABEL_30_18);
      goto label_67;

    case 9:
      current_block = (Rpc - LABEL_30_19);
      goto label_68;

    case 10:
      current_block = (Rpc - LABEL_30_22);
      goto continuation_57;

    case 11:
      current_block = (Rpc - LABEL_30_25);
      goto continuation_56;

    case 12:
      current_block = (Rpc - LABEL_30_20);
      goto continuation_55;

    case 13:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_30_28);
      goto label_76;

    case 15:
      current_block = (Rpc - LABEL_30_29);
      goto label_77;

    case 16:
      current_block = (Rpc - LABEL_30_30);
      goto label_78;

    case 17:
      current_block = (Rpc - LABEL_30_31);
      goto label_79;

    case 18:
      current_block = (Rpc - LABEL_30_32);
      goto label_72;

    case 19:
      current_block = (Rpc - LABEL_30_33);
      goto label_73;

    case 20:
      current_block = (Rpc - LABEL_30_34);
      goto label_74;

    case 21:
      current_block = (Rpc - LABEL_30_35);
      goto label_75;

    case 22:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_19;

    case 23:
      current_block = (Rpc - LABEL_30_37);
      goto label_80;

    case 24:
      current_block = (Rpc - LABEL_30_15);
      goto continuation_26;

    case 25:
      current_block = (Rpc - LABEL_30_40);
      goto collect_49;

    case 26:
      current_block = (Rpc - LABEL_30_41);
      goto label_81;

    case 27:
      current_block = (Rpc - LABEL_30_42);
      goto label_83;

    case 28:
      current_block = (Rpc - LABEL_30_43);
      goto label_84;

    case 29:
      current_block = (Rpc - LABEL_30_48);
      goto label_82;

    case 30:
      current_block = (Rpc - LABEL_30_12);
      goto directive_wrapper_53;

    case 31:
      current_block = (Rpc - LABEL_30_36);
      goto continuation_33;

    case 32:
      current_block = (Rpc - LABEL_30_39);
      goto continuation_25;

    case 33:
      current_block = (Rpc - LABEL_30_45);
      goto continuation_43;

    case 34:
      current_block = (Rpc - LABEL_30_46);
      goto continuation_42;

    case 35:
      current_block = (Rpc - LABEL_30_47);
      goto continuation_41;

    case 36:
      current_block = (Rpc - LABEL_30_52);
      goto continuation_24;

    case 37:
      current_block = (Rpc - LABEL_30_53);
      goto continuation_40;

    case 38:
      current_block = (Rpc - LABEL_30_58);
      goto label_85;

    case 39:
      current_block = (Rpc - LABEL_30_23);
      goto continuation_58;

    case 40:
      current_block = (Rpc - LABEL_30_56);
      goto continuation_23;

    case 41:
      current_block = (Rpc - LABEL_30_57);
      goto continuation_39;

    case 42:
      current_block = (Rpc - LABEL_30_62);
      goto continuation_28;

    case 43:
      current_block = (Rpc - LABEL_30_66);
      goto label_86;

    case 44:
      current_block = (Rpc - LABEL_30_61);
      goto continuation_31;

    case 45:
      current_block = (Rpc - LABEL_30_68);
      goto label_87;

    case 46:
      current_block = (Rpc - LABEL_30_63);
      goto continuation_38;

    case 47:
      current_block = (Rpc - LABEL_30_65);
      goto continuation_29;

    case 48:
      current_block = (Rpc - LABEL_30_67);
      goto continuation_30;

    case 49:
      current_block = (Rpc - LABEL_30_69);
      goto join_52;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (multi_definition_89)
DEFLABEL (multi_definition_63)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_30_0]))
    goto label_95;

DEFLABEL (label_94)
  (Wrd7.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto loop_34;

DEFLABEL (label_95)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_101;
  Wrd17 = Wrd21;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_99;
  Wrd24 = Wrd28;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_30_0]));
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_97;

DEFLABEL (label_96)
  ((Wrd31.pObj) [0]) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_96;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_30_6])), (Wrd31.pObj), Rvl);

DEFLABEL (label_71)
  goto label_94;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_8])), (Wrd25.pObj));

DEFLABEL (label_66)
  (Wrd24.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_7])), (Wrd18.pObj));

DEFLABEL (label_65)
  (Wrd17.Obj) = Rvl;
  goto label_100;

DEFLABEL (loop_90)
DEFLABEL (loop_34)
  INTERRUPT_CHECK (26, LABEL_30_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_30_1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_126;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_125;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_124)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 62))
    goto label_123;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd27.Lng))))
    goto label_123;
  (Wrd19.Obj) = ((Wrd25.pObj) [2]);

DEFLABEL (label_122)
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_21]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_30_20);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_112;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd105.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd105.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_27]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_30_25);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_112;
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_22]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd115.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd115.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_26]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_30_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_102;
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_23]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd121.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_24]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_30_23);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_30_12]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_60]));

DEFLABEL (label_102)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_111)
  (Wrd52.Obj) = (current_block [OBJECT_30_7]);
  (Rsp [2]) = (Wrd52.Obj);
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_110;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [0]);

DEFLABEL (label_109)
  (Wrd65.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Rsp [5]) = (Wrd62.Obj);
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_108;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd66.Obj) = ((Wrd68.pObj) [0]);

DEFLABEL (label_107)
  (Wrd78.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (Rsp [6]) = (Wrd75.Obj);
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_106;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [1]);

DEFLABEL (label_105)
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd91.Obj) = (Rsp [1]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 1))
    goto label_104;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd88.Obj) = ((Wrd90.pObj) [1]);

DEFLABEL (label_103)
  (Rsp [1]) = (Wrd88.Obj);
  goto loop_34;

DEFLABEL (label_104)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_31]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 1);

DEFLABEL (label_79)
  (Wrd88.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_30]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 1);

DEFLABEL (label_78)
  (Wrd79.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_29]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 1);

DEFLABEL (label_77)
  (Wrd66.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_28]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 1);

DEFLABEL (label_76)
  (Wrd53.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  Rsp = (& (Rsp [3]));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_111;

DEFLABEL (label_121)
  (Wrd7.Obj) = (current_block [OBJECT_30_8]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_120;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_119)
  (Wrd20.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Rsp [3]) = (Wrd17.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_118;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_117)
  (Wrd33.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Rsp [4]) = (Wrd30.Obj);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_116;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_115)
  (Rsp [0]) = (Wrd34.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_114;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_113)
  (Rsp [1]) = (Wrd43.Obj);
  goto loop_34;

DEFLABEL (label_114)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_35]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 1);

DEFLABEL (label_75)
  (Wrd43.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_34]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 1);

DEFLABEL (label_74)
  (Wrd34.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_33]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 1);

DEFLABEL (label_73)
  (Wrd21.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 1);

DEFLABEL (label_72)
  (Wrd8.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_123)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (current_block [OBJECT_30_5]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 2);

DEFLABEL (label_68)
  (Wrd19.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 1);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_124;

DEFLABEL (label_126)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [7]);
  if ((Wrd42.Obj) == (Wrd6.Obj))
    goto label_138;
  (Wrd44.Obj) = (Rsp [5]);
  if ((Wrd44.Obj) == (Wrd6.Obj))
    goto label_130;
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_137;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_136)
  if ((Wrd46.Obj) == (current_block [OBJECT_30_1]))
    goto label_130;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_30_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_30_52);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_30_56);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  if ((Wrd5.Obj) == (current_block [OBJECT_30_8]))
    goto label_128;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_62]))));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_127;

DEFLABEL (label_128)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_61]))));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_127)
DEFLABEL (label_129)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto collect_49;

DEFLABEL (label_130)
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_2]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_135;
  Wrd60 = Wrd64;

DEFLABEL (label_134)
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_133)
  (Wrd70.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd71.Obj);
  goto collect_49;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_30_11);
  (Rsp [6]) = Rvl;
  (Rsp [9]) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_36]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_3]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_132;
  Wrd10 = Wrd14;

DEFLABEL (label_131)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_38]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_30_36);
  (Rsp [7]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_30_10]);
  (Rsp [8]) = (Wrd6.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_51]));

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_37])), (Wrd11.pObj));

DEFLABEL (label_80)
  (Wrd10.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_135)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_14])), (Wrd61.pObj));

DEFLABEL (label_70)
  (Wrd60.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 1);

DEFLABEL (label_69)
  (Wrd46.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_138)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd69.Obj);
  goto label_133;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_111;
  goto label_121;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_30_62);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_65]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_140;
  Wrd9 = Wrd13;

DEFLABEL (label_139)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto collect_49;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_30_65);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto join_52;

DEFLABEL (label_140)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_66])), (Wrd10.pObj));

DEFLABEL (label_86)
  (Wrd9.Obj) = Rvl;
  goto label_139;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_30_61);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_67]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_142;
  Wrd9 = Wrd13;

DEFLABEL (label_141)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto collect_49;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_30_67);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto join_52;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_68])), (Wrd10.pObj));

DEFLABEL (label_87)
  (Wrd9.Obj) = Rvl;
  goto label_141;

DEFLABEL (collect_91)
DEFLABEL (collect_49)
  INTERRUPT_CHECK (26, LABEL_30_40);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_153;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_152)
  if ((Wrd5.Obj) == (current_block [OBJECT_30_1]))
    goto label_147;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_45]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_46]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_47]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_4]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_146;
  Wrd25 = Wrd29;

DEFLABEL (label_145)
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_49]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_30_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_55]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_30_46);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_30_45);
  (Wrd9.Obj) = (current_block [OBJECT_30_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_53]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_54]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_30_53);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_57]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_5]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_144;
  Wrd13 = Wrd17;

DEFLABEL (label_143)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_59]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_30_57);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_63]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_30_13]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_64]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_30_63);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_55]));

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_58])), (Wrd14.pObj));

DEFLABEL (label_85)
  (Wrd13.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_48])), (Wrd26.pObj));

DEFLABEL (label_82)
  (Wrd25.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_147)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_151;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_150)
  (Rsp [2]) = (Wrd31.Obj);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_149;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_148)
  (Rsp [1]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_44]));

DEFLABEL (label_149)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_43]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 1);

DEFLABEL (label_84)
  (Wrd40.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_42]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 1);

DEFLABEL (label_83)
  (Wrd31.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_41]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 1);

DEFLABEL (label_81)
  (Wrd5.Obj) = Rvl;
  goto label_152;

DEFLABEL (directive_wrapper_92)
DEFLABEL (directive_wrapper_53)
  INTERRUPT_CHECK (26, LABEL_30_12);
  (Wrd5.Obj) = (current_block [OBJECT_30_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_50]));

DEFLABEL (join_93)
DEFLABEL (join_52)
  INTERRUPT_CHECK (26, LABEL_30_69);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_30_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_70]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_9 5
#define LABEL_31_7 7
#define LABEL_31_5 9
#define TAG_31_6 3
#define LABEL_31_10 11
#define TAG_31_11 4
#define LABEL_31_15 13
#define TAG_31_16 5
#define LABEL_31_22 15
#define LABEL_31_17 17
#define TAG_31_18 7
#define LABEL_31_25 19
#define LABEL_31_26 21
#define LABEL_31_28 23
#define LABEL_31_29 25
#define LABEL_31_30 27
#define LABEL_31_23 29
#define LABEL_31_19 31
#define LABEL_31_38 33
#define LABEL_31_39 35
#define LABEL_31_41 37
#define LABEL_31_20 39
#define LABEL_31_21 41
#define LABEL_31_32 43
#define LABEL_31_45 45
#define LABEL_31_27 47
#define LABEL_31_35 49
#define TAG_31_36 23
#define LABEL_31_34 51
#define LABEL_31_48 53
#define LABEL_31_49 55
#define LABEL_31_40 57
#define LABEL_31_51 59
#define LABEL_31_52 61
#define LABEL_31_43 63
#define LABEL_31_44 65
#define LABEL_31_55 67
#define LABEL_31_47 69
#define LABEL_31_56 71
#define LABEL_31_50 73
#define LABEL_31_54 75
#define LABEL_31_57 77
#define LABEL_31_60 79
#define LABEL_31_62 81
#define LABEL_31_61 83
#define LABEL_31_63 85
#define LABEL_31_64 87
#define ENVIRONMENT_LABEL_31_3 128
#define DEBUGGING_LABEL_31_2 127
#define OBJECT_31_7 126
#define OBJECT_31_6 125
#define OBJECT_31_5 124
#define OBJECT_31_4 123
#define OBJECT_31_3 122
#define OBJECT_31_2 121
#define OBJECT_31_1 120
#define OBJECT_31_0 119
#define EXECUTE_CACHE_31_59 89
#define EXECUTE_CACHE_31_58 91
#define EXECUTE_CACHE_31_53 93
#define EXECUTE_CACHE_31_46 95
#define EXECUTE_CACHE_31_42 97
#define EXECUTE_CACHE_31_37 99
#define EXECUTE_CACHE_31_33 101
#define EXECUTE_CACHE_31_31 103
#define EXECUTE_CACHE_31_24 105
#define EXECUTE_CACHE_31_14 107
#define EXECUTE_CACHE_31_13 109
#define EXECUTE_CACHE_31_12 111
#define EXECUTE_CACHE_31_8 113
#define FREE_REFERENCE_31_2 116
#define FREE_REFERENCE_31_1 117
#define FREE_REFERENCE_31_0 118
#define FREE_REFERENCES_LABEL_31_0 88
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd20;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  INVOKE_INTERFACE_DECLS
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
      goto canonicalize_compressing_53;

    case 1:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_31_5);
      goto give_up_52;

    case 4:
      current_block = (Rpc - LABEL_31_10);
      goto lambda_77;

    case 5:
      current_block = (Rpc - LABEL_31_15);
      goto collect_50;

    case 6:
      current_block = (Rpc - LABEL_31_22);
      goto label_55;

    case 7:
      current_block = (Rpc - LABEL_31_17);
      goto add_group_16;

    case 8:
      current_block = (Rpc - LABEL_31_25);
      goto label_56;

    case 9:
      current_block = (Rpc - LABEL_31_26);
      goto label_57;

    case 10:
      current_block = (Rpc - LABEL_31_28);
      goto label_58;

    case 11:
      current_block = (Rpc - LABEL_31_29);
      goto label_59;

    case 12:
      current_block = (Rpc - LABEL_31_30);
      goto label_60;

    case 13:
      current_block = (Rpc - LABEL_31_23);
      goto continuation_19;

    case 14:
      current_block = (Rpc - LABEL_31_19);
      goto continuation_43;

    case 15:
      current_block = (Rpc - LABEL_31_38);
      goto label_61;

    case 16:
      current_block = (Rpc - LABEL_31_39);
      goto label_62;

    case 17:
      current_block = (Rpc - LABEL_31_41);
      goto label_63;

    case 18:
      current_block = (Rpc - LABEL_31_20);
      goto continuation_42;

    case 19:
      current_block = (Rpc - LABEL_31_21);
      goto continuation_41;

    case 20:
      current_block = (Rpc - LABEL_31_32);
      goto continuation_5;

    case 21:
      current_block = (Rpc - LABEL_31_45);
      goto label_64;

    case 22:
      current_block = (Rpc - LABEL_31_27);
      goto continuation_14;

    case 23:
      current_block = (Rpc - LABEL_31_35);
      goto lambda_80;

    case 24:
      current_block = (Rpc - LABEL_31_34);
      goto continuation_34;

    case 25:
      current_block = (Rpc - LABEL_31_48);
      goto label_66;

    case 26:
      current_block = (Rpc - LABEL_31_49);
      goto label_65;

    case 27:
      current_block = (Rpc - LABEL_31_40);
      goto continuation_45;

    case 28:
      current_block = (Rpc - LABEL_31_51);
      goto label_67;

    case 29:
      current_block = (Rpc - LABEL_31_52);
      goto label_68;

    case 30:
      current_block = (Rpc - LABEL_31_43);
      goto continuation_8;

    case 31:
      current_block = (Rpc - LABEL_31_44);
      goto continuation_7;

    case 32:
      current_block = (Rpc - LABEL_31_55);
      goto label_69;

    case 33:
      current_block = (Rpc - LABEL_31_47);
      goto continuation_20;

    case 34:
      current_block = (Rpc - LABEL_31_56);
      goto label_70;

    case 35:
      current_block = (Rpc - LABEL_31_50);
      goto continuation_37;

    case 36:
      current_block = (Rpc - LABEL_31_54);
      goto continuation_6;

    case 37:
      current_block = (Rpc - LABEL_31_57);
      goto continuation_22;

    case 38:
      current_block = (Rpc - LABEL_31_60);
      goto label_72;

    case 39:
      current_block = (Rpc - LABEL_31_62);
      goto label_71;

    case 40:
      current_block = (Rpc - LABEL_31_61);
      goto continuation_26;

    case 41:
      current_block = (Rpc - LABEL_31_63);
      goto continuation_25;

    case 42:
      current_block = (Rpc - LABEL_31_64);
      goto label_73;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_compressing_75)
DEFLABEL (canonicalize_compressing_53)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_5])));
  Rhp += 3;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  Wrd16 = Wrd18;
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [3]) = (Wrd14.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_82;

DEFLABEL (label_81)
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  goto give_up_52;

DEFLABEL (label_82)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_81;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_10])));
  Rhp += 3;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd22 = Wrd17;
  (Wrd23.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [4]) = (Wrd19.Obj);
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (give_up_76)
DEFLABEL (give_up_52)
  INTERRUPT_CHECK (26, LABEL_31_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_14]));

DEFLABEL (lambda_77)
  CLOSURE_HEADER (LABEL_31_10);

DEFLABEL (lambda_51)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_15])));
  Rhp += 4;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_17])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  Wrd10 = Wrd32;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  Wrd28 = Wrd34;
  (Wrd31.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd28.pObj) [2]) = (Wrd31.Obj);
  ((Wrd28.pObj) [3]) = (Wrd13.Obj);
  (Wrd21.Obj) = ((Wrd12.pObj) [4]);
  ((Wrd28.pObj) [4]) = (Wrd21.Obj);
  ((Wrd28.pObj) [5]) = (Wrd33.Obj);
  (Rsp [0]) = (Wrd35.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [3]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  goto collect_50;

DEFLABEL (collect_78)
DEFLABEL (collect_50)
  INTERRUPT_CHECK (26, LABEL_31_15);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_31_0])))
    goto label_93;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_19]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_20]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_21]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [5]);
  (* (--Rsp)) = (Wrd33.Obj);
  goto add_group_16;

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_31_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_33]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_31_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_42]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_31_19);
  (Rsp [3]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_92;
  Wrd7 = Wrd11;

DEFLABEL (label_91)
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_90;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_90;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_89)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_40]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_88;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd40.Lng))))
    goto label_88;
  (Wrd34.Obj) = ((Wrd38.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_87)
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_31_40);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_86;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_86;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_85)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_84;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd29.Lng))))
    goto label_84;
  (Wrd21.Obj) = ((Wrd27.pObj) [5]);

DEFLABEL (label_83)
  (Rsp [3]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_53]));

DEFLABEL (label_84)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_31_7]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_52]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_68)
  (Wrd21.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_31_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_51]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_67)
  (Wrd5.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.Obj) = (current_block [OBJECT_31_5]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_41]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_31_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_39]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_38])), (Wrd8.pObj));

DEFLABEL (label_61)
  (Wrd7.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_93)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_101;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_100)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_24]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_31_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_35])));
  Rhp += 8;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd30 = Wrd9;
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  ((Wrd30.pObj) [2]) = (Wrd33.Obj);
  (Wrd29.Obj) = ((Wrd32.pObj) [3]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  (Wrd25.Obj) = ((Wrd32.pObj) [4]);
  ((Wrd30.pObj) [4]) = (Wrd25.Obj);
  ((Wrd30.pObj) [5]) = (Wrd31.Obj);
  (Wrd19.Obj) = ((Wrd32.pObj) [5]);
  ((Wrd30.pObj) [6]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd30.pObj) [7]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd30.pObj) [8]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [9]) = (Wrd11.Obj);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_37]));

DEFLABEL (label_94)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_34]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = ((Wrd40.pObj) [4]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_14]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_31_34);
  (Rsp [0]) = Rvl;
  (Wrd38.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd38.uLng) == 62))
    goto label_99;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_99;
  (Wrd8.Obj) = ((Wrd34.pObj) [3]);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_96;

DEFLABEL (label_95)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [4]) = (Wrd10.Obj);
  Rsp = (& (Rsp [4]));
  goto give_up_52;

DEFLABEL (label_96)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_98;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_97)
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_50]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [5]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto add_group_16;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_31_50);
  (Wrd9.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [4]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  goto collect_50;

DEFLABEL (label_98)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_49]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_65)
  (Wrd14.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_99)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_31_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_48]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_66)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  goto label_96;

DEFLABEL (label_101)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (add_group_79)
DEFLABEL (add_group_16)
  INTERRUPT_CHECK (26, LABEL_31_17);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_31_0])))
    goto label_102;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_102)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_117;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_116)
  if ((Wrd7.Obj) == (current_block [OBJECT_31_0]))
    goto label_107;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_32]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_33]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_44]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_106;
  Wrd15 = Wrd19;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_46]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_31_44);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_104;
  Wrd9 = Wrd13;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_46]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_31_54);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_59]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_31_43);
  (Wrd10.Obj) = (Rsp [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_55])), (Wrd10.pObj));

DEFLABEL (label_69)
  (Wrd9.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_45])), (Wrd16.pObj));

DEFLABEL (label_64)
  (Wrd15.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_107)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_115;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_114)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_27]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_113;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_112)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_111;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_110)
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_109;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_108)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_31]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_31_27);
  (Wrd10.Obj) = (Rsp [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_109)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_30]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_29]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_28]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_58)
  (Wrd36.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_26]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_25]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_56)
  (Wrd7.Obj) = Rvl;
  goto label_116;

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_31_35);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_14]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_31_47);
  (* (--Rsp)) = Rvl;
  (Wrd24.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd24.uLng) == 62))
    goto label_128;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_128;
  (Wrd7.Obj) = ((Wrd20.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_119;

DEFLABEL (label_118)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [3]));
  goto give_up_52;

DEFLABEL (label_119)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_57]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_58]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_31_57);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_123;

DEFLABEL (label_122)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_31_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [7]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd29.Obj) = ((Wrd20.pObj) [9]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_121;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd22.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_120)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [5]);
  (Rsp [0]) = (Wrd37.Obj);
  (Wrd40.Obj) = ((Wrd39.pObj) [8]);
  (Rsp [2]) = (Wrd40.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  goto collect_50;

DEFLABEL (label_121)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_62]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_71)
  (Wrd22.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_127;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd64.Lng))))
    goto label_127;
  (Wrd45.Obj) = ((Wrd62.pObj) [5]);
  if (! ((Wrd45.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_122;

DEFLABEL (label_126)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_61]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [8]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = ((Wrd51.pObj) [7]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd58.Obj) = ((Wrd51.pObj) [6]);
  (* (--Rsp)) = (Wrd58.Obj);
  goto add_group_16;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_31_61);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_31]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_31_63);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [5]);
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd21.Obj) = ((Wrd13.pObj) [9]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_125;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd14.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_124)
  (Rsp [1]) = (Wrd14.Obj);
  goto collect_50;

DEFLABEL (label_125)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_64]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_73)
  (Wrd14.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.Obj) = (current_block [OBJECT_31_7]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_60]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_72)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_126;
  goto label_122;

DEFLABEL (label_128)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_31_3]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_56]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_70)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_118;
  goto label_119;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_7 9
#define LABEL_32_9 11
#define LABEL_32_10 13
#define LABEL_32_8 15
#define ENVIRONMENT_LABEL_32_3 30
#define DEBUGGING_LABEL_32_2 29
#define OBJECT_32_9 28
#define OBJECT_32_8 27
#define OBJECT_32_7 26
#define OBJECT_32_6 25
#define OBJECT_32_5 24
#define OBJECT_32_4 23
#define OBJECT_32_3 22
#define OBJECT_32_2 21
#define OBJECT_32_1 20
#define OBJECT_32_0 19
#define EXECUTE_CACHE_32_11 17
#define FREE_REFERENCES_LABEL_32_0 16
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_32_4);
      goto lambda_26;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_29;

    case 3:
      current_block = (Rpc - LABEL_32_7);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_32_10);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_34)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_44;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_43)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_42;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_41)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_40;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_39)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_38;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_37)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_36;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_32_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_32_4]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_32_5]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd45.Obj) = (current_block [OBJECT_32_6]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_32_7]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (Wrd76.Obj) = (current_block [OBJECT_32_8]);
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd77.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd88.Obj) = (current_block [OBJECT_32_9]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_31)
  (Wrd32.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_29)
  (Wrd14.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define TAG_33_6 1
#define LABEL_33_10 7
#define LABEL_33_11 9
#define LABEL_33_12 11
#define LABEL_33_14 13
#define LABEL_33_17 15
#define LABEL_33_18 17
#define LABEL_33_19 19
#define LABEL_33_20 21
#define LABEL_33_21 23
#define LABEL_33_22 25
#define LABEL_33_23 27
#define LABEL_33_25 29
#define LABEL_33_26 31
#define LABEL_33_27 33
#define LABEL_33_28 35
#define LABEL_33_8 37
#define LABEL_33_31 39
#define LABEL_33_15 41
#define LABEL_33_34 43
#define LABEL_33_39 45
#define LABEL_33_41 47
#define LABEL_33_42 49
#define LABEL_33_35 51
#define LABEL_33_36 53
#define TAG_33_37 25
#define LABEL_33_44 55
#define LABEL_33_45 57
#define LABEL_33_46 59
#define LABEL_33_40 61
#define LABEL_33_47 63
#define LABEL_33_48 65
#define LABEL_33_49 67
#define LABEL_33_50 69
#define LABEL_33_51 71
#define ENVIRONMENT_LABEL_33_3 116
#define DEBUGGING_LABEL_33_2 115
#define OBJECT_33_15 114
#define OBJECT_33_14 113
#define OBJECT_33_13 112
#define OBJECT_33_12 111
#define OBJECT_33_11 110
#define OBJECT_33_10 109
#define OBJECT_33_9 108
#define OBJECT_33_8 107
#define OBJECT_33_7 106
#define OBJECT_33_6 105
#define OBJECT_33_5 104
#define OBJECT_33_4 103
#define OBJECT_33_3 102
#define OBJECT_33_2 101
#define OBJECT_33_1 100
#define OBJECT_33_0 99
#define EXECUTE_CACHE_33_52 73
#define EXECUTE_CACHE_33_43 75
#define EXECUTE_CACHE_33_38 77
#define EXECUTE_CACHE_33_33 79
#define EXECUTE_CACHE_33_32 81
#define EXECUTE_CACHE_33_30 83
#define EXECUTE_CACHE_33_29 85
#define EXECUTE_CACHE_33_24 87
#define EXECUTE_CACHE_33_16 89
#define EXECUTE_CACHE_33_13 91
#define EXECUTE_CACHE_33_9 93
#define EXECUTE_CACHE_33_7 95
#define FREE_REFERENCE_33_0 98
#define FREE_REFERENCES_LABEL_33_0 72
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd55;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd89;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd16;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd45;
  machine_word Wrd5;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd151;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd123;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd106;
  machine_word Wrd96;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd150;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd164;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_33_4);
      goto canonicalize_combination_38;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto lambda_59;

    case 2:
      current_block = (Rpc - LABEL_33_10);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_19;

    case 5:
      current_block = (Rpc - LABEL_33_14);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_33_17);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_33_18);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_33_19);
      goto label_44;

    case 9:
      current_block = (Rpc - LABEL_33_20);
      goto label_45;

    case 10:
      current_block = (Rpc - LABEL_33_21);
      goto label_48;

    case 11:
      current_block = (Rpc - LABEL_33_22);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_33_23);
      goto label_47;

    case 13:
      current_block = (Rpc - LABEL_33_25);
      goto continuation_2;

    case 14:
      current_block = (Rpc - LABEL_33_26);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_33_27);
      goto label_42;

    case 16:
      current_block = (Rpc - LABEL_33_28);
      goto label_43;

    case 17:
      current_block = (Rpc - LABEL_33_8);
      goto continuation_0;

    case 18:
      current_block = (Rpc - LABEL_33_31);
      goto label_40;

    case 19:
      current_block = (Rpc - LABEL_33_15);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_33_34);
      goto continuation_23;

    case 21:
      current_block = (Rpc - LABEL_33_39);
      goto label_49;

    case 22:
      current_block = (Rpc - LABEL_33_41);
      goto label_50;

    case 23:
      current_block = (Rpc - LABEL_33_42);
      goto label_51;

    case 24:
      current_block = (Rpc - LABEL_33_35);
      goto continuation_22;

    case 25:
      current_block = (Rpc - LABEL_33_36);
      goto lambda_60;

    case 26:
      current_block = (Rpc - LABEL_33_44);
      goto continuation_30;

    case 27:
      current_block = (Rpc - LABEL_33_45);
      goto continuation_33;

    case 28:
      current_block = (Rpc - LABEL_33_46);
      goto continuation_28;

    case 29:
      current_block = (Rpc - LABEL_33_40);
      goto continuation_26;

    case 30:
      current_block = (Rpc - LABEL_33_47);
      goto label_56;

    case 31:
      current_block = (Rpc - LABEL_33_48);
      goto label_55;

    case 32:
      current_block = (Rpc - LABEL_33_49);
      goto label_54;

    case 33:
      current_block = (Rpc - LABEL_33_50);
      goto label_53;

    case 34:
      current_block = (Rpc - LABEL_33_51);
      goto label_52;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_combination_58)
DEFLABEL (canonicalize_combination_38)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_5])));
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
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (lambda_59)
  CLOSURE_HEADER (LABEL_33_5);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [3]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_33]));

DEFLABEL (label_61)
  (Wrd15.Obj) = (Rsp [1]);
  if ((Wrd15.Obj) == (current_block [OBJECT_33_10]))
    goto label_98;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_25]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_29]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_62)
  (Wrd151.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd151.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_30]));

DEFLABEL (label_63)
  (Wrd39.Obj) = (Rsp [1]);
  if ((Wrd39.Obj) == (current_block [OBJECT_33_9]))
    goto label_90;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_29]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_33_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_89;

DEFLABEL (label_88)
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (Wrd155.Obj) = (Rsp [1]);
  (Wrd156.pObj) = (OBJECT_ADDRESS (Wrd155.Obj));
  (Wrd157.Obj) = ((Wrd156.pObj) [2]);
  (* (--Rsp)) = (Wrd157.Obj);
  (Wrd160.Obj) = ((Wrd156.pObj) [3]);
  (* (--Rsp)) = (Wrd160.Obj);
  (Wrd161.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd161.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_16]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_33_15);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_34]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_35]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_36])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd19 = Wrd14;
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd21.pObj) [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_38]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_33_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_43]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_33_34);
  (Rsp [2]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_87;
  Wrd7 = Wrd11;

DEFLABEL (label_86)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_40]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_85;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_85;
  (Wrd18.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_84)
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_83;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd40.Lng))))
    goto label_83;
  (Wrd34.Obj) = ((Wrd38.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_82)
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_33_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_81;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd112.Lng))))
    goto label_81;
  (Wrd10.Obj) = ((Wrd110.pObj) [3]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_80;

DEFLABEL (label_79)
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_78;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd99.Lng))))
    goto label_78;
  (Wrd13.Obj) = ((Wrd97.pObj) [3]);

DEFLABEL (label_77)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_76)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_45]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_75;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd82.Lng))))
    goto label_75;
  (Wrd19.Obj) = ((Wrd80.pObj) [5]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;

DEFLABEL (label_73)
  (Wrd70.Obj) = (Rsp [4]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_72;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_72;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_71)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_70)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_44]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_69;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_69;
  (Wrd28.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_68)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_65;
  Wrd45 = Wrd42;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_64)
  (Rsp [3]) = (Wrd45.Obj);
  (Wrd46.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_52]));

DEFLABEL (label_65)
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_33_15]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd59.uLng) == 62)
    goto label_67;

DEFLABEL (label_66)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_12]), 2);

DEFLABEL (label_67)
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_66;
  (Wrd45.Obj) = ((Wrd55.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto label_64;

DEFLABEL (label_69)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_33_15]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_51]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_12]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_72)
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.Obj) = (current_block [OBJECT_33_14]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_50]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_12]), 2);

DEFLABEL (label_53)
  (Wrd61.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_70;

DEFLABEL (label_75)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_33_14]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_49]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_12]), 2);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  goto label_73;

DEFLABEL (label_78)
  (Wrd102.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (current_block [OBJECT_33_13]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_48]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_12]), 2);

DEFLABEL (label_55)
  (Wrd13.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd13.Obj) = (current_block [OBJECT_33_8]);
  goto label_77;

DEFLABEL (label_81)
  (Wrd115.Obj) = (Rsp [3]);
  (Wrd116.Obj) = (current_block [OBJECT_33_13]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_47]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_12]), 2);

DEFLABEL (label_56)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  goto label_79;

DEFLABEL (label_83)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.Obj) = (current_block [OBJECT_33_11]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_42]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_12]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.Obj) = (current_block [OBJECT_33_11]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_41]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_12]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_39])), (Wrd8.pObj));

DEFLABEL (label_49)
  (Wrd7.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd150.Obj);
  goto label_62;

DEFLABEL (label_90)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_97;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_96)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_95;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd57.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_94)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_92;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_91)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_32]));

DEFLABEL (label_92)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_28]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 1);

DEFLABEL (label_43)
DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_95)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_27]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_42)
  (Wrd57.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_26]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_41)
  (Wrd48.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_98)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_99;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  goto label_91;

DEFLABEL (label_99)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_31]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 1);

DEFLABEL (label_40)
  goto label_93;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_17);
  if (Rvl == (current_block [OBJECT_33_1]))
    goto label_98;
  goto label_63;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_33_44);
  (Wrd45.Obj) = Rvl;
  goto label_64;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_33_45);
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_33_46);
  (Wrd13.Obj) = Rvl;
  goto label_76;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_33_10);
  if (Rvl == (current_block [OBJECT_33_0]))
    goto label_90;
  goto label_88;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_33_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  (Wrd164.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd164.Obj);
  (Wrd166.Obj) = (Rsp [1]);
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd166.Obj));
  (Wrd165.Obj) = ((Wrd167.pObj) [3]);
  (Rsp [2]) = (Wrd165.Obj);
  (Wrd168.Obj) = ((Wrd167.pObj) [2]);
  (Wrd171.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd171.Obj);
  (Rsp [3]) = (Wrd168.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd79.Obj) = (Rsp [3]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_115;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd76.Obj) = ((Wrd78.pObj) [1]);

DEFLABEL (label_114)
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_113;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_112)
  (Wrd134.Obj) = (current_block [OBJECT_33_4]);
  (Wrd137.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd137.Lng))))
    goto label_111;
  (Wrd93.uLng) = (OBJECT_DATUM (Wrd134.Obj));
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd93.Obj) == (Wrd95.Obj))
    goto label_110;

DEFLABEL (label_109)
  (Wrd96.Obj) = (current_block [OBJECT_33_6]);
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd106.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd106.Lng)))
    goto label_100;
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_5]), 2);

DEFLABEL (label_100)
  (Wrd100.uLng) = (OBJECT_DATUM (Wrd96.Obj));
  (Wrd101.Obj) = (Rsp [1]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd100.Obj) == (Wrd102.Obj))
    goto label_102;
  (Wrd98.Obj) = (current_block [OBJECT_33_8]);
  goto label_101;

DEFLABEL (label_102)
  (Wrd98.Obj) = (current_block [OBJECT_33_7]);

DEFLABEL (label_101)
DEFLABEL (label_108)
  Rsp = (& (Rsp [3]));
  if ((Wrd98.Obj) == ((SCHEME_OBJECT) 0))
    goto label_63;

DEFLABEL (label_107)
  (Wrd111.Obj) = (Rsp [2]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 1))
    goto label_106;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd108.Obj) = ((Wrd110.pObj) [1]);

DEFLABEL (label_105)
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_104;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);

DEFLABEL (label_103)
  (Wrd125.Obj) = (Rsp [1]);
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd124.Obj) = ((Wrd126.pObj) [3]);
  (Rsp [2]) = (Wrd124.Obj);
  (Wrd127.Obj) = ((Wrd126.pObj) [2]);
  (Rsp [3]) = (Wrd127.Obj);
  (Wrd130.Obj) = ((Wrd126.pObj) [4]);
  (Rsp [1]) = (Wrd130.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_24]));

DEFLABEL (label_104)
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_23]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_22]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_46)
  (Wrd108.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_110)
  Rsp = (& (Rsp [2]));
  goto label_107;

DEFLABEL (label_111)
  (Wrd139.Obj) = (Rsp [0]);
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_21]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_5]), 2);

DEFLABEL (label_48)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_109;
  goto label_110;

DEFLABEL (label_113)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_20]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_44)
  (Wrd76.Obj) = Rvl;
  goto label_114;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_33_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_107;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_33_36);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_16]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_6 5
#define LABEL_34_5 7
#define LABEL_34_11 9
#define LABEL_34_9 11
#define LABEL_34_10 13
#define ENVIRONMENT_LABEL_34_3 30
#define DEBUGGING_LABEL_34_2 29
#define OBJECT_34_3 28
#define OBJECT_34_2 27
#define OBJECT_34_1 26
#define OBJECT_34_0 25
#define EXECUTE_CACHE_34_13 15
#define EXECUTE_CACHE_34_12 17
#define EXECUTE_CACHE_34_8 19
#define EXECUTE_CACHE_34_7 21
#define FREE_REFERENCE_34_0 24
#define FREE_REFERENCES_LABEL_34_0 14
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
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
      goto canonicalize_unassignedP_8;

    case 1:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_34_11);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_34_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_unassignedP_12)
DEFLABEL (canonicalize_unassignedP_8)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (current_block [OBJECT_34_0]))
    goto label_14;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_13;

DEFLABEL (label_14)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_13)
DEFLABEL (label_15)
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_34_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd7.Obj) = (current_block [OBJECT_34_1]);
  goto label_16;

DEFLABEL (label_17)
  (Wrd7.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_16)
DEFLABEL (label_18)
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34_1]);
  (Rsp [1]) = (Wrd9.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_34_1]);
  (Rsp [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_21;
  Wrd17 = Wrd21;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_10);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_34_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_34_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_34_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_11])), (Wrd18.pObj));

DEFLABEL (label_10)
  (Wrd17.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_8 5
#define LABEL_35_5 7
#define LABEL_35_6 9
#define TAG_35_7 3
#define LABEL_35_11 11
#define TAG_35_12 4
#define LABEL_35_9 13
#define TAG_35_10 5
#define LABEL_35_20 15
#define LABEL_35_21 17
#define LABEL_35_22 19
#define LABEL_35_14 21
#define LABEL_35_23 23
#define LABEL_35_25 25
#define LABEL_35_26 27
#define LABEL_35_16 29
#define LABEL_35_17 31
#define TAG_35_18 14
#define LABEL_35_29 33
#define LABEL_35_30 35
#define LABEL_35_31 37
#define LABEL_35_24 39
#define LABEL_35_32 41
#define LABEL_35_33 43
#define LABEL_35_34 45
#define LABEL_35_35 47
#define LABEL_35_36 49
#define ENVIRONMENT_LABEL_35_3 78
#define DEBUGGING_LABEL_35_2 77
#define OBJECT_35_8 76
#define OBJECT_35_7 75
#define OBJECT_35_6 74
#define OBJECT_35_5 73
#define OBJECT_35_4 72
#define OBJECT_35_3 71
#define OBJECT_35_2 70
#define OBJECT_35_1 69
#define OBJECT_35_0 68
#define EXECUTE_CACHE_35_37 51
#define EXECUTE_CACHE_35_28 53
#define EXECUTE_CACHE_35_27 55
#define EXECUTE_CACHE_35_19 57
#define EXECUTE_CACHE_35_15 59
#define EXECUTE_CACHE_35_13 61
#define FREE_REFERENCE_35_1 64
#define FREE_REFERENCE_35_0 65
#define FREE_ASSIGNMENT_35_0 67
#define FREE_REFERENCES_LABEL_35_0 50
#define NUMBER_OF_LINKER_SECTIONS_35_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_35_4);
      goto canonicalize_let_29;

    case 1:
      current_block = (Rpc - LABEL_35_8);
      goto label_31;

    case 2:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_35_6);
      goto lambda_5;

    case 4:
      current_block = (Rpc - LABEL_35_11);
      goto lambda_47;

    case 5:
      current_block = (Rpc - LABEL_35_9);
      goto swapB_46;

    case 6:
      current_block = (Rpc - LABEL_35_20);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_35_21);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_35_22);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_35_14);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_35_23);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_35_25);
      goto label_36;

    case 12:
      current_block = (Rpc - LABEL_35_26);
      goto label_37;

    case 13:
      current_block = (Rpc - LABEL_35_16);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_35_17);
      goto lambda_48;

    case 15:
      current_block = (Rpc - LABEL_35_29);
      goto continuation_24;

    case 16:
      current_block = (Rpc - LABEL_35_30);
      goto continuation_27;

    case 17:
      current_block = (Rpc - LABEL_35_31);
      goto continuation_22;

    case 18:
      current_block = (Rpc - LABEL_35_24);
      goto continuation_20;

    case 19:
      current_block = (Rpc - LABEL_35_32);
      goto label_42;

    case 20:
      current_block = (Rpc - LABEL_35_33);
      goto label_41;

    case 21:
      current_block = (Rpc - LABEL_35_34);
      goto label_40;

    case 22:
      current_block = (Rpc - LABEL_35_35);
      goto label_39;

    case 23:
      current_block = (Rpc - LABEL_35_36);
      goto label_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_let_44)
DEFLABEL (canonicalize_let_29)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_6])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_52;
  Wrd16 = Wrd20;

DEFLABEL (label_51)
  if (! ((Wrd16.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_50;

DEFLABEL (label_49)
  goto lambda_5;

DEFLABEL (label_50)
  (Wrd23.Obj) = (Rsp [5]);
  if (! ((Wrd23.Obj) == (current_block [OBJECT_35_0])))
    goto label_49;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd26.pObj) = (& (Rhp [-1]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_9])));
  Rhp += 1;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  ((Wrd39.pObj) [2]) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_11])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  Wrd33 = Wrd32;
  (Wrd34.Obj) = (Rsp [2]);
  ((Wrd33.pObj) [2]) = (Wrd34.Obj);
  (Rsp [2]) = (Wrd40.Obj);
  (Rsp [1]) = (Wrd31.Obj);
  (Rsp [0]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_13]));

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_8])), (Wrd17.pObj));

DEFLABEL (label_31)
  (Wrd16.Obj) = Rvl;
  goto label_51;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  if ((Wrd8.Obj) == (current_block [OBJECT_35_0]))
    goto label_54;
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_53;

DEFLABEL (label_54)
  (Wrd13.Obj) = (current_block [OBJECT_35_1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_53)
DEFLABEL (label_79)
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_14);
  (Rsp [3]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_78;
  Wrd7 = Wrd11;

DEFLABEL (label_77)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd13.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_76;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_76;
  (Wrd19.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_75)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_74;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd41.Lng))))
    goto label_74;
  (Wrd35.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_73)
  (Wrd49.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd49.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_35_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_72;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd112.Lng))))
    goto label_72;
  (Wrd10.Obj) = ((Wrd110.pObj) [3]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_71;

DEFLABEL (label_70)
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_69;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd99.Lng))))
    goto label_69;
  (Wrd13.Obj) = ((Wrd97.pObj) [3]);

DEFLABEL (label_68)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_67)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_30]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_66;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd82.Lng))))
    goto label_66;
  (Wrd19.Obj) = ((Wrd80.pObj) [5]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_65;

DEFLABEL (label_64)
  (Wrd70.Obj) = (Rsp [4]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_63;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_63;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_62)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_61)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_29]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_60;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_60;
  (Wrd28.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_59)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  Wrd45 = Wrd42;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_55)
  (Rsp [3]) = (Wrd45.Obj);
  (Wrd46.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_37]));

DEFLABEL (label_56)
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_35_8]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd59.uLng) == 62)
    goto label_58;

DEFLABEL (label_57)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 2);

DEFLABEL (label_58)
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_57;
  (Wrd45.Obj) = ((Wrd55.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto label_55;

DEFLABEL (label_60)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_35_8]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_36]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_63)
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.Obj) = (current_block [OBJECT_35_7]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_35]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 2);

DEFLABEL (label_39)
  (Wrd61.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_61;

DEFLABEL (label_66)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_35_7]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_34]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 2);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  goto label_64;

DEFLABEL (label_69)
  (Wrd102.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (current_block [OBJECT_35_5]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_33]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 2);

DEFLABEL (label_41)
  (Wrd13.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd13.Obj) = (current_block [OBJECT_35_6]);
  goto label_68;

DEFLABEL (label_72)
  (Wrd115.Obj) = (Rsp [3]);
  (Wrd116.Obj) = (current_block [OBJECT_35_5]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_32]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 2);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_70;

DEFLABEL (label_74)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.Obj) = (current_block [OBJECT_35_3]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_26]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Obj) = (current_block [OBJECT_35_3]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_25]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_23])), (Wrd8.pObj));

DEFLABEL (label_35)
  (Wrd7.Obj) = Rvl;
  goto label_77;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_35_29);
  (Wrd45.Obj) = Rvl;
  goto label_55;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_35_30);
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_35_31);
  (Wrd13.Obj) = Rvl;
  goto label_67;

DEFLABEL (lambda_45)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_35_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_17])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd17 = Wrd12;
  (Wrd20.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_16);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_27]));

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_35_11);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  goto lambda_5;

DEFLABEL (swapB_46)
  CLOSURE_HEADER (LABEL_35_9);

DEFLABEL (swapB_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  Wrd5 = Wrd9;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_85;

DEFLABEL (label_84)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_83)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_80)
  Rvl = (current_block [OBJECT_35_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_82)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_22])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_34)
  goto label_80;

DEFLABEL (label_85)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_84;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_21])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_33)
  goto label_83;

DEFLABEL (label_88)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_87;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_35_20])), (Wrd6.pObj));

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_86;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_35_17);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_28]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define TAG_36_6 1
#define LABEL_36_10 7
#define LABEL_36_8 9
#define LABEL_36_14 11
#define LABEL_36_17 13
#define LABEL_36_19 15
#define LABEL_36_21 17
#define LABEL_36_23 19
#define LABEL_36_24 21
#define LABEL_36_25 23
#define LABEL_36_26 25
#define LABEL_36_27 27
#define LABEL_36_30 29
#define LABEL_36_11 31
#define TAG_36_12 14
#define LABEL_36_32 33
#define LABEL_36_33 35
#define LABEL_36_18 37
#define LABEL_36_36 39
#define LABEL_36_37 41
#define LABEL_36_22 43
#define LABEL_36_28 45
#define LABEL_36_29 47
#define LABEL_36_39 49
#define ENVIRONMENT_LABEL_36_3 88
#define DEBUGGING_LABEL_36_2 87
#define OBJECT_36_11 86
#define OBJECT_36_10 85
#define OBJECT_36_9 84
#define OBJECT_36_8 83
#define OBJECT_36_7 82
#define OBJECT_36_6 81
#define OBJECT_36_5 80
#define OBJECT_36_4 79
#define OBJECT_36_3 78
#define OBJECT_36_2 77
#define OBJECT_36_1 76
#define OBJECT_36_0 75
#define EXECUTE_CACHE_36_40 51
#define EXECUTE_CACHE_36_38 53
#define EXECUTE_CACHE_36_35 55
#define EXECUTE_CACHE_36_34 57
#define EXECUTE_CACHE_36_31 59
#define EXECUTE_CACHE_36_20 61
#define EXECUTE_CACHE_36_16 63
#define EXECUTE_CACHE_36_15 65
#define EXECUTE_CACHE_36_13 67
#define EXECUTE_CACHE_36_9 69
#define EXECUTE_CACHE_36_7 71
#define FREE_REFERENCE_36_0 74
#define FREE_REFERENCES_LABEL_36_0 50
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd94;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_36_4);
      goto canonicalize_comment_27;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto lambda_44;

    case 2:
      current_block = (Rpc - LABEL_36_10);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_36_14);
      goto continuation_19;

    case 5:
      current_block = (Rpc - LABEL_36_17);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_36_19);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_36_21);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_36_23);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_36_24);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_36_25);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_36_26);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_36_27);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_36_30);
      goto label_40;

    case 14:
      current_block = (Rpc - LABEL_36_11);
      goto lambda_45;

    case 15:
      current_block = (Rpc - LABEL_36_32);
      goto label_31;

    case 16:
      current_block = (Rpc - LABEL_36_33);
      goto label_32;

    case 17:
      current_block = (Rpc - LABEL_36_18);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_36_36);
      goto label_33;

    case 19:
      current_block = (Rpc - LABEL_36_37);
      goto label_34;

    case 20:
      current_block = (Rpc - LABEL_36_22);
      goto continuation_16;

    case 21:
      current_block = (Rpc - LABEL_36_28);
      goto continuation_10;

    case 22:
      current_block = (Rpc - LABEL_36_29);
      goto continuation_7;

    case 23:
      current_block = (Rpc - LABEL_36_39);
      goto label_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_comment_43)
DEFLABEL (canonicalize_comment_27)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_5])));
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
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_36_5);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_11])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [4]);
  ((Wrd28.pObj) [2]) = (Wrd31.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd32.Obj);
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_13]));

DEFLABEL (label_46)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_15]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_36_14);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 62))
    goto label_50;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_50;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_49)
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_48;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_48;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_47)
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_20]));

DEFLABEL (label_48)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_36_4]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_19]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_36_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_49;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_36_18);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_54;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_54;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_53)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_52;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_52;
  (Wrd21.Obj) = ((Wrd27.pObj) [4]);

DEFLABEL (label_51)
  (Rsp [3]) = (Wrd21.Obj);
  (Wrd37.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_35]));

DEFLABEL (label_52)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_36_10]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_37]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_34)
  (Wrd21.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_36_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_36]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_36_11);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_36_7]))
    goto label_56;

DEFLABEL (label_55)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_36_8]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_35]));

DEFLABEL (label_56)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_74;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_73)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_72;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_71)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_34]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_36_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_22]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_70;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd37.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_69)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_68;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd52.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_67)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_66;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_65)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [3]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_64;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd66.Obj) = ((Wrd70.pObj) [1]);

DEFLABEL (label_63)
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_62;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_61)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_28]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_29]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd95.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd98.Obj) = ((Wrd95.pObj) [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd99.uLng) == 50)
    goto label_60;
  Wrd94 = Wrd98;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_31]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_36_29);
  (Wrd9.Obj) = (current_block [OBJECT_36_11]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_58;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_57)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_40]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_36_28);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_38]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_36_22);
  (* (--Rsp)) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (current_block [OBJECT_36_8]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_35]));

DEFLABEL (label_58)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_39]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_6]), 1);

DEFLABEL (label_41)
  (Wrd10.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_30])), (Wrd95.pObj));

DEFLABEL (label_40)
  (Wrd94.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_27]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_6]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_26]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 1);

DEFLABEL (label_38)
  (Wrd66.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_25]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_6]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_24]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 1);

DEFLABEL (label_36)
  (Wrd52.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_23]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 1);

DEFLABEL (label_35)
  (Wrd37.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_33]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_6]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_32]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 1);

DEFLABEL (label_31)
  (Wrd16.Obj) = Rvl;
  goto label_73;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_7 5
#define LABEL_37_5 7
#define TAG_37_6 2
#define LABEL_37_16 9
#define LABEL_37_9 11
#define LABEL_37_11 13
#define LABEL_37_13 15
#define LABEL_37_12 17
#define LABEL_37_14 19
#define LABEL_37_21 21
#define LABEL_37_24 23
#define LABEL_37_17 25
#define TAG_37_18 11
#define LABEL_37_25 27
#define TAG_37_26 12
#define LABEL_37_29 29
#define LABEL_37_31 31
#define TAG_37_32 14
#define LABEL_37_34 33
#define ENVIRONMENT_LABEL_37_3 66
#define DEBUGGING_LABEL_37_2 65
#define OBJECT_37_5 64
#define OBJECT_37_4 63
#define OBJECT_37_3 62
#define OBJECT_37_2 61
#define OBJECT_37_1 60
#define OBJECT_37_0 59
#define EXECUTE_CACHE_37_35 35
#define EXECUTE_CACHE_37_33 37
#define EXECUTE_CACHE_37_30 39
#define EXECUTE_CACHE_37_28 41
#define EXECUTE_CACHE_37_27 43
#define EXECUTE_CACHE_37_23 45
#define EXECUTE_CACHE_37_22 47
#define EXECUTE_CACHE_37_20 49
#define EXECUTE_CACHE_37_19 51
#define EXECUTE_CACHE_37_15 53
#define EXECUTE_CACHE_37_10 55
#define EXECUTE_CACHE_37_8 57
#define FREE_REFERENCES_LABEL_37_0 34
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_37_4);
      goto scode_make_evaluation_20;

    case 1:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_5);
      goto default_19;

    case 3:
      current_block = (Rpc - LABEL_37_16);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_37_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_18;

    case 6:
      current_block = (Rpc - LABEL_37_13);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_37_12);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_37_14);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_37_21);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_37_24);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_37_17);
      goto lambda_25;

    case 12:
      current_block = (Rpc - LABEL_37_25);
      goto lambda_26;

    case 13:
      current_block = (Rpc - LABEL_37_29);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_37_31);
      goto lambda_27;

    case 15:
      current_block = (Rpc - LABEL_37_34);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_evaluation_23)
DEFLABEL (scode_make_evaluation_20)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_5])));
  Rhp += 4;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  Wrd19 = Wrd21;
  (Wrd20.Obj) = (Rsp [4]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [3]) = (Wrd17.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [5]) = (Wrd11.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;

DEFLABEL (label_29)
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd11.Obj);
  Rsp = (& (Rsp [4]));
  goto default_19;

DEFLABEL (label_30)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_17])));
  Rhp += 2;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd21 = Wrd18;
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  ((Wrd21.pObj) [3]) = (Wrd15.Obj);
  (Rsp [4]) = (Wrd17.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_19]));

DEFLABEL (default_24)
DEFLABEL (default_19)
  INTERRUPT_CHECK (26, LABEL_37_5);
  (Wrd5.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_37_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_14]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_37_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_37_13);
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_37_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_37_21);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_37_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_23]));

DEFLABEL (label_31)
  (Wrd12.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_32)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.Obj) = (current_block [OBJECT_37_3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_37_4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_37_11);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_37_12);
  (Wrd12.Obj) = Rvl;
  goto label_32;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_37_17);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_37_3]))
    goto label_34;

DEFLABEL (label_33)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto default_19;

DEFLABEL (label_34)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_28]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_37_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x808, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_25])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd24 = Wrd19;
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd26.pObj) [3]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_27]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_37_25);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_30]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_37_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd7.Obj) = (Rsp [7]);
  (Rsp [6]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_31])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd17.pObj) [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Rsp [7]) = (Wrd9.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_33]));

DEFLABEL (label_35)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [2]);
  (Rsp [7]) = (Wrd20.Obj);
  Rsp = (& (Rsp [7]));
  goto default_19;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_37_31);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_35]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_37_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto default_19;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define TAG_38_6 1
#define LABEL_38_8 7
#define LABEL_38_11 9
#define LABEL_38_12 11
#define LABEL_38_16 13
#define LABEL_38_24 15
#define LABEL_38_9 17
#define LABEL_38_18 19
#define LABEL_38_19 21
#define LABEL_38_29 23
#define LABEL_38_31 25
#define LABEL_38_20 27
#define LABEL_38_21 29
#define LABEL_38_35 31
#define LABEL_38_13 33
#define LABEL_38_14 35
#define LABEL_38_15 37
#define LABEL_38_23 39
#define LABEL_38_42 41
#define LABEL_38_43 43
#define LABEL_38_33 45
#define LABEL_38_34 47
#define LABEL_38_37 49
#define LABEL_38_38 51
#define LABEL_38_49 53
#define LABEL_38_39 55
#define LABEL_38_40 57
#define LABEL_38_45 59
#define LABEL_38_55 61
#define LABEL_38_51 63
#define LABEL_38_57 65
#define LABEL_38_52 67
#define LABEL_38_60 69
#define LABEL_38_30 71
#define LABEL_38_54 73
#define LABEL_38_56 75
#define LABEL_38_59 77
#define LABEL_38_61 79
#define LABEL_38_65 81
#define LABEL_38_62 83
#define LABEL_38_63 85
#define LABEL_38_66 87
#define LABEL_38_50 89
#define LABEL_38_67 91
#define LABEL_38_68 93
#define ENVIRONMENT_LABEL_38_3 154
#define DEBUGGING_LABEL_38_2 153
#define OBJECT_38_15 152
#define OBJECT_38_14 151
#define OBJECT_38_13 150
#define OBJECT_38_12 149
#define OBJECT_38_11 148
#define OBJECT_38_10 147
#define OBJECT_38_9 146
#define OBJECT_38_8 145
#define OBJECT_38_7 144
#define OBJECT_38_6 143
#define OBJECT_38_5 142
#define OBJECT_38_4 141
#define OBJECT_38_3 140
#define OBJECT_38_2 139
#define OBJECT_38_1 138
#define OBJECT_38_0 137
#define EXECUTE_CACHE_38_69 95
#define EXECUTE_CACHE_38_64 97
#define EXECUTE_CACHE_38_58 99
#define EXECUTE_CACHE_38_53 101
#define EXECUTE_CACHE_38_48 103
#define EXECUTE_CACHE_38_47 105
#define EXECUTE_CACHE_38_46 107
#define EXECUTE_CACHE_38_44 109
#define EXECUTE_CACHE_38_41 111
#define EXECUTE_CACHE_38_36 113
#define EXECUTE_CACHE_38_32 115
#define EXECUTE_CACHE_38_28 117
#define EXECUTE_CACHE_38_27 119
#define EXECUTE_CACHE_38_26 121
#define EXECUTE_CACHE_38_25 123
#define EXECUTE_CACHE_38_17 125
#define EXECUTE_CACHE_38_22 127
#define EXECUTE_CACHE_38_10 129
#define EXECUTE_CACHE_38_7 131
#define FREE_REFERENCE_38_2 134
#define FREE_REFERENCE_38_1 135
#define FREE_REFERENCE_38_0 136
#define FREE_REFERENCES_LABEL_38_0 94
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
canon_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd5;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd66;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd63;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd14;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd93;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_38_4);
      goto canonicalize_lambda__61;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto lambda_77;

    case 2:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_38_11);
      goto label_66;

    case 4:
      current_block = (Rpc - LABEL_38_12);
      goto label_63;

    case 5:
      current_block = (Rpc - LABEL_38_16);
      goto label_64;

    case 6:
      current_block = (Rpc - LABEL_38_24);
      goto label_65;

    case 7:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_38_18);
      goto continuation_32;

    case 9:
      current_block = (Rpc - LABEL_38_19);
      goto continuation_31;

    case 10:
      current_block = (Rpc - LABEL_38_29);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_38_31);
      goto label_70;

    case 12:
      current_block = (Rpc - LABEL_38_20);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_38_21);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_38_35);
      goto label_67;

    case 15:
      current_block = (Rpc - LABEL_38_13);
      goto continuation_54;

    case 16:
      current_block = (Rpc - LABEL_38_14);
      goto continuation_53;

    case 17:
      current_block = (Rpc - LABEL_38_15);
      goto continuation_50;

    case 18:
      current_block = (Rpc - LABEL_38_23);
      goto continuation_56;

    case 19:
      current_block = (Rpc - LABEL_38_42);
      goto label_68;

    case 20:
      current_block = (Rpc - LABEL_38_43);
      goto label_69;

    case 21:
      current_block = (Rpc - LABEL_38_33);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_38_34);
      goto continuation_11;

    case 23:
      current_block = (Rpc - LABEL_38_37);
      goto continuation_49;

    case 24:
      current_block = (Rpc - LABEL_38_38);
      goto continuation_48;

    case 25:
      current_block = (Rpc - LABEL_38_49);
      goto continuation_42;

    case 26:
      current_block = (Rpc - LABEL_38_39);
      goto continuation_34;

    case 27:
      current_block = (Rpc - LABEL_38_40);
      goto continuation_33;

    case 28:
      current_block = (Rpc - LABEL_38_45);
      goto continuation_10;

    case 29:
      current_block = (Rpc - LABEL_38_55);
      goto label_71;

    case 30:
      current_block = (Rpc - LABEL_38_51);
      goto continuation_39;

    case 31:
      current_block = (Rpc - LABEL_38_57);
      goto label_72;

    case 32:
      current_block = (Rpc - LABEL_38_52);
      goto continuation_37;

    case 33:
      current_block = (Rpc - LABEL_38_60);
      goto label_73;

    case 34:
      current_block = (Rpc - LABEL_38_30);
      goto continuation_18;

    case 35:
      current_block = (Rpc - LABEL_38_54);
      goto continuation_8;

    case 36:
      current_block = (Rpc - LABEL_38_56);
      goto continuation_41;

    case 37:
      current_block = (Rpc - LABEL_38_59);
      goto continuation_36;

    case 38:
      current_block = (Rpc - LABEL_38_61);
      goto continuation_21;

    case 39:
      current_block = (Rpc - LABEL_38_65);
      goto label_74;

    case 40:
      current_block = (Rpc - LABEL_38_62);
      goto continuation_19;

    case 41:
      current_block = (Rpc - LABEL_38_63);
      goto continuation_7;

    case 42:
      current_block = (Rpc - LABEL_38_66);
      goto continuation_23;

    case 43:
      current_block = (Rpc - LABEL_38_50);
      goto continuation_43;

    case 44:
      current_block = (Rpc - LABEL_38_67);
      goto continuation_25;

    case 45:
      current_block = (Rpc - LABEL_38_68);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_lambda__76)
DEFLABEL (canonicalize_lambda__61)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x808, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_5])));
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
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (lambda_77)
  CLOSURE_HEADER (LABEL_38_5);

DEFLABEL (lambda_60)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [9]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_79;
  (Wrd24.Obj) = (current_block [OBJECT_38_0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_78;

DEFLABEL (label_79)
  (Wrd27.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_78)
DEFLABEL (label_127)
  (Wrd25.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_26]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_8);
  (* (--Rsp)) = Rvl;
  (Wrd93.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd93.uLng) == 62))
    goto label_126;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd91.Lng))))
    goto label_126;
  (Wrd7.Obj) = ((Wrd89.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_87;

DEFLABEL (label_86)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_23]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 62))
    goto label_85;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd72.Lng))))
    goto label_85;
  (Wrd66.Obj) = ((Wrd70.pObj) [2]);
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_84)
  (Wrd80.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd83.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd85.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_25]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_38_23);
  (Rsp [5]) = Rvl;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_83;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd14.Lng))))
    goto label_83;
  (Wrd6.Obj) = ((Wrd12.pObj) [5]);

DEFLABEL (label_82)
  (Rsp [8]) = (Wrd6.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_38_6]);
  (Rsp [6]) = (Wrd22.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_81;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_81;
  (Wrd23.Obj) = ((Wrd29.pObj) [4]);

DEFLABEL (label_80)
  (Rsp [7]) = (Wrd23.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_27]));

DEFLABEL (label_81)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_38_8]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_43]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 2);

DEFLABEL (label_69)
  (Wrd23.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_38_7]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_42]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 2);

DEFLABEL (label_68)
  (Wrd6.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.Obj) = (current_block [OBJECT_38_5]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_24]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_125;
  Wrd9 = Wrd13;

DEFLABEL (label_124)
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_109;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_38_4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_20]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_21]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [11]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_89;
  (Wrd38.Obj) = (current_block [OBJECT_38_0]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  goto label_88;

DEFLABEL (label_89)
  (Wrd41.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_88)
DEFLABEL (label_108)
  (Wrd39.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_38_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_107;
  Wrd12 = Wrd16;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_36]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_38_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_38_9]);
  (Wrd12.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_46]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_38_45);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_54]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_105;
  Wrd13 = Wrd17;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_38_54);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_63]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_38_14]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_64]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_38_63);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_47]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_38_33);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_29]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_44]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_38_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  (Wrd13.Obj) = (Rsp [12]);
  if ((Wrd13.Obj) == (current_block [OBJECT_38_0]))
    goto label_102;

DEFLABEL (label_101)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_30]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [7]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_100;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd26.Lng))))
    goto label_100;
  (Wrd20.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_99)
  (Wrd34.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_32]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_38_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [10]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_53]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_38_62);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  (Wrd7.Obj) = (current_block [OBJECT_38_13]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_90;

DEFLABEL (label_91)
  (Wrd10.Obj) = (current_block [OBJECT_38_12]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_90)
DEFLABEL (label_98)
  (Wrd8.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_26]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_38_61);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_97;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd12.Lng))))
    goto label_97;
  (Wrd7.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_96)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_66]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [10]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_53]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_38_66);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_58]));

DEFLABEL (label_92)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_67]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_68]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_41]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_38_68);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_58]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_38_67);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [10]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_38_11]))
    goto label_94;
  (Wrd10.Obj) = (current_block [OBJECT_38_15]);
  goto label_93;

DEFLABEL (label_94)
  (Wrd10.Obj) = (current_block [OBJECT_38_6]);

DEFLABEL (label_93)
DEFLABEL (label_95)
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd12.Obj) = (Rsp [10]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [4]);
  (Rsp [3]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_69]));

DEFLABEL (label_97)
  (Wrd15.Obj) = (current_block [OBJECT_38_5]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_65]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 2);

DEFLABEL (label_74)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (label_100)
  (Wrd29.Obj) = (Rsp [7]);
  (Wrd30.Obj) = (current_block [OBJECT_38_5]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_31]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 2);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd37.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_103)
  (Wrd5.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_25]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_38_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_28]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_38_18);
  (Rsp [5]) = Rvl;
  (Rsp [6]) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (current_block [OBJECT_38_6]);
  (Rsp [7]) = (Wrd7.Obj);
  (Rsp [8]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_27]));

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_55])), (Wrd14.pObj));

DEFLABEL (label_71)
  (Wrd13.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_35])), (Wrd13.pObj));

DEFLABEL (label_67)
  (Wrd12.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_13]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [4]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_38_3]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_14]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_15]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_1]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_123;
  Wrd55 = Wrd59;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_17]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_38_15);
  (Wrd9.Obj) = (current_block [OBJECT_38_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_37]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_38]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_39]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_40]))));
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_41]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_38_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [12]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_53]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_38_52);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_111;
  (Wrd7.Obj) = (current_block [OBJECT_38_13]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_110;

DEFLABEL (label_111)
  (Wrd30.Obj) = (current_block [OBJECT_38_12]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_110)
DEFLABEL (label_121)
  (Wrd8.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_59]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [13]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_120;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_120;
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_119)
  (Wrd28.Obj) = (Rsp [21]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [21]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_32]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_38_59);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_26]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_38_51);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 62))
    goto label_118;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_118;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_117)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_58]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_38_56);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_49]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [11]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_53]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_38_49);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_113;
  (Wrd14.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_112)
  (Wrd5.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_25]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_38_38);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_48]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_38_37);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_38_10]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_47]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_38_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_28]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_38_13);
  (Rsp [5]) = Rvl;
  (Rsp [6]) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (current_block [OBJECT_38_6]);
  (Rsp [7]) = (Wrd7.Obj);
  (Rsp [8]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_27]));

DEFLABEL (label_113)
  (Wrd15.Obj) = (Rsp [10]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  if ((Wrd17.Obj) == (current_block [OBJECT_38_11]))
    goto label_115;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_114;

DEFLABEL (label_115)
  (Wrd20.Obj) = (current_block [OBJECT_38_6]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_114)
DEFLABEL (label_116)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_50]))));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_41]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_38_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [13]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_69]));

DEFLABEL (label_118)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_38_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_57]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 2);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd23.Obj) = (Rsp [13]);
  (Wrd24.Obj) = (current_block [OBJECT_38_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_60]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 2);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_119;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_16])), (Wrd56.pObj));

DEFLABEL (label_64)
  (Wrd55.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_12])), (Wrd10.pObj));

DEFLABEL (label_63)
  (Wrd9.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_126)
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.Obj) = (current_block [OBJECT_38_1]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 2);

DEFLABEL (label_66)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  goto label_86;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_38_20);
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_38_39);
  (* (--Rsp)) = Rvl;
  goto label_112;

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
#define LABEL_12 15
#define TAG_13 6
#define LABEL_14 17
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_18 25
#define LABEL_19 27
#define LABEL_20 29
#define LABEL_23 31
#define LABEL_21 33
#define LABEL_22 35
#define LABEL_24 37
#define LABEL_25 39
#define LABEL_26 41
#define LABEL_27 43
#define LABEL_28 45
#define LABEL_29 47
#define LABEL_30 49
#define LABEL_31 51
#define LABEL_32 53
#define LABEL_33 55
#define LABEL_34 57
#define LABEL_35 59
#define LABEL_37 61
#define LABEL_36 63
#define LABEL_38 65
#define LABEL_39 67
#define LABEL_40 69
#define LABEL_41 71
#define LABEL_42 73
#define LABEL_43 75
#define LABEL_44 77
#define LABEL_45 79
#define LABEL_46 81
#define LABEL_47 83
#define LABEL_48 85
#define LABEL_49 87
#define LABEL_50 89
#define LABEL_51 91
#define LABEL_52 93
#define LABEL_53 95
#define LABEL_54 97
#define LABEL_56 99
#define LABEL_57 101
#define LABEL_58 103
#define LABEL_59 105
#define LABEL_60 107
#define LABEL_61 109
#define LABEL_63 111
#define LABEL_62 113
#define LABEL_66 115
#define LABEL_67 117
#define LABEL_64 119
#define LABEL_68 121
#define TAG_69 59
#define LABEL_70 123
#define LABEL_75 125
#define LABEL_76 127
#define LABEL_73 129
#define TAG_74 63
#define LABEL_77 131
#define LABEL_80 133
#define LABEL_81 135
#define LABEL_78 137
#define LABEL_82 139
#define LABEL_84 141
#define LABEL_85 143
#define LABEL_86 145
#define LABEL_83 147
#define LABEL_91 149
#define LABEL_92 151
#define LABEL_87 153
#define TAG_88 75
#define LABEL_89 155
#define LABEL_95 157
#define LABEL_96 159
#define LABEL_98 161
#define LABEL_99 163
#define LABEL_100 165
#define LABEL_90 167
#define LABEL_101 169
#define LABEL_102 171
#define LABEL_103 173
#define LABEL_104 175
#define LABEL_105 177
#define LABEL_93 179
#define TAG_94 88
#define LABEL_97 181
#define LABEL_108 183
#define LABEL_109 185
#define LABEL_110 187
#define LABEL_107 189
#define LABEL_111 191
#define TAG_112 94
#define LABEL_113 193
#define LABEL_117 195
#define LABEL_118 197
#define LABEL_119 199
#define LABEL_114 201
#define LABEL_115 203
#define TAG_116 100
#define LABEL_120 205
#define TAG_121 101
#define LABEL_122 207
#define LABEL_127 209
#define LABEL_128 211
#define LABEL_123 213
#define LABEL_131 215
#define LABEL_132 217
#define LABEL_133 219
#define LABEL_124 221
#define LABEL_134 223
#define LABEL_136 225
#define LABEL_125 227
#define TAG_126 112
#define LABEL_129 229
#define LABEL_138 231
#define LABEL_139 233
#define LABEL_141 235
#define LABEL_142 237
#define LABEL_143 239
#define LABEL_130 241
#define LABEL_144 243
#define LABEL_145 245
#define LABEL_146 247
#define LABEL_147 249
#define LABEL_148 251
#define LABEL_149 253
#define LABEL_150 255
#define LABEL_151 257
#define LABEL_135 259
#define LABEL_152 261
#define LABEL_153 263
#define LABEL_137 265
#define LABEL_140 267
#define LABEL_155 269
#define LABEL_156 271
#define LABEL_154 273
#define LABEL_159 275
#define LABEL_160 277
#define LABEL_157 279
#define LABEL_161 281
#define LABEL_162 283
#define LABEL_164 285
#define LABEL_165 287
#define LABEL_166 289
#define LABEL_158 291
#define LABEL_167 293
#define LABEL_168 295
#define LABEL_169 297
#define LABEL_170 299
#define LABEL_171 301
#define LABEL_163 303
#define LABEL_172 305
#define LABEL_173 307
#define LABEL_174 309
#define LABEL_175 311
#define LABEL_176 313
#define LABEL_177 315
#define LABEL_178 317
#define LABEL_179 319
#define LABEL_180 321
#define LABEL_181 323
#define LABEL_182 325
#define TAG_183 161
#define LABEL_184 327
#define LABEL_185 329
#define LABEL_186 331
#define LABEL_187 333
#define ENVIRONMENT_LABEL_3 489
#define DEBUGGING_LABEL_2 488
#define PURIFICATION_ROOT 487
#define OBJECT_114 486
#define OBJECT_113 485
#define OBJECT_112 484
#define OBJECT_111 483
#define OBJECT_110 482
#define OBJECT_109 481
#define OBJECT_108 480
#define OBJECT_107 479
#define OBJECT_106 478
#define OBJECT_105 477
#define OBJECT_104 476
#define OBJECT_103 475
#define OBJECT_102 474
#define OBJECT_101 473
#define OBJECT_100 472
#define OBJECT_99 471
#define OBJECT_98 470
#define OBJECT_97 469
#define OBJECT_96 468
#define OBJECT_95 467
#define OBJECT_94 466
#define OBJECT_93 465
#define OBJECT_92 464
#define OBJECT_91 463
#define OBJECT_90 462
#define OBJECT_89 461
#define OBJECT_88 460
#define OBJECT_87 459
#define OBJECT_86 458
#define OBJECT_85 457
#define OBJECT_84 456
#define OBJECT_83 455
#define OBJECT_82 454
#define OBJECT_81 453
#define OBJECT_80 452
#define OBJECT_79 451
#define OBJECT_78 450
#define OBJECT_77 449
#define OBJECT_76 448
#define OBJECT_75 447
#define OBJECT_74 446
#define OBJECT_73 445
#define OBJECT_72 444
#define OBJECT_71 443
#define OBJECT_70 442
#define OBJECT_69 441
#define OBJECT_68 440
#define OBJECT_67 439
#define OBJECT_66 438
#define OBJECT_65 437
#define OBJECT_64 436
#define OBJECT_63 435
#define OBJECT_62 434
#define OBJECT_61 433
#define OBJECT_60 432
#define OBJECT_59 431
#define OBJECT_58 430
#define OBJECT_57 429
#define OBJECT_56 428
#define OBJECT_55 427
#define OBJECT_54 426
#define OBJECT_53 425
#define OBJECT_52 424
#define OBJECT_51 423
#define OBJECT_50 422
#define OBJECT_49 421
#define OBJECT_48 420
#define OBJECT_47 419
#define OBJECT_46 418
#define OBJECT_45 417
#define OBJECT_44 416
#define OBJECT_43 415
#define OBJECT_42 414
#define OBJECT_41 413
#define OBJECT_40 412
#define OBJECT_39 411
#define OBJECT_38 410
#define OBJECT_37 409
#define OBJECT_36 408
#define OBJECT_35 407
#define OBJECT_34 406
#define OBJECT_33 405
#define OBJECT_32 404
#define OBJECT_31 403
#define OBJECT_30 402
#define OBJECT_29 401
#define OBJECT_28 400
#define OBJECT_27 399
#define OBJECT_26 398
#define OBJECT_25 397
#define OBJECT_24 396
#define OBJECT_23 395
#define OBJECT_22 394
#define OBJECT_21 393
#define OBJECT_20 392
#define OBJECT_19 391
#define OBJECT_18 390
#define OBJECT_17 389
#define OBJECT_16 388
#define OBJECT_15 387
#define OBJECT_14 386
#define OBJECT_13 385
#define OBJECT_12 384
#define OBJECT_11 383
#define OBJECT_10 382
#define OBJECT_9 381
#define OBJECT_8 380
#define OBJECT_7 379
#define OBJECT_6 378
#define OBJECT_5 377
#define OBJECT_4 376
#define OBJECT_3 375
#define OBJECT_2 374
#define OBJECT_1 373
#define OBJECT_0 372
#define EXECUTE_CACHE_106 335
#define EXECUTE_CACHE_79 337
#define EXECUTE_CACHE_72 339
#define EXECUTE_CACHE_71 341
#define EXECUTE_CACHE_65 343
#define FREE_REFERENCE_18 346
#define FREE_REFERENCE_17 347
#define FREE_REFERENCE_16 348
#define FREE_REFERENCE_15 349
#define FREE_REFERENCE_14 350
#define FREE_REFERENCE_13 351
#define FREE_REFERENCE_12 352
#define FREE_REFERENCE_11 353
#define FREE_REFERENCE_10 354
#define FREE_REFERENCE_9 355
#define FREE_REFERENCE_8 356
#define FREE_REFERENCE_7 357
#define FREE_REFERENCE_6 358
#define FREE_REFERENCE_5 359
#define FREE_REFERENCE_4 360
#define FREE_REFERENCE_3 361
#define FREE_REFERENCE_2 362
#define FREE_REFERENCE_1 363
#define FREE_REFERENCE_0 364
#define GLOBAL_EXECUTE_CACHE_55 366
#define GLOBAL_EXECUTE_CACHE_10 368
#define GLOBAL_EXECUTE_CACHE_6 370
#define FREE_REFERENCES_LABEL_0 334
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
canon_so_6ce487f0a79c0552 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd77;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd121;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd131;
  machine_word Wrd118;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd154;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd139;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd134;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd60;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
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
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_163;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto make_canout_230;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto label_164;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto continuation_22;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_27);
      goto continuation_24;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_25;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_26;

    case 23:
      current_block = (Rpc - LABEL_30);
      goto continuation_27;

    case 24:
      current_block = (Rpc - LABEL_31);
      goto continuation_28;

    case 25:
      current_block = (Rpc - LABEL_32);
      goto continuation_29;

    case 26:
      current_block = (Rpc - LABEL_33);
      goto continuation_30;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto continuation_31;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto continuation_32;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto label_165;

    case 30:
      current_block = (Rpc - LABEL_36);
      goto continuation_33;

    case 31:
      current_block = (Rpc - LABEL_38);
      goto continuation_34;

    case 32:
      current_block = (Rpc - LABEL_39);
      goto continuation_35;

    case 33:
      current_block = (Rpc - LABEL_40);
      goto continuation_36;

    case 34:
      current_block = (Rpc - LABEL_41);
      goto continuation_37;

    case 35:
      current_block = (Rpc - LABEL_42);
      goto continuation_38;

    case 36:
      current_block = (Rpc - LABEL_43);
      goto continuation_39;

    case 37:
      current_block = (Rpc - LABEL_44);
      goto continuation_40;

    case 38:
      current_block = (Rpc - LABEL_45);
      goto continuation_41;

    case 39:
      current_block = (Rpc - LABEL_46);
      goto continuation_42;

    case 40:
      current_block = (Rpc - LABEL_47);
      goto continuation_43;

    case 41:
      current_block = (Rpc - LABEL_48);
      goto continuation_44;

    case 42:
      current_block = (Rpc - LABEL_49);
      goto continuation_45;

    case 43:
      current_block = (Rpc - LABEL_50);
      goto continuation_46;

    case 44:
      current_block = (Rpc - LABEL_51);
      goto continuation_47;

    case 45:
      current_block = (Rpc - LABEL_52);
      goto continuation_51;

    case 46:
      current_block = (Rpc - LABEL_53);
      goto continuation_50;

    case 47:
      current_block = (Rpc - LABEL_54);
      goto continuation_48;

    case 48:
      current_block = (Rpc - LABEL_56);
      goto continuation_52;

    case 49:
      current_block = (Rpc - LABEL_57);
      goto continuation_53;

    case 50:
      current_block = (Rpc - LABEL_58);
      goto continuation_54;

    case 51:
      current_block = (Rpc - LABEL_59);
      goto continuation_55;

    case 52:
      current_block = (Rpc - LABEL_60);
      goto continuation_56;

    case 53:
      current_block = (Rpc - LABEL_61);
      goto continuation_57;

    case 54:
      current_block = (Rpc - LABEL_63);
      goto label_166;

    case 55:
      current_block = (Rpc - LABEL_62);
      goto continuation_59;

    case 56:
      current_block = (Rpc - LABEL_66);
      goto label_167;

    case 57:
      current_block = (Rpc - LABEL_67);
      goto label_168;

    case 58:
      current_block = (Rpc - LABEL_64);
      goto continuation_58;

    case 59:
      current_block = (Rpc - LABEL_68);
      goto lambda_231;

    case 60:
      current_block = (Rpc - LABEL_70);
      goto continuation_61;

    case 61:
      current_block = (Rpc - LABEL_75);
      goto label_170;

    case 62:
      current_block = (Rpc - LABEL_76);
      goto label_169;

    case 63:
      current_block = (Rpc - LABEL_73);
      goto lambda_232;

    case 64:
      current_block = (Rpc - LABEL_77);
      goto continuation_80;

    case 65:
      current_block = (Rpc - LABEL_80);
      goto label_172;

    case 66:
      current_block = (Rpc - LABEL_81);
      goto label_171;

    case 67:
      current_block = (Rpc - LABEL_78);
      goto continuation_63;

    case 68:
      current_block = (Rpc - LABEL_82);
      goto continuation_82;

    case 69:
      current_block = (Rpc - LABEL_84);
      goto label_175;

    case 70:
      current_block = (Rpc - LABEL_85);
      goto label_173;

    case 71:
      current_block = (Rpc - LABEL_86);
      goto label_174;

    case 72:
      current_block = (Rpc - LABEL_83);
      goto continuation_64;

    case 73:
      current_block = (Rpc - LABEL_91);
      goto label_176;

    case 74:
      current_block = (Rpc - LABEL_92);
      goto label_177;

    case 75:
      current_block = (Rpc - LABEL_87);
      goto lambda_233;

    case 76:
      current_block = (Rpc - LABEL_89);
      goto continuation_84;

    case 77:
      current_block = (Rpc - LABEL_95);
      goto label_179;

    case 78:
      current_block = (Rpc - LABEL_96);
      goto label_178;

    case 79:
      current_block = (Rpc - LABEL_98);
      goto continuation_71;

    case 80:
      current_block = (Rpc - LABEL_99);
      goto continuation_74;

    case 81:
      current_block = (Rpc - LABEL_100);
      goto continuation_69;

    case 82:
      current_block = (Rpc - LABEL_90);
      goto continuation_67;

    case 83:
      current_block = (Rpc - LABEL_101);
      goto label_184;

    case 84:
      current_block = (Rpc - LABEL_102);
      goto label_183;

    case 85:
      current_block = (Rpc - LABEL_103);
      goto label_182;

    case 86:
      current_block = (Rpc - LABEL_104);
      goto label_181;

    case 87:
      current_block = (Rpc - LABEL_105);
      goto label_180;

    case 88:
      current_block = (Rpc - LABEL_93);
      goto lambda_234;

    case 89:
      current_block = (Rpc - LABEL_97);
      goto continuation_109;

    case 90:
      current_block = (Rpc - LABEL_108);
      goto label_187;

    case 91:
      current_block = (Rpc - LABEL_109);
      goto label_185;

    case 92:
      current_block = (Rpc - LABEL_110);
      goto label_186;

    case 93:
      current_block = (Rpc - LABEL_107);
      goto continuation_86;

    case 94:
      current_block = (Rpc - LABEL_111);
      goto lambda_235;

    case 95:
      current_block = (Rpc - LABEL_113);
      goto continuation_111;

    case 96:
      current_block = (Rpc - LABEL_117);
      goto label_190;

    case 97:
      current_block = (Rpc - LABEL_118);
      goto label_188;

    case 98:
      current_block = (Rpc - LABEL_119);
      goto label_189;

    case 99:
      current_block = (Rpc - LABEL_114);
      goto continuation_87;

    case 100:
      current_block = (Rpc - LABEL_115);
      goto lambda_236;

    case 101:
      current_block = (Rpc - LABEL_120);
      goto lambda_237;

    case 102:
      current_block = (Rpc - LABEL_122);
      goto continuation_124;

    case 103:
      current_block = (Rpc - LABEL_127);
      goto label_192;

    case 104:
      current_block = (Rpc - LABEL_128);
      goto label_191;

    case 105:
      current_block = (Rpc - LABEL_123);
      goto continuation_88;

    case 106:
      current_block = (Rpc - LABEL_131);
      goto label_193;

    case 107:
      current_block = (Rpc - LABEL_132);
      goto label_194;

    case 108:
      current_block = (Rpc - LABEL_133);
      goto label_195;

    case 109:
      current_block = (Rpc - LABEL_124);
      goto continuation_113;

    case 110:
      current_block = (Rpc - LABEL_134);
      goto label_196;

    case 111:
      current_block = (Rpc - LABEL_136);
      goto label_197;

    case 112:
      current_block = (Rpc - LABEL_125);
      goto lambda_238;

    case 113:
      current_block = (Rpc - LABEL_129);
      goto continuation_143;

    case 114:
      current_block = (Rpc - LABEL_138);
      goto label_199;

    case 115:
      current_block = (Rpc - LABEL_139);
      goto label_198;

    case 116:
      current_block = (Rpc - LABEL_141);
      goto continuation_102;

    case 117:
      current_block = (Rpc - LABEL_142);
      goto continuation_97;

    case 118:
      current_block = (Rpc - LABEL_143);
      goto continuation_94;

    case 119:
      current_block = (Rpc - LABEL_130);
      goto continuation_92;

    case 120:
      current_block = (Rpc - LABEL_144);
      goto label_207;

    case 121:
      current_block = (Rpc - LABEL_145);
      goto label_206;

    case 122:
      current_block = (Rpc - LABEL_146);
      goto label_205;

    case 123:
      current_block = (Rpc - LABEL_147);
      goto label_200;

    case 124:
      current_block = (Rpc - LABEL_148);
      goto label_204;

    case 125:
      current_block = (Rpc - LABEL_149);
      goto label_203;

    case 126:
      current_block = (Rpc - LABEL_150);
      goto label_202;

    case 127:
      current_block = (Rpc - LABEL_151);
      goto label_201;

    case 128:
      current_block = (Rpc - LABEL_135);
      goto continuation_115;

    case 129:
      current_block = (Rpc - LABEL_152);
      goto label_208;

    case 130:
      current_block = (Rpc - LABEL_153);
      goto label_209;

    case 131:
      current_block = (Rpc - LABEL_137);
      goto continuation_126;

    case 132:
      current_block = (Rpc - LABEL_140);
      goto continuation_145;

    case 133:
      current_block = (Rpc - LABEL_155);
      goto label_211;

    case 134:
      current_block = (Rpc - LABEL_156);
      goto label_210;

    case 135:
      current_block = (Rpc - LABEL_154);
      goto continuation_127;

    case 136:
      current_block = (Rpc - LABEL_159);
      goto label_212;

    case 137:
      current_block = (Rpc - LABEL_160);
      goto label_213;

    case 138:
      current_block = (Rpc - LABEL_157);
      goto continuation_147;

    case 139:
      current_block = (Rpc - LABEL_161);
      goto label_215;

    case 140:
      current_block = (Rpc - LABEL_162);
      goto label_214;

    case 141:
      current_block = (Rpc - LABEL_164);
      goto continuation_134;

    case 142:
      current_block = (Rpc - LABEL_165);
      goto continuation_137;

    case 143:
      current_block = (Rpc - LABEL_166);
      goto continuation_132;

    case 144:
      current_block = (Rpc - LABEL_158);
      goto continuation_130;

    case 145:
      current_block = (Rpc - LABEL_167);
      goto label_220;

    case 146:
      current_block = (Rpc - LABEL_168);
      goto label_219;

    case 147:
      current_block = (Rpc - LABEL_169);
      goto label_218;

    case 148:
      current_block = (Rpc - LABEL_170);
      goto label_217;

    case 149:
      current_block = (Rpc - LABEL_171);
      goto label_216;

    case 150:
      current_block = (Rpc - LABEL_163);
      goto continuation_149;

    case 151:
      current_block = (Rpc - LABEL_172);
      goto label_222;

    case 152:
      current_block = (Rpc - LABEL_173);
      goto label_221;

    case 153:
      current_block = (Rpc - LABEL_174);
      goto continuation_151;

    case 154:
      current_block = (Rpc - LABEL_175);
      goto label_224;

    case 155:
      current_block = (Rpc - LABEL_176);
      goto label_223;

    case 156:
      current_block = (Rpc - LABEL_177);
      goto continuation_153;

    case 157:
      current_block = (Rpc - LABEL_178);
      goto label_226;

    case 158:
      current_block = (Rpc - LABEL_179);
      goto label_225;

    case 159:
      current_block = (Rpc - LABEL_180);
      goto continuation_155;

    case 160:
      current_block = (Rpc - LABEL_181);
      goto label_227;

    case 161:
      current_block = (Rpc - LABEL_182);
      goto canonicalize_expression_239;

    case 162:
      current_block = (Rpc - LABEL_184);
      goto label_228;

    case 163:
      current_block = (Rpc - LABEL_185);
      goto label_241;

    case 164:
      current_block = (Rpc - LABEL_186);
      goto label_242;

    case 165:
      current_block = (Rpc - LABEL_187);
      goto expression_162;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_162)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_186])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_242)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_241)
  {
    static const short sections [] =
      {
	0,
	2,
	1,
	2,
	3,
	2,
	2,
	1,
	2,
	3,
	3,
	2,
	3,
	2,
	2,
	1,
	2,
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
	3,
	1,
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
    if (counter > 38)
      goto label_240;
    blocks = (current_block [OBJECT_114]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_185])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_240)
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
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_314;
  Wrd11 = Wrd15;

DEFLABEL (label_313)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12])));
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

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_312;
  Wrd11 = Wrd15;

DEFLABEL (label_311)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_310;
  Wrd8 = Wrd12;

DEFLABEL (label_309)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_55]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80]), 2);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd5.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_308;
  Wrd10 = Wrd14;

DEFLABEL (label_307)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_64);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_62);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_306;
  Wrd5 = Wrd9;

DEFLABEL (label_305)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_304;
  Wrd11 = Wrd15;

DEFLABEL (label_303)
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_69);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_68])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  ((Wrd23.pObj) [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_302;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_302;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_302;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_301)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_300;
  Wrd7 = Wrd11;

DEFLABEL (label_299)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_298;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_298;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_298;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_297)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_296;
  Wrd7 = Wrd11;

DEFLABEL (label_295)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_294;
  (Wrd35.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd35.uLng) == 26))
    goto label_294;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_294;
  (Wrd31.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd34.pObj) = (& ((Wrd38.pObj) [(Wrd31.Lng)]));
  ((Wrd34.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_293)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_292;
  Wrd7 = Wrd11;

DEFLABEL (label_291)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_290;
  Wrd13 = Wrd17;

DEFLABEL (label_289)
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_87])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  ((Wrd25.pObj) [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_288;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_288;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_288;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_287)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_286;
  Wrd7 = Wrd11;

DEFLABEL (label_285)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_284;
  (Wrd35.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd35.uLng) == 26))
    goto label_284;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_284;
  (Wrd31.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd34.pObj) = (& ((Wrd38.pObj) [(Wrd31.Lng)]));
  ((Wrd34.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_283)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_282;
  Wrd7 = Wrd11;

DEFLABEL (label_281)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_280;
  Wrd13 = Wrd17;

DEFLABEL (label_279)
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_112);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_111])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  ((Wrd25.pObj) [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_278;
  (Wrd35.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd35.uLng) == 26))
    goto label_278;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_278;
  (Wrd31.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd34.pObj) = (& ((Wrd38.pObj) [(Wrd31.Lng)]));
  ((Wrd34.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_277)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_276;
  Wrd7 = Wrd11;

DEFLABEL (label_275)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_274;
  Wrd13 = Wrd17;

DEFLABEL (label_273)
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_121);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_120])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  ((Wrd25.pObj) [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_272;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_272;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_272;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_271)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_270;
  Wrd7 = Wrd11;

DEFLABEL (label_269)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_268;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_268;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_268;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_267)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_266;
  Wrd7 = Wrd11;

DEFLABEL (label_265)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_140);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_264;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_264;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_264;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_263)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_262;
  Wrd7 = Wrd11;

DEFLABEL (label_261)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_157]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_157);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_260;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_260;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_260;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_259)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_258;
  Wrd7 = Wrd11;

DEFLABEL (label_257)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_163]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_163);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_256;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_256;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_256;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_255)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_254;
  Wrd7 = Wrd11;

DEFLABEL (label_253)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_174);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_252;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_252;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_252;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_251)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_250;
  Wrd7 = Wrd11;

DEFLABEL (label_249)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_177]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_177);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_248;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_248;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_248;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_247)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_246;
  Wrd7 = Wrd11;

DEFLABEL (label_245)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_180]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_155)
  INTERRUPT_CHECK (27, LABEL_180);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_244;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 26))
    goto label_244;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_244;
  (Wrd13.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd16.pObj) = (& ((Wrd20.pObj) [(Wrd13.Lng)]));
  ((Wrd16.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_243)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_183);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_182])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (label_244)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_181]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_227)
  goto label_243;

DEFLABEL (label_246)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_179])), (Wrd8.pObj));

DEFLABEL (label_225)
  (Wrd7.Obj) = Rvl;
  goto label_245;

DEFLABEL (label_248)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_178]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_226)
  goto label_247;

DEFLABEL (label_250)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_176])), (Wrd8.pObj));

DEFLABEL (label_223)
  (Wrd7.Obj) = Rvl;
  goto label_249;

DEFLABEL (label_252)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_224)
  goto label_251;

DEFLABEL (label_254)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_173])), (Wrd8.pObj));

DEFLABEL (label_221)
  (Wrd7.Obj) = Rvl;
  goto label_253;

DEFLABEL (label_256)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_222)
  goto label_255;

DEFLABEL (label_258)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_162])), (Wrd8.pObj));

DEFLABEL (label_214)
  (Wrd7.Obj) = Rvl;
  goto label_257;

DEFLABEL (label_260)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_215)
  goto label_259;

DEFLABEL (label_262)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_156])), (Wrd8.pObj));

DEFLABEL (label_210)
  (Wrd7.Obj) = Rvl;
  goto label_261;

DEFLABEL (label_264)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_211)
  goto label_263;

DEFLABEL (label_266)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_139])), (Wrd8.pObj));

DEFLABEL (label_198)
  (Wrd7.Obj) = Rvl;
  goto label_265;

DEFLABEL (label_268)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_199)
  goto label_267;

DEFLABEL (label_270)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_128])), (Wrd8.pObj));

DEFLABEL (label_191)
  (Wrd7.Obj) = Rvl;
  goto label_269;

DEFLABEL (label_272)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_192)
  goto label_271;

DEFLABEL (label_274)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_119])), (Wrd14.pObj));

DEFLABEL (label_189)
  (Wrd13.Obj) = Rvl;
  goto label_273;

DEFLABEL (label_276)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_118])), (Wrd8.pObj));

DEFLABEL (label_188)
  (Wrd7.Obj) = Rvl;
  goto label_275;

DEFLABEL (label_278)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_190)
  goto label_277;

DEFLABEL (label_280)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_110])), (Wrd14.pObj));

DEFLABEL (label_186)
  (Wrd13.Obj) = Rvl;
  goto label_279;

DEFLABEL (label_282)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109])), (Wrd8.pObj));

DEFLABEL (label_185)
  (Wrd7.Obj) = Rvl;
  goto label_281;

DEFLABEL (label_284)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_187)
  goto label_283;

DEFLABEL (label_286)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96])), (Wrd8.pObj));

DEFLABEL (label_178)
  (Wrd7.Obj) = Rvl;
  goto label_285;

DEFLABEL (label_288)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_179)
  goto label_287;

DEFLABEL (label_290)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86])), (Wrd14.pObj));

DEFLABEL (label_174)
  (Wrd13.Obj) = Rvl;
  goto label_289;

DEFLABEL (label_292)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85])), (Wrd8.pObj));

DEFLABEL (label_173)
  (Wrd7.Obj) = Rvl;
  goto label_291;

DEFLABEL (label_294)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_175)
  goto label_293;

DEFLABEL (label_296)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd8.pObj));

DEFLABEL (label_171)
  (Wrd7.Obj) = Rvl;
  goto label_295;

DEFLABEL (label_298)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_172)
  goto label_297;

DEFLABEL (label_300)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76])), (Wrd8.pObj));

DEFLABEL (label_169)
  (Wrd7.Obj) = Rvl;
  goto label_299;

DEFLABEL (label_302)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93]), 3);

DEFLABEL (label_170)
  goto label_301;

DEFLABEL (label_304)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67])), (Wrd12.pObj));

DEFLABEL (label_168)
  (Wrd11.Obj) = Rvl;
  goto label_303;

DEFLABEL (label_306)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd6.pObj));

DEFLABEL (label_167)
  (Wrd5.Obj) = Rvl;
  goto label_305;

DEFLABEL (label_308)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63])), (Wrd11.pObj));

DEFLABEL (label_166)
  (Wrd10.Obj) = Rvl;
  goto label_307;

DEFLABEL (label_310)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd9.pObj));

DEFLABEL (label_165)
  (Wrd8.Obj) = Rvl;
  goto label_309;

DEFLABEL (label_312)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd12.pObj));

DEFLABEL (label_164)
  (Wrd11.Obj) = Rvl;
  goto label_311;

DEFLABEL (label_314)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_163)
  (Wrd11.Obj) = Rvl;
  goto label_313;

DEFLABEL (make_canout_230)
  CLOSURE_HEADER (LABEL_12);

DEFLABEL (make_canout_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_231)
  CLOSURE_HEADER (LABEL_68);

DEFLABEL (lambda_77)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_232)
  CLOSURE_HEADER (LABEL_73);

DEFLABEL (lambda_76)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_78);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_83);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd22.uLng) == 62))
    goto label_336;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_336;
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_335)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_334;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_334;
  (Wrd30.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_333)
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_90);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_332;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd112.Lng))))
    goto label_332;
  (Wrd10.Obj) = ((Wrd110.pObj) [3]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_331;

DEFLABEL (label_330)
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_329;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd99.Lng))))
    goto label_329;
  (Wrd13.Obj) = ((Wrd97.pObj) [3]);

DEFLABEL (label_328)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_327)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_326;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd82.Lng))))
    goto label_326;
  (Wrd19.Obj) = ((Wrd80.pObj) [5]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_325;

DEFLABEL (label_324)
  (Wrd70.Obj) = (Rsp [4]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_323;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_323;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_322)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_321)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_320;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_320;
  (Wrd28.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_319)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_316;
  Wrd45 = Wrd42;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_315)
  (Rsp [3]) = (Wrd45.Obj);
  (Wrd46.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106]));

DEFLABEL (label_316)
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_103]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd59.uLng) == 62)
    goto label_318;

DEFLABEL (label_317)
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_318)
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_317;
  (Wrd45.Obj) = ((Wrd55.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto label_315;

DEFLABEL (label_320)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_103]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_180)
  (* (--Rsp)) = Rvl;
  goto label_319;

DEFLABEL (label_323)
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.Obj) = (current_block [OBJECT_102]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_181)
  (Wrd61.Obj) = Rvl;
  goto label_322;

DEFLABEL (label_325)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_321;

DEFLABEL (label_326)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_102]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_182)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_325;
  goto label_324;

DEFLABEL (label_329)
  (Wrd102.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (current_block [OBJECT_100]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_183)
  (Wrd13.Obj) = Rvl;
  goto label_328;

DEFLABEL (label_331)
  (Wrd13.Obj) = (current_block [OBJECT_101]);
  goto label_328;

DEFLABEL (label_332)
  (Wrd115.Obj) = (Rsp [3]);
  (Wrd116.Obj) = (current_block [OBJECT_100]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_184)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_331;
  goto label_330;

DEFLABEL (label_334)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (current_block [OBJECT_97]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_177)
  (* (--Rsp)) = Rvl;
  goto label_333;

DEFLABEL (label_336)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_97]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_176)
  (* (--Rsp)) = Rvl;
  goto label_335;

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd45.Obj) = Rvl;
  goto label_315;

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_99);
  (* (--Rsp)) = Rvl;
  goto label_321;

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd13.Obj) = Rvl;
  goto label_327;

DEFLABEL (lambda_233)
  CLOSURE_HEADER (LABEL_87);

DEFLABEL (lambda_106)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_93])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_234)
  CLOSURE_HEADER (LABEL_93);

DEFLABEL (lambda_105)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_107);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_114);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_123);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd22.uLng) == 62))
    goto label_367;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_367;
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_366)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_365;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_365;
  (Wrd30.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_364)
  (Wrd53.Obj) = (Rsp [4]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_363;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd52.Lng))))
    goto label_363;
  (Wrd46.Obj) = ((Wrd50.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_362)
  (Wrd60.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd60.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_130);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd175.Obj) = (Rsp [2]);
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if (! ((Wrd176.uLng) == 62))
    goto label_361;
  (Wrd172.pObj) = (OBJECT_ADDRESS (Wrd175.Obj));
  (Wrd173.Obj) = ((Wrd172.pObj) [0]);
  (Wrd174.Lng) = (FIXNUM_TO_LONG (Wrd173.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd174.Lng))))
    goto label_361;
  (Wrd11.Obj) = ((Wrd172.pObj) [3]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_358;

DEFLABEL (label_360)
  (Wrd161.Obj) = (Rsp [3]);
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd162.uLng) == 62))
    goto label_359;
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd159.Obj) = ((Wrd158.pObj) [0]);
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd159.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd160.Lng))))
    goto label_359;
  (Wrd134.Obj) = ((Wrd158.pObj) [3]);
  if ((Wrd134.Obj) == ((SCHEME_OBJECT) 0))
    goto label_358;

DEFLABEL (label_357)
  (Wrd148.Obj) = (Rsp [4]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd149.uLng) == 62))
    goto label_356;
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd146.Obj) = ((Wrd145.pObj) [0]);
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Wrd146.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd147.Lng))))
    goto label_356;
  (Wrd139.Obj) = ((Wrd145.pObj) [3]);

DEFLABEL (label_355)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd139.Obj);

DEFLABEL (label_354)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_353;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd26.Lng))))
    goto label_353;
  (Wrd20.Obj) = ((Wrd24.pObj) [4]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_352)
  (Wrd34.Obj) = (Rsp [0]);
  if ((Wrd34.Obj) == ((SCHEME_OBJECT) 0))
    goto label_346;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_345)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd90.Obj) = (Rsp [4]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 62))
    goto label_344;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd89.Lng))))
    goto label_344;
  (Wrd43.Obj) = ((Wrd87.pObj) [5]);
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_341;

DEFLABEL (label_343)
  (Wrd76.Obj) = (Rsp [5]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 62))
    goto label_342;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd75.Lng))))
    goto label_342;
  (Wrd51.Obj) = ((Wrd73.pObj) [5]);
  if ((Wrd51.Obj) == ((SCHEME_OBJECT) 0))
    goto label_341;

DEFLABEL (label_340)
  (Wrd63.Obj) = (Rsp [6]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 62))
    goto label_339;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd62.Lng))))
    goto label_339;
  (Wrd46.Obj) = ((Wrd60.pObj) [5]);

DEFLABEL (label_338)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_337)
  (Rsp [5]) = (Wrd46.Obj);
  (Wrd47.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd47.Obj);
  (Wrd48.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106]));

DEFLABEL (label_339)
  (Wrd65.Obj) = (Rsp [6]);
  (Wrd66.Obj) = (current_block [OBJECT_102]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_201)
  (Wrd46.Obj) = Rvl;
  goto label_338;

DEFLABEL (label_341)
  (Wrd46.Obj) = (current_block [OBJECT_101]);
  goto label_338;

DEFLABEL (label_342)
  (Wrd78.Obj) = (Rsp [5]);
  (Wrd79.Obj) = (current_block [OBJECT_102]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_202)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_341;
  goto label_340;

DEFLABEL (label_344)
  (Wrd92.Obj) = (Rsp [4]);
  (Wrd93.Obj) = (current_block [OBJECT_102]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_203)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_341;
  goto label_343;

DEFLABEL (label_346)
  (Wrd107.Obj) = (Rsp [5]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd108.uLng) == 62))
    goto label_351;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [0]);
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd106.Lng))))
    goto label_351;
  (Wrd98.Obj) = ((Wrd104.pObj) [4]);

DEFLABEL (label_350)
  (Rsp [0]) = (Wrd98.Obj);
  if ((Wrd98.Obj) == ((SCHEME_OBJECT) 0))
    goto label_347;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd98.Obj);
  goto label_345;

DEFLABEL (label_347)
  (Wrd118.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = (current_block [OBJECT_103]);
  (Rsp [1]) = (Wrd119.Obj);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd131.uLng) == 62)
    goto label_349;

DEFLABEL (label_348)
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_349)
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd128.Obj) = ((Wrd127.pObj) [0]);
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd128.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd129.Lng))))
    goto label_348;
  (Wrd121.Obj) = ((Wrd127.pObj) [4]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd121.Obj);
  goto label_345;

DEFLABEL (label_351)
  (Wrd109.Obj) = (Rsp [5]);
  (Wrd110.Obj) = (current_block [OBJECT_103]);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_204)
  (Wrd98.Obj) = Rvl;
  goto label_350;

DEFLABEL (label_353)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.Obj) = (current_block [OBJECT_103]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_200)
  (* (--Rsp)) = Rvl;
  goto label_352;

DEFLABEL (label_356)
  (Wrd150.Obj) = (Rsp [4]);
  (Wrd151.Obj) = (current_block [OBJECT_100]);
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_205)
  (Wrd139.Obj) = Rvl;
  goto label_355;

DEFLABEL (label_358)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_354;

DEFLABEL (label_359)
  (Wrd163.Obj) = (Rsp [3]);
  (Wrd164.Obj) = (current_block [OBJECT_100]);
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_206)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_358;
  goto label_357;

DEFLABEL (label_361)
  (Wrd177.Obj) = (Rsp [2]);
  (Wrd178.Obj) = (current_block [OBJECT_100]);
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd177.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_207)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_358;
  goto label_360;

DEFLABEL (label_363)
  (Wrd55.Obj) = (Rsp [4]);
  (Wrd56.Obj) = (current_block [OBJECT_97]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_195)
  (* (--Rsp)) = Rvl;
  goto label_362;

DEFLABEL (label_365)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (current_block [OBJECT_97]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_194)
  (* (--Rsp)) = Rvl;
  goto label_364;

DEFLABEL (label_367)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.Obj) = (current_block [OBJECT_97]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_193)
  (* (--Rsp)) = Rvl;
  goto label_366;

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd46.Obj) = Rvl;
  goto label_337;

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_142);
  (* (--Rsp)) = Rvl;
  goto label_345;

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_143);
  (* (--Rsp)) = Rvl;
  goto label_354;

DEFLABEL (lambda_235)
  CLOSURE_HEADER (LABEL_111);

DEFLABEL (lambda_121)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_116);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_115])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_236)
  CLOSURE_HEADER (LABEL_115);

DEFLABEL (lambda_120)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_124);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 62))
    goto label_375;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_375;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_374)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_373;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_373;
  (Wrd30.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_372)
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_135);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_371;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_371;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_370)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_369;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd29.Lng))))
    goto label_369;
  (Wrd21.Obj) = ((Wrd27.pObj) [5]);

DEFLABEL (label_368)
  (Rsp [3]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106]));

DEFLABEL (label_369)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_102]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_209)
  (Wrd21.Obj) = Rvl;
  goto label_368;

DEFLABEL (label_371)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_103]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_208)
  (Wrd5.Obj) = Rvl;
  goto label_370;

DEFLABEL (label_373)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (current_block [OBJECT_97]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_197)
  (* (--Rsp)) = Rvl;
  goto label_372;

DEFLABEL (label_375)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_100]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_196)
  (* (--Rsp)) = Rvl;
  goto label_374;

DEFLABEL (lambda_237)
  CLOSURE_HEADER (LABEL_120);

DEFLABEL (lambda_140)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_126);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_125])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_238)
  CLOSURE_HEADER (LABEL_125);

DEFLABEL (lambda_139)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_137);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_154);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd22.uLng) == 62))
    goto label_397;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_397;
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_396)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_395;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_395;
  (Wrd30.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_394)
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_158);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 62))
    goto label_393;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd112.Lng))))
    goto label_393;
  (Wrd10.Obj) = ((Wrd110.pObj) [3]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_392;

DEFLABEL (label_391)
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_390;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd99.Lng))))
    goto label_390;
  (Wrd13.Obj) = ((Wrd97.pObj) [3]);

DEFLABEL (label_389)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_388)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 62))
    goto label_387;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd82.Lng))))
    goto label_387;
  (Wrd19.Obj) = ((Wrd80.pObj) [5]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_386;

DEFLABEL (label_385)
  (Wrd70.Obj) = (Rsp [4]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 62))
    goto label_384;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_384;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_383)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_382)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_381;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_381;
  (Wrd28.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_380)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_377;
  Wrd45 = Wrd42;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_376)
  (Rsp [3]) = (Wrd45.Obj);
  (Wrd46.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106]));

DEFLABEL (label_377)
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_103]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd59.uLng) == 62)
    goto label_379;

DEFLABEL (label_378)
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_379)
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_378;
  (Wrd45.Obj) = ((Wrd55.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto label_376;

DEFLABEL (label_381)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_103]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_216)
  (* (--Rsp)) = Rvl;
  goto label_380;

DEFLABEL (label_384)
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.Obj) = (current_block [OBJECT_102]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_217)
  (Wrd61.Obj) = Rvl;
  goto label_383;

DEFLABEL (label_386)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_382;

DEFLABEL (label_387)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_102]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_218)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_386;
  goto label_385;

DEFLABEL (label_390)
  (Wrd102.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (current_block [OBJECT_100]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_219)
  (Wrd13.Obj) = Rvl;
  goto label_389;

DEFLABEL (label_392)
  (Wrd13.Obj) = (current_block [OBJECT_101]);
  goto label_389;

DEFLABEL (label_393)
  (Wrd115.Obj) = (Rsp [3]);
  (Wrd116.Obj) = (current_block [OBJECT_100]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_220)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_392;
  goto label_391;

DEFLABEL (label_395)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (current_block [OBJECT_97]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_213)
  (* (--Rsp)) = Rvl;
  goto label_394;

DEFLABEL (label_397)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_97]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98]), 2);

DEFLABEL (label_212)
  (* (--Rsp)) = Rvl;
  goto label_396;

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd45.Obj) = Rvl;
  goto label_376;

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_165);
  (* (--Rsp)) = Rvl;
  goto label_382;

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_166);
  (Wrd13.Obj) = Rvl;
  goto label_388;

DEFLABEL (canonicalize_expression_239)
  CLOSURE_HEADER (LABEL_182);

DEFLABEL (canonicalize_expression_159)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_399;
  if (! ((Wrd6.uLng) == 26))
    goto label_399;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd17.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_399;
  (Wrd15.pObj) = (& ((Wrd21.pObj) [(Wrd8.Lng)]));
  (Wrd9.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_398)
  (Rsp [0]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_399)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_184]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_113]), 2);

DEFLABEL (label_228)
  (Wrd9.Obj) = Rvl;
  goto label_398;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_canon_so_6ce487f0a79c0552 [38] =
  {
    { "canon_so_code_1", 1, canon_so_code_1 },
    { "canon_so_code_2", 1, canon_so_code_2 },
    { "canon_so_code_3", 1, canon_so_code_3 },
    { "canon_so_code_4", 1, canon_so_code_4 },
    { "canon_so_code_5", 1, canon_so_code_5 },
    { "canon_so_code_6", 1, canon_so_code_6 },
    { "canon_so_code_7", 1, canon_so_code_7 },
    { "canon_so_code_8", 1, canon_so_code_8 },
    { "canon_so_code_9", 4, canon_so_code_9 },
    { "canon_so_code_10", 21, canon_so_code_10 },
    { "canon_so_code_11", 3, canon_so_code_11 },
    { "canon_so_code_12", 1, canon_so_code_12 },
    { "canon_so_code_13", 6, canon_so_code_13 },
    { "canon_so_code_14", 9, canon_so_code_14 },
    { "canon_so_code_15", 12, canon_so_code_15 },
    { "canon_so_code_16", 16, canon_so_code_16 },
    { "canon_so_code_17", 16, canon_so_code_17 },
    { "canon_so_code_18", 21, canon_so_code_18 },
    { "canon_so_code_19", 24, canon_so_code_19 },
    { "canon_so_code_20", 32, canon_so_code_20 },
    { "canon_so_code_21", 16, canon_so_code_21 },
    { "canon_so_code_22", 8, canon_so_code_22 },
    { "canon_so_code_23", 36, canon_so_code_23 },
    { "canon_so_code_24", 5, canon_so_code_24 },
    { "canon_so_code_25", 3, canon_so_code_25 },
    { "canon_so_code_26", 13, canon_so_code_26 },
    { "canon_so_code_27", 26, canon_so_code_27 },
    { "canon_so_code_28", 4, canon_so_code_28 },
    { "canon_so_code_29", 7, canon_so_code_29 },
    { "canon_so_code_30", 50, canon_so_code_30 },
    { "canon_so_code_31", 43, canon_so_code_31 },
    { "canon_so_code_32", 7, canon_so_code_32 },
    { "canon_so_code_33", 35, canon_so_code_33 },
    { "canon_so_code_34", 6, canon_so_code_34 },
    { "canon_so_code_35", 24, canon_so_code_35 },
    { "canon_so_code_36", 24, canon_so_code_36 },
    { "canon_so_code_37", 16, canon_so_code_37 },
    { "canon_so_code_38", 46, canon_so_code_38 }
  };

int
decl_canon_so_6ce487f0a79c0552 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_canon_so_6ce487f0a79c0552);
  return (0);
}

DECLARE_COMPILED_CODE ("canon.so", 166, decl_canon_so_6ce487f0a79c0552, canon_so_6ce487f0a79c0552)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_canon_so_data_6ce487f0a79c0552 [10863] =
  "\xea\x03\x55\x8a\x15\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x81"
  "\x22\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xb1\x82\x22\x29\x21\x9e"
  "\x2b\xbb\x1d\xb0\x83\x88\xb1\x83\x22\x29\x21\x9e\x2b\xbc\x1d\xb0"
  "\x84\x88\xb1\x84\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88\xc3\xbe"
  "\x1d\x81\x22\x29\x21\x9f\x2b\xbf\x1d\xb0\x86\x88\xb6\x1d\x82\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb6\x1d\x83\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\xb6\x1d\x84\x22\x29\x21\x9f\x2b\xbe\x1d"
  "\xb0\x02\x88\x07\xb1\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb1\x83\x1d\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x08\x0d\x1c\x0d\x1c\x0d\x1c\x25\x0d\x1c\x0d\x1b"
  "\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x0d\x1c\x0d\x1b\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\x1c\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x84\x83\x81\xb1\x82\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x84\x83\x81\xb1\x82\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x83\x84\x06\x82\xb1\x81\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83"
  "\x84\x06\x82\xb1\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x06\x84\x83\x82\xb1\x81\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x06\x84\x83\x82\xb1\x81\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x83\x84\x06\x82\xb1\x81\x08\x07\xc1\x1c\xc1\x1c\x0d\x1c\x24\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1c\x1b\x1b\x0d\x1c\xc2\x1c\x08\x0d\x1c\x08\x88\x0d\x1c\x0d\x24"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x84\x06\x82"
  "\xb1\x81\x1b\x1b\x07\x08\x0d\x24\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\x07\x1b\x24\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x83\x84\x06\xc3\x82\x07\x08\xb1\x81\x1b\x1b\x0d\x24\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x1b\x08\x89"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x81\x08\x0d\x1c\x08\x88\x84\x83\xb1"
  "\x82\x1b\x1b\x1b\x0d\x1c\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x84\x83\x1d\x81\xb1\x82\x0c\x08\x1b\x1b\x1b"
  "\x1b\x25\x1b\x0d\x1c\x0d\x1c\x0d\x1b\x24\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc3\x1c\x08\xb1\x81\x1b\x24\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb1\x82\x1b\x1b\x25\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b\x20\x07\x0d\x08\x88\x0d\x0d\xb1"
  "\x81\x1b\x1b\x1b\x08\x1b\x1b\x25\x1b\x0d\x1c\x0d\x0d\x1c\x0d\x1c"
  "\x1b\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x84\x83\x81\xb1\x82\x1b\x1b\x08\x1b\x0d\x0d"
  "\x24\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x0d\x0d\x1c"
  "\x0d\x1c\x1b\x0d\x08\x1b\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x83\x84\x82\xb1\x81\xc2\x1c\xc3\x06\x07\x85\xc2\x02\x1b\x1b\x0d"
  "\x0d\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x07"
  "\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x83\x84\x06\x82\xb1\x81\x1d\x1b\x1b\x1b\x25\x1b\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x83\x82\x07\x1b\x1b\x1b\x81\xb1\x84\x1b\x1b\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x08\x0d\x0d\x08\x88\x1b\x08\x88\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x0d\x1b"
  "\x1b\x1b\x1b\x0d\x83\x84\x07\x81\x1b\x08\x88\x1b\x08\x88\xb1\x82"
  "\x08\x0d\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c"
  "\x88\x1b\xc2\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x83\x84\x06\x82"
  "\x0d\xb1\x81\x0d\x0d\x0d\xc3\x0d\x1b\x1b\x1b\x2a\x1b\x1b\x2a\x0d"
  "\x1c\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\xc2\x02\x02\x0d\x0d\x1c\x1b"
  "\x2a\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d"
  "\x1c\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x1c\x1b\x2a\x0d"
  "\x1c\x1b\x2a\x0d\x1c\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x0d\x1b"
  "\x1b\x2a\x0d\x1c\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1c\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a"
  "\x1b\x1b\x1b\x0d\x1b\x2a\x0d\xb6\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\xb7\x2a\x0d\xb5\x2a\x0d\xb4\x2a\x1b\xb3\x2a\x1b\x1b\xb2\x2a\x1b"
  "\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x08\x8b\x08\x28\x0d\x28\x0d\x28\x0d"
  "\x26\x1b\x1b\x1b\x0d\x0d\x1b\x1b\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66\x67\x67\x65\x6e\x2f\x63"
  "\x61\x6e\x6f\x6e\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\xa7\x01\x04\x83\x04\x03"
  "\x02\xa8\x01\x04\x83\x04\x03\x02\xa9\x01\x04\x83\x04\x03\x02\xaa"
  "\x01\x04\x83\x04\x03\x02\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73"
  "\x65\x74\x21\x02\xab\x01\x04\x84\x06\x03\x02\x02\xac\x01\x04\x84"
  "\x06\x03\x09\x02\x08\x02\xad\x01\x04\x84\x06\x03\x0a\x02\x09\x02"
  "\xae\x01\x04\x84\x06\x03\x02\x0a\x0f\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x0b\x02"
  "\xb2\x01\x0a\x81\x85\x02\xb1\x01\x08\x81\x83\x02\xb0\x01\x06\x81"
  "\x83\x02\xaf\x01\x04\x83\x04\x09\x12\x0c\x02\x0b\x02\x0a\x74\x6f"
  "\x70\x2d\x6c\x65\x76\x65\x6c\x0d\x0c\x66\x69\x72\x73\x74\x2d\x63"
  "\x6c\x61\x73\x73\x0e\x04\x6c\x6f\x77\x0f\x05\x6e\x6f\x6e\x65\x10"
  "\x19\x2a\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x64\x65\x63\x6c"
  "\x61\x72\x61\x74\x69\x6f\x6e\x73\x2a\x11\x18\x2a\x74\x6f\x70\x2d"
  "\x6c\x65\x76\x65\x6c\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x73\x2a\x12\x03\x24\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x70\x61"
  "\x63\x6b\x61\x67\x65\x2d\x6f\x70\x74\x69\x6d\x69\x7a\x61\x74\x69"
  "\x6f\x6e\x2d\x6c\x65\x76\x65\x6c\x13\x1f\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x3a\x63\x61\x63\x68\x65\x2d\x66\x72\x65\x65\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x73\x3f\x11\x12\x05\x05\x13\x73\x68\x61"
  "\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x14"
  "\x05\x18\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x15\x02\x1b\x73\x63\x6f\x64"
  "\x65\x2f\x6d\x61\x6b\x65\x2d\x74\x68\x65\x2d\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x16\x05\x1e\x63\x61\x6e\x6f\x6e\x69\x63"
  "\x61\x6c\x69\x7a\x65\x2f\x62\x69\x6e\x64\x2d\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x17\x05\xc7\x01\x2c\x81\x8b\x02\xc6\x01"
  "\x2a\x81\x89\x02\xc5\x01\x28\x81\x85\x02\xc4\x01\x26\x81\x85\x02"
  "\xc3\x01\x24\x81\x87\x02\xc2\x01\x22\x81\x87\x02\xc1\x01\x20\x81"
  "\x83\x02\xc0\x01\x1e\x81\x85\x02\xbf\x01\x1c\x81\x85\x02\xbe\x01"
  "\x1a\x81\x83\x02\xbd\x01\x18\x81\x85\x02\xbc\x01\x16\x81\x83\x02"
  "\xbb\x01\x14\x81\x83\x02\xba\x01\x12\x81\x85\x02\xb9\x01\x10\x81"
  "\x83\x02\xb8\x01\x0e\x81\x83\x02\xb7\x01\x0c\x81\x85\x02\xb6\x01"
  "\x0a\x81\x85\x02\xb5\x01\x08\x81\x83\x02\xb4\x01\x06\x81\x83\x02"
  "\xb3\x01\x04\x83\x04\x2b\x48\x18\x02\x0c\x0a\x61\x72\x62\x69\x74"
  "\x72\x61\x72\x79\x19\x07\x68\x79\x62\x72\x69\x64\x0f\x0e\x13\x02"
  "\xca\x01\x08\x81\x83\x02\xc9\x01\x06\x81\x83\x02\xc8\x01\x04\x83"
  "\x04\x07\x11\x13\x02\x0d\x06\x0c\x6d\x61\x6b\x65\x2d\x63\x61\x6e"
  "\x6f\x75\x74\x0f\x02\xcb\x01\x04\x85\x08\x03\x0a\x1a\x02\x0e\x06"
  "\x0f\x02\xd1\x01\x0e\x81\x89\x02\xd0\x01\x0c\x81\x89\x02\xcf\x01"
  "\x0a\x81\x87\x02\xce\x01\x08\x81\x89\x02\xcd\x01\x06\x81\x85\x02"
  "\xcc\x01\x04\x84\x06\x0d\x18\x1b\x02\x0f\x05\x15\x06\x0f\x03\xda"
  "\x01\x14\x81\x89\x02\xd9\x01\x12\x81\x89\x02\xd8\x01\x10\x81\x87"
  "\x02\xd7\x01\x0e\x81\x89\x02\xd6\x01\x0c\x81\x85\x02\xd5\x01\x0a"
  "\x81\x85\x02\xd4\x01\x08\x81\x85\x02\xd3\x01\x06\x81\x89\x02\xd2"
  "\x01\x04\x84\x06\x13\x20\x1c\x02\x10\x06\x0f\x02\xe6\x01\x1a\x81"
  "\x8d\x02\xe5\x01\x18\x81\x8b\x02\xe4\x01\x16\x81\x8b\x02\xe3\x01"
  "\x14\x81\x8b\x02\xe2\x01\x12\x81\x8b\x02\xe1\x01\x10\x81\x87\x02"
  "\xe0\x01\x0e\x81\x89\x02\xdf\x01\x0c\x81\x89\x02\xde\x01\x0a\x81"
  "\x8b\x02\xdd\x01\x08\x81\x8b\x02\xdc\x01\x06\x81\x89\x02\xdb\x01"
  "\x04\x85\x08\x19\x25\x1d\x02\x11\x05\x15\x06\x0f\x03\xf6\x01\x22"
  "\x81\x8d\x02\xf5\x01\x20\x81\x8b\x02\xf4\x01\x1e\x81\x8b\x02\xf3"
  "\x01\x1c\x81\x8b\x02\xf2\x01\x1a\x81\x8b\x02\xf1\x01\x18\x81\x87"
  "\x02\xf0\x01\x16\x81\x89\x02\xef\x01\x14\x81\x89\x02\xee\x01\x12"
  "\x81\x8b\x02\xed\x01\x10\x81\x8b\x02\xec\x01\x0e\x81\x89\x02\xeb"
  "\x01\x0c\x81\x87\x02\xea\x01\x0a\x81\x87\x02\xe9\x01\x08\x81\x87"
  "\x02\xe8\x01\x06\x81\x89\x02\xe7\x01\x04\x84\x06\x21\x2f\x1e\x02"
  "\x12\x06\x0f\x02\x86\x02\x22\x81\x8f\x02\x85\x02\x20\x81\x8f\x02"
  "\x84\x02\x1e\x81\x8f\x02\x83\x02\x1c\x81\x83\x02\x82\x02\x1a\x81"
  "\x8d\x02\x81\x02\x18\x81\x8b\x02\x80\x02\x16\x81\x8b\x02\xff\x01"
  "\x14\x81\x8b\x02\xfe\x01\x12\x81\x89\x02\xfd\x01\x10\x81\x89\x02"
  "\xfc\x01\x0e\x81\x8b\x02\xfb\x01\x0c\x81\x8d\x02\xfa\x01\x0a\x81"
  "\x8f\x02\xf9\x01\x08\x81\x8d\x02\xf8\x01\x06\x81\x8b\x02\xf7\x01"
  "\x04\x86\x0a\x21\x2d\x1f\x02\x13\x05\x15\x06\x0f\x03\x9b\x02\x2c"
  "\x81\x8f\x02\x9a\x02\x2a\x81\x8f\x02\x99\x02\x28\x81\x8f\x02\x98"
  "\x02\x26\x81\x83\x02\x97\x02\x24\x81\x8d\x02\x96\x02\x22\x81\x8b"
  "\x02\x95\x02\x20\x81\x8b\x02\x94\x02\x1e\x81\x8b\x02\x93\x02\x1c"
  "\x81\x89\x02\x92\x02\x1a\x81\x89\x02\x91\x02\x18\x81\x8b\x02\x90"
  "\x02\x16\x81\x8d\x02\x8f\x02\x14\x81\x8f\x02\x8e\x02\x12\x81\x8d"
  "\x02\x8d\x02\x10\x81\x8b\x02\x8c\x02\x0e\x81\x89\x02\x8b\x02\x0c"
  "\x81\x89\x02\x8a\x02\x0a\x81\x89\x02\x89\x02\x08\x81\x89\x02\x88"
  "\x02\x06\x81\x89\x02\x87\x02\x04\x84\x06\x2b\x39\x20\x02\x14\x04"
  "\x63\x61\x72\x21\x04\x63\x64\x72\x22\x17\x73\x63\x6f\x64\x65\x2f"
  "\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x23\x02\x06\x0f\x05\x15\x03\x0d\x63\x6f\x6d\x62\x69\x6e\x65\x2d"
  "\x6c\x69\x73\x74\x24\x04\xb3\x02\x32\x81\x8d\x02\xb2\x02\x30\x81"
  "\x8d\x02\xb1\x02\x2e\x81\x8b\x02\xb0\x02\x2c\x81\x8b\x02\xaf\x02"
  "\x2a\x81\x8b\x02\xae\x02\x28\x81\x8b\x02\xad\x02\x26\x81\x87\x02"
  "\xac\x02\x24\x81\x89\x02\xab\x02\x22\x81\x89\x02\xaa\x02\x20\x81"
  "\x8b\x02\xa9\x02\x1e\x81\x93\x02\xa8\x02\x1c\x81\x8d\x02\xa7\x02"
  "\x1a\x81\x8b\x02\xa6\x02\x18\x81\x89\x02\xa5\x02\x16\x81\x8b\x02"
  "\xa4\x02\x14\x81\x8b\x02\xa3\x02\x12\x81\x93\x02\xa2\x02\x10\x81"
  "\x93\x02\xa1\x02\x0e\x81\x8b\x02\xa0\x02\x0c\x81\x89\x02\x9f\x02"
  "\x0a\x81\x8d\x02\x9e\x02\x08\x81\x8d\x02\x9d\x02\x06\x81\x8d\x02"
  "\x9c\x02\x04\x86\x0a\x31\x47\x25\x02\x15\x0b\x73\x63\x6f\x64\x65"
  "\x2d\x65\x76\x61\x6c\x26\x22\x21\x08\x65\x6e\x63\x6c\x6f\x73\x65"
  "\x27\x12\x6c\x65\x78\x69\x63\x61\x6c\x2d\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x28\x0a\x70\x72\x6f\x63\x65\x73\x73\x65\x64\x29\x15"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x2a\x0f\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67"
  "\x3a\x6c\x65\x74\x03\x03\x10\x73\x63\x6f\x64\x65\x2f\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x3f\x03\x17\x73\x63\x6f\x64\x65\x2f\x74\x68"
  "\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3f\x2b\x03"
  "\x14\x73\x63\x6f\x64\x65\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x2d"
  "\x6e\x61\x6d\x65\x2c\x09\x12\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b"
  "\x65\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x04\x19\x73\x63\x6f\x64\x65"
  "\x2f\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x63\x6f\x6d\x70\x6f\x6e\x65"
  "\x6e\x74\x73\x2e\x04\x23\x03\x13\x73\x63\x6f\x64\x65\x2f\x63\x6f"
  "\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x3f\x2f\x05\x15\x73\x63\x6f"
  "\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x64\x69\x72\x65\x63\x74\x69\x76"
  "\x65\x30\x04\x19\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x6d\x65\x6e"
  "\x74\x2d\x64\x69\x72\x65\x63\x74\x69\x76\x65\x3f\x31\x03\x0f\x73"
  "\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x6d\x65\x6e\x74\x3f\x32\x04\x1d"
  "\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x33\x03\x1b\x73"
  "\x63\x6f\x64\x65\x2f\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x11\x73\x63\x6f\x64\x65"
  "\x2f\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x3f\x0e\xd3\x02\x42\x81"
  "\x87\x02\xd2\x02\x40\x83\x04\xd1\x02\x3e\x81\x89\x02\xd0\x02\x3c"
  "\x81\x87\x02\xcf\x02\x3a\x81\x89\x02\xce\x02\x38\x81\x89\x02\xcd"
  "\x02\x36\x81\x87\x02\xcc\x02\x34\x81\x8b\x02\xcb\x02\x32\x81\x8b"
  "\x02\xca\x02\x30\x81\x87\x02\xc9\x02\x2e\x81\x87\x02\xc8\x02\x2c"
  "\x81\x89\x02\xc7\x02\x2a\x81\x89\x02\xc6\x02\x28\x83\x04\xc5\x02"
  "\x26\x81\x87\x02\xc4\x02\x24\x81\x8b\x02\xc3\x02\x22\x81\x87\x02"
  "\xc2\x02\x20\x81\x87\x02\xc1\x02\x1e\x81\x87\x02\xc0\x02\x1c\x81"
  "\x8b\x02\xbf\x02\x1a\x81\x87\x02\xbe\x02\x18\x81\x89\x02\xbd\x02"
  "\x16\x81\x85\x02\xbc\x02\x14\x81\x8b\x02\xbb\x02\x12\x81\x8d\x02"
  "\xba\x02\x10\x81\x8b\x02\xb9\x02\x0e\x81\x87\x02\xb8\x02\x0c\x81"
  "\x97\x02\xb7\x02\x0a\x81\x95\x02\xb6\x02\x08\x81\x83\x02\xb5\x02"
  "\x06\x81\x8b\x02\xb4\x02\x04\x85\x08\x41\x69\x34\x02\x16\x22\x21"
  "\x05\x63\x6f\x6e\x73\x02\x06\x0f\x03\x24\x03\xe3\x02\x22\x81\x8d"
  "\x02\xe2\x02\x20\x81\x8b\x02\xe1\x02\x1e\x81\x8b\x02\xe0\x02\x1c"
  "\x81\x8b\x02\xdf\x02\x1a\x81\x8b\x02\xde\x02\x18\x81\x87\x02\xdd"
  "\x02\x16\x81\x89\x02\xdc\x02\x14\x81\x89\x02\xdb\x02\x12\x81\x8b"
  "\x02\xda\x02\x10\x81\x8b\x02\xd9\x02\x0e\x81\x89\x02\xd8\x02\x0c"
  "\x81\x87\x02\xd7\x02\x0a\x81\x89\x02\xd6\x02\x08\x81\x85\x02\xd5"
  "\x02\x06\x81\x83\x02\xd4\x02\x04\x83\x04\x21\x35\x35\x02\x17\x28"
  "\x0e\x2a\x02\x03\x2c\x06\x0f\x04\x05\x6d\x65\x6d\x71\x2c\x03\x14"
  "\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x28\x04\x23\x06\xeb\x02\x12\x81\x8b\x02\xea\x02\x10"
  "\x81\x89\x02\xe9\x02\x0e\x81\x8d\x02\xe8\x02\x0c\x81\x89\x02\xe7"
  "\x02\x0a\x81\x89\x02\xe6\x02\x08\x81\x89\x02\xe5\x02\x06\x81\x87"
  "\x02\xe4\x02\x04\x85\x08\x11\x25\x36\x02\x18\x13\x6c\x65\x78\x69"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x19\x2a"
  "\x16\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x03\x04\x1c\x73\x63\x6f\x64\x65\x2f\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x63\x6f\x6d\x70\x6f\x6e"
  "\x65\x6e\x74\x73\x05\x15\x04\x2c\x03\x28\x06\x0f\x04\x23\x07\x8f"
  "\x03\x4a\x81\x8d\x02\x8e\x03\x48\x81\x8b\x02\x8d\x03\x46\x81\x8b"
  "\x02\x8c\x03\x44\x81\x8b\x02\x8b\x03\x42\x81\x8b\x02\x8a\x03\x40"
  "\x81\x87\x02\x89\x03\x3e\x81\x89\x02\x88\x03\x3c\x81\x89\x02\x87"
  "\x03\x3a\x81\x8b\x02\x86\x03\x38\x81\x8d\x02\x85\x03\x36\x81\x8b"
  "\x02\x84\x03\x34\x81\x8b\x02\x83\x03\x32\x81\x8b\x02\x82\x03\x30"
  "\x81\x8b\x02\x81\x03\x2e\x81\x87\x02\x80\x03\x2c\x81\x89\x02\xff"
  "\x02\x2a\x81\x89\x02\xfe\x02\x28\x81\x8b\x02\xfd\x02\x26\x81\x8d"
  "\x02\xfc\x02\x24\x81\x8b\x02\xfb\x02\x22\x81\x89\x02\xfa\x02\x20"
  "\x81\x8b\x02\xf9\x02\x1e\x81\x89\x02\xf8\x02\x1c\x81\x89\x02\xf7"
  "\x02\x1a\x81\x89\x02\xf6\x02\x18\x81\x8b\x02\xf5\x02\x16\x81\x8b"
  "\x02\xf4\x02\x14\x81\x89\x02\xf3\x02\x12\x81\x89\x02\xf2\x02\x10"
  "\x81\x89\x02\xf1\x02\x0e\x81\x8f\x02\xf0\x02\x0c\x81\x8b\x02\xef"
  "\x02\x0a\x81\x89\x02\xee\x02\x08\x81\x87\x02\xed\x02\x06\x81\x87"
  "\x02\xec\x02\x04\x85\x08\x49\x66\x37\x02\x19\x2e\x63\x61\x6e\x6f"
  "\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x64\x65\x66\x69\x6e\x69\x74"
  "\x69\x6f\x6e\x3a\x20\x75\x6e\x73\x63\x61\x6e\x6e\x65\x64\x20\x64"
  "\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x0a\x6f\x6e\x63\x65\x2d\x6f"
  "\x6e\x6c\x79\x38\x19\x04\x1c\x73\x63\x6f\x64\x65\x2f\x64\x65\x66"
  "\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e"
  "\x74\x73\x39\x05\x15\x04\x2c\x05\x12\x73\x69\x6e\x67\x6c\x65\x2d"
  "\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3a\x04\x06\x65\x72\x72"
  "\x6f\x72\x3b\x06\x94\x03\x0c\x81\x89\x02\x93\x03\x0a\x81\x89\x02"
  "\x92\x03\x08\x81\x87\x02\x91\x03\x06\x81\x87\x02\x90\x03\x04\x85"
  "\x08\x0b\x1b\x3c\x02\x1a\x2a\x02\x03\x28\x06\x0f\x03\x97\x03\x08"
  "\x81\x87\x02\x96\x03\x06\x81\x89\x02\x95\x03\x04\x85\x08\x07\x12"
  "\x3d\x02\x1b\x12\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x3e\x0d\x19\x0e\x20\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x62\x79\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x73\x3f\x3f\x11\x03\x05\x15\x63\x61"
  "\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x6c\x61\x6d\x62\x64"
  "\x61\x2a\x40\x05\x30\x05\x10\x6d\x61\x6b\x65\x2d\x6f\x70\x65\x6e"
  "\x2d\x62\x6c\x6f\x63\x6b\x06\x0f\x05\xa4\x03\x1c\x81\x89\x02\xa3"
  "\x03\x1a\x81\x93\x02\xa2\x03\x18\x81\x91\x02\xa1\x03\x16\x81\x91"
  "\x02\xa0\x03\x14\x81\x91\x02\x9f\x03\x12\x81\x89\x02\x9e\x03\x10"
  "\x81\x89\x02\x9d\x03\x0e\x81\x89\x02\x9c\x03\x0c\x81\x89\x02\x9b"
  "\x03\x0a\x81\x89\x02\x9a\x03\x08\x81\x87\x02\x99\x03\x06\x81\x8f"
  "\x02\x98\x03\x04\x85\x08\x1b\x35\x41\x02\x1c\x0d\x02\x31\x63\x61"
  "\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x73\x65\x71\x75\x65"
  "\x6e\x63\x65\x3a\x20\x6f\x70\x65\x6e\x20\x62\x6c\x6f\x63\x6b\x20"
  "\x69\x6e\x20\x62\x61\x64\x20\x63\x6f\x6e\x74\x65\x78\x74\x0e\x19"
  "\x38\x11\x02\x11\x14\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d"
  "\x73\x65\x71\x75\x65\x6e\x63\x65\x42\x19\x63\x61\x6e\x6f\x6e\x69"
  "\x63\x61\x6c\x69\x7a\x65\x2f\x63\x6f\x6d\x70\x72\x65\x73\x73\x69"
  "\x6e\x67\x43\x1d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63\x6f\x6d"
  "\x70\x72\x65\x73\x73\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x3f"
  "\x15\x06\x03\x12\x73\x63\x6f\x64\x65\x2f\x6f\x70\x65\x6e\x2d\x62"
  "\x6c\x6f\x63\x6b\x3f\x44\x04\x1a\x73\x63\x6f\x64\x65\x2f\x73\x65"
  "\x71\x75\x65\x6e\x63\x65\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74"
  "\x73\x45\x05\x3b\x04\x1c\x73\x63\x6f\x64\x65\x2f\x6f\x70\x65\x6e"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74"
  "\x73\x04\x07\x61\x70\x70\x65\x6e\x64\x3b\x04\x04\x6d\x61\x70\x46"
  "\x05\x14\x03\x24\x05\x15\x05\x0f\x75\x6e\x73\x63\x61\x6e\x2d\x64"
  "\x65\x66\x69\x6e\x65\x73\x47\x06\x0f\x03\x07\x6c\x65\x6e\x67\x74"
  "\x68\x0d\xbe\x03\x36\x81\x87\x02\xbd\x03\x34\x81\x87\x02\xbc\x03"
  "\x32\x81\x83\x02\xbb\x03\x30\x81\x87\x02\xba\x03\x2e\x81\x87\x02"
  "\xb9\x03\x2c\x81\x87\x02\xb8\x03\x2a\x81\x89\x02\xb7\x03\x28\x81"
  "\x89\x02\xb6\x03\x26\x81\x87\x02\xb5\x03\x24\x81\x83\x02\xb4\x03"
  "\x22\x81\x85\x02\xb3\x03\x20\x81\x83\x02\xb2\x03\x1e\x81\x83\x02"
  "\xb1\x03\x1c\x81\x83\x02\xb0\x03\x1a\x81\x85\x02\xaf\x03\x18\x81"
  "\x87\x02\xae\x03\x16\x81\x89\x02\xad\x03\x14\x81\x85\x02\xac\x03"
  "\x12\x81\x85\x02\xab\x03\x10\x81\x85\x02\xaa\x03\x0e\x81\x89\x02"
  "\xa9\x03\x0c\x81\x85\x02\xa8\x03\x0a\x81\x8b\x02\xa7\x03\x08\x81"
  "\x89\x02\xa6\x03\x06\x81\x87\x02\xa5\x03\x04\x85\x08\x35\x65\x48"
  "\x02\x1d\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x49\x2a\x02\x03\x28\x04\x23\x03\xc2\x03\x0a\x81\x87"
  "\x02\xc1\x03\x08\x81\x89\x02\xc0\x03\x06\x81\x85\x02\xbf\x03\x04"
  "\x84\x06\x09\x17\x4a\x02\x1e\x0d\x12\x02\x12\x02\x04\x2c\x04\x13"
  "\x25\x73\x69\x6e\x67\x6c\x65\x2d\x64\x65\x66\x69\x6e\x69\x74\x69"
  "\x6f\x6e\x4b\x06\x0f\x04\xc9\x03\x10\x81\x89\x02\xc8\x03\x0e\x81"
  "\x87\x02\xc7\x03\x0c\x81\x89\x02\xc6\x03\x0a\x85\x08\xc5\x03\x08"
  "\x81\x87\x02\xc4\x03\x06\x81\x87\x02\xc3\x03\x04\x81\x87\x02\x0f"
  "\x21\x4c\x02\x1f\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x3e\x07\x76\x65\x63\x74\x6f\x72\x0c\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x69\x66\x79\x09\x63\x6f\x6e\x73\x74\x61\x6e"
  "\x74\x0a\x65\x76\x61\x6c\x75\x61\x74\x65\x64\x21\x22\x10\x0d\x12"
  "\x02\x12\x04\x65\x71\x3f\x3e\x13\x69\x64\x65\x6e\x74\x69\x74\x79"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0d\x63\x61\x6e\x6f\x75"
  "\x74\x2d\x73\x61\x66\x65\x3f\x10\x0c\x63\x61\x6e\x6f\x75\x74\x2d"
  "\x65\x78\x70\x72\x4d\x2a\x07\x05\x0b\x6c\x73\x65\x74\x2d\x75\x6e"
  "\x69\x6f\x6e\x03\x08\x72\x65\x76\x65\x72\x73\x65\x4e\x03\x10\x73"
  "\x63\x6f\x64\x65\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x3f\x03\x13"
  "\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x74\x65"
  "\x78\x74\x03\x32\x03\x0e\x73\x63\x6f\x64\x65\x2f\x6c\x61\x6d\x62"
  "\x64\x61\x3f\x4f\x04\x09\x66\x6f\x72\x2d\x61\x6c\x6c\x3f\x04\x4b"
  "\x04\x46\x05\x30\x06\x0f\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65"
  "\x63\x74\x6f\x72\x50\x04\x23\x03\x28\x04\x31\x03\x1e\x73\x63\x6f"
  "\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65"
  "\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x51\x03\x42\x12\xfb\x03"
  "\x66\x81\x85\x02\xfa\x03\x64\x81\x89\x02\xf9\x03\x62\x81\x89\x02"
  "\xf8\x03\x60\x81\x87\x02\xf7\x03\x5e\x81\x8b\x02\xf6\x03\x5c\x81"
  "\x89\x02\xf5\x03\x5a\x81\x8b\x02\xf4\x03\x58\x81\x89\x02\xf3\x03"
  "\x56\x81\x89\x02\xf2\x03\x54\x81\x9d\x02\xf1\x03\x52\x81\x85\x02"
  "\xf0\x03\x50\x81\x8b\x02\xef\x03\x4e\x81\x89\x02\xee\x03\x4c\x81"
  "\x9b\x02\xed\x03\x4a\x81\x8b\x02\xec\x03\x48\x81\x89\x02\xeb\x03"
  "\x46\x81\x87\x02\xea\x03\x44\x81\x99\x02\xe9\x03\x42\x81\x95\x02"
  "\xe8\x03\x40\x83\x04\xe7\x03\x3e\x81\x8f\x02\xe6\x03\x3c\x81\x87"
  "\x02\xe5\x03\x3a\x81\x87\x02\xe4\x03\x38\x81\x87\x02\xe3\x03\x36"
  "\x81\x87\x02\xe2\x03\x34\x81\x97\x02\xe1\x03\x32\x81\x97\x02\xe0"
  "\x03\x30\x81\x95\x02\xdf\x03\x2e\x81\x95\x02\xde\x03\x2c\x81\x95"
  "\x02\xdd\x03\x2a\x81\x95\x02\xdc\x03\x28\x81\x95\x02\xdb\x03\x26"
  "\x81\x95\x02\xda\x03\x24\x81\x95\x02\xd9\x03\x22\x81\x95\x02\xd8"
  "\x03\x20\x81\x95\x02\xd7\x03\x1e\x81\x95\x02\xd6\x03\x1c\x81\x83"
  "\x02\xd5\x03\x1a\x81\x85\x02\xd4\x03\x18\x81\x85\x02\xd3\x03\x16"
  "\x81\x83\x02\xd2\x03\x14\x81\x97\x02\xd1\x03\x12\x81\x97\x02\xd0"
  "\x03\x10\x81\x97\x02\xcf\x03\x0e\x81\x95\x02\xce\x03\x0c\x81\x8d"
  "\x02\xcd\x03\x0a\x81\x89\x02\xcc\x03\x08\x85\x08\xcb\x03\x06\x81"
  "\x87\x02\xca\x03\x04\x81\x87\x02\x65\xa2\x01\x52\x02\x20\x22\x21"
  "\x42\x05\x63\x61\x64\x72\x04\x63\x61\x72\x04\x03\x10\x73\x63\x6f"
  "\x64\x65\x2f\x73\x65\x71\x75\x65\x6e\x63\x65\x3f\x04\x45\x03\x44"
  "\x05\x15\x03\x12\x73\x63\x6f\x64\x65\x2f\x64\x65\x66\x69\x6e\x69"
  "\x74\x69\x6f\x6e\x3f\x05\x3a\x03\x4e\x04\x39\x03\x24\x04\x46\x06"
  "\x0f\x03\x4f\x05\x11\x6d\x75\x6c\x74\x69\x2d\x64\x65\x66\x69\x6e"
  "\x69\x74\x69\x6f\x6e\x4e\x0e\xa6\x04\x58\x81\x89\x02\xa5\x04\x56"
  "\x81\x8b\x02\xa4\x04\x54\x81\x89\x02\xa3\x04\x52\x81\x89\x02\xa2"
  "\x04\x50\x81\x89\x02\xa1\x04\x4e\x81\x89\x02\xa0\x04\x4c\x81\x8f"
  "\x02\x9f\x04\x4a\x81\x8b\x02\x9e\x04\x48\x81\x89\x02\x9d\x04\x46"
  "\x81\x87\x02\x9c\x04\x44\x81\x93\x02\x9b\x04\x42\x81\x8d\x02\x9a"
  "\x04\x40\x81\x89\x02\x99\x04\x3e\x81\x89\x02\x98\x04\x3c\x81\x89"
  "\x02\x97\x04\x3a\x81\x87\x02\x96\x04\x38\x81\x8b\x02\x95\x04\x36"
  "\x81\x8b\x02\x94\x04\x34\x81\x8b\x02\x93\x04\x32\x81\x87\x02\x92"
  "\x04\x30\x81\x89\x02\x91\x04\x2e\x81\x91\x02\x90\x04\x2c\x81\x87"
  "\x02\x8f\x04\x2a\x81\x8d\x02\x8e\x04\x28\x81\x8b\x02\x8d\x04\x26"
  "\x81\x89\x02\x8c\x04\x24\x81\x85\x02\x8b\x04\x22\x81\x89\x02\x8a"
  "\x04\x20\x81\x89\x02\x89\x04\x1e\x81\x8b\x02\x88\x04\x1c\x81\x8f"
  "\x02\x87\x04\x1a\x81\x8d\x02\x86\x04\x18\x81\x8d\x02\x85\x04\x16"
  "\x81\x87\x02\x84\x04\x14\x81\x87\x02\x83\x04\x12\x81\x87\x02\x82"
  "\x04\x10\x81\x89\x02\x81\x04\x0e\x81\x89\x02\x80\x04\x0c\x81\x89"
  "\x02\xff\x03\x0a\x81\x83\x02\xfe\x03\x08\x81\x89\x02\xfd\x03\x06"
  "\x81\x89\x02\xfc\x03\x04\x85\x08\x57\x81\x01\x45\x02\x21\x03\x6f"
  "\x72\x04\x61\x6e\x64\x06\x71\x75\x6f\x74\x65\x1e\x73\x63\x6f\x64"
  "\x65\x2f\x61\x62\x73\x6f\x6c\x75\x74\x65\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x2d\x6e\x61\x6d\x65\x44\x1a\x73\x63\x6f\x64\x65"
  "\x2f\x61\x62\x73\x6f\x6c\x75\x74\x65\x2d\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x3f\x42\x3e\x10\x75\x63\x6f\x64\x65\x2d\x70\x72\x69"
  "\x6d\x69\x74\x69\x76\x65\x21\x22\x04\x0d\x63\x6c\x6f\x73\x65\x2d"
  "\x73\x79\x6e\x74\x61\x78\x02\xad\x04\x10\x81\x87\x02\xac\x04\x0e"
  "\x81\x8b\x02\xab\x04\x0c\x81\x8b\x02\xaa\x04\x0a\x81\x85\x02\xa9"
  "\x04\x08\x81\x85\x02\xa8\x04\x06\x81\x85\x02\xa7\x04\x04\x84\x06"
  "\x0f\x1f\x3e\x02\x22\x14\x6c\x65\x78\x69\x63\x61\x6c\x2d\x75\x6e"
  "\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x39\x10\x65\x72\x72\x6f\x72"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x74\x79\x70\x65\x3f\x1e\x21\x22\x14\x6c\x65\x78\x69\x63"
  "\x61\x6c\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x10\x65"
  "\x72\x72\x6f\x72\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x23\x02"
  "\x04\x33\x03\x08\x6c\x61\x6d\x62\x64\x61\x3f\x06\x13\x63\x61\x6e"
  "\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x65\x72\x72\x6f\x72\x53"
  "\x05\x15\x06\x19\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65"
  "\x2f\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x54\x03\x42\x03"
  "\x44\x03\x2b\x06\x11\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a"
  "\x65\x2f\x6c\x65\x74\x44\x04\x46\x03\x24\x06\x0f\x0d\xd0\x04\x48"
  "\x81\x8d\x02\xcf\x04\x46\x81\x8b\x02\xce\x04\x44\x81\x8b\x02\xcd"
  "\x04\x42\x81\x8b\x02\xcc\x04\x40\x81\x8b\x02\xcb\x04\x3e\x81\x87"
  "\x02\xca\x04\x3c\x81\x89\x02\xc9\x04\x3a\x81\x89\x02\xc8\x04\x38"
  "\x81\x8b\x02\xc7\x04\x36\x81\x85\x02\xc6\x04\x34\x81\x89\x02\xc5"
  "\x04\x32\x81\x8b\x02\xc4\x04\x30\x81\x89\x02\xc3\x04\x2e\x81\x87"
  "\x02\xc2\x04\x2c\x81\x87\x02\xc1\x04\x2a\x81\x87\x02\xc0\x04\x28"
  "\x81\x89\x02\xbf\x04\x26\x81\x87\x02\xbe\x04\x24\x81\x89\x02\xbd"
  "\x04\x22\x81\x89\x02\xbc\x04\x20\x81\x89\x02\xbb\x04\x1e\x81\x87"
  "\x02\xba\x04\x1c\x81\x87\x02\xb9\x04\x1a\x81\x87\x02\xb8\x04\x18"
  "\x81\x83\x02\xb7\x04\x16\x81\x89\x02\xb6\x04\x14\x81\x89\x02\xb5"
  "\x04\x12\x81\x87\x02\xb4\x04\x10\x81\x87\x02\xb3\x04\x0e\x81\x87"
  "\x02\xb2\x04\x0c\x81\x87\x02\xb1\x04\x0a\x81\x87\x02\xb0\x04\x08"
  "\x81\x87\x02\xaf\x04\x06\x81\x87\x02\xae\x04\x04\x85\x08\x47\x75"
  "\x42\x02\x23\x39\x0e\x2a\x02\x04\x2c\x06\x0f\x03\x28\x04\x23\x05"
  "\xd6\x04\x0e\x81\x8b\x02\xd5\x04\x0c\x81\x89\x02\xd4\x04\x0a\x81"
  "\x8d\x02\xd3\x04\x08\x81\x89\x02\xd2\x04\x06\x81\x89\x02\xd1\x04"
  "\x04\x86\x0a\x0d\x1f\x39\x02\x24\x02\x38\x0d\x3f\x02\x3f\x23\x03"
  "\x05\x14\x05\x40\x04\x46\x03\x24\x05\x15\x06\x0f\x07\xee\x04\x32"
  "\x81\x8d\x02\xed\x04\x30\x81\x8b\x02\xec\x04\x2e\x81\x8b\x02\xeb"
  "\x04\x2c\x81\x8b\x02\xea\x04\x2a\x81\x8b\x02\xe9\x04\x28\x81\x87"
  "\x02\xe8\x04\x26\x81\x89\x02\xe7\x04\x24\x81\x89\x02\xe6\x04\x22"
  "\x81\x8b\x02\xe5\x04\x20\x81\x85\x02\xe4\x04\x1e\x81\x83\x02\xe3"
  "\x04\x1c\x81\x8b\x02\xe2\x04\x1a\x81\x89\x02\xe1\x04\x18\x81\x8b"
  "\x02\xe0\x04\x16\x81\x8b\x02\xdf\x04\x14\x81\x83\x02\xde\x04\x12"
  "\x81\x85\x02\xdd\x04\x10\x81\x83\x02\xdc\x04\x0e\x81\x83\x02\xdb"
  "\x04\x0c\x81\x83\x02\xda\x04\x0a\x81\x83\x02\xd9\x04\x08\x81\x89"
  "\x02\xd8\x04\x06\x81\x83\x02\xd7\x04\x04\x86\x0a\x31\x4f\x3f\x02"
  "\x25\x26\x21\x22\x29\x27\x2a\x02\x04\x2e\x05\x31\x04\x33\x05\x15"
  "\x03\x2f\x04\x13\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x63"
  "\x6f\x6d\x6d\x65\x6e\x74\x03\x28\x03\x2b\x06\x0f\x05\x30\x04\x23"
  "\x0c\x86\x05\x32\x81\x91\x02\x85\x05\x30\x81\x8f\x02\x84\x05\x2e"
  "\x81\x8d\x02\x83\x05\x2c\x81\x87\x02\x82\x05\x2a\x81\x8b\x02\x81"
  "\x05\x28\x81\x8b\x02\x80\x05\x26\x81\x89\x02\xff\x04\x24\x81\x89"
  "\x02\xfe\x04\x22\x81\x89\x02\xfd\x04\x20\x81\x87\x02\xfc\x04\x1e"
  "\x81\x91\x02\xfb\x04\x1c\x81\x8b\x02\xfa\x04\x1a\x81\x8b\x02\xf9"
  "\x04\x18\x81\x89\x02\xf8\x04\x16\x81\x89\x02\xf7\x04\x14\x81\x89"
  "\x02\xf6\x04\x12\x81\x87\x02\xf5\x04\x10\x81\x8b\x02\xf4\x04\x0e"
  "\x81\x89\x02\xf3\x04\x0c\x81\x87\x02\xf2\x04\x0a\x81\x87\x02\xf1"
  "\x04\x08\x81\x87\x02\xf0\x04\x06\x81\x87\x02\xef\x04\x04\x85\x08"
  "\x31\x59\x38\x02\x26\x29\x26\x0d\x63\x6f\x70\x79\x2d\x70\x72\x6f"
  "\x67\x72\x61\x6d\x08\x63\x6f\x6d\x70\x69\x6c\x65\x29\x03\x2b\x03"
  "\x2f\x03\x15\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x71\x75"
  "\x6f\x74\x61\x74\x69\x6f\x6e\x2f\x04\x33\x05\x30\x03\x51\x04\x23"
  "\x04\x18\x73\x63\x6f\x64\x65\x2f\x6c\x61\x6d\x62\x64\x61\x2d\x63"
  "\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x33\x03\x4f\x03\x32\x04\x2e"
  "\x04\x31\x0d\x96\x05\x22\x81\x87\x02\x95\x05\x20\x81\x87\x02\x94"
  "\x05\x1e\x81\x91\x02\x93\x05\x1c\x81\x91\x02\x92\x05\x1a\x81\x87"
  "\x02\x91\x05\x18\x81\x87\x02\x90\x05\x16\x81\x83\x02\x8f\x05\x14"
  "\x81\x8f\x02\x8e\x05\x12\x81\x87\x02\x8d\x05\x10\x81\x89\x02\x8c"
  "\x05\x0e\x81\x85\x02\x8b\x05\x0c\x81\x8b\x02\x8a\x05\x0a\x81\x8b"
  "\x02\x89\x05\x08\x81\x83\x02\x88\x05\x06\x81\x8b\x02\x87\x05\x04"
  "\x86\x0a\x21\x43\x4f\x02\x27\x12\x2a\x6d\x61\x6b\x65\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x0e\x0d\x19\x26\x15\x23\x5b"
  "\x75\x6e\x6e\x61\x6d\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x5d\x29\x27\x16\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x61\x76"
  "\x6f\x69\x64\x2d\x73\x63\x6f\x64\x65\x3f\x2a\x28\x04\x04\x33\x07"
  "\x3b\x05\x3b\x03\x28\x09\x2d\x05\x15\x06\x0f\x05\x30\x05\x47\x04"
  "\x46\x02\x16\x03\x2b\x03\x50\x04\x23\x03\x2f\x03\x1f\x63\x61\x6e"
  "\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x6f\x70\x74\x69\x6d\x69"
  "\x7a\x61\x74\x69\x6f\x6e\x2d\x6c\x6f\x77\x3f\x50\x05\x17\x03\x51"
  "\x06\x16\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x65\x76\x61"
  "\x6c\x75\x61\x74\x69\x6f\x6e\x51\x14\xc4\x05\x5e\x81\x8b\x02\xc3"
  "\x05\x5c\x81\x87\x02\xc2\x05\x5a\x81\x85\x02\xc1\x05\x58\x81\x87"
  "\x02\xc0\x05\x56\x81\x87\x02\xbf\x05\x54\x81\x87\x02\xbe\x05\x52"
  "\x81\x85\x02\xbd\x05\x50\x81\x85\x02\xbc\x05\x4e\x81\x89\x02\xbb"
  "\x05\x4c\x81\x85\x02\xba\x05\x4a\x81\x87\x02\xb9\x05\x48\x81\x83"
  "\x02\xb8\x05\x46\x81\x8b\x02\xb7\x05\x44\x81\x85\x02\xb6\x05\x42"
  "\x81\x8b\x02\xb5\x05\x40\x81\x83\x02\xb4\x05\x3e\x81\x89\x02\xb3"
  "\x05\x3c\x81\x87\x02\xb2\x05\x3a\x81\xa3\x02\xb1\x05\x38\x81\xa1"
  "\x02\xb0\x05\x36\x81\x83\x02\xaf\x05\x34\x81\x9f\x02\xae\x05\x32"
  "\x81\x9d\x02\xad\x05\x30\x81\x85\x02\xac\x05\x2e\x81\x83\x02\xab"
  "\x05\x2c\x81\x93\x02\xaa\x05\x2a\x81\x93\x02\xa9\x05\x28\x81\x93"
  "\x02\xa8\x05\x26\x81\x9b\x02\xa7\x05\x24\x81\x99\x02\xa6\x05\x22"
  "\x81\x93\x02\xa5\x05\x20\x81\x89\x02\xa4\x05\x1e\x81\x9d\x02\xa3"
  "\x05\x1c\x81\x9b\x02\xa2\x05\x1a\x81\x85\x02\xa1\x05\x18\x81\x83"
  "\x02\xa0\x05\x16\x81\x99\x02\x9f\x05\x14\x81\x93\x02\x9e\x05\x12"
  "\x81\x95\x02\x9d\x05\x10\x81\x95\x02\x9c\x05\x0e\x81\x9d\x02\x9b"
  "\x05\x0c\x81\x93\x02\x9a\x05\x0a\x81\x93\x02\x99\x05\x08\x81\x91"
  "\x02\x98\x05\x06\x81\x91\x02\x97\x05\x04\x85\x08\x5d\x9b\x01\x47"
  "\x27\x46\x46\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x09\x73"
  "\x65\x71\x75\x65\x6e\x63\x65\x10\x65\x78\x74\x65\x6e\x64\x65\x64"
  "\x2d\x6c\x61\x6d\x62\x64\x61\x06\x6c\x65\x78\x70\x72\x07\x6c\x61"
  "\x6d\x62\x64\x61\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x10\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x09\x76\x61\x72\x69\x61\x62\x6c\x65\x0c\x64\x69\x73\x6a\x75\x6e"
  "\x63\x74\x69\x6f\x6e\x06\x64\x65\x6c\x61\x79\x0b\x64\x65\x66\x69"
  "\x6e\x69\x74\x69\x6f\x6e\x0c\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x61\x6c\x08\x63\x6f\x6d\x6d\x65\x6e\x74\x0b\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74"
  "\x21\x07\x61\x63\x63\x65\x73\x73\x15\x40\x47\x04\x51\x4f\x04\x15"
  "\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x63\x6f\x6d"
  "\x6d\x65\x6e\x74\x51\x38\x04\x44\x3f\x04\x54\x39\x04\x1a\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73"
  "\x65\x74\x2d\x74\x79\x70\x65\x33\x10\x0d\x69\x73\x2d\x6f\x70\x65"
  "\x72\x61\x74\x6f\x72\x3f\x19\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c"
  "\x69\x7a\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x54"
  "\x42\x04\x3e\x04\x43\x45\x04\x4e\x52\x08\x3a\x4c\x0a\x4b\x4a\x04"
  "\x16\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x73\x65"
  "\x71\x75\x65\x6e\x63\x65\x52\x48\x04\x14\x63\x61\x6e\x6f\x6e\x69"
  "\x63\x61\x6c\x69\x7a\x65\x2f\x6c\x61\x6d\x62\x64\x61\x4f\x41\x04"
  "\x1d\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x74\x68"
  "\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x4e\x3d\x04"
  "\x18\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x64\x65"
  "\x66\x69\x6e\x69\x74\x69\x6f\x6e\x4c\x3c\x04\x18\x63\x61\x6e\x6f"
  "\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x4b\x37\x04\x16\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c"
  "\x69\x7a\x65\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x4a\x36\x04\x24"
  "\x35\x04\x17\x34\x04\x2a\x0f\x23\x5b\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x5d\x53\x25\x04\x16\x63\x61\x6e\x6f\x6e\x69\x63"
  "\x61\x6c\x69\x7a\x65\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x53\x15"
  "\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x74\x65\x72"
  "\x6e\x61\x72\x79\x20\x04\x1d\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c"
  "\x69\x7a\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x65\x2d\x74\x65\x72\x6e"
  "\x61\x72\x79\x1f\x04\x14\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69"
  "\x7a\x65\x2f\x62\x69\x6e\x61\x72\x79\x1e\x04\x1c\x63\x61\x6e\x6f"
  "\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x65"
  "\x2d\x62\x69\x6e\x61\x72\x79\x1d\x04\x13\x63\x61\x6e\x6f\x6e\x69"
  "\x63\x61\x6c\x69\x7a\x65\x2f\x75\x6e\x61\x72\x79\x1c\x04\x1b\x63"
  "\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x63\x6f\x6d\x62"
  "\x69\x6e\x65\x2d\x75\x6e\x61\x72\x79\x1b\x04\x15\x63\x61\x6e\x6f"
  "\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x74\x72\x69\x76\x69\x61\x6c"
  "\x48\x1a\x04\x50\x13\x04\x17\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c"
  "\x69\x7a\x65\x2f\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x18\x04\x12"
  "\x11\x0b\x08\x63\x61\x6e\x6f\x75\x74\x3f\x0c\x04\x14\x73\x65\x74"
  "\x2d\x63\x61\x6e\x6f\x75\x74\x2d\x73\x70\x6c\x69\x63\x65\x3f\x21"
  "\x04\x13\x73\x65\x74\x2d\x63\x61\x6e\x6f\x75\x74\x2d\x6e\x65\x65"
  "\x64\x73\x3f\x21\x0a\x04\x12\x73\x65\x74\x2d\x63\x61\x6e\x6f\x75"
  "\x74\x2d\x73\x61\x66\x65\x3f\x21\x09\x04\x11\x73\x65\x74\x2d\x63"
  "\x61\x6e\x6f\x75\x74\x2d\x65\x78\x70\x72\x21\x04\x0f\x63\x61\x6e"
  "\x6f\x75\x74\x2d\x73\x70\x6c\x69\x63\x65\x3f\x04\x0e\x63\x61\x6e"
  "\x6f\x75\x74\x2d\x6e\x65\x65\x64\x73\x3f\x04\x10\x04\x0f\x4d\x04"
  "\x49\x0b\x72\x74\x64\x3a\x63\x61\x6e\x6f\x75\x74\x50\x07\x63\x61"
  "\x6e\x6f\x75\x74\x05\x65\x78\x70\x72\x06\x73\x61\x66\x65\x3f\x07"
  "\x6e\x65\x65\x64\x73\x3f\x08\x73\x70\x6c\x69\x63\x65\x3f\x06\x11"
  "\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65"
  "\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69"
  "\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x1f\x73\x63\x2d\x6d"
  "\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72"
  "\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x04\x50\x48\x53\x12\x73"
  "\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x61\x63\x63\x65\x73\x73"
  "\x18\x73\x63\x6f\x64\x65\x2f\x61\x63\x63\x65\x73\x73\x2d\x63\x6f"
  "\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x4b\x51\x17\x73\x63\x6f\x64\x65"
  "\x2f\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61"
  "\x6c\x1d\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x61\x6c\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x4c\x11"
  "\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x64\x65\x6c\x61\x79"
  "\x17\x73\x63\x6f\x64\x65\x2f\x64\x65\x6c\x61\x79\x2d\x63\x6f\x6d"
  "\x70\x6f\x6e\x65\x6e\x74\x73\x17\x73\x63\x6f\x64\x65\x2f\x6d\x61"
  "\x6b\x65\x2d\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x1d\x73"
  "\x63\x6f\x64\x65\x2f\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e"
  "\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x4a\x4e\x54\x4f\x52"
  "\x14\x02\x1a\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70"
  "\x65\x2f\x63\x6f\x64\x65\x2d\x6c\x69\x6d\x69\x74\x03\x0f\x6d\x69"
  "\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x04\x0c\x6d\x61"
  "\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x05\x15\x06\x0f\x06\xa6\x01"
  "\xce\x02\x80\x80\x04\xa5\x01\xcc\x02\x81\x81\x02\xa4\x01\xca\x02"
  "\x81\x81\x02\xa3\x01\xc8\x02\x81\x89\x02\xa2\x01\xc6\x02\x81\x89"
  "\x02\xa1\x01\xc4\x02\x81\x89\x02\xa0\x01\xc2\x02\x81\x8b\x02\x9f"
  "\x01\xc0\x02\x81\x89\x02\x9e\x01\xbe\x02\x81\x89\x02\x9d\x01\xbc"
  "\x02\x81\x8b\x02\x9c\x01\xba\x02\x81\x89\x02\x9b\x01\xb8\x02\x81"
  "\x89\x02\x9a\x01\xb6\x02\x81\x8b\x02\x99\x01\xb4\x02\x81\x89\x02"
  "\x98\x01\xb2\x02\x81\x89\x02\x97\x01\xb0\x02\x81\x8b\x02\x96\x01"
  "\xae\x02\x81\x8d\x02\x95\x01\xac\x02\x81\x8b\x02\x94\x01\xaa\x02"
  "\x81\x8b\x02\x93\x01\xa8\x02\x81\x8b\x02\x92\x01\xa6\x02\x81\x8b"
  "\x02\x91\x01\xa4\x02\x81\x87\x02\x90\x01\xa2\x02\x81\x89\x02\x8f"
  "\x01\xa0\x02\x81\x89\x02\x8e\x01\x9e\x02\x81\x8b\x02\x8d\x01\x9c"
  "\x02\x81\x89\x02\x8c\x01\x9a\x02\x81\x89\x02\x8b\x01\x98\x02\x81"
  "\x8b\x02\x8a\x01\x96\x02\x81\x8b\x02\x89\x01\x94\x02\x81\x89\x02"
  "\x88\x01\x92\x02\x81\x87\x02\x87\x01\x90\x02\x81\x89\x02\x86\x01"
  "\x8e\x02\x81\x89\x02\x85\x01\x8c\x02\x81\x8b\x02\x84\x01\x8a\x02"
  "\x81\x87\x02\x83\x01\x88\x02\x81\x89\x02\x82\x01\x86\x02\x81\x89"
  "\x02\x81\x01\x84\x02\x81\x87\x02\x80\x01\x82\x02\x81\x8f\x02\x7f"
  "\x80\x02\x81\x8f\x02\x7e\xfe\x01\x81\x8f\x02\x7d\xfc\x01\x81\x83"
  "\x02\x7c\xfa\x01\x81\x8d\x02\x7b\xf8\x01\x81\x8b\x02\x7a\xf6\x01"
  "\x81\x8b\x02\x79\xf4\x01\x81\x8b\x02\x78\xf2\x01\x81\x89\x02\x77"
  "\xf0\x01\x81\x89\x02\x76\xee\x01\x81\x8b\x02\x75\xec\x01\x81\x8d"
  "\x02\x74\xea\x01\x81\x89\x02\x73\xe8\x01\x81\x89\x02\x72\xe6\x01"
  "\x81\x8b\x02\x71\xe4\x01\x81\x87\x02\x70\xe2\x01\x81\x89\x02\x6f"
  "\xe0\x01\x81\x85\x02\x6e\xde\x01\x81\x85\x02\x6d\xdc\x01\x81\x8f"
  "\x02\x6c\xda\x01\x81\x8d\x02\x6b\xd8\x01\x81\x8b\x02\x6a\xd6\x01"
  "\x81\x89\x02\x69\xd4\x01\x81\x89\x02\x68\xd2\x01\x81\x89\x02\x67"
  "\xd0\x01\x81\x8b\x02\x66\xce\x01\x81\x89\x02\x65\xcc\x01\x81\x85"
  "\x02\x64\xca\x01\x81\x89\x02\x63\xc8\x01\x81\x8b\x02\x62\xc6\x01"
  "\x81\x89\x02\x61\xc4\x01\x81\x89\x02\x60\xc2\x01\x81\x8b\x02\x5f"
  "\xc0\x01\x81\x89\x02\x5e\xbe\x01\x81\x89\x02\x5d\xbc\x01\x81\x8b"
  "\x02\x5c\xba\x01\x81\x89\x02\x5b\xb8\x01\x81\x89\x02\x5a\xb6\x01"
  "\x81\x8b\x02\x59\xb4\x01\x81\x89\x02\x58\xb2\x01\x81\x8d\x02\x57"
  "\xb0\x01\x81\x8b\x02\x56\xae\x01\x81\x8b\x02\x55\xac\x01\x81\x8b"
  "\x02\x54\xaa\x01\x81\x8b\x02\x53\xa8\x01\x81\x87\x02\x52\xa6\x01"
  "\x81\x89\x02\x51\xa4\x01\x81\x89\x02\x50\xa2\x01\x81\x8b\x02\x4f"
  "\xa0\x01\x81\x89\x02\x4e\x9e\x01\x81\x89\x02\x4d\x9c\x01\x81\x8b"
  "\x02\x4c\x9a\x01\x81\x89\x02\x4b\x98\x01\x81\x8b\x02\x4a\x96\x01"
  "\x81\x89\x02\x49\x94\x01\x81\x87\x02\x48\x92\x01\x81\x8b\x02\x47"
  "\x90\x01\x81\x89\x02\x46\x8e\x01\x81\x89\x02\x45\x8c\x01\x81\x8b"
  "\x02\x44\x8a\x01\x81\x87\x02\x43\x88\x01\x81\x89\x02\x42\x86\x01"
  "\x81\x89\x02\x41\x84\x01\x81\x8b\x02\x40\x82\x01\x81\x87\x02\x3f"
  "\x80\x01\x81\x89\x02\x3e\x7e\x81\x89\x02\x3d\x7c\x81\x8b\x02\x3c"
  "\x7a\x81\x89\x02\x3b\x78\x81\x8b\x02\x3a\x76\x81\x8b\x02\x39\x74"
  "\x81\x89\x02\x38\x72\x81\x87\x02\x37\x70\x81\x89\x02\x36\x6e\x81"
  "\x83\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x83\x02\x33\x68\x81\x83"
  "\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02\x30\x62\x81\x87\x02"
  "\x2f\x60\x81\x85\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x83\x02\x2c"
  "\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x83\x02\x29\x54"
  "\x81\x83\x02\x28\x52\x81\x83\x02\x27\x50\x81\x83\x02\x26\x4e\x81"
  "\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x83"
  "\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02\x20\x42\x81\x83\x02"
  "\x1f\x40\x81\x83\x02\x1e\x3e\x81\x85\x02\x1d\x3c\x81\x83\x02\x1c"
  "\x3a\x81\x83\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x83\x02\x19\x34"
  "\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81"
  "\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x83"
  "\x02\x12\x26\x81\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02"
  "\x0f\x20\x81\x87\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c"
  "\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14"
  "\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x8b\x02\x06\x0e\x81"
  "\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x85"
  "\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\xcd\x02\xea\x03";

SCHEME_OBJECT *
canon_so_data_6ce487f0a79c0552 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_canon_so_data_6ce487f0a79c0552 [0]))), (sizeof (prog_canon_so_data_6ce487f0a79c0552)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_187]));
}

DECLARE_COMPILED_DATA_NS ("canon.so", canon_so_data_6ce487f0a79c0552)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("canon.so", "ffa70ac8531e5ac4")
