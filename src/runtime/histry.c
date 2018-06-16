/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:38-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 10
#define DEBUGGING_LABEL_1_2 9
#define OBJECT_1_2 8
#define OBJECT_1_1 7
#define OBJECT_1_0 6
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto make_vertebra_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_vertebra_4)
DEFLABEL (make_vertebra_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_1_1]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

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
histry_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto marked_vertebraP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (marked_vertebraP_4)
DEFLABEL (marked_vertebraP_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 36L) < ((unsigned long) (Wrd19.Lng)))
    goto label_5;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_5)
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd11.Obj) == (Wrd13.Obj))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_2_1]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 10
#define DEBUGGING_LABEL_3_2 9
#define OBJECT_3_2 8
#define OBJECT_3_1 7
#define OBJECT_3_0 6
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_3_4);
      goto mark_vertebraB_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mark_vertebraB_5)
DEFLABEL (mark_vertebraB_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 10
#define DEBUGGING_LABEL_4_2 9
#define OBJECT_4_2 8
#define OBJECT_4_1 7
#define OBJECT_4_0 6
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto unmark_vertebraB_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unmark_vertebraB_5)
DEFLABEL (unmark_vertebraB_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define ENVIRONMENT_LABEL_5_3 11
#define DEBUGGING_LABEL_5_2 10
#define OBJECT_5_1 9
#define OBJECT_5_0 8
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto same_vertebraP_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (same_vertebraP_5)
DEFLABEL (same_vertebraP_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_7)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_6;
  if ((Wrd7.Obj) == Rvl)
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_5_1]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 9
#define DEBUGGING_LABEL_6_2 8
#define OBJECT_6_1 7
#define OBJECT_6_0 6
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto link_vertebrae_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (link_vertebrae_4)
DEFLABEL (link_vertebrae_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 10
#define DEBUGGING_LABEL_7_2 9
#define OBJECT_7_2 8
#define OBJECT_7_1 7
#define OBJECT_7_0 6
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_7_4);
      goto make_reduction_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_reduction_4)
DEFLABEL (make_reduction_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_7_1]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

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
histry_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto marked_reductionP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (marked_reductionP_4)
DEFLABEL (marked_reductionP_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 36L) < ((unsigned long) (Wrd19.Lng)))
    goto label_5;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (label_5)
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd11.Obj) == (Wrd13.Obj))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_8_1]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
histry_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_9_4);
      goto mark_reductionB_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mark_reductionB_5)
DEFLABEL (mark_reductionB_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 10
#define DEBUGGING_LABEL_10_2 9
#define OBJECT_10_2 8
#define OBJECT_10_1 7
#define OBJECT_10_0 6
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_10_4);
      goto unmark_reductionB_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unmark_reductionB_5)
DEFLABEL (unmark_reductionB_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define ENVIRONMENT_LABEL_11_3 11
#define DEBUGGING_LABEL_11_2 10
#define OBJECT_11_1 9
#define OBJECT_11_0 8
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_11_4);
      goto same_reductionP_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (same_reductionP_5)
DEFLABEL (same_reductionP_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_7)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_6;
  if ((Wrd7.Obj) == Rvl)
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_11_1]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto history_unmark_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (history_unmark_3)
DEFLABEL (history_unmark_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

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
histry_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto history_mark_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (history_mark_3)
DEFLABEL (history_mark_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

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
histry_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_14_4);
      goto history_markedP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (history_markedP_3)
DEFLABEL (history_markedP_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 36L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_14_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_5 3
#define LABEL_15_6 5
#define LABEL_15_7 7
#define LABEL_15_8 9
#define LABEL_15_4 11
#define LABEL_15_9 13
#define LABEL_15_10 15
#define LABEL_15_12 17
#define LABEL_15_13 19
#define LABEL_15_14 21
#define LABEL_15_16 23
#define LABEL_15_17 25
#define LABEL_15_15 27
#define LABEL_15_20 29
#define LABEL_15_21 31
#define LABEL_15_18 33
#define LABEL_15_26 35
#define LABEL_15_19 37
#define LABEL_15_22 39
#define LABEL_15_24 41
#define LABEL_15_25 43
#define LABEL_15_29 45
#define LABEL_15_30 47
#define LABEL_15_33 49
#define LABEL_15_27 51
#define LABEL_15_34 53
#define LABEL_15_28 55
#define LABEL_15_31 57
#define LABEL_15_32 59
#define ENVIRONMENT_LABEL_15_3 78
#define DEBUGGING_LABEL_15_2 77
#define OBJECT_15_11 76
#define OBJECT_15_10 75
#define OBJECT_15_9 74
#define OBJECT_15_8 73
#define OBJECT_15_7 72
#define OBJECT_15_6 71
#define OBJECT_15_5 70
#define OBJECT_15_4 69
#define OBJECT_15_3 68
#define OBJECT_15_2 67
#define OBJECT_15_1 66
#define OBJECT_15_0 65
#define EXECUTE_CACHE_15_23 61
#define EXECUTE_CACHE_15_11 63
#define FREE_REFERENCES_LABEL_15_0 60
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd37;
  machine_word Wrd16;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd67;
  machine_word Wrd76;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd86;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd35;
  machine_word Wrd89;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd99;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd94;
  machine_word Wrd91;
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
      current_block = (Rpc - LABEL_15_5);
      goto continuation_24;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_20;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_19;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_15;

    case 4:
      current_block = (Rpc - LABEL_15_4);
      goto create_history_38;

    case 5:
      current_block = (Rpc - LABEL_15_9);
      goto label_43;

    case 6:
      current_block = (Rpc - LABEL_15_10);
      goto label_40;

    case 7:
      current_block = (Rpc - LABEL_15_12);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_15_13);
      goto label_41;

    case 9:
      current_block = (Rpc - LABEL_15_14);
      goto continuation_25;

    case 10:
      current_block = (Rpc - LABEL_15_16);
      goto label_44;

    case 11:
      current_block = (Rpc - LABEL_15_17);
      goto lambda_14;

    case 12:
      current_block = (Rpc - LABEL_15_15);
      goto continuation_27;

    case 13:
      current_block = (Rpc - LABEL_15_20);
      goto subproblem_loop_34;

    case 14:
      current_block = (Rpc - LABEL_15_21);
      goto label_45;

    case 15:
      current_block = (Rpc - LABEL_15_18);
      goto continuation_1;

    case 16:
      current_block = (Rpc - LABEL_15_26);
      goto label_46;

    case 17:
      current_block = (Rpc - LABEL_15_19);
      goto continuation_0;

    case 18:
      current_block = (Rpc - LABEL_15_22);
      goto continuation_30;

    case 19:
      current_block = (Rpc - LABEL_15_24);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_15_25);
      goto continuation_3;

    case 21:
      current_block = (Rpc - LABEL_15_29);
      goto reduction_loop_9;

    case 22:
      current_block = (Rpc - LABEL_15_30);
      goto label_47;

    case 23:
      current_block = (Rpc - LABEL_15_33);
      goto label_48;

    case 24:
      current_block = (Rpc - LABEL_15_27);
      goto continuation_31;

    case 25:
      current_block = (Rpc - LABEL_15_34);
      goto label_49;

    case 26:
      current_block = (Rpc - LABEL_15_28);
      goto continuation_12;

    case 27:
      current_block = (Rpc - LABEL_15_31);
      goto continuation_8;

    case 28:
      current_block = (Rpc - LABEL_15_32);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (create_history_51)
DEFLABEL (create_history_38)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd91.Obj) = (current_block [OBJECT_15_0]);
  (Wrd94.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd94.Lng))))
    goto label_78;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd91.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_77;

DEFLABEL (label_76)
  (Wrd13.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_56;

DEFLABEL (label_55)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_56)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_58;
  (Wrd15.Obj) = (current_block [OBJECT_15_4]);
  goto label_57;

DEFLABEL (label_58)
  (Wrd15.Obj) = (current_block [OBJECT_15_3]);

DEFLABEL (label_57)
DEFLABEL (label_75)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_73;

DEFLABEL (label_72)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_15_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_15_7);

DEFLABEL (label_71)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd78.Obj) = (current_block [OBJECT_15_0]);
  (Wrd81.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd81.Lng))))
    goto label_70;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd78.Obj));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_69;

DEFLABEL (label_68)
  (Wrd45.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd55.Lng))))
    goto label_55;
  (Wrd49.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd49.Obj) == (Wrd51.Obj))
    goto label_60;
  (Wrd47.Obj) = (current_block [OBJECT_15_4]);
  goto label_59;

DEFLABEL (label_60)
  (Wrd47.Obj) = (current_block [OBJECT_15_3]);

DEFLABEL (label_59)
DEFLABEL (label_67)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd47.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_65;

DEFLABEL (label_64)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_15_6]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_15_5);

DEFLABEL (label_63)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.pObj) = (& (Rsp [1]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd72.pObj)));
  (* (--Rsp)) = (Wrd74.Obj);
  goto lambda_14;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_15_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_62;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_62;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_61)
  goto subproblem_loop_34;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_15_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_65)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_66;
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if ((Wrd76.Lng) > 0)
    goto label_63;
  goto label_64;

DEFLABEL (label_66)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_63;

DEFLABEL (label_69)
  Rsp = (& (Rsp [2]));
  goto label_65;

DEFLABEL (label_70)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_69;

DEFLABEL (label_73)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_74;
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if ((Wrd89.Lng) > 0)
    goto label_71;
  goto label_72;

DEFLABEL (label_74)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  goto label_71;

DEFLABEL (label_77)
  Rsp = (& (Rsp [2]));
  goto label_73;

DEFLABEL (label_78)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_77;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_15_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_65;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_15_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  goto label_73;

DEFLABEL (lambda_52)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_15_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_8]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_10]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.pObj) = (& (Rsp [2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_80;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd28.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_80;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_79)
  goto reduction_loop_9;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_11]), 2);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_8]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_15_28);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_15_9]);
  (Rsp [0]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_10]), 2);

DEFLABEL (label_80)
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_26]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (subproblem_loop_53)
DEFLABEL (subproblem_loop_34)
  INTERRUPT_CHECK (26, LABEL_15_20);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_85;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd21.Lng) == 0))
    goto label_82;

DEFLABEL (label_81)
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_23]));

DEFLABEL (label_82)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_22]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.pObj) = (& (Rsp [5]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  goto lambda_14;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_15_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_23]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_15_27);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_84;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_84;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_83)
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto subproblem_loop_34;

DEFLABEL (label_84)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_34]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_49)
  (Wrd9.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_85)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_45)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_81;

DEFLABEL (reduction_loop_54)
DEFLABEL (reduction_loop_9)
  INTERRUPT_CHECK (26, LABEL_15_29);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_90;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd37.Lng) == 0))
    goto label_87;

DEFLABEL (label_86)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  Rvl = ((Wrd34.pObj) [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_31]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_32]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_89;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd30.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_89;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_88)
  goto reduction_loop_9;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15_32);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_8]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15_31);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_15_9]);
  (Rsp [0]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_10]), 2);

DEFLABEL (label_89)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_33]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_90)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_47)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  goto label_86;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define TAG_16_6 1
#define LABEL_16_11 7
#define LABEL_16_12 9
#define LABEL_16_7 11
#define LABEL_16_9 13
#define LABEL_16_14 15
#define LABEL_16_15 17
#define LABEL_16_8 19
#define LABEL_16_10 21
#define LABEL_16_16 23
#define ENVIRONMENT_LABEL_16_3 37
#define DEBUGGING_LABEL_16_2 36
#define OBJECT_16_1 35
#define OBJECT_16_0 34
#define EXECUTE_CACHE_16_18 25
#define EXECUTE_CACHE_16_17 27
#define EXECUTE_CACHE_16_13 29
#define FREE_REFERENCE_16_1 32
#define FREE_REFERENCE_16_0 33
#define FREE_REFERENCES_LABEL_16_0 24
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_16_4);
      goto with_new_history_8;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_16_11);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_16_12);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_16_14);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_16_15);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_16_16);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_new_history_15)
DEFLABEL (with_new_history_8)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_16_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_26;
  Wrd17 = Wrd21;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_24;
  Wrd23 = Wrd27;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_22;
  Wrd6 = Wrd10;

DEFLABEL (label_21)
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_20;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd24.Lng) == 0)
    goto label_18;

DEFLABEL (label_17)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_16);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (label_18)
  (Wrd23.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_20)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_14])), (Wrd7.pObj));

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_12])), (Wrd24.pObj));

DEFLABEL (label_11)
  (Wrd23.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_11])), (Wrd18.pObj));

DEFLABEL (label_10)
  (Wrd17.Obj) = Rvl;
  goto label_25;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 9
#define DEBUGGING_LABEL_17_2 8
#define OBJECT_17_1 7
#define OBJECT_17_0 6
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      goto record_evaluation_in_historyB_3;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_evaluation_in_historyB_6)
DEFLABEL (record_evaluation_in_historyB_3)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define ENVIRONMENT_LABEL_18_3 13
#define DEBUGGING_LABEL_18_2 12
#define OBJECT_18_0 11
#define EXECUTE_CACHE_18_7 9
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd7;
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
      goto set_history_to_next_reductionB_5;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_history_to_next_reductionB_8)
DEFLABEL (set_history_to_next_reductionB_5)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_6);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define ENVIRONMENT_LABEL_19_3 14
#define DEBUGGING_LABEL_19_2 13
#define EXECUTE_CACHE_19_8 9
#define EXECUTE_CACHE_19_6 11
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_19_4);
      goto push_historyB_5;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (push_historyB_8)
DEFLABEL (push_historyB_5)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_7);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 10
#define DEBUGGING_LABEL_20_2 9
#define EXECUTE_CACHE_20_6 7
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto pop_historyB_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pop_historyB_4)
DEFLABEL (pop_historyB_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_7 5
#define LABEL_21_5 7
#define TAG_21_6 2
#define LABEL_21_8 9
#define LABEL_21_9 11
#define LABEL_21_10 13
#define TAG_21_11 5
#define LABEL_21_12 15
#define TAG_21_13 6
#define LABEL_21_14 17
#define LABEL_21_16 19
#define LABEL_21_17 21
#define LABEL_21_18 23
#define ENVIRONMENT_LABEL_21_3 37
#define DEBUGGING_LABEL_21_2 36
#define OBJECT_21_6 35
#define OBJECT_21_5 34
#define OBJECT_21_4 33
#define OBJECT_21_3 32
#define OBJECT_21_2 31
#define OBJECT_21_1 30
#define OBJECT_21_0 29
#define EXECUTE_CACHE_21_15 25
#define FREE_REFERENCE_21_0 28
#define FREE_REFERENCES_LABEL_21_0 24
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_21_4);
      goto history_transform_16;

    case 1:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_21_5);
      goto loop_14;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_21_10);
      goto lambda_24;

    case 6:
      current_block = (Rpc - LABEL_21_12);
      goto lambda_25;

    case 7:
      current_block = (Rpc - LABEL_21_14);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_21_16);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_21_17);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_21_18);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (history_transform_22)
DEFLABEL (history_transform_16)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_5])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  Wrd8 = Wrd10;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto loop_14;

DEFLABEL (loop_23)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_21_5);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Wrd32.Obj) = (current_block [OBJECT_21_0]);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 36L) < ((unsigned long) (Wrd35.Lng))))
    goto label_29;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd9.Obj) == (Wrd10.Obj)))
    goto label_28;

DEFLABEL (label_27)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_10])));
  Rhp += 3;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd26 = Wrd21;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  ((Wrd26.pObj) [2]) = (Wrd29.Obj);
  ((Wrd26.pObj) [3]) = (Wrd27.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [4]) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_21_3]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_21_4]);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_12])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_21_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Wrd42.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.Obj) = (current_block [OBJECT_21_2]);
  goto label_26;

DEFLABEL (label_29)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_27;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_21_10);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_6]), 1);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_6]), 1);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_21_16);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_34;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_34;
  if (Rvl == (Wrd5.Obj))
    goto label_31;

DEFLABEL (label_30)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [3]);
  (Rsp [0]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  goto loop_14;

DEFLABEL (label_31)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_33;
  Wrd20 = Wrd24;

DEFLABEL (label_32)
  Rvl = (Wrd20.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_18])), (Wrd21.pObj));

DEFLABEL (label_20)
  (Wrd20.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_21_12);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_15]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define LABEL_22_9 11
#define LABEL_22_10 13
#define LABEL_22_11 15
#define ENVIRONMENT_LABEL_22_3 25
#define DEBUGGING_LABEL_22_2 24
#define OBJECT_22_4 23
#define OBJECT_22_3 22
#define OBJECT_22_2 21
#define OBJECT_22_1 20
#define OBJECT_22_0 19
#define EXECUTE_CACHE_22_8 17
#define FREE_REFERENCES_LABEL_22_0 16
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto unfold_and_reverse_rib_19;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto loop_17;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_22_11);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unfold_and_reverse_rib_24)
DEFLABEL (unfold_and_reverse_rib_19)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_17;

DEFLABEL (loop_25)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_22_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd17.Obj) = (current_block [OBJECT_22_1]);
  (Wrd20.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 36L) < ((unsigned long) (Wrd20.Lng))))
    goto label_36;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd9.Obj) == (Wrd10.Obj))
    goto label_27;

DEFLABEL (label_28)
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_26;

DEFLABEL (label_27)
  (Wrd16.Obj) = (current_block [OBJECT_22_3]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_26)
DEFLABEL (label_35)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_29;

DEFLABEL (label_30)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (Wrd22.Obj) = (current_block [OBJECT_22_3]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_29)
DEFLABEL (label_34)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_22_10);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_33;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_33;
  if (Rvl == (Wrd5.Obj))
    goto label_32;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [2]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_17;

DEFLABEL (label_32)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

DEFLABEL (label_36)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
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
histry_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_23_4);
      goto dummy_reductionP_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dummy_reductionP_5)
DEFLABEL (dummy_reductionP_2)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd9.Obj) = ((Wrd6.pObj) [1]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_23_0])))
    goto label_7;
  Rvl = (current_block [OBJECT_23_1]);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
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
histry_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_24_4);
      goto record_dummy_reduction_in_historyB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_dummy_reduction_in_historyB_3)
DEFLABEL (record_dummy_reduction_in_historyB_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define ENVIRONMENT_LABEL_25_3 16
#define DEBUGGING_LABEL_25_2 15
#define OBJECT_25_1 14
#define OBJECT_25_0 13
#define EXECUTE_CACHE_25_8 11
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_25_4);
      goto history_superproblem_4;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (history_superproblem_10)
DEFLABEL (history_superproblem_4)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_16)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_25_1])))
    goto label_11;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_15;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_14)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_13;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (label_13)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_8)
  (Wrd24.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_7)
  (Wrd15.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define ENVIRONMENT_LABEL_26_3 17
#define DEBUGGING_LABEL_26_2 16
#define OBJECT_26_2 15
#define OBJECT_26_1 14
#define OBJECT_26_0 13
#define EXECUTE_CACHE_26_8 11
#define FREE_REFERENCES_LABEL_26_0 10
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_26_4);
      goto history_reductions_4;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (history_reductions_10)
DEFLABEL (history_reductions_4)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_16)
  (Wrd14.Obj) = (current_block [OBJECT_26_1]);
  if (! ((Wrd5.Obj) == (Wrd14.Obj)))
    goto label_11;
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_15;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_14)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_13;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (label_13)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_8)
  (Wrd24.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_7)
  (Wrd15.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 6
#define DEBUGGING_LABEL_27_2 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  INVOKE_INTERFACE_DECLS
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
      goto history_untransform_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (history_untransform_3)
DEFLABEL (history_untransform_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_8 9
#define LABEL_28_9 11
#define ENVIRONMENT_LABEL_28_3 23
#define DEBUGGING_LABEL_28_2 22
#define OBJECT_28_4 21
#define OBJECT_28_3 20
#define OBJECT_28_2 19
#define OBJECT_28_1 18
#define OBJECT_28_0 17
#define EXECUTE_CACHE_28_6 13
#define FREE_ASSIGNMENT_28_0 16
#define FREE_REFERENCES_LABEL_28_0 12
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
histry_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd6;
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
      goto initialize_packageB_4;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_28_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_9)
DEFLABEL (initialize_packageB_4)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_14;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_14;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_14;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.pObj) = (& ((Wrd13.pObj) [(Wrd8.Lng)]));
  (Wrd7.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_13)
  (Wrd25.Obj) = (current_block [OBJECT_28_3]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_0]));
  (Wrd34.Obj) = ((Wrd26.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd26.pObj) [0]) = (Wrd22.Obj);

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_28_4]);
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd34.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_9])), (Wrd26.pObj), (Wrd22.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_14)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_5 7
#define LABEL_8 9
#define LABEL_7 11
#define LABEL_10 13
#define LABEL_9 15
#define LABEL_12 17
#define LABEL_11 19
#define LABEL_14 21
#define LABEL_13 23
#define LABEL_16 25
#define LABEL_15 27
#define LABEL_17 29
#define LABEL_20 31
#define LABEL_19 33
#define LABEL_22 35
#define LABEL_21 37
#define LABEL_24 39
#define LABEL_23 41
#define LABEL_26 43
#define LABEL_25 45
#define LABEL_28 47
#define LABEL_27 49
#define LABEL_30 51
#define LABEL_29 53
#define LABEL_31 55
#define LABEL_32 57
#define LABEL_33 59
#define ENVIRONMENT_LABEL_3 92
#define DEBUGGING_LABEL_2 91
#define PURIFICATION_ROOT 90
#define OBJECT_19 89
#define OBJECT_18 88
#define OBJECT_17 87
#define OBJECT_16 86
#define OBJECT_15 85
#define OBJECT_14 84
#define OBJECT_13 83
#define OBJECT_12 82
#define OBJECT_11 81
#define OBJECT_10 80
#define OBJECT_9 79
#define OBJECT_8 78
#define OBJECT_7 77
#define OBJECT_6 76
#define OBJECT_5 75
#define OBJECT_4 74
#define OBJECT_3 73
#define OBJECT_2 72
#define OBJECT_1 71
#define OBJECT_0 70
#define FREE_REFERENCE_5 61
#define FREE_REFERENCE_4 62
#define FREE_REFERENCE_3 63
#define FREE_REFERENCE_2 64
#define FREE_REFERENCE_1 65
#define FREE_REFERENCE_0 66
#define GLOBAL_EXECUTE_CACHE_18 68
#define FREE_REFERENCES_LABEL_0 60
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
histry_so_ceb3795f6363f714 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_11);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_15);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_17);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto label_22;

    case 15:
      current_block = (Rpc - LABEL_19);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto label_23;

    case 17:
      current_block = (Rpc - LABEL_21);
      goto continuation_9;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto label_24;

    case 19:
      current_block = (Rpc - LABEL_23);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto label_25;

    case 21:
      current_block = (Rpc - LABEL_25);
      goto continuation_11;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto label_26;

    case 23:
      current_block = (Rpc - LABEL_27);
      goto continuation_12;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto label_27;

    case 25:
      current_block = (Rpc - LABEL_29);
      goto continuation_13;

    case 26:
      current_block = (Rpc - LABEL_31);
      goto label_30;

    case 27:
      current_block = (Rpc - LABEL_32);
      goto label_31;

    case 28:
      current_block = (Rpc - LABEL_33);
      goto expression_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_15)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_32])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_31)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_30)
  {
    static const short sections [] =
      {
	0,
	2,
	0,
	1,
	1,
	1,
	0,
	1,
	2,
	1,
	1,
	1,
	0,
	2,
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
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 28)
      goto label_29;
    blocks = (current_block [OBJECT_19]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_31])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_29)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_55;
  Wrd8 = Wrd12;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_53;
  Wrd8 = Wrd12;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_51;
  Wrd8 = Wrd12;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_49;
  Wrd8 = Wrd12;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_47;
  Wrd8 = Wrd12;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_45;
  Wrd8 = Wrd12;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_43;
  Wrd8 = Wrd12;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_41;
  Wrd8 = Wrd12;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_39;
  Wrd8 = Wrd12;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_37;
  Wrd8 = Wrd12;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_35;
  Wrd8 = Wrd12;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_33;
  Wrd8 = Wrd12;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_18]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_18]));

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd9.pObj));

DEFLABEL (label_27)
  (Wrd8.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd9.pObj));

DEFLABEL (label_26)
  (Wrd8.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd9.pObj));

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd9.pObj));

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd9.pObj));

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd9.pObj));

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_histry_so_ceb3795f6363f714 [28] =
  {
    { "histry_so_code_1", 2, histry_so_code_1 },
    { "histry_so_code_2", 1, histry_so_code_2 },
    { "histry_so_code_3", 2, histry_so_code_3 },
    { "histry_so_code_4", 2, histry_so_code_4 },
    { "histry_so_code_5", 3, histry_so_code_5 },
    { "histry_so_code_6", 2, histry_so_code_6 },
    { "histry_so_code_7", 2, histry_so_code_7 },
    { "histry_so_code_8", 1, histry_so_code_8 },
    { "histry_so_code_9", 2, histry_so_code_9 },
    { "histry_so_code_10", 2, histry_so_code_10 },
    { "histry_so_code_11", 3, histry_so_code_11 },
    { "histry_so_code_12", 1, histry_so_code_12 },
    { "histry_so_code_13", 1, histry_so_code_13 },
    { "histry_so_code_14", 1, histry_so_code_14 },
    { "histry_so_code_15", 29, histry_so_code_15 },
    { "histry_so_code_16", 11, histry_so_code_16 },
    { "histry_so_code_17", 2, histry_so_code_17 },
    { "histry_so_code_18", 3, histry_so_code_18 },
    { "histry_so_code_19", 3, histry_so_code_19 },
    { "histry_so_code_20", 2, histry_so_code_20 },
    { "histry_so_code_21", 11, histry_so_code_21 },
    { "histry_so_code_22", 7, histry_so_code_22 },
    { "histry_so_code_23", 1, histry_so_code_23 },
    { "histry_so_code_24", 1, histry_so_code_24 },
    { "histry_so_code_25", 4, histry_so_code_25 },
    { "histry_so_code_26", 4, histry_so_code_26 },
    { "histry_so_code_27", 1, histry_so_code_27 },
    { "histry_so_code_28", 5, histry_so_code_28 }
  };

int
decl_histry_so_ceb3795f6363f714 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_histry_so_ceb3795f6363f714);
  return (0);
}

DECLARE_COMPILED_CODE ("histry.so", 29, decl_histry_so_ceb3795f6363f714, histry_so_ceb3795f6363f714)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_histry_so_data_ceb3795f6363f714 [3145] =
  "\x60\x2c\x8d\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x02\xc3"
  "\xba\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88\xc2\xbc\x07"
  "\x02\x22\x29\x21\x9f\x2b\xbd\x1d\xb0\x83\x88\xc2\xbe\xb1\x02\x22"
  "\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x84\x88\xb6\xb1\x02\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x07\xc1\x1c\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xc2\x1c\xb6\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\xb2\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x07\x02\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1\x02\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\xb1\x02\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x1b\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x07\x02\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1\x02\xb2\x08\x0c\x0c"
  "\x06\x07\x02\xb4\x02\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x02\x88\xc1\xc1\x0d"
  "\xb9\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\xc2\xbe\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x28\x0d\xbe\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\xc3\x02\x80\x08\xb4\x02\x0d\x1c\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x08\xb4\x02\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88\x07\x2c"
  "\x1c\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\xc1\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x1c\x08\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x08\xc2\xc0\x0d\x1b\x25\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xb8\x88\xb0\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb4\x2a\x1e\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x85\x02\x1b\x2a\xb2\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0d\x0d"
  "\x0d\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x0d\x1b\xb1\x1b\x0d\x1b\x0d\x0d"
  "\x0d\x0d\xb6\x1b\x0d\x17\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x1b"
  "\x1b\x0d\x9d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb5\x2a\x9d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\xc3\x0d\xb3\x2a\x28\x0d\x26\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x68\x69\x73\x74"
  "\x72\x79\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x10\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x21\x0b\x68\x75"
  "\x6e\x6b\x33\x2d\x63\x6f\x6e\x73\x1f\x06\x81\x87\x02\x1e\x04\x85"
  "\x08\x05\x0b\x02\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65"
  "\x3f\x25\x20\x04\x83\x04\x03\x02\x17\x73\x79\x73\x74\x65\x6d\x2d"
  "\x68\x75\x6e\x6b\x33\x2d\x73\x65\x74\x2d\x63\x78\x72\x31\x21\x25"
  "\x22\x06\x81\x85\x02\x21\x04\x83\x04\x05\x0b\x02\x21\x24\x06\x81"
  "\x85\x02\x23\x04\x83\x04\x05\x0b\x09\x02\x0d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x64\x61\x74\x75\x6d\x0a\x27\x08\x81\x85\x02\x26\x06\x81"
  "\x85\x02\x25\x04\x84\x06\x07\x0c\x0b\x02\x17\x73\x79\x73\x74\x65"
  "\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x73\x65\x74\x2d\x63\x78\x72\x32"
  "\x21\x0c\x29\x06\x81\x85\x02\x28\x04\x84\x06\x05\x0a\x0d\x02\x08"
  "\x21\x2b\x06\x81\x87\x02\x2a\x04\x85\x08\x05\x0b\x0e\x02\x09\x25"
  "\x2c\x04\x83\x04\x03\x0f\x02\x0a\x0c\x25\x2e\x06\x81\x85\x02\x2d"
  "\x04\x83\x04\x05\x0b\x10\x02\x0b\x0c\x21\x30\x06\x81\x85\x02\x2f"
  "\x04\x83\x04\x05\x0b\x11\x02\x0c\x0a\x33\x08\x81\x85\x02\x32\x06"
  "\x81\x85\x02\x31\x04\x84\x06\x07\x0c\x12\x02\x0d\x21\x34\x04\x83"
  "\x04\x03\x13\x02\x0e\x25\x35\x04\x83\x04\x03\x14\x02\x0f\x25\x36"
  "\x04\x83\x04\x03\x15\x02\x10\x0c\x21\x1e\x43\x52\x45\x41\x54\x45"
  "\x2d\x48\x49\x53\x54\x4f\x52\x59\x3a\x20\x69\x6e\x76\x61\x6c\x69"
  "\x64\x20\x77\x69\x64\x74\x68\x1e\x43\x52\x45\x41\x54\x45\x2d\x48"
  "\x49\x53\x54\x4f\x52\x59\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20"
  "\x64\x65\x70\x74\x68\x0f\x1b\x04\x06\x65\x72\x72\x6f\x72\x04\x0f"
  "\x6c\x69\x6e\x6b\x2d\x76\x65\x72\x74\x65\x62\x72\x61\x65\x0c\x03"
  "\x53\x3c\x81\x87\x02\x52\x3a\x81\x85\x02\x51\x38\x81\x85\x02\x50"
  "\x36\x81\x87\x02\x4f\x34\x81\x87\x02\x4e\x32\x81\x8b\x02\x4d\x30"
  "\x81\x85\x02\x4c\x2e\x81\x85\x02\x4b\x2c\x81\x87\x02\x4a\x2a\x81"
  "\x85\x02\x49\x28\x81\x85\x02\x48\x26\x81\x85\x02\x47\x24\x81\x8b"
  "\x02\x46\x22\x81\x83\x02\x45\x20\x81\x85\x02\x44\x1e\x81\x85\x02"
  "\x43\x1c\x81\x87\x02\x42\x1a\x81\x83\x02\x41\x18\x81\x8b\x02\x40"
  "\x16\x81\x85\x02\x3f\x14\x81\x85\x02\x3e\x12\x81\x83\x02\x3d\x10"
  "\x81\x85\x02\x3c\x0e\x81\x83\x02\x3b\x0c\x84\x06\x3a\x0a\x81\x85"
  "\x02\x39\x08\x81\x85\x02\x38\x06\x81\x85\x02\x37\x04\x81\x85\x02"
  "\x3b\x4f\x02\x11\x15\x73\x65\x74\x2d\x63\x75\x72\x72\x65\x6e\x74"
  "\x2d\x68\x69\x73\x74\x6f\x72\x79\x21\x16\x77\x69\x74\x68\x2d\x68"
  "\x69\x73\x74\x6f\x72\x79\x2d\x64\x69\x73\x61\x62\x6c\x65\x64\x0f"
  "\x6d\x61\x78\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x73\x10\x6d"
  "\x61\x78\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73\x16\x03"
  "\x04\x0f\x63\x72\x65\x61\x74\x65\x2d\x68\x69\x73\x74\x6f\x72\x79"
  "\x17\x03\x23\x72\x65\x63\x6f\x72\x64\x2d\x64\x75\x6d\x6d\x79\x2d"
  "\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x2d\x69\x6e\x2d\x68\x69\x73"
  "\x74\x6f\x72\x79\x21\x18\x03\x0e\x70\x75\x73\x68\x2d\x68\x69\x73"
  "\x74\x6f\x72\x79\x21\x19\x04\x5e\x18\x81\x83\x02\x5d\x16\x81\x89"
  "\x02\x5c\x14\x81\x85\x02\x5b\x12\x81\x83\x02\x5a\x10\x81\x83\x02"
  "\x59\x0e\x81\x87\x02\x58\x0c\x81\x83\x02\x57\x0a\x81\x8d\x02\x56"
  "\x08\x81\x8b\x02\x55\x06\x81\x83\x02\x54\x04\x83\x04\x17\x26\x1a"
  "\x02\x12\x17\x73\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d"
  "\x73\x65\x74\x2d\x63\x78\x72\x30\x21\x60\x06\x81\x89\x02\x5f\x04"
  "\x85\x08\x05\x0a\x1b\x02\x13\x03\x12\x75\x6e\x6d\x61\x72\x6b\x2d"
  "\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x21\x02\x63\x08\x81\x85\x02"
  "\x62\x06\x81\x85\x02\x61\x04\x83\x04\x07\x0e\x1c\x02\x14\x03\x0f"
  "\x6d\x61\x72\x6b\x2d\x76\x65\x72\x74\x65\x62\x72\x61\x21\x1d\x03"
  "\x10\x6d\x61\x72\x6b\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x21"
  "\x1e\x03\x66\x08\x81\x83\x02\x65\x06\x81\x83\x02\x64\x04\x83\x04"
  "\x07\x0f\x1f\x02\x15\x03\x11\x75\x6e\x6d\x61\x72\x6b\x2d\x76\x65"
  "\x72\x74\x65\x62\x72\x61\x21\x20\x02\x68\x06\x81\x83\x02\x67\x04"
  "\x83\x04\x05\x0b\x21\x02\x16\x0a\x11\x73\x79\x73\x74\x65\x6d\x2d"
  "\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x14\x25\x12\x74\x68\x65\x2d"
  "\x65\x6d\x70\x74\x79\x2d\x68\x69\x73\x74\x6f\x72\x79\x22\x02\x03"
  "\x17\x75\x6e\x66\x6f\x6c\x64\x2d\x61\x6e\x64\x2d\x72\x65\x76\x65"
  "\x72\x73\x65\x2d\x72\x69\x62\x23\x02\x73\x18\x81\x85\x02\x72\x16"
  "\x81\x85\x02\x71\x14\x81\x87\x02\x70\x12\x81\x85\x02\x6f\x10\x81"
  "\x83\x02\x6e\x0e\x81\x83\x02\x6d\x0c\x81\x85\x02\x6c\x0a\x81\x85"
  "\x02\x6b\x08\x81\x85\x02\x6a\x06\x81\x87\x02\x69\x04\x83\x04\x17"
  "\x26\x24\x02\x17\x0a\x25\x0c\x77\x72\x61\x70\x2d\x61\x72\x6f\x75"
  "\x6e\x64\x03\x11\x64\x75\x6d\x6d\x79\x2d\x72\x65\x64\x75\x63\x74"
  "\x69\x6f\x6e\x3f\x0a\x02\x7a\x10\x81\x89\x02\x79\x0e\x81\x8b\x02"
  "\x78\x0c\x81\x89\x02\x77\x0a\x81\x89\x02\x76\x08\x81\x87\x02\x75"
  "\x06\x81\x87\x02\x74\x04\x83\x04\x0f\x1a\x02\x18\x2a\x25\x7b\x04"
  "\x83\x04\x03\x26\x02\x19\x25\x05\x1e\x72\x65\x63\x6f\x72\x64\x2d"
  "\x65\x76\x61\x6c\x75\x61\x74\x69\x6f\x6e\x2d\x69\x6e\x2d\x68\x69"
  "\x73\x74\x6f\x72\x79\x21\x25\x02\x7c\x04\x83\x04\x03\x0a\x27\x02"
  "\x1a\x04\x63\x64\x72\x28\x03\x06\x66\x6f\x72\x63\x65\x29\x02\x80"
  "\x01\x0a\x81\x83\x02\x7f\x08\x81\x83\x02\x7e\x06\x81\x83\x02\x7d"
  "\x04\x83\x04\x09\x11\x2a\x02\x1b\x04\x63\x61\x72\x2b\x28\x03\x29"
  "\x02\x84\x01\x0a\x81\x83\x02\x83\x01\x08\x81\x83\x02\x82\x01\x06"
  "\x81\x83\x02\x81\x01\x04\x83\x04\x09\x12\x29\x02\x1c\x2b\x85\x01"
  "\x04\x83\x04\x03\x2b\x02\x1d\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d"
  "\x72\x65\x66\x19\x67\x65\x74\x2d\x66\x69\x78\x65\x64\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74\x6f\x72\x0e\x64\x75\x6d"
  "\x6d\x79\x2d\x68\x69\x73\x74\x6f\x72\x79\x22\x02\x03\x1a\x66\x69"
  "\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x73\x6c\x6f\x74\x02\x8a\x01\x0c\x81\x81\x02\x89\x01"
  "\x0a\x81\x81\x02\x88\x01\x08\x81\x83\x02\x87\x01\x06\x81\x81\x02"
  "\x86\x01\x04\x82\x02\x0b\x18\x28\x1d\x28\x04\x2b\x04\x29\x04\x2a"
  "\x04\x27\x04\x26\x04\x04\x24\x04\x21\x04\x1f\x04\x1c\x04\x1b\x04"
  "\x0b\x1a\x04\x0c\x15\x04\x14\x04\x13\x04\x12\x04\x11\x04\x10\x04"
  "\x0f\x04\x19\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x21\x14\x68\x69\x73\x74\x6f\x72\x79\x2d"
  "\x75\x6e\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x13\x68\x69\x73\x74"
  "\x6f\x72\x79\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x73\x15\x68"
  "\x69\x73\x74\x6f\x72\x79\x2d\x73\x75\x70\x65\x72\x70\x72\x6f\x62"
  "\x6c\x65\x6d\x18\x0a\x23\x22\x12\x68\x69\x73\x74\x6f\x72\x79\x2d"
  "\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x0d\x70\x6f\x70\x2d\x68\x69"
  "\x73\x74\x6f\x72\x79\x21\x19\x1f\x73\x65\x74\x2d\x68\x69\x73\x74"
  "\x6f\x72\x79\x2d\x74\x6f\x2d\x6e\x65\x78\x74\x2d\x72\x65\x64\x75"
  "\x63\x74\x69\x6f\x6e\x21\x25\x16\x11\x77\x69\x74\x68\x2d\x6e\x65"
  "\x77\x2d\x68\x69\x73\x74\x6f\x72\x79\x17\x10\x68\x69\x73\x74\x6f"
  "\x72\x79\x3a\x6d\x61\x72\x6b\x65\x64\x3f\x0d\x68\x69\x73\x74\x6f"
  "\x72\x79\x3a\x6d\x61\x72\x6b\x0f\x68\x69\x73\x74\x6f\x72\x79\x3a"
  "\x75\x6e\x6d\x61\x72\x6b\x10\x73\x61\x6d\x65\x2d\x72\x65\x64\x75"
  "\x63\x74\x69\x6f\x6e\x3f\x1e\x12\x6d\x61\x72\x6b\x65\x64\x2d\x72"
  "\x65\x64\x75\x63\x74\x69\x6f\x6e\x3f\x19\x14\x73\x65\x74\x2d\x6e"
  "\x65\x78\x74\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x21\x1b\x73"
  "\x65\x74\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x1a\x73\x65\x74\x2d\x72\x65"
  "\x64\x75\x63\x74\x69\x6f\x6e\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x21\x0f\x6e\x65\x78\x74\x2d\x72\x65\x64\x75\x63\x74\x69"
  "\x6f\x6e\x16\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x15\x72\x65\x64\x75\x63\x74\x69"
  "\x6f\x6e\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x0f\x6d\x61"
  "\x6b\x65\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x0c\x0f\x73\x61"
  "\x6d\x65\x2d\x76\x65\x72\x74\x65\x62\x72\x61\x3f\x20\x1d\x11\x6d"
  "\x61\x72\x6b\x65\x64\x2d\x76\x65\x72\x74\x65\x62\x72\x61\x3f\x0e"
  "\x04\x0d\x04\x0b\x04\x09\x04\x04\x04\x18\x73\x65\x74\x2d\x73\x68"
  "\x61\x6c\x6c\x6f\x77\x65\x72\x2d\x76\x65\x72\x74\x65\x62\x72\x61"
  "\x21\x15\x73\x65\x74\x2d\x64\x65\x65\x70\x65\x72\x2d\x76\x65\x72"
  "\x74\x65\x62\x72\x61\x21\x12\x73\x65\x74\x2d\x76\x65\x72\x74\x65"
  "\x62\x72\x61\x2d\x72\x69\x62\x21\x13\x73\x68\x61\x6c\x6c\x6f\x77"
  "\x65\x72\x2d\x76\x65\x72\x74\x65\x62\x72\x61\x10\x64\x65\x65\x70"
  "\x65\x72\x2d\x76\x65\x72\x74\x65\x62\x72\x61\x0d\x76\x65\x72\x74"
  "\x65\x62\x72\x61\x2d\x72\x69\x62\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0e\x6d\x61\x6b\x65\x2d\x76"
  "\x65\x72\x74\x65\x62\x72\x61\x04\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x12\x73\x79\x73\x74\x65"
  "\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x63\x78\x72\x30\x12\x73\x79\x73"
  "\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x63\x78\x72\x31\x12\x73"
  "\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x63\x78\x72\x32"
  "\x17\x73\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x73\x65"
  "\x74\x2d\x63\x78\x72\x30\x21\x17\x73\x79\x73\x74\x65\x6d\x2d\x68"
  "\x75\x6e\x6b\x33\x2d\x73\x65\x74\x2d\x63\x78\x72\x31\x21\x17\x73"
  "\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x73\x65\x74\x2d"
  "\x63\x78\x72\x32\x21\x07\x1d\x3c\x80\x80\x04\x1c\x3a\x81\x81\x02"
  "\x1b\x38\x81\x81\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x85\x02\x18"
  "\x32\x81\x83\x02\x17\x30\x81\x85\x02\x16\x2e\x81\x83\x02\x15\x2c"
  "\x81\x85\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x85\x02\x12\x26\x81"
  "\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x85"
  "\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x85\x02"
  "\x0b\x18\x81\x83\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08"
  "\x12\x81\x85\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c"
  "\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x83\x02\x02\x06\x81"
  "\x85\x02\x01\x04\x81\x83\x02\x3b\x5d";

SCHEME_OBJECT *
histry_so_data_ceb3795f6363f714 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_histry_so_data_ceb3795f6363f714 [0]))), (sizeof (prog_histry_so_data_ceb3795f6363f714)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_33]));
}

DECLARE_COMPILED_DATA_NS ("histry.so", histry_so_data_ceb3795f6363f714)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("histry.so", "a27d43cd0046e141")
