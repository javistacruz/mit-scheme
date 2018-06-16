/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:50-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto Z__recordP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__recordP_3)
DEFLABEL (Z__recordP_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 62)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_1_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
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
record_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  INVOKE_INTERFACE_DECLS
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
      goto Z__record_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_length_3)
DEFLABEL (Z__record_length_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 62))
    goto label_4;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  Rvl = (MAKE_OBJECT (26, (Wrd10.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
record_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd20;
  INVOKE_INTERFACE_DECLS
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
      goto Z__record_ref_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_ref_3)
DEFLABEL (Z__record_ref_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 2);

DEFLABEL (label_5)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_4;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) (Wrd15.Lng)) < ((unsigned long) (Wrd19.Lng))))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd10.pObj) = (& ((Wrd17.pObj) [(Wrd7.Lng)]));
  Rvl = ((Wrd10.pObj) [1]);
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
record_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
  INVOKE_INTERFACE_DECLS
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
      goto Z__record_setB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_setB_3)
DEFLABEL (Z__record_setB_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 3);

DEFLABEL (label_5)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_4;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd10.pObj) = (& ((Wrd18.pObj) [(Wrd7.Lng)]));
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [1]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 6
#define DEBUGGING_LABEL_5_2 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  INVOKE_INTERFACE_DECLS
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
      goto primitive_object_ref_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_object_ref_3)
DEFLABEL (primitive_object_ref_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd12.Obj) = (Rsp [1]);
  if (! (INDEX_FIXNUM_P (Wrd12.Obj)))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.pObj) = (& ((Wrd9.pObj) [(Wrd7.Lng)]));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 2);

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
record_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd13;
  INVOKE_INTERFACE_DECLS
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
      goto primitive_object_setB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_object_setB_3)
DEFLABEL (primitive_object_setB_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd13.Obj) = (Rsp [1]);
  if (! (INDEX_FIXNUM_P (Wrd13.Obj)))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.pObj) = (& ((Wrd9.pObj) [(Wrd7.Lng)]));
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [0]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_6_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 6
#define DEBUGGING_LABEL_7_2 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS
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
      goto primitive_object_set_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_object_set_type_3)
DEFLABEL (primitive_object_set_type_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 6
#define DEBUGGING_LABEL_8_2 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS
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
      goto vector_cons_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_cons_3)
DEFLABEL (vector_cons_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_6 9
#define ENVIRONMENT_LABEL_9_3 16
#define DEBUGGING_LABEL_9_2 15
#define OBJECT_9_4 14
#define OBJECT_9_3 13
#define OBJECT_9_2 12
#define OBJECT_9_1 11
#define OBJECT_9_0 10
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_9_4);
      goto Z__make_record_4;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_record_8)
DEFLABEL (Z__make_record_4)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 62))
    goto label_10;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_10;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [1]) = (Wrd9.Obj);

DEFLABEL (label_9)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_9_1]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 3);

DEFLABEL (label_6)
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto Z__record_tag_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_tag_3)
DEFLABEL (Z__record_tag_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

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

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 10
#define DEBUGGING_LABEL_11_2 9
#define OBJECT_11_2 8
#define OBJECT_11_1 7
#define OBJECT_11_0 6
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto Z__tagged_recordP_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__tagged_recordP_6)
DEFLABEL (Z__tagged_recordP_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  if (! ((Wrd6.uLng) == 62))
    goto label_11;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_11;
  (Wrd9.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_10)
  (Wrd26.Obj) = (Rsp [0]);
  if (! ((Wrd9.Obj) == (Wrd26.Obj)))
    goto label_8;
  Rvl = (current_block [OBJECT_11_2]);
  goto label_7;

DEFLABEL (label_11)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_11_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define LABEL_12_7 13
#define LABEL_12_10 15
#define LABEL_12_11 17
#define LABEL_12_12 19
#define ENVIRONMENT_LABEL_12_3 29
#define DEBUGGING_LABEL_12_2 28
#define OBJECT_12_7 27
#define OBJECT_12_6 26
#define OBJECT_12_5 25
#define OBJECT_12_4 24
#define OBJECT_12_3 23
#define OBJECT_12_2 22
#define OBJECT_12_1 21
#define OBJECT_12_0 20
#define FREE_REFERENCES_LABEL_12_0 20
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  INVOKE_INTERFACE_DECLS
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
      goto Z__copy_record_17;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_12_10);
      goto do_loop_13;

    case 7:
      current_block = (Rpc - LABEL_12_11);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_12_12);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__copy_record_25)
DEFLABEL (Z__copy_record_17)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 62))
    goto label_32;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_7]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_30;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_30;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_29)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_28;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd31.Lng))))
    goto label_28;
  ((Wrd29.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_27)
  (Wrd22.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd23.Obj);
  goto do_loop_13;

DEFLABEL (label_28)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_12_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_21)
  goto label_27;

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_12_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 2);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (do_loop_26)
DEFLABEL (do_loop_13)
  INTERRUPT_CHECK (26, LABEL_12_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_33;
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_37;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_37;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_37;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd12.pObj) = (& ((Wrd18.pObj) [(Wrd9.Lng)]));
  (Wrd7.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_36)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_35;
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_35;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) (Wrd40.Lng)) < ((unsigned long) (Wrd44.Lng))))
    goto label_35;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd37.Obj));
  (Wrd36.pObj) = (& ((Wrd42.pObj) [(Wrd33.Lng)]));
  ((Wrd36.pObj) [1]) = (Wrd7.Obj);

DEFLABEL (label_34)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd31.Lng) = ((Wrd30.Lng) + 1L);
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (Rsp [0]) = (Wrd28.Obj);
  goto do_loop_13;

DEFLABEL (label_35)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 3);

DEFLABEL (label_23)
  goto label_34;

DEFLABEL (label_37)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 2);

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_8 7
#define LABEL_13_9 9
#define LABEL_13_10 11
#define LABEL_13_11 13
#define LABEL_13_5 15
#define LABEL_13_6 17
#define ENVIRONMENT_LABEL_13_3 35
#define DEBUGGING_LABEL_13_2 34
#define OBJECT_13_6 33
#define OBJECT_13_5 32
#define OBJECT_13_4 31
#define OBJECT_13_3 30
#define OBJECT_13_2 29
#define OBJECT_13_1 28
#define OBJECT_13_0 27
#define EXECUTE_CACHE_13_13 19
#define EXECUTE_CACHE_13_12 21
#define FREE_REFERENCE_13_0 24
#define FREE_ASSIGNMENT_13_0 26
#define FREE_REFERENCES_LABEL_13_0 18
#define NUMBER_OF_LINKER_SECTIONS_13_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_13_4);
      goto initialize_record_type_typeB_6;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_13_11);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_record_type_typeB_13)
DEFLABEL (initialize_record_type_typeB_6)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd16.Obj) = (current_block [OBJECT_13_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13_6]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-7]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_23)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_22;
  Wrd19 = Wrd23;

DEFLABEL (label_21)
  Wrd18 = Wrd19;
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 62))
    goto label_20;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd53.Lng))))
    goto label_20;
  ((Wrd51.pObj) [1]) = (Wrd19.Obj);

DEFLABEL (label_19)
  (Wrd25.Obj) = (current_block [OBJECT_13_4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_18;
  Wrd28 = Wrd32;

DEFLABEL (label_17)
  (Rsp [2]) = (Wrd28.Obj);
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 62)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 3);

DEFLABEL (label_15)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd43.Lng))))
    goto label_14;
  ((Wrd41.pObj) [2]) = (Wrd28.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_11])), (Wrd29.pObj));

DEFLABEL (label_10)
  (Wrd28.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (current_block [OBJECT_13_2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 3);

DEFLABEL (label_11)
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_9])), (Wrd20.pObj));

DEFLABEL (label_9)
  (Wrd19.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_8)
  goto label_23;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_5);
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_8 9
#define LABEL_14_9 11
#define LABEL_14_14 13
#define LABEL_14_11 15
#define LABEL_14_16 17
#define LABEL_14_12 19
#define TAG_14_13 8
#define LABEL_14_19 21
#define LABEL_14_20 23
#define LABEL_14_17 25
#define LABEL_14_24 27
#define LABEL_14_25 29
#define LABEL_14_26 31
#define LABEL_14_27 33
#define LABEL_14_29 35
#define LABEL_14_18 37
#define LABEL_14_36 39
#define LABEL_14_21 41
#define LABEL_14_37 43
#define LABEL_14_22 45
#define LABEL_14_28 47
#define LABEL_14_44 49
#define LABEL_14_30 51
#define LABEL_14_46 53
#define LABEL_14_47 55
#define LABEL_14_32 57
#define TAG_14_33 27
#define LABEL_14_34 59
#define TAG_14_35 28
#define LABEL_14_49 61
#define LABEL_14_50 63
#define LABEL_14_52 65
#define LABEL_14_41 67
#define LABEL_14_42 69
#define LABEL_14_54 71
#define LABEL_14_39 73
#define LABEL_14_38 75
#define LABEL_14_45 77
#define LABEL_14_59 79
#define LABEL_14_61 81
#define LABEL_14_56 83
#define LABEL_14_57 85
#define LABEL_14_63 87
#define LABEL_14_60 89
#define LABEL_14_67 91
#define LABEL_14_62 93
#define LABEL_14_65 95
#define LABEL_14_66 97
#define LABEL_14_68 99
#define LABEL_14_70 101
#define LABEL_14_73 103
#define LABEL_14_69 105
#define LABEL_14_74 107
#define LABEL_14_72 109
#define LABEL_14_77 111
#define LABEL_14_78 113
#define LABEL_14_75 115
#define LABEL_14_79 117
#define TAG_14_80 57
#define LABEL_14_82 119
#define LABEL_14_83 121
#define ENVIRONMENT_LABEL_14_3 192
#define DEBUGGING_LABEL_14_2 191
#define OBJECT_14_18 190
#define OBJECT_14_17 189
#define OBJECT_14_16 188
#define OBJECT_14_15 187
#define OBJECT_14_14 186
#define OBJECT_14_13 185
#define OBJECT_14_12 184
#define OBJECT_14_11 183
#define OBJECT_14_10 182
#define OBJECT_14_9 181
#define OBJECT_14_8 180
#define OBJECT_14_7 179
#define OBJECT_14_6 178
#define OBJECT_14_5 177
#define OBJECT_14_4 176
#define OBJECT_14_3 175
#define OBJECT_14_2 174
#define OBJECT_14_1 173
#define OBJECT_14_0 172
#define EXECUTE_CACHE_14_84 123
#define EXECUTE_CACHE_14_81 125
#define EXECUTE_CACHE_14_76 127
#define EXECUTE_CACHE_14_71 129
#define EXECUTE_CACHE_14_64 131
#define EXECUTE_CACHE_14_58 133
#define EXECUTE_CACHE_14_55 135
#define EXECUTE_CACHE_14_53 137
#define EXECUTE_CACHE_14_51 139
#define EXECUTE_CACHE_14_48 141
#define EXECUTE_CACHE_14_43 143
#define EXECUTE_CACHE_14_40 145
#define EXECUTE_CACHE_14_31 147
#define EXECUTE_CACHE_14_23 149
#define EXECUTE_CACHE_14_15 151
#define EXECUTE_CACHE_14_10 153
#define EXECUTE_CACHE_14_6 155
#define FREE_REFERENCE_14_6 158
#define FREE_REFERENCE_14_5 159
#define FREE_REFERENCE_14_4 160
#define FREE_REFERENCE_14_3 161
#define FREE_REFERENCE_14_2 162
#define FREE_REFERENCE_14_1 163
#define FREE_REFERENCE_14_0 164
#define FREE_ASSIGNMENT_14_5 166
#define FREE_ASSIGNMENT_14_4 167
#define FREE_ASSIGNMENT_14_3 168
#define FREE_ASSIGNMENT_14_2 169
#define FREE_ASSIGNMENT_14_1 170
#define FREE_ASSIGNMENT_14_0 171
#define FREE_REFERENCES_LABEL_14_0 122
#define NUMBER_OF_LINKER_SECTIONS_14_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_14_4);
      goto initialize_record_proceduresB_67;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto label_69;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_27;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_14_14);
      goto label_70;

    case 6:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_28;

    case 7:
      current_block = (Rpc - LABEL_14_16);
      goto label_71;

    case 8:
      current_block = (Rpc - LABEL_14_12);
      goto lambda_95;

    case 9:
      current_block = (Rpc - LABEL_14_19);
      goto label_72;

    case 10:
      current_block = (Rpc - LABEL_14_20);
      goto label_73;

    case 11:
      current_block = (Rpc - LABEL_14_17);
      goto continuation_36;

    case 12:
      current_block = (Rpc - LABEL_14_24);
      goto label_74;

    case 13:
      current_block = (Rpc - LABEL_14_25);
      goto label_75;

    case 14:
      current_block = (Rpc - LABEL_14_26);
      goto label_76;

    case 15:
      current_block = (Rpc - LABEL_14_27);
      goto label_77;

    case 16:
      current_block = (Rpc - LABEL_14_29);
      goto label_78;

    case 17:
      current_block = (Rpc - LABEL_14_18);
      goto continuation_29;

    case 18:
      current_block = (Rpc - LABEL_14_36);
      goto label_79;

    case 19:
      current_block = (Rpc - LABEL_14_21);
      goto continuation_6;

    case 20:
      current_block = (Rpc - LABEL_14_37);
      goto label_80;

    case 21:
      current_block = (Rpc - LABEL_14_22);
      goto continuation_5;

    case 22:
      current_block = (Rpc - LABEL_14_28);
      goto continuation_40;

    case 23:
      current_block = (Rpc - LABEL_14_44);
      goto label_81;

    case 24:
      current_block = (Rpc - LABEL_14_30);
      goto lambda_39;

    case 25:
      current_block = (Rpc - LABEL_14_46);
      goto label_82;

    case 26:
      current_block = (Rpc - LABEL_14_47);
      goto label_83;

    case 27:
      current_block = (Rpc - LABEL_14_32);
      goto lambda_96;

    case 28:
      current_block = (Rpc - LABEL_14_34);
      goto lambda_97;

    case 29:
      current_block = (Rpc - LABEL_14_49);
      goto continuation_20;

    case 30:
      current_block = (Rpc - LABEL_14_50);
      goto label_89;

    case 31:
      current_block = (Rpc - LABEL_14_52);
      goto continuation_19;

    case 32:
      current_block = (Rpc - LABEL_14_41);
      goto continuation_18;

    case 33:
      current_block = (Rpc - LABEL_14_42);
      goto continuation_16;

    case 34:
      current_block = (Rpc - LABEL_14_54);
      goto label_84;

    case 35:
      current_block = (Rpc - LABEL_14_39);
      goto continuation_8;

    case 36:
      current_block = (Rpc - LABEL_14_38);
      goto lambda_15;

    case 37:
      current_block = (Rpc - LABEL_14_45);
      goto continuation_41;

    case 38:
      current_block = (Rpc - LABEL_14_59);
      goto label_85;

    case 39:
      current_block = (Rpc - LABEL_14_61);
      goto label_86;

    case 40:
      current_block = (Rpc - LABEL_14_56);
      goto lambda_12;

    case 41:
      current_block = (Rpc - LABEL_14_57);
      goto continuation_13;

    case 42:
      current_block = (Rpc - LABEL_14_63);
      goto label_87;

    case 43:
      current_block = (Rpc - LABEL_14_60);
      goto lambda_66;

    case 44:
      current_block = (Rpc - LABEL_14_67);
      goto label_88;

    case 45:
      current_block = (Rpc - LABEL_14_62);
      goto continuation_10;

    case 46:
      current_block = (Rpc - LABEL_14_65);
      goto continuation_44;

    case 47:
      current_block = (Rpc - LABEL_14_66);
      goto continuation_43;

    case 48:
      current_block = (Rpc - LABEL_14_68);
      goto continuation_11;

    case 49:
      current_block = (Rpc - LABEL_14_70);
      goto lambda_65;

    case 50:
      current_block = (Rpc - LABEL_14_73);
      goto label_90;

    case 51:
      current_block = (Rpc - LABEL_14_69);
      goto lambda_56;

    case 52:
      current_block = (Rpc - LABEL_14_74);
      goto label_91;

    case 53:
      current_block = (Rpc - LABEL_14_72);
      goto continuation_58;

    case 54:
      current_block = (Rpc - LABEL_14_77);
      goto loop_54;

    case 55:
      current_block = (Rpc - LABEL_14_78);
      goto label_92;

    case 56:
      current_block = (Rpc - LABEL_14_75);
      goto continuation_63;

    case 57:
      current_block = (Rpc - LABEL_14_79);
      goto lambda_105;

    case 58:
      current_block = (Rpc - LABEL_14_82);
      goto continuation_59;

    case 59:
      current_block = (Rpc - LABEL_14_83);
      goto continuation_60;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_record_proceduresB_94)
DEFLABEL (initialize_record_proceduresB_67)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_135;

DEFLABEL (label_134)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_133)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd25.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_12])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_132;
  Wrd11 = Wrd15;

DEFLABEL (label_131)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_14_11);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_130;

DEFLABEL (label_129)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_128)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd25.Obj) = (current_block [OBJECT_14_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_14_18);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_32])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_34])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  ((Wrd14.pObj) [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_4]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_127;
  Wrd17 = Wrd21;

DEFLABEL (label_126)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_14_17);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_125;
  Wrd5 = Wrd9;

DEFLABEL (label_124)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_2]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_123;

DEFLABEL (label_122)
  ((Wrd11.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_121)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_120;
  Wrd23 = Wrd27;

DEFLABEL (label_119)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_3]));
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_118;

DEFLABEL (label_117)
  ((Wrd29.pObj) [0]) = (Wrd23.Obj);

DEFLABEL (label_116)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_28]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_3]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_115;
  Wrd44 = Wrd48;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_30]))));
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_31]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_14_28);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_4]));
  (Wrd6.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd15.Obj) = ((Wrd5.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_113;

DEFLABEL (label_112)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_111)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_45]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_14_10]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_14_45);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_110;

DEFLABEL (label_109)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_108)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_60]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_6]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_107;
  Wrd20 = Wrd24;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_61])), (Wrd21.pObj));

DEFLABEL (label_86)
  (Wrd20.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_110)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_109;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_59])), (Wrd6.pObj), Rvl);

DEFLABEL (label_85)
  goto label_108;

DEFLABEL (label_113)
  if ((Wrd15.Obj) == (Wrd6.Obj))
    goto label_112;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_44])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_81)
  goto label_111;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_29])), (Wrd45.pObj));

DEFLABEL (label_78)
  (Wrd44.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_118)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_117;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_27])), (Wrd29.pObj), (Wrd23.Obj));

DEFLABEL (label_77)
  goto label_116;

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_26])), (Wrd24.pObj));

DEFLABEL (label_76)
  (Wrd23.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_123)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_122;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_25])), (Wrd11.pObj), (Wrd5.Obj));

DEFLABEL (label_75)
  goto label_121;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_24])), (Wrd6.pObj));

DEFLABEL (label_74)
  (Wrd5.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_36])), (Wrd18.pObj));

DEFLABEL (label_79)
  (Wrd17.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_130)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_129;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_16])), (Wrd6.pObj), Rvl);

DEFLABEL (label_71)
  goto label_128;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_14])), (Wrd12.pObj));

DEFLABEL (label_70)
  (Wrd11.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_135)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_134;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_69)
  goto label_133;

DEFLABEL (lambda_95)
  CLOSURE_HEADER (LABEL_14_12);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_150;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_149)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_148;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_147)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_22]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_43]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_142;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_41]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_42]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_14_42);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_141;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd12.Lng))))
    goto label_141;
  (Wrd7.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_140)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_52]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_14_14]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_55]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_14_52);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_138;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_49]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_53]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_14_49);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_138;
  (Wrd18.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd26.uLng) == 30))
    goto label_137;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (Wrd20.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));

DEFLABEL (label_136)
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd33.Lng) = ((Wrd32.Lng) - 1L);
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (Rsp [2]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_51]));

DEFLABEL (label_137)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_50]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_11]), 1);

DEFLABEL (label_89)
  (Wrd20.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_138)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_139)
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (label_141)
  (Wrd15.Obj) = (current_block [OBJECT_14_1]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_54]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_13]), 2);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_140;

DEFLABEL (label_142)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_5]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_146;
  Wrd15 = Wrd19;

DEFLABEL (label_145)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == (Wrd15.Obj)))
    goto label_143;
  (Wrd26.Obj) = (current_block [OBJECT_14_8]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_38]))));
  (Rsp [3]) = (Wrd27.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (label_143)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_39]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_14_9]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_40]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_39);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_144;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_144)
  (Wrd11.Obj) = (current_block [OBJECT_14_9]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_56]))));
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_37])), (Wrd16.pObj));

DEFLABEL (label_80)
  (Wrd15.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_7]), 1);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_6]), 1);

DEFLABEL (label_72)
  (Wrd5.Obj) = Rvl;
  goto label_149;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_14_41);
  (Wrd5.Obj) = Rvl;
  goto label_139;

DEFLABEL (lambda_98)
DEFLABEL (lambda_39)
  INTERRUPT_CHECK (26, LABEL_14_30);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_154;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_153)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_152;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_151)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_48]));

DEFLABEL (label_152)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_47]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_6]), 1);

DEFLABEL (label_83)
  (Wrd14.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_46]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_7]), 1);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_153;

DEFLABEL (lambda_96)
  CLOSURE_HEADER (LABEL_14_32);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_97)
  CLOSURE_HEADER (LABEL_14_34);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_99)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_14_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_58]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_14_57);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_156;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_156;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_155)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_64]));

DEFLABEL (label_156)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_14_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_63]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_13]), 2);

DEFLABEL (label_87)
  (Wrd5.Obj) = Rvl;
  goto label_155;

DEFLABEL (lambda_100)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_14_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_58]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_23]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14_68);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_71]));

DEFLABEL (lambda_101)
DEFLABEL (lambda_66)
  INTERRUPT_CHECK (26, LABEL_14_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_66]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_161;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_160)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_23]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_14_66);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_43]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_14_65);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_158;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_70]))));
  goto label_157;

DEFLABEL (label_158)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_69]))));

DEFLABEL (label_157)
DEFLABEL (label_159)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_161)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_67]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_7]), 1);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_160;

DEFLABEL (lambda_102)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_14_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_163;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_163;
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_162)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_23]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_14_72);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_76]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_14_75);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_80);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_79])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_81]));

DEFLABEL (label_163)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_14_16]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_73]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_13]), 2);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_162;

DEFLABEL (lambda_103)
DEFLABEL (lambda_56)
  INTERRUPT_CHECK (26, LABEL_14_69);
  (Wrd5.Obj) = (current_block [OBJECT_14_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 62))
    goto label_165;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd10.Obj));
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));

DEFLABEL (label_164)
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd19.Lng) = ((Wrd18.Lng) - 1L);
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd20.Obj);
  goto loop_54;

DEFLABEL (label_165)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_74]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_18]), 1);

DEFLABEL (label_91)
  (Wrd6.Obj) = Rvl;
  goto label_164;

DEFLABEL (loop_104)
DEFLABEL (loop_54)
  INTERRUPT_CHECK (26, LABEL_14_77);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd6.Lng) < 0))
    goto label_166;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_166)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_168;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_168;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_168;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd12.pObj) = (& ((Wrd18.pObj) [(Wrd9.Lng)]));
  (Wrd7.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_167)
  (Wrd31.Obj) = (current_block [OBJECT_14_17]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd35.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Wrd39.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd43.Lng) = ((Wrd42.Lng) - 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (Rsp [0]) = (Wrd40.Obj);
  goto loop_54;

DEFLABEL (label_168)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_78]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_13]), 2);

DEFLABEL (label_92)
  (Wrd7.Obj) = Rvl;
  goto label_167;

DEFLABEL (lambda_105)
  CLOSURE_HEADER (LABEL_14_79);

DEFLABEL (lambda_62)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_83]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_84]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_14_83);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_14_82);
  (Wrd9.Obj) = (current_block [OBJECT_14_17]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_8 9
#define LABEL_15_9 11
#define LABEL_15_11 13
#define LABEL_15_12 15
#define LABEL_15_15 17
#define LABEL_15_16 19
#define LABEL_15_17 21
#define LABEL_15_13 23
#define LABEL_15_18 25
#define ENVIRONMENT_LABEL_15_3 49
#define DEBUGGING_LABEL_15_2 48
#define OBJECT_15_6 47
#define OBJECT_15_5 46
#define OBJECT_15_4 45
#define OBJECT_15_3 44
#define OBJECT_15_2 43
#define OBJECT_15_1 42
#define OBJECT_15_0 41
#define EXECUTE_CACHE_15_21 27
#define EXECUTE_CACHE_15_20 29
#define EXECUTE_CACHE_15_19 31
#define EXECUTE_CACHE_15_14 33
#define EXECUTE_CACHE_15_10 35
#define EXECUTE_CACHE_15_6 37
#define FREE_REFERENCE_15_0 40
#define FREE_REFERENCES_LABEL_15_0 26
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_15_4);
      goto make_record_type_19;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_15_12);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_15_15);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_15_16);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_15_17);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_15_13);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_15_18);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_record_type_25)
DEFLABEL (make_record_type_19)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 10))
    goto label_35;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_33;
  Wrd6 = Wrd10;

DEFLABEL (label_32)
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (* (Rsp++));
  (Wrd21.Obj) = (MAKE_OBJECT (0, 6));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd16.pObj) = (& (Rhp [-7]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (62, (Wrd16.pObj)));
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_13);
  (* (--Rsp)) = Rvl;
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_31;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_31;
  ((Wrd35.pObj) [2]) = Rvl;

DEFLABEL (label_30)
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == (current_block [OBJECT_15_6]))
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_15_17);

DEFLABEL (label_29)
  (Wrd13.Obj) = (Rsp [5]);
  if ((Wrd13.Obj) == (current_block [OBJECT_15_6]))
    goto label_28;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15_16);

DEFLABEL (label_28)
  (Wrd20.Obj) = (Rsp [6]);
  if (! ((Wrd20.Obj) == (current_block [OBJECT_15_6])))
    goto label_27;

DEFLABEL (label_26)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_15_15);
  goto label_26;

DEFLABEL (label_31)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_15_4]);
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_18]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 3);

DEFLABEL (label_23)
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_12])), (Wrd7.pObj));

DEFLABEL (label_22)
  (Wrd6.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define ENVIRONMENT_LABEL_16_3 14
#define DEBUGGING_LABEL_16_2 13
#define OBJECT_16_2 12
#define OBJECT_16_1 11
#define OBJECT_16_0 10
#define FREE_REFERENCE_16_0 9
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      goto record_typeP_2;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_typeP_7)
DEFLABEL (record_typeP_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_12;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd23.Lng))))
    goto label_12;
  (Wrd15.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_11)
  (Wrd31.Obj) = (* (Rsp++));
  if (! ((Wrd15.Obj) == (Wrd31.Obj)))
    goto label_9;
  Rvl = (current_block [OBJECT_16_2]);
  goto label_8;

DEFLABEL (label_12)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (current_block [OBJECT_16_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define OBJECT_17_1 10
#define OBJECT_17_0 9
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto Z__record_type_descriptor_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_type_descriptor_5)
DEFLABEL (Z__record_type_descriptor_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_17_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 7
#define DEBUGGING_LABEL_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto Z__record_type_dispatch_tag_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_type_dispatch_tag_3)
DEFLABEL (Z__record_type_dispatch_tag_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

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

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 7
#define DEBUGGING_LABEL_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__record_type_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_type_name_3)
DEFLABEL (Z__record_type_name_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

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

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 7
#define DEBUGGING_LABEL_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__record_type_field_names_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_type_field_names_3)
DEFLABEL (Z__record_type_field_names_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

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

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 7
#define DEBUGGING_LABEL_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__record_type_default_inits_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_type_default_inits_3)
DEFLABEL (Z__record_type_default_inits_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

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

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 7
#define DEBUGGING_LABEL_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__record_type_extension_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_type_extension_3)
DEFLABEL (Z__record_type_extension_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

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
record_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__set_record_type_extensionB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__set_record_type_extensionB_3)
DEFLABEL (Z__set_record_type_extensionB_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
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
#define OBJECT_24_2 8
#define OBJECT_24_1 7
#define OBJECT_24_0 6
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_24_4);
      goto Z__record_type_n_fields_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_type_n_fields_5)
DEFLABEL (Z__record_type_n_fields_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_6;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  Rvl = (MAKE_OBJECT (26, (Wrd25.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_24_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define ENVIRONMENT_LABEL_25_3 12
#define DEBUGGING_LABEL_25_2 11
#define OBJECT_25_2 10
#define OBJECT_25_1 9
#define OBJECT_25_0 8
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_25_4);
      goto Z__record_type_length_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_type_length_7)
DEFLABEL (Z__record_type_length_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_10)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_9;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd21.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));

DEFLABEL (label_8)
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd32.Lng) = ((Wrd31.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd32.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_25_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 13
#define DEBUGGING_LABEL_26_2 12
#define OBJECT_26_2 11
#define OBJECT_26_1 10
#define OBJECT_26_0 9
#define EXECUTE_CACHE_26_6 7
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto record_type_dispatch_tag_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_type_dispatch_tag_4)
DEFLABEL (record_type_dispatch_tag_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 13
#define DEBUGGING_LABEL_27_2 12
#define OBJECT_27_2 11
#define OBJECT_27_1 10
#define OBJECT_27_0 9
#define EXECUTE_CACHE_27_6 7
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto record_type_name_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_type_name_4)
DEFLABEL (record_type_name_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_8 9
#define ENVIRONMENT_LABEL_28_3 20
#define DEBUGGING_LABEL_28_2 19
#define OBJECT_28_5 18
#define OBJECT_28_4 17
#define OBJECT_28_3 16
#define OBJECT_28_2 15
#define OBJECT_28_1 14
#define OBJECT_28_0 13
#define EXECUTE_CACHE_28_6 11
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_28_4);
      goto record_type_field_names_4;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_type_field_names_9)
DEFLABEL (record_type_field_names_4)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_13;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_28_3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_11;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd23.Obj) = (MAKE_OBJECT (26, (Wrd27.uLng)));

DEFLABEL (label_10)
  (Rsp [2]) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_5]), 3);

DEFLABEL (label_11)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 1);

DEFLABEL (label_7)
  (Wrd23.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_28_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define ENVIRONMENT_LABEL_29_3 17
#define DEBUGGING_LABEL_29_2 16
#define OBJECT_29_2 15
#define OBJECT_29_1 14
#define OBJECT_29_0 13
#define EXECUTE_CACHE_29_8 9
#define EXECUTE_CACHE_29_6 11
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto record_type_default_inits_2;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_type_default_inits_6)
DEFLABEL (record_type_default_inits_2)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_29_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 13
#define DEBUGGING_LABEL_30_2 12
#define OBJECT_30_0 11
#define EXECUTE_CACHE_30_7 7
#define EXECUTE_CACHE_30_6 9
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_30_4);
      goto set_record_type_default_initsB_2;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_record_type_default_initsB_5)
DEFLABEL (set_record_type_default_initsB_2)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_7 9
#define LABEL_31_8 11
#define LABEL_31_9 13
#define ENVIRONMENT_LABEL_31_3 22
#define DEBUGGING_LABEL_31_2 21
#define OBJECT_31_6 20
#define OBJECT_31_5 19
#define OBJECT_31_4 18
#define OBJECT_31_3 17
#define OBJECT_31_2 16
#define OBJECT_31_1 15
#define OBJECT_31_0 14
#define FREE_REFERENCES_LABEL_31_0 14
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd22;
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
      goto Z__set_record_type_default_initsB_12;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto do_loop_9;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_31_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_31_9);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__set_record_type_default_initsB_19)
DEFLABEL (Z__set_record_type_default_initsB_12)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd21.Obj) = (current_block [OBJECT_31_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto do_loop_9;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_31_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (do_loop_20)
DEFLABEL (do_loop_9)
  INTERRUPT_CHECK (26, LABEL_31_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_24;
  (Wrd7.Obj) = (current_block [OBJECT_31_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_23;

DEFLABEL (label_24)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_23)
DEFLABEL (label_32)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_31;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_30)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_29;
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_29;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) (Wrd43.Lng)) < ((unsigned long) (Wrd47.Lng))))
    goto label_29;
  (Wrd36.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd39.pObj) = (& ((Wrd45.pObj) [(Wrd36.Lng)]));
  ((Wrd39.pObj) [1]) = (Wrd12.Obj);

DEFLABEL (label_28)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_27;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd32.Lng) + 1L);
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (Rsp [2]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_9;

DEFLABEL (label_27)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 1);

DEFLABEL (label_16)
  (Wrd21.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_5]), 3);

DEFLABEL (label_17)
  goto label_28;

DEFLABEL (label_31)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 1);

DEFLABEL (label_15)
  (Wrd12.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_10 9
#define LABEL_32_7 11
#define LABEL_32_8 13
#define LABEL_32_13 15
#define LABEL_32_14 17
#define LABEL_32_15 19
#define LABEL_32_16 21
#define ENVIRONMENT_LABEL_32_3 39
#define DEBUGGING_LABEL_32_2 38
#define OBJECT_32_8 37
#define OBJECT_32_7 36
#define OBJECT_32_6 35
#define OBJECT_32_5 34
#define OBJECT_32_4 33
#define OBJECT_32_3 32
#define OBJECT_32_2 31
#define OBJECT_32_1 30
#define OBJECT_32_0 29
#define EXECUTE_CACHE_32_12 23
#define EXECUTE_CACHE_32_11 25
#define EXECUTE_CACHE_32_9 27
#define FREE_REFERENCES_LABEL_32_0 22
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_32_4);
      goto Z__set_record_type_default_initsB_19;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_32_8);
      goto lambda_3;

    case 6:
      current_block = (Rpc - LABEL_32_13);
      goto do_loop_16;

    case 7:
      current_block = (Rpc - LABEL_32_14);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_32_15);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_32_16);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__set_record_type_default_initsB_27)
DEFLABEL (Z__set_record_type_default_initsB_19)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_35;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_35;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_34)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_33;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_32)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (Wrd5.Obj) = (* (Rsp++));
  if (! (Rvl == (Wrd5.Obj)))
    goto label_31;

DEFLABEL (label_30)
  (Wrd12.Obj) = (current_block [OBJECT_32_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto do_loop_16;

DEFLABEL (label_31)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_32_10);
  goto label_30;

DEFLABEL (label_33)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_32_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (lambda_28)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_32_8);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_36;

DEFLABEL (label_37)
  (Wrd13.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_36)
DEFLABEL (label_39)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (do_loop_29)
DEFLABEL (do_loop_16)
  INTERRUPT_CHECK (26, LABEL_32_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_41;
  (Wrd7.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_40;

DEFLABEL (label_41)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_40)
DEFLABEL (label_49)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_48;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_47)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_46;
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_46;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) (Wrd43.Lng)) < ((unsigned long) (Wrd47.Lng))))
    goto label_46;
  (Wrd36.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd39.pObj) = (& ((Wrd45.pObj) [(Wrd36.Lng)]));
  ((Wrd39.pObj) [1]) = (Wrd12.Obj);

DEFLABEL (label_45)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_44;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_43)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd32.Lng) + 1L);
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (Rsp [2]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_16;

DEFLABEL (label_44)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_8]), 1);

DEFLABEL (label_24)
  (Wrd21.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_7]), 3);

DEFLABEL (label_25)
  goto label_45;

DEFLABEL (label_48)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 1);

DEFLABEL (label_23)
  (Wrd12.Obj) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define ENVIRONMENT_LABEL_33_3 13
#define DEBUGGING_LABEL_33_2 12
#define OBJECT_33_0 11
#define EXECUTE_CACHE_33_7 7
#define EXECUTE_CACHE_33_6 9
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto record_type_default_value_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_type_default_value_4)
DEFLABEL (record_type_default_value_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define ENVIRONMENT_LABEL_34_3 12
#define DEBUGGING_LABEL_34_2 11
#define OBJECT_34_2 10
#define OBJECT_34_1 9
#define OBJECT_34_0 8
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_34_4);
      goto record_type_default_value_by_index_4;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_type_default_value_by_index_9)
DEFLABEL (record_type_default_value_by_index_4)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_13)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd23.Lng) - 1L);
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_12;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_12;
  Wrd30 = Wrd24;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) (Wrd30.Lng)) < ((unsigned long) (Wrd33.Lng))))
    goto label_12;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd28.pObj) = (& ((Wrd31.pObj) [(Wrd26.Lng)]));
  (Wrd25.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd40.Obj) = (Rsp [0]);
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (label_7)
  (Wrd25.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_34_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define ENVIRONMENT_LABEL_35_3 13
#define DEBUGGING_LABEL_35_2 12
#define OBJECT_35_2 11
#define OBJECT_35_1 10
#define OBJECT_35_0 9
#define EXECUTE_CACHE_35_6 7
#define FREE_REFERENCES_LABEL_35_0 6
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto record_type_extension_1;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_type_extension_4)
DEFLABEL (record_type_extension_1)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_35_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define ENVIRONMENT_LABEL_36_3 14
#define DEBUGGING_LABEL_36_2 13
#define OBJECT_36_3 12
#define OBJECT_36_2 11
#define OBJECT_36_1 10
#define OBJECT_36_0 9
#define EXECUTE_CACHE_36_6 7
#define FREE_REFERENCES_LABEL_36_0 6
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto set_record_type_extensionB_1;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_record_type_extensionB_4)
DEFLABEL (set_record_type_extensionB_1)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_36_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 3);

DEFLABEL (label_6)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_5;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_36_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_7 9
#define LABEL_37_8 11
#define LABEL_37_9 13
#define LABEL_37_10 15
#define LABEL_37_11 17
#define LABEL_37_12 19
#define ENVIRONMENT_LABEL_37_3 29
#define DEBUGGING_LABEL_37_2 28
#define OBJECT_37_3 27
#define OBJECT_37_2 26
#define OBJECT_37_1 25
#define OBJECT_37_0 24
#define FREE_REFERENCE_37_0 21
#define FREE_ASSIGNMENT_37_0 23
#define FREE_REFERENCES_LABEL_37_0 20
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_37_4);
      goto set_record_type_unparser_methodB_booting_11;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_37_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_37_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_37_10);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_37_11);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_37_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_record_type_unparser_methodB_booting_21)
DEFLABEL (set_record_type_unparser_methodB_booting_11)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_24;
  Wrd5 = Wrd9;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_9;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_5])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (loop_22)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_37_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_30;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_29;
  Wrd8 = Wrd12;

DEFLABEL (label_28)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_37_0]));
  (Wrd30.Obj) = ((Wrd22.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd22.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_37_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_37_12])), (Wrd22.pObj), (Wrd19.Obj));

DEFLABEL (label_15)
  goto label_25;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_11])), (Wrd9.pObj));

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  if (! ((Wrd6.uLng) == 1))
    goto label_40;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_39)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_38;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd45.Obj) = ((Wrd46.pObj) [0]);

DEFLABEL (label_37)
  (Wrd52.Obj) = (Rsp [1]);
  if ((Wrd45.Obj) == (Wrd52.Obj))
    goto label_33;
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_32;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd53.Obj);
  goto loop_9;

DEFLABEL (label_32)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 1);

DEFLABEL (label_18)
  (Wrd53.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_36;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd62.Obj) = ((Wrd64.pObj) [0]);

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd62.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd76.Obj) = (Rsp [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_34;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd74.Obj) = (Rsp [1]);
  ((Wrd73.pObj) [1]) = (Wrd74.Obj);
  Rvl = (current_block [OBJECT_37_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_36)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_19)
  (Wrd62.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_17)
  (Wrd45.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_16)
  (Wrd36.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_7 5
#define LABEL_38_5 7
#define LABEL_38_8 9
#define LABEL_38_11 11
#define LABEL_38_9 13
#define LABEL_38_14 15
#define LABEL_38_10 17
#define LABEL_38_18 19
#define LABEL_38_15 21
#define TAG_38_16 9
#define LABEL_38_20 23
#define LABEL_38_21 25
#define ENVIRONMENT_LABEL_38_3 48
#define DEBUGGING_LABEL_38_2 47
#define OBJECT_38_6 46
#define OBJECT_38_5 45
#define OBJECT_38_4 44
#define OBJECT_38_3 43
#define OBJECT_38_2 42
#define OBJECT_38_1 41
#define OBJECT_38_0 40
#define EXECUTE_CACHE_38_19 27
#define EXECUTE_CACHE_38_17 29
#define EXECUTE_CACHE_38_13 31
#define EXECUTE_CACHE_38_12 33
#define EXECUTE_CACHE_38_6 35
#define FREE_REFERENCE_38_1 38
#define FREE_REFERENCE_38_0 39
#define FREE_REFERENCES_LABEL_38_0 26
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_38_4);
      goto set_record_type_unparser_methodB_12;

    case 1:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_38_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_38_11);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_38_14);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_38_10);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_38_18);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_38_15);
      goto lambda_22;

    case 10:
      current_block = (Rpc - LABEL_38_20);
      goto label_18;

    case 11:
      current_block = (Rpc - LABEL_38_21);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_record_type_unparser_methodB_21)
DEFLABEL (set_record_type_unparser_methodB_12)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_7);

DEFLABEL (label_32)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_31;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_31;
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_30)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_29;
  Wrd34 = Wrd38;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_10);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_38_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_27;
  Wrd14 = Wrd18;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_38_9);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_23;
  Rvl = (current_block [OBJECT_38_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_25;
  Wrd8 = Wrd12;

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_15])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_17]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_14])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_18])), (Wrd15.pObj));

DEFLABEL (label_17)
  (Wrd14.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_11])), (Wrd35.pObj));

DEFLABEL (label_15)
  (Wrd34.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_38_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_38_15);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_39;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_38)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_37;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_36)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  if ((Wrd14.Obj) == (Wrd23.Obj))
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_33;

DEFLABEL (label_34)
  Rvl = ((Wrd22.pObj) [2]);

DEFLABEL (label_33)
DEFLABEL (label_35)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_6]), 1);

DEFLABEL (label_19)
  (Wrd14.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_5]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_7 5
#define LABEL_39_5 7
#define LABEL_39_8 9
#define LABEL_39_10 11
#define LABEL_39_9 13
#define LABEL_39_15 15
#define LABEL_39_13 17
#define TAG_39_14 7
#define LABEL_39_16 19
#define TAG_39_17 8
#define LABEL_39_19 21
#define ENVIRONMENT_LABEL_39_3 40
#define DEBUGGING_LABEL_39_2 39
#define OBJECT_39_5 38
#define OBJECT_39_4 37
#define OBJECT_39_3 36
#define OBJECT_39_2 35
#define OBJECT_39_1 34
#define OBJECT_39_0 33
#define EXECUTE_CACHE_39_18 23
#define EXECUTE_CACHE_39_12 25
#define EXECUTE_CACHE_39_11 27
#define EXECUTE_CACHE_39_6 29
#define FREE_REFERENCE_39_0 32
#define FREE_REFERENCES_LABEL_39_0 22
#define NUMBER_OF_LINKER_SECTIONS_39_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_39_4);
      goto set_record_type_entity_unparser_methodB_11;

    case 1:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_39_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_39_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_39_15);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_39_13);
      goto lambda_19;

    case 8:
      current_block = (Rpc - LABEL_39_16);
      goto lambda_20;

    case 9:
      current_block = (Rpc - LABEL_39_19);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_record_type_entity_unparser_methodB_18)
DEFLABEL (set_record_type_entity_unparser_methodB_11)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);

DEFLABEL (label_28)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_27;
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_26)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_39_3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_25;
  Wrd36 = Wrd40;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_9);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_21;
  Rvl = (current_block [OBJECT_39_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_23;
  Wrd12 = Wrd16;

DEFLABEL (label_22)
  (Rsp [2]) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_16])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Rsp [3]) = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_18]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_15])), (Wrd13.pObj));

DEFLABEL (label_15)
  (Wrd12.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_10])), (Wrd37.pObj));

DEFLABEL (label_14)
  (Wrd36.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_39_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_39_13);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_39_16);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_33;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_32)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd16.Obj))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_29;

DEFLABEL (label_30)
  Rvl = ((Wrd15.pObj) [3]);

DEFLABEL (label_29)
DEFLABEL (label_31)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_5]), 1);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define LABEL_40_9 9
#define LABEL_40_11 11
#define LABEL_40_13 13
#define LABEL_40_14 15
#define ENVIRONMENT_LABEL_40_3 32
#define DEBUGGING_LABEL_40_2 31
#define OBJECT_40_1 30
#define OBJECT_40_0 29
#define EXECUTE_CACHE_40_16 17
#define EXECUTE_CACHE_40_15 19
#define EXECUTE_CACHE_40_12 21
#define EXECUTE_CACHE_40_10 23
#define EXECUTE_CACHE_40_8 25
#define EXECUTE_CACHE_40_6 27
#define FREE_REFERENCES_LABEL_40_0 16
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_40_4);
      goto unparse_record_entity_6;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_40_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_40_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_40_13);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_40_14);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_record_entity_9)
DEFLABEL (unparse_record_entity_6)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_40_13);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_10)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_40_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_7 5
#define LABEL_41_5 7
#define LABEL_41_11 9
#define LABEL_41_8 11
#define ENVIRONMENT_LABEL_41_3 28
#define DEBUGGING_LABEL_41_2 27
#define OBJECT_41_1 26
#define OBJECT_41_0 25
#define EXECUTE_CACHE_41_14 13
#define EXECUTE_CACHE_41_13 15
#define EXECUTE_CACHE_41_12 17
#define EXECUTE_CACHE_41_10 19
#define EXECUTE_CACHE_41_9 21
#define EXECUTE_CACHE_41_6 23
#define FREE_REFERENCES_LABEL_41_0 12
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_41_4);
      goto record_constructor_5;

    case 1:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_41_11);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_constructor_8)
DEFLABEL (record_constructor_5)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_41_1])))
    goto label_10;

DEFLABEL (label_9)
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_10]));

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_41_8);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_14]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_6 7
#define LABEL_42_7 9
#define LABEL_42_40 11
#define TAG_42_41 4
#define LABEL_42_38 13
#define TAG_42_39 5
#define LABEL_42_36 15
#define TAG_42_37 6
#define LABEL_42_34 17
#define TAG_42_35 7
#define LABEL_42_32 19
#define TAG_42_33 8
#define LABEL_42_30 21
#define TAG_42_31 9
#define LABEL_42_28 23
#define TAG_42_29 10
#define LABEL_42_26 25
#define TAG_42_27 11
#define LABEL_42_24 27
#define TAG_42_25 12
#define LABEL_42_22 29
#define TAG_42_23 13
#define LABEL_42_20 31
#define TAG_42_21 14
#define LABEL_42_18 33
#define TAG_42_19 15
#define LABEL_42_16 35
#define TAG_42_17 16
#define LABEL_42_14 37
#define TAG_42_15 17
#define LABEL_42_12 39
#define TAG_42_13 18
#define LABEL_42_10 41
#define TAG_42_11 19
#define LABEL_42_8 43
#define TAG_42_9 20
#define LABEL_42_42 45
#define LABEL_42_44 47
#define LABEL_42_43 49
#define LABEL_42_46 51
#define LABEL_42_47 53
#define LABEL_42_48 55
#define LABEL_42_49 57
#define LABEL_42_50 59
#define LABEL_42_45 61
#define LABEL_42_51 63
#define ENVIRONMENT_LABEL_42_3 94
#define DEBUGGING_LABEL_42_2 93
#define OBJECT_42_25 92
#define OBJECT_42_24 91
#define OBJECT_42_23 90
#define OBJECT_42_22 89
#define OBJECT_42_21 88
#define OBJECT_42_20 87
#define OBJECT_42_19 86
#define OBJECT_42_18 85
#define OBJECT_42_17 84
#define OBJECT_42_16 83
#define OBJECT_42_15 82
#define OBJECT_42_14 81
#define OBJECT_42_13 80
#define OBJECT_42_12 79
#define OBJECT_42_11 78
#define OBJECT_42_10 77
#define OBJECT_42_9 76
#define OBJECT_42_8 75
#define OBJECT_42_7 74
#define OBJECT_42_6 73
#define OBJECT_42_5 72
#define OBJECT_42_4 71
#define OBJECT_42_3 70
#define OBJECT_42_2 69
#define OBJECT_42_1 68
#define OBJECT_42_0 67
#define EXECUTE_CACHE_42_52 65
#define FREE_REFERENCES_LABEL_42_0 64
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd123;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd127;
  machine_word Wrd128;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd132;
  machine_word Wrd133;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd142;
  machine_word Wrd143;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd147;
  machine_word Wrd148;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd152;
  machine_word Wrd153;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd157;
  machine_word Wrd158;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd162;
  machine_word Wrd163;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd167;
  machine_word Wrd168;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd172;
  machine_word Wrd173;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd177;
  machine_word Wrd178;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd182;
  machine_word Wrd183;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_42_4);
      goto Z__record_constructor_default_names_61;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_63;

    case 2:
      current_block = (Rpc - LABEL_42_6);
      goto label_64;

    case 3:
      current_block = (Rpc - LABEL_42_7);
      goto label_65;

    case 4:
      current_block = (Rpc - LABEL_42_40);
      goto lambda_88;

    case 5:
      current_block = (Rpc - LABEL_42_38);
      goto lambda_87;

    case 6:
      current_block = (Rpc - LABEL_42_36);
      goto lambda_86;

    case 7:
      current_block = (Rpc - LABEL_42_34);
      goto lambda_85;

    case 8:
      current_block = (Rpc - LABEL_42_32);
      goto lambda_84;

    case 9:
      current_block = (Rpc - LABEL_42_30);
      goto lambda_83;

    case 10:
      current_block = (Rpc - LABEL_42_28);
      goto lambda_82;

    case 11:
      current_block = (Rpc - LABEL_42_26);
      goto lambda_81;

    case 12:
      current_block = (Rpc - LABEL_42_24);
      goto lambda_80;

    case 13:
      current_block = (Rpc - LABEL_42_22);
      goto lambda_79;

    case 14:
      current_block = (Rpc - LABEL_42_20);
      goto lambda_78;

    case 15:
      current_block = (Rpc - LABEL_42_18);
      goto lambda_77;

    case 16:
      current_block = (Rpc - LABEL_42_16);
      goto lambda_76;

    case 17:
      current_block = (Rpc - LABEL_42_14);
      goto lambda_75;

    case 18:
      current_block = (Rpc - LABEL_42_12);
      goto lambda_74;

    case 19:
      current_block = (Rpc - LABEL_42_10);
      goto lambda_73;

    case 20:
      current_block = (Rpc - LABEL_42_8);
      goto lambda_72;

    case 21:
      current_block = (Rpc - LABEL_42_42);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_42_44);
      goto label_66;

    case 23:
      current_block = (Rpc - LABEL_42_43);
      goto continuation_20;

    case 24:
      current_block = (Rpc - LABEL_42_46);
      goto continuation_30;

    case 25:
      current_block = (Rpc - LABEL_42_47);
      goto do_loop_36;

    case 26:
      current_block = (Rpc - LABEL_42_48);
      goto label_67;

    case 27:
      current_block = (Rpc - LABEL_42_49);
      goto label_69;

    case 28:
      current_block = (Rpc - LABEL_42_50);
      goto label_68;

    case 29:
      current_block = (Rpc - LABEL_42_45);
      goto continuation_26;

    case 30:
      current_block = (Rpc - LABEL_42_51);
      goto lambda_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_constructor_default_names_71)
DEFLABEL (Z__record_constructor_default_names_61)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_113;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_113;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_112)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_111;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_111;
  (Wrd21.Obj) = ((Wrd27.pObj) [4]);

DEFLABEL (label_110)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_109;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd37.Obj) = (MAKE_OBJECT (26, (Wrd40.uLng)));

DEFLABEL (label_108)
  (Rsp [1]) = (Wrd37.Obj);
  if ((Wrd37.Obj) == (current_block [OBJECT_42_4]))
    goto label_107;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_0]))
    goto label_106;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_5]))
    goto label_105;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_2]))
    goto label_104;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_6]))
    goto label_103;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_7]))
    goto label_102;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_8]))
    goto label_101;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_9]))
    goto label_100;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_10]))
    goto label_99;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_11]))
    goto label_98;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_12]))
    goto label_97;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_13]))
    goto label_96;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_14]))
    goto label_95;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_15]))
    goto label_94;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_16]))
    goto label_93;
  if ((Wrd37.Obj) == (current_block [OBJECT_42_17]))
    goto label_91;
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd80.Lng) = ((Wrd79.Lng) + 1L);
  (Wrd81.Obj) = (LONG_TO_FIXNUM (Wrd80.Lng));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd87.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd87.Obj);
  (Wrd83.pObj) = (& (Rhp [-1]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd83.pObj)));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd89.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_41);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_40])));
  Rhp += 4;
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd89.pObj)));
  Wrd96 = Wrd89;
  ((Wrd96.pObj) [2]) = (Wrd37.Obj);
  (Wrd95.Obj) = (Rsp [2]);
  ((Wrd96.pObj) [3]) = (Wrd95.Obj);
  ((Wrd96.pObj) [4]) = (Wrd81.Obj);
  ((Wrd96.pObj) [5]) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  ((Wrd83.pObj) [0]) = (Wrd88.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd103.Obj) = (Rsp [0]);
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  Rvl = ((Wrd104.pObj) [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_91)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd108.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1010, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_38])));
  Rhp += 1;
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd108.pObj)));
  Wrd109 = Wrd108;
  (Wrd110.Obj) = (Rsp [0]);
  ((Wrd109.pObj) [2]) = (Wrd110.Obj);
  Rvl = (Wrd107.Obj);

DEFLABEL (label_92)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_93)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd113.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0xf0f, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_36])));
  Rhp += 1;
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd113.pObj)));
  Wrd114 = Wrd113;
  (Wrd115.Obj) = (Rsp [0]);
  ((Wrd114.pObj) [2]) = (Wrd115.Obj);
  Rvl = (Wrd112.Obj);
  goto label_92;

DEFLABEL (label_94)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd118.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0xe0e, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_34])));
  Rhp += 1;
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd118.pObj)));
  Wrd119 = Wrd118;
  (Wrd120.Obj) = (Rsp [0]);
  ((Wrd119.pObj) [2]) = (Wrd120.Obj);
  Rvl = (Wrd117.Obj);
  goto label_92;

DEFLABEL (label_95)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd123.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0xd0d, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_32])));
  Rhp += 1;
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd123.pObj)));
  Wrd124 = Wrd123;
  (Wrd125.Obj) = (Rsp [0]);
  ((Wrd124.pObj) [2]) = (Wrd125.Obj);
  Rvl = (Wrd122.Obj);
  goto label_92;

DEFLABEL (label_96)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd128.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0xc0c, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_30])));
  Rhp += 1;
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd128.pObj)));
  Wrd129 = Wrd128;
  (Wrd130.Obj) = (Rsp [0]);
  ((Wrd129.pObj) [2]) = (Wrd130.Obj);
  Rvl = (Wrd127.Obj);
  goto label_92;

DEFLABEL (label_97)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd133.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0xb0b, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_28])));
  Rhp += 1;
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd133.pObj)));
  Wrd134 = Wrd133;
  (Wrd135.Obj) = (Rsp [0]);
  ((Wrd134.pObj) [2]) = (Wrd135.Obj);
  Rvl = (Wrd132.Obj);
  goto label_92;

DEFLABEL (label_98)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0xa0a, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_26])));
  Rhp += 1;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd139 = Wrd138;
  (Wrd140.Obj) = (Rsp [0]);
  ((Wrd139.pObj) [2]) = (Wrd140.Obj);
  Rvl = (Wrd137.Obj);
  goto label_92;

DEFLABEL (label_99)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd143.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x909, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_24])));
  Rhp += 1;
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd143.pObj)));
  Wrd144 = Wrd143;
  (Wrd145.Obj) = (Rsp [0]);
  ((Wrd144.pObj) [2]) = (Wrd145.Obj);
  Rvl = (Wrd142.Obj);
  goto label_92;

DEFLABEL (label_100)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd148.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x808, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_22])));
  Rhp += 1;
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd148.pObj)));
  Wrd149 = Wrd148;
  (Wrd150.Obj) = (Rsp [0]);
  ((Wrd149.pObj) [2]) = (Wrd150.Obj);
  Rvl = (Wrd147.Obj);
  goto label_92;

DEFLABEL (label_101)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd153.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_20])));
  Rhp += 1;
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd153.pObj)));
  Wrd154 = Wrd153;
  (Wrd155.Obj) = (Rsp [0]);
  ((Wrd154.pObj) [2]) = (Wrd155.Obj);
  Rvl = (Wrd152.Obj);
  goto label_92;

DEFLABEL (label_102)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd158.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_18])));
  Rhp += 1;
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd158.pObj)));
  Wrd159 = Wrd158;
  (Wrd160.Obj) = (Rsp [0]);
  ((Wrd159.pObj) [2]) = (Wrd160.Obj);
  Rvl = (Wrd157.Obj);
  goto label_92;

DEFLABEL (label_103)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd163.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_16])));
  Rhp += 1;
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd163.pObj)));
  Wrd164 = Wrd163;
  (Wrd165.Obj) = (Rsp [0]);
  ((Wrd164.pObj) [2]) = (Wrd165.Obj);
  Rvl = (Wrd162.Obj);
  goto label_92;

DEFLABEL (label_104)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd168.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_14])));
  Rhp += 1;
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd168.pObj)));
  Wrd169 = Wrd168;
  (Wrd170.Obj) = (Rsp [0]);
  ((Wrd169.pObj) [2]) = (Wrd170.Obj);
  Rvl = (Wrd167.Obj);
  goto label_92;

DEFLABEL (label_105)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd173.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_12])));
  Rhp += 1;
  (Wrd172.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd173.pObj)));
  Wrd174 = Wrd173;
  (Wrd175.Obj) = (Rsp [0]);
  ((Wrd174.pObj) [2]) = (Wrd175.Obj);
  Rvl = (Wrd172.Obj);
  goto label_92;

DEFLABEL (label_106)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd178.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_10])));
  Rhp += 1;
  (Wrd177.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd178.pObj)));
  Wrd179 = Wrd178;
  (Wrd180.Obj) = (Rsp [0]);
  ((Wrd179.pObj) [2]) = (Wrd180.Obj);
  Rvl = (Wrd177.Obj);
  goto label_92;

DEFLABEL (label_107)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd183.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_8])));
  Rhp += 1;
  (Wrd182.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd183.pObj)));
  Wrd184 = Wrd183;
  (Wrd185.Obj) = (Rsp [0]);
  ((Wrd184.pObj) [2]) = (Wrd185.Obj);
  Rvl = (Wrd182.Obj);
  goto label_92;

DEFLABEL (label_109)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 1);

DEFLABEL (label_65)
  (Wrd37.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_42_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_64)
  (Wrd21.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_42_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (lambda_88)
  CLOSURE_HEADER (LABEL_42_40);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_18]), 2);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_42_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_22]), 2);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_42_42);
  (* (--Rsp)) = Rvl;
  (Wrd24.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd24.uLng) == 62))
    goto label_116;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_116;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd20.pObj) [1]) = (Wrd16.Obj);

DEFLABEL (label_115)
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto do_loop_36;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_42_45);

DEFLABEL (label_114)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_116)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_42_4]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [3]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_44]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_20]), 3);

DEFLABEL (label_66)
  goto label_115;

DEFLABEL (lambda_87)
  CLOSURE_HEADER (LABEL_42_38);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd24.Obj) = (MAKE_OBJECT (0, 16));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (Wrd15.Obj) = (Rsp [8]);
  (Wrd16.Obj) = (Rsp [9]);
  (Wrd17.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd10.Obj) = (Rsp [11]);
  (Wrd11.Obj) = (Rsp [12]);
  (Wrd12.Obj) = (Rsp [13]);
  (Wrd13.Obj) = (Rsp [14]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [15]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-17]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [16]));
  goto pop_return;

DEFLABEL (lambda_86)
  CLOSURE_HEADER (LABEL_42_36);

DEFLABEL (lambda_45)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd23.Obj) = (MAKE_OBJECT (0, 15));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (Wrd14.Obj) = (Rsp [8]);
  (Wrd15.Obj) = (Rsp [9]);
  (Wrd16.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [11]);
  (Wrd10.Obj) = (Rsp [12]);
  (Wrd11.Obj) = (Rsp [13]);
  (Wrd12.Obj) = (Rsp [14]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd7.pObj) = (& (Rhp [-16]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [15]));
  goto pop_return;

DEFLABEL (lambda_85)
  CLOSURE_HEADER (LABEL_42_34);

DEFLABEL (lambda_46)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd22.Obj) = (MAKE_OBJECT (0, 14));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (Wrd13.Obj) = (Rsp [8]);
  (Wrd14.Obj) = (Rsp [9]);
  (Wrd15.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.Obj) = (Rsp [11]);
  (Wrd10.Obj) = (Rsp [12]);
  (Wrd11.Obj) = (Rsp [13]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-15]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (lambda_84)
  CLOSURE_HEADER (LABEL_42_32);

DEFLABEL (lambda_47)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd21.Obj) = (MAKE_OBJECT (0, 13));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (Wrd12.Obj) = (Rsp [8]);
  (Wrd13.Obj) = (Rsp [9]);
  (Wrd14.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd9.Obj) = (Rsp [11]);
  (Wrd10.Obj) = (Rsp [12]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-14]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_42_30);

DEFLABEL (lambda_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd20.Obj) = (MAKE_OBJECT (0, 12));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (Wrd11.Obj) = (Rsp [8]);
  (Wrd12.Obj) = (Rsp [9]);
  (Wrd13.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [11]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-13]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (lambda_82)
  CLOSURE_HEADER (LABEL_42_28);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd19.Obj) = (MAKE_OBJECT (0, 11));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (Wrd10.Obj) = (Rsp [8]);
  (Wrd11.Obj) = (Rsp [9]);
  (Wrd12.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd7.pObj) = (& (Rhp [-12]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (lambda_81)
  CLOSURE_HEADER (LABEL_42_26);

DEFLABEL (lambda_50)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (MAKE_OBJECT (0, 10));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (Wrd10.Obj) = (Rsp [8]);
  (Wrd11.Obj) = (Rsp [9]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-11]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_42_24);

DEFLABEL (lambda_51)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd17.Obj) = (MAKE_OBJECT (0, 9));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (Wrd10.Obj) = (Rsp [8]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-10]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_79)
  CLOSURE_HEADER (LABEL_42_22);

DEFLABEL (lambda_52)
  CLOSURE_INTERRUPT_CHECK (24);
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
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-9]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_78)
  CLOSURE_HEADER (LABEL_42_20);

DEFLABEL (lambda_53)
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

DEFLABEL (lambda_77)
  CLOSURE_HEADER (LABEL_42_18);

DEFLABEL (lambda_54)
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

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_42_16);

DEFLABEL (lambda_55)
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

DEFLABEL (lambda_75)
  CLOSURE_HEADER (LABEL_42_14);

DEFLABEL (lambda_56)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_74)
  CLOSURE_HEADER (LABEL_42_12);

DEFLABEL (lambda_57)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_73)
  CLOSURE_HEADER (LABEL_42_10);

DEFLABEL (lambda_58)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd7.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_42_8);

DEFLABEL (lambda_59)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_INTERFACE_2 (20, (current_block [OBJECT_42_19]), 2);

DEFLABEL (do_loop_89)
DEFLABEL (do_loop_36)
  INTERRUPT_CHECK (26, LABEL_42_47);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd8.Lng) < (Wrd12.Lng))
    goto label_118;
  (Wrd13.Obj) = (Rsp [1]);
  if ((Wrd13.Obj) == (current_block [OBJECT_42_25]))
    goto label_117;
  (Wrd16.pObj) = (& (Rsp [4]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd16.pObj)));
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_25;

DEFLABEL (label_117)
  Rsp = (& (Rsp [3]));
  goto label_114;

DEFLABEL (label_118)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_125;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_46]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.pObj) = (& (Rsp [5]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  goto lambda_25;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_42_46);

DEFLABEL (label_125)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_124;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_123)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 62))
    goto label_122;
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_122;
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) (Wrd59.Lng)) < ((unsigned long) (Wrd63.Lng))))
    goto label_122;
  (Wrd52.uLng) = (OBJECT_DATUM (Wrd56.Obj));
  (Wrd55.pObj) = (& ((Wrd61.pObj) [(Wrd52.Lng)]));
  ((Wrd55.pObj) [1]) = (Wrd29.Obj);

DEFLABEL (label_121)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Lng) = ((Wrd40.Lng) + 1L);
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (Rsp [0]) = (Wrd38.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_120;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_119)
  (Rsp [1]) = (Wrd42.Obj);
  goto do_loop_36;

DEFLABEL (label_120)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_50]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_24]), 1);

DEFLABEL (label_68)
  (Wrd42.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_49]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_20]), 3);

DEFLABEL (label_69)
  goto label_121;

DEFLABEL (label_124)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_48]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_23]), 1);

DEFLABEL (label_67)
  (Wrd29.Obj) = Rvl;
  goto label_123;

DEFLABEL (lambda_90)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_42_51);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.Obj) = ((Wrd8.pObj) [5]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [1]);
  (Rsp [2]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_52]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_9 7
#define LABEL_43_10 9
#define LABEL_43_6 11
#define TAG_43_7 4
#define LABEL_43_11 13
#define LABEL_43_13 15
#define LABEL_43_14 17
#define LABEL_43_15 19
#define LABEL_43_16 21
#define LABEL_43_17 23
#define LABEL_43_18 25
#define LABEL_43_19 27
#define LABEL_43_20 29
#define LABEL_43_21 31
#define LABEL_43_22 33
#define LABEL_43_23 35
#define TAG_43_24 16
#define LABEL_43_27 37
#define LABEL_43_28 39
#define LABEL_43_25 41
#define LABEL_43_29 43
#define LABEL_43_30 45
#define LABEL_43_26 47
#define LABEL_43_32 49
#define LABEL_43_33 51
#define LABEL_43_34 53
#define LABEL_43_35 55
#define LABEL_43_36 57
#define LABEL_43_37 59
#define LABEL_43_38 61
#define LABEL_43_31 63
#define LABEL_43_39 65
#define LABEL_43_40 67
#define LABEL_43_41 69
#define LABEL_43_42 71
#define LABEL_43_43 73
#define LABEL_43_44 75
#define LABEL_43_45 77
#define LABEL_43_46 79
#define LABEL_43_47 81
#define ENVIRONMENT_LABEL_43_3 108
#define DEBUGGING_LABEL_43_2 107
#define OBJECT_43_15 106
#define OBJECT_43_14 105
#define OBJECT_43_13 104
#define OBJECT_43_12 103
#define OBJECT_43_11 102
#define OBJECT_43_10 101
#define OBJECT_43_9 100
#define OBJECT_43_8 99
#define OBJECT_43_7 98
#define OBJECT_43_6 97
#define OBJECT_43_5 96
#define OBJECT_43_4 95
#define OBJECT_43_3 94
#define OBJECT_43_2 93
#define OBJECT_43_1 92
#define OBJECT_43_0 91
#define EXECUTE_CACHE_43_49 83
#define EXECUTE_CACHE_43_48 85
#define EXECUTE_CACHE_43_12 87
#define EXECUTE_CACHE_43_8 89
#define FREE_REFERENCES_LABEL_43_0 82
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd79;
  machine_word Wrd55;
  machine_word Wrd63;
  machine_word Wrd90;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd54;
  machine_word Wrd101;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd119;
  machine_word Wrd114;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd74;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd33;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd39;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd6;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_43_4);
      goto Z__record_constructor_given_names_89;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_43_9);
      goto label_91;

    case 3:
      current_block = (Rpc - LABEL_43_10);
      goto label_92;

    case 4:
      current_block = (Rpc - LABEL_43_6);
      goto lambda_114;

    case 5:
      current_block = (Rpc - LABEL_43_11);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_43_13);
      goto do_loop_15;

    case 7:
      current_block = (Rpc - LABEL_43_14);
      goto label_93;

    case 8:
      current_block = (Rpc - LABEL_43_15);
      goto label_95;

    case 9:
      current_block = (Rpc - LABEL_43_16);
      goto label_94;

    case 10:
      current_block = (Rpc - LABEL_43_17);
      goto do_loop_35;

    case 11:
      current_block = (Rpc - LABEL_43_18);
      goto label_96;

    case 12:
      current_block = (Rpc - LABEL_43_19);
      goto continuation_22;

    case 13:
      current_block = (Rpc - LABEL_43_20);
      goto do_loop_32;

    case 14:
      current_block = (Rpc - LABEL_43_21);
      goto label_98;

    case 15:
      current_block = (Rpc - LABEL_43_22);
      goto label_97;

    case 16:
      current_block = (Rpc - LABEL_43_23);
      goto lambda_118;

    case 17:
      current_block = (Rpc - LABEL_43_27);
      goto label_99;

    case 18:
      current_block = (Rpc - LABEL_43_28);
      goto label_100;

    case 19:
      current_block = (Rpc - LABEL_43_25);
      goto continuation_45;

    case 20:
      current_block = (Rpc - LABEL_43_29);
      goto label_101;

    case 21:
      current_block = (Rpc - LABEL_43_30);
      goto label_102;

    case 22:
      current_block = (Rpc - LABEL_43_26);
      goto continuation_44;

    case 23:
      current_block = (Rpc - LABEL_43_32);
      goto continuation_54;

    case 24:
      current_block = (Rpc - LABEL_43_33);
      goto do_loop_61;

    case 25:
      current_block = (Rpc - LABEL_43_34);
      goto label_105;

    case 26:
      current_block = (Rpc - LABEL_43_35);
      goto label_106;

    case 27:
      current_block = (Rpc - LABEL_43_36);
      goto label_109;

    case 28:
      current_block = (Rpc - LABEL_43_37);
      goto label_107;

    case 29:
      current_block = (Rpc - LABEL_43_38);
      goto label_108;

    case 30:
      current_block = (Rpc - LABEL_43_31);
      goto continuation_50;

    case 31:
      current_block = (Rpc - LABEL_43_39);
      goto label_103;

    case 32:
      current_block = (Rpc - LABEL_43_40);
      goto label_104;

    case 33:
      current_block = (Rpc - LABEL_43_41);
      goto continuation_73;

    case 34:
      current_block = (Rpc - LABEL_43_42);
      goto continuation_70;

    case 35:
      current_block = (Rpc - LABEL_43_43);
      goto do_loop_78;

    case 36:
      current_block = (Rpc - LABEL_43_44);
      goto label_110;

    case 37:
      current_block = (Rpc - LABEL_43_45);
      goto label_111;

    case 38:
      current_block = (Rpc - LABEL_43_46);
      goto lambda_40;

    case 39:
      current_block = (Rpc - LABEL_43_47);
      goto continuation_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__record_constructor_given_names_113)
DEFLABEL (Z__record_constructor_given_names_89)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_6])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_125;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_125;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_124)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_123;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd21.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));

DEFLABEL (label_122)
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd31.Lng) = ((Wrd30.Lng) + 1L);
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_3]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_43_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_15;

DEFLABEL (label_123)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (label_92)
  (Wrd21.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_43_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_91)
  (Wrd5.Obj) = Rvl;
  goto label_124;

DEFLABEL (lambda_114)
  CLOSURE_HEADER (LABEL_43_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43_4]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (do_loop_115)
DEFLABEL (do_loop_15)
  INTERRUPT_CHECK (26, LABEL_43_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_127;
  (Wrd7.Obj) = (current_block [OBJECT_43_4]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_126;

DEFLABEL (label_127)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_126)
DEFLABEL (label_135)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_128;
  Rsp = (& (Rsp [2]));
  (Wrd11.Obj) = (current_block [OBJECT_43_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_43_9]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto do_loop_35;

DEFLABEL (label_128)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_134;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_133)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_132;
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_132;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_132;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd35.pObj) = (& ((Wrd40.pObj) [(Wrd32.Lng)]));
  (Wrd36.Obj) = (current_block [OBJECT_43_4]);
  ((Wrd35.pObj) [1]) = (Wrd36.Obj);

DEFLABEL (label_131)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_130;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_129)
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_15;

DEFLABEL (label_130)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_16]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_7]), 1);

DEFLABEL (label_94)
  (Wrd22.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd47.Obj) = (current_block [OBJECT_43_4]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_15]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_6]), 3);

DEFLABEL (label_95)
  goto label_131;

DEFLABEL (label_134)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_14]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_5]), 1);

DEFLABEL (label_93)
  (Wrd13.Obj) = Rvl;
  goto label_133;

DEFLABEL (do_loop_116)
DEFLABEL (do_loop_35)
  INTERRUPT_CHECK (26, LABEL_43_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_136;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_3]), 2);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_43_19);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (current_block [OBJECT_43_8]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_43_9]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto do_loop_32;

DEFLABEL (label_136)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_141;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_141;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_141;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd18.pObj) = (& ((Wrd34.pObj) [(Wrd15.Lng)]));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_138;

DEFLABEL (label_139)
  (Wrd21.Obj) = (Rsp [1]);
  goto label_137;

DEFLABEL (label_138)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd23.Lng) + 1L);
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_137)
DEFLABEL (label_140)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd27.Lng) + 1L);
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (Rsp [0]) = (Wrd25.Obj);
  goto do_loop_35;

DEFLABEL (label_141)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_18]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_10]), 2);

DEFLABEL (label_96)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_138;
  goto label_139;

DEFLABEL (do_loop_117)
DEFLABEL (do_loop_32)
  INTERRUPT_CHECK (26, LABEL_43_20);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_143;
  (Wrd9.Obj) = (current_block [OBJECT_43_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_142;

DEFLABEL (label_143)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_142)
DEFLABEL (label_151)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_144;
  Rsp = (& (Rsp [3]));
  (Wrd14.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_23])));
  Rhp += 4;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd29 = Wrd22;
  (Wrd30.Obj) = (Rsp [3]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  ((Wrd29.pObj) [3]) = (Wrd28.Obj);
  ((Wrd29.pObj) [4]) = (Wrd14.Obj);
  ((Wrd29.pObj) [5]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  ((Wrd16.pObj) [0]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  Rvl = ((Wrd37.pObj) [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_144)
  (Wrd85.Obj) = (Rsp [4]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 10))
    goto label_150;
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 26))
    goto label_150;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) (Wrd80.Lng)) < ((unsigned long) (Wrd84.Lng))))
    goto label_150;
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd77.Obj));
  (Wrd43.pObj) = (& ((Wrd82.pObj) [(Wrd40.Lng)]));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  if ((Wrd44.Obj) == ((SCHEME_OBJECT) 0))
    goto label_147;

DEFLABEL (label_146)
  (Wrd46.Obj) = (Rsp [2]);

DEFLABEL (label_145)
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd53.Lng) = ((Wrd52.Lng) + 1L);
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd53.Lng));
  (Rsp [1]) = (Wrd50.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_32;

DEFLABEL (label_147)
  (Wrd69.Obj) = (Rsp [3]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_149;
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 26))
    goto label_149;
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) (Wrd64.Lng)) < ((unsigned long) (Wrd68.Lng))))
    goto label_149;
  (Wrd56.uLng) = (OBJECT_DATUM (Wrd61.Obj));
  (Wrd59.pObj) = (& ((Wrd66.pObj) [(Wrd56.Lng)]));
  (Wrd60.Obj) = (Rsp [1]);
  ((Wrd59.pObj) [1]) = (Wrd60.Obj);

DEFLABEL (label_148)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd49.Lng) = ((Wrd48.Lng) + 1L);
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));
  goto label_145;

DEFLABEL (label_149)
  (Wrd71.Obj) = (Rsp [3]);
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_22]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_6]), 3);

DEFLABEL (label_97)
  goto label_148;

DEFLABEL (label_150)
  (Wrd87.Obj) = (Rsp [4]);
  (Wrd88.Obj) = (Rsp [1]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_21]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_10]), 2);

DEFLABEL (label_98)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_147;
  goto label_146;

DEFLABEL (lambda_118)
  CLOSURE_HEADER (LABEL_43_23);

DEFLABEL (lambda_83)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_164;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd24.Lng))))
    goto label_164;
  (Wrd12.Obj) = ((Wrd22.pObj) [4]);

DEFLABEL (label_163)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_162;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd36.Obj) = (MAKE_OBJECT (26, (Wrd39.uLng)));

DEFLABEL (label_161)
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd46.Lng) = ((Wrd45.Lng) + 1L);
  (Wrd47.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_3]), 2);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_43_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_43_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_13]), 2);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_43_25);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_160;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_160;
  (Wrd5.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_159)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_158;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd45.Lng))))
    goto label_158;
  ((Wrd43.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_157)
  (Wrd30.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_31]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  goto do_loop_61;

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_43_31);

DEFLABEL (label_156)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_155;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_154)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_153;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd34.Lng))))
    goto label_153;
  (Wrd26.Obj) = ((Wrd32.pObj) [5]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_152)
  (Wrd46.Obj) = (current_block [OBJECT_43_8]);
  (* (--Rsp)) = (Wrd46.Obj);
  goto do_loop_78;

DEFLABEL (label_153)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [2]);
  (Wrd42.Obj) = (current_block [OBJECT_43_15]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_40]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_104)
  (* (--Rsp)) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_39]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (label_103)
  (* (--Rsp)) = Rvl;
  goto label_154;

DEFLABEL (label_158)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (current_block [OBJECT_43_8]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_30]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_11]), 3);

DEFLABEL (label_102)
  goto label_157;

DEFLABEL (label_160)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_43_9]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_29]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_101)
  (Wrd5.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_28]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (label_100)
  (Wrd36.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Wrd32.Obj) = (current_block [OBJECT_43_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_27]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_99)
  (Wrd12.Obj) = Rvl;
  goto label_163;

DEFLABEL (do_loop_119)
DEFLABEL (do_loop_61)
  INTERRUPT_CHECK (26, LABEL_43_33);
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 1)
    goto label_166;
  (Wrd49.Obj) = (Rsp [1]);
  if ((Wrd49.Obj) == (current_block [OBJECT_43_14]))
    goto label_165;
  (Wrd52.pObj) = (& (Rsp [4]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd52.pObj)));
  (Rsp [1]) = (Wrd54.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_40;

DEFLABEL (label_165)
  Rsp = (& (Rsp [3]));
  goto label_156;

DEFLABEL (label_166)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 1)
    goto label_177;
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_32]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.pObj) = (& (Rsp [5]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd62.pObj)));
  (* (--Rsp)) = (Wrd64.Obj);
  goto lambda_40;

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_43_32);

DEFLABEL (label_177)
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_176;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_175)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_174;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd74.Obj) = ((Wrd76.pObj) [0]);

DEFLABEL (label_173)
  (Wrd83.Obj) = (* (Rsp++));
  (Wrd112.Obj) = (Rsp [3]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 62))
    goto label_172;
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd106.uLng) == 26))
    goto label_172;
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd110.Obj) = ((Wrd109.pObj) [0]);
  (Wrd111.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  if (! (((unsigned long) (Wrd107.Lng)) < ((unsigned long) (Wrd111.Lng))))
    goto label_172;
  (Wrd102.uLng) = (OBJECT_DATUM (Wrd74.Obj));
  (Wrd105.pObj) = (& ((Wrd109.pObj) [(Wrd102.Lng)]));
  ((Wrd105.pObj) [1]) = (Wrd83.Obj);

DEFLABEL (label_171)
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_170;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd84.Obj) = ((Wrd86.pObj) [1]);

DEFLABEL (label_169)
  (Rsp [0]) = (Wrd84.Obj);
  (Wrd96.Obj) = (Rsp [1]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_168;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd93.Obj) = ((Wrd95.pObj) [1]);

DEFLABEL (label_167)
  (Rsp [1]) = (Wrd93.Obj);
  goto do_loop_61;

DEFLABEL (label_168)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_38]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_7]), 1);

DEFLABEL (label_108)
  (Wrd93.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_37]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_7]), 1);

DEFLABEL (label_107)
  (Wrd84.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  (Wrd114.Obj) = (Rsp [3]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_36]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_11]), 3);

DEFLABEL (label_109)
  goto label_171;

DEFLABEL (label_174)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_35]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_5]), 1);

DEFLABEL (label_106)
  (Wrd74.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_34]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_5]), 1);

DEFLABEL (label_105)
  (* (--Rsp)) = Rvl;
  goto label_175;

DEFLABEL (do_loop_120)
DEFLABEL (do_loop_78)
  INTERRUPT_CHECK (26, LABEL_43_43);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_179;
  (Wrd9.Obj) = (current_block [OBJECT_43_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_178;

DEFLABEL (label_179)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_178)
DEFLABEL (label_189)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_180;
  Rsp = (& (Rsp [4]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_180)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_42]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd36.Obj) = (Rsp [6]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [4]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_188;
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_188;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd29.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_188;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd24.pObj) = (& ((Wrd33.pObj) [(Wrd19.Lng)]));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_187)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd50.Lng) = ((Wrd49.Lng) - 1L);
  (Wrd47.Obj) = (LONG_TO_FIXNUM (Wrd50.Lng));
  (Wrd62.Obj) = (Rsp [4]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_186;
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd56.uLng) == 26))
    goto label_186;
  Wrd57 = Wrd50;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) (Wrd57.Lng)) < ((unsigned long) (Wrd61.Lng))))
    goto label_186;
  (Wrd51.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd54.pObj) = (& ((Wrd59.pObj) [(Wrd51.Lng)]));
  (Wrd55.Obj) = ((Wrd54.pObj) [1]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_185)
  (Wrd69.Obj) = (Rsp [0]);
  if ((Wrd69.Obj) == ((SCHEME_OBJECT) 0))
    goto label_184;
  (Wrd71.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_41]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_43_41);
  (Wrd83.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd83.Obj);
  (Rsp [2]) = Rvl;
  (Wrd100.Obj) = (Rsp [0]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if ((Wrd101.uLng) == 62)
    goto label_182;

DEFLABEL (label_181)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_11]), 3);

DEFLABEL (label_182)
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd93.uLng) == 26))
    goto label_181;
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) (Wrd95.Lng)) < ((unsigned long) (Wrd99.Lng))))
    goto label_181;
  (Wrd87.uLng) = (OBJECT_DATUM (Wrd83.Obj));
  (Wrd90.pObj) = (& ((Wrd97.pObj) [(Wrd87.Lng)]));
  ((Wrd90.pObj) [1]) = Rvl;
  Rsp = (& (Rsp [4]));

DEFLABEL (label_183)
  (Wrd78.Obj) = (Rsp [1]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  (Wrd80.Lng) = ((Wrd79.Lng) + 1L);
  (Wrd77.Obj) = (LONG_TO_FIXNUM (Wrd80.Lng));
  (Rsp [1]) = (Wrd77.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_78;

DEFLABEL (label_184)
  Rsp = (& (Rsp [3]));
  goto label_183;

DEFLABEL (label_186)
  (Wrd64.Obj) = (Rsp [4]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_45]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_10]), 2);

DEFLABEL (label_111)
  (* (--Rsp)) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  (Wrd41.Obj) = (Rsp [6]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [4]);
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_44]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_10]), 2);

DEFLABEL (label_110)
  (* (--Rsp)) = Rvl;
  goto label_187;

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_43_42);
  goto label_183;

DEFLABEL (lambda_121)
DEFLABEL (lambda_40)
  INTERRUPT_CHECK (26, LABEL_43_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_48]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_43_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [5]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [1]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_49]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define TAG_44_6 1
#define LABEL_44_7 7
#define LABEL_44_8 9
#define LABEL_44_9 11
#define LABEL_44_10 13
#define LABEL_44_12 15
#define LABEL_44_13 17
#define LABEL_44_11 19
#define LABEL_44_15 21
#define LABEL_44_16 23
#define LABEL_44_17 25
#define LABEL_44_18 27
#define LABEL_44_19 29
#define LABEL_44_22 31
#define LABEL_44_14 33
#define LABEL_44_25 35
#define LABEL_44_26 37
#define LABEL_44_27 39
#define LABEL_44_28 41
#define LABEL_44_29 43
#define LABEL_44_30 45
#define LABEL_44_21 47
#define LABEL_44_31 49
#define LABEL_44_32 51
#define LABEL_44_33 53
#define LABEL_44_34 55
#define LABEL_44_20 57
#define LABEL_44_35 59
#define LABEL_44_36 61
#define ENVIRONMENT_LABEL_44_3 88
#define DEBUGGING_LABEL_44_2 87
#define OBJECT_44_19 86
#define OBJECT_44_18 85
#define OBJECT_44_17 84
#define OBJECT_44_16 83
#define OBJECT_44_15 82
#define OBJECT_44_14 81
#define OBJECT_44_13 80
#define OBJECT_44_12 79
#define OBJECT_44_11 78
#define OBJECT_44_10 77
#define OBJECT_44_9 76
#define OBJECT_44_8 75
#define OBJECT_44_7 74
#define OBJECT_44_6 73
#define OBJECT_44_5 72
#define OBJECT_44_4 71
#define OBJECT_44_3 70
#define OBJECT_44_2 69
#define OBJECT_44_1 68
#define OBJECT_44_0 67
#define EXECUTE_CACHE_44_24 63
#define EXECUTE_CACHE_44_23 65
#define FREE_REFERENCES_LABEL_44_0 62
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd60;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd65;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd100;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd75;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd70;
  machine_word Wrd8;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd52;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_44_4);
      goto record_keyword_constructor_54;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto lambda_75;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto label_56;

    case 3:
      current_block = (Rpc - LABEL_44_8);
      goto label_57;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_44_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_44_12);
      goto label_58;

    case 7:
      current_block = (Rpc - LABEL_44_13);
      goto label_59;

    case 8:
      current_block = (Rpc - LABEL_44_11);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_44_15);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_44_16);
      goto do_loop_30;

    case 11:
      current_block = (Rpc - LABEL_44_17);
      goto label_61;

    case 12:
      current_block = (Rpc - LABEL_44_18);
      goto label_64;

    case 13:
      current_block = (Rpc - LABEL_44_19);
      goto label_62;

    case 14:
      current_block = (Rpc - LABEL_44_22);
      goto label_63;

    case 15:
      current_block = (Rpc - LABEL_44_14);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_44_25);
      goto label_60;

    case 17:
      current_block = (Rpc - LABEL_44_26);
      goto continuation_41;

    case 18:
      current_block = (Rpc - LABEL_44_27);
      goto continuation_40;

    case 19:
      current_block = (Rpc - LABEL_44_28);
      goto do_loop_45;

    case 20:
      current_block = (Rpc - LABEL_44_29);
      goto label_66;

    case 21:
      current_block = (Rpc - LABEL_44_30);
      goto label_65;

    case 22:
      current_block = (Rpc - LABEL_44_21);
      goto continuation_20;

    case 23:
      current_block = (Rpc - LABEL_44_31);
      goto label_72;

    case 24:
      current_block = (Rpc - LABEL_44_32);
      goto label_69;

    case 25:
      current_block = (Rpc - LABEL_44_33);
      goto label_70;

    case 26:
      current_block = (Rpc - LABEL_44_34);
      goto label_71;

    case 27:
      current_block = (Rpc - LABEL_44_20);
      goto continuation_21;

    case 28:
      current_block = (Rpc - LABEL_44_35);
      goto label_67;

    case 29:
      current_block = (Rpc - LABEL_44_36);
      goto label_68;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_keyword_constructor_74)
DEFLABEL (record_keyword_constructor_54)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_5])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  ((Wrd15.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  ((Wrd6.pObj) [0]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  Rvl = ((Wrd23.pObj) [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_75)
  CLOSURE_HEADER (LABEL_44_5);

DEFLABEL (lambda_50)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_88;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_88;
  (Wrd5.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_87)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_86;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd29.Obj) = (MAKE_OBJECT (26, (Wrd32.uLng)));

DEFLABEL (label_85)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_3]), 2);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_44_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_3]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_44_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_44_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_8]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_44_10);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_84;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_84;
  (Wrd5.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_83)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 62))
    goto label_82;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd42.Lng))))
    goto label_82;
  ((Wrd40.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_81)
  (Wrd30.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd34.Obj);
  goto do_loop_30;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_44_14);

DEFLABEL (label_80)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_79;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_79;
  (Wrd9.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_78)
  (Wrd29.Obj) = (current_block [OBJECT_44_4]);
  (* (--Rsp)) = (Wrd29.Obj);
  goto do_loop_45;

DEFLABEL (label_79)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_44_17]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_25]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_82)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (current_block [OBJECT_44_5]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_6]), 3);

DEFLABEL (label_59)
  goto label_81;

DEFLABEL (label_84)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_44_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_58)
  (Wrd5.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_57)
  (Wrd29.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_44_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_56)
  (Wrd5.Obj) = Rvl;
  goto label_87;

DEFLABEL (do_loop_76)
DEFLABEL (do_loop_30)
  INTERRUPT_CHECK (26, LABEL_44_16);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 1)
    goto label_91;

DEFLABEL (label_90)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == (current_block [OBJECT_44_16]))
    goto label_89;
  (Wrd34.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd36.Obj) = (Rsp [6]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [3]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd39.pObj) [0]);
  (Rsp [1]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_24]));

DEFLABEL (label_89)
  Rsp = (& (Rsp [2]));
  goto label_80;

DEFLABEL (label_91)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd43.Obj);
  if (! ((Wrd31.uLng) == 1))
    goto label_121;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_120)
  (Wrd99.Obj) = (current_block [OBJECT_44_10]);
  (Wrd102.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd102.Lng))))
    goto label_119;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd99.Obj));
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd54.Obj) == (Wrd56.Obj))
    goto label_118;

DEFLABEL (label_117)
  (Wrd57.Obj) = (current_block [OBJECT_44_12]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd67.Lng)))
    goto label_92;
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_11]), 2);

DEFLABEL (label_92)
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd57.Obj));
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd61.Obj) == (Wrd63.Obj))
    goto label_94;
  (Wrd59.Obj) = (current_block [OBJECT_44_14]);
  goto label_93;

DEFLABEL (label_94)
  (Wrd59.Obj) = (current_block [OBJECT_44_13]);

DEFLABEL (label_93)
DEFLABEL (label_116)
  Rsp = (& (Rsp [3]));
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_90;

DEFLABEL (label_115)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_114;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd69.Obj) = ((Wrd71.pObj) [1]);

DEFLABEL (label_113)
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_90;
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_20]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_21]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (current_block [OBJECT_44_13]);
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd89.Obj) = (Rsp [3]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_112;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (* (--Rsp)) = (Wrd88.Obj);

DEFLABEL (label_111)
  (Wrd95.Obj) = (Rsp [9]);
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [2]);
  (* (--Rsp)) = (Wrd97.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_23]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_44_21);
  (* (--Rsp)) = Rvl;
  (Wrd94.Obj) = (Rsp [5]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 10))
    goto label_110;
  (Wrd87.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd87.uLng) == 26))
    goto label_110;
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) (Wrd89.Lng)) < ((unsigned long) (Wrd93.Lng))))
    goto label_110;
  (Wrd22.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd25.pObj) = (& ((Wrd91.pObj) [(Wrd22.Lng)]));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_101;

DEFLABEL (label_100)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_99)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_98;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_97)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_96;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_95)
  (Rsp [0]) = (Wrd14.Obj);
  goto do_loop_30;

DEFLABEL (label_96)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_36]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_15]), 1);

DEFLABEL (label_68)
  (Wrd14.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_15]), 1);

DEFLABEL (label_67)
  (Wrd5.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_101)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_109;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_108)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_107;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_106)
  (Wrd77.Obj) = (Rsp [4]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 62))
    goto label_105;
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 26))
    goto label_105;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) (Wrd72.Lng)) < ((unsigned long) (Wrd76.Lng))))
    goto label_105;
  (Wrd65.uLng) = (OBJECT_DATUM (Wrd69.Obj));
  (Wrd68.pObj) = (& ((Wrd74.pObj) [(Wrd65.Lng)]));
  ((Wrd68.pObj) [1]) = (Wrd37.Obj);

DEFLABEL (label_104)
  (Wrd44.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_44_13]);
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd63.uLng) == 10)
    goto label_103;

DEFLABEL (label_102)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_19]), 3);

DEFLABEL (label_103)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_102;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) (Wrd57.Lng)) < ((unsigned long) (Wrd61.Lng))))
    goto label_102;
  (Wrd49.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd52.pObj) = (& ((Wrd59.pObj) [(Wrd49.Lng)]));
  ((Wrd52.pObj) [1]) = (Wrd46.Obj);
  Rsp = (& (Rsp [4]));
  goto label_99;

DEFLABEL (label_105)
  (Wrd79.Obj) = (Rsp [4]);
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_34]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_6]), 3);

DEFLABEL (label_71)
  goto label_104;

DEFLABEL (label_107)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_33]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_9]), 1);

DEFLABEL (label_70)
  (Wrd37.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_32]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_15]), 1);

DEFLABEL (label_69)
  (Wrd28.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_110)
  (Wrd96.Obj) = (Rsp [5]);
  (Wrd97.Obj) = (Rsp [0]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_31]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_18]), 2);

DEFLABEL (label_72)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  goto label_100;

DEFLABEL (label_112)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_22]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_9]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_19]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_15]), 1);

DEFLABEL (label_62)
  (Wrd69.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_118)
  Rsp = (& (Rsp [2]));
  goto label_115;

DEFLABEL (label_119)
  (Wrd104.Obj) = (Rsp [0]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_18]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_11]), 2);

DEFLABEL (label_64)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_117;
  goto label_118;

DEFLABEL (label_121)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_17]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_9]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_120;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_44_20);
  goto label_99;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_44_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;
  goto label_115;

DEFLABEL (do_loop_77)
DEFLABEL (do_loop_45)
  INTERRUPT_CHECK (26, LABEL_44_28);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_123;
  (Wrd9.Obj) = (current_block [OBJECT_44_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_122;

DEFLABEL (label_123)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_122)
DEFLABEL (label_133)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_124;
  Rsp = (& (Rsp [3]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_124)
  (Wrd69.Obj) = (Rsp [4]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_132;
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 26))
    goto label_132;
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) (Wrd64.Lng)) < ((unsigned long) (Wrd68.Lng))))
    goto label_132;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd61.Obj));
  (Wrd19.pObj) = (& ((Wrd66.pObj) [(Wrd16.Lng)]));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_126;

DEFLABEL (label_125)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd59.Lng) = ((Wrd58.Lng) + 1L);
  (Wrd56.Obj) = (LONG_TO_FIXNUM (Wrd59.Lng));
  (Rsp [1]) = (Wrd56.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_45;

DEFLABEL (label_126)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_27]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd27.Lng) - 1L);
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_131;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_131;
  Wrd35 = Wrd28;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_131;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd32.pObj) = (& ((Wrd37.pObj) [(Wrd29.Lng)]));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_130)
  (Wrd47.Obj) = (Rsp [0]);
  if ((Wrd47.Obj) == ((SCHEME_OBJECT) 0))
    goto label_129;
  (Wrd49.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_26]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_44_26);
  (Rsp [2]) = Rvl;
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd95.uLng) == 62)
    goto label_128;

DEFLABEL (label_127)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_6]), 3);

DEFLABEL (label_128)
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 26))
    goto label_127;
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) (Wrd89.Lng)) < ((unsigned long) (Wrd93.Lng))))
    goto label_127;
  (Wrd81.uLng) = (OBJECT_DATUM (Wrd86.Obj));
  (Wrd84.pObj) = (& ((Wrd91.pObj) [(Wrd81.Lng)]));
  ((Wrd84.pObj) [1]) = Rvl;
  Rsp = (& (Rsp [4]));
  goto label_125;

DEFLABEL (label_129)
  Rsp = (& (Rsp [2]));
  goto label_125;

DEFLABEL (label_131)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_30]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_18]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (label_132)
  (Wrd71.Obj) = (Rsp [4]);
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_29]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_18]), 2);

DEFLABEL (label_66)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_126;
  goto label_125;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_44_27);
  goto label_125;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_6 5
#define LABEL_45_5 7
#define LABEL_45_9 9
#define LABEL_45_8 11
#define ENVIRONMENT_LABEL_45_3 22
#define DEBUGGING_LABEL_45_2 21
#define OBJECT_45_1 20
#define OBJECT_45_0 19
#define EXECUTE_CACHE_45_11 13
#define EXECUTE_CACHE_45_10 15
#define EXECUTE_CACHE_45_7 17
#define FREE_REFERENCES_LABEL_45_0 12
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_45_4);
      goto recordP_5;

    case 1:
      current_block = (Rpc - LABEL_45_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_45_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_45_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (recordP_10)
DEFLABEL (recordP_5)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 62))
    goto label_16;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd20.Lng))))
    goto label_16;
  (Wrd14.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_14;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd18.Lng))))
    goto label_14;
  (Wrd12.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_45_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_11]));

DEFLABEL (label_14)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_45_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_45_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_7 7
#define ENVIRONMENT_LABEL_46_3 17
#define DEBUGGING_LABEL_46_2 16
#define OBJECT_46_2 15
#define OBJECT_46_1 14
#define OBJECT_46_0 13
#define EXECUTE_CACHE_46_8 9
#define EXECUTE_CACHE_46_6 11
#define FREE_REFERENCES_LABEL_46_0 8
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto record_type_descriptor_2;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_type_descriptor_6)
DEFLABEL (record_type_descriptor_2)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_46_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define ENVIRONMENT_LABEL_47_3 13
#define DEBUGGING_LABEL_47_2 12
#define OBJECT_47_0 11
#define EXECUTE_CACHE_47_7 7
#define EXECUTE_CACHE_47_6 9
#define FREE_REFERENCES_LABEL_47_0 6
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_47_4);
      goto copy_record_1;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_record_4)
DEFLABEL (copy_record_1)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_9 9
#define TAG_48_10 3
#define LABEL_48_11 11
#define ENVIRONMENT_LABEL_48_3 22
#define DEBUGGING_LABEL_48_2 21
#define OBJECT_48_3 20
#define OBJECT_48_2 19
#define OBJECT_48_1 18
#define OBJECT_48_0 17
#define EXECUTE_CACHE_48_8 13
#define EXECUTE_CACHE_48_6 15
#define FREE_REFERENCES_LABEL_48_0 12
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_48_4);
      goto record_predicate_6;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_48_9);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_48_11);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_predicate_10)
DEFLABEL (record_predicate_6)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_7);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_9])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_48_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  if (! ((Wrd6.uLng) == 62))
    goto label_16;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_16;
  (Wrd9.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_15)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  if (! ((Wrd9.Obj) == (Wrd28.Obj)))
    goto label_13;
  Rvl = (current_block [OBJECT_48_3]);
  goto label_12;

DEFLABEL (label_16)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_48_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_8)
  (Wrd9.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define LABEL_49_9 9
#define LABEL_49_13 11
#define LABEL_49_11 13
#define TAG_49_12 5
#define LABEL_49_14 15
#define ENVIRONMENT_LABEL_49_3 30
#define DEBUGGING_LABEL_49_2 29
#define OBJECT_49_3 28
#define OBJECT_49_2 27
#define OBJECT_49_1 26
#define OBJECT_49_0 25
#define EXECUTE_CACHE_49_15 17
#define EXECUTE_CACHE_49_10 19
#define EXECUTE_CACHE_49_8 21
#define EXECUTE_CACHE_49_6 23
#define FREE_REFERENCES_LABEL_49_0 16
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd58;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_49_4);
      goto record_accessor_12;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_49_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_49_13);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_49_11);
      goto lambda_17;

    case 6:
      current_block = (Rpc - LABEL_49_14);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_accessor_16)
DEFLABEL (record_accessor_12)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_9);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_11])));
  Rhp += 4;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd19 = Wrd12;
  (Wrd20.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  ((Wrd19.pObj) [4]) = Rvl;
  ((Wrd19.pObj) [5]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  ((Wrd6.pObj) [0]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  Rvl = ((Wrd27.pObj) [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_49_11);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_22;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_49_13);

DEFLABEL (label_20)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [3]);
  (Wrd41.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd58.uLng) == 62)
    goto label_19;

DEFLABEL (label_18)
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_19)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd50.uLng) == 26))
    goto label_18;
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) (Wrd52.Lng)) < ((unsigned long) (Wrd56.Lng))))
    goto label_18;
  (Wrd44.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd47.pObj) = (& ((Wrd54.pObj) [(Wrd44.Lng)]));
  Rvl = ((Wrd47.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  if (! ((Wrd6.uLng) == 62))
    goto label_24;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd27.Lng))))
    goto label_24;
  (Wrd19.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_23)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [4]);
  if ((Wrd19.Obj) == (Wrd37.Obj))
    goto label_20;
  goto label_21;

DEFLABEL (label_24)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (current_block [OBJECT_49_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_14]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_14)
  (Wrd19.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define LABEL_50_9 9
#define LABEL_50_13 11
#define LABEL_50_11 13
#define TAG_50_12 5
#define LABEL_50_14 15
#define ENVIRONMENT_LABEL_50_3 32
#define DEBUGGING_LABEL_50_2 31
#define OBJECT_50_5 30
#define OBJECT_50_4 29
#define OBJECT_50_3 28
#define OBJECT_50_2 27
#define OBJECT_50_1 26
#define OBJECT_50_0 25
#define EXECUTE_CACHE_50_15 17
#define EXECUTE_CACHE_50_10 19
#define EXECUTE_CACHE_50_8 21
#define EXECUTE_CACHE_50_6 23
#define FREE_REFERENCES_LABEL_50_0 16
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd59;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_50_4);
      goto record_modifier_12;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_50_13);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_50_11);
      goto lambda_17;

    case 6:
      current_block = (Rpc - LABEL_50_14);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_modifier_16)
DEFLABEL (record_modifier_12)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_9);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_11])));
  Rhp += 4;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd19 = Wrd12;
  (Wrd20.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  ((Wrd19.pObj) [4]) = Rvl;
  ((Wrd19.pObj) [5]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  ((Wrd6.pObj) [0]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  Rvl = ((Wrd27.pObj) [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_50_11);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_22;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_50_13);

DEFLABEL (label_20)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [3]);
  (Wrd41.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd59.uLng) == 62)
    goto label_19;

DEFLABEL (label_18)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_5]), 3);

DEFLABEL (label_19)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_18;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) (Wrd53.Lng)) < ((unsigned long) (Wrd57.Lng))))
    goto label_18;
  (Wrd44.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd47.pObj) = (& ((Wrd55.pObj) [(Wrd44.Lng)]));
  (Wrd48.Obj) = (Rsp [2]);
  ((Wrd47.pObj) [1]) = (Wrd48.Obj);
  Rvl = (current_block [OBJECT_50_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  if (! ((Wrd6.uLng) == 62))
    goto label_24;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd27.Lng))))
    goto label_24;
  (Wrd19.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_23)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [4]);
  if ((Wrd19.Obj) == (Wrd37.Obj))
    goto label_20;
  goto label_21;

DEFLABEL (label_24)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (current_block [OBJECT_50_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

DEFLABEL (label_14)
  (Wrd19.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_6 5
#define LABEL_51_5 7
#define ENVIRONMENT_LABEL_51_3 17
#define DEBUGGING_LABEL_51_2 16
#define OBJECT_51_2 15
#define OBJECT_51_1 14
#define OBJECT_51_0 13
#define EXECUTE_CACHE_51_8 9
#define EXECUTE_CACHE_51_7 11
#define FREE_REFERENCES_LABEL_51_0 8
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_51_4);
      goto error_not_tagged_record_2;

    case 1:
      current_block = (Rpc - LABEL_51_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_tagged_record_6)
DEFLABEL (error_not_tagged_record_2)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_8;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_8;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_7)
  (Wrd24.Obj) = (current_block [OBJECT_51_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (label_8)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_51_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define LABEL_52_7 9
#define LABEL_52_8 11
#define LABEL_52_9 13
#define ENVIRONMENT_LABEL_52_3 25
#define DEBUGGING_LABEL_52_2 24
#define OBJECT_52_4 23
#define OBJECT_52_3 22
#define OBJECT_52_2 21
#define OBJECT_52_1 20
#define OBJECT_52_0 19
#define EXECUTE_CACHE_52_11 15
#define EXECUTE_CACHE_52_10 17
#define FREE_REFERENCES_LABEL_52_0 14
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_52_4);
      goto record_type_field_index_12;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_52_7);
      goto loop_8;

    case 4:
      current_block = (Rpc - LABEL_52_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_52_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_type_field_index_18)
DEFLABEL (record_type_field_index_12)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd14.Obj) = (Rsp [0]);
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
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_21;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_20)
  (Wrd32.Obj) = (current_block [OBJECT_52_3]);
  (* (--Rsp)) = (Wrd32.Obj);
  goto loop_8;

DEFLABEL (label_21)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_52_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (loop_19)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_52_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_26;
  (Wrd9.Obj) = (Rsp [5]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_52_9);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_11]));

DEFLABEL (label_24)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_25)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_29;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_29;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_29;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd23.pObj) = (& ((Wrd29.pObj) [(Wrd20.Lng)]));
  (Wrd18.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_28)
  (Wrd39.Obj) = (Rsp [4]);
  if ((Wrd18.Obj) == (Wrd39.Obj))
    goto label_27;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd42.Lng) + 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (Rsp [0]) = (Wrd40.Obj);
  goto loop_8;

DEFLABEL (label_27)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd46.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd47.Lng));
  goto label_25;

DEFLABEL (label_29)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 2);

DEFLABEL (label_16)
  (Wrd18.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_5 3
#define LABEL_53_4 5
#define LABEL_53_6 7
#define ENVIRONMENT_LABEL_53_3 20
#define DEBUGGING_LABEL_53_2 19
#define OBJECT_53_5 18
#define OBJECT_53_4 17
#define OBJECT_53_3 16
#define OBJECT_53_2 15
#define OBJECT_53_1 14
#define OBJECT_53_0 13
#define EXECUTE_CACHE_53_8 9
#define EXECUTE_CACHE_53_7 11
#define FREE_REFERENCES_LABEL_53_0 8
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd39;
  machine_word Wrd12;
  machine_word Wrd34;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_53_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_53_4);
      goto Z___type_name_4;

    case 2:
      current_block = (Rpc - LABEL_53_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___type_name_8)
DEFLABEL (Z___type_name_4)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_9;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_53_0]);
  (Wrd34.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd34.Lng))))
    goto label_18;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd31.Obj));
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_17;

DEFLABEL (label_16)
  (Wrd15.Obj) = (current_block [OBJECT_53_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_10;
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_10)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_12;
  (Wrd17.Obj) = (current_block [OBJECT_53_4]);
  goto label_11;

DEFLABEL (label_12)
  (Wrd17.Obj) = (current_block [OBJECT_53_3]);

DEFLABEL (label_11)
DEFLABEL (label_15)
  Rsp = (& (Rsp [3]));
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (label_14)
  (Wrd27.Obj) = (current_block [OBJECT_53_5]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto label_13;

DEFLABEL (label_18)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_17;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_6 5
#define LABEL_54_5 7
#define LABEL_54_8 9
#define LABEL_54_9 11
#define LABEL_54_10 13
#define LABEL_54_11 15
#define LABEL_54_12 17
#define LABEL_54_13 19
#define LABEL_54_14 21
#define ENVIRONMENT_LABEL_54_3 35
#define DEBUGGING_LABEL_54_2 34
#define OBJECT_54_4 33
#define OBJECT_54_3 32
#define OBJECT_54_2 31
#define OBJECT_54_1 30
#define OBJECT_54_0 29
#define EXECUTE_CACHE_54_15 23
#define EXECUTE_CACHE_54_7 25
#define FREE_REFERENCE_54_0 28
#define FREE_REFERENCES_LABEL_54_0 22
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_54_4);
      goto list_of_unique_symbolsP_16;

    case 1:
      current_block = (Rpc - LABEL_54_6);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_54_8);
      goto loop_14;

    case 4:
      current_block = (Rpc - LABEL_54_9);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_54_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_54_11);
      goto memq_12;

    case 7:
      current_block = (Rpc - LABEL_54_12);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_54_13);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_54_14);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list_of_unique_symbolsP_25)
DEFLABEL (list_of_unique_symbolsP_16)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_30;
  Wrd8 = Wrd12;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto loop_14;

DEFLABEL (label_28)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_6])), (Wrd9.pObj));

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_29;

DEFLABEL (loop_26)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_54_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_31;
  Rvl = (current_block [OBJECT_54_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  if (! ((Wrd6.uLng) == 1))
    goto label_35;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_34)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_33;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_32)
  goto memq_12;

DEFLABEL (label_33)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (memq_27)
DEFLABEL (memq_12)
  INTERRUPT_CHECK (26, LABEL_54_11);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_39;
  if ((Wrd5.Obj) == (current_block [OBJECT_54_3]))
    goto label_36;
  (Wrd9.Obj) = (current_block [OBJECT_54_4]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_15]));

DEFLABEL (label_36)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_38;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_37)
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_14;

DEFLABEL (label_38)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

DEFLABEL (label_21)
  (Wrd11.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  if (! ((Wrd6.uLng) == 1))
    goto label_44;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_43)
  (Wrd30.Obj) = (Rsp [0]);
  if (! ((Wrd30.Obj) == (Wrd21.Obj)))
    goto label_40;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_42;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd31.Obj);
  goto memq_12;

DEFLABEL (label_42)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_13]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

DEFLABEL (label_23)
  (Wrd31.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define ENVIRONMENT_LABEL_55_3 13
#define DEBUGGING_LABEL_55_2 12
#define OBJECT_55_0 11
#define EXECUTE_CACHE_55_7 7
#define EXECUTE_CACHE_55_6 9
#define FREE_REFERENCES_LABEL_55_0 6
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto guarantee_list_of_unique_symbols_1;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_list_of_unique_symbols_4)
DEFLABEL (guarantee_list_of_unique_symbols_1)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_55_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 11
#define DEBUGGING_LABEL_56_2 10
#define OBJECT_56_2 9
#define OBJECT_56_1 8
#define OBJECT_56_0 7
#define EXECUTE_CACHE_56_5 5
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto error_not_list_of_unique_symbols_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_list_of_unique_symbols_5)
DEFLABEL (error_not_list_of_unique_symbols_2)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_56_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_56_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define ENVIRONMENT_LABEL_57_3 13
#define DEBUGGING_LABEL_57_2 12
#define OBJECT_57_0 11
#define EXECUTE_CACHE_57_7 7
#define EXECUTE_CACHE_57_6 9
#define FREE_REFERENCES_LABEL_57_0 6
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto guarantee_record_type_1;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_record_type_4)
DEFLABEL (guarantee_record_type_1)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_57_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define ENVIRONMENT_LABEL_58_3 11
#define DEBUGGING_LABEL_58_2 10
#define OBJECT_58_2 9
#define OBJECT_58_1 8
#define OBJECT_58_0 7
#define EXECUTE_CACHE_58_5 5
#define FREE_REFERENCES_LABEL_58_0 4
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto error_not_record_type_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_record_type_5)
DEFLABEL (error_not_record_type_2)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_58_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_58_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define ENVIRONMENT_LABEL_59_3 13
#define DEBUGGING_LABEL_59_2 12
#define OBJECT_59_0 11
#define EXECUTE_CACHE_59_7 7
#define EXECUTE_CACHE_59_6 9
#define FREE_REFERENCES_LABEL_59_0 6
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto guarantee_record_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_record_4)
DEFLABEL (guarantee_record_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_59_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define ENVIRONMENT_LABEL_60_3 11
#define DEBUGGING_LABEL_60_2 10
#define OBJECT_60_2 9
#define OBJECT_60_1 8
#define OBJECT_60_0 7
#define EXECUTE_CACHE_60_5 5
#define FREE_REFERENCES_LABEL_60_0 4
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto error_not_record_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_record_5)
DEFLABEL (error_not_record_2)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_60_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_60_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_7 7
#define LABEL_61_9 9
#define LABEL_61_8 11
#define LABEL_61_13 13
#define LABEL_61_15 15
#define LABEL_61_11 17
#define TAG_61_12 7
#define LABEL_61_14 19
#define LABEL_61_17 21
#define LABEL_61_19 23
#define LABEL_61_18 25
#define LABEL_61_21 27
#define LABEL_61_23 29
#define LABEL_61_22 31
#define LABEL_61_24 33
#define LABEL_61_26 35
#define LABEL_61_25 37
#define LABEL_61_27 39
#define LABEL_61_29 41
#define LABEL_61_28 43
#define LABEL_61_30 45
#define LABEL_61_32 47
#define LABEL_61_31 49
#define LABEL_61_33 51
#define LABEL_61_35 53
#define LABEL_61_34 55
#define LABEL_61_36 57
#define LABEL_61_38 59
#define LABEL_61_37 61
#define LABEL_61_40 63
#define LABEL_61_42 65
#define LABEL_61_41 67
#define LABEL_61_43 69
#define LABEL_61_45 71
#define LABEL_61_44 73
#define LABEL_61_46 75
#define LABEL_61_48 77
#define LABEL_61_47 79
#define LABEL_61_49 81
#define LABEL_61_51 83
#define LABEL_61_50 85
#define LABEL_61_52 87
#define ENVIRONMENT_LABEL_61_3 131
#define DEBUGGING_LABEL_61_2 130
#define OBJECT_61_13 129
#define OBJECT_61_12 128
#define OBJECT_61_11 127
#define OBJECT_61_10 126
#define OBJECT_61_9 125
#define OBJECT_61_8 124
#define OBJECT_61_7 123
#define OBJECT_61_6 122
#define OBJECT_61_5 121
#define OBJECT_61_4 120
#define OBJECT_61_3 119
#define OBJECT_61_2 118
#define OBJECT_61_1 117
#define OBJECT_61_0 116
#define EXECUTE_CACHE_61_39 89
#define EXECUTE_CACHE_61_20 91
#define EXECUTE_CACHE_61_16 93
#define EXECUTE_CACHE_61_10 95
#define EXECUTE_CACHE_61_6 97
#define FREE_REFERENCE_61_0 100
#define FREE_ASSIGNMENT_61_13 102
#define FREE_ASSIGNMENT_61_12 103
#define FREE_ASSIGNMENT_61_11 104
#define FREE_ASSIGNMENT_61_10 105
#define FREE_ASSIGNMENT_61_9 106
#define FREE_ASSIGNMENT_61_8 107
#define FREE_ASSIGNMENT_61_7 108
#define FREE_ASSIGNMENT_61_6 109
#define FREE_ASSIGNMENT_61_5 110
#define FREE_ASSIGNMENT_61_4 111
#define FREE_ASSIGNMENT_61_3 112
#define FREE_ASSIGNMENT_61_2 113
#define FREE_ASSIGNMENT_61_1 114
#define FREE_ASSIGNMENT_61_0 115
#define FREE_REFERENCES_LABEL_61_0 88
#define NUMBER_OF_LINKER_SECTIONS_61_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_61_4);
      goto initialize_structure_type_typeB_19;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_61_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_61_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_61_13);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_61_15);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_61_11);
      goto lambda_50;

    case 8:
      current_block = (Rpc - LABEL_61_14);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_61_17);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_61_19);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_61_18);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_61_21);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_61_23);
      goto label_28;

    case 14:
      current_block = (Rpc - LABEL_61_22);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_61_24);
      goto label_29;

    case 16:
      current_block = (Rpc - LABEL_61_26);
      goto label_30;

    case 17:
      current_block = (Rpc - LABEL_61_25);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_61_27);
      goto label_31;

    case 19:
      current_block = (Rpc - LABEL_61_29);
      goto label_32;

    case 20:
      current_block = (Rpc - LABEL_61_28);
      goto continuation_11;

    case 21:
      current_block = (Rpc - LABEL_61_30);
      goto label_33;

    case 22:
      current_block = (Rpc - LABEL_61_32);
      goto label_34;

    case 23:
      current_block = (Rpc - LABEL_61_31);
      goto continuation_12;

    case 24:
      current_block = (Rpc - LABEL_61_33);
      goto label_35;

    case 25:
      current_block = (Rpc - LABEL_61_35);
      goto label_36;

    case 26:
      current_block = (Rpc - LABEL_61_34);
      goto continuation_13;

    case 27:
      current_block = (Rpc - LABEL_61_36);
      goto label_37;

    case 28:
      current_block = (Rpc - LABEL_61_38);
      goto label_38;

    case 29:
      current_block = (Rpc - LABEL_61_37);
      goto continuation_14;

    case 30:
      current_block = (Rpc - LABEL_61_40);
      goto label_39;

    case 31:
      current_block = (Rpc - LABEL_61_42);
      goto label_40;

    case 32:
      current_block = (Rpc - LABEL_61_41);
      goto continuation_15;

    case 33:
      current_block = (Rpc - LABEL_61_43);
      goto label_41;

    case 34:
      current_block = (Rpc - LABEL_61_45);
      goto label_42;

    case 35:
      current_block = (Rpc - LABEL_61_44);
      goto continuation_16;

    case 36:
      current_block = (Rpc - LABEL_61_46);
      goto label_43;

    case 37:
      current_block = (Rpc - LABEL_61_48);
      goto label_44;

    case 38:
      current_block = (Rpc - LABEL_61_47);
      goto continuation_17;

    case 39:
      current_block = (Rpc - LABEL_61_49);
      goto label_45;

    case 40:
      current_block = (Rpc - LABEL_61_51);
      goto label_46;

    case 41:
      current_block = (Rpc - LABEL_61_50);
      goto continuation_18;

    case 42:
      current_block = (Rpc - LABEL_61_52);
      goto label_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_structure_type_typeB_49)
DEFLABEL (initialize_structure_type_typeB_19)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_118;

DEFLABEL (label_117)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_116)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_115;
  Wrd21 = Wrd25;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_61_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x90a, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_11])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_1]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_113;

DEFLABEL (label_112)
  ((Wrd11.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_111)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_110;
  Wrd26 = Wrd30;

DEFLABEL (label_109)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_61_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_108;

DEFLABEL (label_107)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_106)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_61_4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_105;
  Wrd22 = Wrd26;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_61_18);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_103;

DEFLABEL (label_102)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_101)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_61_5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_100;
  Wrd22 = Wrd26;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_61_22);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_98;

DEFLABEL (label_97)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_96)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_61_6]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_95;
  Wrd22 = Wrd26;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_61_25);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_93;

DEFLABEL (label_92)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_91)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_28]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_61_7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_90;
  Wrd22 = Wrd26;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_61_28);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_6]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_86)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_61_8]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_85;
  Wrd22 = Wrd26;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_61_31);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_7]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_83;

DEFLABEL (label_82)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_81)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_34]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_61_9]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_80;
  Wrd22 = Wrd26;

DEFLABEL (label_79)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_61_34);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_8]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_78;

DEFLABEL (label_77)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_76)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_61_9]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_75;
  Wrd22 = Wrd26;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_39]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_61_37);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_9]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_71)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_41]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_61_10]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_70;
  Wrd22 = Wrd26;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_20]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_61_41);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_10]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_68;

DEFLABEL (label_67)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_66)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_44]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_61_11]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_65;
  Wrd22 = Wrd26;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_61_44);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_11]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_61)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_47]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_61_12]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_60;
  Wrd22 = Wrd26;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_20]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_61_47);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_12]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_56)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_50]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_61_12]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_55;
  Wrd22 = Wrd26;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_39]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_61_50);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_13]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_51)
  Rvl = (current_block [OBJECT_61_13]);
  goto pop_return;

DEFLABEL (label_53)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_52])), (Wrd6.pObj), Rvl);

DEFLABEL (label_47)
  goto label_51;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_51])), (Wrd23.pObj));

DEFLABEL (label_46)
  (Wrd22.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_49])), (Wrd6.pObj), Rvl);

DEFLABEL (label_45)
  goto label_56;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_48])), (Wrd23.pObj));

DEFLABEL (label_44)
  (Wrd22.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_63)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_62;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_46])), (Wrd6.pObj), Rvl);

DEFLABEL (label_43)
  goto label_61;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_45])), (Wrd23.pObj));

DEFLABEL (label_42)
  (Wrd22.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_68)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_67;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_43])), (Wrd6.pObj), Rvl);

DEFLABEL (label_41)
  goto label_66;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_42])), (Wrd23.pObj));

DEFLABEL (label_40)
  (Wrd22.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_73)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_40])), (Wrd6.pObj), Rvl);

DEFLABEL (label_39)
  goto label_71;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_38])), (Wrd23.pObj));

DEFLABEL (label_38)
  (Wrd22.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_78)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_77;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_36])), (Wrd6.pObj), Rvl);

DEFLABEL (label_37)
  goto label_76;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_35])), (Wrd23.pObj));

DEFLABEL (label_36)
  (Wrd22.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_83)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_82;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_33])), (Wrd6.pObj), Rvl);

DEFLABEL (label_35)
  goto label_81;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_32])), (Wrd23.pObj));

DEFLABEL (label_34)
  (Wrd22.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_88)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_87;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_30])), (Wrd6.pObj), Rvl);

DEFLABEL (label_33)
  goto label_86;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_29])), (Wrd23.pObj));

DEFLABEL (label_32)
  (Wrd22.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_93)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_92;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_27])), (Wrd6.pObj), Rvl);

DEFLABEL (label_31)
  goto label_91;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_26])), (Wrd23.pObj));

DEFLABEL (label_30)
  (Wrd22.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_98)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_97;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_24])), (Wrd6.pObj), Rvl);

DEFLABEL (label_29)
  goto label_96;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_23])), (Wrd23.pObj));

DEFLABEL (label_28)
  (Wrd22.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_103)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_102;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_21])), (Wrd6.pObj), Rvl);

DEFLABEL (label_27)
  goto label_101;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_19])), (Wrd23.pObj));

DEFLABEL (label_26)
  (Wrd22.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_108)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_107;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_17])), (Wrd6.pObj), Rvl);

DEFLABEL (label_25)
  goto label_106;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_15])), (Wrd27.pObj));

DEFLABEL (label_24)
  (Wrd26.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_113)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_112;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_13])), (Wrd11.pObj), (Wrd6.Obj));

DEFLABEL (label_23)
  goto label_111;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_9])), (Wrd22.pObj));

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_118)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_117;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_21)
  goto label_116;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_61_11);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  if ((Wrd8.Obj) == (current_block [OBJECT_61_2]))
    goto label_120;
  Wrd10 = Wrd8;
  goto label_119;

DEFLABEL (label_120)
  (Wrd10.Obj) = (current_block [OBJECT_61_3]);

DEFLABEL (label_119)
DEFLABEL (label_121)
  (Rsp [9]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 10);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_7 7
#define ENVIRONMENT_LABEL_62_3 15
#define DEBUGGING_LABEL_62_2 14
#define OBJECT_62_0 13
#define EXECUTE_CACHE_62_8 9
#define EXECUTE_CACHE_62_6 11
#define FREE_REFERENCES_LABEL_62_0 8
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_62_4);
      goto structure_type_field_index_2;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_62_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (structure_type_field_index_5)
DEFLABEL (structure_type_field_index_2)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_7);
  (Rsp [0]) = Rvl;
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd22.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_0]), 2);

DEFLABEL (label_7)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_6;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_6;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd11.pObj) = (& ((Wrd18.pObj) [(Wrd8.Lng)]));
  Rvl = ((Wrd11.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_7 7
#define ENVIRONMENT_LABEL_63_3 15
#define DEBUGGING_LABEL_63_2 14
#define OBJECT_63_0 13
#define EXECUTE_CACHE_63_8 9
#define EXECUTE_CACHE_63_6 11
#define FREE_REFERENCES_LABEL_63_0 8
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_63_4);
      goto structure_type_default_init_2;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_63_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (structure_type_default_init_5)
DEFLABEL (structure_type_default_init_2)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_7);
  (Rsp [0]) = Rvl;
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd22.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_0]), 2);

DEFLABEL (label_7)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_6;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_6;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd11.pObj) = (& ((Wrd18.pObj) [(Wrd8.Lng)]));
  Rvl = ((Wrd11.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define ENVIRONMENT_LABEL_64_3 11
#define DEBUGGING_LABEL_64_2 10
#define OBJECT_64_0 9
#define EXECUTE_CACHE_64_6 7
#define FREE_REFERENCES_LABEL_64_0 6
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_64_4);
      goto structure_type_default_init_by_index_1;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (structure_type_default_init_by_index_4)
DEFLABEL (structure_type_default_init_by_index_1)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  (Rsp [0]) = Rvl;
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd22.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_0]), 2);

DEFLABEL (label_6)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_5;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_5;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd11.pObj) = (& ((Wrd18.pObj) [(Wrd8.Lng)]));
  Rvl = ((Wrd11.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_7 7
#define LABEL_65_8 9
#define LABEL_65_9 11
#define LABEL_65_10 13
#define ENVIRONMENT_LABEL_65_3 23
#define DEBUGGING_LABEL_65_2 22
#define OBJECT_65_2 21
#define OBJECT_65_1 20
#define OBJECT_65_0 19
#define EXECUTE_CACHE_65_11 15
#define EXECUTE_CACHE_65_6 17
#define FREE_REFERENCES_LABEL_65_0 14
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_65_4);
      goto structure_type_field_name_index_12;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_65_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_65_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_65_9);
      goto loop_8;

    case 5:
      current_block = (Rpc - LABEL_65_10);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (structure_type_field_name_index_17)
DEFLABEL (structure_type_field_name_index_12)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 10))
    goto label_20;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_19)
  (Wrd16.Obj) = (current_block [OBJECT_65_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_8;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (loop_18)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_65_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_24;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_65_8);

DEFLABEL (label_24)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_23;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_23;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd23.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_23;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd20.Obj));
  (Wrd19.pObj) = (& ((Wrd25.pObj) [(Wrd16.Lng)]));
  (Wrd14.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_22)
  (Wrd35.Obj) = (Rsp [4]);
  if ((Wrd14.Obj) == (Wrd35.Obj))
    goto label_21;
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (Rsp [0]) = (Wrd36.Obj);
  goto loop_8;

DEFLABEL (label_21)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_2]), 2);

DEFLABEL (label_15)
  (Wrd14.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define ENVIRONMENT_LABEL_66_3 12
#define DEBUGGING_LABEL_66_2 11
#define EXECUTE_CACHE_66_7 7
#define EXECUTE_CACHE_66_6 9
#define FREE_REFERENCES_LABEL_66_0 6
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_66_4);
      goto structure_tag_unparser_method_2;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (structure_tag_unparser_method_5)
DEFLABEL (structure_tag_unparser_method_2)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_7]));

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define ENVIRONMENT_LABEL_67_3 12
#define DEBUGGING_LABEL_67_2 11
#define EXECUTE_CACHE_67_7 7
#define EXECUTE_CACHE_67_6 9
#define FREE_REFERENCES_LABEL_67_0 6
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_67_4);
      goto structure_tag_entity_unparser_method_2;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (structure_tag_entity_unparser_method_5)
DEFLABEL (structure_tag_entity_unparser_method_2)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_7 7
#define LABEL_68_8 9
#define LABEL_68_10 11
#define ENVIRONMENT_LABEL_68_3 25
#define DEBUGGING_LABEL_68_2 24
#define OBJECT_68_6 23
#define OBJECT_68_5 22
#define OBJECT_68_4 21
#define OBJECT_68_3 20
#define OBJECT_68_2 19
#define OBJECT_68_1 18
#define OBJECT_68_0 17
#define EXECUTE_CACHE_68_9 13
#define EXECUTE_CACHE_68_6 15
#define FREE_REFERENCES_LABEL_68_0 12
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_68_4);
      goto named_structureP_7;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_68_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_68_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_68_10);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (named_structureP_13)
DEFLABEL (named_structureP_7)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (current_block [OBJECT_68_6]);

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 10)
    goto label_20;
  if ((Wrd10.uLng) == 1)
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_17)
  if (! ((Wrd10.uLng) == 1))
    goto label_19;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_18)
  (Wrd24.Obj) = (current_block [OBJECT_68_5]);
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_9]));

DEFLABEL (label_19)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_4]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  if (! ((Wrd10.uLng) == 10))
    goto label_24;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd25.Obj) = (MAKE_OBJECT (26, (Wrd29.uLng)));

DEFLABEL (label_23)
  if ((Wrd25.Obj) == (current_block [OBJECT_68_1]))
    goto label_16;
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_22;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd45.Lng))))
    goto label_22;
  (Wrd39.Obj) = ((Wrd43.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_21)
  (Wrd53.Obj) = (current_block [OBJECT_68_3]);
  (Rsp [1]) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_9]));

DEFLABEL (label_22)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (current_block [OBJECT_68_1]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_2]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_7]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_0]), 1);

DEFLABEL (label_10)
  (Wrd25.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_9 7
#define LABEL_69_7 9
#define LABEL_69_11 11
#define LABEL_69_12 13
#define ENVIRONMENT_LABEL_69_3 22
#define DEBUGGING_LABEL_69_2 21
#define EXECUTE_CACHE_69_10 15
#define EXECUTE_CACHE_69_8 17
#define EXECUTE_CACHE_69_6 19
#define FREE_REFERENCES_LABEL_69_0 14
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_69_4);
      goto tag__structure_type_8;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_69_9);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_69_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_69_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_69_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tag__structure_type_11)
DEFLABEL (tag__structure_type_8)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_69_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_69_9);
  (Wrd6.Obj) = (Rsp [1]);
  if (Rvl == (Wrd6.Obj))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (Rsp [0]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_69_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_69_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_69_12);
  (Wrd6.Obj) = (Rsp [2]);
  if (Rvl == (Wrd6.Obj))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_18)
  Rvl = (Rsp [0]);

DEFLABEL (label_17)
DEFLABEL (label_19)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_7 7
#define LABEL_70_11 9
#define LABEL_70_12 11
#define LABEL_70_13 13
#define TAG_70_14 5
#define LABEL_70_15 15
#define LABEL_70_16 17
#define LABEL_70_18 19
#define LABEL_70_19 21
#define LABEL_70_20 23
#define ENVIRONMENT_LABEL_70_3 48
#define DEBUGGING_LABEL_70_2 47
#define OBJECT_70_2 46
#define OBJECT_70_1 45
#define OBJECT_70_0 44
#define EXECUTE_CACHE_70_23 25
#define EXECUTE_CACHE_70_22 27
#define EXECUTE_CACHE_70_21 29
#define EXECUTE_CACHE_70_17 31
#define EXECUTE_CACHE_70_10 33
#define EXECUTE_CACHE_70_9 35
#define EXECUTE_CACHE_70_8 37
#define EXECUTE_CACHE_70_6 39
#define FREE_REFERENCE_70_1 42
#define FREE_REFERENCE_70_0 43
#define FREE_REFERENCES_LABEL_70_0 24
#define NUMBER_OF_LINKER_SECTIONS_70_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_70_4);
      goto named_structure_description_14;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_70_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_70_11);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_70_12);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_70_13);
      goto lambda_20;

    case 6:
      current_block = (Rpc - LABEL_70_15);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_70_16);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_70_18);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_70_19);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_70_20);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (named_structure_description_19)
DEFLABEL (named_structure_description_14)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_9]));

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_70_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd35.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_70_0]);
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_70_1]);
  (Rsp [2]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_10]));

DEFLABEL (label_22)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_26;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_25;
  Wrd9 = Wrd13;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_23)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_70_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_70_13])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  (Wrd21.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Rsp [0]) = (Wrd16.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_70_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_70_15);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_70_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_70_19);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_23]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_12])), (Wrd10.pObj));

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_28;
  Wrd29 = Wrd33;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd29.Obj);
  goto label_23;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_11])), (Wrd30.pObj));

DEFLABEL (label_17)
  (Wrd29.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_70_13);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_70_18);
  (Wrd9.Obj) = (current_block [OBJECT_70_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define LABEL_71_7 7
#define LABEL_71_9 9
#define ENVIRONMENT_LABEL_71_3 17
#define DEBUGGING_LABEL_71_2 16
#define OBJECT_71_0 15
#define EXECUTE_CACHE_71_8 11
#define EXECUTE_CACHE_71_6 13
#define FREE_REFERENCES_LABEL_71_0 10
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto define_structure_default_value_3;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_71_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_71_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_structure_default_value_7)
DEFLABEL (define_structure_default_value_3)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_9;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_9;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_9;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.pObj) = (& ((Wrd13.pObj) [(Wrd8.Lng)]));
  (Wrd7.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_9)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 2);

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_7 7
#define ENVIRONMENT_LABEL_72_3 13
#define DEBUGGING_LABEL_72_2 12
#define OBJECT_72_0 11
#define EXECUTE_CACHE_72_6 9
#define FREE_REFERENCES_LABEL_72_0 8
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_72_4);
      goto define_structure_default_value_by_index_2;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_72_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_structure_default_value_by_index_6)
DEFLABEL (define_structure_default_value_by_index_2)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (Wrd5.Obj) = Rvl;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_8;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_8;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd17.Lng))))
    goto label_8;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd10.pObj) = (& ((Wrd15.pObj) [(Wrd8.Lng)]));
  (Wrd6.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_8)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_0]), 2);

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define LABEL_73_7 7
#define LABEL_73_9 9
#define LABEL_73_11 11
#define LABEL_73_13 13
#define LABEL_73_15 15
#define LABEL_73_16 17
#define TAG_73_17 7
#define LABEL_73_18 19
#define LABEL_73_19 21
#define LABEL_73_20 23
#define LABEL_73_22 25
#define LABEL_73_23 27
#define LABEL_73_24 29
#define LABEL_73_26 31
#define LABEL_73_28 33
#define LABEL_73_29 35
#define LABEL_73_30 37
#define LABEL_73_31 39
#define LABEL_73_32 41
#define LABEL_73_33 43
#define LABEL_73_36 45
#define LABEL_73_37 47
#define LABEL_73_38 49
#define LABEL_73_39 51
#define LABEL_73_40 53
#define LABEL_73_41 55
#define LABEL_73_42 57
#define LABEL_73_43 59
#define LABEL_73_25 61
#define LABEL_73_45 63
#define LABEL_73_46 65
#define LABEL_73_34 67
#define LABEL_73_47 69
#define LABEL_73_48 71
#define ENVIRONMENT_LABEL_73_3 102
#define DEBUGGING_LABEL_73_2 101
#define OBJECT_73_9 100
#define OBJECT_73_8 99
#define OBJECT_73_7 98
#define OBJECT_73_6 97
#define OBJECT_73_5 96
#define OBJECT_73_4 95
#define OBJECT_73_3 94
#define OBJECT_73_2 93
#define OBJECT_73_1 92
#define OBJECT_73_0 91
#define EXECUTE_CACHE_73_44 73
#define EXECUTE_CACHE_73_35 75
#define EXECUTE_CACHE_73_27 77
#define EXECUTE_CACHE_73_21 79
#define EXECUTE_CACHE_73_14 81
#define EXECUTE_CACHE_73_12 83
#define EXECUTE_CACHE_73_10 85
#define EXECUTE_CACHE_73_8 87
#define EXECUTE_CACHE_73_6 89
#define FREE_REFERENCES_LABEL_73_0 72
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd131;
  machine_word Wrd140;
  machine_word Wrd123;
  machine_word Wrd158;
  machine_word Wrd153;
  machine_word Wrd144;
  machine_word Wrd141;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd115;
  machine_word Wrd92;
  machine_word Wrd101;
  machine_word Wrd76;
  machine_word Wrd174;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd74;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd163;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd64;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd97;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd37;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd105;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd130;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_73_4);
      goto define_structure_keyword_constructor_66;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_73_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_73_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_73_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_73_13);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_73_15);
      goto label_68;

    case 7:
      current_block = (Rpc - LABEL_73_16);
      goto lambda_86;

    case 8:
      current_block = (Rpc - LABEL_73_18);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_73_19);
      goto label_69;

    case 10:
      current_block = (Rpc - LABEL_73_20);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_73_22);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_73_23);
      goto do_loop_36;

    case 13:
      current_block = (Rpc - LABEL_73_24);
      goto label_70;

    case 14:
      current_block = (Rpc - LABEL_73_26);
      goto label_71;

    case 15:
      current_block = (Rpc - LABEL_73_28);
      goto continuation_45;

    case 16:
      current_block = (Rpc - LABEL_73_29);
      goto continuation_43;

    case 17:
      current_block = (Rpc - LABEL_73_30);
      goto do_loop_49;

    case 18:
      current_block = (Rpc - LABEL_73_31);
      goto label_74;

    case 19:
      current_block = (Rpc - LABEL_73_32);
      goto label_72;

    case 20:
      current_block = (Rpc - LABEL_73_33);
      goto label_73;

    case 21:
      current_block = (Rpc - LABEL_73_36);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_73_37);
      goto loop_30;

    case 23:
      current_block = (Rpc - LABEL_73_38);
      goto label_77;

    case 24:
      current_block = (Rpc - LABEL_73_39);
      goto label_82;

    case 25:
      current_block = (Rpc - LABEL_73_40);
      goto label_78;

    case 26:
      current_block = (Rpc - LABEL_73_41);
      goto label_79;

    case 27:
      current_block = (Rpc - LABEL_73_42);
      goto label_80;

    case 28:
      current_block = (Rpc - LABEL_73_43);
      goto label_81;

    case 29:
      current_block = (Rpc - LABEL_73_25);
      goto continuation_18;

    case 30:
      current_block = (Rpc - LABEL_73_45);
      goto label_75;

    case 31:
      current_block = (Rpc - LABEL_73_46);
      goto label_76;

    case 32:
      current_block = (Rpc - LABEL_73_34);
      goto continuation_52;

    case 33:
      current_block = (Rpc - LABEL_73_47);
      goto do_loop_60;

    case 34:
      current_block = (Rpc - LABEL_73_48);
      goto label_83;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_structure_keyword_constructor_85)
DEFLABEL (define_structure_keyword_constructor_66)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_73_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_73_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_73_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_13);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 10))
    goto label_92;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_91)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_16])));
  Rhp += 7;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd31 = Wrd18;
  (Wrd32.Obj) = (Rsp [6]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  ((Wrd31.pObj) [4]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  ((Wrd31.pObj) [5]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [6]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  ((Wrd31.pObj) [7]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [8]) = (Wrd20.Obj);
  Rvl = (Wrd17.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 1);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (lambda_86)
  CLOSURE_HEADER (LABEL_73_16);

DEFLABEL (lambda_63)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_73_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_94;

DEFLABEL (label_93)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_73_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_36;

DEFLABEL (label_94)
  (Wrd28.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd28.uLng) == 10))
    goto label_95;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd26.Lng))))
    goto label_95;
  ((Wrd24.pObj) [1]) = (Wrd7.Obj);
  goto label_93;

DEFLABEL (label_95)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (current_block [OBJECT_73_2]);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [4]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 3);

DEFLABEL (label_69)
  goto label_93;

DEFLABEL (do_loop_87)
DEFLABEL (do_loop_36)
  INTERRUPT_CHECK (26, LABEL_73_23);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_97;
  (Wrd7.Obj) = (current_block [OBJECT_73_4]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_96;

DEFLABEL (label_97)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_96)
DEFLABEL (label_104)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_98;
  Rsp = (& (Rsp [2]));
  (Wrd11.Obj) = (current_block [OBJECT_73_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto do_loop_49;

DEFLABEL (label_98)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_103;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_102)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_101;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd26.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_27]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_73_22);

DEFLABEL (label_101)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_25]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_100;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_99)
  (Wrd39.Obj) = (current_block [OBJECT_73_2]);
  (* (--Rsp)) = (Wrd39.Obj);
  goto loop_30;

DEFLABEL (label_100)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_26]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_6]), 1);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_103)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_5]), 1);

DEFLABEL (label_70)
  (Wrd12.Obj) = Rvl;
  goto label_102;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_73_25);

DEFLABEL (label_109)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_108;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_107)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_106;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_105)
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_36;

DEFLABEL (label_106)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_46]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_5]), 1);

DEFLABEL (label_76)
  (Wrd14.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_45]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_5]), 1);

DEFLABEL (label_75)
  (Wrd5.Obj) = Rvl;
  goto label_107;

DEFLABEL (do_loop_88)
DEFLABEL (do_loop_49)
  INTERRUPT_CHECK (26, LABEL_73_30);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [8]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_111;
  (Wrd11.Obj) = (current_block [OBJECT_73_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_110;

DEFLABEL (label_111)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_110)
DEFLABEL (label_124)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_113;
  Rsp = (& (Rsp [3]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_34]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_35]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_73_34);
  if (Rvl == (current_block [OBJECT_73_8]))
    goto label_112;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_112)
  (Wrd9.Obj) = (current_block [OBJECT_73_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) - 1L);
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd15.Obj);
  goto do_loop_60;

DEFLABEL (label_113)
  (Wrd110.Obj) = (Rsp [2]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 10))
    goto label_123;
  (Wrd102.Obj) = (Rsp [1]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd103.uLng) == 26))
    goto label_123;
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) (Wrd105.Lng)) < ((unsigned long) (Wrd109.Lng))))
    goto label_123;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd102.Obj));
  (Wrd25.pObj) = (& ((Wrd107.pObj) [(Wrd22.Lng)]));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_115;

DEFLABEL (label_114)
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  (Wrd100.Lng) = ((Wrd99.Lng) + 1L);
  (Wrd97.Obj) = (LONG_TO_FIXNUM (Wrd100.Lng));
  (Rsp [1]) = (Wrd97.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_49;

DEFLABEL (label_115)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_29]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd49.Obj) = (Rsp [5]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [5]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_122;
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_122;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) (Wrd42.Lng)) < ((unsigned long) (Wrd48.Lng))))
    goto label_122;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd39.Obj));
  (Wrd37.pObj) = (& ((Wrd46.pObj) [(Wrd32.Lng)]));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_121)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == ((SCHEME_OBJECT) 0))
    goto label_120;
  (Wrd80.Obj) = (Rsp [6]);
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [6]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 10))
    goto label_119;
  (Wrd70.Obj) = (Rsp [3]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_119;
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) (Wrd73.Lng)) < ((unsigned long) (Wrd79.Lng))))
    goto label_119;
  (Wrd63.uLng) = (OBJECT_DATUM (Wrd70.Obj));
  (Wrd68.pObj) = (& ((Wrd77.pObj) [(Wrd63.Lng)]));
  (Wrd69.Obj) = ((Wrd68.pObj) [1]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_118)
  (Wrd91.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_28]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd95.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd95.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_73_28);
  (Rsp [2]) = Rvl;
  (Wrd135.Obj) = (Rsp [0]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if ((Wrd136.uLng) == 10)
    goto label_117;

DEFLABEL (label_116)
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 3);

DEFLABEL (label_117)
  (Wrd127.Obj) = (Rsp [1]);
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd128.uLng) == 26))
    goto label_116;
  (Wrd130.Lng) = (FIXNUM_TO_LONG (Wrd127.Obj));
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  if (! (((unsigned long) (Wrd130.Lng)) < ((unsigned long) (Wrd134.Lng))))
    goto label_116;
  (Wrd122.uLng) = (OBJECT_DATUM (Wrd127.Obj));
  (Wrd125.pObj) = (& ((Wrd132.pObj) [(Wrd122.Lng)]));
  ((Wrd125.pObj) [1]) = Rvl;
  Rsp = (& (Rsp [4]));
  goto label_114;

DEFLABEL (label_119)
  (Wrd85.Obj) = (Rsp [6]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd84.Obj) = ((Wrd86.pObj) [6]);
  (Wrd87.Obj) = (Rsp [3]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_33]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_7]), 2);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_118;

DEFLABEL (label_120)
  Rsp = (& (Rsp [2]));
  goto label_114;

DEFLABEL (label_122)
  (Wrd54.Obj) = (Rsp [5]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [5]);
  (Wrd56.Obj) = (Rsp [2]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_32]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_7]), 2);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (label_123)
  (Wrd112.Obj) = (Rsp [2]);
  (Wrd113.Obj) = (Rsp [1]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_31]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_7]), 2);

DEFLABEL (label_74)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;
  goto label_114;

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_73_29);
  goto label_114;

DEFLABEL (loop_89)
DEFLABEL (loop_30)
  INTERRUPT_CHECK (26, LABEL_73_37);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Obj) = (Rsp [7]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [8]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if ((Wrd23.Lng) < (Wrd27.Lng))
    goto label_141;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_36]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_44]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_73_36);

DEFLABEL (label_141)
  (Wrd53.Obj) = (Rsp [7]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [7]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 10))
    goto label_140;
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_140;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) (Wrd46.Lng)) < ((unsigned long) (Wrd52.Lng))))
    goto label_140;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd43.Obj));
  (Wrd42.pObj) = (& ((Wrd50.pObj) [(Wrd37.Lng)]));
  (Wrd35.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_139)
  (Wrd64.Obj) = (Rsp [1]);
  if ((Wrd35.Obj) == (Wrd64.Obj))
    goto label_125;
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  (Wrd68.Lng) = ((Wrd67.Lng) + 1L);
  (Wrd65.Obj) = (LONG_TO_FIXNUM (Wrd68.Lng));
  (Rsp [0]) = (Wrd65.Obj);
  goto loop_30;

DEFLABEL (label_125)
  (Wrd168.Obj) = (Rsp [5]);
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd168.Obj));
  if (! ((Wrd169.uLng) == 10))
    goto label_138;
  (Wrd160.Obj) = (Rsp [0]);
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if (! ((Wrd161.uLng) == 26))
    goto label_138;
  (Wrd163.Lng) = (FIXNUM_TO_LONG (Wrd160.Obj));
  (Wrd165.pObj) = (OBJECT_ADDRESS (Wrd168.Obj));
  (Wrd166.Obj) = ((Wrd165.pObj) [0]);
  (Wrd167.Lng) = (FIXNUM_TO_LONG (Wrd166.Obj));
  if (! (((unsigned long) (Wrd163.Lng)) < ((unsigned long) (Wrd167.Lng))))
    goto label_138;
  (Wrd70.uLng) = (OBJECT_DATUM (Wrd160.Obj));
  (Wrd73.pObj) = (& ((Wrd165.pObj) [(Wrd70.Lng)]));
  (Wrd74.Obj) = ((Wrd73.pObj) [1]);
  if ((Wrd74.Obj) == ((SCHEME_OBJECT) 0))
    goto label_127;

DEFLABEL (label_126)
  Rsp = (& (Rsp [3]));
  goto label_109;

DEFLABEL (label_127)
  (Wrd79.Obj) = (Rsp [4]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_137;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd76.Obj) = ((Wrd78.pObj) [1]);

DEFLABEL (label_136)
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_135;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_134)
  (Wrd110.Obj) = (Rsp [8]);
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [6]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 10))
    goto label_133;
  (Wrd100.Obj) = (Rsp [1]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 26))
    goto label_133;
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd100.Obj));
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) (Wrd103.Lng)) < ((unsigned long) (Wrd109.Lng))))
    goto label_133;
  (Wrd94.uLng) = (OBJECT_DATUM (Wrd100.Obj));
  (Wrd99.pObj) = (& ((Wrd107.pObj) [(Wrd94.Lng)]));
  (Wrd92.Obj) = ((Wrd99.pObj) [1]);

DEFLABEL (label_132)
  (Wrd121.Obj) = (* (Rsp++));
  (Wrd151.Obj) = (Rsp [6]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if (! ((Wrd152.uLng) == 10))
    goto label_131;
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd145.uLng) == 26))
    goto label_131;
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  (Wrd148.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd149.Obj) = ((Wrd148.pObj) [0]);
  (Wrd150.Lng) = (FIXNUM_TO_LONG (Wrd149.Obj));
  if (! (((unsigned long) (Wrd146.Lng)) < ((unsigned long) (Wrd150.Lng))))
    goto label_131;
  (Wrd141.uLng) = (OBJECT_DATUM (Wrd92.Obj));
  (Wrd144.pObj) = (& ((Wrd148.pObj) [(Wrd141.Lng)]));
  ((Wrd144.pObj) [1]) = (Wrd121.Obj);

DEFLABEL (label_130)
  (Wrd122.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd123.Obj) = (current_block [OBJECT_73_4]);
  (Rsp [2]) = (Wrd123.Obj);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if ((Wrd140.uLng) == 10)
    goto label_129;

DEFLABEL (label_128)
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 3);

DEFLABEL (label_129)
  (Wrd131.Obj) = (Rsp [1]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd132.uLng) == 26))
    goto label_128;
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd131.Obj));
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd137.Obj) = ((Wrd136.pObj) [0]);
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd137.Obj));
  if (! (((unsigned long) (Wrd134.Lng)) < ((unsigned long) (Wrd138.Lng))))
    goto label_128;
  (Wrd126.uLng) = (OBJECT_DATUM (Wrd131.Obj));
  (Wrd129.pObj) = (& ((Wrd136.pObj) [(Wrd126.Lng)]));
  ((Wrd129.pObj) [1]) = (Wrd123.Obj);
  Rsp = (& (Rsp [4]));
  goto label_109;

DEFLABEL (label_131)
  (Wrd153.Obj) = (Rsp [6]);
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_43]))));
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd153.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 3);

DEFLABEL (label_81)
  goto label_130;

DEFLABEL (label_133)
  (Wrd115.Obj) = (Rsp [8]);
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd114.Obj) = ((Wrd116.pObj) [6]);
  (Wrd117.Obj) = (Rsp [1]);
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_42]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_7]), 2);

DEFLABEL (label_80)
  (Wrd92.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_41]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_6]), 1);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_40]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_5]), 1);

DEFLABEL (label_78)
  (Wrd76.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_138)
  (Wrd170.Obj) = (Rsp [5]);
  (Wrd171.Obj) = (Rsp [0]);
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_39]))));
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_7]), 2);

DEFLABEL (label_82)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_127;
  goto label_126;

DEFLABEL (label_140)
  (Wrd58.Obj) = (Rsp [7]);
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [7]);
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_38]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_7]), 2);

DEFLABEL (label_77)
  (Wrd35.Obj) = Rvl;
  goto label_139;

DEFLABEL (do_loop_90)
DEFLABEL (do_loop_60)
  INTERRUPT_CHECK (26, LABEL_73_47);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd6.Lng) < 0))
    goto label_142;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_142)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_144;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_144;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_144;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd12.pObj) = (& ((Wrd18.pObj) [(Wrd9.Lng)]));
  (Wrd7.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_143)
  (Wrd31.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd35.Lng) = ((Wrd34.Lng) - 1L);
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));
  (Rsp [0]) = (Wrd32.Obj);
  goto do_loop_60;

DEFLABEL (label_144)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_48]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_7]), 2);

DEFLABEL (label_83)
  (Wrd7.Obj) = Rvl;
  goto label_143;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_7 7
#define LABEL_74_9 9
#define LABEL_74_10 11
#define LABEL_74_16 13
#define LABEL_74_17 15
#define LABEL_74_18 17
#define LABEL_74_19 19
#define LABEL_74_20 21
#define LABEL_74_14 23
#define TAG_74_15 10
#define LABEL_74_23 25
#define LABEL_74_24 27
#define LABEL_74_25 29
#define LABEL_74_12 31
#define TAG_74_13 14
#define ENVIRONMENT_LABEL_74_3 47
#define DEBUGGING_LABEL_74_2 46
#define OBJECT_74_2 45
#define OBJECT_74_1 44
#define OBJECT_74_0 43
#define EXECUTE_CACHE_74_22 33
#define EXECUTE_CACHE_74_21 35
#define EXECUTE_CACHE_74_11 37
#define EXECUTE_CACHE_74_8 39
#define EXECUTE_CACHE_74_6 41
#define FREE_REFERENCES_LABEL_74_0 32
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd60;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_74_4);
      goto define_structure_vector_accessor_20;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_74_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_74_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_74_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_74_16);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_74_17);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_74_18);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_74_19);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_74_20);
      goto continuation_17;

    case 10:
      current_block = (Rpc - LABEL_74_14);
      goto lambda_29;

    case 11:
      current_block = (Rpc - LABEL_74_23);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_74_24);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_74_25);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_74_12);
      goto lambda_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_structure_vector_accessor_27)
DEFLABEL (define_structure_vector_accessor_20)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_34;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_34;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_34;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.pObj) = (& ((Wrd13.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_74_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_14])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_30;

DEFLABEL (label_31)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_12])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  Rvl = (Wrd15.Obj);

DEFLABEL (label_30)
DEFLABEL (label_32)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_74_14);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_39;

DEFLABEL (label_38)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_22]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_74_20);

DEFLABEL (label_37)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [3]);
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd24.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd41.uLng) == 10)
    goto label_36;

DEFLABEL (label_35)
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 2);

DEFLABEL (label_36)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_35;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_35;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd30.pObj) = (& ((Wrd37.pObj) [(Wrd27.Lng)]));
  Rvl = ((Wrd30.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_74_18);
  (* (--Rsp)) = Rvl;
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_43;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd42.Obj) = (MAKE_OBJECT (26, (Wrd46.uLng)));

DEFLABEL (label_42)
  (Wrd53.Obj) = (* (Rsp++));
  if (! ((Wrd42.Obj) == (Wrd53.Obj)))
    goto label_38;
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_16]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [2]);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_11]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_74_16);
  (* (--Rsp)) = Rvl;
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_41;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd68.Lng))))
    goto label_41;
  (Wrd60.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_40)
  (Wrd76.Obj) = (* (Rsp++));
  if ((Wrd60.Obj) == (Wrd76.Obj))
    goto label_37;
  goto label_38;

DEFLABEL (label_41)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.Obj) = (current_block [OBJECT_74_1]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_17]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 2);

DEFLABEL (label_25)
  (Wrd60.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_19]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_2]), 1);

DEFLABEL (label_23)
  (Wrd42.Obj) = Rvl;
  goto label_42;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_74_12);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_48;

DEFLABEL (label_47)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_74_25);

DEFLABEL (label_46)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [3]);
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd24.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd41.uLng) == 10)
    goto label_45;

DEFLABEL (label_44)
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 2);

DEFLABEL (label_45)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_44;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_44;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd30.pObj) = (& ((Wrd37.pObj) [(Wrd27.Lng)]));
  Rvl = ((Wrd30.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_23]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_74_23);
  (* (--Rsp)) = Rvl;
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_50;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd42.Obj) = (MAKE_OBJECT (26, (Wrd46.uLng)));

DEFLABEL (label_49)
  (Wrd53.Obj) = (* (Rsp++));
  if ((Wrd42.Obj) == (Wrd53.Obj))
    goto label_46;
  goto label_47;

DEFLABEL (label_50)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_24]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_2]), 1);

DEFLABEL (label_24)
  (Wrd42.Obj) = Rvl;
  goto label_49;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_7 7
#define LABEL_75_9 9
#define LABEL_75_10 11
#define LABEL_75_16 13
#define LABEL_75_17 15
#define LABEL_75_18 17
#define LABEL_75_19 19
#define LABEL_75_20 21
#define LABEL_75_14 23
#define TAG_75_15 10
#define LABEL_75_23 25
#define LABEL_75_24 27
#define LABEL_75_25 29
#define LABEL_75_12 31
#define TAG_75_13 14
#define ENVIRONMENT_LABEL_75_3 49
#define DEBUGGING_LABEL_75_2 48
#define OBJECT_75_4 47
#define OBJECT_75_3 46
#define OBJECT_75_2 45
#define OBJECT_75_1 44
#define OBJECT_75_0 43
#define EXECUTE_CACHE_75_22 33
#define EXECUTE_CACHE_75_21 35
#define EXECUTE_CACHE_75_11 37
#define EXECUTE_CACHE_75_8 39
#define EXECUTE_CACHE_75_6 41
#define FREE_REFERENCES_LABEL_75_0 32
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_75_4);
      goto define_structure_vector_modifier_20;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_75_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_75_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_75_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_75_16);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_75_17);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_75_18);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_75_19);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_75_20);
      goto continuation_17;

    case 10:
      current_block = (Rpc - LABEL_75_14);
      goto lambda_29;

    case 11:
      current_block = (Rpc - LABEL_75_23);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_75_24);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_75_25);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_75_12);
      goto lambda_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_structure_vector_modifier_27)
DEFLABEL (define_structure_vector_modifier_20)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_34;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_34;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_34;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.pObj) = (& ((Wrd13.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_75_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_14])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_30;

DEFLABEL (label_31)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_12])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  Rvl = (Wrd15.Obj);

DEFLABEL (label_30)
DEFLABEL (label_32)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_75_14);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_39;

DEFLABEL (label_38)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_22]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_75_20);

DEFLABEL (label_37)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [3]);
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd24.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd42.uLng) == 10)
    goto label_36;

DEFLABEL (label_35)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_4]), 3);

DEFLABEL (label_36)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_35;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_35;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd30.pObj) = (& ((Wrd38.pObj) [(Wrd27.Lng)]));
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [1]) = (Wrd31.Obj);
  Rvl = (current_block [OBJECT_75_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_75_18);
  (* (--Rsp)) = Rvl;
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_43;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd43.Obj) = (MAKE_OBJECT (26, (Wrd47.uLng)));

DEFLABEL (label_42)
  (Wrd54.Obj) = (* (Rsp++));
  if (! ((Wrd43.Obj) == (Wrd54.Obj)))
    goto label_38;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_16]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [2]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_11]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_75_16);
  (* (--Rsp)) = Rvl;
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_41;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd69.Lng))))
    goto label_41;
  (Wrd61.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_40)
  (Wrd77.Obj) = (* (Rsp++));
  if ((Wrd61.Obj) == (Wrd77.Obj))
    goto label_37;
  goto label_38;

DEFLABEL (label_41)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (current_block [OBJECT_75_1]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_17]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 2);

DEFLABEL (label_25)
  (Wrd61.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_19]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_2]), 1);

DEFLABEL (label_23)
  (Wrd43.Obj) = Rvl;
  goto label_42;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_75_12);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_48;

DEFLABEL (label_47)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_75_25);

DEFLABEL (label_46)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [3]);
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd24.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd42.uLng) == 10)
    goto label_45;

DEFLABEL (label_44)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_4]), 3);

DEFLABEL (label_45)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_44;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_44;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd30.pObj) = (& ((Wrd38.pObj) [(Wrd27.Lng)]));
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [1]) = (Wrd31.Obj);
  Rvl = (current_block [OBJECT_75_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_23]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_75_23);
  (* (--Rsp)) = Rvl;
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_50;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd43.Obj) = (MAKE_OBJECT (26, (Wrd47.uLng)));

DEFLABEL (label_49)
  (Wrd54.Obj) = (* (Rsp++));
  if ((Wrd43.Obj) == (Wrd54.Obj))
    goto label_46;
  goto label_47;

DEFLABEL (label_50)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_24]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_2]), 1);

DEFLABEL (label_24)
  (Wrd43.Obj) = Rvl;
  goto label_49;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_7 7
#define LABEL_76_9 9
#define LABEL_76_10 11
#define LABEL_76_14 13
#define TAG_76_15 5
#define LABEL_76_12 15
#define TAG_76_13 6
#define LABEL_76_16 17
#define LABEL_76_18 19
#define LABEL_76_22 21
#define LABEL_76_23 23
#define LABEL_76_24 25
#define LABEL_76_19 27
#define LABEL_76_27 29
#define LABEL_76_21 31
#define ENVIRONMENT_LABEL_76_3 50
#define DEBUGGING_LABEL_76_2 49
#define OBJECT_76_1 48
#define OBJECT_76_0 47
#define EXECUTE_CACHE_76_26 33
#define EXECUTE_CACHE_76_25 35
#define EXECUTE_CACHE_76_20 37
#define EXECUTE_CACHE_76_17 39
#define EXECUTE_CACHE_76_11 41
#define EXECUTE_CACHE_76_8 43
#define EXECUTE_CACHE_76_6 45
#define FREE_REFERENCES_LABEL_76_0 32
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_76_4);
      goto define_structure_list_accessor_18;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_76_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_76_9);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_76_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_76_14);
      goto lambda_25;

    case 6:
      current_block = (Rpc - LABEL_76_12);
      goto lambda_24;

    case 7:
      current_block = (Rpc - LABEL_76_16);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_76_18);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_76_22);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_76_23);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_76_24);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_76_19);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_76_27);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_76_21);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_structure_list_accessor_23)
DEFLABEL (define_structure_list_accessor_18)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_30;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_30;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_30;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.pObj) = (& ((Wrd13.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_29)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_76_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_14])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_26;

DEFLABEL (label_27)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_12])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  Rvl = (Wrd15.Obj);

DEFLABEL (label_26)
DEFLABEL (label_28)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_0]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_76_14);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_76_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_76_19);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_33;

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_26]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_76_24);

DEFLABEL (label_31)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [3]);
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd24.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_25]));

DEFLABEL (label_33)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_22]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_76_22);
  (* (--Rsp)) = Rvl;
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_35;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_34)
  (Wrd34.Obj) = (* (Rsp++));
  if ((Wrd25.Obj) == (Wrd34.Obj))
    goto label_31;
  goto label_32;

DEFLABEL (label_35)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_23]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 1);

DEFLABEL (label_21)
  (Wrd25.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_76_12);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_76_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_76_21);
  (Wrd5.Obj) = (* (Rsp++));
  if (! (Rvl == (Wrd5.Obj)))
    goto label_37;

DEFLABEL (label_36)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [3]);
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd18.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_25]));

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_26]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_76_27);
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_7 7
#define LABEL_77_9 9
#define LABEL_77_10 11
#define LABEL_77_14 13
#define TAG_77_15 5
#define LABEL_77_12 15
#define TAG_77_13 6
#define LABEL_77_16 17
#define LABEL_77_18 19
#define LABEL_77_22 21
#define LABEL_77_23 23
#define LABEL_77_24 25
#define LABEL_77_19 27
#define LABEL_77_28 29
#define LABEL_77_21 31
#define LABEL_77_29 33
#define LABEL_77_25 35
#define ENVIRONMENT_LABEL_77_3 56
#define DEBUGGING_LABEL_77_2 55
#define OBJECT_77_3 54
#define OBJECT_77_2 53
#define OBJECT_77_1 52
#define OBJECT_77_0 51
#define EXECUTE_CACHE_77_27 37
#define EXECUTE_CACHE_77_26 39
#define EXECUTE_CACHE_77_20 41
#define EXECUTE_CACHE_77_17 43
#define EXECUTE_CACHE_77_11 45
#define EXECUTE_CACHE_77_8 47
#define EXECUTE_CACHE_77_6 49
#define FREE_REFERENCES_LABEL_77_0 36
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_77_4);
      goto define_structure_list_modifier_20;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_77_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_77_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_77_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_77_14);
      goto lambda_27;

    case 6:
      current_block = (Rpc - LABEL_77_12);
      goto lambda_26;

    case 7:
      current_block = (Rpc - LABEL_77_16);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_77_18);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_77_22);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_77_23);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_77_24);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_77_19);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_77_28);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_77_21);
      goto continuation_4;

    case 15:
      current_block = (Rpc - LABEL_77_29);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_77_25);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_structure_list_modifier_25)
DEFLABEL (define_structure_list_modifier_20)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_32;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_32;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_32;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.pObj) = (& ((Wrd13.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_77_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_77_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_77_14])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_28;

DEFLABEL (label_29)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_77_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_77_12])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  Rvl = (Wrd15.Obj);

DEFLABEL (label_28)
DEFLABEL (label_30)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_77_14);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_77_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_77_19);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_36;

DEFLABEL (label_35)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_27]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_77_24);

DEFLABEL (label_34)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_25]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_77_25);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_33;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_77_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_3]), 2);

DEFLABEL (label_36)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_22]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_11]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_77_22);
  (* (--Rsp)) = Rvl;
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_38;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);

DEFLABEL (label_37)
  (Wrd37.Obj) = (* (Rsp++));
  if ((Wrd28.Obj) == (Wrd37.Obj))
    goto label_34;
  goto label_35;

DEFLABEL (label_38)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_23]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 1);

DEFLABEL (label_23)
  (Wrd28.Obj) = Rvl;
  goto label_37;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_77_12);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_77_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_77_21);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_40;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_27]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_77_28);

DEFLABEL (label_40)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_29]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_26]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_77_29);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_39;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_77_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_39)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_3]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_5 3
#define LABEL_78_6 5
#define LABEL_78_7 7
#define LABEL_78_8 9
#define LABEL_78_4 11
#define ENVIRONMENT_LABEL_78_3 24
#define DEBUGGING_LABEL_78_2 23
#define OBJECT_78_3 22
#define OBJECT_78_2 21
#define OBJECT_78_1 20
#define OBJECT_78_0 19
#define EXECUTE_CACHE_78_11 13
#define EXECUTE_CACHE_78_10 15
#define EXECUTE_CACHE_78_9 17
#define FREE_REFERENCES_LABEL_78_0 12
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
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
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_78_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_78_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_78_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_78_4);
      goto check_vector_tagged_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_vector_tagged_12)
DEFLABEL (check_vector_tagged_7)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_14;

DEFLABEL (label_13)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_11]));

DEFLABEL (label_14)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_78_7);
  (* (--Rsp)) = Rvl;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_18;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd14.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));

DEFLABEL (label_17)
  (Wrd25.Obj) = (* (Rsp++));
  if (! ((Wrd14.Obj) == (Wrd25.Obj)))
    goto label_13;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (* (--Rsp)) = Rvl;
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_16;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_16;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_15)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_13;
  Rvl = (current_block [OBJECT_78_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_78_0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_10)
  (Wrd30.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_3]), 1);

DEFLABEL (label_9)
  (Wrd14.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_5 3
#define LABEL_79_6 5
#define LABEL_79_4 7
#define ENVIRONMENT_LABEL_79_3 16
#define DEBUGGING_LABEL_79_2 15
#define OBJECT_79_1 14
#define OBJECT_79_0 13
#define EXECUTE_CACHE_79_8 9
#define EXECUTE_CACHE_79_7 11
#define FREE_REFERENCES_LABEL_79_0 8
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_79_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_79_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_79_4);
      goto check_vector_untagged_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_vector_untagged_8)
DEFLABEL (check_vector_untagged_4)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_10;

DEFLABEL (label_9)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_8]));

DEFLABEL (label_10)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_79_5);
  (* (--Rsp)) = Rvl;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_12;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd14.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));

DEFLABEL (label_11)
  (Wrd25.Obj) = (* (Rsp++));
  if (! ((Wrd14.Obj) == (Wrd25.Obj)))
    goto label_9;
  Rvl = (current_block [OBJECT_79_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_9 7
#define LABEL_80_10 9
#define LABEL_80_7 11
#define ENVIRONMENT_LABEL_80_3 24
#define DEBUGGING_LABEL_80_2 23
#define OBJECT_80_1 22
#define OBJECT_80_0 21
#define EXECUTE_CACHE_80_12 13
#define EXECUTE_CACHE_80_11 15
#define EXECUTE_CACHE_80_8 17
#define EXECUTE_CACHE_80_6 19
#define FREE_REFERENCES_LABEL_80_0 12
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_80_4);
      goto check_list_tagged_6;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_80_9);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_80_10);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_80_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_list_tagged_10)
DEFLABEL (check_list_tagged_6)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_7);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_12;

DEFLABEL (label_11)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_12]));

DEFLABEL (label_12)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_80_9);
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_14;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_13)
  (Wrd23.Obj) = (* (Rsp++));
  if (! ((Wrd14.Obj) == (Wrd23.Obj)))
    goto label_11;
  Rvl = (current_block [OBJECT_80_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_8)
  (Wrd14.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define LABEL_81_7 7
#define ENVIRONMENT_LABEL_81_3 17
#define DEBUGGING_LABEL_81_2 16
#define OBJECT_81_0 15
#define EXECUTE_CACHE_81_9 9
#define EXECUTE_CACHE_81_8 11
#define EXECUTE_CACHE_81_6 13
#define FREE_REFERENCES_LABEL_81_0 8
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
record_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_81_4);
      goto check_list_untagged_3;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_81_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_list_untagged_6)
DEFLABEL (check_list_untagged_3)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_81_7);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_7;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_9]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_81_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_9 9
#define LABEL_8 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_12 17
#define ENVIRONMENT_LABEL_3 34
#define DEBUGGING_LABEL_2 33
#define PURIFICATION_ROOT 32
#define OBJECT_7 31
#define OBJECT_6 30
#define OBJECT_5 29
#define OBJECT_4 28
#define OBJECT_3 27
#define OBJECT_2 26
#define OBJECT_1 25
#define OBJECT_0 24
#define FREE_REFERENCE_1 19
#define FREE_REFERENCE_0 20
#define GLOBAL_EXECUTE_CACHE_5 22
#define FREE_REFERENCES_LABEL_0 18
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
record_so_0f76ddfae97aea06 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto expression_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_4)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_11])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_10)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_9)
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
	1,
	1,
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
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	1,
	1,
	0,
	1,
	1,
	0,
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
	0,
	0,
	1,
	1,
	2,
	3,
	3,
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
    if (counter > 81)
      goto label_8;
    blocks = (current_block [OBJECT_7]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_10])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_8)
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
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd8 = Wrd12;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_12;
  Wrd8 = Wrd12;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_6]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_record_so_0f76ddfae97aea06 [81] =
  {
    { "record_so_code_1", 1, record_so_code_1 },
    { "record_so_code_2", 1, record_so_code_2 },
    { "record_so_code_3", 1, record_so_code_3 },
    { "record_so_code_4", 1, record_so_code_4 },
    { "record_so_code_5", 1, record_so_code_5 },
    { "record_so_code_6", 1, record_so_code_6 },
    { "record_so_code_7", 1, record_so_code_7 },
    { "record_so_code_8", 1, record_so_code_8 },
    { "record_so_code_9", 4, record_so_code_9 },
    { "record_so_code_10", 1, record_so_code_10 },
    { "record_so_code_11", 2, record_so_code_11 },
    { "record_so_code_12", 9, record_so_code_12 },
    { "record_so_code_13", 8, record_so_code_13 },
    { "record_so_code_14", 60, record_so_code_14 },
    { "record_so_code_15", 12, record_so_code_15 },
    { "record_so_code_16", 3, record_so_code_16 },
    { "record_so_code_17", 2, record_so_code_17 },
    { "record_so_code_18", 1, record_so_code_18 },
    { "record_so_code_19", 1, record_so_code_19 },
    { "record_so_code_20", 1, record_so_code_20 },
    { "record_so_code_21", 1, record_so_code_21 },
    { "record_so_code_22", 1, record_so_code_22 },
    { "record_so_code_23", 1, record_so_code_23 },
    { "record_so_code_24", 2, record_so_code_24 },
    { "record_so_code_25", 3, record_so_code_25 },
    { "record_so_code_26", 2, record_so_code_26 },
    { "record_so_code_27", 2, record_so_code_27 },
    { "record_so_code_28", 4, record_so_code_28 },
    { "record_so_code_29", 3, record_so_code_29 },
    { "record_so_code_30", 2, record_so_code_30 },
    { "record_so_code_31", 6, record_so_code_31 },
    { "record_so_code_32", 10, record_so_code_32 },
    { "record_so_code_33", 2, record_so_code_33 },
    { "record_so_code_34", 3, record_so_code_34 },
    { "record_so_code_35", 2, record_so_code_35 },
    { "record_so_code_36", 2, record_so_code_36 },
    { "record_so_code_37", 9, record_so_code_37 },
    { "record_so_code_38", 12, record_so_code_38 },
    { "record_so_code_39", 10, record_so_code_39 },
    { "record_so_code_40", 7, record_so_code_40 },
    { "record_so_code_41", 5, record_so_code_41 },
    { "record_so_code_42", 31, record_so_code_42 },
    { "record_so_code_43", 40, record_so_code_43 },
    { "record_so_code_44", 30, record_so_code_44 },
    { "record_so_code_45", 5, record_so_code_45 },
    { "record_so_code_46", 3, record_so_code_46 },
    { "record_so_code_47", 2, record_so_code_47 },
    { "record_so_code_48", 5, record_so_code_48 },
    { "record_so_code_49", 7, record_so_code_49 },
    { "record_so_code_50", 7, record_so_code_50 },
    { "record_so_code_51", 3, record_so_code_51 },
    { "record_so_code_52", 6, record_so_code_52 },
    { "record_so_code_53", 3, record_so_code_53 },
    { "record_so_code_54", 10, record_so_code_54 },
    { "record_so_code_55", 2, record_so_code_55 },
    { "record_so_code_56", 1, record_so_code_56 },
    { "record_so_code_57", 2, record_so_code_57 },
    { "record_so_code_58", 1, record_so_code_58 },
    { "record_so_code_59", 2, record_so_code_59 },
    { "record_so_code_60", 1, record_so_code_60 },
    { "record_so_code_61", 43, record_so_code_61 },
    { "record_so_code_62", 3, record_so_code_62 },
    { "record_so_code_63", 3, record_so_code_63 },
    { "record_so_code_64", 2, record_so_code_64 },
    { "record_so_code_65", 6, record_so_code_65 },
    { "record_so_code_66", 2, record_so_code_66 },
    { "record_so_code_67", 2, record_so_code_67 },
    { "record_so_code_68", 5, record_so_code_68 },
    { "record_so_code_69", 6, record_so_code_69 },
    { "record_so_code_70", 11, record_so_code_70 },
    { "record_so_code_71", 4, record_so_code_71 },
    { "record_so_code_72", 3, record_so_code_72 },
    { "record_so_code_73", 35, record_so_code_73 },
    { "record_so_code_74", 15, record_so_code_74 },
    { "record_so_code_75", 15, record_so_code_75 },
    { "record_so_code_76", 15, record_so_code_76 },
    { "record_so_code_77", 17, record_so_code_77 },
    { "record_so_code_78", 5, record_so_code_78 },
    { "record_so_code_79", 3, record_so_code_79 },
    { "record_so_code_80", 5, record_so_code_80 },
    { "record_so_code_81", 3, record_so_code_81 }
  };

int
decl_record_so_0f76ddfae97aea06 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_record_so_0f76ddfae97aea06);
  return (0);
}

DECLARE_COMPILED_CODE ("record.so", 8, decl_record_so_0f76ddfae97aea06, record_so_0f76ddfae97aea06)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_record_so_data_0f76ddfae97aea06 [11474] =
  "\xd1\x01\x92\x01\xc0\x17\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x22"
  "\x29\x21\x9d\x2b\xb9\x1d\xb0\x82\x88\xc1\xba\x22\x29\x21\x9d\x2b"
  "\xbb\x1d\xb0\x83\x88\xc2\xbc\x22\x29\x21\x9d\x2b\xbd\x1d\xb0\x84"
  "\x88\xc3\xbe\x1d\x22\x29\x21\x9e\x2b\xbf\x1d\xb0\x85\x88\xc2\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x86\x88\xc3\x1d\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x02\xb6"
  "\x80\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb4\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\xb4"
  "\x80\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x81"
  "\xb6\xb4\x80\x1b\xb2\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x9c\x0c\x81\xb6\x80\x1b\x85\x0d"
  "\x1c\x25\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb2\x08\x80\x0f\x0c\xb4\x0c\xc1\x0d\xba\x1b\x0d\xc1"
  "\x1c\xc1\x1c\x0d\x81\x0d\x1c\x0d\x82\x0d\x1c\x1b\x1b\x0d\x1c\x0d"
  "\x1c\x0d\x1c\xb2\x25\x1b\x0d\x1c\x0d\x1c\x1b\x1b\x1b\xb2\x24\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb6\x81\x1b\xc1\x1c\xc1\x0d\x1c"
  "\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\xb4\x80\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb4\x80\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb4\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb4\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x83"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x84\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb4\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb6\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\xb4\x83\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb4"
  "\x83\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\x81\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb4\x82\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc3\x1b\x80\xb4\x83\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\x84\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xc3\x1c\x1b\x07\x80"
  "\xb4\x84\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x07\x80\x0c\x1b\xb4\x84\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\xb4\x84\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x85\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x1d\x85\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\xc2\x1d\x1b\x1b\x25\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x08\x1d\xb4\x81\x1b\x0d\x1b\x24\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x08\xb4\x81\x1b\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d"
  "\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x1b\x1b\x1b\x02\xb6\x20\x1c\x1b\x02\x02\x02\x02\x02"
  "\x02\x02\x02\x02\x86\x85\x84\x82\x80\x1b\x83\xb4\x81\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x08\x1b\x02\xb6\x1b\x81\x80\x1b"
  "\x1b\x1b\x07\x1b\x1b\xb4\x83\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x84\x08\x1b\x06\x07"
  "\x85\xc2\x1c\x02\x1b\x1b\x02\xb6\x80\x81\x1b\x1b\xb4\x83\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x80\x28\x0d\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb4\x80\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb4"
  "\x80\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x80\x07\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x1d"
  "\xb4\x80\x07\x0d\xbe\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\xb4\x82\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x1b\xb4\x83\x28"
  "\x0d\xbc\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x06\x07\x85\x1b\x02\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x08\x07\x1b\x1b\x0d\x24\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d"
  "\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x1b\x0d\x1c"
  "\x1b\x1b\x0d\x1c\x06\x1d\x0c\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x08\x14\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x25\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb6\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x80\x1b\x28\x1b\x28\xb4\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x0d\x1c\x1b\x0d\x1b\x80\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x0c"
  "\x0d\x1c\x0d\x24\x28\x1b\x28\x0d\x1c\x28\xb2\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x1b\x1b"
  "\x1b\x07\x1b\x80\x1b\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x1b\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x80\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1d\x1b\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x80\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e"
  "\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x1b\x1b\x1b\x0d\x0d\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x17\x0d\xc3\x0d\x1b\xb6\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x0d\x0d\xb2\x1b"
  "\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x08\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e"
  "\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\xb7\x2a\xb5\x2a\xb3\x2a\xb1\x2a\x1b\x17\x28\x0d\x26"
  "\x1b\xb6\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e"
  "\x2f\x72\x65\x63\x6f\x72\x64\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x09\x04\x83\x04\x03\x02\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x0a\x04\x83\x04\x03\x02\x0c\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x72\x65\x66\x0b\x04\x84\x06\x03\x02\x0d\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x02\x0c\x04\x85\x08"
  "\x03\x02\x15\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x72\x65\x66\x0d\x04\x84\x06\x03\x09\x02\x16\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x73\x65\x74\x21\x02\x0e\x04\x85\x08\x03\x0a\x02\x08\x1a\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73"
  "\x65\x74\x2d\x74\x79\x70\x65\x0f\x04\x84\x06\x03\x0b\x02\x09\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x0c\x10\x04\x84\x06"
  "\x03\x0d\x02\x0a\x10\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d"
  "\x74\x79\x70\x65\x0e\x3f\x0c\x14\x0a\x81\x87\x02\x13\x08\x81\x87"
  "\x02\x12\x06\x81\x85\x02\x11\x04\x84\x06\x09\x11\x0f\x02\x0b\x15"
  "\x04\x83\x04\x03\x10\x02\x0c\x17\x06\x81\x85\x02\x16\x04\x84\x06"
  "\x05\x0b\x11\x02\x0d\x0e\x3f\x0c\x20\x14\x81\x89\x02\x1f\x12\x81"
  "\x89\x02\x1e\x10\x81\x89\x02\x1d\x0e\x81\x87\x02\x1c\x0c\x81\x87"
  "\x02\x1b\x0a\x81\x87\x02\x1a\x08\x81\x85\x02\x19\x06\x81\x83\x02"
  "\x18\x04\x83\x04\x13\x1e\x12\x02\x0e\x0a\x65\x78\x74\x65\x6e\x73"
  "\x69\x6f\x6e\x0e\x64\x65\x66\x61\x75\x6c\x74\x2d\x69\x6e\x69\x74"
  "\x73\x13\x0c\x66\x69\x65\x6c\x64\x2d\x6e\x61\x6d\x65\x73\x14\x05"
  "\x6e\x61\x6d\x65\x15\x0d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74"
  "\x61\x67\x16\x0c\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x0c"
  "\x15\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x74\x79\x70"
  "\x65\x2d\x74\x61\x67\x17\x02\x17\x02\x02\x20\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d"
  "\x74\x79\x70\x65\x2d\x74\x79\x70\x65\x21\x18\x03\x12\x6d\x61\x6b"
  "\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x19\x03"
  "\x28\x12\x81\x83\x02\x27\x10\x81\x81\x02\x26\x0e\x81\x87\x02\x25"
  "\x0c\x81\x83\x02\x24\x0a\x81\x83\x02\x23\x08\x81\x83\x02\x22\x06"
  "\x81\x83\x02\x21\x04\x82\x02\x11\x24\x1a\x02\x0f\x01\x21\x02\x3c"
  "\x02\x3e\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x13\x72\x65\x63\x6f\x72\x64\x2d\x64\x65\x73\x63\x72\x69\x70\x74"
  "\x69\x6f\x6e\x16\x0c\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65"
  "\x04\x63\x61\x72\x16\x04\x63\x64\x72\x1b\x07\x65\x6e\x74\x69\x74"
  "\x79\x17\x72\x65\x63\x6f\x72\x64\x2d\x65\x6e\x74\x69\x74\x79\x2d"
  "\x75\x6e\x70\x61\x72\x73\x65\x72\x1c\x07\x72\x65\x63\x6f\x72\x64"
  "\x0f\x75\x6e\x70\x61\x72\x73\x65\x2d\x72\x65\x63\x6f\x72\x64\x1d"
  "\x1d\x1c\x20\x25\x73\x65\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x69\x6e\x69\x74"
  "\x73\x21\x1e\x21\x73\x65\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74"
  "\x68\x6f\x64\x21\x1f\x1a\x64\x65\x66\x65\x72\x72\x65\x64\x2d\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x73\x20"
  "\x07\x1d\x2b\x25\x73\x65\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x69\x6e\x69\x74"
  "\x73\x21\x2f\x61\x66\x74\x65\x72\x2d\x62\x6f\x6f\x74\x21\x2c\x73"
  "\x65\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x21\x2f"
  "\x61\x66\x74\x65\x72\x2d\x62\x6f\x6f\x74\x22\x20\x1c\x17\x08\x04"
  "\x17\x6d\x61\x6b\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x04\x19\x73\x74\x61\x6e\x64\x61\x72"
  "\x64\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f"
  "\x64\x04\x29\x73\x65\x74\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x64\x65\x66\x61\x75\x6c\x74"
  "\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x21\x03\x16\x64\x69\x73"
  "\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x2d\x63\x6f\x6e\x74\x65\x6e"
  "\x74\x73\x23\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03\x16\x62"
  "\x75\x69\x6c\x74\x2d\x69\x6e\x2d\x64\x69\x73\x70\x61\x74\x63\x68"
  "\x2d\x74\x61\x67\x03\x0d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x3f\x24\x04\x1f\x05\x0a\x73\x75\x62\x73\x74\x72\x69\x6e\x67"
  "\x04\x0f\x73\x74\x72\x69\x6e\x67\x2d\x73\x75\x66\x66\x69\x78\x3f"
  "\x04\x0f\x73\x74\x72\x69\x6e\x67\x2d\x70\x72\x65\x66\x69\x78\x3f"
  "\x04\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x04\x08\x64\x69"
  "\x73\x70\x6c\x61\x79\x04\x06\x77\x72\x69\x74\x65\x03\x18\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x66\x69\x65\x6c\x64\x2d"
  "\x6e\x61\x6d\x65\x73\x25\x04\x04\x6d\x61\x70\x26\x04\x10\x72\x65"
  "\x63\x6f\x72\x64\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x27\x12\x64"
  "\x7a\x81\x89\x02\x63\x78\x81\x85\x02\x62\x76\x81\x85\x02\x61\x74"
  "\x81\x85\x02\x60\x72\x81\x87\x02\x5f\x70\x81\x87\x02\x5e\x6e\x81"
  "\x83\x02\x5d\x6c\x81\x85\x02\x5c\x6a\x83\x04\x5b\x68\x81\x85\x02"
  "\x5a\x66\x83\x04\x59\x64\x81\x85\x02\x58\x62\x81\x87\x02\x57\x60"
  "\x81\x85\x02\x56\x5e\x81\x85\x02\x55\x5c\x81\x89\x02\x54\x5a\x84"
  "\x06\x53\x58\x81\x85\x02\x52\x56\x81\x85\x02\x51\x54\x84\x06\x50"
  "\x52\x81\x83\x02\x4f\x50\x81\x81\x02\x4e\x4e\x81\x81\x02\x4d\x4c"
  "\x84\x06\x4c\x4a\x81\x89\x02\x4b\x48\x81\x8b\x02\x4a\x46\x81\x8b"
  "\x02\x49\x44\x81\x89\x02\x48\x42\x81\x83\x02\x47\x40\x81\x87\x02"
  "\x46\x3e\x81\x83\x02\x45\x3c\x81\x87\x02\x44\x3a\x81\x85\x02\x43"
  "\x38\x81\x85\x02\x42\x36\x81\x83\x02\x41\x34\x83\x04\x40\x32\x81"
  "\x81\x02\x3f\x30\x81\x81\x02\x3e\x2e\x81\x8b\x02\x3d\x2c\x81\x89"
  "\x02\x3c\x2a\x81\x89\x02\x3b\x28\x81\x85\x02\x3a\x26\x81\x83\x02"
  "\x39\x24\x81\x83\x02\x38\x22\x81\x81\x02\x37\x20\x81\x81\x02\x36"
  "\x1e\x81\x81\x02\x35\x1c\x81\x81\x02\x34\x1a\x81\x81\x02\x33\x18"
  "\x81\x87\x02\x32\x16\x81\x87\x02\x31\x14\x81\x87\x02\x30\x12\x81"
  "\x81\x02\x2f\x10\x81\x81\x02\x2e\x0e\x81\x85\x02\x2d\x0c\x81\x83"
  "\x02\x2c\x0a\x81\x81\x02\x2b\x08\x81\x81\x02\x2a\x06\x81\x81\x02"
  "\x29\x04\x82\x02\x79\xc1\x01\x28\x02\x10\x08\x0c\x0e\x76\x65\x63"
  "\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x29\x0d\x6c\x69\x73\x74"
  "\x2d\x3e\x76\x65\x63\x74\x6f\x72\x11\x6d\x61\x6b\x65\x2d\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2a\x17\x02\x04\x21\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x6c\x69\x73\x74\x2d\x6f\x66\x2d"
  "\x75\x6e\x69\x71\x75\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x2b\x03"
  "\x0c\x2d\x3e\x74\x79\x70\x65\x2d\x6e\x61\x6d\x65\x2c\x03\x19\x04"
  "\x28\x73\x65\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65"
  "\x2d\x65\x6e\x74\x69\x74\x79\x2d\x75\x6e\x70\x61\x72\x73\x65\x72"
  "\x2d\x6d\x65\x74\x68\x6f\x64\x21\x19\x04\x1f\x05\x1e\x07\x70\x1a"
  "\x81\x8f\x02\x6f\x18\x81\x8d\x02\x6e\x16\x81\x8f\x02\x6d\x14\x81"
  "\x8f\x02\x6c\x12\x81\x8f\x02\x6b\x10\x81\x93\x02\x6a\x0e\x81\x91"
  "\x02\x69\x0c\x81\x8f\x02\x68\x0a\x81\x8d\x02\x67\x08\x81\x8b\x02"
  "\x66\x06\x81\x8b\x02\x65\x04\x87\x06\x19\x32\x2d\x02\x11\x17\x02"
  "\x73\x08\x81\x85\x02\x72\x06\x81\x83\x02\x71\x04\x83\x04\x07\x0f"
  "\x2e\x02\x12\x03\x23\x02\x75\x06\x81\x83\x02\x74\x04\x83\x04\x05"
  "\x0d\x2f\x02\x13\x76\x04\x83\x04\x03\x30\x02\x14\x77\x04\x83\x04"
  "\x03\x31\x02\x15\x78\x04\x83\x04\x03\x32\x02\x16\x79\x04\x83\x04"
  "\x03\x33\x02\x17\x7a\x04\x83\x04\x03\x34\x02\x18\x02\x7b\x04\x84"
  "\x06\x03\x35\x02\x19\x29\x7d\x06\x81\x83\x02\x7c\x04\x83\x04\x05"
  "\x0b\x36\x02\x1a\x29\x80\x01\x08\x81\x83\x02\x7f\x06\x81\x83\x02"
  "\x7e\x04\x83\x04\x07\x0d\x37\x02\x1b\x19\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74"
  "\x61\x67\x38\x04\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x72"
  "\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x39\x02\x82\x01\x06\x81"
  "\x83\x02\x81\x01\x04\x83\x04\x05\x0e\x3a\x02\x1c\x11\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x6e\x61\x6d\x65\x3b\x04\x39"
  "\x02\x84\x01\x06\x81\x83\x02\x83\x01\x04\x83\x04\x05\x0e\x3c\x02"
  "\x1d\x10\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73"
  "\x74\x29\x25\x04\x39\x02\x88\x01\x0a\x81\x87\x02\x87\x01\x08\x81"
  "\x83\x02\x86\x01\x06\x81\x83\x02\x85\x01\x04\x83\x04\x09\x15\x3d"
  "\x02\x1e\x1a\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64"
  "\x65\x66\x61\x75\x6c\x74\x2d\x69\x6e\x69\x74\x73\x3e\x04\x39\x03"
  "\x0d\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73\x74\x3f\x03\x8b"
  "\x01\x08\x81\x83\x02\x8a\x01\x06\x81\x83\x02\x89\x01\x04\x83\x04"
  "\x07\x12\x40\x02\x1f\x1f\x73\x65\x74\x2d\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x69\x6e"
  "\x69\x74\x73\x21\x41\x04\x39\x05\x1e\x03\x8d\x01\x06\x81\x85\x02"
  "\x8c\x01\x04\x84\x06\x05\x0e\x42\x02\x20\x1b\x0c\x76\x65\x63\x74"
  "\x6f\x72\x2d\x73\x65\x74\x21\x43\x16\x93\x01\x0e\x81\x8f\x02\x92"
  "\x01\x0c\x81\x8f\x02\x91\x01\x0a\x81\x8f\x02\x90\x01\x08\x81\x8d"
  "\x02\x8f\x01\x06\x81\x87\x02\x8e\x01\x04\x85\x08\x0d\x17\x44\x02"
  "\x21\x1b\x43\x16\x14\x64\x65\x66\x61\x75\x6c\x74\x20\x69\x6e\x69"
  "\x74\x69\x61\x6c\x69\x7a\x65\x72\x29\x06\x1f\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x6c\x69\x73\x74\x2d\x6f\x66\x2d\x74\x79\x70"
  "\x65\x2d\x3e\x6c\x65\x6e\x67\x74\x68\x04\x19\x65\x72\x72\x6f\x72"
  "\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d"
  "\x65\x6e\x74\x03\x07\x74\x68\x75\x6e\x6b\x3f\x04\x9d\x01\x16\x81"
  "\x8f\x02\x9c\x01\x14\x81\x8f\x02\x9b\x01\x12\x81\x8f\x02\x9a\x01"
  "\x10\x81\x8d\x02\x99\x01\x0e\x83\x04\x98\x01\x0c\x81\x8b\x02\x97"
  "\x01\x0a\x81\x89\x02\x96\x01\x08\x81\x89\x02\x95\x01\x06\x81\x87"
  "\x02\x94\x01\x04\x85\x08\x15\x28\x45\x02\x22\x05\x18\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x66\x69\x65\x6c\x64\x2d\x69"
  "\x6e\x64\x65\x78\x46\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65"
  "\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x47\x03\x9f\x01\x06\x81\x85"
  "\x02\x9e\x01\x04\x84\x06\x05\x0e\x48\x02\x23\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x49\xa2\x01\x08\x81\x85\x02\xa1\x01\x06"
  "\x81\x85\x02\xa0\x01\x04\x84\x06\x07\x0d\x4a\x02\x24\x16\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x65\x78\x74\x65\x6e\x73"
  "\x69\x6f\x6e\x4b\x04\x39\x02\xa4\x01\x06\x81\x83\x02\xa3\x01\x04"
  "\x83\x04\x05\x0e\x4c\x02\x25\x02\x1b\x73\x65\x74\x2d\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x65\x78\x74\x65\x6e\x73\x69"
  "\x6f\x6e\x21\x4d\x04\x39\x02\xa6\x01\x06\x81\x85\x02\xa5\x01\x04"
  "\x84\x06\x05\x0f\x4e\x02\x26\x1b\x09\x73\x65\x74\x2d\x63\x64\x72"
  "\x21\x02\x16\x20\x02\x20\x02\xaf\x01\x14\x81\x87\x02\xae\x01\x12"
  "\x81\x87\x02\xad\x01\x10\x81\x87\x02\xac\x01\x0e\x81\x87\x02\xab"
  "\x01\x0c\x81\x87\x02\xaa\x01\x0a\x81\x87\x02\xa9\x01\x08\x81\x87"
  "\x02\xa8\x01\x06\x81\x85\x02\xa7\x01\x04\x84\x06\x13\x1e\x4f\x02"
  "\x27\x16\x1b\x02\x1f\x13\x72\x74\x64\x3a\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2d\x73\x74\x61\x74\x65\x1d\x03\x04\x39\x03\x38\x04\x1a"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x50\x04\x20\x61\x64\x64\x2d"
  "\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x51\x04\x24\x72\x65"
  "\x6d\x6f\x76\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72"
  "\x73\x52\x06\xbb\x01\x1a\x81\x87\x02\xba\x01\x18\x81\x87\x02\xb9"
  "\x01\x16\x81\x87\x02\xb8\x01\x14\x81\x8b\x02\xb7\x01\x12\x81\x89"
  "\x02\xb6\x01\x10\x81\x87\x02\xb5\x01\x0e\x81\x87\x02\xb4\x01\x0c"
  "\x81\x8b\x02\xb3\x01\x0a\x81\x85\x02\xb2\x01\x08\x81\x85\x02\xb1"
  "\x01\x06\x81\x85\x02\xb0\x01\x04\x84\x06\x19\x31\x53\x02\x28\x16"
  "\x02\x1f\x1c\x02\x04\x39\x04\x52\x04\x50\x04\x51\x05\xc5\x01\x16"
  "\x81\x87\x02\xc4\x01\x14\x81\x87\x02\xc3\x01\x12\x81\x85\x02\xc2"
  "\x01\x10\x81\x89\x02\xc1\x01\x0e\x81\x87\x02\xc0\x01\x0c\x81\x8b"
  "\x02\xbf\x01\x0a\x81\x85\x02\xbe\x01\x08\x81\x85\x02\xbd\x01\x06"
  "\x81\x85\x02\xbc\x01\x04\x84\x06\x15\x29\x52\x02\x29\x0e\x72\x65"
  "\x63\x6f\x72\x64\x20\x65\x6e\x74\x69\x74\x79\x16\x75\x6e\x70\x61"
  "\x72\x73\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x65\x6e\x74\x69\x74"
  "\x79\x51\x04\x19\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x75\x6e"
  "\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x03\x08\x65\x6e"
  "\x74\x69\x74\x79\x3f\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f"
  "\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x50\x03\x0d\x65\x6e\x74\x69\x74\x79\x2d\x65\x78\x74\x72\x61\x04"
  "\x11\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x72\x65\x63\x6f\x72"
  "\x64\x54\x03\x1c\x07\xcc\x01\x10\x81\x87\x02\xcb\x01\x0e\x81\x85"
  "\x02\xca\x01\x0c\x81\x89\x02\xc9\x01\x0a\x81\x85\x02\xc8\x01\x08"
  "\x81\x85\x02\xc7\x01\x06\x81\x85\x02\xc6\x01\x04\x84\x06\x0f\x21"
  "\x55\x02\x2a\x08\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73"
  "\x74\x72\x75\x63\x74\x6f\x72\x56\x04\x39\x04\x0f\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x6c\x69\x73\x74\x03\x22\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x2d"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x6e\x61\x6d\x65\x73\x57\x03\x25"
  "\x04\x07\x65\x71\x75\x61\x6c\x3f\x04\x20\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x2d\x67\x69"
  "\x76\x65\x6e\x2d\x6e\x61\x6d\x65\x73\x58\x07\xd1\x01\x0c\x81\x85"
  "\x02\xd0\x01\x0a\x81\x87\x02\xcf\x01\x08\x81\x85\x02\xce\x01\x06"
  "\x81\x85\x02\xcd\x01\x04\x84\x04\x0b\x1d\x59\x02\x2b\x1b\x16\x0e"
  "\x3f\x08\x25\x72\x65\x63\x6f\x72\x64\x5a\x0c\x10\x0f\x0e\x0d\x0c"
  "\x0b\x0a\x09\x08\x29\x05\x20\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f"
  "\x6e\x67\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x6f\x66\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x73\x5b\x02\xf0\x01\x40\x81\x83\x02\xef\x01"
  "\x3e\x81\x87\x02\xee\x01\x3c\x81\x85\x02\xed\x01\x3a\x81\x85\x02"
  "\xec\x01\x38\x81\x85\x02\xeb\x01\x36\x81\x85\x02\xea\x01\x34\x81"
  "\x85\x02\xe9\x01\x32\x81\x87\x02\xe8\x01\x30\x81\x87\x02\xe7\x01"
  "\x2e\x81\x85\x02\xe6\x01\x2c\x81\x83\x02\xe5\x01\x2a\x81\x85\x02"
  "\xe4\x01\x28\x81\x87\x02\xe3\x01\x26\x81\x89\x02\xe2\x01\x24\x81"
  "\x8b\x02\xe1\x01\x22\x81\x8d\x02\xe0\x01\x20\x81\x8f\x02\xdf\x01"
  "\x1e\x81\x91\x02\xde\x01\x1c\x81\x93\x02\xdd\x01\x1a\x81\x95\x02"
  "\xdc\x01\x18\x81\x97\x02\xdb\x01\x16\x81\x99\x02\xda\x01\x14\x81"
  "\x9b\x02\xd9\x01\x12\x81\x9d\x02\xd8\x01\x10\x81\x9f\x02\xd7\x01"
  "\x0e\x81\xa1\x02\xd6\x01\x0c\x81\x85\x02\xd5\x01\x0a\x81\x85\x02"
  "\xd4\x01\x08\x81\x85\x02\xd3\x01\x06\x81\x83\x02\xd2\x01\x04\x83"
  "\x04\x3f\x5f\x5c\x02\x2c\x0e\x3f\x49\x1b\x43\x16\x0c\x29\x04\x26"
  "\x05\x46\x03\x07\x6c\x65\x6e\x67\x74\x68\x5d\x05\x5b\x05\x98\x02"
  "\x52\x81\x83\x02\x97\x02\x50\x81\x83\x02\x96\x02\x4e\x81\x83\x02"
  "\x95\x02\x4c\x81\x91\x02\x94\x02\x4a\x81\x8d\x02\x93\x02\x48\x81"
  "\x8f\x02\x92\x02\x46\x81\x87\x02\x91\x02\x44\x81\x89\x02\x90\x02"
  "\x42\x81\x87\x02\x8f\x02\x40\x81\x87\x02\x8e\x02\x3e\x81\x85\x02"
  "\x8d\x02\x3c\x81\x85\x02\x8c\x02\x3a\x81\x85\x02\x8b\x02\x38\x81"
  "\x87\x02\x8a\x02\x36\x81\x85\x02\x89\x02\x34\x81\x85\x02\x88\x02"
  "\x32\x81\x85\x02\x87\x02\x30\x81\x87\x02\x86\x02\x2e\x81\x87\x02"
  "\x85\x02\x2c\x81\x87\x02\x84\x02\x2a\x81\x85\x02\x83\x02\x28\x81"
  "\x8b\x02\x82\x02\x26\x81\x8b\x02\x81\x02\x24\x81\x85\x02\x80\x02"
  "\x22\x81\x93\x02\xff\x01\x20\x81\x93\x02\xfe\x01\x1e\x81\x91\x02"
  "\xfd\x01\x1c\x81\x8f\x02\xfc\x01\x1a\x81\x8f\x02\xfb\x01\x18\x81"
  "\x8f\x02\xfa\x01\x16\x81\x8f\x02\xf9\x01\x14\x81\x8f\x02\xf8\x01"
  "\x12\x81\x8f\x02\xf7\x01\x10\x81\x8d\x02\xf6\x01\x0e\x81\x89\x02"
  "\xf5\x01\x0c\x81\x85\x02\xf4\x01\x0a\x81\x87\x02\xf3\x01\x08\x81"
  "\x87\x02\xf2\x01\x06\x81\x85\x02\xf1\x01\x04\x84\x06\x51\x6d\x5b"
  "\x02\x2d\x43\x49\x1b\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70"
  "\x65\x3f\x5e\x1e\x16\x0e\x3f\x0c\x29\x05\x46\x04\x17\x65\x72\x72"
  "\x6f\x72\x3a\x6e\x6f\x74\x2d\x6b\x65\x79\x77\x6f\x72\x64\x2d\x6c"
  "\x69\x73\x74\x0e\x03\xb6\x02\x3e\x81\x83\x02\xb5\x02\x3c\x81\x83"
  "\x02\xb4\x02\x3a\x81\x83\x02\xb3\x02\x38\x81\x83\x02\xb2\x02\x36"
  "\x81\x83\x02\xb1\x02\x34\x81\x83\x02\xb0\x02\x32\x81\x83\x02\xaf"
  "\x02\x30\x81\x85\x02\xae\x02\x2e\x81\x93\x02\xad\x02\x2c\x81\x91"
  "\x02\xac\x02\x2a\x81\x8f\x02\xab\x02\x28\x81\x91\x02\xaa\x02\x26"
  "\x81\x87\x02\xa9\x02\x24\x81\x8b\x02\xa8\x02\x22\x81\x8b\x02\xa7"
  "\x02\x20\x81\x89\x02\xa6\x02\x1e\x81\x83\x02\xa5\x02\x1c\x81\x83"
  "\x02\xa4\x02\x1a\x81\x85\x02\xa3\x02\x18\x81\x83\x02\xa2\x02\x16"
  "\x81\x83\x02\xa1\x02\x14\x81\x8b\x02\xa0\x02\x12\x81\x8b\x02\x9f"
  "\x02\x10\x81\x8b\x02\x9e\x02\x0e\x81\x89\x02\x9d\x02\x0c\x81\x87"
  "\x02\x9c\x02\x0a\x81\x85\x02\x9b\x02\x08\x81\x85\x02\x9a\x02\x06"
  "\x81\x85\x02\x99\x02\x04\x83\x04\x3d\x59\x5f\x02\x2e\x03\x0e\x64"
  "\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x3f\x03\x23\x03\x24"
  "\x04\xbb\x02\x0c\x81\x83\x02\xba\x02\x0a\x81\x85\x02\xb9\x02\x08"
  "\x81\x83\x02\xb8\x02\x06\x81\x85\x02\xb7\x02\x04\x83\x04\x0b\x17"
  "\x60\x02\x2f\x17\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x61\x04\x54\x03\x23\x03"
  "\xbe\x02\x08\x81\x83\x02\xbd\x02\x06\x81\x83\x02\xbc\x02\x04\x83"
  "\x04\x07\x12\x23\x02\x30\x0c\x63\x6f\x70\x79\x2d\x72\x65\x63\x6f"
  "\x72\x64\x62\x04\x54\x03\x0d\x25\x63\x6f\x70\x79\x2d\x72\x65\x63"
  "\x6f\x72\x64\x63\x03\xc0\x02\x06\x81\x83\x02\xbf\x02\x04\x83\x04"
  "\x05\x0e\x64\x02\x31\x11\x72\x65\x63\x6f\x72\x64\x2d\x70\x72\x65"
  "\x64\x69\x63\x61\x74\x65\x65\x04\x39\x03\x38\x03\xc5\x02\x0c\x81"
  "\x85\x02\xc4\x02\x0a\x81\x85\x02\xc3\x02\x08\x81\x83\x02\xc2\x02"
  "\x06\x81\x83\x02\xc1\x02\x04\x83\x04\x0b\x17\x66\x02\x32\x27\x04"
  "\x39\x05\x46\x03\x38\x05\x18\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74"
  "\x2d\x74\x61\x67\x67\x65\x64\x2d\x72\x65\x63\x6f\x72\x64\x67\x05"
  "\xcc\x02\x10\x81\x85\x02\xcb\x02\x0e\x81\x85\x02\xca\x02\x0c\x81"
  "\x85\x02\xc9\x02\x0a\x81\x87\x02\xc8\x02\x08\x81\x85\x02\xc7\x02"
  "\x06\x81\x85\x02\xc6\x02\x04\x84\x06\x0f\x1f\x68\x02\x33\x02\x10"
  "\x72\x65\x63\x6f\x72\x64\x2d\x6d\x6f\x64\x69\x66\x69\x65\x72\x04"
  "\x39\x05\x46\x03\x38\x05\x67\x05\xd3\x02\x10\x81\x87\x02\xd2\x02"
  "\x0e\x81\x87\x02\xd1\x02\x0c\x81\x87\x02\xd0\x02\x0a\x81\x87\x02"
  "\xcf\x02\x08\x81\x85\x02\xce\x02\x06\x81\x85\x02\xcd\x02\x04\x84"
  "\x06\x0f\x21\x69\x02\x34\x10\x72\x65\x63\x6f\x72\x64\x20\x6f\x66"
  "\x20\x74\x79\x70\x65\x20\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61"
  "\x70\x70\x65\x6e\x64\x05\x50\x03\xd6\x02\x08\x81\x87\x02\xd5\x02"
  "\x06\x81\x89\x02\xd4\x02\x04\x85\x08\x07\x12\x6a\x02\x35\x49\x29"
  "\x04\x13\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x2d\x73\x75\x63\x68\x2d"
  "\x73\x6c\x6f\x74\x05\x46\x03\xdc\x02\x0e\x81\x8d\x02\xdb\x02\x0c"
  "\x81\x8d\x02\xda\x02\x0a\x81\x8d\x02\xd9\x02\x08\x81\x89\x02\xd8"
  "\x02\x06\x81\x87\x02\xd7\x02\x04\x85\x08\x0d\x1a\x6b\x02\x36\x0a"
  "\x74\x79\x70\x65\x20\x6e\x61\x6d\x65\x5e\x1e\x05\x50\x03\x0c\x73"
  "\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\x03\xdf\x02\x08\x81\x83"
  "\x02\xde\x02\x06\x83\x04\xdd\x02\x04\x81\x83\x02\x07\x15\x5e\x02"
  "\x37\x0f\x49\x6d\x70\x72\x6f\x70\x65\x72\x20\x6c\x69\x73\x74\x2e"
  "\x16\x1b\x08\x73\x79\x6d\x62\x6f\x6c\x3f\x02\x04\x0e\x6c\x69\x73"
  "\x74\x2d\x6f\x66\x2d\x74\x79\x70\x65\x3f\x03\x06\x65\x72\x72\x6f"
  "\x72\x03\xe9\x02\x16\x81\x87\x02\xe8\x02\x14\x81\x87\x02\xe7\x02"
  "\x12\x81\x87\x02\xe6\x02\x10\x81\x87\x02\xe5\x02\x0e\x81\x85\x02"
  "\xe4\x02\x0c\x81\x83\x02\xe3\x02\x0a\x81\x83\x02\xe2\x02\x08\x81"
  "\x83\x02\xe1\x02\x06\x81\x85\x02\xe0\x02\x04\x83\x04\x15\x24\x6c"
  "\x02\x38\x02\x03\x18\x6c\x69\x73\x74\x2d\x6f\x66\x2d\x75\x6e\x69"
  "\x71\x75\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x3f\x6d\x04\x21\x65"
  "\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x6c\x69\x73\x74\x2d\x6f\x66"
  "\x2d\x75\x6e\x69\x71\x75\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x6e"
  "\x03\xeb\x02\x06\x81\x85\x02\xea\x02\x04\x84\x04\x05\x0e\x6f\x02"
  "\x39\x08\x17\x6c\x69\x73\x74\x20\x6f\x66\x20\x75\x6e\x69\x71\x75"
  "\x65\x20\x73\x79\x6d\x62\x6f\x6c\x73\x05\x50\x02\xec\x02\x04\x84"
  "\x04\x03\x0c\x70\x02\x3a\x02\x03\x24\x04\x16\x65\x72\x72\x6f\x72"
  "\x3a\x6e\x6f\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65"
  "\x71\x03\xee\x02\x06\x81\x85\x02\xed\x02\x04\x84\x04\x05\x0e\x72"
  "\x02\x3b\x08\x0c\x72\x65\x63\x6f\x72\x64\x20\x74\x79\x70\x65\x05"
  "\x50\x02\xef\x02\x04\x84\x04\x03\x0c\x73\x02\x3c\x02\x03\x08\x72"
  "\x65\x63\x6f\x72\x64\x3f\x74\x04\x11\x65\x72\x72\x6f\x72\x3a\x6e"
  "\x6f\x74\x2d\x72\x65\x63\x6f\x72\x64\x75\x03\xf1\x02\x06\x81\x85"
  "\x02\xf0\x02\x04\x84\x04\x05\x0e\x76\x02\x3d\x08\x07\x72\x65\x63"
  "\x6f\x72\x64\x05\x50\x02\xf2\x02\x04\x84\x04\x03\x0c\x77\x02\x3e"
  "\x02\x17\x65\x6e\x74\x69\x74\x79\x2d\x75\x6e\x70\x61\x72\x73\x65"
  "\x72\x2d\x6d\x65\x74\x68\x6f\x64\x78\x5d\x04\x74\x61\x67\x79\x10"
  "\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x7a"
  "\x13\x0e\x66\x69\x65\x6c\x64\x2d\x69\x6e\x64\x65\x78\x65\x73\x7b"
  "\x14\x15\x0e\x70\x68\x79\x73\x69\x63\x61\x6c\x2d\x74\x79\x70\x65"
  "\x7c\x08\x0f\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70"
  "\x65\x7c\x15\x14\x7b\x13\x7a\x79\x5d\x78\x09\x13\x72\x74\x64\x3a"
  "\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x7c\x1b"
  "\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x7b\x10\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x3f\x7a\x1d\x73\x74\x72"
  "\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x2f\x70\x68\x79\x73"
  "\x69\x63\x61\x6c\x2d\x74\x79\x70\x65\x79\x14\x73\x74\x72\x75\x63"
  "\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x2f\x6e\x61\x6d\x65\x78\x1b"
  "\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x2f\x66"
  "\x69\x65\x6c\x64\x2d\x6e\x61\x6d\x65\x73\x5d\x1d\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x2f\x66\x69\x65\x6c\x64"
  "\x2d\x69\x6e\x64\x65\x78\x65\x73\x15\x1d\x73\x74\x72\x75\x63\x74"
  "\x75\x72\x65\x2d\x74\x79\x70\x65\x2f\x64\x65\x66\x61\x75\x6c\x74"
  "\x2d\x69\x6e\x69\x74\x73\x14\x1f\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x2d\x74\x79\x70\x65\x2f\x75\x6e\x70\x61\x72\x73\x65\x72\x2d"
  "\x6d\x65\x74\x68\x6f\x64\x13\x24\x73\x65\x74\x2d\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x2f\x75\x6e\x70\x61\x72"
  "\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x21\x7d\x13\x73\x74\x72"
  "\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x2f\x74\x61\x67\x7e"
  "\x16\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x2f"
  "\x6c\x65\x6e\x67\x74\x68\x7f\x26\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x2d\x74\x79\x70\x65\x2f\x65\x6e\x74\x69\x74\x79\x2d\x75\x6e"
  "\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x80\x01\x2b"
  "\x73\x65\x74\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79"
  "\x70\x65\x2f\x65\x6e\x74\x69\x74\x79\x2d\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x21\x81\x01\x0f\x7c\x02\x04"
  "\x2a\x03\x56\x03\x65\x04\x27\x04\x06\x9d\x03\x58\x81\x81\x02\x9c"
  "\x03\x56\x81\x81\x02\x9b\x03\x54\x81\x85\x02\x9a\x03\x52\x81\x81"
  "\x02\x99\x03\x50\x81\x81\x02\x98\x03\x4e\x81\x85\x02\x97\x03\x4c"
  "\x81\x81\x02\x96\x03\x4a\x81\x81\x02\x95\x03\x48\x81\x85\x02\x94"
  "\x03\x46\x81\x81\x02\x93\x03\x44\x81\x81\x02\x92\x03\x42\x81\x85"
  "\x02\x91\x03\x40\x81\x81\x02\x90\x03\x3e\x81\x81\x02\x8f\x03\x3c"
  "\x81\x85\x02\x8e\x03\x3a\x81\x81\x02\x8d\x03\x38\x81\x81\x02\x8c"
  "\x03\x36\x81\x85\x02\x8b\x03\x34\x81\x81\x02\x8a\x03\x32\x81\x81"
  "\x02\x89\x03\x30\x81\x85\x02\x88\x03\x2e\x81\x81\x02\x87\x03\x2c"
  "\x81\x81\x02\x86\x03\x2a\x81\x85\x02\x85\x03\x28\x81\x81\x02\x84"
  "\x03\x26\x81\x81\x02\x83\x03\x24\x81\x85\x02\x82\x03\x22\x81\x81"
  "\x02\x81\x03\x20\x81\x81\x02\x80\x03\x1e\x81\x85\x02\xff\x02\x1c"
  "\x81\x81\x02\xfe\x02\x1a\x81\x81\x02\xfd\x02\x18\x81\x85\x02\xfc"
  "\x02\x16\x81\x81\x02\xfb\x02\x14\x81\x81\x02\xfa\x02\x12\x81\x95"
  "\x02\xf9\x02\x10\x81\x83\x02\xf8\x02\x0e\x81\x81\x02\xf7\x02\x0c"
  "\x81\x81\x02\xf6\x02\x0a\x81\x83\x02\xf5\x02\x08\x81\x81\x02\xf4"
  "\x02\x06\x81\x81\x02\xf3\x02\x04\x82\x02\x57\x84\x01\x82\x01\x02"
  "\x3f\x49\x04\x20\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79"
  "\x70\x65\x2f\x66\x69\x65\x6c\x64\x2d\x6e\x61\x6d\x65\x2d\x69\x6e"
  "\x64\x65\x78\x83\x01\x03\x15\x03\xa0\x03\x08\x81\x85\x02\x9f\x03"
  "\x06\x81\x85\x02\x9e\x03\x04\x84\x06\x07\x10\x84\x01\x02\x40\x49"
  "\x04\x83\x01\x03\x14\x03\xa3\x03\x08\x81\x85\x02\xa2\x03\x06\x81"
  "\x85\x02\xa1\x03\x04\x84\x06\x07\x10\x85\x01\x02\x41\x49\x03\x14"
  "\x02\xa5\x03\x06\x81\x85\x02\xa4\x03\x04\x84\x06\x05\x0c\x86\x01"
  "\x02\x42\x49\x29\x03\x5d\x04\x03\xab\x03\x0e\x81\x8b\x02\xaa\x03"
  "\x0c\x81\x8b\x02\xa9\x03\x0a\x81\x8b\x02\xa8\x03\x08\x81\x87\x02"
  "\xa7\x03\x06\x81\x85\x02\xa6\x03\x04\x84\x06\x0d\x18\x87\x01\x02"
  "\x43\x04\x14\x74\x61\x67\x2d\x3e\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x2d\x74\x79\x70\x65\x88\x01\x03\x13\x03\xad\x03\x06\x81\x85"
  "\x02\xac\x03\x04\x84\x06\x05\x0d\x89\x01\x02\x44\x04\x88\x01\x03"
  "\x80\x01\x03\xaf\x03\x06\x81\x85\x02\xae\x03\x04\x84\x06\x05\x0d"
  "\x8a\x01\x02\x45\x05\x6c\x69\x73\x74\x8b\x01\x16\x07\x76\x65\x63"
  "\x74\x6f\x72\x49\x29\x03\x74\x04\x88\x01\x03\xb4\x03\x0c\x81\x83"
  "\x02\xb3\x03\x0a\x81\x83\x02\xb2\x03\x08\x81\x83\x02\xb1\x03\x06"
  "\x81\x83\x02\xb0\x03\x04\x83\x04\x0b\x1a\x8c\x01\x02\x46\x03\x7a"
  "\x03\x24\x6e\x61\x6d\x65\x64\x2d\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x2f\x67\x65\x74\x2d\x74\x61\x67\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x69\x6f\x6e\x03\x79\x04\xba\x03\x0e\x81\x87\x02\xb9\x03"
  "\x0c\x81\x87\x02\xb8\x03\x0a\x81\x85\x02\xb7\x03\x08\x81\x85\x02"
  "\xb6\x03\x06\x81\x85\x02\xb5\x03\x04\x84\x06\x0d\x17\x8d\x01\x02"
  "\x47\x1c\x6e\x61\x6d\x65\x64\x2d\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x2f\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x8e\x01\x10"
  "\x6e\x61\x6d\x65\x64\x20\x73\x74\x72\x75\x63\x74\x75\x72\x65\x09"
  "\x6c\x69\x73\x74\x2d\x72\x65\x66\x8f\x01\x0b\x76\x65\x63\x74\x6f"
  "\x72\x2d\x72\x65\x66\x03\x03\x74\x03\x11\x6e\x61\x6d\x65\x64\x2d"
  "\x73\x74\x72\x75\x63\x74\x75\x72\x65\x3f\x90\x01\x03\x05\x50\x03"
  "\x15\x03\x5d\x03\x3f\x05\x26\x09\xc5\x03\x18\x81\x89\x02\xc4\x03"
  "\x16\x81\x87\x02\xc3\x03\x14\x81\x87\x02\xc2\x03\x12\x81\x89\x02"
  "\xc1\x03\x10\x81\x87\x02\xc0\x03\x0e\x81\x87\x02\xbf\x03\x0c\x81"
  "\x85\x02\xbe\x03\x0a\x81\x85\x02\xbd\x03\x08\x81\x83\x02\xbc\x03"
  "\x06\x81\x83\x02\xbb\x03\x04\x83\x04\x17\x31\x3f\x02\x48\x49\x04"
  "\x83\x01\x03\x14\x03\xc9\x03\x0a\x81\x85\x02\xc8\x03\x08\x81\x87"
  "\x02\xc7\x03\x06\x81\x85\x02\xc6\x03\x04\x84\x06\x09\x12\x26\x02"
  "\x49\x49\x03\x14\x02\xcc\x03\x08\x81\x85\x02\xcb\x03\x06\x81\x85"
  "\x02\xca\x03\x04\x84\x06\x07\x0e\x91\x01\x02\x4a\x8b\x01\x49\x16"
  "\x1b\x43\x0c\x29\x03\x7f\x03\x7e\x03\x14\x03\x15\x03\x5d\x04\x0c"
  "\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x04\x0e\x03\x79\x04"
  "\x0a\xef\x03\x48\x81\x8b\x02\xee\x03\x46\x81\x8b\x02\xed\x03\x44"
  "\x81\x87\x02\xec\x03\x42\x81\x8d\x02\xeb\x03\x40\x81\x8d\x02\xea"
  "\x03\x3e\x81\x8d\x02\xe9\x03\x3c\x81\x85\x02\xe8\x03\x3a\x81\x87"
  "\x02\xe7\x03\x38\x81\x85\x02\xe6\x03\x36\x81\x85\x02\xe5\x03\x34"
  "\x81\x85\x02\xe4\x03\x32\x81\x85\x02\xe3\x03\x30\x81\x85\x02\xe2"
  "\x03\x2e\x81\x85\x02\xe1\x03\x2c\x81\x83\x02\xe0\x03\x2a\x81\x8f"
  "\x02\xdf\x03\x28\x81\x8d\x02\xde\x03\x26\x81\x8b\x02\xdd\x03\x24"
  "\x81\x8d\x02\xdc\x03\x22\x81\x87\x02\xdb\x03\x20\x81\x8f\x02\xda"
  "\x03\x1e\x81\x8d\x02\xd9\x03\x1c\x81\x8b\x02\xd8\x03\x1a\x81\x8d"
  "\x02\xd7\x03\x18\x81\x87\x02\xd6\x03\x16\x81\x87\x02\xd5\x03\x14"
  "\x81\x85\x02\xd4\x03\x12\x81\x85\x02\xd3\x03\x10\x81\x8d\x02\xd2"
  "\x03\x0e\x81\x8b\x02\xd1\x03\x0c\x81\x89\x02\xd0\x03\x0a\x81\x87"
  "\x02\xcf\x03\x08\x81\x85\x02\xce\x03\x06\x81\x83\x02\xcd\x03\x04"
  "\x83\x04\x47\x67\x8b\x01\x02\x4b\x29\x49\x04\x83\x01\x03\x15\x03"
  "\x7e\x03\x7f\x05\x50\x06\xfe\x03\x20\x81\x85\x02\xfd\x03\x1e\x81"
  "\x85\x02\xfc\x03\x1c\x81\x87\x02\xfb\x03\x1a\x81\x85\x02\xfa\x03"
  "\x18\x81\x85\x02\xf9\x03\x16\x81\x85\x02\xf8\x03\x14\x81\x87\x02"
  "\xf7\x03\x12\x81\x85\x02\xf6\x03\x10\x81\x87\x02\xf5\x03\x0e\x81"
  "\x85\x02\xf4\x03\x0c\x81\x87\x02\xf3\x03\x0a\x81\x85\x02\xf2\x03"
  "\x08\x81\x87\x02\xf1\x03\x06\x81\x85\x02\xf0\x03\x04\x84\x06\x1f"
  "\x30\x1b\x02\x4c\x43\x02\x29\x49\x04\x83\x01\x03\x15\x03\x7e\x03"
  "\x7f\x05\x50\x06\x8d\x04\x20\x81\x87\x02\x8c\x04\x1e\x81\x87\x02"
  "\x8b\x04\x1c\x81\x89\x02\x8a\x04\x1a\x81\x87\x02\x89\x04\x18\x81"
  "\x87\x02\x88\x04\x16\x81\x87\x02\x87\x04\x14\x81\x89\x02\x86\x04"
  "\x12\x81\x87\x02\x85\x04\x10\x81\x89\x02\x84\x04\x0e\x81\x87\x02"
  "\x83\x04\x0c\x81\x87\x02\x82\x04\x0a\x81\x85\x02\x81\x04\x08\x81"
  "\x87\x02\x80\x04\x06\x81\x85\x02\xff\x03\x04\x84\x06\x1f\x32\x43"
  "\x02\x4d\x16\x49\x04\x83\x01\x03\x15\x03\x7e\x03\x7f\x03\x0e\x6c"
  "\x69\x73\x74\x3f\x2d\x3e\x6c\x65\x6e\x67\x74\x68\x0e\x04\x8f\x01"
  "\x05\x50\x08\x9c\x04\x20\x81\x87\x02\x9b\x04\x1e\x81\x85\x02\x9a"
  "\x04\x1c\x81\x87\x02\x99\x04\x1a\x81\x85\x02\x98\x04\x18\x81\x87"
  "\x02\x97\x04\x16\x81\x85\x02\x96\x04\x14\x81\x85\x02\x95\x04\x12"
  "\x81\x85\x02\x94\x04\x10\x81\x85\x02\x93\x04\x0e\x81\x85\x02\x92"
  "\x04\x0c\x81\x87\x02\x91\x04\x0a\x81\x85\x02\x90\x04\x08\x81\x87"
  "\x02\x8f\x04\x06\x81\x85\x02\x8e\x04\x04\x84\x06\x1f\x33\x8f\x01"
  "\x02\x4e\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x02\x16\x49\x04\x83"
  "\x01\x03\x15\x03\x7e\x03\x7f\x03\x0e\x04\x0a\x6c\x69\x73\x74\x2d"
  "\x74\x61\x69\x6c\x05\x50\x08\xad\x04\x24\x81\x87\x02\xac\x04\x22"
  "\x81\x87\x02\xab\x04\x20\x81\x89\x02\xaa\x04\x1e\x81\x87\x02\xa9"
  "\x04\x1c\x81\x89\x02\xa8\x04\x1a\x81\x87\x02\xa7\x04\x18\x81\x89"
  "\x02\xa6\x04\x16\x81\x87\x02\xa5\x04\x14\x81\x87\x02\xa4\x04\x12"
  "\x81\x87\x02\xa3\x04\x10\x81\x87\x02\xa2\x04\x0e\x81\x87\x02\xa1"
  "\x04\x0c\x81\x87\x02\xa0\x04\x0a\x81\x85\x02\x9f\x04\x08\x81\x87"
  "\x02\x9e\x04\x06\x81\x85\x02\x9d\x04\x04\x84\x06\x23\x39\x0c\x02"
  "\x4f\x29\x02\x49\x03\x7e\x03\x7f\x05\x50\x04\xb2\x04\x0c\x84\x06"
  "\xb1\x04\x0a\x81\x87\x02\xb0\x04\x08\x81\x85\x02\xaf\x04\x06\x81"
  "\x87\x02\xae\x04\x04\x81\x85\x02\x0b\x19\x49\x02\x50\x02\x29\x03"
  "\x7f\x05\x50\x03\xb5\x04\x08\x84\x06\xb4\x04\x06\x81\x87\x02\xb3"
  "\x04\x04\x81\x85\x02\x07\x11\x29\x02\x51\x02\x16\x03\x7f\x03\x0e"
  "\x03\x7e\x05\x50\x05\xba\x04\x0c\x81\x87\x02\xb9\x04\x0a\x81\x87"
  "\x02\xb8\x04\x08\x81\x85\x02\xb7\x04\x06\x81\x85\x02\xb6\x04\x04"
  "\x84\x06\x0b\x19\x16\x02\x52\x02\x03\x7f\x03\x0e\x05\x50\x04\xbd"
  "\x04\x08\x81\x87\x02\xbc\x04\x06\x81\x85\x02\xbb\x04\x04\x84\x06"
  "\x07\x12\x50\x52\x0e\x0e\x50\x04\x16\x04\x29\x08\x49\x0c\x0c\x04"
  "\x8f\x01\x04\x43\x04\x1b\x04\x8b\x01\x04\x91\x01\x04\x26\x04\x3f"
  "\x04\x8d\x01\x04\x8c\x01\x04\x8a\x01\x04\x89\x01\x04\x87\x01\x04"
  "\x86\x01\x04\x85\x01\x04\x84\x01\x04\x82\x01\x04\x77\x04\x76\x04"
  "\x73\x04\x72\x04\x70\x04\x6f\x04\x6c\x04\x5e\x06\x6b\x04\x2d\x14"
  "\x63\x68\x65\x63\x6b\x2d\x6c\x69\x73\x74\x2d\x75\x6e\x74\x61\x67"
  "\x67\x65\x64\x12\x63\x68\x65\x63\x6b\x2d\x6c\x69\x73\x74\x2d\x74"
  "\x61\x67\x67\x65\x64\x16\x63\x68\x65\x63\x6b\x2d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x75\x6e\x74\x61\x67\x67\x65\x64\x14\x63\x68\x65\x63"
  "\x6b\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x67\x65\x64\x1f"
  "\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65"
  "\x2f\x6c\x69\x73\x74\x2d\x6d\x6f\x64\x69\x66\x69\x65\x72\x1f\x64"
  "\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f"
  "\x6c\x69\x73\x74\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x21\x64\x65"
  "\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x76"
  "\x65\x63\x74\x6f\x72\x2d\x6d\x6f\x64\x69\x66\x69\x65\x72\x21\x64"
  "\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f"
  "\x76\x65\x63\x74\x6f\x72\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x25"
  "\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65"
  "\x2f\x6b\x65\x79\x77\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75"
  "\x63\x74\x6f\x72\x28\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2f\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61"
  "\x6c\x75\x65\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x1f\x64\x65\x66"
  "\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x8e\x01\x88\x01\x90"
  "\x01\x25\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x61\x67\x2f"
  "\x65\x6e\x74\x69\x74\x79\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d"
  "\x6d\x65\x74\x68\x6f\x64\x1e\x73\x74\x72\x75\x63\x74\x75\x72\x65"
  "\x2d\x74\x61\x67\x2f\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65"
  "\x74\x68\x6f\x64\x83\x01\x25\x73\x74\x72\x75\x63\x74\x75\x72\x65"
  "\x2d\x74\x79\x70\x65\x2f\x64\x65\x66\x61\x75\x6c\x74\x2d\x69\x6e"
  "\x69\x74\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x1c\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x2f\x64\x65\x66\x61\x75"
  "\x6c\x74\x2d\x69\x6e\x69\x74\x1b\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x2d\x74\x79\x70\x65\x2f\x66\x69\x65\x6c\x64\x2d\x69\x6e\x64"
  "\x65\x78\x81\x01\x80\x01\x7f\x7e\x7d\x13\x14\x15\x5d\x78\x79\x7a"
  "\x7b\x7c\x18\x75\x54\x71\x39\x6e\x2b\x6d\x2c\x46\x2d\x0f\x72\x65"
  "\x63\x6f\x72\x64\x2d\x75\x70\x64\x61\x74\x65\x72\x11\x6c\x6f\x63"
  "\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0c\x72\x65"
  "\x63\x6f\x72\x64\x2d\x63\x6f\x70\x79\x67\x27\x65\x62\x61\x74\x1b"
  "\x72\x65\x63\x6f\x72\x64\x2d\x6b\x65\x79\x77\x6f\x72\x64\x2d\x63"
  "\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x58\x57\x56\x51\x19\x22"
  "\x20\x1f\x4d\x4b\x47\x1a\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x21"
  "\x1e\x41\x3e\x25\x3b\x38\x14\x25\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x2d\x6c\x65\x6e\x67\x74\x68\x16\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x74\x79\x70\x65\x2d\x6e\x2d\x66\x69\x65\x6c\x64\x73"
  "\x1c\x25\x73\x65\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x2d\x65\x78\x74\x65\x6e\x73\x69\x6f\x6e\x21\x17\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x65\x78\x74\x65\x6e\x73"
  "\x69\x6f\x6e\x1b\x25\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65"
  "\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x69\x6e\x69\x74\x73\x19\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x66\x69\x65\x6c"
  "\x64\x2d\x6e\x61\x6d\x65\x73\x12\x25\x72\x65\x63\x6f\x72\x64\x2d"
  "\x74\x79\x70\x65\x2d\x6e\x61\x6d\x65\x1a\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d"
  "\x74\x61\x67\x18\x25\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65"
  "\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x24\x2a\x1e\x69\x6e"
  "\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x21\x1d\x69\x6e\x69\x74"
  "\x69\x61\x6c\x69\x7a\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x2d\x74\x79\x70\x65\x21\x1c\x1d\x17\x63\x10\x25\x74\x61"
  "\x67\x67\x65\x64\x2d\x72\x65\x63\x6f\x72\x64\x3f\x0c\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x61\x67\x0d\x25\x6d\x61\x6b\x65\x2d\x72"
  "\x65\x63\x6f\x72\x64\x0c\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f\x6e"
  "\x73\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x16\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74"
  "\x21\x15\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x72\x65\x66\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73"
  "\x65\x74\x21\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x0f"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x09\x25"
  "\x72\x65\x63\x6f\x72\x64\x3f\x08\x25\x72\x65\x63\x6f\x72\x64\x3a"
  "\x6a\x04\x69\x04\x68\x04\x66\x04\x64\x04\x23\x04\x60\x04\x5f\x04"
  "\x5b\x04\x5c\x04\x59\x04\x55\x04\x52\x04\x53\x04\x4f\x04\x4e\x04"
  "\x4c\x04\x4a\x04\x48\x04\x45\x04\x44\x04\x42\x04\x40\x04\x3d\x04"
  "\x3c\x04\x3a\x04\x37\x04\x36\x04\x35\x04\x34\x04\x33\x04\x32\x04"
  "\x31\x04\x30\x04\x2f\x04\x2e\x04\x2d\x04\x28\x04\x1a\x04\x12\x04"
  "\x11\x04\x10\x04\x0f\x04\x0d\x04\x0b\x04\x0a\x04\x09\x04\x04\x04"
  "\x04\x04\x5a\x3a\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x02\x62\x03\x08\x12\x80\x80\x04\x07\x10\x81"
  "\x81\x02\x06\x0e\x81\x81\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x85"
  "\x02\x03\x08\x81\x83\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02"
  "\x11\x23";

SCHEME_OBJECT *
record_so_data_0f76ddfae97aea06 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_record_so_data_0f76ddfae97aea06 [0]))), (sizeof (prog_record_so_data_0f76ddfae97aea06)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_12]));
}

DECLARE_COMPILED_DATA_NS ("record.so", record_so_data_0f76ddfae97aea06)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("record.so", "5b2e426e55472333")
