/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:01-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto list__vector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (list__vector_3)
DEFLABEL (list__vector_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
vector_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto primitive_make_object_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_make_object_3)
DEFLABEL (primitive_make_object_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 2);

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
vector_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto primitive_object_setB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_object_setB_3)
DEFLABEL (primitive_object_setB_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd13.Obj) = (Rsp [1]);
  if (! (INDEX_FIXNUM_P (Wrd13.Obj)))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.pObj) = (& ((Wrd9.pObj) [(Wrd7.Lng)]));
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [0]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_3_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 6
#define DEBUGGING_LABEL_4_2 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto subvector__list_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subvector__list_3)
DEFLABEL (subvector__list_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 3);

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
vector_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto subvector_fillB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subvector_fillB_3)
DEFLABEL (subvector_fillB_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 4);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 6
#define DEBUGGING_LABEL_6_2 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto subvector_move_leftB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subvector_move_leftB_3)
DEFLABEL (subvector_move_leftB_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 5);

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
vector_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subvector_move_rightB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subvector_move_rightB_3)
DEFLABEL (subvector_move_rightB_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 5);

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
vector_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_8_4);
      goto vector_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_length_3)
DEFLABEL (vector_length_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 10))
    goto label_4;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  Rvl = (MAKE_OBJECT (26, (Wrd9.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 6
#define DEBUGGING_LABEL_9_2 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto vector_ref_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_ref_3)
DEFLABEL (vector_ref_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 2);

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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto vector_setB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_setB_3)
DEFLABEL (vector_setB_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 3);

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
  Rvl = (current_block [OBJECT_10_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 6
#define DEBUGGING_LABEL_11_2 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto vectorP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vectorP_3)
DEFLABEL (vectorP_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 10)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_11_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 10
#define DEBUGGING_LABEL_12_2 9
#define OBJECT_12_1 8
#define OBJECT_12_0 7
#define EXECUTE_CACHE_12_5 5
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      goto guarantee_vector_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_vector_4)
DEFLABEL (guarantee_vector_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_5;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_1]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_5]));

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_12_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_5 3
#define LABEL_13_6 5
#define LABEL_13_7 7
#define LABEL_13_8 9
#define LABEL_13_4 11
#define LABEL_13_10 13
#define ENVIRONMENT_LABEL_13_3 24
#define DEBUGGING_LABEL_13_2 23
#define OBJECT_13_3 22
#define OBJECT_13_2 21
#define OBJECT_13_1 20
#define OBJECT_13_0 19
#define EXECUTE_CACHE_13_11 15
#define EXECUTE_CACHE_13_9 17
#define FREE_REFERENCES_LABEL_13_0 14
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_13_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_13_4);
      goto guarantee_subvector_10;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_subvector_14)
DEFLABEL (guarantee_subvector_10)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_21;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_8);

DEFLABEL (label_21)
  (Wrd13.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd13.Obj))
    goto label_20;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_7);

DEFLABEL (label_20)
  (Wrd20.Obj) = (Rsp [2]);
  if (INDEX_FIXNUM_P (Wrd20.Obj))
    goto label_19;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_6);

DEFLABEL (label_19)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! ((Wrd28.Lng) > (Wrd30.Lng)))
    goto label_18;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_5);

DEFLABEL (label_18)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_17;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd31.Obj) = (MAKE_OBJECT (26, (Wrd35.uLng)));

DEFLABEL (label_16)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd43.Lng) > (Wrd44.Lng))
    goto label_15;
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (label_17)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_12)
  (Wrd31.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_5 3
#define LABEL_14_4 5
#define ENVIRONMENT_LABEL_14_3 15
#define DEBUGGING_LABEL_14_2 14
#define OBJECT_14_4 13
#define OBJECT_14_3 12
#define OBJECT_14_2 11
#define OBJECT_14_1 10
#define OBJECT_14_0 9
#define EXECUTE_CACHE_14_6 7
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_14_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_14_4);
      goto make_vector_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_vector_7)
DEFLABEL (make_vector_4)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_11;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_5);

DEFLABEL (label_11)
  (Wrd12.Obj) = (Rsp [1]);
  if ((Wrd12.Obj) == (current_block [OBJECT_14_0]))
    goto label_9;
  Wrd14 = Wrd12;
  goto label_8;

DEFLABEL (label_9)
  (Wrd14.Obj) = (current_block [OBJECT_14_1]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  (Rsp [1]) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_5 3
#define LABEL_15_4 5
#define LABEL_15_6 7
#define ENVIRONMENT_LABEL_15_3 17
#define DEBUGGING_LABEL_15_2 16
#define OBJECT_15_4 15
#define OBJECT_15_3 14
#define OBJECT_15_2 13
#define OBJECT_15_1 12
#define OBJECT_15_0 11
#define EXECUTE_CACHE_15_7 9
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_15_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_15_4);
      goto vector__list_3;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector__list_7)
DEFLABEL (vector__list_3)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_5);

DEFLABEL (label_10)
  (Wrd13.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_9;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));

DEFLABEL (label_8)
  (Rsp [2]) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 3);

DEFLABEL (label_9)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_5 3
#define LABEL_16_4 5
#define LABEL_16_6 7
#define ENVIRONMENT_LABEL_16_3 17
#define DEBUGGING_LABEL_16_2 16
#define OBJECT_16_4 15
#define OBJECT_16_3 14
#define OBJECT_16_2 13
#define OBJECT_16_1 12
#define OBJECT_16_0 11
#define EXECUTE_CACHE_16_7 9
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_16_4);
      goto vector_fillB_3;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_fillB_7)
DEFLABEL (vector_fillB_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);

DEFLABEL (label_10)
  (Wrd13.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_9;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));

DEFLABEL (label_8)
  (Rsp [2]) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 4);

DEFLABEL (label_9)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_5 3
#define LABEL_17_6 5
#define LABEL_17_7 7
#define LABEL_17_8 9
#define LABEL_17_9 11
#define LABEL_17_4 13
#define LABEL_17_11 15
#define LABEL_17_12 17
#define LABEL_17_15 19
#define ENVIRONMENT_LABEL_17_3 34
#define DEBUGGING_LABEL_17_2 33
#define OBJECT_17_5 32
#define OBJECT_17_4 31
#define OBJECT_17_3 30
#define OBJECT_17_2 29
#define OBJECT_17_1 28
#define OBJECT_17_0 27
#define EXECUTE_CACHE_17_14 21
#define EXECUTE_CACHE_17_13 23
#define EXECUTE_CACHE_17_10 25
#define FREE_REFERENCES_LABEL_17_0 20
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_17_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_17_4);
      goto subvector_15;

    case 6:
      current_block = (Rpc - LABEL_17_11);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_17_12);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subvector_19)
DEFLABEL (subvector_15)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_27;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_9);

DEFLABEL (label_27)
  (Wrd13.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd13.Obj))
    goto label_26;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_8);

DEFLABEL (label_26)
  (Wrd20.Obj) = (Rsp [2]);
  if (INDEX_FIXNUM_P (Wrd20.Obj))
    goto label_25;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_7);

DEFLABEL (label_25)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! ((Wrd28.Lng) > (Wrd30.Lng)))
    goto label_24;
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_5);

DEFLABEL (label_24)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_23;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd31.Obj) = (MAKE_OBJECT (26, (Wrd35.uLng)));

DEFLABEL (label_22)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd43.Lng) > (Wrd44.Lng))
    goto label_21;

DEFLABEL (label_20)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd52.Lng) = ((Wrd49.Lng) - (Wrd51.Lng));
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd52.Lng));
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_5]), 5);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_6);
  goto label_20;

DEFLABEL (label_23)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_17)
  (Wrd31.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 9
#define DEBUGGING_LABEL_18_2 8
#define OBJECT_18_0 7
#define EXECUTE_CACHE_18_5 5
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto vector_head_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_head_3)
DEFLABEL (vector_head_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_5 3
#define LABEL_19_6 5
#define LABEL_19_7 7
#define LABEL_19_8 9
#define LABEL_19_9 11
#define LABEL_19_4 13
#define LABEL_19_11 15
#define LABEL_19_12 17
#define ENVIRONMENT_LABEL_19_3 30
#define DEBUGGING_LABEL_19_2 29
#define OBJECT_19_5 28
#define OBJECT_19_4 27
#define OBJECT_19_3 26
#define OBJECT_19_2 25
#define OBJECT_19_1 24
#define OBJECT_19_0 23
#define EXECUTE_CACHE_19_13 19
#define EXECUTE_CACHE_19_10 21
#define FREE_REFERENCES_LABEL_19_0 18
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd69;
  machine_word Wrd68;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_11;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_19_4);
      goto vector_headB_13;

    case 6:
      current_block = (Rpc - LABEL_19_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_19_12);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_headB_18)
DEFLABEL (vector_headB_13)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_28;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_9);

DEFLABEL (label_28)
  (Wrd13.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd13.Obj))
    goto label_27;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_19_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_8);

DEFLABEL (label_27)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! ((Wrd21.Lng) < 0))
    goto label_26;
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_5);

DEFLABEL (label_26)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_25;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd22.Obj) = (MAKE_OBJECT (26, (Wrd26.uLng)));

DEFLABEL (label_24)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! ((Wrd34.Lng) > (Wrd35.Lng)))
    goto label_23;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19_6);

DEFLABEL (label_23)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_22;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd36.Obj) = (MAKE_OBJECT (26, (Wrd40.uLng)));

DEFLABEL (label_21)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if ((Wrd48.Lng) < (Wrd49.Lng))
    goto label_20;

DEFLABEL (label_19)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  ((Wrd69.pObj) [0]) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_16)
  (Wrd36.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_15)
  (Wrd22.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_5 3
#define LABEL_20_4 5
#define LABEL_20_6 7
#define ENVIRONMENT_LABEL_20_3 17
#define DEBUGGING_LABEL_20_2 16
#define OBJECT_20_2 15
#define OBJECT_20_1 14
#define OBJECT_20_0 13
#define EXECUTE_CACHE_20_8 9
#define EXECUTE_CACHE_20_7 11
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_20_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_20_4);
      goto vector_tail_3;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_tail_7)
DEFLABEL (vector_tail_3)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);

DEFLABEL (label_10)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_9;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd14.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));

DEFLABEL (label_8)
  (Wrd25.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (label_9)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_5 3
#define LABEL_21_4 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_10 11
#define ENVIRONMENT_LABEL_21_3 23
#define DEBUGGING_LABEL_21_2 22
#define OBJECT_21_4 21
#define OBJECT_21_3 20
#define OBJECT_21_2 19
#define OBJECT_21_1 18
#define OBJECT_21_0 17
#define EXECUTE_CACHE_21_9 13
#define EXECUTE_CACHE_21_8 15
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_21_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_21_4);
      goto vector_copy_7;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_copy_11)
DEFLABEL (vector_copy_7)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_14;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_21_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_5);

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_12)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 5);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define LABEL_22_8 11
#define LABEL_22_9 13
#define LABEL_22_10 15
#define LABEL_22_11 17
#define LABEL_22_12 19
#define LABEL_22_15 21
#define LABEL_22_16 23
#define LABEL_22_17 25
#define LABEL_22_19 27
#define LABEL_22_18 29
#define LABEL_22_20 31
#define ENVIRONMENT_LABEL_22_3 45
#define DEBUGGING_LABEL_22_2 44
#define OBJECT_22_6 43
#define OBJECT_22_5 42
#define OBJECT_22_4 41
#define OBJECT_22_3 40
#define OBJECT_22_2 39
#define OBJECT_22_1 38
#define OBJECT_22_0 37
#define EXECUTE_CACHE_22_14 33
#define EXECUTE_CACHE_22_13 35
#define FREE_REFERENCES_LABEL_22_0 32
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_22_4);
      goto vector_append_26;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_13;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto loop_11;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_22_9);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_22_10);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_22_11);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_22_12);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_22_15);
      goto loop_23;

    case 10:
      current_block = (Rpc - LABEL_22_16);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_22_17);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_22_19);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_22_18);
      goto continuation_19;

    case 14:
      current_block = (Rpc - LABEL_22_20);
      goto label_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_append_38)
DEFLABEL (vector_append_26)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_11;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_23;

DEFLABEL (loop_39)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_22_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_41;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (label_41)
  if (! ((Wrd6.uLng) == 1))
    goto label_52;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_51)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_48;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_22_4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_22_5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_50;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_6);

DEFLABEL (label_48)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_47;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [0]);

DEFLABEL (label_46)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_45;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd42.Obj) = (MAKE_OBJECT (26, (Wrd45.uLng)));

DEFLABEL (label_44)
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd55.Lng) = ((Wrd52.Lng) + (Wrd54.Lng));
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd55.Lng));
  (Rsp [1]) = (Wrd51.Obj);
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_43;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [0]) = (Wrd56.Obj);
  goto loop_11;

DEFLABEL (label_43)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (label_32)
  (Wrd56.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 1);

DEFLABEL (label_31)
  (Wrd42.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_30)
  (Wrd33.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_50)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_28)
  (Wrd9.Obj) = Rvl;
  goto label_51;

DEFLABEL (loop_40)
DEFLABEL (loop_23)
  INTERRUPT_CHECK (26, LABEL_22_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_53;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_53)
  if (! ((Wrd6.uLng) == 1))
    goto label_61;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_60)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_59;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_58)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd37.Obj) = (Rsp [6]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_57;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_56)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_6]), 5);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_22_18);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_55;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_23;

DEFLABEL (label_55)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_19]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_33)
  (Wrd9.Obj) = Rvl;
  goto label_60;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_5 3
#define LABEL_23_6 5
#define LABEL_23_7 7
#define LABEL_23_4 9
#define LABEL_23_8 11
#define LABEL_23_10 13
#define LABEL_23_14 15
#define LABEL_23_13 17
#define ENVIRONMENT_LABEL_23_3 33
#define DEBUGGING_LABEL_23_2 32
#define OBJECT_23_6 31
#define OBJECT_23_5 30
#define OBJECT_23_4 29
#define OBJECT_23_3 28
#define OBJECT_23_2 27
#define OBJECT_23_1 26
#define OBJECT_23_0 25
#define EXECUTE_CACHE_23_12 19
#define EXECUTE_CACHE_23_11 21
#define EXECUTE_CACHE_23_9 23
#define FREE_REFERENCES_LABEL_23_0 18
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_23_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_23_4);
      goto vector_grow_13;

    case 4:
      current_block = (Rpc - LABEL_23_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_23_10);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_23_14);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_23_13);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_grow_18)
DEFLABEL (vector_grow_13)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_28;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);

DEFLABEL (label_28)
  (Wrd13.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd13.Obj))
    goto label_27;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_23_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_6);

DEFLABEL (label_27)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_26;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd20.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));

DEFLABEL (label_25)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! ((Wrd32.Lng) < (Wrd33.Lng)))
    goto label_24;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_23_5);

DEFLABEL (label_24)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  if ((Wrd37.Obj) == (current_block [OBJECT_23_2]))
    goto label_20;
  (* (--Rsp)) = (Wrd37.Obj);
  goto label_19;

DEFLABEL (label_20)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_19)
DEFLABEL (label_23)
  (Wrd40.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_23_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_22;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_21)
  (Wrd21.Obj) = (current_block [OBJECT_23_5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_6]), 5);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_23_13);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_26)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_15)
  (Wrd20.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define ENVIRONMENT_LABEL_24_3 18
#define DEBUGGING_LABEL_24_2 17
#define OBJECT_24_1 16
#define OBJECT_24_0 15
#define EXECUTE_CACHE_24_6 13
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_24_4);
      goto make_initialized_vector_10;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_initialized_vector_14)
DEFLABEL (make_initialized_vector_10)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_15)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_24_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_16;
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (Wrd5.Obj) = Rvl;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_18;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_18;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_18;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd14.pObj) = (& ((Wrd20.pObj) [(Wrd11.Lng)]));
  ((Wrd14.pObj) [1]) = Rvl;

DEFLABEL (label_17)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_7;

DEFLABEL (label_18)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 3);

DEFLABEL (label_12)
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_5 3
#define LABEL_25_4 5
#define LABEL_25_6 7
#define LABEL_25_10 9
#define LABEL_25_7 11
#define LABEL_25_11 13
#define LABEL_25_12 15
#define TAG_25_13 6
#define LABEL_25_16 17
#define LABEL_25_14 19
#define LABEL_25_18 21
#define LABEL_25_19 23
#define LABEL_25_24 25
#define LABEL_25_20 27
#define LABEL_25_25 29
#define LABEL_25_21 31
#define TAG_25_22 14
#define ENVIRONMENT_LABEL_25_3 53
#define DEBUGGING_LABEL_25_2 52
#define OBJECT_25_8 51
#define OBJECT_25_7 50
#define OBJECT_25_6 49
#define OBJECT_25_5 48
#define OBJECT_25_4 47
#define OBJECT_25_3 46
#define OBJECT_25_2 45
#define OBJECT_25_1 44
#define OBJECT_25_0 43
#define EXECUTE_CACHE_25_23 33
#define EXECUTE_CACHE_25_17 35
#define EXECUTE_CACHE_25_15 37
#define EXECUTE_CACHE_25_9 39
#define EXECUTE_CACHE_25_8 41
#define FREE_REFERENCES_LABEL_25_0 32
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_25_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_25_4);
      goto vector_map_27;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_25_10);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_25_7);
      goto lambda_3;

    case 5:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_25_12);
      goto lambda_35;

    case 7:
      current_block = (Rpc - LABEL_25_16);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_25_14);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_25_18);
      goto do_loop_23;

    case 10:
      current_block = (Rpc - LABEL_25_19);
      goto continuation_19;

    case 11:
      current_block = (Rpc - LABEL_25_24);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_25_20);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_25_25);
      goto label_32;

    case 14:
      current_block = (Rpc - LABEL_25_21);
      goto lambda_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_map_34)
DEFLABEL (vector_map_27)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_41;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_5);

DEFLABEL (label_41)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_6);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_40;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_39)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_12])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd22 = Wrd21;
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_25_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_23;

DEFLABEL (label_40)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (lambda_36)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_25_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_42;
  (Wrd7.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (label_42)
  Rvl = (current_block [OBJECT_25_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_25_12);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_45;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_44)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd18.Obj))
    goto label_43;
  (Wrd19.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_17]));

DEFLABEL (label_43)
  Rvl = (current_block [OBJECT_25_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_44;

DEFLABEL (do_loop_37)
DEFLABEL (do_loop_23)
  INTERRUPT_CHECK (26, LABEL_25_18);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_47;
  (Wrd9.Obj) = (current_block [OBJECT_25_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_46;

DEFLABEL (label_47)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_46)
DEFLABEL (label_53)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_21])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [4]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_23]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_25_20);
  (* (--Rsp)) = Rvl;
  (Wrd19.Obj) = (Rsp [7]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_52;
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_52;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd18.Lng))))
    goto label_52;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd10.pObj) = (& ((Wrd16.pObj) [(Wrd7.Lng)]));
  (Wrd5.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_51)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_8]), 2);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_25_19);
  (Wrd5.Obj) = Rvl;
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_50;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_50;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_50;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd15.pObj) = (& ((Wrd21.pObj) [(Wrd12.Lng)]));
  ((Wrd15.pObj) [1]) = Rvl;

DEFLABEL (label_49)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_23;

DEFLABEL (label_50)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_24]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_6]), 3);

DEFLABEL (label_31)
  goto label_49;

DEFLABEL (label_52)
  (Wrd21.Obj) = (Rsp [7]);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_25]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_7]), 2);

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_51;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_25_21);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd25.uLng) == 10)
    goto label_55;

DEFLABEL (label_54)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_7]), 2);

DEFLABEL (label_55)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_54;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_54;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_5 3
#define LABEL_26_4 5
#define LABEL_26_6 7
#define LABEL_26_10 9
#define LABEL_26_7 11
#define LABEL_26_11 13
#define LABEL_26_12 15
#define TAG_26_13 6
#define LABEL_26_14 17
#define LABEL_26_16 19
#define LABEL_26_17 21
#define LABEL_26_18 23
#define LABEL_26_22 25
#define LABEL_26_19 27
#define TAG_26_20 12
#define ENVIRONMENT_LABEL_26_3 45
#define DEBUGGING_LABEL_26_2 44
#define OBJECT_26_6 43
#define OBJECT_26_5 42
#define OBJECT_26_4 41
#define OBJECT_26_3 40
#define OBJECT_26_2 39
#define OBJECT_26_1 38
#define OBJECT_26_0 37
#define EXECUTE_CACHE_26_21 29
#define EXECUTE_CACHE_26_15 31
#define EXECUTE_CACHE_26_9 33
#define EXECUTE_CACHE_26_8 35
#define FREE_REFERENCES_LABEL_26_0 28
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_26_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_26_4);
      goto vector_for_each_21;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_26_10);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_26_7);
      goto lambda_3;

    case 5:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_26_12);
      goto lambda_28;

    case 7:
      current_block = (Rpc - LABEL_26_14);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_26_16);
      goto do_loop_18;

    case 9:
      current_block = (Rpc - LABEL_26_17);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_26_18);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_26_22);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_26_19);
      goto lambda_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_for_each_27)
DEFLABEL (vector_for_each_21)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_34;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_5);

DEFLABEL (label_34)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_33;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_32)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_12])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd22 = Wrd21;
  (Wrd23.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (Wrd5.Obj) = (current_block [OBJECT_26_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_18;

DEFLABEL (label_33)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (lambda_29)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_26_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_35;
  (Wrd7.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_26_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_26_12);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_38;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd18.Obj))
    goto label_36;
  (Wrd19.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_15]));

DEFLABEL (label_36)
  Rvl = (current_block [OBJECT_26_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_37;

DEFLABEL (do_loop_30)
DEFLABEL (do_loop_18)
  INTERRUPT_CHECK (26, LABEL_26_16);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_39;
  Rvl = (current_block [OBJECT_26_3]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_19])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  ((Wrd19.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_26_18);
  (* (--Rsp)) = Rvl;
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_41;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_41;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd18.Lng))))
    goto label_41;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd10.pObj) = (& ((Wrd16.pObj) [(Wrd7.Lng)]));
  (Wrd5.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_40)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_6]), 2);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_26_17);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_18;

DEFLABEL (label_41)
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_22]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_5]), 2);

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_40;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_26_19);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd25.uLng) == 10)
    goto label_43;

DEFLABEL (label_42)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_5]), 2);

DEFLABEL (label_43)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_42;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_42;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 8
#define DEBUGGING_LABEL_27_2 7
#define EXECUTE_CACHE_27_5 5
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto for_each_vector_element_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_vector_element_3)
DEFLABEL (for_each_vector_element_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_5 3
#define LABEL_28_6 5
#define LABEL_28_7 7
#define LABEL_28_8 9
#define LABEL_28_9 11
#define LABEL_28_4 13
#define LABEL_28_11 15
#define LABEL_28_13 17
#define LABEL_28_15 19
#define LABEL_28_14 21
#define ENVIRONMENT_LABEL_28_3 35
#define DEBUGGING_LABEL_28_2 34
#define OBJECT_28_4 33
#define OBJECT_28_3 32
#define OBJECT_28_2 31
#define OBJECT_28_1 30
#define OBJECT_28_0 29
#define EXECUTE_CACHE_28_16 23
#define EXECUTE_CACHE_28_12 25
#define EXECUTE_CACHE_28_10 27
#define FREE_REFERENCES_LABEL_28_0 22
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_28_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_28_6);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_28_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_28_4);
      goto subvector_find_next_element_18;

    case 6:
      current_block = (Rpc - LABEL_28_11);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_28_13);
      goto loop_16;

    case 8:
      current_block = (Rpc - LABEL_28_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_28_14);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subvector_find_next_element_23)
DEFLABEL (subvector_find_next_element_18)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_28_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_9);

DEFLABEL (label_32)
  (Wrd13.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd13.Obj))
    goto label_31;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_28_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_8);

DEFLABEL (label_31)
  (Wrd20.Obj) = (Rsp [2]);
  if (INDEX_FIXNUM_P (Wrd20.Obj))
    goto label_30;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_28_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_28_7);

DEFLABEL (label_30)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! ((Wrd28.Lng) > (Wrd30.Lng)))
    goto label_29;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_28_5);

DEFLABEL (label_29)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_28;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd31.Obj) = (MAKE_OBJECT (26, (Wrd35.uLng)));

DEFLABEL (label_27)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd43.Lng) > (Wrd44.Lng))
    goto label_26;

DEFLABEL (label_25)
  (Wrd45.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd45.Obj);
  goto loop_16;

DEFLABEL (label_26)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_28_6);
  goto label_25;

DEFLABEL (label_28)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 1);

DEFLABEL (label_20)
  (Wrd31.Obj) = Rvl;
  goto label_27;

DEFLABEL (loop_24)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_28_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_36;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_36;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_36;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd19.pObj) = (& ((Wrd26.pObj) [(Wrd16.Lng)]));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_28_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_16;

DEFLABEL (label_36)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_4]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_5 3
#define LABEL_29_6 5
#define LABEL_29_7 7
#define LABEL_29_8 9
#define LABEL_29_9 11
#define LABEL_29_4 13
#define LABEL_29_11 15
#define LABEL_29_13 17
#define LABEL_29_15 19
#define LABEL_29_14 21
#define ENVIRONMENT_LABEL_29_3 35
#define DEBUGGING_LABEL_29_2 34
#define OBJECT_29_4 33
#define OBJECT_29_3 32
#define OBJECT_29_2 31
#define OBJECT_29_1 30
#define OBJECT_29_0 29
#define EXECUTE_CACHE_29_16 23
#define EXECUTE_CACHE_29_12 25
#define EXECUTE_CACHE_29_10 27
#define FREE_REFERENCES_LABEL_29_0 22
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_29_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_29_4);
      goto subvector_find_next_element_not_18;

    case 6:
      current_block = (Rpc - LABEL_29_11);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_29_13);
      goto loop_16;

    case 8:
      current_block = (Rpc - LABEL_29_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_29_14);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subvector_find_next_element_not_23)
DEFLABEL (subvector_find_next_element_not_18)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_9);

DEFLABEL (label_32)
  (Wrd13.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd13.Obj))
    goto label_31;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_29_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_8);

DEFLABEL (label_31)
  (Wrd20.Obj) = (Rsp [2]);
  if (INDEX_FIXNUM_P (Wrd20.Obj))
    goto label_30;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_29_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_29_7);

DEFLABEL (label_30)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! ((Wrd28.Lng) > (Wrd30.Lng)))
    goto label_29;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_29_5);

DEFLABEL (label_29)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_28;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd31.Obj) = (MAKE_OBJECT (26, (Wrd35.uLng)));

DEFLABEL (label_27)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd43.Lng) > (Wrd44.Lng))
    goto label_26;

DEFLABEL (label_25)
  (Wrd45.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd45.Obj);
  goto loop_16;

DEFLABEL (label_26)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_29_6);
  goto label_25;

DEFLABEL (label_28)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_20)
  (Wrd31.Obj) = Rvl;
  goto label_27;

DEFLABEL (loop_24)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_29_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_36;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_36;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_36;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd19.pObj) = (& ((Wrd26.pObj) [(Wrd16.Lng)]));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_29_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_16;

DEFLABEL (label_34)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_5 3
#define LABEL_30_6 5
#define LABEL_30_7 7
#define LABEL_30_8 9
#define LABEL_30_9 11
#define LABEL_30_4 13
#define LABEL_30_11 15
#define LABEL_30_13 17
#define LABEL_30_15 19
#define LABEL_30_14 21
#define ENVIRONMENT_LABEL_30_3 35
#define DEBUGGING_LABEL_30_2 34
#define OBJECT_30_4 33
#define OBJECT_30_3 32
#define OBJECT_30_2 31
#define OBJECT_30_1 30
#define OBJECT_30_0 29
#define EXECUTE_CACHE_30_16 23
#define EXECUTE_CACHE_30_12 25
#define EXECUTE_CACHE_30_10 27
#define FREE_REFERENCES_LABEL_30_0 22
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_30_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_30_4);
      goto subvector_find_previous_element_19;

    case 6:
      current_block = (Rpc - LABEL_30_11);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_30_13);
      goto loop_17;

    case 8:
      current_block = (Rpc - LABEL_30_15);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_30_14);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subvector_find_previous_element_24)
DEFLABEL (subvector_find_previous_element_19)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_33;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_9);

DEFLABEL (label_33)
  (Wrd13.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd13.Obj))
    goto label_32;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_30_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_8);

DEFLABEL (label_32)
  (Wrd20.Obj) = (Rsp [2]);
  if (INDEX_FIXNUM_P (Wrd20.Obj))
    goto label_31;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_30_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_7);

DEFLABEL (label_31)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! ((Wrd28.Lng) > (Wrd30.Lng)))
    goto label_30;
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_30_5);

DEFLABEL (label_30)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_29;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd31.Obj) = (MAKE_OBJECT (26, (Wrd35.uLng)));

DEFLABEL (label_28)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd43.Lng) > (Wrd44.Lng))
    goto label_27;

DEFLABEL (label_26)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd46.Lng) - 1L);
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (* (--Rsp)) = (Wrd48.Obj);
  goto loop_17;

DEFLABEL (label_27)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_30_6);
  goto label_26;

DEFLABEL (label_29)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_21)
  (Wrd31.Obj) = Rvl;
  goto label_28;

DEFLABEL (loop_25)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_30_13);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) > (Wrd8.Lng)))
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_37;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_37;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd8.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_37;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd17.pObj) = (& ((Wrd24.pObj) [(Wrd14.Lng)]));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_30_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) - 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_17;

DEFLABEL (label_37)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_5 3
#define LABEL_31_6 5
#define LABEL_31_7 7
#define LABEL_31_8 9
#define LABEL_31_9 11
#define LABEL_31_4 13
#define LABEL_31_11 15
#define LABEL_31_13 17
#define LABEL_31_15 19
#define LABEL_31_14 21
#define ENVIRONMENT_LABEL_31_3 35
#define DEBUGGING_LABEL_31_2 34
#define OBJECT_31_4 33
#define OBJECT_31_3 32
#define OBJECT_31_2 31
#define OBJECT_31_1 30
#define OBJECT_31_0 29
#define EXECUTE_CACHE_31_16 23
#define EXECUTE_CACHE_31_12 25
#define EXECUTE_CACHE_31_10 27
#define FREE_REFERENCES_LABEL_31_0 22
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_31_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_31_4);
      goto subvector_find_previous_element_not_19;

    case 6:
      current_block = (Rpc - LABEL_31_11);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_31_13);
      goto loop_17;

    case 8:
      current_block = (Rpc - LABEL_31_15);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_31_14);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subvector_find_previous_element_not_24)
DEFLABEL (subvector_find_previous_element_not_19)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_33;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_9);

DEFLABEL (label_33)
  (Wrd13.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd13.Obj))
    goto label_32;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_31_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_8);

DEFLABEL (label_32)
  (Wrd20.Obj) = (Rsp [2]);
  if (INDEX_FIXNUM_P (Wrd20.Obj))
    goto label_31;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_31_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_7);

DEFLABEL (label_31)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! ((Wrd28.Lng) > (Wrd30.Lng)))
    goto label_30;
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_31_5);

DEFLABEL (label_30)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_29;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd31.Obj) = (MAKE_OBJECT (26, (Wrd35.uLng)));

DEFLABEL (label_28)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd43.Lng) > (Wrd44.Lng))
    goto label_27;

DEFLABEL (label_26)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd46.Lng) - 1L);
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (* (--Rsp)) = (Wrd48.Obj);
  goto loop_17;

DEFLABEL (label_27)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_31_6);
  goto label_26;

DEFLABEL (label_29)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_21)
  (Wrd31.Obj) = Rvl;
  goto label_28;

DEFLABEL (loop_25)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_31_13);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) > (Wrd8.Lng)))
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_37;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_37;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd8.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_37;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd17.pObj) = (& ((Wrd24.pObj) [(Wrd14.Lng)]));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_16]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_31_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) - 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_17;

DEFLABEL (label_35)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_5 3
#define LABEL_32_4 5
#define LABEL_32_6 7
#define ENVIRONMENT_LABEL_32_3 18
#define DEBUGGING_LABEL_32_2 17
#define OBJECT_32_3 16
#define OBJECT_32_2 15
#define OBJECT_32_1 14
#define OBJECT_32_0 13
#define EXECUTE_CACHE_32_8 9
#define EXECUTE_CACHE_32_7 11
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_32_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_32_4);
      goto vector_find_next_element_3;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_find_next_element_7)
DEFLABEL (vector_find_next_element_3)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_5);

DEFLABEL (label_10)
  (Wrd13.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_9;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));

DEFLABEL (label_8)
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (label_9)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_5 3
#define LABEL_33_4 5
#define LABEL_33_6 7
#define ENVIRONMENT_LABEL_33_3 18
#define DEBUGGING_LABEL_33_2 17
#define OBJECT_33_3 16
#define OBJECT_33_2 15
#define OBJECT_33_1 14
#define OBJECT_33_0 13
#define EXECUTE_CACHE_33_8 9
#define EXECUTE_CACHE_33_7 11
#define FREE_REFERENCES_LABEL_33_0 8
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_33_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_33_4);
      goto vector_find_previous_element_3;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_find_previous_element_7)
DEFLABEL (vector_find_previous_element_3)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_5);

DEFLABEL (label_10)
  (Wrd13.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_9;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));

DEFLABEL (label_8)
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (label_9)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_5 3
#define LABEL_34_4 5
#define LABEL_34_6 7
#define LABEL_34_8 9
#define LABEL_34_9 11
#define LABEL_34_10 13
#define LABEL_34_11 15
#define LABEL_34_12 17
#define ENVIRONMENT_LABEL_34_3 27
#define DEBUGGING_LABEL_34_2 26
#define OBJECT_34_4 25
#define OBJECT_34_3 24
#define OBJECT_34_2 23
#define OBJECT_34_1 22
#define OBJECT_34_0 21
#define EXECUTE_CACHE_34_7 19
#define FREE_REFERENCES_LABEL_34_0 18
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_34_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_34_4);
      goto vector_binary_search_17;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_34_8);
      goto loop_15;

    case 4:
      current_block = (Rpc - LABEL_34_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_34_10);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_34_11);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_binary_search_22)
DEFLABEL (vector_binary_search_17)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_26;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_34_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_34_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_5);

DEFLABEL (label_26)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_25;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_24)
  (Wrd24.Obj) = (current_block [OBJECT_34_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto loop_15;

DEFLABEL (label_25)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (loop_23)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_34_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_27;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd17.Lng) = ((Wrd6.Lng) + (Wrd8.Lng));
  (Wrd20.Lng) = (((Wrd17.Lng) < 0) ? (RIGHT_SHIFT (((Wrd17.Lng) + 1), 1)) : (RIGHT_SHIFT ((Wrd17.Lng), 1)));
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_31;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_31;
  Wrd31 = Wrd20;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd31.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_31;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd26.pObj) = (& ((Wrd33.pObj) [(Wrd23.Lng)]));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_30)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd47.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_34_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_34_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_15;

DEFLABEL (label_28)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_34_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_15;

DEFLABEL (label_29)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_4]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_5 3
#define LABEL_35_4 5
#define ENVIRONMENT_LABEL_35_3 14
#define DEBUGGING_LABEL_35_2 13
#define OBJECT_35_3 12
#define OBJECT_35_2 11
#define OBJECT_35_1 10
#define OBJECT_35_0 9
#define EXECUTE_CACHE_35_6 7
#define FREE_REFERENCES_LABEL_35_0 6
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_35_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_35_4);
      goto vector_first_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_first_5)
DEFLABEL (vector_first_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_35_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_35_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_5);

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd26.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_7)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd24.Lng))))
    goto label_6;
  Rvl = ((Wrd22.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_5 3
#define LABEL_36_4 5
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
vector_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_36_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_36_4);
      goto vector_second_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_second_5)
DEFLABEL (vector_second_2)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_36_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_5);

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_36_0]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd26.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_7)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_6;
  Rvl = ((Wrd22.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_5 3
#define LABEL_37_4 5
#define ENVIRONMENT_LABEL_37_3 14
#define DEBUGGING_LABEL_37_2 13
#define OBJECT_37_3 12
#define OBJECT_37_2 11
#define OBJECT_37_1 10
#define OBJECT_37_0 9
#define EXECUTE_CACHE_37_6 7
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_37_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_37_4);
      goto vector_third_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_third_5)
DEFLABEL (vector_third_2)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_37_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_37_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_5);

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd26.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_7)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd24.Lng))))
    goto label_6;
  Rvl = ((Wrd22.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_5 3
#define LABEL_38_4 5
#define ENVIRONMENT_LABEL_38_3 14
#define DEBUGGING_LABEL_38_2 13
#define OBJECT_38_3 12
#define OBJECT_38_2 11
#define OBJECT_38_1 10
#define OBJECT_38_0 9
#define EXECUTE_CACHE_38_6 7
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_38_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_38_4);
      goto vector_fourth_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_fourth_5)
DEFLABEL (vector_fourth_2)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_38_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_38_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_5);

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_38_0]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd26.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_7)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd24.Lng))))
    goto label_6;
  Rvl = ((Wrd22.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_5 3
#define LABEL_39_4 5
#define ENVIRONMENT_LABEL_39_3 14
#define DEBUGGING_LABEL_39_2 13
#define OBJECT_39_3 12
#define OBJECT_39_2 11
#define OBJECT_39_1 10
#define OBJECT_39_0 9
#define EXECUTE_CACHE_39_6 7
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_39_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_39_4);
      goto vector_fifth_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_fifth_5)
DEFLABEL (vector_fifth_2)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_39_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_39_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_5);

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_39_0]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd26.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_7)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd24.Lng))))
    goto label_6;
  Rvl = ((Wrd22.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_5 3
#define LABEL_40_4 5
#define ENVIRONMENT_LABEL_40_3 14
#define DEBUGGING_LABEL_40_2 13
#define OBJECT_40_3 12
#define OBJECT_40_2 11
#define OBJECT_40_1 10
#define OBJECT_40_0 9
#define EXECUTE_CACHE_40_6 7
#define FREE_REFERENCES_LABEL_40_0 6
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_40_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_40_4);
      goto vector_sixth_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_sixth_5)
DEFLABEL (vector_sixth_2)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_40_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_40_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_5);

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd26.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_7)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd24.Lng))))
    goto label_6;
  Rvl = ((Wrd22.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_5 3
#define LABEL_41_4 5
#define ENVIRONMENT_LABEL_41_3 14
#define DEBUGGING_LABEL_41_2 13
#define OBJECT_41_3 12
#define OBJECT_41_2 11
#define OBJECT_41_1 10
#define OBJECT_41_0 9
#define EXECUTE_CACHE_41_6 7
#define FREE_REFERENCES_LABEL_41_0 6
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_41_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_41_4);
      goto vector_seventh_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_seventh_5)
DEFLABEL (vector_seventh_2)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_41_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_41_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_5);

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd26.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_7)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd24.Lng))))
    goto label_6;
  Rvl = ((Wrd22.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_5 3
#define LABEL_42_4 5
#define ENVIRONMENT_LABEL_42_3 14
#define DEBUGGING_LABEL_42_2 13
#define OBJECT_42_3 12
#define OBJECT_42_2 11
#define OBJECT_42_1 10
#define OBJECT_42_0 9
#define EXECUTE_CACHE_42_6 7
#define FREE_REFERENCES_LABEL_42_0 6
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_42_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_42_4);
      goto vector_eighth_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_eighth_5)
DEFLABEL (vector_eighth_2)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_42_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_42_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_5);

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_42_0]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd26.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_7)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd24.Lng))))
    goto label_6;
  Rvl = ((Wrd22.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_5 3
#define LABEL_43_4 5
#define LABEL_43_6 7
#define ENVIRONMENT_LABEL_43_3 17
#define DEBUGGING_LABEL_43_2 16
#define OBJECT_43_4 15
#define OBJECT_43_3 14
#define OBJECT_43_2 13
#define OBJECT_43_1 12
#define OBJECT_43_0 11
#define EXECUTE_CACHE_43_7 9
#define FREE_REFERENCES_LABEL_43_0 8
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_43_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_43_4);
      goto vector_moveB_3;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_moveB_7)
DEFLABEL (vector_moveB_3)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_43_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_43_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_5);

DEFLABEL (label_10)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_9;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_8)
  (Wrd24.Obj) = (current_block [OBJECT_43_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd26.Obj);
  (Rsp [4]) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 5);

DEFLABEL (label_9)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_5 3
#define LABEL_44_6 5
#define LABEL_44_7 7
#define LABEL_44_8 9
#define LABEL_44_9 11
#define LABEL_44_4 13
#define LABEL_44_11 15
#define LABEL_44_13 17
#define LABEL_44_15 19
#define LABEL_44_14 21
#define ENVIRONMENT_LABEL_44_3 36
#define DEBUGGING_LABEL_44_2 35
#define OBJECT_44_5 34
#define OBJECT_44_4 33
#define OBJECT_44_3 32
#define OBJECT_44_2 31
#define OBJECT_44_1 30
#define OBJECT_44_0 29
#define EXECUTE_CACHE_44_16 23
#define EXECUTE_CACHE_44_12 25
#define EXECUTE_CACHE_44_10 27
#define FREE_REFERENCES_LABEL_44_0 22
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_44_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_44_6);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_44_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_44_4);
      goto subvector_filledP_18;

    case 6:
      current_block = (Rpc - LABEL_44_11);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_44_13);
      goto loop_16;

    case 8:
      current_block = (Rpc - LABEL_44_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_44_14);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subvector_filledP_23)
DEFLABEL (subvector_filledP_18)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_44_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_9);

DEFLABEL (label_32)
  (Wrd13.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd13.Obj))
    goto label_31;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_44_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_44_8);

DEFLABEL (label_31)
  (Wrd20.Obj) = (Rsp [2]);
  if (INDEX_FIXNUM_P (Wrd20.Obj))
    goto label_30;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_44_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_44_7);

DEFLABEL (label_30)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! ((Wrd28.Lng) > (Wrd30.Lng)))
    goto label_29;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_44_5);

DEFLABEL (label_29)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_28;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd31.Obj) = (MAKE_OBJECT (26, (Wrd35.uLng)));

DEFLABEL (label_27)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd43.Lng) > (Wrd44.Lng))
    goto label_26;

DEFLABEL (label_25)
  (Wrd45.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd45.Obj);
  goto loop_16;

DEFLABEL (label_26)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_44_6);
  goto label_25;

DEFLABEL (label_28)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_20)
  (Wrd31.Obj) = Rvl;
  goto label_27;

DEFLABEL (loop_24)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_44_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_33;
  Rvl = (current_block [OBJECT_44_4]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_36;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_36;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_36;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd15.pObj) = (& ((Wrd22.pObj) [(Wrd12.Lng)]));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_44_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_16;

DEFLABEL (label_34)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_5]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_5 3
#define LABEL_45_4 5
#define LABEL_45_6 7
#define ENVIRONMENT_LABEL_45_3 18
#define DEBUGGING_LABEL_45_2 17
#define OBJECT_45_3 16
#define OBJECT_45_2 15
#define OBJECT_45_1 14
#define OBJECT_45_0 13
#define EXECUTE_CACHE_45_8 9
#define EXECUTE_CACHE_45_7 11
#define FREE_REFERENCES_LABEL_45_0 8
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_45_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_45_4);
      goto vector_filledP_3;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_filledP_7)
DEFLABEL (vector_filledP_3)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_45_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_45_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_5);

DEFLABEL (label_10)
  (Wrd13.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_9;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));

DEFLABEL (label_8)
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

DEFLABEL (label_9)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_5 3
#define LABEL_46_6 5
#define LABEL_46_7 7
#define LABEL_46_8 9
#define LABEL_46_9 11
#define LABEL_46_4 13
#define LABEL_46_11 15
#define LABEL_46_12 17
#define ENVIRONMENT_LABEL_46_3 32
#define DEBUGGING_LABEL_46_2 31
#define OBJECT_46_5 30
#define OBJECT_46_4 29
#define OBJECT_46_3 28
#define OBJECT_46_2 27
#define OBJECT_46_1 26
#define OBJECT_46_0 25
#define EXECUTE_CACHE_46_14 19
#define EXECUTE_CACHE_46_13 21
#define EXECUTE_CACHE_46_10 23
#define FREE_REFERENCES_LABEL_46_0 18
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd67;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_46_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_46_6);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_46_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_46_4);
      goto subvector_uniformP_14;

    case 6:
      current_block = (Rpc - LABEL_46_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_46_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subvector_uniformP_19)
DEFLABEL (subvector_uniformP_14)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_46_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_9);

DEFLABEL (label_29)
  (Wrd13.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd13.Obj))
    goto label_28;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_46_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_8);

DEFLABEL (label_28)
  (Wrd20.Obj) = (Rsp [2]);
  if (INDEX_FIXNUM_P (Wrd20.Obj))
    goto label_27;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_46_4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_46_7);

DEFLABEL (label_27)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! ((Wrd28.Lng) > (Wrd30.Lng)))
    goto label_26;
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd86.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_46_5);

DEFLABEL (label_26)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_25;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd31.Obj) = (MAKE_OBJECT (26, (Wrd35.uLng)));

DEFLABEL (label_24)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! ((Wrd43.Lng) > (Wrd44.Lng)))
    goto label_23;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_6]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_46_6);

DEFLABEL (label_23)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if ((Wrd46.Lng) < (Wrd48.Lng))
    goto label_20;
  Rvl = (current_block [OBJECT_46_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd51.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_22;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_22;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) (Wrd46.Lng)) < ((unsigned long) (Wrd65.Lng))))
    goto label_22;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd57.pObj) = (& ((Wrd63.pObj) [(Wrd54.Lng)]));
  (Wrd52.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_21)
  (Wrd74.Obj) = (Rsp [2]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd76.Lng) = ((Wrd75.Lng) + 1L);
  (Wrd73.Obj) = (LONG_TO_FIXNUM (Wrd76.Lng));
  (Rsp [1]) = (Wrd73.Obj);
  (Wrd77.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd77.Obj);
  (Rsp [3]) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_13]));

DEFLABEL (label_22)
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_12]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 2);

DEFLABEL (label_17)
  (Wrd52.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 1);

DEFLABEL (label_16)
  (Wrd31.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_5 3
#define LABEL_47_4 5
#define LABEL_47_6 7
#define ENVIRONMENT_LABEL_47_3 18
#define DEBUGGING_LABEL_47_2 17
#define OBJECT_47_3 16
#define OBJECT_47_2 15
#define OBJECT_47_1 14
#define OBJECT_47_0 13
#define EXECUTE_CACHE_47_8 9
#define EXECUTE_CACHE_47_7 11
#define FREE_REFERENCES_LABEL_47_0 8
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_47_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_47_4);
      goto vector_uniformP_3;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_uniformP_7)
DEFLABEL (vector_uniformP_3)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_47_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_47_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_5);

DEFLABEL (label_10)
  (Wrd13.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_9;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));

DEFLABEL (label_8)
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (label_9)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_8 9
#define LABEL_48_7 11
#define ENVIRONMENT_LABEL_48_3 17
#define DEBUGGING_LABEL_48_2 16
#define OBJECT_48_3 15
#define OBJECT_48_2 14
#define OBJECT_48_1 13
#define OBJECT_48_0 12
#define FREE_REFERENCES_LABEL_48_0 12
#define NUMBER_OF_LINKER_SECTIONS_48_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_48_4);
      goto vector_of_typeP_10;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_of_typeP_15)
DEFLABEL (vector_of_typeP_10)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_18)
  (Wrd20.Obj) = (current_block [OBJECT_48_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto loop_7;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_48_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_20;
  Rvl = (current_block [OBJECT_48_3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_23;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_23;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_23;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd18.pObj) = (& ((Wrd25.pObj) [(Wrd15.Lng)]));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_22)
  (Wrd35.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_48_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_7;

DEFLABEL (label_21)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define ENVIRONMENT_LABEL_49_3 13
#define DEBUGGING_LABEL_49_2 12
#define OBJECT_49_0 11
#define EXECUTE_CACHE_49_7 7
#define EXECUTE_CACHE_49_6 9
#define FREE_REFERENCES_LABEL_49_0 6
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto guarantee_vector_of_type_1;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_vector_of_type_4)
DEFLABEL (guarantee_vector_of_type_1)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_49_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_7 9
#define LABEL_50_8 11
#define LABEL_50_9 13
#define LABEL_50_10 15
#define LABEL_50_11 17
#define ENVIRONMENT_LABEL_50_3 27
#define DEBUGGING_LABEL_50_2 26
#define OBJECT_50_7 25
#define OBJECT_50_6 24
#define OBJECT_50_5 23
#define OBJECT_50_4 22
#define OBJECT_50_3 21
#define OBJECT_50_2 20
#define OBJECT_50_1 19
#define OBJECT_50_0 18
#define FREE_REFERENCES_LABEL_50_0 18
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd67;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_50_4);
      goto vector_of_unique_symbolsP_22;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto loop_19;

    case 4:
      current_block = (Rpc - LABEL_50_8);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_50_9);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_50_10);
      goto find_dup_15;

    case 7:
      current_block = (Rpc - LABEL_50_11);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (vector_of_unique_symbolsP_29)
DEFLABEL (vector_of_unique_symbolsP_22)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_32;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  if (! ((Wrd6.uLng) == 10))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_33)
  (Wrd20.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto loop_19;

DEFLABEL (label_34)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (loop_30)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_50_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_35;
  Rvl = (current_block [OBJECT_50_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_46;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_46;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_46;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd15.pObj) = (& ((Wrd22.pObj) [(Wrd12.Lng)]));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_45)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_50_3]);
  (Wrd62.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd62.Lng))))
    goto label_44;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd59.Obj));
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.Obj) == (Wrd39.Obj))
    goto label_43;

DEFLABEL (label_42)
  (Wrd40.Obj) = (current_block [OBJECT_50_5]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd50.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd50.Lng)))
    goto label_36;
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_4]), 2);

DEFLABEL (label_36)
  (Wrd44.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd44.Obj) == (Wrd46.Obj))
    goto label_38;
  (Wrd42.Obj) = (current_block [OBJECT_50_7]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd42.Obj) = (current_block [OBJECT_50_6]);

DEFLABEL (label_37)
DEFLABEL (label_41)
  Rsp = (& (Rsp [3]));
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;

DEFLABEL (label_39)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd56.Lng) = ((Wrd55.Lng) + 1L);
  (Wrd57.Obj) = (LONG_TO_FIXNUM (Wrd56.Lng));
  (* (--Rsp)) = (Wrd57.Obj);
  goto find_dup_15;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_43)
  Rsp = (& (Rsp [2]));
  goto label_39;

DEFLABEL (label_44)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_4]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_43;

DEFLABEL (label_46)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_50_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_39;

DEFLABEL (find_dup_31)
DEFLABEL (find_dup_15)
  INTERRUPT_CHECK (26, LABEL_50_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_47;
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd12.Lng) + 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_19;

DEFLABEL (label_47)
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_50;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_50;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_50;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd20.pObj) = (& ((Wrd26.pObj) [(Wrd17.Lng)]));
  (Wrd15.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_49)
  (Wrd36.Obj) = (Rsp [1]);
  if ((Wrd15.Obj) == (Wrd36.Obj))
    goto label_48;
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd39.Lng) + 1L);
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));
  (Rsp [0]) = (Wrd37.Obj);
  goto find_dup_15;

DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 2);

DEFLABEL (label_27)
  (Wrd15.Obj) = Rvl;
  goto label_49;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define ENVIRONMENT_LABEL_51_3 13
#define DEBUGGING_LABEL_51_2 12
#define OBJECT_51_0 11
#define EXECUTE_CACHE_51_7 7
#define EXECUTE_CACHE_51_6 9
#define FREE_REFERENCES_LABEL_51_0 6
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_51_4);
      goto guarantee_vector_of_unique_symbols_1;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_vector_of_unique_symbols_4)
DEFLABEL (guarantee_vector_of_unique_symbols_1)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_51_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define ENVIRONMENT_LABEL_52_3 11
#define DEBUGGING_LABEL_52_2 10
#define OBJECT_52_2 9
#define OBJECT_52_1 8
#define OBJECT_52_0 7
#define EXECUTE_CACHE_52_5 5
#define FREE_REFERENCES_LABEL_52_0 4
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
vector_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto error_not_vector_of_unique_symbols_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_vector_of_unique_symbols_5)
DEFLABEL (error_not_vector_of_unique_symbols_2)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_52_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_52_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_52_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5 3
#define LABEL_6 5
#define LABEL_7 7
#define ENVIRONMENT_LABEL_3 16
#define DEBUGGING_LABEL_2 15
#define PURIFICATION_ROOT 14
#define OBJECT_2 13
#define OBJECT_1 12
#define OBJECT_0 11
#define GLOBAL_EXECUTE_CACHE_4 9
#define FREE_REFERENCES_LABEL_0 8
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
vector_so_acaee4141e749d29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5);
      goto label_4;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto expression_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_1)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_6])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_5)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_4)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	0,
	1,
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
    if (counter > 52)
      goto label_3;
    blocks = (current_block [OBJECT_2]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_5])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_3)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_4]));

INVOKE_INTERFACE_TARGET_4
}

static const struct liarc_code_S arr_decl_vector_so_acaee4141e749d29 [52] =
  {
    { "vector_so_code_1", 1, vector_so_code_1 },
    { "vector_so_code_2", 1, vector_so_code_2 },
    { "vector_so_code_3", 1, vector_so_code_3 },
    { "vector_so_code_4", 1, vector_so_code_4 },
    { "vector_so_code_5", 1, vector_so_code_5 },
    { "vector_so_code_6", 1, vector_so_code_6 },
    { "vector_so_code_7", 1, vector_so_code_7 },
    { "vector_so_code_8", 1, vector_so_code_8 },
    { "vector_so_code_9", 1, vector_so_code_9 },
    { "vector_so_code_10", 1, vector_so_code_10 },
    { "vector_so_code_11", 1, vector_so_code_11 },
    { "vector_so_code_12", 1, vector_so_code_12 },
    { "vector_so_code_13", 6, vector_so_code_13 },
    { "vector_so_code_14", 2, vector_so_code_14 },
    { "vector_so_code_15", 3, vector_so_code_15 },
    { "vector_so_code_16", 3, vector_so_code_16 },
    { "vector_so_code_17", 9, vector_so_code_17 },
    { "vector_so_code_18", 1, vector_so_code_18 },
    { "vector_so_code_19", 8, vector_so_code_19 },
    { "vector_so_code_20", 3, vector_so_code_20 },
    { "vector_so_code_21", 5, vector_so_code_21 },
    { "vector_so_code_22", 15, vector_so_code_22 },
    { "vector_so_code_23", 8, vector_so_code_23 },
    { "vector_so_code_24", 5, vector_so_code_24 },
    { "vector_so_code_25", 15, vector_so_code_25 },
    { "vector_so_code_26", 13, vector_so_code_26 },
    { "vector_so_code_27", 1, vector_so_code_27 },
    { "vector_so_code_28", 10, vector_so_code_28 },
    { "vector_so_code_29", 10, vector_so_code_29 },
    { "vector_so_code_30", 10, vector_so_code_30 },
    { "vector_so_code_31", 10, vector_so_code_31 },
    { "vector_so_code_32", 3, vector_so_code_32 },
    { "vector_so_code_33", 3, vector_so_code_33 },
    { "vector_so_code_34", 8, vector_so_code_34 },
    { "vector_so_code_35", 2, vector_so_code_35 },
    { "vector_so_code_36", 2, vector_so_code_36 },
    { "vector_so_code_37", 2, vector_so_code_37 },
    { "vector_so_code_38", 2, vector_so_code_38 },
    { "vector_so_code_39", 2, vector_so_code_39 },
    { "vector_so_code_40", 2, vector_so_code_40 },
    { "vector_so_code_41", 2, vector_so_code_41 },
    { "vector_so_code_42", 2, vector_so_code_42 },
    { "vector_so_code_43", 3, vector_so_code_43 },
    { "vector_so_code_44", 10, vector_so_code_44 },
    { "vector_so_code_45", 3, vector_so_code_45 },
    { "vector_so_code_46", 8, vector_so_code_46 },
    { "vector_so_code_47", 3, vector_so_code_47 },
    { "vector_so_code_48", 5, vector_so_code_48 },
    { "vector_so_code_49", 2, vector_so_code_49 },
    { "vector_so_code_50", 8, vector_so_code_50 },
    { "vector_so_code_51", 2, vector_so_code_51 },
    { "vector_so_code_52", 1, vector_so_code_52 }
  };

int
decl_vector_so_acaee4141e749d29 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_vector_so_acaee4141e749d29);
  return (0);
}

DECLARE_COMPILED_CODE ("vector.so", 3, decl_vector_so_acaee4141e749d29, vector_so_acaee4141e749d29)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_vector_so_data_acaee4141e749d29 [4786] =
  "\x53\x58\xc1\x0b\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\x22\x29\x21"
  "\x9d\x2b\xb9\x1d\xb0\x82\x88\xc2\xba\x22\x29\x21\x9d\x2b\xbb\x1d"
  "\xb0\x83\x88\xc3\x1d\x22\x29\x21\x9e\x2b\xbc\x1d\xb0\x84\x88\xc3"
  "\xbd\x22\x29\x21\x9d\x2b\xbe\x1d\xb0\x85\x88\xc4\xbf\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x86\x88\xc5\x1c\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc5\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x1c\x1d\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x0c\x1c\x1d\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0d\x1c\xc2\x06\x1d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0d\x1c\xb5\x1b\x80\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x02\x88\x1b\x0d\x1c\xb7\x1b"
  "\x80\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0"
  "\x02\x88\x1b\x80\x1b\x1b\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x28\x1b\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb2\x1b\x80\x0d\xba\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x80\x1b\x0d\x1c\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x0d\x1c\xc1\x1b\xc1\x80\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x80\x1b\x0c\x1d\x0d\x1c\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\x1c\x1b\x1b\x07\x80\x1d\x1b\x1b\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x80\x1d\x1b\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x1b\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1b\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x1b\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1b\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b\x80\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b"
  "\x80\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x0d\x1c\x80\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b\x80\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b\x81\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c"
  "\x1b\x82\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x0d\x1c\x1b\x83\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b\x84\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b\x85\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c"
  "\x1b\x86\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x0d\x1c\x1b\x02\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b\x80\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x07\x1b\x1b"
  "\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b\x80\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x07\x1b\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b\x80\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x06\x07\x85\xc2\x02\x1b\x80\x1b\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22"
  "\x29\x21\x17\x2b\x1c\x17\xb8\x88\xb0\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\xb7\x2a\xb5\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x20\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\xb4\x2a\xb3\x2a"
  "\xb1\x2a\x17\x1b\x0d\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x0d"
  "\x1b\x1b\x1b\x1b\xb2\x0d\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x76\x65\x63\x74\x6f\x72\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x04\x04\x83"
  "\x04\x03\x02\x16\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6d\x61"
  "\x6b\x65\x2d\x6f\x62\x6a\x65\x63\x74\x05\x04\x84\x06\x03\x02\x16"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x73\x65\x74\x21\x02\x06\x04\x85\x08\x03\x02\x10\x73\x75\x62"
  "\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73\x74\x07\x04\x85\x08"
  "\x03\x02\x10\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d\x66\x69\x6c"
  "\x6c\x21\x08\x04\x86\x0a\x03\x09\x02\x15\x73\x75\x62\x76\x65\x63"
  "\x74\x6f\x72\x2d\x6d\x6f\x76\x65\x2d\x6c\x65\x66\x74\x21\x0a\x09"
  "\x04\x87\x0c\x03\x0b\x02\x08\x16\x73\x75\x62\x76\x65\x63\x74\x6f"
  "\x72\x2d\x6d\x6f\x76\x65\x2d\x72\x69\x67\x68\x74\x21\x0c\x0a\x04"
  "\x87\x0c\x03\x0d\x02\x09\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x0e\x0b\x04\x83\x04\x03\x0f\x02\x0a\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x10\x0c\x04\x84\x06\x03\x11\x02"
  "\x0b\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x12\x02\x0d"
  "\x04\x85\x08\x03\x13\x02\x0c\x0e\x04\x83\x04\x03\x14\x02\x0d\x07"
  "\x76\x65\x63\x74\x6f\x72\x15\x02\x05\x1a\x65\x72\x72\x6f\x72\x3a"
  "\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d"
  "\x65\x6e\x74\x16\x02\x0f\x04\x84\x06\x03\x0b\x17\x02\x0e\x15\x0d"
  "\x76\x65\x63\x74\x6f\x72\x20\x69\x6e\x64\x65\x78\x18\x02\x0e\x04"
  "\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x19\x05\x16\x03\x15\x0e\x81"
  "\x89\x02\x14\x0c\x86\x0a\x13\x0a\x81\x89\x02\x12\x08\x81\x89\x02"
  "\x11\x06\x81\x89\x02\x10\x04\x81\x89\x02\x0d\x19\x1a\x02\x0f\x0d"
  "\x76\x65\x63\x74\x6f\x72\x20\x69\x6e\x64\x65\x78\x0c\x6d\x61\x6b"
  "\x65\x2d\x76\x65\x63\x74\x6f\x72\x1b\x0c\x76\x65\x63\x74\x6f\x72"
  "\x2d\x63\x6f\x6e\x73\x08\x05\x16\x02\x17\x06\x84\x04\x16\x04\x81"
  "\x85\x02\x05\x10\x1c\x02\x10\x15\x0d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x3e\x6c\x69\x73\x74\x1d\x0e\x05\x16\x02\x1a\x08\x81\x87\x02\x19"
  "\x06\x83\x04\x18\x04\x81\x83\x02\x07\x12\x02\x11\x15\x0d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x66\x69\x6c\x6c\x21\x1e\x0e\x05\x16\x02\x1d"
  "\x08\x81\x89\x02\x1c\x06\x84\x06\x1b\x04\x81\x85\x02\x07\x12\x02"
  "\x12\x0c\x15\x18\x0e\x0a\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x1f"
  "\x04\x19\x03\x1b\x05\x16\x04\x26\x14\x81\x89\x02\x25\x12\x81\x87"
  "\x02\x24\x10\x81\x87\x02\x23\x0e\x85\x08\x22\x0c\x81\x87\x02\x21"
  "\x0a\x81\x87\x02\x20\x08\x81\x87\x02\x1f\x06\x81\x87\x02\x1e\x04"
  "\x81\x87\x02\x13\x23\x20\x02\x13\x05\x1f\x02\x27\x04\x84\x06\x03"
  "\x0a\x21\x02\x14\x15\x18\x0e\x0d\x76\x65\x63\x74\x6f\x72\x2d\x68"
  "\x65\x61\x64\x21\x04\x19\x05\x16\x03\x2f\x12\x81\x85\x02\x2e\x10"
  "\x81\x85\x02\x2d\x0e\x84\x06\x2c\x0c\x81\x85\x02\x2b\x0a\x81\x85"
  "\x02\x2a\x08\x81\x85\x02\x29\x06\x81\x85\x02\x28\x04\x81\x85\x02"
  "\x11\x1f\x22\x02\x15\x15\x0c\x76\x65\x63\x74\x6f\x72\x2d\x74\x61"
  "\x69\x6c\x23\x0e\x05\x1f\x05\x16\x03\x32\x08\x81\x87\x02\x31\x06"
  "\x84\x06\x30\x04\x81\x85\x02\x07\x12\x24\x02\x16\x0c\x15\x0c\x76"
  "\x65\x63\x74\x6f\x72\x2d\x63\x6f\x70\x79\x25\x0e\x03\x1b\x05\x16"
  "\x03\x37\x0c\x81\x87\x02\x36\x0a\x81\x85\x02\x35\x08\x81\x83\x02"
  "\x34\x06\x83\x04\x33\x04\x81\x83\x02\x0b\x18\x26\x02\x17\x0c\x15"
  "\x0e\x76\x65\x63\x74\x6f\x72\x2d\x61\x70\x70\x65\x6e\x64\x27\x04"
  "\x63\x64\x72\x0e\x04\x63\x61\x72\x05\x16\x03\x1b\x03\x46\x20\x81"
  "\x8b\x02\x45\x1e\x81\x8b\x02\x44\x1c\x81\x95\x02\x43\x1a\x81\x89"
  "\x02\x42\x18\x81\x89\x02\x41\x16\x81\x89\x02\x40\x14\x81\x8f\x02"
  "\x3f\x12\x81\x89\x02\x3e\x10\x81\x89\x02\x3d\x0e\x81\x89\x02\x3c"
  "\x0c\x81\x89\x02\x3b\x0a\x81\x89\x02\x3a\x08\x81\x89\x02\x39\x06"
  "\x81\x83\x02\x38\x04\xff\x03\x1f\x2e\x28\x02\x18\x0c\x15\x0e\x76"
  "\x65\x63\x74\x6f\x72\x20\x6c\x65\x6e\x67\x74\x68\x08\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x67\x72\x6f\x77\x0c\x0e\x04\x19\x04\x1b\x05"
  "\x16\x04\x4e\x12\x81\x89\x02\x4d\x10\x81\x8f\x02\x4c\x0e\x81\x87"
  "\x02\x4b\x0c\x81\x87\x02\x4a\x0a\x85\x06\x49\x08\x81\x87\x02\x48"
  "\x06\x81\x87\x02\x47\x04\x81\x87\x02\x11\x22\x29\x02\x19\x12\x03"
  "\x1b\x02\x53\x0c\x81\x89\x02\x52\x0a\x81\x89\x02\x51\x08\x81\x89"
  "\x02\x50\x06\x81\x85\x02\x4f\x04\x84\x06\x0b\x13\x2a\x02\x1a\x06"
  "\x61\x70\x70\x6c\x79\x2b\x10\x12\x02\x0e\x15\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x6d\x61\x70\x12\x04\x09\x66\x6f\x72\x2d\x65\x61\x63"
  "\x68\x2c\x05\x16\x03\x1b\x04\x19\x04\x04\x6d\x61\x70\x2d\x06\x62"
  "\x20\x81\x85\x02\x61\x1e\x81\x93\x02\x60\x1c\x81\x91\x02\x5f\x1a"
  "\x81\x8f\x02\x5e\x18\x81\x8f\x02\x5d\x16\x81\x8d\x02\x5c\x14\x81"
  "\x89\x02\x5b\x12\x81\x85\x02\x5a\x10\x81\x85\x02\x59\x0e\x81\x89"
  "\x02\x58\x0c\x83\x04\x57\x0a\x81\x87\x02\x56\x08\x81\x87\x02\x55"
  "\x06\xfd\x07\x54\x04\x81\x87\x02\x1f\x36\x2e\x02\x1b\x2b\x10\x02"
  "\x0e\x15\x10\x76\x65\x63\x74\x6f\x72\x2d\x66\x6f\x72\x2d\x65\x61"
  "\x63\x68\x2b\x04\x2c\x05\x16\x04\x19\x04\x2d\x05\x6f\x1c\x81\x85"
  "\x02\x6e\x1a\x81\x8f\x02\x6d\x18\x81\x8d\x02\x6c\x16\x81\x8b\x02"
  "\x6b\x14\x81\x8b\x02\x6a\x12\x81\x85\x02\x69\x10\x81\x85\x02\x68"
  "\x0e\x81\x89\x02\x67\x0c\x83\x04\x66\x0a\x81\x87\x02\x65\x08\x81"
  "\x87\x02\x64\x06\xfd\x07\x63\x04\x81\x87\x02\x1b\x2e\x2d\x02\x1c"
  "\x04\x2b\x02\x70\x04\x84\x06\x03\x2c\x02\x1d\x10\x15\x18\x0e\x1c"
  "\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d\x66\x69\x6e\x64\x2d\x6e"
  "\x65\x78\x74\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x2f\x04\x19\x05\x16"
  "\x04\x05\x65\x71\x76\x3f\x30\x04\x7a\x16\x81\x8b\x02\x79\x14\x81"
  "\x8f\x02\x78\x12\x81\x8b\x02\x77\x10\x81\x89\x02\x76\x0e\x86\x0a"
  "\x75\x0c\x81\x89\x02\x74\x0a\x81\x89\x02\x73\x08\x81\x89\x02\x72"
  "\x06\x81\x89\x02\x71\x04\x81\x89\x02\x15\x24\x31\x02\x1e\x10\x15"
  "\x18\x0e\x20\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d\x66\x69\x6e"
  "\x64\x2d\x6e\x65\x78\x74\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x6e"
  "\x6f\x74\x32\x04\x19\x05\x16\x04\x30\x04\x84\x01\x16\x81\x8b\x02"
  "\x83\x01\x14\x81\x8f\x02\x82\x01\x12\x81\x8b\x02\x81\x01\x10\x81"
  "\x89\x02\x80\x01\x0e\x86\x0a\x7f\x0c\x81\x89\x02\x7e\x0a\x81\x89"
  "\x02\x7d\x08\x81\x89\x02\x7c\x06\x81\x89\x02\x7b\x04\x81\x89\x02"
  "\x15\x24\x33\x02\x1f\x10\x15\x18\x0e\x20\x73\x75\x62\x76\x65\x63"
  "\x74\x6f\x72\x2d\x66\x69\x6e\x64\x2d\x70\x72\x65\x76\x69\x6f\x75"
  "\x73\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x34\x04\x19\x05\x16\x04\x30"
  "\x04\x8e\x01\x16\x81\x8b\x02\x8d\x01\x14\x81\x8f\x02\x8c\x01\x12"
  "\x81\x8b\x02\x8b\x01\x10\x81\x89\x02\x8a\x01\x0e\x86\x0a\x89\x01"
  "\x0c\x81\x89\x02\x88\x01\x0a\x81\x89\x02\x87\x01\x08\x81\x89\x02"
  "\x86\x01\x06\x81\x89\x02\x85\x01\x04\x81\x89\x02\x15\x24\x35\x02"
  "\x20\x10\x15\x18\x0e\x24\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d"
  "\x66\x69\x6e\x64\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x65\x6c"
  "\x65\x6d\x65\x6e\x74\x2d\x6e\x6f\x74\x36\x04\x19\x05\x16\x04\x30"
  "\x04\x98\x01\x16\x81\x8b\x02\x97\x01\x14\x81\x8f\x02\x96\x01\x12"
  "\x81\x8b\x02\x95\x01\x10\x81\x89\x02\x94\x01\x0e\x86\x0a\x93\x01"
  "\x0c\x81\x89\x02\x92\x01\x0a\x81\x89\x02\x91\x01\x08\x81\x89\x02"
  "\x90\x01\x06\x81\x89\x02\x8f\x01\x04\x81\x89\x02\x15\x24\x37\x02"
  "\x21\x15\x19\x76\x65\x63\x74\x6f\x72\x2d\x66\x69\x6e\x64\x2d\x6e"
  "\x65\x78\x74\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x38\x0e\x06\x2f\x05"
  "\x16\x03\x9b\x01\x08\x81\x89\x02\x9a\x01\x06\x84\x06\x99\x01\x04"
  "\x81\x85\x02\x07\x13\x39\x02\x22\x15\x1d\x76\x65\x63\x74\x6f\x72"
  "\x2d\x66\x69\x6e\x64\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x65"
  "\x6c\x65\x6d\x65\x6e\x74\x3a\x0e\x06\x34\x05\x16\x03\x9e\x01\x08"
  "\x81\x89\x02\x9d\x01\x06\x84\x06\x9c\x01\x04\x81\x85\x02\x07\x13"
  "\x3b\x02\x23\x10\x15\x15\x76\x65\x63\x74\x6f\x72\x2d\x62\x69\x6e"
  "\x61\x72\x79\x2d\x73\x65\x61\x72\x63\x68\x3c\x0e\x05\x16\x02\xa6"
  "\x01\x12\x81\x93\x02\xa5\x01\x10\x81\x93\x02\xa4\x01\x0e\x81\x91"
  "\x02\xa3\x01\x0c\x81\x8f\x02\xa2\x01\x0a\x81\x8d\x02\xa1\x01\x08"
  "\x81\x89\x02\xa0\x01\x06\x86\x0a\x9f\x01\x04\x81\x89\x02\x11\x1c"
  "\x3d\x02\x24\x15\x0d\x76\x65\x63\x74\x6f\x72\x2d\x66\x69\x72\x73"
  "\x74\x3e\x10\x05\x16\x02\xa8\x01\x06\x83\x04\xa7\x01\x04\x81\x83"
  "\x02\x05\x0f\x3f\x02\x25\x15\x0e\x76\x65\x63\x74\x6f\x72\x2d\x73"
  "\x65\x63\x6f\x6e\x64\x40\x10\x05\x16\x02\xaa\x01\x06\x83\x04\xa9"
  "\x01\x04\x81\x83\x02\x05\x0f\x41\x02\x26\x15\x0d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x74\x68\x69\x72\x64\x42\x10\x05\x16\x02\xac\x01\x06"
  "\x83\x04\xab\x01\x04\x81\x83\x02\x05\x0f\x43\x02\x27\x15\x0e\x76"
  "\x65\x63\x74\x6f\x72\x2d\x66\x6f\x75\x72\x74\x68\x44\x10\x05\x16"
  "\x02\xae\x01\x06\x83\x04\xad\x01\x04\x81\x83\x02\x05\x0f\x45\x02"
  "\x28\x15\x0d\x76\x65\x63\x74\x6f\x72\x2d\x66\x69\x66\x74\x68\x46"
  "\x10\x05\x16\x02\xb0\x01\x06\x83\x04\xaf\x01\x04\x81\x83\x02\x05"
  "\x0f\x47\x02\x29\x15\x0d\x76\x65\x63\x74\x6f\x72\x2d\x73\x69\x78"
  "\x74\x68\x48\x10\x05\x16\x02\xb2\x01\x06\x83\x04\xb1\x01\x04\x81"
  "\x83\x02\x05\x0f\x49\x02\x2a\x15\x0f\x76\x65\x63\x74\x6f\x72\x2d"
  "\x73\x65\x76\x65\x6e\x74\x68\x4a\x10\x05\x16\x02\xb4\x01\x06\x83"
  "\x04\xb3\x01\x04\x81\x83\x02\x05\x0f\x4b\x02\x2b\x15\x0e\x76\x65"
  "\x63\x74\x6f\x72\x2d\x65\x69\x67\x68\x74\x68\x4c\x10\x08\x05\x16"
  "\x02\xb6\x01\x06\x83\x04\xb5\x01\x04\x81\x83\x02\x05\x0f\x4d\x02"
  "\x2c\x15\x0d\x76\x65\x63\x74\x6f\x72\x2d\x6d\x6f\x76\x65\x21\x4e"
  "\x0a\x0e\x05\x16\x02\xb9\x01\x08\x81\x85\x02\xb8\x01\x06\x84\x06"
  "\xb7\x01\x04\x81\x85\x02\x07\x12\x0a\x02\x2d\x10\x15\x18\x0e\x12"
  "\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d\x66\x69\x6c\x6c\x65\x64"
  "\x3f\x4f\x04\x19\x05\x16\x04\x30\x04\xc3\x01\x16\x81\x8b\x02\xc2"
  "\x01\x14\x81\x8f\x02\xc1\x01\x12\x81\x8b\x02\xc0\x01\x10\x81\x89"
  "\x02\xbf\x01\x0e\x86\x0a\xbe\x01\x0c\x81\x89\x02\xbd\x01\x0a\x81"
  "\x89\x02\xbc\x01\x08\x81\x89\x02\xbb\x01\x06\x81\x89\x02\xba\x01"
  "\x04\x81\x89\x02\x15\x25\x30\x02\x2e\x15\x0f\x76\x65\x63\x74\x6f"
  "\x72\x2d\x66\x69\x6c\x6c\x65\x64\x3f\x50\x0e\x06\x4f\x05\x16\x03"
  "\xc6\x01\x08\x81\x89\x02\xc5\x01\x06\x84\x06\xc4\x01\x04\x81\x85"
  "\x02\x07\x13\x51\x02\x2f\x15\x18\x10\x0e\x13\x73\x75\x62\x76\x65"
  "\x63\x74\x6f\x72\x2d\x75\x6e\x69\x66\x6f\x72\x6d\x3f\x18\x04\x19"
  "\x06\x4f\x05\x16\x04\xce\x01\x12\x81\x89\x02\xcd\x01\x10\x81\x87"
  "\x02\xcc\x01\x0e\x85\x08\xcb\x01\x0c\x81\x87\x02\xca\x01\x0a\x81"
  "\x87\x02\xc9\x01\x08\x81\x87\x02\xc8\x01\x06\x81\x87\x02\xc7\x01"
  "\x04\x81\x87\x02\x11\x21\x19\x02\x30\x15\x10\x76\x65\x63\x74\x6f"
  "\x72\x2d\x75\x6e\x69\x66\x6f\x72\x6d\x3f\x15\x0e\x05\x18\x05\x16"
  "\x03\xd1\x01\x08\x81\x87\x02\xd0\x01\x06\x83\x04\xcf\x01\x04\x81"
  "\x83\x02\x07\x13\x52\x02\x31\x10\x0e\xd6\x01\x0c\x81\x89\x02\xd5"
  "\x01\x0a\x81\x8b\x02\xd4\x01\x08\x81\x89\x02\xd3\x01\x06\x81\x85"
  "\x02\xd2\x01\x04\x84\x06\x0b\x12\x53\x02\x32\x02\x04\x10\x76\x65"
  "\x63\x74\x6f\x72\x2d\x6f\x66\x2d\x74\x79\x70\x65\x3f\x54\x05\x16"
  "\x03\xd8\x01\x06\x81\x89\x02\xd7\x01\x04\x86\x0a\x05\x0e\x55\x02"
  "\x33\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x10"
  "\x0e\xe0\x01\x12\x81\x8b\x02\xdf\x01\x10\x81\x8b\x02\xde\x01\x0e"
  "\x81\x83\x02\xdd\x01\x0c\x81\x87\x02\xdc\x01\x0a\x81\x87\x02\xdb"
  "\x01\x08\x81\x89\x02\xda\x01\x06\x81\x83\x02\xd9\x01\x04\x83\x04"
  "\x11\x1c\x10\x02\x34\x02\x03\x1a\x76\x65\x63\x74\x6f\x72\x2d\x6f"
  "\x66\x2d\x75\x6e\x69\x71\x75\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73"
  "\x3f\x0e\x04\x23\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x6f\x66\x2d\x75\x6e\x69\x71\x75\x65\x2d\x73"
  "\x79\x6d\x62\x6f\x6c\x73\x56\x03\xe2\x01\x06\x81\x85\x02\xe1\x01"
  "\x04\x84\x04\x05\x0e\x57\x02\x35\x08\x19\x76\x65\x63\x74\x6f\x72"
  "\x20\x6f\x66\x20\x75\x6e\x69\x71\x75\x65\x20\x73\x79\x6d\x62\x6f"
  "\x6c\x73\x05\x16\x02\xe3\x01\x04\x84\x04\x03\x0c\x16\x35\x16\x04"
  "\x57\x04\x10\x04\x55\x04\x53\x04\x52\x06\x19\x0e\x51\x06\x30\x0e"
  "\x0a\x06\x4d\x06\x4b\x06\x49\x06\x47\x06\x45\x06\x43\x06\x41\x06"
  "\x3f\x06\x3d\x06\x3b\x06\x39\x06\x37\x0e\x35\x0e\x33\x0e\x31\x0e"
  "\x2c\x04\x2d\x06\x2e\x06\x2a\x04\x29\x0a\x28\x04\x26\x06\x24\x06"
  "\x22\x0e\x21\x04\x20\x0e\x06\x06\x1c\x06\x1a\x0c\x17\x04\x14\x04"
  "\x13\x04\x11\x04\x0f\x04\x07\x76\x65\x63\x74\x6f\x72\x0d\x04\x0b"
  "\x04\x09\x04\x04\x04\x04\x04\x36\x56\x23\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x6f\x66\x2d\x75\x6e"
  "\x69\x71\x75\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x0e\x19\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x6f"
  "\x66\x2d\x74\x79\x70\x65\x54\x15\x18\x50\x4f\x4e\x4c\x4a\x48\x46"
  "\x44\x42\x40\x3e\x3c\x3a\x38\x36\x34\x32\x2f\x18\x66\x6f\x72\x2d"
  "\x65\x61\x63\x68\x2d\x76\x65\x63\x74\x6f\x72\x2d\x65\x6c\x65\x6d"
  "\x65\x6e\x74\x2b\x12\x18\x6d\x61\x6b\x65\x2d\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x0c\x27\x25"
  "\x23\x0c\x76\x65\x63\x74\x6f\x72\x2d\x68\x65\x61\x64\x1f\x1e\x1d"
  "\x1b\x14\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x75\x62\x76"
  "\x65\x63\x74\x6f\x72\x11\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x76\x65\x63\x74\x6f\x72\x08\x76\x65\x63\x74\x6f\x72\x3f\x0c\x76"
  "\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x0b\x76\x65\x63\x74\x6f"
  "\x72\x2d\x72\x65\x66\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x07\x76\x65\x63\x74\x6f\x72\x16\x73\x75\x62\x76\x65"
  "\x63\x74\x6f\x72\x2d\x6d\x6f\x76\x65\x2d\x72\x69\x67\x68\x74\x21"
  "\x15\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d\x6d\x6f\x76\x65\x2d"
  "\x6c\x65\x66\x74\x21\x10\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d"
  "\x66\x69\x6c\x6c\x21\x10\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d"
  "\x3e\x6c\x69\x73\x74\x16\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x21\x16\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2d\x6d\x61\x6b\x65\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x36\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02"
  "\x07\x11";

SCHEME_OBJECT *
vector_so_data_acaee4141e749d29 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_vector_so_data_acaee4141e749d29 [0]))), (sizeof (prog_vector_so_data_acaee4141e749d29)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("vector.so", vector_so_data_acaee4141e749d29)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("vector.so", "0547ca1db8de881d")
