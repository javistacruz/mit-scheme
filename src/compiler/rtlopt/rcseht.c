/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:24-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 9
#define DEBUGGING_LABEL_1_2 8
#define OBJECT_1_0 7
#define EXECUTE_CACHE_1_5 5
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto make_hash_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_hash_table_3)
DEFLABEL (make_hash_table_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 10
#define DEBUGGING_LABEL_2_2 9
#define OBJECT_2_0 8
#define FREE_REFERENCE_2_0 7
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_2_4);
      goto hash_table_size_0;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_size_4)
DEFLABEL (hash_table_size_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_5;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  Rvl = (MAKE_OBJECT (26, (Wrd15.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 10
#define DEBUGGING_LABEL_3_2 9
#define OBJECT_3_0 8
#define FREE_REFERENCE_3_0 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_3_4);
      goto hash_table_ref_0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_ref_4)
DEFLABEL (hash_table_ref_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd27.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 2);

DEFLABEL (label_6)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_5;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_5;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd16.pObj) = (& ((Wrd23.pObj) [(Wrd13.Lng)]));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 11
#define DEBUGGING_LABEL_4_2 10
#define OBJECT_4_1 9
#define OBJECT_4_0 8
#define FREE_REFERENCE_4_0 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_4_4);
      goto hash_table_setB_0;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_setB_4)
DEFLABEL (hash_table_setB_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd28.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 3);

DEFLABEL (label_6)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_5;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_5;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd16.pObj) = (& ((Wrd24.pObj) [(Wrd13.Lng)]));
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [1]) = (Wrd17.Obj);
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_7;

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
rcseht_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto element_expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (element_expression_3)
DEFLABEL (element_expression_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
rcseht_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto element_cost_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (element_cost_3)
DEFLABEL (element_cost_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
rcseht_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto element_in_memoryP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (element_in_memoryP_3)
DEFLABEL (element_in_memoryP_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
rcseht_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto element_next_hash_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (element_next_hash_3)
DEFLABEL (element_next_hash_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
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
rcseht_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto element_previous_hash_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (element_previous_hash_3)
DEFLABEL (element_previous_hash_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto element_next_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (element_next_value_3)
DEFLABEL (element_next_value_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
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
rcseht_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto element_previous_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (element_previous_value_3)
DEFLABEL (element_previous_value_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
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
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto element_first_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (element_first_value_3)
DEFLABEL (element_first_value_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

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

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 8
#define DEBUGGING_LABEL_13_2 7
#define OBJECT_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto set_element_costB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_element_costB_3)
DEFLABEL (set_element_costB_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [3]));
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
rcseht_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_element_in_memoryPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_element_in_memoryPB_3)
DEFLABEL (set_element_in_memoryPB_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 8
#define DEBUGGING_LABEL_15_2 7
#define OBJECT_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto set_element_next_hashB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_element_next_hashB_3)
DEFLABEL (set_element_next_hashB_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_15_1]);
  Rsp = (& (Rsp [3]));
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
rcseht_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_element_previous_hashB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_element_previous_hashB_3)
DEFLABEL (set_element_previous_hashB_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_16_1]);
  Rsp = (& (Rsp [3]));
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
rcseht_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_element_next_valueB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_element_next_valueB_3)
DEFLABEL (set_element_next_valueB_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
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
rcseht_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_element_previous_valueB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_element_previous_valueB_3)
DEFLABEL (set_element_previous_valueB_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_18_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 8
#define DEBUGGING_LABEL_19_2 7
#define OBJECT_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto set_element_first_valueB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_element_first_valueB_3)
DEFLABEL (set_element_first_valueB_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_19_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define ENVIRONMENT_LABEL_20_3 17
#define DEBUGGING_LABEL_20_2 16
#define OBJECT_20_3 15
#define OBJECT_20_2 14
#define OBJECT_20_1 13
#define OBJECT_20_0 12
#define FREE_REFERENCE_20_0 11
#define FREE_REFERENCES_LABEL_20_0 10
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto elementP_4;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (elementP_10)
DEFLABEL (elementP_4)
  INTERRUPT_CHECK (26, LABEL_20_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
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
  Rvl = (current_block [OBJECT_20_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_20_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_8 11
#define LABEL_21_9 13
#define LABEL_21_10 15
#define ENVIRONMENT_LABEL_21_3 27
#define DEBUGGING_LABEL_21_2 26
#define OBJECT_21_4 25
#define OBJECT_21_3 24
#define OBJECT_21_2 23
#define OBJECT_21_1 22
#define OBJECT_21_0 21
#define EXECUTE_CACHE_21_11 17
#define FREE_REFERENCE_21_0 20
#define FREE_REFERENCES_LABEL_21_0 16
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_21_4);
      goto hash_table_lookup_9;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_21_9);
      goto loop_7;

    case 6:
      current_block = (Rpc - LABEL_21_10);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_lookup_16)
DEFLABEL (hash_table_lookup_9)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_21;
  Wrd6 = Wrd10;

DEFLABEL (label_20)
  Wrd5 = Wrd6;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_19;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_19;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_19;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd15.pObj) = (& ((Wrd21.pObj) [(Wrd13.Lng)]));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_18)
  goto loop_7;

DEFLABEL (label_19)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_20;

DEFLABEL (loop_17)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_21_9);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_26;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_26;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_25)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (Rsp [0]);
  if ((Wrd26.Obj) == (Wrd27.Obj))
    goto label_22;
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_21_4]);
  (Rsp [2]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_24)
  Rvl = (Rsp [0]);

DEFLABEL (label_23)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_21_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_23;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_29;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd46.Lng))))
    goto label_29;
  (Wrd38.Obj) = ((Wrd44.pObj) [5]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd38.Obj);
  goto loop_7;

DEFLABEL (label_29)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_21_1]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_14)
  (Wrd38.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_9 7
#define LABEL_22_10 9
#define LABEL_22_11 11
#define LABEL_22_12 13
#define LABEL_22_13 15
#define LABEL_22_14 17
#define LABEL_22_15 19
#define LABEL_22_16 21
#define LABEL_22_17 23
#define LABEL_22_18 25
#define LABEL_22_19 27
#define LABEL_22_20 29
#define LABEL_22_21 31
#define LABEL_22_22 33
#define LABEL_22_23 35
#define LABEL_22_24 37
#define LABEL_22_25 39
#define LABEL_22_26 41
#define LABEL_22_27 43
#define LABEL_22_7 45
#define LABEL_22_28 47
#define LABEL_22_29 49
#define LABEL_22_30 51
#define LABEL_22_31 53
#define LABEL_22_32 55
#define LABEL_22_33 57
#define LABEL_22_34 59
#define LABEL_22_35 61
#define LABEL_22_36 63
#define LABEL_22_37 65
#define LABEL_22_38 67
#define LABEL_22_39 69
#define LABEL_22_40 71
#define LABEL_22_41 73
#define LABEL_22_42 75
#define LABEL_22_43 77
#define LABEL_22_44 79
#define LABEL_22_45 81
#define ENVIRONMENT_LABEL_22_3 103
#define DEBUGGING_LABEL_22_2 102
#define OBJECT_22_12 101
#define OBJECT_22_11 100
#define OBJECT_22_10 99
#define OBJECT_22_9 98
#define OBJECT_22_8 97
#define OBJECT_22_7 96
#define OBJECT_22_6 95
#define OBJECT_22_5 94
#define OBJECT_22_4 93
#define OBJECT_22_3 92
#define OBJECT_22_2 91
#define OBJECT_22_1 90
#define OBJECT_22_0 89
#define EXECUTE_CACHE_22_8 83
#define EXECUTE_CACHE_22_6 85
#define FREE_REFERENCE_22_0 88
#define FREE_REFERENCES_LABEL_22_0 82
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd177;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd208;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd194;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd198;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd105;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd102;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd169;
  machine_word Wrd163;
  machine_word Wrd164;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd147;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd145;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd98;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd75;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd50;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd231;
  machine_word Wrd227;
  machine_word Wrd226;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd48;
  machine_word Wrd250;
  machine_word Wrd247;
  machine_word Wrd246;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd233;
  machine_word Wrd243;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd244;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd259;
  machine_word Wrd258;
  machine_word Wrd257;
  machine_word Wrd261;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd279;
  machine_word Wrd276;
  machine_word Wrd275;
  machine_word Wrd274;
  machine_word Wrd265;
  machine_word Wrd271;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd273;
  machine_word Wrd272;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd29;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd296;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd291;
  machine_word Wrd282;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd286;
  machine_word Wrd290;
  machine_word Wrd412;
  machine_word Wrd411;
  machine_word Wrd410;
  machine_word Wrd414;
  machine_word Wrd402;
  machine_word Wrd401;
  machine_word Wrd400;
  machine_word Wrd431;
  machine_word Wrd428;
  machine_word Wrd427;
  machine_word Wrd426;
  machine_word Wrd417;
  machine_word Wrd423;
  machine_word Wrd422;
  machine_word Wrd421;
  machine_word Wrd425;
  machine_word Wrd424;
  machine_word Wrd448;
  machine_word Wrd445;
  machine_word Wrd444;
  machine_word Wrd443;
  machine_word Wrd434;
  machine_word Wrd440;
  machine_word Wrd439;
  machine_word Wrd438;
  machine_word Wrd442;
  machine_word Wrd441;
  machine_word Wrd465;
  machine_word Wrd462;
  machine_word Wrd461;
  machine_word Wrd460;
  machine_word Wrd451;
  machine_word Wrd457;
  machine_word Wrd456;
  machine_word Wrd455;
  machine_word Wrd459;
  machine_word Wrd458;
  machine_word Wrd365;
  machine_word Wrd362;
  machine_word Wrd361;
  machine_word Wrd350;
  machine_word Wrd358;
  machine_word Wrd357;
  machine_word Wrd356;
  machine_word Wrd360;
  machine_word Wrd349;
  machine_word Wrd398;
  machine_word Wrd392;
  machine_word Wrd393;
  machine_word Wrd394;
  machine_word Wrd391;
  machine_word Wrd388;
  machine_word Wrd387;
  machine_word Wrd376;
  machine_word Wrd384;
  machine_word Wrd383;
  machine_word Wrd382;
  machine_word Wrd386;
  machine_word Wrd385;
  machine_word Wrd374;
  machine_word Wrd366;
  machine_word Wrd368;
  machine_word Wrd370;
  machine_word Wrd369;
  machine_word Wrd347;
  machine_word Wrd343;
  machine_word Wrd342;
  machine_word Wrd341;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd336;
  machine_word Wrd335;
  machine_word Wrd324;
  machine_word Wrd332;
  machine_word Wrd331;
  machine_word Wrd330;
  machine_word Wrd334;
  machine_word Wrd333;
  machine_word Wrd322;
  machine_word Wrd318;
  machine_word Wrd469;
  machine_word Wrd468;
  machine_word Wrd317;
  machine_word Wrd316;
  machine_word Wrd315;
  machine_word Wrd314;
  machine_word Wrd311;
  machine_word Wrd310;
  machine_word Wrd299;
  machine_word Wrd307;
  machine_word Wrd306;
  machine_word Wrd305;
  machine_word Wrd309;
  machine_word Wrd482;
  machine_word Wrd481;
  machine_word Wrd480;
  machine_word Wrd484;
  machine_word Wrd472;
  machine_word Wrd471;
  machine_word Wrd470;
  machine_word Wrd501;
  machine_word Wrd498;
  machine_word Wrd497;
  machine_word Wrd496;
  machine_word Wrd487;
  machine_word Wrd493;
  machine_word Wrd492;
  machine_word Wrd491;
  machine_word Wrd495;
  machine_word Wrd494;
  machine_word Wrd518;
  machine_word Wrd514;
  machine_word Wrd513;
  machine_word Wrd510;
  machine_word Wrd509;
  machine_word Wrd508;
  machine_word Wrd512;
  machine_word Wrd511;
  machine_word Wrd297;
  machine_word Wrd536;
  machine_word Wrd533;
  machine_word Wrd532;
  machine_word Wrd521;
  machine_word Wrd529;
  machine_word Wrd528;
  machine_word Wrd527;
  machine_word Wrd531;
  machine_word Wrd530;
  machine_word Wrd553;
  machine_word Wrd550;
  machine_word Wrd549;
  machine_word Wrd548;
  machine_word Wrd539;
  machine_word Wrd545;
  machine_word Wrd544;
  machine_word Wrd543;
  machine_word Wrd547;
  machine_word Wrd519;
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
      goto hash_table_insertB_46;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_22_9);
      goto loop_43;

    case 3:
      current_block = (Rpc - LABEL_22_10);
      goto label_80;

    case 4:
      current_block = (Rpc - LABEL_22_11);
      goto label_79;

    case 5:
      current_block = (Rpc - LABEL_22_12);
      goto loop_36;

    case 6:
      current_block = (Rpc - LABEL_22_13);
      goto label_78;

    case 7:
      current_block = (Rpc - LABEL_22_14);
      goto label_77;

    case 8:
      current_block = (Rpc - LABEL_22_15);
      goto label_66;

    case 9:
      current_block = (Rpc - LABEL_22_16);
      goto label_67;

    case 10:
      current_block = (Rpc - LABEL_22_17);
      goto label_68;

    case 11:
      current_block = (Rpc - LABEL_22_18);
      goto label_69;

    case 12:
      current_block = (Rpc - LABEL_22_19);
      goto label_71;

    case 13:
      current_block = (Rpc - LABEL_22_20);
      goto label_72;

    case 14:
      current_block = (Rpc - LABEL_22_21);
      goto label_73;

    case 15:
      current_block = (Rpc - LABEL_22_22);
      goto label_70;

    case 16:
      current_block = (Rpc - LABEL_22_23);
      goto label_76;

    case 17:
      current_block = (Rpc - LABEL_22_24);
      goto label_75;

    case 18:
      current_block = (Rpc - LABEL_22_25);
      goto label_74;

    case 19:
      current_block = (Rpc - LABEL_22_26);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_22_27);
      goto continuation_4;

    case 21:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_0;

    case 22:
      current_block = (Rpc - LABEL_22_28);
      goto label_65;

    case 23:
      current_block = (Rpc - LABEL_22_29);
      goto label_48;

    case 24:
      current_block = (Rpc - LABEL_22_30);
      goto label_49;

    case 25:
      current_block = (Rpc - LABEL_22_31);
      goto label_64;

    case 26:
      current_block = (Rpc - LABEL_22_32);
      goto label_50;

    case 27:
      current_block = (Rpc - LABEL_22_33);
      goto label_63;

    case 28:
      current_block = (Rpc - LABEL_22_34);
      goto label_62;

    case 29:
      current_block = (Rpc - LABEL_22_35);
      goto label_51;

    case 30:
      current_block = (Rpc - LABEL_22_36);
      goto label_52;

    case 31:
      current_block = (Rpc - LABEL_22_37);
      goto label_53;

    case 32:
      current_block = (Rpc - LABEL_22_38);
      goto label_54;

    case 33:
      current_block = (Rpc - LABEL_22_39);
      goto label_57;

    case 34:
      current_block = (Rpc - LABEL_22_40);
      goto label_58;

    case 35:
      current_block = (Rpc - LABEL_22_41);
      goto label_59;

    case 36:
      current_block = (Rpc - LABEL_22_42);
      goto label_56;

    case 37:
      current_block = (Rpc - LABEL_22_43);
      goto label_55;

    case 38:
      current_block = (Rpc - LABEL_22_44);
      goto label_61;

    case 39:
      current_block = (Rpc - LABEL_22_45);
      goto label_60;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_insertB_82)
DEFLABEL (hash_table_insertB_46)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (* (--Rsp)) = Rvl;
  (Wrd290.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd290.uLng) == 62))
    goto label_127;
  (Wrd286.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd287.Obj) = ((Wrd286.pObj) [0]);
  (Wrd288.Lng) = (FIXNUM_TO_LONG (Wrd287.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd288.Lng))))
    goto label_127;
  (Wrd282.Obj) = (Rsp [1]);
  ((Wrd286.pObj) [3]) = (Wrd282.Obj);

DEFLABEL (label_126)
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_114;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_125;
  Wrd11 = Wrd15;

DEFLABEL (label_124)
  Wrd10 = Wrd11;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_123;
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_123;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd25.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_123;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd20.pObj) = (& ((Wrd26.pObj) [(Wrd18.Lng)]));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_122)
  (Wrd272.Obj) = (Rsp [2]);
  (Wrd273.uLng) = (OBJECT_TYPE (Wrd272.Obj));
  if (! ((Wrd273.uLng) == 62))
    goto label_121;
  (Wrd269.pObj) = (OBJECT_ADDRESS (Wrd272.Obj));
  (Wrd270.Obj) = ((Wrd269.pObj) [0]);
  (Wrd271.Lng) = (FIXNUM_TO_LONG (Wrd270.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd271.Lng))))
    goto label_121;
  (Wrd265.Obj) = (Rsp [0]);
  ((Wrd269.pObj) [5]) = (Wrd265.Obj);

DEFLABEL (label_120)
  (Wrd35.Obj) = (Rsp [0]);
  if ((Wrd35.Obj) == ((SCHEME_OBJECT) 0))
    goto label_119;
  (Wrd37.Obj) = (current_block [OBJECT_22_11]);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd39.Obj);
  (Wrd261.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd261.uLng) == 62)
    goto label_86;

DEFLABEL (label_85)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_86)
  (Wrd257.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd258.Obj) = ((Wrd257.pObj) [0]);
  (Wrd259.Lng) = (FIXNUM_TO_LONG (Wrd258.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd259.Lng))))
    goto label_85;
  ((Wrd257.pObj) [6]) = (Wrd39.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_118)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_117;
  Wrd42 = Wrd46;

DEFLABEL (label_116)
  Wrd41 = Wrd42;
  (Wrd244.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd244.uLng) == 10))
    goto label_115;
  (Wrd237.Obj) = (Rsp [2]);
  (Wrd238.uLng) = (OBJECT_TYPE (Wrd237.Obj));
  if (! ((Wrd238.uLng) == 26))
    goto label_115;
  (Wrd240.Lng) = (FIXNUM_TO_LONG (Wrd237.Obj));
  (Wrd241.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd242.Obj) = ((Wrd241.pObj) [0]);
  (Wrd243.Lng) = (FIXNUM_TO_LONG (Wrd242.Obj));
  if (! (((unsigned long) (Wrd240.Lng)) < ((unsigned long) (Wrd243.Lng))))
    goto label_115;
  (Wrd233.uLng) = (OBJECT_DATUM (Wrd237.Obj));
  (Wrd235.pObj) = (& ((Wrd241.pObj) [(Wrd233.Lng)]));
  (Wrd236.Obj) = (Rsp [0]);
  ((Wrd235.pObj) [1]) = (Wrd236.Obj);

DEFLABEL (label_114)
  (Wrd48.Obj) = (Rsp [4]);
  if ((Wrd48.Obj) == ((SCHEME_OBJECT) 0))
    goto label_112;
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_111;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd58.Lng))))
    goto label_111;
  (Wrd50.Obj) = ((Wrd56.pObj) [3]);

DEFLABEL (label_110)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 26))
    goto label_109;
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_109;
  (Wrd211.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  (Wrd212.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if ((Wrd211.Lng) < (Wrd212.Lng))
    goto label_98;

DEFLABEL (label_108)
  (Wrd84.Obj) = (Rsp [4]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 62))
    goto label_107;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd83.Lng))))
    goto label_107;
  (Wrd75.Obj) = ((Wrd81.pObj) [3]);

DEFLABEL (label_106)
  (Wrd91.Obj) = (Rsp [1]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 26))
    goto label_105;
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd93.uLng) == 26))
    goto label_105;
  if ((Wrd91.Obj) == (Wrd75.Obj))
    goto label_93;

DEFLABEL (label_92)
  (Wrd129.Obj) = (Rsp [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd130.uLng) == 62))
    goto label_91;
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd127.Obj) = ((Wrd126.pObj) [0]);
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd127.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd128.Lng))))
    goto label_91;
  (Wrd122.Obj) = (Rsp [4]);
  ((Wrd126.pObj) [9]) = (Wrd122.Obj);

DEFLABEL (label_90)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_26]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd112.Obj) = (Rsp [5]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 62))
    goto label_89;
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd110.Obj) = ((Wrd109.pObj) [0]);
  (Wrd111.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd111.Lng))))
    goto label_89;
  (Wrd105.Obj) = ((Wrd109.pObj) [7]);
  (* (--Rsp)) = (Wrd105.Obj);

DEFLABEL (label_88)
  (Wrd119.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd119.Obj);
  goto loop_36;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_22_26);

DEFLABEL (label_87)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd114.Obj) = (Rsp [5]);
  (Wrd115.Obj) = (current_block [OBJECT_22_2]);
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_43]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd131.Obj) = (Rsp [0]);
  (Wrd132.Obj) = (current_block [OBJECT_22_0]);
  (Wrd133.Obj) = (Rsp [4]);
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_42]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_56)
  goto label_90;

DEFLABEL (label_93)
  (Wrd140.Obj) = (Rsp [3]);
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if (! ((Wrd141.uLng) == 1))
    goto label_104;
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd140.Obj));
  (Wrd137.Obj) = ((Wrd139.pObj) [0]);

DEFLABEL (label_103)
  if (! ((Wrd137.Obj) == (current_block [OBJECT_22_7])))
    goto label_92;
  (Wrd156.Obj) = (Rsp [4]);
  (Wrd157.uLng) = (OBJECT_TYPE (Wrd156.Obj));
  if (! ((Wrd157.uLng) == 62))
    goto label_102;
  (Wrd153.pObj) = (OBJECT_ADDRESS (Wrd156.Obj));
  (Wrd154.Obj) = ((Wrd153.pObj) [0]);
  (Wrd155.Lng) = (FIXNUM_TO_LONG (Wrd154.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd155.Lng))))
    goto label_102;
  (Wrd147.Obj) = ((Wrd153.pObj) [2]);

DEFLABEL (label_101)
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd165.uLng) == 1))
    goto label_100;
  (Wrd164.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd163.Obj) = ((Wrd164.pObj) [0]);

DEFLABEL (label_99)
  if ((Wrd163.Obj) == (current_block [OBJECT_22_7]))
    goto label_92;

DEFLABEL (label_98)
  (Wrd201.Obj) = (Rsp [0]);
  (Wrd202.uLng) = (OBJECT_TYPE (Wrd201.Obj));
  if (! ((Wrd202.uLng) == 62))
    goto label_97;
  (Wrd198.pObj) = (OBJECT_ADDRESS (Wrd201.Obj));
  (Wrd199.Obj) = ((Wrd198.pObj) [0]);
  (Wrd200.Lng) = (FIXNUM_TO_LONG (Wrd199.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd200.Lng))))
    goto label_97;
  (Wrd194.Obj) = (Rsp [4]);
  ((Wrd198.pObj) [7]) = (Wrd194.Obj);

DEFLABEL (label_96)
  (Wrd184.Obj) = (Rsp [4]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if (! ((Wrd185.uLng) == 62))
    goto label_95;
  (Wrd181.pObj) = (OBJECT_ADDRESS (Wrd184.Obj));
  (Wrd182.Obj) = ((Wrd181.pObj) [0]);
  (Wrd183.Lng) = (FIXNUM_TO_LONG (Wrd182.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd183.Lng))))
    goto label_95;
  (Wrd177.Obj) = (Rsp [0]);
  ((Wrd181.pObj) [8]) = (Wrd177.Obj);

DEFLABEL (label_94)
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_26]))));
  (* (--Rsp)) = (Wrd173.Obj);
  (Wrd174.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd174.Obj);
  goto loop_43;

DEFLABEL (label_95)
  (Wrd186.Obj) = (Rsp [4]);
  (Wrd187.Obj) = (current_block [OBJECT_22_4]);
  (Wrd188.Obj) = (Rsp [0]);
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_45]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_60)
  goto label_94;

DEFLABEL (label_97)
  (Wrd203.Obj) = (Rsp [0]);
  (Wrd204.Obj) = (current_block [OBJECT_22_2]);
  (Wrd205.Obj) = (Rsp [4]);
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_44]))));
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd204.Obj);
  (* (--Rsp)) = (Wrd203.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_61)
  goto label_96;

DEFLABEL (label_100)
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_41]))));
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_6]), 1);

DEFLABEL (label_59)
  (Wrd163.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd158.Obj) = (Rsp [4]);
  (Wrd159.Obj) = (current_block [OBJECT_22_8]);
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_40]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd158.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_58)
  (Wrd147.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_39]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_6]), 1);

DEFLABEL (label_57)
  (Wrd137.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_105)
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_38]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  goto label_93;

DEFLABEL (label_107)
  (Wrd86.Obj) = (Rsp [4]);
  (Wrd87.Obj) = (current_block [OBJECT_22_5]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_37]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_53)
  (Wrd75.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_36]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_52)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_108;
  goto label_98;

DEFLABEL (label_111)
  (Wrd61.Obj) = (Rsp [4]);
  (Wrd62.Obj) = (current_block [OBJECT_22_5]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_35]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_51)
  (Wrd50.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_112)
  (Wrd224.Obj) = (Rsp [0]);
  (Wrd225.uLng) = (OBJECT_TYPE (Wrd224.Obj));
  if (! ((Wrd225.uLng) == 62))
    goto label_113;
  (Wrd221.pObj) = (OBJECT_ADDRESS (Wrd224.Obj));
  (Wrd222.Obj) = ((Wrd221.pObj) [0]);
  (Wrd223.Lng) = (FIXNUM_TO_LONG (Wrd222.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd223.Lng))))
    goto label_113;
  ((Wrd221.pObj) [9]) = (Wrd224.Obj);
  goto label_87;

DEFLABEL (label_113)
  (Wrd226.Obj) = (Rsp [0]);
  (Wrd227.Obj) = (current_block [OBJECT_22_0]);
  (Wrd231.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_34]))));
  (* (--Rsp)) = (Wrd231.Obj);
  (* (--Rsp)) = (Wrd226.Obj);
  (* (--Rsp)) = (Wrd227.Obj);
  (* (--Rsp)) = (Wrd226.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_62)
  goto label_87;

DEFLABEL (label_115)
  (Wrd246.Obj) = (Rsp [2]);
  (Wrd247.Obj) = (Rsp [0]);
  (Wrd250.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_33]))));
  (* (--Rsp)) = (Wrd250.Obj);
  (* (--Rsp)) = (Wrd247.Obj);
  (* (--Rsp)) = (Wrd246.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_12]), 3);

DEFLABEL (label_63)
  goto label_114;

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_32])), (Wrd43.pObj));

DEFLABEL (label_50)
  (Wrd42.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  Rsp = (& (Rsp [2]));
  goto label_118;

DEFLABEL (label_121)
  (Wrd274.Obj) = (Rsp [2]);
  (Wrd275.Obj) = (current_block [OBJECT_22_10]);
  (Wrd276.Obj) = (Rsp [0]);
  (Wrd279.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_31]))));
  (* (--Rsp)) = (Wrd279.Obj);
  (* (--Rsp)) = (Wrd276.Obj);
  (* (--Rsp)) = (Wrd275.Obj);
  (* (--Rsp)) = (Wrd274.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_64)
  goto label_120;

DEFLABEL (label_123)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_30]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_9]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_29])), (Wrd12.pObj));

DEFLABEL (label_48)
  (Wrd11.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd291.Obj) = (Rsp [0]);
  (Wrd292.Obj) = (current_block [OBJECT_22_5]);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd296.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_28]))));
  (* (--Rsp)) = (Wrd296.Obj);
  (* (--Rsp)) = (Wrd293.Obj);
  (* (--Rsp)) = (Wrd292.Obj);
  (* (--Rsp)) = (Wrd291.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_65)
  goto label_126;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_27);
  goto label_118;

DEFLABEL (loop_84)
DEFLABEL (loop_36)
  INTERRUPT_CHECK (26, LABEL_22_12);
  (Wrd297.Obj) = (Rsp [1]);
  if ((Wrd297.Obj) == ((SCHEME_OBJECT) 0))
    goto label_153;
  (Wrd309.uLng) = (OBJECT_TYPE (Wrd297.Obj));
  if (! ((Wrd309.uLng) == 62))
    goto label_152;
  (Wrd305.pObj) = (OBJECT_ADDRESS (Wrd297.Obj));
  (Wrd306.Obj) = ((Wrd305.pObj) [0]);
  (Wrd307.Lng) = (FIXNUM_TO_LONG (Wrd306.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd307.Lng))))
    goto label_152;
  (Wrd299.Obj) = ((Wrd305.pObj) [3]);

DEFLABEL (label_151)
  (Wrd315.Obj) = (Rsp [4]);
  (Wrd316.uLng) = (OBJECT_TYPE (Wrd315.Obj));
  if (! ((Wrd316.uLng) == 26))
    goto label_150;
  (Wrd317.uLng) = (OBJECT_TYPE (Wrd299.Obj));
  if (! ((Wrd317.uLng) == 26))
    goto label_150;
  (Wrd468.Lng) = (FIXNUM_TO_LONG (Wrd315.Obj));
  (Wrd469.Lng) = (FIXNUM_TO_LONG (Wrd299.Obj));
  if ((Wrd468.Lng) < (Wrd469.Lng))
    goto label_139;

DEFLABEL (label_149)
  (Wrd333.Obj) = (Rsp [1]);
  (Wrd334.uLng) = (OBJECT_TYPE (Wrd333.Obj));
  if (! ((Wrd334.uLng) == 62))
    goto label_148;
  (Wrd330.pObj) = (OBJECT_ADDRESS (Wrd333.Obj));
  (Wrd331.Obj) = ((Wrd330.pObj) [0]);
  (Wrd332.Lng) = (FIXNUM_TO_LONG (Wrd331.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd332.Lng))))
    goto label_148;
  (Wrd324.Obj) = ((Wrd330.pObj) [3]);

DEFLABEL (label_147)
  (Wrd340.Obj) = (Rsp [4]);
  (Wrd341.uLng) = (OBJECT_TYPE (Wrd340.Obj));
  if (! ((Wrd341.uLng) == 26))
    goto label_146;
  (Wrd342.uLng) = (OBJECT_TYPE (Wrd324.Obj));
  if (! ((Wrd342.uLng) == 26))
    goto label_146;
  if ((Wrd340.Obj) == (Wrd324.Obj))
    goto label_131;

DEFLABEL (label_130)
  (Wrd349.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd349.Obj);
  (Wrd360.uLng) = (OBJECT_TYPE (Wrd349.Obj));
  if (! ((Wrd360.uLng) == 62))
    goto label_129;
  (Wrd356.pObj) = (OBJECT_ADDRESS (Wrd349.Obj));
  (Wrd357.Obj) = ((Wrd356.pObj) [0]);
  (Wrd358.Lng) = (FIXNUM_TO_LONG (Wrd357.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd358.Lng))))
    goto label_129;
  (Wrd350.Obj) = ((Wrd356.pObj) [7]);

DEFLABEL (label_128)
  (Rsp [1]) = (Wrd350.Obj);
  goto loop_36;

DEFLABEL (label_129)
  (Wrd361.Obj) = (Rsp [1]);
  (Wrd362.Obj) = (current_block [OBJECT_22_2]);
  (Wrd365.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_22]))));
  (* (--Rsp)) = (Wrd365.Obj);
  (* (--Rsp)) = (Wrd362.Obj);
  (* (--Rsp)) = (Wrd361.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_70)
  (Wrd350.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd369.Obj) = (Rsp [6]);
  (Wrd370.uLng) = (OBJECT_TYPE (Wrd369.Obj));
  if (! ((Wrd370.uLng) == 1))
    goto label_145;
  (Wrd368.pObj) = (OBJECT_ADDRESS (Wrd369.Obj));
  (Wrd366.Obj) = ((Wrd368.pObj) [0]);

DEFLABEL (label_144)
  if ((Wrd366.Obj) == (current_block [OBJECT_22_7]))
    goto label_139;
  (Wrd385.Obj) = (Rsp [1]);
  (Wrd386.uLng) = (OBJECT_TYPE (Wrd385.Obj));
  if (! ((Wrd386.uLng) == 62))
    goto label_143;
  (Wrd382.pObj) = (OBJECT_ADDRESS (Wrd385.Obj));
  (Wrd383.Obj) = ((Wrd382.pObj) [0]);
  (Wrd384.Lng) = (FIXNUM_TO_LONG (Wrd383.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd384.Lng))))
    goto label_143;
  (Wrd376.Obj) = ((Wrd382.pObj) [2]);

DEFLABEL (label_142)
  (Wrd394.uLng) = (OBJECT_TYPE (Wrd376.Obj));
  if (! ((Wrd394.uLng) == 1))
    goto label_141;
  (Wrd393.pObj) = (OBJECT_ADDRESS (Wrd376.Obj));
  (Wrd392.Obj) = ((Wrd393.pObj) [0]);

DEFLABEL (label_140)
  if ((Wrd392.Obj) == (current_block [OBJECT_22_7]))
    goto label_130;

DEFLABEL (label_139)
  (Wrd458.Obj) = (Rsp [3]);
  (Wrd459.uLng) = (OBJECT_TYPE (Wrd458.Obj));
  if (! ((Wrd459.uLng) == 62))
    goto label_138;
  (Wrd455.pObj) = (OBJECT_ADDRESS (Wrd458.Obj));
  (Wrd456.Obj) = ((Wrd455.pObj) [0]);
  (Wrd457.Lng) = (FIXNUM_TO_LONG (Wrd456.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd457.Lng))))
    goto label_138;
  (Wrd451.Obj) = (Rsp [1]);
  ((Wrd455.pObj) [7]) = (Wrd451.Obj);

DEFLABEL (label_137)
  (Wrd441.Obj) = (Rsp [1]);
  (Wrd442.uLng) = (OBJECT_TYPE (Wrd441.Obj));
  if (! ((Wrd442.uLng) == 62))
    goto label_136;
  (Wrd438.pObj) = (OBJECT_ADDRESS (Wrd441.Obj));
  (Wrd439.Obj) = ((Wrd438.pObj) [0]);
  (Wrd440.Lng) = (FIXNUM_TO_LONG (Wrd439.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd440.Lng))))
    goto label_136;
  (Wrd434.Obj) = (Rsp [3]);
  ((Wrd438.pObj) [8]) = (Wrd434.Obj);

DEFLABEL (label_135)
  (Wrd424.Obj) = (Rsp [0]);
  (Wrd425.uLng) = (OBJECT_TYPE (Wrd424.Obj));
  if (! ((Wrd425.uLng) == 62))
    goto label_134;
  (Wrd421.pObj) = (OBJECT_ADDRESS (Wrd424.Obj));
  (Wrd422.Obj) = ((Wrd421.pObj) [0]);
  (Wrd423.Lng) = (FIXNUM_TO_LONG (Wrd422.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd423.Lng))))
    goto label_134;
  (Wrd417.Obj) = (Rsp [3]);
  ((Wrd421.pObj) [7]) = (Wrd417.Obj);

DEFLABEL (label_133)
  (Wrd400.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd400.Obj);
  (Wrd401.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd401.Obj);
  (Wrd402.Obj) = (current_block [OBJECT_22_4]);
  (Rsp [1]) = (Wrd402.Obj);
  (Wrd414.uLng) = (OBJECT_TYPE (Wrd400.Obj));
  if (! ((Wrd414.uLng) == 62))
    goto label_85;
  (Wrd410.pObj) = (OBJECT_ADDRESS (Wrd400.Obj));
  (Wrd411.Obj) = ((Wrd410.pObj) [0]);
  (Wrd412.Lng) = (FIXNUM_TO_LONG (Wrd411.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd412.Lng))))
    goto label_85;
  ((Wrd410.pObj) [8]) = (Wrd401.Obj);

DEFLABEL (label_132)
  Rsp = (& (Rsp [4]));
  goto label_87;

DEFLABEL (label_134)
  (Wrd426.Obj) = (Rsp [0]);
  (Wrd427.Obj) = (current_block [OBJECT_22_2]);
  (Wrd428.Obj) = (Rsp [3]);
  (Wrd431.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_25]))));
  (* (--Rsp)) = (Wrd431.Obj);
  (* (--Rsp)) = (Wrd428.Obj);
  (* (--Rsp)) = (Wrd427.Obj);
  (* (--Rsp)) = (Wrd426.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_74)
  goto label_133;

DEFLABEL (label_136)
  (Wrd443.Obj) = (Rsp [1]);
  (Wrd444.Obj) = (current_block [OBJECT_22_4]);
  (Wrd445.Obj) = (Rsp [3]);
  (Wrd448.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_24]))));
  (* (--Rsp)) = (Wrd448.Obj);
  (* (--Rsp)) = (Wrd445.Obj);
  (* (--Rsp)) = (Wrd444.Obj);
  (* (--Rsp)) = (Wrd443.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_75)
  goto label_135;

DEFLABEL (label_138)
  (Wrd460.Obj) = (Rsp [3]);
  (Wrd461.Obj) = (current_block [OBJECT_22_2]);
  (Wrd462.Obj) = (Rsp [1]);
  (Wrd465.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_23]))));
  (* (--Rsp)) = (Wrd465.Obj);
  (* (--Rsp)) = (Wrd462.Obj);
  (* (--Rsp)) = (Wrd461.Obj);
  (* (--Rsp)) = (Wrd460.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_76)
  goto label_137;

DEFLABEL (label_141)
  (Wrd398.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd398.Obj);
  (* (--Rsp)) = (Wrd376.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_6]), 1);

DEFLABEL (label_73)
  (Wrd392.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  (Wrd387.Obj) = (Rsp [1]);
  (Wrd388.Obj) = (current_block [OBJECT_22_8]);
  (Wrd391.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd391.Obj);
  (* (--Rsp)) = (Wrd388.Obj);
  (* (--Rsp)) = (Wrd387.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_72)
  (Wrd376.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  (Wrd374.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_19]))));
  (* (--Rsp)) = (Wrd374.Obj);
  (* (--Rsp)) = (Wrd369.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_6]), 1);

DEFLABEL (label_71)
  (Wrd366.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_146)
  (Wrd343.Obj) = (Rsp [4]);
  (Wrd347.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd347.Obj);
  (* (--Rsp)) = (Wrd324.Obj);
  (* (--Rsp)) = (Wrd343.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_69)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_130;
  goto label_131;

DEFLABEL (label_148)
  (Wrd335.Obj) = (Rsp [1]);
  (Wrd336.Obj) = (current_block [OBJECT_22_5]);
  (Wrd339.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd339.Obj);
  (* (--Rsp)) = (Wrd336.Obj);
  (* (--Rsp)) = (Wrd335.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_68)
  (Wrd324.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd318.Obj) = (Rsp [4]);
  (Wrd322.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd322.Obj);
  (* (--Rsp)) = (Wrd299.Obj);
  (* (--Rsp)) = (Wrd318.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_67)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_149;
  goto label_139;

DEFLABEL (label_152)
  (Wrd310.Obj) = (Rsp [1]);
  (Wrd311.Obj) = (current_block [OBJECT_22_5]);
  (Wrd314.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd314.Obj);
  (* (--Rsp)) = (Wrd311.Obj);
  (* (--Rsp)) = (Wrd310.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_66)
  (Wrd299.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_153)
  (Wrd511.Obj) = (Rsp [3]);
  (Wrd512.uLng) = (OBJECT_TYPE (Wrd511.Obj));
  if (! ((Wrd512.uLng) == 62))
    goto label_157;
  (Wrd508.pObj) = (OBJECT_ADDRESS (Wrd511.Obj));
  (Wrd509.Obj) = ((Wrd508.pObj) [0]);
  (Wrd510.Lng) = (FIXNUM_TO_LONG (Wrd509.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd510.Lng))))
    goto label_157;
  ((Wrd508.pObj) [7]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_156)
  (Wrd494.Obj) = (Rsp [0]);
  (Wrd495.uLng) = (OBJECT_TYPE (Wrd494.Obj));
  if (! ((Wrd495.uLng) == 62))
    goto label_155;
  (Wrd491.pObj) = (OBJECT_ADDRESS (Wrd494.Obj));
  (Wrd492.Obj) = ((Wrd491.pObj) [0]);
  (Wrd493.Lng) = (FIXNUM_TO_LONG (Wrd492.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd493.Lng))))
    goto label_155;
  (Wrd487.Obj) = (Rsp [3]);
  ((Wrd491.pObj) [7]) = (Wrd487.Obj);

DEFLABEL (label_154)
  (Wrd470.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd470.Obj);
  (Wrd471.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd471.Obj);
  (Wrd472.Obj) = (current_block [OBJECT_22_4]);
  (Rsp [1]) = (Wrd472.Obj);
  (Wrd484.uLng) = (OBJECT_TYPE (Wrd470.Obj));
  if (! ((Wrd484.uLng) == 62))
    goto label_85;
  (Wrd480.pObj) = (OBJECT_ADDRESS (Wrd470.Obj));
  (Wrd481.Obj) = ((Wrd480.pObj) [0]);
  (Wrd482.Lng) = (FIXNUM_TO_LONG (Wrd481.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd482.Lng))))
    goto label_85;
  ((Wrd480.pObj) [8]) = (Wrd471.Obj);
  goto label_132;

DEFLABEL (label_155)
  (Wrd496.Obj) = (Rsp [0]);
  (Wrd497.Obj) = (current_block [OBJECT_22_2]);
  (Wrd498.Obj) = (Rsp [3]);
  (Wrd501.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd501.Obj);
  (* (--Rsp)) = (Wrd498.Obj);
  (* (--Rsp)) = (Wrd497.Obj);
  (* (--Rsp)) = (Wrd496.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_77)
  goto label_154;

DEFLABEL (label_157)
  (Wrd513.Obj) = (Rsp [3]);
  (Wrd514.Obj) = (current_block [OBJECT_22_2]);
  (Wrd518.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd518.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd514.Obj);
  (* (--Rsp)) = (Wrd513.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_78)
  goto label_156;

DEFLABEL (loop_83)
DEFLABEL (loop_43)
  INTERRUPT_CHECK (26, LABEL_22_9);
  (Wrd519.Obj) = (Rsp [0]);
  if ((Wrd519.Obj) == ((SCHEME_OBJECT) 0))
    goto label_162;
  (Wrd547.uLng) = (OBJECT_TYPE (Wrd519.Obj));
  if (! ((Wrd547.uLng) == 62))
    goto label_161;
  (Wrd543.pObj) = (OBJECT_ADDRESS (Wrd519.Obj));
  (Wrd544.Obj) = ((Wrd543.pObj) [0]);
  (Wrd545.Lng) = (FIXNUM_TO_LONG (Wrd544.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd545.Lng))))
    goto label_161;
  (Wrd539.Obj) = (Rsp [2]);
  ((Wrd543.pObj) [9]) = (Wrd539.Obj);

DEFLABEL (label_160)
  (Wrd530.Obj) = (Rsp [0]);
  (Wrd531.uLng) = (OBJECT_TYPE (Wrd530.Obj));
  if (! ((Wrd531.uLng) == 62))
    goto label_159;
  (Wrd527.pObj) = (OBJECT_ADDRESS (Wrd530.Obj));
  (Wrd528.Obj) = ((Wrd527.pObj) [0]);
  (Wrd529.Lng) = (FIXNUM_TO_LONG (Wrd528.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd529.Lng))))
    goto label_159;
  (Wrd521.Obj) = ((Wrd527.pObj) [7]);

DEFLABEL (label_158)
  (Rsp [0]) = (Wrd521.Obj);
  goto loop_43;

DEFLABEL (label_159)
  (Wrd532.Obj) = (Rsp [0]);
  (Wrd533.Obj) = (current_block [OBJECT_22_2]);
  (Wrd536.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd536.Obj);
  (* (--Rsp)) = (Wrd533.Obj);
  (* (--Rsp)) = (Wrd532.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_79)
  (Wrd521.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd548.Obj) = (Rsp [0]);
  (Wrd549.Obj) = (current_block [OBJECT_22_0]);
  (Wrd550.Obj) = (Rsp [2]);
  (Wrd553.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd553.Obj);
  (* (--Rsp)) = (Wrd550.Obj);
  (* (--Rsp)) = (Wrd549.Obj);
  (* (--Rsp)) = (Wrd548.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 3);

DEFLABEL (label_80)
  goto label_160;

DEFLABEL (label_162)
  Rsp = (& (Rsp [2]));
  goto label_87;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_5 3
#define LABEL_23_6 5
#define LABEL_23_7 7
#define LABEL_23_8 9
#define LABEL_23_4 11
#define LABEL_23_9 13
#define LABEL_23_10 15
#define LABEL_23_11 17
#define LABEL_23_12 19
#define LABEL_23_13 21
#define LABEL_23_14 23
#define LABEL_23_15 25
#define LABEL_23_16 27
#define ENVIRONMENT_LABEL_23_3 40
#define DEBUGGING_LABEL_23_2 39
#define OBJECT_23_8 38
#define OBJECT_23_7 37
#define OBJECT_23_6 36
#define OBJECT_23_5 35
#define OBJECT_23_4 34
#define OBJECT_23_3 33
#define OBJECT_23_2 32
#define OBJECT_23_1 31
#define OBJECT_23_0 30
#define FREE_REFERENCE_23_0 29
#define FREE_REFERENCES_LABEL_23_0 28
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd91;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd109;
  machine_word Wrd103;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd84;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd131;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd139;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd68;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd156;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd157;
  machine_word Wrd44;
  machine_word Wrd174;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd160;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd168;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd191;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd185;
  machine_word Wrd5;
  machine_word Wrd211;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd196;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd228;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd214;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd222;
  machine_word Wrd194;
  INVOKE_INTERFACE_DECLS
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
      goto loop_8;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_23_4);
      goto hash_table_deleteB_15;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_23_10);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_23_11);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_23_12);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_23_13);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_23_14);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_23_15);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_23_16);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_deleteB_29)
DEFLABEL (hash_table_deleteB_15)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_30;
  Rvl = (current_block [OBJECT_23_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd185.uLng) == 62))
    goto label_55;
  (Wrd181.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd182.Obj) = ((Wrd181.pObj) [0]);
  (Wrd183.Lng) = (FIXNUM_TO_LONG (Wrd182.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd183.Lng))))
    goto label_55;
  ((Wrd181.pObj) [9]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_54)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_53;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd18.Lng))))
    goto label_53;
  (Wrd12.Obj) = ((Wrd16.pObj) [8]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_52)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_51;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd34.Lng))))
    goto label_51;
  (Wrd28.Obj) = ((Wrd32.pObj) [7]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_50)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd168.uLng) == 62))
    goto label_49;
  (Wrd164.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd165.Obj) = ((Wrd164.pObj) [0]);
  (Wrd166.Lng) = (FIXNUM_TO_LONG (Wrd165.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd166.Lng))))
    goto label_49;
  (Wrd160.Obj) = (Rsp [1]);
  ((Wrd164.pObj) [8]) = (Wrd160.Obj);

DEFLABEL (label_48)
  (Wrd44.Obj) = (Rsp [1]);
  if (! ((Wrd44.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_31;
  (Wrd157.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd157.Obj);
  goto loop_8;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_23_2]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd156.uLng) == 62)
    goto label_33;

DEFLABEL (label_32)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 3);

DEFLABEL (label_33)
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd153.Obj) = ((Wrd152.pObj) [0]);
  (Wrd154.Lng) = (FIXNUM_TO_LONG (Wrd153.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd154.Lng))))
    goto label_32;
  ((Wrd152.pObj) [7]) = (Wrd47.Obj);

DEFLABEL (label_47)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_46)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_45;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd58.Lng))))
    goto label_45;
  (Wrd52.Obj) = ((Wrd56.pObj) [6]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_44)
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_43;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd74.Lng))))
    goto label_43;
  (Wrd68.Obj) = ((Wrd72.pObj) [5]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_42)
  (Wrd82.Obj) = (Rsp [0]);
  if ((Wrd82.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd139.uLng) == 62))
    goto label_41;
  (Wrd135.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd136.Obj) = ((Wrd135.pObj) [0]);
  (Wrd137.Lng) = (FIXNUM_TO_LONG (Wrd136.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd137.Lng))))
    goto label_41;
  (Wrd131.Obj) = (Rsp [1]);
  ((Wrd135.pObj) [6]) = (Wrd131.Obj);

DEFLABEL (label_40)
  (Wrd84.Obj) = (Rsp [1]);
  if ((Wrd84.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd86.Obj) = (current_block [OBJECT_23_7]);
  (Rsp [2]) = (Wrd86.Obj);
  (Wrd87.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd87.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd99.Obj) = (Rsp [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 62))
    goto label_32;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [0]);
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd98.Lng))))
    goto label_32;
  (Wrd91.Obj) = (Rsp [2]);
  ((Wrd96.pObj) [5]) = (Wrd91.Obj);

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_23_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd104.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd107.Obj) = ((Wrd104.pObj) [0]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if ((Wrd108.uLng) == 50)
    goto label_39;
  Wrd103 = Wrd107;

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd103.Obj);
  (Wrd109.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd109.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd126.Obj) = (Rsp [0]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd127.uLng) == 10)
    goto label_37;

DEFLABEL (label_36)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_8]), 3);

DEFLABEL (label_37)
  (Wrd118.Obj) = (Rsp [1]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 26))
    goto label_36;
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd124.Obj) = ((Wrd123.pObj) [0]);
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  if (! (((unsigned long) (Wrd121.Lng)) < ((unsigned long) (Wrd125.Lng))))
    goto label_36;
  (Wrd112.uLng) = (OBJECT_DATUM (Wrd118.Obj));
  (Wrd115.pObj) = (& ((Wrd123.pObj) [(Wrd112.Lng)]));
  (Wrd116.Obj) = (Rsp [2]);
  ((Wrd115.pObj) [1]) = (Wrd116.Obj);
  goto label_34;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_16])), (Wrd104.pObj));

DEFLABEL (label_21)
  (Wrd103.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd140.Obj) = (Rsp [0]);
  (Wrd141.Obj) = (current_block [OBJECT_23_6]);
  (Wrd142.Obj) = (Rsp [1]);
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 3);

DEFLABEL (label_22)
  goto label_40;

DEFLABEL (label_43)
  (Wrd77.Obj) = (Rsp [2]);
  (Wrd78.Obj) = (current_block [OBJECT_23_7]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (current_block [OBJECT_23_6]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_49)
  (Wrd169.Obj) = (Rsp [0]);
  (Wrd170.Obj) = (current_block [OBJECT_23_5]);
  (Wrd171.Obj) = (Rsp [1]);
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 3);

DEFLABEL (label_23)
  goto label_48;

DEFLABEL (label_51)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.Obj) = (current_block [OBJECT_23_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_23_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd186.Obj) = (Rsp [1]);
  (Wrd187.Obj) = (current_block [OBJECT_23_0]);
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd187.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 3);

DEFLABEL (label_24)
  goto label_54;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_8);
  goto label_46;

DEFLABEL (loop_28)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_23_5);
  (Wrd194.Obj) = (Rsp [0]);
  if ((Wrd194.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd222.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if (! ((Wrd222.uLng) == 62))
    goto label_59;
  (Wrd218.pObj) = (OBJECT_ADDRESS (Wrd194.Obj));
  (Wrd219.Obj) = ((Wrd218.pObj) [0]);
  (Wrd220.Lng) = (FIXNUM_TO_LONG (Wrd219.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd220.Lng))))
    goto label_59;
  (Wrd214.Obj) = (Rsp [1]);
  ((Wrd218.pObj) [9]) = (Wrd214.Obj);

DEFLABEL (label_58)
  (Wrd205.Obj) = (Rsp [0]);
  (Wrd206.uLng) = (OBJECT_TYPE (Wrd205.Obj));
  if (! ((Wrd206.uLng) == 62))
    goto label_57;
  (Wrd202.pObj) = (OBJECT_ADDRESS (Wrd205.Obj));
  (Wrd203.Obj) = ((Wrd202.pObj) [0]);
  (Wrd204.Lng) = (FIXNUM_TO_LONG (Wrd203.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd204.Lng))))
    goto label_57;
  (Wrd196.Obj) = ((Wrd202.pObj) [7]);

DEFLABEL (label_56)
  (Rsp [0]) = (Wrd196.Obj);
  goto loop_8;

DEFLABEL (label_57)
  (Wrd207.Obj) = (Rsp [0]);
  (Wrd208.Obj) = (current_block [OBJECT_23_2]);
  (Wrd211.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd211.Obj);
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd207.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

DEFLABEL (label_25)
  (Wrd196.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd223.Obj) = (Rsp [0]);
  (Wrd224.Obj) = (current_block [OBJECT_23_0]);
  (Wrd225.Obj) = (Rsp [1]);
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd228.Obj);
  (* (--Rsp)) = (Wrd225.Obj);
  (* (--Rsp)) = (Wrd224.Obj);
  (* (--Rsp)) = (Wrd223.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 3);

DEFLABEL (label_26)
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define LABEL_24_8 11
#define LABEL_24_9 13
#define LABEL_24_10 15
#define LABEL_24_11 17
#define LABEL_24_12 19
#define LABEL_24_14 21
#define LABEL_24_13 23
#define LABEL_24_15 25
#define ENVIRONMENT_LABEL_24_3 38
#define DEBUGGING_LABEL_24_2 37
#define OBJECT_24_5 36
#define OBJECT_24_4 35
#define OBJECT_24_3 34
#define OBJECT_24_2 33
#define OBJECT_24_1 32
#define OBJECT_24_0 31
#define EXECUTE_CACHE_24_16 27
#define FREE_REFERENCE_24_0 30
#define FREE_REFERENCES_LABEL_24_0 26
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd51;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_24_4);
      goto hash_table_delete_classB_13;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto table_loop_11;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_24_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_24_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_24_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_24_11);
      goto bucket_loop_9;

    case 8:
      current_block = (Rpc - LABEL_24_12);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_24_14);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_24_15);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_delete_classB_23)
DEFLABEL (hash_table_delete_classB_13)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto table_loop_11;

DEFLABEL (table_loop_24)
DEFLABEL (table_loop_11)
  INTERRUPT_CHECK (26, LABEL_24_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_36;
  Wrd6 = Wrd10;

DEFLABEL (label_35)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_34;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));

DEFLABEL (label_33)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_32;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_32;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd58.Lng) < (Wrd59.Lng))
    goto label_27;

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_24_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_31;
  Wrd33 = Wrd37;

DEFLABEL (label_30)
  Wrd32 = Wrd33;
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_29;
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_29;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_29;
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd42.pObj) = (& ((Wrd48.pObj) [(Wrd40.Lng)]));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_28)
  goto bucket_loop_9;

DEFLABEL (label_29)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_9])), (Wrd34.pObj));

DEFLABEL (label_18)
  (Wrd33.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (label_34)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_16)
  (Wrd12.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_6])), (Wrd7.pObj));

DEFLABEL (label_15)
  (Wrd6.Obj) = Rvl;
  goto label_35;

DEFLABEL (bucket_loop_25)
DEFLABEL (bucket_loop_9)
  INTERRUPT_CHECK (26, LABEL_24_11);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_24_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_24_14);

DEFLABEL (label_39)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_38;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd20.Lng))))
    goto label_38;
  (Wrd12.Obj) = ((Wrd18.pObj) [5]);

DEFLABEL (label_37)
  (Rsp [0]) = (Wrd12.Obj);
  goto bucket_loop_9;

DEFLABEL (label_38)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_24_4]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_5]), 2);

DEFLABEL (label_21)
  (Wrd12.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_42;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd21.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_42;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  goto table_loop_11;

DEFLABEL (label_42)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_20)
  (Wrd16.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_8 9
#define LABEL_25_10 11
#define LABEL_25_11 13
#define TAG_25_12 5
#define LABEL_25_17 15
#define LABEL_25_18 17
#define LABEL_25_19 19
#define LABEL_25_20 21
#define LABEL_25_21 23
#define LABEL_25_22 25
#define LABEL_25_23 27
#define LABEL_25_24 29
#define LABEL_25_25 31
#define LABEL_25_26 33
#define LABEL_25_27 35
#define LABEL_25_28 37
#define LABEL_25_29 39
#define LABEL_25_30 41
#define LABEL_25_32 43
#define LABEL_25_33 45
#define LABEL_25_34 47
#define LABEL_25_35 49
#define LABEL_25_36 51
#define LABEL_25_37 53
#define LABEL_25_14 55
#define LABEL_25_15 57
#define TAG_25_16 27
#define LABEL_25_40 59
#define LABEL_25_41 61
#define LABEL_25_42 63
#define LABEL_25_43 65
#define LABEL_25_31 67
#define LABEL_25_44 69
#define LABEL_25_46 71
#define LABEL_25_45 73
#define LABEL_25_47 75
#define ENVIRONMENT_LABEL_25_3 98
#define DEBUGGING_LABEL_25_2 97
#define OBJECT_25_9 96
#define OBJECT_25_8 95
#define OBJECT_25_7 94
#define OBJECT_25_6 93
#define OBJECT_25_5 92
#define OBJECT_25_4 91
#define OBJECT_25_3 90
#define OBJECT_25_2 89
#define OBJECT_25_1 88
#define OBJECT_25_0 87
#define EXECUTE_CACHE_25_39 77
#define EXECUTE_CACHE_25_38 79
#define EXECUTE_CACHE_25_13 81
#define EXECUTE_CACHE_25_9 83
#define EXECUTE_CACHE_25_6 85
#define FREE_REFERENCES_LABEL_25_0 76
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rcseht_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd6;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd64;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd17;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd143;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd115;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd122;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd99;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd156;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd202;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd186;
  machine_word Wrd183;
  machine_word Wrd174;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd181;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd158;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd215;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd210;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_25_4);
      goto hash_table_copy_47;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_17;

    case 3:
      current_block = (Rpc - LABEL_25_8);
      goto lambda_16;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_18;

    case 5:
      current_block = (Rpc - LABEL_25_11);
      goto lambda_77;

    case 6:
      current_block = (Rpc - LABEL_25_17);
      goto label_61;

    case 7:
      current_block = (Rpc - LABEL_25_18);
      goto label_58;

    case 8:
      current_block = (Rpc - LABEL_25_19);
      goto label_59;

    case 9:
      current_block = (Rpc - LABEL_25_20);
      goto label_60;

    case 10:
      current_block = (Rpc - LABEL_25_21);
      goto label_57;

    case 11:
      current_block = (Rpc - LABEL_25_22);
      goto label_54;

    case 12:
      current_block = (Rpc - LABEL_25_23);
      goto label_55;

    case 13:
      current_block = (Rpc - LABEL_25_24);
      goto label_56;

    case 14:
      current_block = (Rpc - LABEL_25_25);
      goto label_53;

    case 15:
      current_block = (Rpc - LABEL_25_26);
      goto label_50;

    case 16:
      current_block = (Rpc - LABEL_25_27);
      goto label_51;

    case 17:
      current_block = (Rpc - LABEL_25_28);
      goto label_52;

    case 18:
      current_block = (Rpc - LABEL_25_29);
      goto label_49;

    case 19:
      current_block = (Rpc - LABEL_25_30);
      goto per_element_14;

    case 20:
      current_block = (Rpc - LABEL_25_32);
      goto label_62;

    case 21:
      current_block = (Rpc - LABEL_25_33);
      goto label_63;

    case 22:
      current_block = (Rpc - LABEL_25_34);
      goto label_64;

    case 23:
      current_block = (Rpc - LABEL_25_35);
      goto label_65;

    case 24:
      current_block = (Rpc - LABEL_25_36);
      goto label_66;

    case 25:
      current_block = (Rpc - LABEL_25_37);
      goto label_67;

    case 26:
      current_block = (Rpc - LABEL_25_14);
      goto continuation_36;

    case 27:
      current_block = (Rpc - LABEL_25_15);
      goto lambda_79;

    case 28:
      current_block = (Rpc - LABEL_25_40);
      goto label_68;

    case 29:
      current_block = (Rpc - LABEL_25_41);
      goto label_69;

    case 30:
      current_block = (Rpc - LABEL_25_42);
      goto label_71;

    case 31:
      current_block = (Rpc - LABEL_25_43);
      goto label_70;

    case 32:
      current_block = (Rpc - LABEL_25_31);
      goto continuation_8;

    case 33:
      current_block = (Rpc - LABEL_25_44);
      goto label_73;

    case 34:
      current_block = (Rpc - LABEL_25_46);
      goto label_72;

    case 35:
      current_block = (Rpc - LABEL_25_45);
      goto continuation_11;

    case 36:
      current_block = (Rpc - LABEL_25_47);
      goto label_74;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_copy_76)
DEFLABEL (hash_table_copy_47)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_11])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  ((Wrd9.pObj) [0]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_15])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  ((Wrd9.pObj) [0]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_25_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_39]));

DEFLABEL (lambda_78)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_25_8);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  goto per_element_14;

DEFLABEL (lambda_77)
  CLOSURE_HEADER (LABEL_25_11);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_81;
  Rvl = (current_block [OBJECT_25_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd210.uLng) == 62))
    goto label_107;
  (Wrd206.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd207.Obj) = ((Wrd206.pObj) [0]);
  (Wrd208.Lng) = (FIXNUM_TO_LONG (Wrd207.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd208.Lng))))
    goto label_107;
  (Wrd9.Obj) = ((Wrd206.pObj) [9]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_100;

DEFLABEL (label_106)
  (Wrd167.Obj) = (Rsp [1]);
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if (! ((Wrd168.uLng) == 62))
    goto label_105;
  (Wrd164.pObj) = (OBJECT_ADDRESS (Wrd167.Obj));
  (Wrd165.Obj) = ((Wrd164.pObj) [0]);
  (Wrd166.Lng) = (FIXNUM_TO_LONG (Wrd165.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd166.Lng))))
    goto label_105;
  (Wrd158.Obj) = ((Wrd164.pObj) [9]);

DEFLABEL (label_104)
  (Wrd181.uLng) = (OBJECT_TYPE (Wrd158.Obj));
  if (! ((Wrd181.uLng) == 62))
    goto label_103;
  (Wrd178.pObj) = (OBJECT_ADDRESS (Wrd158.Obj));
  (Wrd179.Obj) = ((Wrd178.pObj) [0]);
  (Wrd180.Lng) = (FIXNUM_TO_LONG (Wrd179.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd180.Lng))))
    goto label_103;
  (Wrd174.Obj) = ((Wrd178.pObj) [3]);

DEFLABEL (label_102)
  (Wrd195.Obj) = (Rsp [1]);
  (Wrd196.uLng) = (OBJECT_TYPE (Wrd195.Obj));
  if (! ((Wrd196.uLng) == 62))
    goto label_101;
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd195.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (Wrd194.Lng) = (FIXNUM_TO_LONG (Wrd193.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd194.Lng))))
    goto label_101;
  ((Wrd192.pObj) [9]) = (Wrd174.Obj);

DEFLABEL (label_100)
  (Wrd150.Obj) = (Rsp [1]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if (! ((Wrd151.uLng) == 62))
    goto label_99;
  (Wrd147.pObj) = (OBJECT_ADDRESS (Wrd150.Obj));
  (Wrd148.Obj) = ((Wrd147.pObj) [0]);
  (Wrd149.Lng) = (FIXNUM_TO_LONG (Wrd148.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd149.Lng))))
    goto label_99;
  (Wrd13.Obj) = ((Wrd147.pObj) [8]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_92;

DEFLABEL (label_98)
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 62))
    goto label_97;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd107.Lng))))
    goto label_97;
  (Wrd99.Obj) = ((Wrd105.pObj) [8]);

DEFLABEL (label_96)
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd122.uLng) == 62))
    goto label_95;
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd120.Obj) = ((Wrd119.pObj) [0]);
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd120.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd121.Lng))))
    goto label_95;
  (Wrd115.Obj) = ((Wrd119.pObj) [3]);

DEFLABEL (label_94)
  (Wrd136.Obj) = (Rsp [1]);
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd136.Obj));
  if (! ((Wrd137.uLng) == 62))
    goto label_93;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd136.Obj));
  (Wrd134.Obj) = ((Wrd133.pObj) [0]);
  (Wrd135.Lng) = (FIXNUM_TO_LONG (Wrd134.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd135.Lng))))
    goto label_93;
  ((Wrd133.pObj) [8]) = (Wrd115.Obj);

DEFLABEL (label_92)
  (Wrd91.Obj) = (Rsp [1]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 62))
    goto label_91;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd90.Lng))))
    goto label_91;
  (Wrd17.Obj) = ((Wrd88.pObj) [7]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_84;

DEFLABEL (label_90)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_89;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd48.Lng))))
    goto label_89;
  (Wrd40.Obj) = ((Wrd46.pObj) [7]);

DEFLABEL (label_88)
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_87;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd62.Lng))))
    goto label_87;
  (Wrd56.Obj) = ((Wrd60.pObj) [3]);

DEFLABEL (label_86)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 62))
    goto label_85;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd76.Lng))))
    goto label_85;
  ((Wrd74.pObj) [7]) = (Wrd56.Obj);

DEFLABEL (label_84)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd23.pObj) [0]);
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_83;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_83;
  (Wrd24.Obj) = ((Wrd30.pObj) [5]);

DEFLABEL (label_82)
  (Rsp [1]) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_83)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_25_7]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_29]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_49)
  (Wrd24.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.Obj) = (current_block [OBJECT_25_6]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_28]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 3);

DEFLABEL (label_52)
  goto label_84;

DEFLABEL (label_87)
  (Wrd65.Obj) = (current_block [OBJECT_25_3]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_27]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_51)
  (Wrd56.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (current_block [OBJECT_25_6]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_26]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_50)
  (Wrd40.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd93.Obj) = (Rsp [1]);
  (Wrd94.Obj) = (current_block [OBJECT_25_6]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_25]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_84;
  goto label_90;

DEFLABEL (label_93)
  (Wrd138.Obj) = (Rsp [1]);
  (Wrd139.Obj) = (current_block [OBJECT_25_5]);
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_24]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 3);

DEFLABEL (label_56)
  goto label_92;

DEFLABEL (label_95)
  (Wrd124.Obj) = (current_block [OBJECT_25_3]);
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_23]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_55)
  (Wrd115.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.Obj) = (current_block [OBJECT_25_5]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_22]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_54)
  (Wrd99.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd152.Obj) = (Rsp [1]);
  (Wrd153.Obj) = (current_block [OBJECT_25_5]);
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_21]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_57)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  goto label_98;

DEFLABEL (label_101)
  (Wrd197.Obj) = (Rsp [1]);
  (Wrd198.Obj) = (current_block [OBJECT_25_1]);
  (Wrd202.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_20]))));
  (* (--Rsp)) = (Wrd202.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd197.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 3);

DEFLABEL (label_60)
  goto label_100;

DEFLABEL (label_103)
  (Wrd183.Obj) = (current_block [OBJECT_25_3]);
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_19]))));
  (* (--Rsp)) = (Wrd186.Obj);
  (* (--Rsp)) = (Wrd183.Obj);
  (* (--Rsp)) = (Wrd158.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_59)
  (Wrd174.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd169.Obj) = (Rsp [1]);
  (Wrd170.Obj) = (current_block [OBJECT_25_1]);
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_18]))));
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_58)
  (Wrd158.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd211.Obj) = (Rsp [1]);
  (Wrd212.Obj) = (current_block [OBJECT_25_1]);
  (Wrd215.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd215.Obj);
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_61)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_100;
  goto label_106;

DEFLABEL (per_element_80)
DEFLABEL (per_element_14)
  INTERRUPT_CHECK (26, LABEL_25_30);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_108;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_108)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_126;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd18.Lng))))
    goto label_126;
  (Wrd12.Obj) = ((Wrd16.pObj) [9]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_125)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_124;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd34.Lng))))
    goto label_124;
  (Wrd28.Obj) = ((Wrd32.pObj) [8]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_123)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_122;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd50.Lng))))
    goto label_122;
  (Wrd44.Obj) = ((Wrd48.pObj) [7]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_121)
  (Wrd58.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd69.Obj) = (Rsp [6]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 62))
    goto label_120;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd68.Lng))))
    goto label_120;
  (Wrd62.Obj) = ((Wrd66.pObj) [4]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_119)
  (Wrd85.Obj) = (Rsp [7]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 62))
    goto label_118;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd84.Lng))))
    goto label_118;
  (Wrd78.Obj) = ((Wrd82.pObj) [3]);
  (* (--Rsp)) = (Wrd78.Obj);

DEFLABEL (label_117)
  (Wrd101.Obj) = (Rsp [8]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 62))
    goto label_116;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd100.Lng))))
    goto label_116;
  (Wrd94.Obj) = ((Wrd98.pObj) [2]);
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_115)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_38]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_25_31);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [3]));
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 62))
    goto label_114;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd39.Lng))))
    goto label_114;
  ((Wrd37.pObj) [3]) = Rvl;

DEFLABEL (label_113)
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_112;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_112;
  (Wrd13.Obj) = ((Wrd17.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_111)
  goto per_element_14;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25_45);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_110;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_110;
  ((Wrd14.pObj) [5]) = Rvl;

DEFLABEL (label_109)
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_110)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_25_7]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_47]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 3);

DEFLABEL (label_74)
  (Wrd19.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd19.Obj));
  goto label_109;

DEFLABEL (label_112)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (current_block [OBJECT_25_7]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_46]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_72)
  (Wrd22.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd22.Obj));
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_25_3]);
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_44]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 3);

DEFLABEL (label_73)
  (Wrd42.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd42.Obj));
  goto label_113;

DEFLABEL (label_116)
  (Wrd103.Obj) = (Rsp [8]);
  (Wrd104.Obj) = (current_block [OBJECT_25_9]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_37]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd87.Obj) = (Rsp [7]);
  (Wrd88.Obj) = (current_block [OBJECT_25_3]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_36]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd71.Obj) = (Rsp [6]);
  (Wrd72.Obj) = (current_block [OBJECT_25_8]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_35]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.Obj) = (current_block [OBJECT_25_6]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_34]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_25_5]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_33]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_25_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_32]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (lambda_79)
  CLOSURE_HEADER (LABEL_25_15);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_127;
  Rvl = (current_block [OBJECT_25_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_127)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_135;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_135;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_134)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_133;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_133;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_132)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_131;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd64.Lng))))
    goto label_131;
  ((Wrd62.pObj) [3]) = (Wrd23.Obj);

DEFLABEL (label_130)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [2]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd40.pObj) [0]);
  (Rsp [0]) = (Wrd36.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_129;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd49.Lng))))
    goto label_129;
  (Wrd41.Obj) = ((Wrd47.pObj) [5]);

DEFLABEL (label_128)
  (Rsp [1]) = (Wrd41.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_129)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.Obj) = (current_block [OBJECT_25_7]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_43]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_70)
  (Wrd41.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_25_3]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_42]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_4]), 3);

DEFLABEL (label_71)
  goto label_130;

DEFLABEL (label_133)
  (Wrd32.Obj) = (current_block [OBJECT_25_3]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_41]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_69)
  (Wrd23.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_25_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_40]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_68)
  (Wrd7.Obj) = Rvl;
  goto label_134;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_13 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_11 15
#define LABEL_19 17
#define LABEL_12 19
#define LABEL_17 21
#define LABEL_18 23
#define LABEL_20 25
#define TAG_21 11
#define LABEL_22 27
#define LABEL_27 29
#define LABEL_23 31
#define TAG_24 14
#define LABEL_25 33
#define LABEL_26 35
#define LABEL_28 37
#define LABEL_29 39
#define LABEL_30 41
#define ENVIRONMENT_LABEL_3 74
#define DEBUGGING_LABEL_2 73
#define PURIFICATION_ROOT 72
#define OBJECT_15 71
#define OBJECT_14 70
#define OBJECT_13 69
#define OBJECT_12 68
#define OBJECT_11 67
#define OBJECT_10 66
#define OBJECT_9 65
#define OBJECT_8 64
#define OBJECT_7 63
#define OBJECT_6 62
#define OBJECT_5 61
#define OBJECT_4 60
#define OBJECT_3 59
#define OBJECT_2 58
#define OBJECT_1 57
#define OBJECT_0 56
#define EXECUTE_CACHE_16 43
#define EXECUTE_CACHE_10 45
#define FREE_REFERENCE_0 48
#define GLOBAL_EXECUTE_CACHE_15 50
#define GLOBAL_EXECUTE_CACHE_14 52
#define GLOBAL_EXECUTE_CACHE_5 54
#define FREE_REFERENCES_LABEL_0 42
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rcseht_so_3606b7393948758a (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd19;
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
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
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
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_13);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_17;

    case 7:
      current_block = (Rpc - LABEL_19);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto continuation_22;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_20);
      goto Z__make_element_32;

    case 12:
      current_block = (Rpc - LABEL_22);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_27);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto make_element_33;

    case 15:
      current_block = (Rpc - LABEL_25);
      goto continuation_25;

    case 16:
      current_block = (Rpc - LABEL_26);
      goto continuation_24;

    case 17:
      current_block = (Rpc - LABEL_28);
      goto label_35;

    case 18:
      current_block = (Rpc - LABEL_29);
      goto label_36;

    case 19:
      current_block = (Rpc - LABEL_30);
      goto expression_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_27)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_29])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_36)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_35)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	1,
	2,
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
	0,
	0,
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 25)
      goto label_34;
    blocks = (current_block [OBJECT_15]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_28])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_34)
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd14.Obj);
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
  (Wrd38.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_42;
  Wrd11 = Wrd15;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x909, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_40;
  Wrd11 = Wrd15;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_38;
  Wrd11 = Wrd15;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_13]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd12.pObj));

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd12.pObj));

DEFLABEL (label_29)
  (Wrd11.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd12.pObj));

DEFLABEL (label_28)
  (Wrd11.Obj) = Rvl;
  goto label_41;

DEFLABEL (Z__make_element_32)
  CLOSURE_HEADER (LABEL_20);

DEFLABEL (Z__make_element_15)
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

DEFLABEL (make_element_33)
  CLOSURE_HEADER (LABEL_23);

DEFLABEL (make_element_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd17.Obj) = (MAKE_OBJECT (0, 9));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-10]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rcseht_so_3606b7393948758a [25] =
  {
    { "rcseht_so_code_1", 1, rcseht_so_code_1 },
    { "rcseht_so_code_2", 2, rcseht_so_code_2 },
    { "rcseht_so_code_3", 2, rcseht_so_code_3 },
    { "rcseht_so_code_4", 2, rcseht_so_code_4 },
    { "rcseht_so_code_5", 1, rcseht_so_code_5 },
    { "rcseht_so_code_6", 1, rcseht_so_code_6 },
    { "rcseht_so_code_7", 1, rcseht_so_code_7 },
    { "rcseht_so_code_8", 1, rcseht_so_code_8 },
    { "rcseht_so_code_9", 1, rcseht_so_code_9 },
    { "rcseht_so_code_10", 1, rcseht_so_code_10 },
    { "rcseht_so_code_11", 1, rcseht_so_code_11 },
    { "rcseht_so_code_12", 1, rcseht_so_code_12 },
    { "rcseht_so_code_13", 1, rcseht_so_code_13 },
    { "rcseht_so_code_14", 1, rcseht_so_code_14 },
    { "rcseht_so_code_15", 1, rcseht_so_code_15 },
    { "rcseht_so_code_16", 1, rcseht_so_code_16 },
    { "rcseht_so_code_17", 1, rcseht_so_code_17 },
    { "rcseht_so_code_18", 1, rcseht_so_code_18 },
    { "rcseht_so_code_19", 1, rcseht_so_code_19 },
    { "rcseht_so_code_20", 4, rcseht_so_code_20 },
    { "rcseht_so_code_21", 7, rcseht_so_code_21 },
    { "rcseht_so_code_22", 40, rcseht_so_code_22 },
    { "rcseht_so_code_23", 13, rcseht_so_code_23 },
    { "rcseht_so_code_24", 12, rcseht_so_code_24 },
    { "rcseht_so_code_25", 37, rcseht_so_code_25 }
  };

int
decl_rcseht_so_3606b7393948758a (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rcseht_so_3606b7393948758a);
  return (0);
}

DECLARE_COMPILED_CODE ("rcseht.so", 20, decl_rcseht_so_3606b7393948758a, rcseht_so_3606b7393948758a)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rcseht_so_data_3606b7393948758a [2852] =
  "\x80\x01\x20\x89\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\x28\x0d"
  "\x23\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x82\x88\xc1\xba\x0d\xbb\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83\x88\xc2\xbd\xb3\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x84\x88\xc3\xbf\x1d\xb3"
  "\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xc2\x1c\x81"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x86\x88\x1b\x82\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x85"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c"
  "\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x0e\x1c"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x81\x1b\x84\xb5\xb3\x24\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb7\x85\x84\xb5\x81\x0d\xc1\x82\x02\x1b\x86\x1b\x02\xb3\x24"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x84"
  "\x85\x02\x1d\x1b\x86\x1b\x02\xb3\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x02\x88\x1b\x84\xb5\x1d\xb2"
  "\x80\xb3\x24\x28\x0d\xbd\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xba\x1d\xb0\x02\x88\x81\x83\x84\x86\x02\x1b\x82\x1b\x02"
  "\x1d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xb8\x88\xb0\x1b"
  "\x1b\x2a\xb2\x2a\xb7\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x0d\x0d\xb5"
  "\x0d\x0d\x0d\x9d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x17\x1b\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x8f"
  "\x08\xc3\x0d\x1c\x0d\x0d\x0d\x0d\xb3\x0d\x9c\x1b\x2a\xb6\x2a\xb4"
  "\x2a\x1e\xb1\x2a\x9c\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x24\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x6f\x70\x74\x2f\x72"
  "\x63\x73\x65\x68\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x20"
  "\x04\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x02\x15\x04"
  "\x82\x02\x03\x0a\x02\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x0d\x2a\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2a"
  "\x02\x17\x06\x81\x81\x02\x16\x04\x82\x02\x05\x0b\x02\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x02\x19\x06\x81\x83\x02\x18\x04"
  "\x83\x04\x05\x0b\x02\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74"
  "\x21\x02\x02\x1b\x06\x81\x85\x02\x1a\x04\x84\x06\x05\x0c\x09\x02"
  "\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x0a\x1c\x04\x83"
  "\x04\x03\x0b\x02\x0a\x1d\x04\x83\x04\x03\x0c\x02\x08\x0a\x1e\x04"
  "\x83\x04\x03\x0d\x02\x09\x0a\x1f\x04\x83\x04\x03\x0e\x02\x0a\x0a"
  "\x20\x04\x83\x04\x03\x0f\x02\x0b\x0a\x21\x04\x83\x04\x03\x10\x02"
  "\x0c\x0a\x08\x22\x04\x83\x04\x03\x11\x02\x0d\x0a\x09\x23\x04\x83"
  "\x04\x03\x12\x02\x0e\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65"
  "\x74\x21\x13\x02\x24\x04\x84\x06\x03\x14\x02\x0f\x13\x02\x25\x04"
  "\x84\x06\x03\x15\x02\x10\x13\x02\x26\x04\x84\x06\x03\x16\x02\x11"
  "\x13\x02\x27\x04\x84\x06\x03\x17\x02\x12\x13\x02\x28\x04\x84\x06"
  "\x03\x18\x02\x13\x13\x02\x08\x29\x04\x84\x06\x03\x19\x02\x14\x13"
  "\x02\x09\x2a\x04\x84\x06\x03\x1a\x02\x15\x0a\x0f\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e"
  "\x31\x1b\x02\x2e\x0a\x81\x85\x02\x2d\x08\x81\x83\x02\x2c\x06\x81"
  "\x83\x02\x2b\x04\x83\x04\x09\x12\x1c\x02\x16\x0a\x02\x05\x17\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x65\x71\x75\x69\x76\x61"
  "\x6c\x65\x6e\x74\x3f\x02\x35\x10\x81\x89\x02\x34\x0e\x81\x87\x02"
  "\x33\x0c\x81\x87\x02\x32\x0a\x81\x87\x02\x31\x08\x81\x85\x02\x30"
  "\x06\x81\x85\x02\x2f\x04\x84\x06\x0f\x1c\x1d\x02\x17\x09\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x04\x63\x61\x72\x08\x0a\x13\x09\x02\x03"
  "\x14\x72\x74\x6c\x3a\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d"
  "\x63\x6f\x73\x74\x03\x0d\x6d\x61\x6b\x65\x2d\x65\x6c\x65\x6d\x65"
  "\x6e\x74\x1e\x03\x5d\x52\x81\x8b\x02\x5c\x50\x81\x8b\x02\x5b\x4e"
  "\x81\x8d\x02\x5a\x4c\x81\x8b\x02\x59\x4a\x81\x8b\x02\x58\x48\x81"
  "\x8b\x02\x57\x46\x81\x8b\x02\x56\x44\x81\x8b\x02\x55\x42\x81\x8b"
  "\x02\x54\x40\x81\x8b\x02\x53\x3e\x81\x8b\x02\x52\x3c\x81\x8b\x02"
  "\x51\x3a\x81\x8b\x02\x50\x38\x81\x8b\x02\x4f\x36\x81\x83\x02\x4e"
  "\x34\x81\x8d\x02\x4d\x32\x81\x8d\x02\x4c\x30\x81\x8b\x02\x4b\x2e"
  "\x81\x89\x02\x4a\x2c\x81\x8b\x02\x49\x2a\x81\x8b\x02\x48\x28\x81"
  "\x85\x02\x47\x26\x81\x85\x02\x46\x24\x81\x85\x02\x45\x22\x81\x85"
  "\x02\x44\x20\x81\x85\x02\x43\x1e\x81\x85\x02\x42\x1c\x81\x85\x02"
  "\x41\x1a\x81\x85\x02\x40\x18\x81\x85\x02\x3f\x16\x81\x85\x02\x3e"
  "\x14\x81\x85\x02\x3d\x12\x81\x85\x02\x3c\x10\x81\x85\x02\x3b\x0e"
  "\x81\x85\x02\x3a\x0c\x81\x83\x02\x39\x0a\x81\x83\x02\x38\x08\x81"
  "\x83\x02\x37\x06\x81\x87\x02\x36\x04\x85\x08\x51\x68\x1f\x02\x18"
  "\x08\x02\x0a\x13\x09\x02\x6a\x1c\x81\x89\x02\x69\x1a\x81\x89\x02"
  "\x68\x18\x81\x87\x02\x67\x16\x81\x85\x02\x66\x14\x81\x85\x02\x65"
  "\x12\x81\x89\x02\x64\x10\x81\x87\x02\x63\x0e\x81\x85\x02\x62\x0c"
  "\x84\x06\x61\x0a\x81\x85\x02\x60\x08\x81\x87\x02\x5f\x06\x81\x87"
  "\x02\x5e\x04\x81\x87\x02\x1b\x29\x02\x19\x0a\x02\x02\x04\x13\x68"
  "\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2d\x64\x65\x6c\x65\x74\x65"
  "\x21\x02\x76\x1a\x81\x87\x02\x75\x18\x81\x87\x02\x74\x16\x81\x87"
  "\x02\x73\x14\x81\x87\x02\x72\x12\x81\x87\x02\x71\x10\x81\x85\x02"
  "\x70\x0e\x81\x85\x02\x6f\x0c\x81\x85\x02\x6e\x0a\x81\x85\x02\x6d"
  "\x08\x81\x85\x02\x6c\x06\x81\x85\x02\x6b\x04\x83\x04\x19\x27\x02"
  "\x1a\x08\x13\x0a\x09\x02\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x3e"
  "\x6c\x69\x73\x74\x04\x04\x6d\x61\x70\x04\x09\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x0a\x0e\x25\x6d\x61\x6b\x65\x2d\x65\x6c\x65\x6d\x65"
  "\x6e\x74\x13\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f"
  "\x72\x06\x9b\x01\x4c\xfd\xff\x03\x9a\x01\x4a\xfd\xff\x03\x99\x01"
  "\x48\xfd\xff\x03\x98\x01\x46\xfd\xff\x03\x97\x01\x44\x81\x85\x02"
  "\x96\x01\x42\x81\x85\x02\x95\x01\x40\x81\x85\x02\x94\x01\x3e\x81"
  "\x85\x02\x93\x01\x3c\x81\x85\x02\x92\x01\x3a\x81\x85\x02\x91\x01"
  "\x38\x81\x85\x02\x90\x01\x36\x81\x95\x02\x8f\x01\x34\x81\x93\x02"
  "\x8e\x01\x32\x81\x91\x02\x8d\x01\x30\x81\x8b\x02\x8c\x01\x2e\x81"
  "\x89\x02\x8b\x01\x2c\x81\x87\x02\x8a\x01\x2a\x81\x85\x02\x89\x01"
  "\x28\x81\x85\x02\x88\x01\x26\x81\x85\x02\x87\x01\x24\x81\x85\x02"
  "\x86\x01\x22\x81\x85\x02\x85\x01\x20\x81\x85\x02\x84\x01\x1e\x81"
  "\x85\x02\x83\x01\x1c\x81\x85\x02\x82\x01\x1a\x81\x85\x02\x81\x01"
  "\x18\x81\x85\x02\x80\x01\x16\x81\x85\x02\x7f\x14\x81\x85\x02\x7e"
  "\x12\x81\x85\x02\x7d\x10\x81\x85\x02\x7c\x0e\x81\x85\x02\x7b\x0c"
  "\x81\x85\x02\x7a\x0a\x83\x04\x79\x08\x81\x83\x02\x78\x06\x81\x83"
  "\x02\x77\x04\x83\x04\x4b\x63\x0a\x1a\x1b\x0a\x04\x04\x0c\x1f\x04"
  "\x1d\x04\x1c\x04\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2d"
  "\x63\x6f\x70\x79\x19\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2d"
  "\x64\x65\x6c\x65\x74\x65\x2d\x63\x6c\x61\x73\x73\x21\x13\x68\x61"
  "\x73\x68\x2d\x74\x61\x62\x6c\x65\x2d\x69\x6e\x73\x65\x72\x74\x21"
  "\x12\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2d\x6c\x6f\x6f\x6b"
  "\x75\x70\x09\x65\x6c\x65\x6d\x65\x6e\x74\x3f\x1e\x19\x73\x65\x74"
  "\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x66\x69\x72\x73\x74\x2d\x76"
  "\x61\x6c\x75\x65\x21\x1c\x73\x65\x74\x2d\x65\x6c\x65\x6d\x65\x6e"
  "\x74\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x76\x61\x6c\x75\x65"
  "\x21\x18\x73\x65\x74\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x6e\x65"
  "\x78\x74\x2d\x76\x61\x6c\x75\x65\x21\x1b\x73\x65\x74\x2d\x65\x6c"
  "\x65\x6d\x65\x6e\x74\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x68"
  "\x61\x73\x68\x21\x17\x73\x65\x74\x2d\x65\x6c\x65\x6d\x65\x6e\x74"
  "\x2d\x6e\x65\x78\x74\x2d\x68\x61\x73\x68\x21\x18\x73\x65\x74\x2d"
  "\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x69\x6e\x2d\x6d\x65\x6d\x6f\x72"
  "\x79\x3f\x21\x12\x73\x65\x74\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x2d"
  "\x63\x6f\x73\x74\x21\x14\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x66\x69"
  "\x72\x73\x74\x2d\x76\x61\x6c\x75\x65\x17\x65\x6c\x65\x6d\x65\x6e"
  "\x74\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x76\x61\x6c\x75\x65"
  "\x13\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x6e\x65\x78\x74\x2d\x76\x61"
  "\x6c\x75\x65\x16\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x70\x72\x65\x76"
  "\x69\x6f\x75\x73\x2d\x68\x61\x73\x68\x12\x65\x6c\x65\x6d\x65\x6e"
  "\x74\x2d\x6e\x65\x78\x74\x2d\x68\x61\x73\x68\x13\x65\x6c\x65\x6d"
  "\x65\x6e\x74\x2d\x69\x6e\x2d\x6d\x65\x6d\x6f\x72\x79\x3f\x0d\x65"
  "\x6c\x65\x6d\x65\x6e\x74\x2d\x63\x6f\x73\x74\x13\x65\x6c\x65\x6d"
  "\x65\x6e\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x10\x1a"
  "\x04\x19\x04\x18\x04\x17\x04\x16\x04\x15\x04\x14\x04\x12\x04\x11"
  "\x04\x10\x04\x0f\x04\x0e\x04\x0d\x04\x0c\x04\x0b\x04\x10\x13\x08"
  "\x65\x6c\x65\x6d\x65\x6e\x74\x0b\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x05\x63\x6f\x73\x74\x0b\x69\x6e\x2d\x6d\x65\x6d\x6f\x72"
  "\x79\x3f\x0a\x6e\x65\x78\x74\x2d\x68\x61\x73\x68\x0e\x70\x72\x65"
  "\x76\x69\x6f\x75\x73\x2d\x68\x61\x73\x68\x0b\x6e\x65\x78\x74\x2d"
  "\x76\x61\x6c\x75\x65\x0f\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x76"
  "\x61\x6c\x75\x65\x0c\x66\x69\x72\x73\x74\x2d\x76\x61\x6c\x75\x65"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x0c\x72\x74\x64\x3a\x65\x6c\x65\x6d\x65\x6e\x74\x1f\x08\x65"
  "\x6c\x65\x6d\x65\x6e\x74\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c"
  "\x65\x2d\x73\x65\x74\x21\x0f\x68\x61\x73\x68\x2d\x74\x61\x62\x6c"
  "\x65\x2d\x72\x65\x66\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x2d\x73\x69\x7a\x65\x10\x6d\x61\x6b\x65\x2d\x68\x61\x73\x68\x2d"
  "\x74\x61\x62\x6c\x65\x09\x04\x04\x04\x04\x05\x10\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x03\x19\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x74\x61\x67\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x74\x79\x70\x65\x04\x1f\x02\x03\x0f\x73\x79\x6d\x62"
  "\x6f\x6c\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\x12\x73\x74\x61\x6e"
  "\x64\x61\x72\x64\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x03\x14\x2a"
  "\x80\x80\x04\x13\x28\x81\x81\x02\x12\x26\x81\x81\x02\x11\x24\x81"
  "\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x87"
  "\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x93\x02\x0b\x18\x81\x85\x02"
  "\x0a\x16\x81\x83\x02\x09\x14\x81\x85\x02\x08\x12\x81\x87\x02\x07"
  "\x10\x81\x83\x02\x06\x0e\x81\x8b\x02\x05\x0c\x81\x87\x02\x04\x0a"
  "\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02\x01\x04\x81"
  "\x83\x02\x29\x4b";

SCHEME_OBJECT *
rcseht_so_data_3606b7393948758a (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rcseht_so_data_3606b7393948758a [0]))), (sizeof (prog_rcseht_so_data_3606b7393948758a)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_30]));
}

DECLARE_COMPILED_DATA_NS ("rcseht.so", rcseht_so_data_3606b7393948758a)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rcseht.so", "7e2395e4e14e2c25")
