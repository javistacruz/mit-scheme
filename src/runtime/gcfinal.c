/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:32-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
gcfinal_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto gc_finalizer_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_finalizer_procedure_3)
DEFLABEL (gc_finalizer_procedure_0)
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
gcfinal_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto gc_finalizer_objectP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_finalizer_objectP_3)
DEFLABEL (gc_finalizer_objectP_0)
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
gcfinal_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto gc_finalizer_object_context_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_finalizer_object_context_3)
DEFLABEL (gc_finalizer_object_context_0)
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
gcfinal_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto gc_finalizer_set_object_contextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_finalizer_set_object_contextB_3)
DEFLABEL (gc_finalizer_set_object_contextB_0)
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
gcfinal_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto gc_finalizer_items_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_finalizer_items_3)
DEFLABEL (gc_finalizer_items_0)
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
#define ENVIRONMENT_LABEL_7_3 8
#define DEBUGGING_LABEL_7_2 7
#define OBJECT_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_gc_finalizer_itemsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_gc_finalizer_itemsB_3)
DEFLABEL (set_gc_finalizer_itemsB_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
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
#define ENVIRONMENT_LABEL_8_3 17
#define DEBUGGING_LABEL_8_2 16
#define OBJECT_8_3 15
#define OBJECT_8_2 14
#define OBJECT_8_1 13
#define OBJECT_8_0 12
#define FREE_REFERENCE_8_0 11
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto gc_finalizerP_4;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_finalizerP_10)
DEFLABEL (gc_finalizerP_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
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
  Rvl = (current_block [OBJECT_8_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_8_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 14
#define DEBUGGING_LABEL_9_2 13
#define OBJECT_9_1 12
#define OBJECT_9_0 11
#define EXECUTE_CACHE_9_7 7
#define EXECUTE_CACHE_9_6 9
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto guarantee_gc_finalizer_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_gc_finalizer_4)
DEFLABEL (guarantee_gc_finalizer_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_9_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_7 5
#define LABEL_10_5 7
#define LABEL_10_11 9
#define LABEL_10_9 11
#define LABEL_10_13 13
#define LABEL_10_16 15
#define LABEL_10_15 17
#define LABEL_10_18 19
#define ENVIRONMENT_LABEL_10_3 42
#define DEBUGGING_LABEL_10_2 41
#define OBJECT_10_3 40
#define OBJECT_10_2 39
#define OBJECT_10_1 38
#define OBJECT_10_0 37
#define EXECUTE_CACHE_10_17 21
#define EXECUTE_CACHE_10_14 23
#define EXECUTE_CACHE_10_12 25
#define EXECUTE_CACHE_10_10 27
#define EXECUTE_CACHE_10_8 29
#define EXECUTE_CACHE_10_6 31
#define FREE_REFERENCE_10_0 34
#define FREE_ASSIGNMENT_10_0 36
#define FREE_REFERENCES_LABEL_10_0 20
#define NUMBER_OF_LINKER_SECTIONS_10_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_10_4);
      goto make_gc_finalizer_7;

    case 1:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_10_16);
      goto label_9;

    case 7:
      current_block = (Rpc - LABEL_10_15);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_10_18);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_gc_finalizer_12)
DEFLABEL (make_gc_finalizer_7)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_13)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_18])), (Wrd6.pObj), Rvl);

DEFLABEL (label_10)
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_16])), (Wrd10.pObj));

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_11);
  goto label_18;

DEFLABEL (label_21)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_7);
  goto label_20;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_8 7
#define LABEL_11_9 9
#define LABEL_11_7 11
#define LABEL_11_11 13
#define LABEL_11_12 15
#define TAG_11_13 6
#define LABEL_11_16 17
#define LABEL_11_17 19
#define LABEL_11_15 21
#define LABEL_11_19 23
#define LABEL_11_20 25
#define ENVIRONMENT_LABEL_11_3 46
#define DEBUGGING_LABEL_11_2 45
#define OBJECT_11_7 44
#define OBJECT_11_6 43
#define OBJECT_11_5 42
#define OBJECT_11_4 41
#define OBJECT_11_3 40
#define OBJECT_11_2 39
#define OBJECT_11_1 38
#define OBJECT_11_0 37
#define EXECUTE_CACHE_11_21 27
#define EXECUTE_CACHE_11_18 29
#define EXECUTE_CACHE_11_14 31
#define EXECUTE_CACHE_11_10 33
#define EXECUTE_CACHE_11_6 35
#define FREE_REFERENCES_LABEL_11_0 26
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_11_4);
      goto add_to_gc_finalizerB_13;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_8);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto lambda_20;

    case 7:
      current_block = (Rpc - LABEL_11_16);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_11_17);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_11_19);
      goto label_17;

    case 11:
      current_block = (Rpc - LABEL_11_20);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_to_gc_finalizerB_19)
DEFLABEL (add_to_gc_finalizerB_13)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_24;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_24;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_23)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_12])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_11);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_9);
  goto label_21;

DEFLABEL (label_24)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_11_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_11_12);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd26.Obj) = ((Wrd9.pObj) [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_31;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_31;
  (Wrd15.Obj) = ((Wrd21.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_30)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [3]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_17);

DEFLABEL (label_29)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_28;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_28;
  (Wrd14.Obj) = ((Wrd20.pObj) [6]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_27)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11_5]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 62)
    goto label_26;

DEFLABEL (label_25)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_7]), 3);

DEFLABEL (label_26)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd21.Lng))))
    goto label_25;
  ((Wrd19.pObj) [6]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_11_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [3]);
  (Wrd30.Obj) = (current_block [OBJECT_11_5]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [3]);
  (Wrd31.Obj) = (current_block [OBJECT_11_4]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define LABEL_12_10 13
#define LABEL_12_12 15
#define LABEL_12_11 17
#define LABEL_12_14 19
#define TAG_12_15 8
#define LABEL_12_18 21
#define LABEL_12_17 23
#define LABEL_12_20 25
#define LABEL_12_21 27
#define LABEL_12_22 29
#define LABEL_12_24 31
#define LABEL_12_23 33
#define LABEL_12_26 35
#define LABEL_12_27 37
#define LABEL_12_28 39
#define LABEL_12_30 41
#define LABEL_12_29 43
#define ENVIRONMENT_LABEL_12_3 68
#define DEBUGGING_LABEL_12_2 67
#define OBJECT_12_11 66
#define OBJECT_12_10 65
#define OBJECT_12_9 64
#define OBJECT_12_8 63
#define OBJECT_12_7 62
#define OBJECT_12_6 61
#define OBJECT_12_5 60
#define OBJECT_12_4 59
#define OBJECT_12_3 58
#define OBJECT_12_2 57
#define OBJECT_12_1 56
#define OBJECT_12_0 55
#define EXECUTE_CACHE_12_25 45
#define EXECUTE_CACHE_12_19 47
#define EXECUTE_CACHE_12_16 49
#define EXECUTE_CACHE_12_13 51
#define EXECUTE_CACHE_12_6 53
#define FREE_REFERENCES_LABEL_12_0 44
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd54;
  machine_word Wrd66;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
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
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_12_4);
      goto remove_from_gc_finalizerB_26;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_12_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_12_14);
      goto lambda_40;

    case 9:
      current_block = (Rpc - LABEL_12_18);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_12_17);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_12_20);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_12_21);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_12_22);
      goto loop_21;

    case 14:
      current_block = (Rpc - LABEL_12_24);
      goto label_33;

    case 15:
      current_block = (Rpc - LABEL_12_23);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_12_26);
      goto label_35;

    case 17:
      current_block = (Rpc - LABEL_12_27);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_12_28);
      goto label_36;

    case 19:
      current_block = (Rpc - LABEL_12_30);
      goto label_34;

    case 20:
      current_block = (Rpc - LABEL_12_29);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_from_gc_finalizerB_39)
DEFLABEL (remove_from_gc_finalizerB_26)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_51;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_51;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_50)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_49;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_49;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_48)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_47;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_47;
  (Wrd39.Obj) = ((Wrd43.pObj) [3]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_46)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_45;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd61.Lng))))
    goto label_45;
  (Wrd55.Obj) = ((Wrd59.pObj) [2]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_44)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd73.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;

DEFLABEL (label_42)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_14])));
  Rhp += 5;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd18 = Wrd9;
  (Wrd19.Obj) = (Rsp [5]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [5]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [6]) = (Wrd11.Obj);
  (Rsp [5]) = (Wrd8.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (label_43)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_12);
  goto label_42;

DEFLABEL (label_45)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.Obj) = (current_block [OBJECT_12_5]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_12_4]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_12_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_12_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_12_14);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_17);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_54;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12_18);

DEFLABEL (label_54)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_53;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_53;
  (Wrd12.Obj) = ((Wrd18.pObj) [6]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_52)
  goto loop_21;

DEFLABEL (label_53)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Wrd28.Obj) = (current_block [OBJECT_12_7]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_20]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (loop_41)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_12_22);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_66;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_12_21);

DEFLABEL (label_66)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_65;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_25]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_12_23);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if ((Wrd8.Obj) == Rvl)
    goto label_57;
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_56;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_55)
  (Rsp [0]) = (Wrd10.Obj);
  goto loop_21;

DEFLABEL (label_56)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_30]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_9]), 1);

DEFLABEL (label_34)
  (Wrd10.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_57)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_63;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_62)
  (Wrd28.Obj) = (Rsp [2]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_59;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd42.Obj) = (Rsp [0]);
  ((Wrd41.pObj) [1]) = (Wrd42.Obj);

DEFLABEL (label_58)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_29]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd34.Obj) = (Rsp [6]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = ((Wrd35.pObj) [4]);
  (* (--Rsp)) = (Wrd39.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_12_29);
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [6]);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [4]) = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_59)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_28]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_11]), 2);

DEFLABEL (label_36)
  goto label_58;

DEFLABEL (label_60)
  (Wrd63.Obj) = (Rsp [4]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [3]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_61;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd62.Lng))))
    goto label_61;
  (Wrd54.Obj) = (Rsp [0]);
  ((Wrd60.pObj) [6]) = (Wrd54.Obj);
  goto label_58;

DEFLABEL (label_61)
  (Wrd68.Obj) = (Rsp [4]);
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd67.Obj) = ((Wrd69.pObj) [3]);
  (Wrd70.Obj) = (current_block [OBJECT_12_7]);
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_10]), 3);

DEFLABEL (label_37)
  goto label_58;

DEFLABEL (label_63)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_26]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_9]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_24]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_8]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_64;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_8 9
#define LABEL_13_9 11
#define LABEL_13_10 13
#define TAG_13_11 5
#define LABEL_13_13 15
#define LABEL_13_14 17
#define LABEL_13_15 19
#define LABEL_13_16 21
#define LABEL_13_17 23
#define LABEL_13_21 25
#define LABEL_13_22 27
#define LABEL_13_18 29
#define LABEL_13_19 31
#define ENVIRONMENT_LABEL_13_3 50
#define DEBUGGING_LABEL_13_2 49
#define OBJECT_13_9 48
#define OBJECT_13_8 47
#define OBJECT_13_7 46
#define OBJECT_13_6 45
#define OBJECT_13_5 44
#define OBJECT_13_4 43
#define OBJECT_13_3 42
#define OBJECT_13_2 41
#define OBJECT_13_1 40
#define OBJECT_13_0 39
#define EXECUTE_CACHE_13_20 33
#define EXECUTE_CACHE_13_12 35
#define EXECUTE_CACHE_13_6 37
#define FREE_REFERENCES_LABEL_13_0 32
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd54;
  machine_word Wrd55;
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
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_13_4);
      goto remove_all_from_gc_finalizerB_22;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto lambda_33;

    case 6:
      current_block = (Rpc - LABEL_13_13);
      goto loop_18;

    case 7:
      current_block = (Rpc - LABEL_13_14);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_13_15);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_13_16);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_13_17);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_13_21);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_13_22);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_13_18);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_13_19);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_all_from_gc_finalizerB_32)
DEFLABEL (remove_all_from_gc_finalizerB_22)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_40;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_39)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_38;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_38;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_37)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_36;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_36;
  (Wrd39.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_35)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd55.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_10])));
  Rhp += 4;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd55.pObj)));
  Wrd62 = Wrd55;
  (Wrd63.Obj) = (Rsp [3]);
  ((Wrd62.pObj) [2]) = (Wrd63.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  ((Wrd62.pObj) [3]) = (Wrd61.Obj);
  (Wrd59.Obj) = (Rsp [1]);
  ((Wrd62.pObj) [4]) = (Wrd59.Obj);
  (Wrd57.Obj) = (Rsp [0]);
  ((Wrd62.pObj) [5]) = (Wrd57.Obj);
  (Rsp [3]) = (Wrd54.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (label_36)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_13_4]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_13_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_13_10);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  goto loop_18;

DEFLABEL (loop_34)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_13_13);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_53;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_53;
  (Wrd9.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_52)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 1)
    goto label_41;
  Rvl = (current_block [OBJECT_13_9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  if (! ((Wrd30.uLng) == 1))
    goto label_51;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_50)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_49;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_48)
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [2]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 62))
    goto label_47;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd69.Lng))))
    goto label_47;
  ((Wrd67.pObj) [6]) = (Wrd42.Obj);

DEFLABEL (label_46)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [6]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13_22);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd8.Obj) = (Rsp [1]);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_43;

DEFLABEL (label_42)
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd18.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [5]);
  (Rsp [0]) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_43)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_13_21);
  goto label_42;

DEFLABEL (label_44)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_45)
  Rsp = (& (Rsp [2]));
  goto loop_18;

DEFLABEL (label_47)
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd74.Obj) = ((Wrd76.pObj) [2]);
  (Wrd77.Obj) = (current_block [OBJECT_13_5]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_8]), 3);

DEFLABEL (label_30)
  goto label_46;

DEFLABEL (label_49)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_7]), 1);

DEFLABEL (label_29)
  (Wrd42.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_6]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_13_5]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13_18);
  goto label_45;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define TAG_14_8 2
#define LABEL_14_10 9
#define LABEL_14_11 11
#define LABEL_14_13 13
#define LABEL_14_15 15
#define LABEL_14_12 17
#define LABEL_14_16 19
#define ENVIRONMENT_LABEL_14_3 33
#define DEBUGGING_LABEL_14_2 32
#define OBJECT_14_4 31
#define OBJECT_14_3 30
#define OBJECT_14_2 29
#define OBJECT_14_1 28
#define OBJECT_14_0 27
#define EXECUTE_CACHE_14_14 21
#define EXECUTE_CACHE_14_9 23
#define EXECUTE_CACHE_14_6 25
#define FREE_REFERENCES_LABEL_14_0 20
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_14_4);
      goto search_gc_finalizer_12;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_19;

    case 3:
      current_block = (Rpc - LABEL_14_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_14_11);
      goto loop_9;

    case 5:
      current_block = (Rpc - LABEL_14_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_14_15);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_14_12);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_14_16);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (search_gc_finalizer_18)
DEFLABEL (search_gc_finalizer_12)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_14_7);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_22;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_22;
  (Wrd9.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_21)
  goto loop_9;

DEFLABEL (label_22)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_14_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_14_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_28;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_12);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_26;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_26)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 1);

DEFLABEL (label_16)
  (Wrd14.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define TAG_15_8 2
#define LABEL_15_10 9
#define LABEL_15_11 11
#define LABEL_15_13 13
#define LABEL_15_12 15
#define LABEL_15_16 17
#define ENVIRONMENT_LABEL_15_3 34
#define DEBUGGING_LABEL_15_2 33
#define OBJECT_15_5 32
#define OBJECT_15_4 31
#define OBJECT_15_3 30
#define OBJECT_15_2 29
#define OBJECT_15_1 28
#define OBJECT_15_0 27
#define EXECUTE_CACHE_15_15 19
#define EXECUTE_CACHE_15_14 21
#define EXECUTE_CACHE_15_9 23
#define EXECUTE_CACHE_15_6 25
#define FREE_REFERENCES_LABEL_15_0 18
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_15_4);
      goto gc_finalizer_elements_12;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto lambda_19;

    case 3:
      current_block = (Rpc - LABEL_15_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_15_11);
      goto loop_9;

    case 5:
      current_block = (Rpc - LABEL_15_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_15_16);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_finalizer_elements_18)
DEFLABEL (gc_finalizer_elements_12)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_15_7);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_22;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_22;
  (Wrd9.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_21)
  (Wrd29.Obj) = (current_block [OBJECT_15_3]);
  (Rsp [1]) = (Wrd29.Obj);
  goto loop_9;

DEFLABEL (label_22)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_15_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_15_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_23;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (label_23)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_30;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_12);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd12.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  goto label_24;

DEFLABEL (label_25)
  (Wrd8.Obj) = (Rsp [2]);

DEFLABEL (label_24)
DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd13.Obj);
  goto loop_9;

DEFLABEL (label_27)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_16)
  (Wrd13.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_9 9
#define TAG_16_10 3
#define LABEL_16_11 11
#define TAG_16_12 4
#define LABEL_16_13 13
#define LABEL_16_15 15
#define LABEL_16_20 17
#define LABEL_16_16 19
#define LABEL_16_18 21
#define LABEL_16_23 23
#define LABEL_16_21 25
#define LABEL_16_22 27
#define LABEL_16_29 29
#define LABEL_16_24 31
#define LABEL_16_25 33
#define TAG_16_26 15
#define LABEL_16_30 35
#define LABEL_16_32 37
#define ENVIRONMENT_LABEL_16_3 62
#define DEBUGGING_LABEL_16_2 61
#define OBJECT_16_5 60
#define OBJECT_16_4 59
#define OBJECT_16_3 58
#define OBJECT_16_2 57
#define OBJECT_16_1 56
#define OBJECT_16_0 55
#define EXECUTE_CACHE_16_31 39
#define EXECUTE_CACHE_16_28 41
#define EXECUTE_CACHE_16_27 43
#define EXECUTE_CACHE_16_19 45
#define EXECUTE_CACHE_16_17 47
#define EXECUTE_CACHE_16_14 49
#define EXECUTE_CACHE_16_8 51
#define EXECUTE_CACHE_16_6 53
#define FREE_REFERENCES_LABEL_16_0 38
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_16_4);
      goto make_gc_finalized_object_21;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto lambda_27;

    case 4:
      current_block = (Rpc - LABEL_16_11);
      goto lambda_28;

    case 5:
      current_block = (Rpc - LABEL_16_13);
      goto lambda_2;

    case 6:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_16_20);
      goto continuation_15;

    case 8:
      current_block = (Rpc - LABEL_16_16);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_16_18);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_16_23);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_16_21);
      goto continuation_17;

    case 12:
      current_block = (Rpc - LABEL_16_22);
      goto continuation_16;

    case 13:
      current_block = (Rpc - LABEL_16_29);
      goto label_23;

    case 14:
      current_block = (Rpc - LABEL_16_24);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_16_25);
      goto lambda_30;

    case 16:
      current_block = (Rpc - LABEL_16_30);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_16_32);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_gc_finalized_object_26)
DEFLABEL (make_gc_finalized_object_21)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_9])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_11])));
  Rhp += 2;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd21 = Wrd18;
  ((Wrd21.pObj) [2]) = (Wrd11.Obj);
  ((Wrd21.pObj) [3]) = Rvl;
  (Rsp [3]) = (Wrd17.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_14]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_16_9);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_23);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_24]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_25])));
  Rhp += 3;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd17 = Wrd10;
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd16.Obj) = ((Wrd19.pObj) [5]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  ((Wrd17.pObj) [4]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_27]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_24);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_16_11);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_17]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_31)
  Rvl = (current_block [OBJECT_16_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_16_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_22]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16_22);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_34;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_34;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_33)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_16_21);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_28]));

DEFLABEL (label_34)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_16_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_29]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (lambda_29)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_16_13);
  Rvl = (current_block [OBJECT_16_1]);
  goto pop_return;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_16_25);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_31]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_30);
  (Wrd5.Obj) = (current_block [OBJECT_16_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_38;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd21.Lng))))
    goto label_38;
  (Wrd9.Obj) = ((Wrd19.pObj) [6]);

DEFLABEL (label_37)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [3]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Rsp [2]) = (Wrd33.Obj);
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 62)
    goto label_36;

DEFLABEL (label_35)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 3);

DEFLABEL (label_36)
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd49.Lng))))
    goto label_35;
  ((Wrd47.pObj) [6]) = (Wrd33.Obj);
  Rvl = (current_block [OBJECT_16_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_16_4]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_32]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 2);

DEFLABEL (label_24)
  (Wrd9.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define ENVIRONMENT_LABEL_17_3 18
#define DEBUGGING_LABEL_17_2 17
#define OBJECT_17_3 16
#define OBJECT_17_2 15
#define OBJECT_17_1 14
#define OBJECT_17_0 13
#define EXECUTE_CACHE_17_8 9
#define EXECUTE_CACHE_17_6 11
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_17_4);
      goto reset_gc_finalizers_2;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_gc_finalizers_5)
DEFLABEL (reset_gc_finalizers_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_17_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_17_7);
  (Wrd5.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_17_1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_3]), 3);

DEFLABEL (label_9)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_8;
  ((Wrd16.pObj) [6]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_17_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define LABEL_18_11 13
#define LABEL_18_10 15
#define LABEL_18_13 17
#define LABEL_18_15 19
#define LABEL_18_17 21
#define LABEL_18_14 23
#define LABEL_18_18 25
#define LABEL_18_19 27
#define LABEL_18_20 29
#define ENVIRONMENT_LABEL_18_3 46
#define DEBUGGING_LABEL_18_2 45
#define OBJECT_18_7 44
#define OBJECT_18_6 43
#define OBJECT_18_5 42
#define OBJECT_18_4 41
#define OBJECT_18_3 40
#define OBJECT_18_2 39
#define OBJECT_18_1 38
#define OBJECT_18_0 37
#define EXECUTE_CACHE_18_16 31
#define EXECUTE_CACHE_18_12 33
#define EXECUTE_CACHE_18_6 35
#define FREE_REFERENCES_LABEL_18_0 30
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_18_4);
      goto run_gc_finalizers_17;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto loop_13;

    case 5:
      current_block = (Rpc - LABEL_18_11);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_18_13);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_18_15);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_18_17);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_18_14);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_18_18);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_18_19);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_18_20);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_gc_finalizers_28)
DEFLABEL (run_gc_finalizers_17)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (lambda_29)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_18_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_34;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_33)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_32;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd30.Lng))))
    goto label_32;
  (Wrd24.Obj) = ((Wrd28.pObj) [6]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_31)
  goto loop_13;

DEFLABEL (label_32)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (current_block [OBJECT_18_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_18_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (loop_30)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_18_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_35;
  Rvl = (current_block [OBJECT_18_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_48;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_18_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_37;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd8.Obj);
  goto loop_13;

DEFLABEL (label_37)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_5]), 1);

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_46;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_45)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_44;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_40;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [1]) = (Wrd14.Obj);

DEFLABEL (label_39)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_18_20);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_13;

DEFLABEL (label_40)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_7]), 2);

DEFLABEL (label_25)
  goto label_39;

DEFLABEL (label_41)
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_42;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd30.Lng))))
    goto label_42;
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [6]) = (Wrd24.Obj);
  goto label_39;

DEFLABEL (label_42)
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.Obj) = (current_block [OBJECT_18_2]);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_6]), 3);

DEFLABEL (label_26)
  goto label_39;

DEFLABEL (label_44)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_5]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define LABEL_19_8 11
#define LABEL_19_12 13
#define LABEL_19_14 15
#define LABEL_19_10 17
#define LABEL_19_15 19
#define LABEL_19_13 21
#define ENVIRONMENT_LABEL_19_3 37
#define DEBUGGING_LABEL_19_2 36
#define OBJECT_19_2 35
#define OBJECT_19_1 34
#define OBJECT_19_0 33
#define EXECUTE_CACHE_19_16 23
#define EXECUTE_CACHE_19_11 25
#define EXECUTE_CACHE_19_9 27
#define FREE_REFERENCE_19_0 30
#define FREE_ASSIGNMENT_19_0 32
#define FREE_REFERENCES_LABEL_19_0 22
#define NUMBER_OF_LINKER_SECTIONS_19_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_19_4);
      goto walk_gc_finalizers_list_11;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_19_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_19_10);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_19_15);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_gc_finalizers_list_17)
DEFLABEL (walk_gc_finalizers_list_11)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_20;
  Wrd6 = Wrd10;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_9;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd7.pObj));

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_19;

DEFLABEL (loop_18)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_19_6);
  (Wrd15.Obj) = (current_block [OBJECT_19_0]);
  (Wrd18.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 55L) < ((unsigned long) (Wrd18.Lng))))
    goto label_28;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_22;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_19_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_12);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19_13);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_23)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_10);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_14);

DEFLABEL (label_24)
  (Wrd25.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_25)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_0]));
  (Wrd21.Obj) = ((Wrd13.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd13.pObj) [0]) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  if ((Wrd21.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_15])), (Wrd13.pObj), Rvl);

DEFLABEL (label_15)
  goto label_24;

DEFLABEL (label_28)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define ENVIRONMENT_LABEL_20_3 17
#define DEBUGGING_LABEL_20_2 16
#define OBJECT_20_0 15
#define EXECUTE_CACHE_20_7 9
#define FREE_REFERENCE_20_0 12
#define FREE_ASSIGNMENT_20_0 14
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_20_4);
      goto initialize_packageB_0;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_5)
DEFLABEL (initialize_packageB_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_0]));
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_8)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_7;
  Wrd17 = Wrd21;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_6])), (Wrd18.pObj));

DEFLABEL (label_3)
  (Wrd17.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_10)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define ENVIRONMENT_LABEL_21_3 15
#define DEBUGGING_LABEL_21_2 14
#define EXECUTE_CACHE_21_7 9
#define FREE_REFERENCE_21_1 12
#define FREE_REFERENCE_21_0 13
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcfinal_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_21_4);
      goto initialize_eventsB_0;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_eventsB_5)
DEFLABEL (initialize_eventsB_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_7;
  Wrd11 = Wrd15;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
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
#define ENVIRONMENT_LABEL_3 52
#define DEBUGGING_LABEL_2 51
#define PURIFICATION_ROOT 50
#define OBJECT_12 49
#define OBJECT_11 48
#define OBJECT_10 47
#define OBJECT_9 46
#define OBJECT_8 45
#define OBJECT_7 44
#define OBJECT_6 43
#define OBJECT_5 42
#define OBJECT_4 41
#define OBJECT_3 40
#define OBJECT_2 39
#define OBJECT_1 38
#define OBJECT_0 37
#define FREE_REFERENCE_0 29
#define GLOBAL_EXECUTE_CACHE_12 31
#define GLOBAL_EXECUTE_CACHE_10 33
#define GLOBAL_EXECUTE_CACHE_6 35
#define FREE_REFERENCES_LABEL_0 28
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
gcfinal_so_71ef6811f640ad9d (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto Z__make_gc_finalizer_20;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto expression_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_16)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_19])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_23)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_22)
  {
    static const short sections [] =
      {
	0,
	2,
	3,
	3,
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
	1,
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
    if (counter > 21)
      goto label_21;
    blocks = (current_block [OBJECT_12]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_18])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_21)
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
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

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
    goto label_27;
  Wrd11 = Wrd15;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
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

DEFLABEL (continuation_11)
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

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_25;
  Wrd11 = Wrd15;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_10]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_18)
  (Wrd11.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_26;

DEFLABEL (Z__make_gc_finalizer_20)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (Z__make_gc_finalizer_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-7]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_gcfinal_so_71ef6811f640ad9d [21] =
  {
    { "gcfinal_so_code_1", 1, gcfinal_so_code_1 },
    { "gcfinal_so_code_2", 1, gcfinal_so_code_2 },
    { "gcfinal_so_code_3", 1, gcfinal_so_code_3 },
    { "gcfinal_so_code_4", 1, gcfinal_so_code_4 },
    { "gcfinal_so_code_5", 1, gcfinal_so_code_5 },
    { "gcfinal_so_code_6", 1, gcfinal_so_code_6 },
    { "gcfinal_so_code_7", 1, gcfinal_so_code_7 },
    { "gcfinal_so_code_8", 4, gcfinal_so_code_8 },
    { "gcfinal_so_code_9", 2, gcfinal_so_code_9 },
    { "gcfinal_so_code_10", 9, gcfinal_so_code_10 },
    { "gcfinal_so_code_11", 12, gcfinal_so_code_11 },
    { "gcfinal_so_code_12", 21, gcfinal_so_code_12 },
    { "gcfinal_so_code_13", 15, gcfinal_so_code_13 },
    { "gcfinal_so_code_14", 9, gcfinal_so_code_14 },
    { "gcfinal_so_code_15", 8, gcfinal_so_code_15 },
    { "gcfinal_so_code_16", 18, gcfinal_so_code_16 },
    { "gcfinal_so_code_17", 3, gcfinal_so_code_17 },
    { "gcfinal_so_code_18", 14, gcfinal_so_code_18 },
    { "gcfinal_so_code_19", 10, gcfinal_so_code_19 },
    { "gcfinal_so_code_20", 3, gcfinal_so_code_20 },
    { "gcfinal_so_code_21", 3, gcfinal_so_code_21 }
  };

int
decl_gcfinal_so_71ef6811f640ad9d (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_gcfinal_so_71ef6811f640ad9d);
  return (0);
}

DECLARE_COMPILED_CODE ("gcfinal.so", 13, decl_gcfinal_so_71ef6811f640ad9d, gcfinal_so_71ef6811f640ad9d)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_gcfinal_so_data_71ef6811f640ad9d [3005] =
  "\x53\x29\xa9\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x22\x29\x21"
  "\x9d\x2b\xb9\x1d\xb0\x82\x88\xc2\xba\x81\x22\x29\x21\x9e\x2b\xbb"
  "\x1d\xb0\x83\x88\xb2\x82\x22\x29\x21\x9e\x2b\xbc\x1d\xb0\x84\x88"
  "\xb2\x83\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88\xb2\x84\x22\x29"
  "\x21\x9e\x2b\xbe\x1d\xb0\x86\x88\xb2\x85\x22\x29\x21\x9e\x2b\xbf"
  "\x1d\xb0\x02\x88\xc3\x1c\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\xb2\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x81"
  "\x0c\x0d\x1c\x0d\x1c\x25\x1b\x24\x28\x0d\x28\x1b\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x85\x83\x0c\xb2\x82\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x1b\xc1\x1c\xc1\x1c\x85"
  "\x0c\x81\x82\x83\xb2\x84\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x1b\x85\x81\x83\xb2\x84\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\xb2\x85\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\xb2\x85\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\xb2"
  "\x81\x1d\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x08\x85\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1d"
  "\x1b\x85\xb2\x81\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\xc2\x02\x1b\x25\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x25\x0d\x1c\x24\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x0d\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x17\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x17\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x9d\x1b\x2a\xb7\x2a"
  "\xb6\x2a\xb5\x2a\xb4\x2a\xb3\x2a\x9d\xc3\x0d\x1c\x0c\x0d\x0d\x0d"
  "\x0d\x0d\x08\x8c\x08\xb1\x2a\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x56\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75"
  "\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x67\x63\x66\x69\x6e\x61\x6c\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0e\x04\x82\x02\x03\x02\x0c"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x0f\x04\x83\x04\x03"
  "\x02\x10\x04\x83\x04\x03\x02\x11\x04\x83\x04\x03\x02\x12\x04\x83"
  "\x04\x03\x02\x13\x04\x83\x04\x03\x02\x08\x0d\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x73\x65\x74\x21\x09\x02\x14\x04\x84\x06\x03\x0a\x02"
  "\x09\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x07\x2e\x74\x61\x67\x2e\x31\x0b\x02\x18\x0a\x81\x85\x02\x17\x08"
  "\x81\x83\x02\x16\x06\x81\x83\x02\x15\x04\x83\x04\x09\x12\x0c\x02"
  "\x0a\x02\x0d\x47\x43\x20\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x03"
  "\x0e\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x3f\x0d\x05"
  "\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x0e\x03\x1a\x06\x81\x85"
  "\x02\x19\x04\x84\x06\x05\x0f\x0f\x02\x0b\x0a\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x12\x6d\x61\x6b\x65\x2d\x67\x63\x2d\x66\x69\x6e"
  "\x61\x6c\x69\x7a\x65\x72\x10\x0e\x67\x63\x2d\x66\x69\x6e\x61\x6c"
  "\x69\x7a\x65\x72\x73\x11\x02\x11\x02\x03\x0b\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x3f\x05\x0e\x04\x17\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x76\x61\x6c\x69\x64\x3f\x04"
  "\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x12\x07\x13\x25\x6d\x61\x6b"
  "\x65\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x13\x04"
  "\x0a\x77\x65\x61\x6b\x2d\x63\x6f\x6e\x73\x14\x07\x23\x14\x81\x83"
  "\x02\x22\x12\x81\x83\x02\x21\x10\x81\x85\x02\x20\x0e\x81\x89\x02"
  "\x1f\x0c\x81\x89\x02\x1e\x0a\x81\x89\x02\x1d\x08\x81\x89\x02\x1c"
  "\x06\x81\x89\x02\x1b\x04\x86\x0a\x13\x2b\x15\x02\x0c\x09\x02\x11"
  "\x66\x69\x6e\x61\x6c\x69\x7a\x65\x64\x20\x6f\x62\x6a\x65\x63\x74"
  "\x15\x61\x64\x64\x2d\x74\x6f\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c"
  "\x69\x7a\x65\x72\x21\x16\x04\x17\x67\x75\x61\x72\x61\x6e\x74\x65"
  "\x65\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x17\x05"
  "\x0e\x03\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74\x65\x72"
  "\x72\x75\x70\x74\x73\x18\x04\x12\x04\x14\x06\x2f\x1a\x81\x89\x02"
  "\x2e\x18\x81\x87\x02\x2d\x16\x81\x83\x02\x2c\x14\x81\x85\x02\x2b"
  "\x12\x81\x87\x02\x2a\x10\x81\x83\x02\x29\x0e\x81\x85\x02\x28\x0c"
  "\x81\x85\x02\x27\x0a\x81\x85\x02\x26\x08\x81\x89\x02\x25\x06\x81"
  "\x85\x02\x24\x04\x84\x06\x19\x2f\x19\x02\x0d\x09\x73\x65\x74\x2d"
  "\x63\x64\x72\x21\x1a\x09\x04\x63\x64\x72\x1b\x04\x63\x61\x72\x1c"
  "\x11\x66\x69\x6e\x61\x6c\x69\x7a\x65\x64\x20\x6f\x62\x6a\x65\x63"
  "\x74\x1a\x72\x65\x6d\x6f\x76\x65\x2d\x66\x72\x6f\x6d\x2d\x67\x63"
  "\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x21\x1d\x04\x17\x05\x0e"
  "\x03\x18\x04\x12\x03\x09\x77\x65\x61\x6b\x2d\x63\x61\x72\x12\x06"
  "\x44\x2c\x81\x8b\x02\x43\x2a\x81\x89\x02\x42\x28\x81\x8b\x02\x41"
  "\x26\x81\x8b\x02\x40\x24\x81\x89\x02\x3f\x22\x81\x89\x02\x3e\x20"
  "\x81\x8b\x02\x3d\x1e\x81\x89\x02\x3c\x1c\x81\x89\x02\x3b\x1a\x81"
  "\x87\x02\x3a\x18\x81\x83\x02\x39\x16\x81\x85\x02\x38\x14\x81\x83"
  "\x02\x37\x12\x81\x8d\x02\x36\x10\x81\x8d\x02\x35\x0e\x81\x8b\x02"
  "\x34\x0c\x81\x89\x02\x33\x0a\x81\x87\x02\x32\x08\x81\x85\x02\x31"
  "\x06\x81\x85\x02\x30\x04\x84\x06\x2b\x45\x0e\x02\x0e\x02\x09\x1b"
  "\x1c\x1e\x72\x65\x6d\x6f\x76\x65\x2d\x61\x6c\x6c\x2d\x66\x72\x6f"
  "\x6d\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x21\x1e"
  "\x04\x17\x03\x18\x03\x12\x04\x53\x20\x81\x89\x02\x52\x1e\x81\x87"
  "\x02\x51\x1c\x81\x83\x02\x50\x1a\x81\x85\x02\x4f\x18\x81\x87\x02"
  "\x4e\x16\x81\x87\x02\x4d\x14\x81\x85\x02\x4c\x12\x81\x83\x02\x4b"
  "\x10\x81\x83\x02\x4a\x0e\x81\x83\x02\x49\x0c\x81\x87\x02\x48\x0a"
  "\x81\x85\x02\x47\x08\x81\x83\x02\x46\x06\x81\x83\x02\x45\x04\x83"
  "\x04\x1f\x33\x1f\x02\x0f\x1b\x1c\x14\x73\x65\x61\x72\x63\x68\x2d"
  "\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x20\x04\x17\x03"
  "\x18\x03\x12\x04\x5c\x14\x81\x87\x02\x5b\x12\x81\x85\x02\x5a\x10"
  "\x81\x87\x02\x59\x0e\x81\x87\x02\x58\x0c\x81\x85\x02\x57\x0a\x81"
  "\x83\x02\x56\x08\x81\x83\x02\x55\x06\x81\x85\x02\x54\x04\x84\x06"
  "\x13\x22\x21\x02\x10\x1b\x1c\x16\x67\x63\x2d\x66\x69\x6e\x61\x6c"
  "\x69\x7a\x65\x72\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x73\x22\x04\x17"
  "\x03\x18\x03\x12\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x05\x64"
  "\x12\x81\x85\x02\x63\x10\x81\x85\x02\x62\x0e\x81\x87\x02\x61\x0c"
  "\x81\x85\x02\x60\x0a\x81\x83\x02\x5f\x08\x81\x83\x02\x5e\x06\x81"
  "\x83\x02\x5d\x04\x83\x04\x11\x23\x23\x02\x11\x09\x02\x19\x6d\x61"
  "\x6b\x65\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x64\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x24\x04\x17\x04\x14\x05\x0d\x64\x79\x6e"
  "\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64\x03\x0f\x77\x65\x61\x6b\x2d"
  "\x70\x61\x69\x72\x2f\x63\x61\x72\x3f\x14\x03\x09\x77\x65\x61\x6b"
  "\x2d\x63\x64\x72\x25\x03\x18\x04\x0e\x77\x65\x61\x6b\x2d\x73\x65"
  "\x74\x2d\x63\x64\x72\x21\x26\x04\x0e\x77\x65\x61\x6b\x2d\x73\x65"
  "\x74\x2d\x63\x61\x72\x21\x09\x76\x26\x81\x87\x02\x75\x24\x81\x83"
  "\x02\x74\x22\x81\x83\x02\x73\x20\x81\x85\x02\x72\x1e\x81\x87\x02"
  "\x71\x1c\x81\x85\x02\x70\x1a\x81\x83\x02\x6f\x18\x81\x85\x02\x6e"
  "\x16\x81\x83\x02\x6d\x14\x81\x83\x02\x6c\x12\x81\x83\x02\x6b\x10"
  "\x81\x83\x02\x6a\x0e\x82\x02\x69\x0c\x81\x83\x02\x68\x0a\x81\x83"
  "\x02\x67\x08\x81\x87\x02\x66\x06\x81\x87\x02\x65\x04\x85\x08\x25"
  "\x3f\x27\x02\x12\x09\x02\x03\x18\x03\x18\x77\x61\x6c\x6b\x2d\x67"
  "\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x73\x2d\x6c\x69\x73"
  "\x74\x18\x03\x79\x08\x83\x04\x78\x06\x82\x02\x77\x04\x82\x02\x07"
  "\x13\x28\x02\x13\x1a\x09\x1b\x02\x1c\x03\x18\x03\x14\x03\x25\x04"
  "\x87\x01\x1e\x81\x8d\x02\x86\x01\x1c\x81\x8d\x02\x85\x01\x1a\x81"
  "\x8d\x02\x84\x01\x18\x81\x8b\x02\x83\x01\x16\x81\x89\x02\x82\x01"
  "\x14\x81\x8d\x02\x81\x01\x12\x81\x89\x02\x80\x01\x10\x81\x89\x02"
  "\x7f\x0e\x81\x8b\x02\x7e\x0c\x81\x89\x02\x7d\x0a\x81\x87\x02\x7c"
  "\x08\x81\x83\x02\x7b\x06\x83\x04\x7a\x04\x82\x02\x1d\x2f\x1c\x02"
  "\x14\x02\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x38"
  "\x11\x02\x11\x02\x03\x12\x03\x25\x04\x26\x04\x91\x01\x16\x81\x89"
  "\x02\x90\x01\x14\x81\x89\x02\x8f\x01\x12\x81\x89\x02\x8e\x01\x10"
  "\x81\x89\x02\x8d\x01\x0e\x81\x89\x02\x8c\x01\x0c\x81\x87\x02\x8b"
  "\x01\x0a\x81\x87\x02\x8a\x01\x08\x81\x87\x02\x89\x01\x06\x81\x85"
  "\x02\x88\x01\x04\x83\x04\x15\x26\x26\x02\x15\x11\x02\x12\x72\x75"
  "\x6e\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x73\x25"
  "\x02\x03\x0f\x61\x64\x64\x2d\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e"
  "\x21\x02\x94\x01\x08\x81\x81\x02\x93\x01\x06\x81\x81\x02\x92\x01"
  "\x04\x82\x02\x07\x12\x1b\x02\x16\x14\x72\x65\x73\x65\x74\x2d\x67"
  "\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x73\x1a\x14\x65\x76"
  "\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x6f\x72"
  "\x65\x03\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e\x74\x2d\x72\x65"
  "\x63\x65\x69\x76\x65\x72\x21\x02\x97\x01\x08\x81\x83\x02\x96\x01"
  "\x06\x81\x81\x02\x95\x01\x04\x82\x02\x07\x10\x14\x16\x12\x12\x0b"
  "\x14\x04\x1b\x04\x26\x04\x1c\x04\x28\x04\x27\x04\x23\x04\x21\x04"
  "\x1f\x04\x0e\x04\x19\x04\x15\x04\x0f\x04\x0c\x04\x10\x13\x69\x6e"
  "\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x65\x76\x65\x6e\x74\x73\x21"
  "\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b"
  "\x61\x67\x65\x21\x18\x25\x1a\x11\x24\x22\x20\x1e\x1d\x16\x10\x17"
  "\x0d\x10\x13\x18\x73\x65\x74\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c"
  "\x69\x7a\x65\x72\x2d\x69\x74\x65\x6d\x73\x21\x13\x67\x63\x2d\x66"
  "\x69\x6e\x61\x6c\x69\x7a\x65\x72\x2d\x69\x74\x65\x6d\x73\x21\x67"
  "\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x2d\x73\x65\x74\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x63\x6f\x6e\x74\x65\x78\x74\x21\x1c"
  "\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x63\x6f\x6e\x74\x65\x78\x74\x15\x67\x63\x2d\x66"
  "\x69\x6e\x61\x6c\x69\x7a\x65\x72\x2d\x6f\x62\x6a\x65\x63\x74\x3f"
  "\x17\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x0a\x04\x04\x04\x04\x04\x04\x11\x6c"
  "\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x11"
  "\x72\x74\x64\x3a\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72"
  "\x28\x0d\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x0a\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x08\x6f\x62\x6a\x65\x63\x74\x3f"
  "\x0f\x6f\x62\x6a\x65\x63\x74\x2d\x63\x6f\x6e\x74\x65\x78\x74\x14"
  "\x73\x65\x74\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x63\x6f\x6e\x74\x65"
  "\x78\x74\x21\x06\x69\x74\x65\x6d\x73\x04\x06\x11\x6d\x61\x6b\x65"
  "\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74"
  "\x63\x68\x2d\x74\x61\x67\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d"
  "\x75\x6c\x74\x69\x70\x6c\x65\x04\x28\x02\x0d\x1c\x80\x80\x04\x0c"
  "\x1a\x81\x81\x02\x0b\x18\x81\x81\x02\x0a\x16\x81\x85\x02\x09\x14"
  "\x81\x83\x02\x08\x12\x81\x8d\x02\x07\x10\x81\x87\x02\x06\x0e\x81"
  "\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x85"
  "\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x1b\x35";

SCHEME_OBJECT *
gcfinal_so_data_71ef6811f640ad9d (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_gcfinal_so_data_71ef6811f640ad9d [0]))), (sizeof (prog_gcfinal_so_data_71ef6811f640ad9d)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_20]));
}

DECLARE_COMPILED_DATA_NS ("gcfinal.so", gcfinal_so_data_71ef6811f640ad9d)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("gcfinal.so", "b9253acf2ae87090")
