/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:39-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto make_dbg_info_vector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_dbg_info_vector_3)
DEFLABEL (make_dbg_info_vector_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd14.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd15.Obj) = (current_block [OBJECT_1_0]);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-7]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
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
infstr_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_info_vector_compilation_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_vector_compilation_type_3)
DEFLABEL (dbg_info_vector_compilation_type_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
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
infstr_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_info_vector_root_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_vector_root_block_3)
DEFLABEL (dbg_info_vector_root_block_0)
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
infstr_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_info_vector_other_blocks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_vector_other_blocks_3)
DEFLABEL (dbg_info_vector_other_blocks_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
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
infstr_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_info_vector_tl_bound_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_vector_tl_bound_3)
DEFLABEL (dbg_info_vector_tl_bound_0)
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
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_info_vector_tl_free_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_vector_tl_free_3)
DEFLABEL (dbg_info_vector_tl_free_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
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
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define ENVIRONMENT_LABEL_7_3 16
#define DEBUGGING_LABEL_7_2 15
#define OBJECT_7_4 14
#define OBJECT_7_3 13
#define OBJECT_7_2 12
#define OBJECT_7_1 11
#define OBJECT_7_0 10
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_7_4);
      goto new_dbg_info_vectorP_4;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_dbg_info_vectorP_10)
DEFLABEL (new_dbg_info_vectorP_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_7_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_7_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_7_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 12
#define DEBUGGING_LABEL_8_2 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto dbg_info_vectorP_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_vectorP_5)
DEFLABEL (dbg_info_vectorP_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
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
infstr_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_9_4);
      goto old_dbg_info_vectorP_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (old_dbg_info_vectorP_6)
DEFLABEL (old_dbg_info_vectorP_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if (! ((Wrd6.uLng) == 1))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_10)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_9_1])))
    goto label_8;
  Rvl = (current_block [OBJECT_9_2]);
  goto label_7;

DEFLABEL (label_11)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_9 7
#define LABEL_10_10 9
#define LABEL_10_7 11
#define LABEL_10_12 13
#define LABEL_10_13 15
#define LABEL_10_15 17
#define LABEL_10_16 19
#define ENVIRONMENT_LABEL_10_3 39
#define DEBUGGING_LABEL_10_2 38
#define OBJECT_10_6 37
#define OBJECT_10_5 36
#define OBJECT_10_4 35
#define OBJECT_10_3 34
#define OBJECT_10_2 33
#define OBJECT_10_1 32
#define OBJECT_10_0 31
#define EXECUTE_CACHE_10_17 21
#define EXECUTE_CACHE_10_14 23
#define EXECUTE_CACHE_10_11 25
#define EXECUTE_CACHE_10_8 27
#define EXECUTE_CACHE_10_6 29
#define FREE_REFERENCES_LABEL_10_0 20
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd48;
  machine_word Wrd47;
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
      current_block = (Rpc - LABEL_10_4);
      goto dbg_info_vector_blocks_vector_12;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_9);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_10_15);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_10_16);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_vector_blocks_vector_19)
DEFLABEL (dbg_info_vector_blocks_vector_12)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  goto lambda_0;

DEFLABEL (label_21)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_28;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_27)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_22;
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  Rsp = (& (Rsp [1]));
  goto lambda_0;

DEFLABEL (label_23)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_26;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_24;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  Rvl = ((Wrd18.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 1);

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 1);

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_33;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_33;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_32)
  (Wrd28.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_31;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd37.Lng))))
    goto label_31;
  (Wrd29.Obj) = ((Wrd35.pObj) [4]);

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (label_31)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_10_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_15)
  (Wrd29.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_10_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_14)
  (Wrd7.Obj) = Rvl;
  goto label_32;

DEFLABEL (lambda_20)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_10_16);
  (Wrd5.Obj) = (current_block [OBJECT_10_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_10_6]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_9 9
#define LABEL_11_10 11
#define LABEL_11_12 13
#define LABEL_11_13 15
#define LABEL_11_14 17
#define ENVIRONMENT_LABEL_11_3 34
#define DEBUGGING_LABEL_11_2 33
#define OBJECT_11_5 32
#define OBJECT_11_4 31
#define OBJECT_11_3 30
#define OBJECT_11_2 29
#define OBJECT_11_1 28
#define OBJECT_11_0 27
#define EXECUTE_CACHE_11_15 19
#define EXECUTE_CACHE_11_11 21
#define EXECUTE_CACHE_11_8 23
#define EXECUTE_CACHE_11_6 25
#define FREE_REFERENCES_LABEL_11_0 18
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
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
      goto dbg_info_vector_purification_root_10;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_11_12);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_11_14);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_vector_purification_root_16)
DEFLABEL (dbg_info_vector_purification_root_10)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  goto lambda_0;

DEFLABEL (label_18)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_27;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rsp = (& (Rsp [1]));
  goto lambda_0;

DEFLABEL (label_20)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_25;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_24)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_23;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_21;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  Rvl = ((Wrd25.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 1);

DEFLABEL (label_23)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_14)
  (Wrd16.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_30;

DEFLABEL (label_29)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_30)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_29;
  Rvl = ((Wrd16.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_17)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_11_14);
  (Wrd5.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_11_5]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_15]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_8 11
#define LABEL_12_9 13
#define LABEL_12_10 15
#define LABEL_12_11 17
#define LABEL_12_12 19
#define LABEL_12_13 21
#define LABEL_12_14 23
#define LABEL_12_15 25
#define LABEL_12_16 27
#define ENVIRONMENT_LABEL_12_3 34
#define DEBUGGING_LABEL_12_2 33
#define OBJECT_12_4 32
#define OBJECT_12_3 31
#define OBJECT_12_2 30
#define OBJECT_12_1 29
#define OBJECT_12_0 28
#define FREE_REFERENCES_LABEL_12_0 28
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd109;
  machine_word Wrd103;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_12_4);
      goto Z__compound_itemsP_18;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_12_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_12_10);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_12_11);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_12_12);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_12_13);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_12_14);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_12_15);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_12_16);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__compound_itemsP_33)
DEFLABEL (Z__compound_itemsP_18)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_36;

DEFLABEL (label_35)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  if (! ((Wrd6.uLng) == 1))
    goto label_60;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_59)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_12_1])))
    goto label_35;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_58;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_57)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_35;
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_56;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_55)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_54;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd38.Obj) = ((Wrd39.pObj) [0]);

DEFLABEL (label_53)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_35;
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_52;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_51)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_50;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [1]);

DEFLABEL (label_49)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_35;
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_48;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_47)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_46;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd72.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_45)
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_44;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd79.Obj) = ((Wrd80.pObj) [0]);

DEFLABEL (label_43)
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd86.uLng) == 10))
    goto label_35;
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_42;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd87.Obj) = ((Wrd89.pObj) [1]);

DEFLABEL (label_41)
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd98.uLng) == 1))
    goto label_40;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd96.Obj) = ((Wrd97.pObj) [1]);

DEFLABEL (label_39)
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd105.uLng) == 1))
    goto label_38;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd103.Obj) = ((Wrd104.pObj) [1]);

DEFLABEL (label_37)
  if (! ((Wrd103.Obj) == (current_block [OBJECT_12_3])))
    goto label_35;
  Rvl = (current_block [OBJECT_12_4]);
  goto label_34;

DEFLABEL (label_38)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_31)
  (Wrd103.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_30)
  (Wrd96.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_29)
  (Wrd87.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_28)
  (Wrd79.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_27)
  (Wrd72.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_26)
  (Wrd63.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_25)
  (Wrd55.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_24)
  (Wrd46.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_23)
  (Wrd38.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_22)
  (Wrd29.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_21)
  (Wrd19.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_20)
  (Wrd9.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_1
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
infstr_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto make_dbg_info_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_dbg_info_3)
DEFLABEL (make_dbg_info_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (current_block [OBJECT_13_0]);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto dbg_info_expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_expression_3)
DEFLABEL (dbg_info_expression_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

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

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 7
#define DEBUGGING_LABEL_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_info_procedures_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_procedures_3)
DEFLABEL (dbg_info_procedures_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
infstr_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_info_continuations_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_continuations_3)
DEFLABEL (dbg_info_continuations_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

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

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 7
#define DEBUGGING_LABEL_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_info_labels_desc_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_labels_desc_3)
DEFLABEL (dbg_info_labels_desc_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
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
infstr_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_dbg_info_labels_descB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dbg_info_labels_descB_3)
DEFLABEL (set_dbg_info_labels_descB_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
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
#define ENVIRONMENT_LABEL_19_3 16
#define DEBUGGING_LABEL_19_2 15
#define OBJECT_19_4 14
#define OBJECT_19_3 13
#define OBJECT_19_2 12
#define OBJECT_19_1 11
#define OBJECT_19_0 10
#define FREE_REFERENCES_LABEL_19_0 10
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_19_4);
      goto dbg_infoP_4;

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

DEFLABEL (dbg_infoP_10)
DEFLABEL (dbg_infoP_4)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_19_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_19_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_19_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
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
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_8 9
#define ENVIRONMENT_LABEL_20_3 17
#define DEBUGGING_LABEL_20_2 16
#define OBJECT_20_2 15
#define OBJECT_20_1 14
#define OBJECT_20_0 13
#define EXECUTE_CACHE_20_7 11
#define FREE_REFERENCES_LABEL_20_0 10
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_20_4);
      goto dbg_info_labels_6;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_labels_11)
DEFLABEL (dbg_info_labels_6)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_12;
  Rvl = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_15;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_15;
  ((Wrd16.pObj) [5]) = Rvl;

DEFLABEL (label_14)
  Rvl = (Rsp [0]);

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_20_0]);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_9)
  goto label_14;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_20_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 6
#define DEBUGGING_LABEL_21_2 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto make_dbg_expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_dbg_expression_3)
DEFLABEL (make_dbg_expression_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (current_block [OBJECT_21_0]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
infstr_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_expression_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_expression_block_3)
DEFLABEL (dbg_expression_block_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

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

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 7
#define DEBUGGING_LABEL_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_expression_label_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_expression_label_3)
DEFLABEL (dbg_expression_label_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
infstr_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_dbg_expression_labelB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dbg_expression_labelB_3)
DEFLABEL (set_dbg_expression_labelB_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_24_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define ENVIRONMENT_LABEL_25_3 16
#define DEBUGGING_LABEL_25_2 15
#define OBJECT_25_4 14
#define OBJECT_25_3 13
#define OBJECT_25_2 12
#define OBJECT_25_1 11
#define OBJECT_25_0 10
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_25_4);
      goto dbg_expressionP_4;

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

DEFLABEL (dbg_expressionP_10)
DEFLABEL (dbg_expressionP_4)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_25_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_25_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_25_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define ENVIRONMENT_LABEL_26_3 15
#define DEBUGGING_LABEL_26_2 14
#define OBJECT_26_2 13
#define OBJECT_26_1 12
#define OBJECT_26_0 11
#define EXECUTE_CACHE_26_7 9
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto dbg_expression_label_offset_2;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_expression_label_offset_7)
DEFLABEL (dbg_expression_label_offset_2)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_10)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_9;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (label_9)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_26_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

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
infstr_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
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
      goto make_dbg_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_dbg_procedure_3)
DEFLABEL (make_dbg_procedure_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd19.Obj) = (MAKE_OBJECT (0, 11));
  (Wrd20.Obj) = (current_block [OBJECT_27_0]);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (Wrd10.Obj) = (Rsp [7]);
  (Wrd12.Obj) = (Rsp [8]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd7.pObj) = (& (Rhp [-12]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 7
#define DEBUGGING_LABEL_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto dbg_procedure_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedure_block_3)
DEFLABEL (dbg_procedure_block_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

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

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 7
#define DEBUGGING_LABEL_29_2 6
#define OBJECT_29_1 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_procedure_label_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedure_label_3)
DEFLABEL (dbg_procedure_label_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 7
#define DEBUGGING_LABEL_30_2 6
#define OBJECT_30_1 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto dbg_procedure_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedure_type_3)
DEFLABEL (dbg_procedure_type_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

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

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 7
#define DEBUGGING_LABEL_31_2 6
#define OBJECT_31_1 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_procedure_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedure_name_3)
DEFLABEL (dbg_procedure_name_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 7
#define DEBUGGING_LABEL_32_2 6
#define OBJECT_32_1 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto dbg_procedure_required_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedure_required_3)
DEFLABEL (dbg_procedure_required_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

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

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 7
#define DEBUGGING_LABEL_33_2 6
#define OBJECT_33_1 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_procedure_optional_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedure_optional_3)
DEFLABEL (dbg_procedure_optional_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 7
#define DEBUGGING_LABEL_34_2 6
#define OBJECT_34_1 5
#define OBJECT_34_0 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto dbg_procedure_rest_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedure_rest_3)
DEFLABEL (dbg_procedure_rest_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

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

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 7
#define DEBUGGING_LABEL_35_2 6
#define OBJECT_35_1 5
#define OBJECT_35_0 4
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_procedure_auxiliary_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedure_auxiliary_3)
DEFLABEL (dbg_procedure_auxiliary_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 7
#define DEBUGGING_LABEL_36_2 6
#define OBJECT_36_1 5
#define OBJECT_36_0 4
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto dbg_procedure_external_label_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedure_external_label_3)
DEFLABEL (dbg_procedure_external_label_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_36_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

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

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 7
#define DEBUGGING_LABEL_37_2 6
#define OBJECT_37_1 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_procedure_source_code_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedure_source_code_3)
DEFLABEL (dbg_procedure_source_code_0)
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
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
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
infstr_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_dbg_procedure_labelB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dbg_procedure_labelB_3)
DEFLABEL (set_dbg_procedure_labelB_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_38_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 8
#define DEBUGGING_LABEL_39_2 7
#define OBJECT_39_2 6
#define OBJECT_39_1 5
#define OBJECT_39_0 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto set_dbg_procedure_external_labelB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dbg_procedure_external_labelB_3)
DEFLABEL (set_dbg_procedure_external_labelB_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_39_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [10]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_39_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_6 7
#define LABEL_40_7 9
#define ENVIRONMENT_LABEL_40_3 16
#define DEBUGGING_LABEL_40_2 15
#define OBJECT_40_4 14
#define OBJECT_40_3 13
#define OBJECT_40_2 12
#define OBJECT_40_1 11
#define OBJECT_40_0 10
#define FREE_REFERENCES_LABEL_40_0 10
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_40_4);
      goto dbg_procedureP_4;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_40_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedureP_10)
DEFLABEL (dbg_procedureP_4)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_40_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_40_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_40_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_5 3
#define LABEL_41_4 5
#define LABEL_41_6 7
#define LABEL_41_7 9
#define ENVIRONMENT_LABEL_41_3 18
#define DEBUGGING_LABEL_41_2 17
#define OBJECT_41_3 16
#define OBJECT_41_2 15
#define OBJECT_41_1 14
#define OBJECT_41_0 13
#define EXECUTE_CACHE_41_8 11
#define FREE_REFERENCES_LABEL_41_0 10
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_41_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_41_4);
      goto dbg_procedure_label_offset_4;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_41_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedure_label_offset_9)
DEFLABEL (dbg_procedure_label_offset_4)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_17;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_17;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  Wrd27 = Wrd24;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_12)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_11;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

DEFLABEL (label_11)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 1);

DEFLABEL (label_7)
  (Wrd28.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_41_2]);
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd47.uLng) == 10)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_15)
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_14;
  (Wrd27.Obj) = ((Wrd43.pObj) [3]);
  Rsp = (& (Rsp [3]));
  goto label_12;

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_41_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (Wrd27.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define ENVIRONMENT_LABEL_42_3 13
#define DEBUGGING_LABEL_42_2 12
#define OBJECT_42_0 11
#define EXECUTE_CACHE_42_6 9
#define FREE_REFERENCES_LABEL_42_0 8
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_42_4);
      goto dbg_procedure_P_2;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_procedure_P_5)
DEFLABEL (dbg_procedure_P_2)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_7)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_6;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd12.Lng) < (Wrd14.Lng))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_42_0]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define ENVIRONMENT_LABEL_43_3 6
#define DEBUGGING_LABEL_43_2 5
#define OBJECT_43_0 4
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_43_4);
      goto make_dbg_continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_dbg_continuation_3)
DEFLABEL (make_dbg_continuation_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd14.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd15.Obj) = (current_block [OBJECT_43_0]);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-7]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 7
#define DEBUGGING_LABEL_44_2 6
#define OBJECT_44_1 5
#define OBJECT_44_0 4
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto dbg_continuation_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_continuation_block_3)
DEFLABEL (dbg_continuation_block_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_44_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

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

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 7
#define DEBUGGING_LABEL_45_2 6
#define OBJECT_45_1 5
#define OBJECT_45_0 4
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_continuation_label_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_continuation_label_3)
DEFLABEL (dbg_continuation_label_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 7
#define DEBUGGING_LABEL_46_2 6
#define OBJECT_46_1 5
#define OBJECT_46_0 4
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto dbg_continuation_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_continuation_type_3)
DEFLABEL (dbg_continuation_type_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

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

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 7
#define DEBUGGING_LABEL_47_2 6
#define OBJECT_47_1 5
#define OBJECT_47_0 4
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_continuation_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_continuation_offset_3)
DEFLABEL (dbg_continuation_offset_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define ENVIRONMENT_LABEL_48_3 7
#define DEBUGGING_LABEL_48_2 6
#define OBJECT_48_1 5
#define OBJECT_48_0 4
#define FREE_REFERENCES_LABEL_48_0 4
#define NUMBER_OF_LINKER_SECTIONS_48_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto dbg_continuation_source_code_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_continuation_source_code_3)
DEFLABEL (dbg_continuation_source_code_0)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_48_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

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

#define LABEL_49_4 3
#define ENVIRONMENT_LABEL_49_3 8
#define DEBUGGING_LABEL_49_2 7
#define OBJECT_49_2 6
#define OBJECT_49_1 5
#define OBJECT_49_0 4
#define FREE_REFERENCES_LABEL_49_0 4
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto set_dbg_continuation_labelB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dbg_continuation_labelB_3)
DEFLABEL (set_dbg_continuation_labelB_0)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_49_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_49_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_7 9
#define ENVIRONMENT_LABEL_50_3 16
#define DEBUGGING_LABEL_50_2 15
#define OBJECT_50_4 14
#define OBJECT_50_3 13
#define OBJECT_50_2 12
#define OBJECT_50_1 11
#define OBJECT_50_0 10
#define FREE_REFERENCES_LABEL_50_0 10
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_50_4);
      goto dbg_continuationP_4;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_continuationP_10)
DEFLABEL (dbg_continuationP_4)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_50_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_50_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_50_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_6 7
#define ENVIRONMENT_LABEL_51_3 15
#define DEBUGGING_LABEL_51_2 14
#define OBJECT_51_2 13
#define OBJECT_51_1 12
#define OBJECT_51_0 11
#define EXECUTE_CACHE_51_7 9
#define FREE_REFERENCES_LABEL_51_0 8
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_51_4);
      goto dbg_continuation_label_offset_2;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_continuation_label_offset_7)
DEFLABEL (dbg_continuation_label_offset_2)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_10)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_9;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (label_9)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_51_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_6 5
#define LABEL_52_7 7
#define LABEL_52_5 9
#define LABEL_52_10 11
#define LABEL_52_11 13
#define LABEL_52_9 15
#define ENVIRONMENT_LABEL_52_3 24
#define DEBUGGING_LABEL_52_2 23
#define OBJECT_52_3 22
#define OBJECT_52_2 21
#define OBJECT_52_1 20
#define OBJECT_52_0 19
#define EXECUTE_CACHE_52_8 17
#define FREE_REFERENCES_LABEL_52_0 16
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_52_4);
      goto dbg_continuation_P_6;

    case 1:
      current_block = (Rpc - LABEL_52_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_52_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_52_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_52_11);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_52_9);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_continuation_P_13)
DEFLABEL (dbg_continuation_P_6)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_26;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_26;
  (Wrd8.Obj) = ((Wrd14.pObj) [3]);

DEFLABEL (label_25)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_24;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_22;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_22;
  (Wrd9.Obj) = ((Wrd15.pObj) [3]);

DEFLABEL (label_21)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_20;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_52_9);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_15)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_14;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd12.Lng) < (Wrd14.Lng))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_16;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_52_3]);

DEFLABEL (label_16)
DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_52_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_52_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define ENVIRONMENT_LABEL_53_3 6
#define DEBUGGING_LABEL_53_2 5
#define OBJECT_53_0 4
#define FREE_REFERENCES_LABEL_53_0 4
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_53_4);
      goto make_dbg_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_dbg_block_3)
DEFLABEL (make_dbg_block_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd15.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd16.Obj) = (current_block [OBJECT_53_0]);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 7
#define DEBUGGING_LABEL_54_2 6
#define OBJECT_54_1 5
#define OBJECT_54_0 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto dbg_block_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_type_3)
DEFLABEL (dbg_block_type_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

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

#define LABEL_55_4 3
#define ENVIRONMENT_LABEL_55_3 7
#define DEBUGGING_LABEL_55_2 6
#define OBJECT_55_1 5
#define OBJECT_55_0 4
#define FREE_REFERENCES_LABEL_55_0 4
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_block_parent_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_parent_3)
DEFLABEL (dbg_block_parent_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 7
#define DEBUGGING_LABEL_56_2 6
#define OBJECT_56_1 5
#define OBJECT_56_0 4
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto dbg_block_original_parent_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_original_parent_3)
DEFLABEL (dbg_block_original_parent_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

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

#define LABEL_57_4 3
#define ENVIRONMENT_LABEL_57_3 7
#define DEBUGGING_LABEL_57_2 6
#define OBJECT_57_1 5
#define OBJECT_57_0 4
#define FREE_REFERENCES_LABEL_57_0 4
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_block_layout_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_layout_3)
DEFLABEL (dbg_block_layout_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define ENVIRONMENT_LABEL_58_3 7
#define DEBUGGING_LABEL_58_2 6
#define OBJECT_58_1 5
#define OBJECT_58_0 4
#define FREE_REFERENCES_LABEL_58_0 4
#define NUMBER_OF_LINKER_SECTIONS_58_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto dbg_block_stack_link_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_stack_link_3)
DEFLABEL (dbg_block_stack_link_0)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

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

#define LABEL_59_4 3
#define ENVIRONMENT_LABEL_59_3 7
#define DEBUGGING_LABEL_59_2 6
#define OBJECT_59_1 5
#define OBJECT_59_0 4
#define FREE_REFERENCES_LABEL_59_0 4
#define NUMBER_OF_LINKER_SECTIONS_59_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_block_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_block_procedure_3)
DEFLABEL (dbg_block_procedure_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
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
infstr_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_dbg_block_procedureB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dbg_block_procedureB_3)
DEFLABEL (set_dbg_block_procedureB_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_60_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_6 7
#define LABEL_61_7 9
#define ENVIRONMENT_LABEL_61_3 16
#define DEBUGGING_LABEL_61_2 15
#define OBJECT_61_4 14
#define OBJECT_61_3 13
#define OBJECT_61_2 12
#define OBJECT_61_1 11
#define OBJECT_61_0 10
#define FREE_REFERENCES_LABEL_61_0 10
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_61_4);
      goto dbg_blockP_4;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_61_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_61_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_blockP_10)
DEFLABEL (dbg_blockP_4)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_61_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_61_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_61_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define ENVIRONMENT_LABEL_62_3 6
#define DEBUGGING_LABEL_62_2 5
#define OBJECT_62_0 4
#define FREE_REFERENCES_LABEL_62_0 4
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_62_4);
      goto make_dbg_variable_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_dbg_variable_3)
DEFLABEL (make_dbg_variable_0)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (current_block [OBJECT_62_0]);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
infstr_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dbg_variable_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_variable_name_3)
DEFLABEL (dbg_variable_name_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define ENVIRONMENT_LABEL_64_3 7
#define DEBUGGING_LABEL_64_2 6
#define OBJECT_64_1 5
#define OBJECT_64_0 4
#define FREE_REFERENCES_LABEL_64_0 4
#define NUMBER_OF_LINKER_SECTIONS_64_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto dbg_variable_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_variable_type_3)
DEFLABEL (dbg_variable_type_0)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_64_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

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

#define LABEL_65_4 3
#define ENVIRONMENT_LABEL_65_3 7
#define DEBUGGING_LABEL_65_2 6
#define OBJECT_65_1 5
#define OBJECT_65_0 4
#define FREE_REFERENCES_LABEL_65_0 4
#define NUMBER_OF_LINKER_SECTIONS_65_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_65_4);
      goto dbg_variable_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_variable_value_3)
DEFLABEL (dbg_variable_value_0)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_65_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

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

#define LABEL_66_4 3
#define ENVIRONMENT_LABEL_66_3 8
#define DEBUGGING_LABEL_66_2 7
#define OBJECT_66_2 6
#define OBJECT_66_1 5
#define OBJECT_66_0 4
#define FREE_REFERENCES_LABEL_66_0 4
#define NUMBER_OF_LINKER_SECTIONS_66_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_66_4);
      goto set_dbg_variable_valueB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dbg_variable_valueB_3)
DEFLABEL (set_dbg_variable_valueB_0)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_66_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_66_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define LABEL_67_7 9
#define ENVIRONMENT_LABEL_67_3 16
#define DEBUGGING_LABEL_67_2 15
#define OBJECT_67_4 14
#define OBJECT_67_3 13
#define OBJECT_67_2 12
#define OBJECT_67_1 11
#define OBJECT_67_0 10
#define FREE_REFERENCES_LABEL_67_0 10
#define NUMBER_OF_LINKER_SECTIONS_67_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_67_4);
      goto dbg_variableP_4;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_67_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_variableP_10)
DEFLABEL (dbg_variableP_4)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_67_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_67_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_67_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define ENVIRONMENT_LABEL_68_3 11
#define DEBUGGING_LABEL_68_2 10
#define OBJECT_68_0 9
#define EXECUTE_CACHE_68_6 7
#define FREE_REFERENCES_LABEL_68_0 6
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_68_4);
      goto dbg_label_offset_1;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_label_offset_5)
DEFLABEL (dbg_label_offset_1)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_7;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (label_7)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define ENVIRONMENT_LABEL_69_3 9
#define DEBUGGING_LABEL_69_2 8
#define OBJECT_69_1 7
#define OBJECT_69_0 6
#define FREE_REFERENCES_LABEL_69_0 6
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_69_4);
      goto dbg_label_externalP_1;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_label_externalP_5)
DEFLABEL (dbg_label_externalP_1)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_11;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd16.uLng) == 26)
    goto label_6;
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_6)
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd18.Lng) < 0)
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_69_1]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define ENVIRONMENT_LABEL_70_3 9
#define DEBUGGING_LABEL_70_2 8
#define OBJECT_70_1 7
#define OBJECT_70_0 6
#define FREE_REFERENCES_LABEL_70_0 6
#define NUMBER_OF_LINKER_SECTIONS_70_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_70_4);
      goto dbg_label_names_1;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_label_names_5)
DEFLABEL (dbg_label_names_1)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_7;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_6)
  (Wrd18.Obj) = (current_block [OBJECT_70_1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_5 3
#define LABEL_71_4 5
#define LABEL_71_6 7
#define LABEL_71_7 9
#define LABEL_71_8 11
#define LABEL_71_9 13
#define ENVIRONMENT_LABEL_71_3 19
#define DEBUGGING_LABEL_71_2 18
#define OBJECT_71_3 17
#define OBJECT_71_2 16
#define OBJECT_71_1 15
#define OBJECT_71_0 14
#define FREE_REFERENCES_LABEL_71_0 14
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd50;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd56;
  machine_word Wrd59;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_71_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_71_4);
      goto set_dbg_label_externalPB_6;

    case 2:
      current_block = (Rpc - LABEL_71_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_71_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_71_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_71_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dbg_label_externalPB_13)
DEFLABEL (set_dbg_label_externalPB_6)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_24;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_23)
  (Wrd17.Obj) = (Rsp [3]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_20;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if ((Wrd50.Lng) < 0)
    goto label_19;

DEFLABEL (label_18)
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_17;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd35.Lng) = (0 - (Wrd39.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd35.Lng)))
    goto label_17;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd32.Obj);
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 1)
    goto label_14;
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_2]), 2);

DEFLABEL (label_14)
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  ((Wrd44.pObj) [1]) = (Wrd32.Obj);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_71_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd27.Obj) = (current_block [OBJECT_71_1]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_10)
  (Wrd32.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  goto label_15;

DEFLABEL (label_20)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (label_21)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_22;
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if ((Wrd59.Lng) < 0)
    goto label_18;
  goto label_19;

DEFLABEL (label_22)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_7]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_18;

DEFLABEL (label_24)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_71_5);
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_7 7
#define LABEL_72_11 9
#define LABEL_72_9 11
#define ENVIRONMENT_LABEL_72_3 22
#define DEBUGGING_LABEL_72_2 21
#define EXECUTE_CACHE_72_12 13
#define EXECUTE_CACHE_72_10 15
#define EXECUTE_CACHE_72_8 17
#define EXECUTE_CACHE_72_6 19
#define FREE_REFERENCES_LABEL_72_0 12
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_72_4);
      goto compiled_code_block_debugging_wrapper_6;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_72_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_72_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_72_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_code_block_debugging_wrapper_9)
DEFLABEL (compiled_code_block_debugging_wrapper_6)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_72_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_72_9);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_72_11);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_5 3
#define LABEL_73_6 5
#define LABEL_73_4 7
#define LABEL_73_7 9
#define LABEL_73_8 11
#define LABEL_73_9 13
#define LABEL_73_10 15
#define LABEL_73_11 17
#define LABEL_73_12 19
#define LABEL_73_13 21
#define LABEL_73_14 23
#define LABEL_73_16 25
#define LABEL_73_17 27
#define LABEL_73_19 29
#define LABEL_73_21 31
#define LABEL_73_18 33
#define LABEL_73_23 35
#define LABEL_73_24 37
#define LABEL_73_25 39
#define ENVIRONMENT_LABEL_73_3 60
#define DEBUGGING_LABEL_73_2 59
#define OBJECT_73_11 58
#define OBJECT_73_10 57
#define OBJECT_73_9 56
#define OBJECT_73_8 55
#define OBJECT_73_7 54
#define OBJECT_73_6 53
#define OBJECT_73_5 52
#define OBJECT_73_4 51
#define OBJECT_73_3 50
#define OBJECT_73_2 49
#define OBJECT_73_1 48
#define OBJECT_73_0 47
#define EXECUTE_CACHE_73_22 41
#define EXECUTE_CACHE_73_20 43
#define EXECUTE_CACHE_73_15 45
#define FREE_REFERENCES_LABEL_73_0 40
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd144;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd131;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd128;
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd154;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd151;
  machine_word Wrd182;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd147;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd109;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd89;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd196;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd85;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd212;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd81;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd228;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd77;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_73_5);
      goto continuation_17;

    case 1:
      current_block = (Rpc - LABEL_73_6);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_73_4);
      goto debugging_wrapperP_28;

    case 3:
      current_block = (Rpc - LABEL_73_7);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_73_8);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_73_9);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_73_10);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_73_11);
      goto label_41;

    case 8:
      current_block = (Rpc - LABEL_73_12);
      goto label_40;

    case 9:
      current_block = (Rpc - LABEL_73_13);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_73_14);
      goto label_34;

    case 11:
      current_block = (Rpc - LABEL_73_16);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_73_17);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_73_19);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_73_21);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_73_18);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_73_23);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_73_24);
      goto label_44;

    case 18:
      current_block = (Rpc - LABEL_73_25);
      goto label_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_wrapperP_46)
DEFLABEL (debugging_wrapperP_28)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_48;

DEFLABEL (label_47)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_48)
  if (! ((Wrd6.uLng) == 10))
    goto label_92;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_91)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_73_1])))
    goto label_47;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_90;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_90;
  (Wrd21.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_89)
  if (! ((Wrd21.Obj) == (current_block [OBJECT_73_4])))
    goto label_47;
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_88;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd46.Lng))))
    goto label_88;
  (Wrd38.Obj) = ((Wrd44.pObj) [2]);

DEFLABEL (label_87)
  if ((Wrd38.Obj) == (current_block [OBJECT_73_5]))
    goto label_84;
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 10))
    goto label_86;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd63.Lng))))
    goto label_86;
  (Wrd55.Obj) = ((Wrd61.pObj) [2]);

DEFLABEL (label_85)
  if (! ((Wrd55.Obj) == (current_block [OBJECT_73_6])))
    goto label_47;

DEFLABEL (label_84)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_6]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd222.Obj) = (Rsp [1]);
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd222.Obj));
  if (! ((Wrd223.uLng) == 10))
    goto label_83;
  (Wrd219.pObj) = (OBJECT_ADDRESS (Wrd222.Obj));
  (Wrd220.Obj) = ((Wrd219.pObj) [0]);
  (Wrd221.Lng) = (FIXNUM_TO_LONG (Wrd220.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd221.Lng))))
    goto label_83;
  (Wrd77.Obj) = ((Wrd219.pObj) [3]);
  if ((Wrd77.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;

DEFLABEL (label_75)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_74)
  (Wrd105.Obj) = (Rsp [0]);
  if ((Wrd105.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  Rvl = (Wrd105.Obj);

DEFLABEL (label_49)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd118.Obj) = (Rsp [1]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 10))
    goto label_73;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd117.Lng))))
    goto label_73;
  (Wrd109.Obj) = ((Wrd115.pObj) [2]);

DEFLABEL (label_72)
  if ((Wrd109.Obj) == (current_block [OBJECT_73_5]))
    goto label_70;
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd138.Obj) = (Rsp [2]);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd139.uLng) == 10))
    goto label_69;
  (Wrd135.pObj) = (OBJECT_ADDRESS (Wrd138.Obj));
  (Wrd136.Obj) = ((Wrd135.pObj) [0]);
  (Wrd137.Lng) = (FIXNUM_TO_LONG (Wrd136.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd137.Lng))))
    goto label_69;
  (Wrd131.Obj) = ((Wrd135.pObj) [3]);
  (* (--Rsp)) = (Wrd131.Obj);

DEFLABEL (label_68)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_22]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_73_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;

DEFLABEL (label_66)
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_18]))));
  (* (--Rsp)) = (Wrd151.Obj);
  (Wrd161.Obj) = (Rsp [2]);
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd162.uLng) == 10))
    goto label_65;
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd159.Obj) = ((Wrd158.pObj) [0]);
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd159.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd160.Lng))))
    goto label_65;
  (Wrd154.Obj) = ((Wrd158.pObj) [4]);
  (* (--Rsp)) = (Wrd154.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_20]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_73_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_63;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_63;
  (Wrd7.Obj) = ((Wrd13.pObj) [5]);

DEFLABEL (label_62)
  if (INDEX_FIXNUM_P (Wrd7.Obj))
    goto label_53;

DEFLABEL (label_52)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_51)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_61;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd56.Lng))))
    goto label_61;
  (Wrd27.Obj) = ((Wrd54.pObj) [6]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;

DEFLABEL (label_56)
  (Wrd29.Obj) = (current_block [OBJECT_73_11]);
  goto label_54;

DEFLABEL (label_55)
  (Wrd29.Obj) = (current_block [OBJECT_73_10]);

DEFLABEL (label_54)
DEFLABEL (label_60)
  (Rsp [0]) = (Wrd29.Obj);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_57;
  Rvl = (Wrd29.Obj);
  goto label_51;

DEFLABEL (label_57)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_59;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd42.Lng))))
    goto label_59;
  (Wrd34.Obj) = ((Wrd40.pObj) [6]);

DEFLABEL (label_58)
  (Rsp [1]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_15]));

DEFLABEL (label_59)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.Obj) = (current_block [OBJECT_73_9]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_25]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_43)
  (Wrd34.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (current_block [OBJECT_73_9]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_24]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_56;

DEFLABEL (label_63)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_73_8]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_23]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_42)
  (Wrd7.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd163.Obj) = (Rsp [2]);
  (Wrd164.Obj) = (current_block [OBJECT_73_7]);
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_19]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_49;

DEFLABEL (label_69)
  (Wrd140.Obj) = (Rsp [2]);
  (Wrd141.Obj) = (current_block [OBJECT_73_6]);
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_21]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_70)
  (Wrd176.Obj) = (Rsp [1]);
  (Wrd177.uLng) = (OBJECT_TYPE (Wrd176.Obj));
  if (! ((Wrd177.uLng) == 10))
    goto label_71;
  (Wrd173.pObj) = (OBJECT_ADDRESS (Wrd176.Obj));
  (Wrd174.Obj) = ((Wrd173.pObj) [0]);
  (Wrd175.Lng) = (FIXNUM_TO_LONG (Wrd174.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd175.Lng))))
    goto label_71;
  (Wrd147.Obj) = ((Wrd173.pObj) [3]);
  if ((Wrd147.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_67;

DEFLABEL (label_71)
  (Wrd178.Obj) = (Rsp [1]);
  (Wrd179.Obj) = (current_block [OBJECT_73_6]);
  (Wrd182.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_17]))));
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd179.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_67;

DEFLABEL (label_73)
  (Wrd120.Obj) = (Rsp [1]);
  (Wrd121.Obj) = (current_block [OBJECT_73_5]);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_16]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_35)
  (Wrd109.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_76)
  (Wrd206.Obj) = (Rsp [1]);
  (Wrd207.uLng) = (OBJECT_TYPE (Wrd206.Obj));
  if (! ((Wrd207.uLng) == 10))
    goto label_82;
  (Wrd203.pObj) = (OBJECT_ADDRESS (Wrd206.Obj));
  (Wrd204.Obj) = ((Wrd203.pObj) [0]);
  (Wrd205.Lng) = (FIXNUM_TO_LONG (Wrd204.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd205.Lng))))
    goto label_82;
  (Wrd81.Obj) = ((Wrd203.pObj) [4]);
  if (! ((Wrd81.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_75;

DEFLABEL (label_81)
  (Wrd190.Obj) = (Rsp [1]);
  (Wrd191.uLng) = (OBJECT_TYPE (Wrd190.Obj));
  if (! ((Wrd191.uLng) == 10))
    goto label_80;
  (Wrd187.pObj) = (OBJECT_ADDRESS (Wrd190.Obj));
  (Wrd188.Obj) = ((Wrd187.pObj) [0]);
  (Wrd189.Lng) = (FIXNUM_TO_LONG (Wrd188.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd189.Lng))))
    goto label_80;
  (Wrd85.Obj) = ((Wrd187.pObj) [5]);
  if (! ((Wrd85.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_75;

DEFLABEL (label_79)
  (Wrd96.Obj) = (Rsp [1]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 10))
    goto label_78;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [0]);
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd95.Lng))))
    goto label_78;
  (Wrd89.Obj) = ((Wrd93.pObj) [6]);
  (* (--Rsp)) = (Wrd89.Obj);

DEFLABEL (label_77)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_73_6);
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_78)
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd99.Obj) = (current_block [OBJECT_73_9]);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_14]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd192.Obj) = (Rsp [1]);
  (Wrd193.Obj) = (current_block [OBJECT_73_8]);
  (Wrd196.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_13]))));
  (* (--Rsp)) = (Wrd196.Obj);
  (* (--Rsp)) = (Wrd193.Obj);
  (* (--Rsp)) = (Wrd192.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  goto label_75;

DEFLABEL (label_82)
  (Wrd208.Obj) = (Rsp [1]);
  (Wrd209.Obj) = (current_block [OBJECT_73_7]);
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_12]))));
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd208.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  goto label_75;

DEFLABEL (label_83)
  (Wrd224.Obj) = (Rsp [1]);
  (Wrd225.Obj) = (current_block [OBJECT_73_6]);
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_11]))));
  (* (--Rsp)) = (Wrd228.Obj);
  (* (--Rsp)) = (Wrd225.Obj);
  (* (--Rsp)) = (Wrd224.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_75;

DEFLABEL (label_86)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.Obj) = (current_block [OBJECT_73_5]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_10]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_33)
  (Wrd55.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_73_5]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_9]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_32)
  (Wrd38.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_73_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_31)
  (Wrd21.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 1);

DEFLABEL (label_30)
  (Wrd9.Obj) = Rvl;
  goto label_91;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define ENVIRONMENT_LABEL_74_3 7
#define DEBUGGING_LABEL_74_2 6
#define OBJECT_74_1 5
#define OBJECT_74_0 4
#define FREE_REFERENCES_LABEL_74_0 4
#define NUMBER_OF_LINKER_SECTIONS_74_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_74_4);
      goto debugging_wrapper_version_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_wrapper_version_3)
DEFLABEL (debugging_wrapper_version_0)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_74_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

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

#define LABEL_75_4 3
#define ENVIRONMENT_LABEL_75_3 7
#define DEBUGGING_LABEL_75_2 6
#define OBJECT_75_1 5
#define OBJECT_75_0 4
#define FREE_REFERENCES_LABEL_75_0 4
#define NUMBER_OF_LINKER_SECTIONS_75_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_75_4);
      goto debugging_wrapper_key_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_wrapper_key_3)
DEFLABEL (debugging_wrapper_key_0)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_75_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

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

#define LABEL_76_4 3
#define ENVIRONMENT_LABEL_76_3 7
#define DEBUGGING_LABEL_76_2 6
#define OBJECT_76_1 5
#define OBJECT_76_0 4
#define FREE_REFERENCES_LABEL_76_0 4
#define NUMBER_OF_LINKER_SECTIONS_76_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_76_4);
      goto debugging_wrapper_pathname_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_wrapper_pathname_3)
DEFLABEL (debugging_wrapper_pathname_0)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_76_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

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

#define LABEL_77_4 3
#define ENVIRONMENT_LABEL_77_3 8
#define DEBUGGING_LABEL_77_2 7
#define OBJECT_77_2 6
#define OBJECT_77_1 5
#define OBJECT_77_0 4
#define FREE_REFERENCES_LABEL_77_0 4
#define NUMBER_OF_LINKER_SECTIONS_77_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_77_4);
      goto set_debugging_wrapper_pathnameB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_debugging_wrapper_pathnameB_3)
DEFLABEL (set_debugging_wrapper_pathnameB_0)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_77_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_77_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define ENVIRONMENT_LABEL_78_3 7
#define DEBUGGING_LABEL_78_2 6
#define OBJECT_78_1 5
#define OBJECT_78_0 4
#define FREE_REFERENCES_LABEL_78_0 4
#define NUMBER_OF_LINKER_SECTIONS_78_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_78_4);
      goto debugging_wrapper_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_wrapper_index_3)
DEFLABEL (debugging_wrapper_index_0)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_78_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

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

#define LABEL_79_4 3
#define ENVIRONMENT_LABEL_79_3 7
#define DEBUGGING_LABEL_79_2 6
#define OBJECT_79_1 5
#define OBJECT_79_0 4
#define FREE_REFERENCES_LABEL_79_0 4
#define NUMBER_OF_LINKER_SECTIONS_79_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto debugging_wrapper_info_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_wrapper_info_3)
DEFLABEL (debugging_wrapper_info_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define ENVIRONMENT_LABEL_80_3 8
#define DEBUGGING_LABEL_80_2 7
#define OBJECT_80_2 6
#define OBJECT_80_1 5
#define OBJECT_80_0 4
#define FREE_REFERENCES_LABEL_80_0 4
#define NUMBER_OF_LINKER_SECTIONS_80_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_80_4);
      goto set_debugging_wrapper_infoB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_debugging_wrapper_infoB_3)
DEFLABEL (set_debugging_wrapper_infoB_0)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_80_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_80_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define LABEL_81_9 7
#define LABEL_81_10 9
#define LABEL_81_11 11
#define LABEL_81_12 13
#define LABEL_81_13 15
#define LABEL_81_14 17
#define LABEL_81_15 19
#define LABEL_81_16 21
#define LABEL_81_17 23
#define LABEL_81_18 25
#define LABEL_81_19 27
#define LABEL_81_20 29
#define LABEL_81_21 31
#define LABEL_81_22 33
#define LABEL_81_23 35
#define LABEL_81_24 37
#define LABEL_81_25 39
#define LABEL_81_26 41
#define LABEL_81_27 43
#define LABEL_81_28 45
#define LABEL_81_29 47
#define LABEL_81_30 49
#define LABEL_81_31 51
#define LABEL_81_7 53
#define LABEL_81_32 55
#define LABEL_81_33 57
#define LABEL_81_34 59
#define LABEL_81_35 61
#define LABEL_81_36 63
#define ENVIRONMENT_LABEL_81_3 75
#define DEBUGGING_LABEL_81_2 74
#define OBJECT_81_4 73
#define OBJECT_81_3 72
#define OBJECT_81_2 71
#define OBJECT_81_1 70
#define OBJECT_81_0 69
#define EXECUTE_CACHE_81_8 65
#define EXECUTE_CACHE_81_6 67
#define FREE_REFERENCES_LABEL_81_0 64
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd13;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd117;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd82;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd156;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd147;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd129;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd128;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd171;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd162;
  machine_word Wrd214;
  machine_word Wrd206;
  machine_word Wrd208;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd205;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd201;
  machine_word Wrd198;
  machine_word Wrd190;
  machine_word Wrd192;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd189;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd185;
  machine_word Wrd182;
  machine_word Wrd174;
  machine_word Wrd176;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd235;
  machine_word Wrd227;
  machine_word Wrd229;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd226;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd217;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_81_4);
      goto convert_old_debugging_wrapper_39;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_81_9);
      goto lambda_0;

    case 3:
      current_block = (Rpc - LABEL_81_10);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_81_11);
      goto label_61;

    case 5:
      current_block = (Rpc - LABEL_81_12);
      goto label_62;

    case 6:
      current_block = (Rpc - LABEL_81_13);
      goto continuation_28;

    case 7:
      current_block = (Rpc - LABEL_81_14);
      goto label_56;

    case 8:
      current_block = (Rpc - LABEL_81_15);
      goto label_57;

    case 9:
      current_block = (Rpc - LABEL_81_16);
      goto label_58;

    case 10:
      current_block = (Rpc - LABEL_81_17);
      goto label_59;

    case 11:
      current_block = (Rpc - LABEL_81_18);
      goto label_60;

    case 12:
      current_block = (Rpc - LABEL_81_19);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_81_20);
      goto label_55;

    case 14:
      current_block = (Rpc - LABEL_81_21);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_81_22);
      goto label_51;

    case 16:
      current_block = (Rpc - LABEL_81_23);
      goto label_52;

    case 17:
      current_block = (Rpc - LABEL_81_24);
      goto label_53;

    case 18:
      current_block = (Rpc - LABEL_81_25);
      goto label_54;

    case 19:
      current_block = (Rpc - LABEL_81_26);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_81_27);
      goto label_46;

    case 21:
      current_block = (Rpc - LABEL_81_28);
      goto label_47;

    case 22:
      current_block = (Rpc - LABEL_81_29);
      goto label_48;

    case 23:
      current_block = (Rpc - LABEL_81_30);
      goto label_49;

    case 24:
      current_block = (Rpc - LABEL_81_31);
      goto label_50;

    case 25:
      current_block = (Rpc - LABEL_81_7);
      goto continuation_2;

    case 26:
      current_block = (Rpc - LABEL_81_32);
      goto label_45;

    case 27:
      current_block = (Rpc - LABEL_81_33);
      goto label_44;

    case 28:
      current_block = (Rpc - LABEL_81_34);
      goto label_41;

    case 29:
      current_block = (Rpc - LABEL_81_35);
      goto label_42;

    case 30:
      current_block = (Rpc - LABEL_81_36);
      goto label_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (convert_old_debugging_wrapper_64)
DEFLABEL (convert_old_debugging_wrapper_39)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_81_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto lambda_0;

DEFLABEL (label_66)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_81_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd7.Obj) = (current_block [OBJECT_81_2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_67)
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  goto lambda_0;

DEFLABEL (label_68)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 1)
    goto label_82;

DEFLABEL (label_81)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_79;

DEFLABEL (label_78)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 1)
    goto label_70;

DEFLABEL (label_69)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_70)
  if (! ((Wrd15.uLng) == 1))
    goto label_77;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_76)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_69;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_26]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_75;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_74)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_72;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_71)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_8]));

DEFLABEL (label_72)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_36]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_43)
DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_75)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_35]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_42)
  (Wrd31.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_34]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_41)
  (Wrd18.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_21]))));
  (* (--Rsp)) = (Wrd49.Obj);
  if (! ((Wrd13.uLng) == 1))
    goto label_80;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);
  goto label_71;

DEFLABEL (label_80)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_33]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_44)
  goto label_73;

DEFLABEL (label_82)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_19]))));
  (* (--Rsp)) = (Wrd61.Obj);
  if (! ((Wrd11.uLng) == 1))
    goto label_83;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  goto label_71;

DEFLABEL (label_83)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_32]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_45)
  goto label_73;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_81_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd76.Obj) = (Rsp [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_94;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd73.Obj) = ((Wrd75.pObj) [0]);

DEFLABEL (label_93)
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_92;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd82.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_91)
  if (! (INDEX_FIXNUM_P (Wrd82.Obj)))
    goto label_69;
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_90;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd89.Obj) = ((Wrd91.pObj) [0]);

DEFLABEL (label_89)
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd100.uLng) == 1))
    goto label_88;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd98.Obj) = ((Wrd99.pObj) [1]);

DEFLABEL (label_87)
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! ((Wrd105.Lng) > 0))
    goto label_69;
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_13]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd112.Obj) = (Rsp [1]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 1))
    goto label_85;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [1]);
  (* (--Rsp)) = (Wrd111.Obj);

DEFLABEL (label_84)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_6]));

DEFLABEL (label_85)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_31]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_4]), 1);

DEFLABEL (label_50)
DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_88)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_30]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_4]), 1);

DEFLABEL (label_49)
  (Wrd98.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_29]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_48)
  (Wrd89.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_28]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_4]), 1);

DEFLABEL (label_47)
  (Wrd82.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_27]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_46)
  (Wrd73.Obj) = Rvl;
  goto label_93;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_81_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  (Wrd123.Obj) = (Rsp [0]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd124.uLng) == 1))
    goto label_101;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd120.Obj) = ((Wrd122.pObj) [1]);

DEFLABEL (label_100)
  if (! (INDEX_FIXNUM_P (Wrd120.Obj)))
    goto label_78;
  (Wrd132.Obj) = (Rsp [0]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd133.uLng) == 1))
    goto label_99;
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd132.Obj));
  (Wrd129.Obj) = ((Wrd131.pObj) [1]);

DEFLABEL (label_98)
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd129.Obj));
  if (! ((Wrd138.Lng) > 0))
    goto label_78;
  (Wrd142.Obj) = (Rsp [0]);
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if (! ((Wrd143.uLng) == 1))
    goto label_97;
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd142.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [1]);
  (* (--Rsp)) = (Wrd141.Obj);

DEFLABEL (label_96)
  (Wrd151.Obj) = (Rsp [1]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if (! ((Wrd152.uLng) == 1))
    goto label_95;
  (Wrd149.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd150.Obj) = ((Wrd149.pObj) [0]);
  (* (--Rsp)) = (Wrd150.Obj);
  goto label_67;

DEFLABEL (label_95)
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_25]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_97)
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_24]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_4]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_23]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_4]), 1);

DEFLABEL (label_52)
  (Wrd129.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_22]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_4]), 1);

DEFLABEL (label_51)
  (Wrd120.Obj) = Rvl;
  goto label_100;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_81_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_10]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (Wrd166.Obj) = (Rsp [1]);
  (Wrd167.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if (! ((Wrd167.uLng) == 1))
    goto label_102;
  (Wrd164.pObj) = (OBJECT_ADDRESS (Wrd166.Obj));
  (Wrd165.Obj) = ((Wrd164.pObj) [1]);
  (* (--Rsp)) = (Wrd165.Obj);
  goto label_84;

DEFLABEL (label_102)
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_20]))));
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd166.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_4]), 1);

DEFLABEL (label_55)
  goto label_86;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_81_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd177.Obj) = (Rsp [0]);
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd177.Obj));
  if (! ((Wrd178.uLng) == 1))
    goto label_112;
  (Wrd176.pObj) = (OBJECT_ADDRESS (Wrd177.Obj));
  (Wrd174.Obj) = ((Wrd176.pObj) [0]);

DEFLABEL (label_111)
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd174.Obj));
  if (! ((Wrd185.uLng) == 1))
    goto label_110;
  (Wrd183.pObj) = (OBJECT_ADDRESS (Wrd174.Obj));
  (Wrd184.Obj) = ((Wrd183.pObj) [1]);
  (* (--Rsp)) = (Wrd184.Obj);

DEFLABEL (label_109)
  (Wrd193.Obj) = (Rsp [1]);
  (Wrd194.uLng) = (OBJECT_TYPE (Wrd193.Obj));
  if (! ((Wrd194.uLng) == 1))
    goto label_108;
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd193.Obj));
  (Wrd190.Obj) = ((Wrd192.pObj) [0]);

DEFLABEL (label_107)
  (Wrd201.uLng) = (OBJECT_TYPE (Wrd190.Obj));
  if (! ((Wrd201.uLng) == 1))
    goto label_106;
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd190.Obj));
  (Wrd200.Obj) = ((Wrd199.pObj) [0]);
  (* (--Rsp)) = (Wrd200.Obj);

DEFLABEL (label_105)
  (Wrd209.Obj) = (Rsp [2]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if (! ((Wrd210.uLng) == 1))
    goto label_104;
  (Wrd208.pObj) = (OBJECT_ADDRESS (Wrd209.Obj));
  (Wrd206.Obj) = ((Wrd208.pObj) [1]);

DEFLABEL (label_103)
  (Rsp [2]) = (Wrd206.Obj);
  goto lambda_0;

DEFLABEL (label_104)
  (Wrd214.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_18]))));
  (* (--Rsp)) = (Wrd214.Obj);
  (* (--Rsp)) = (Wrd209.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_4]), 1);

DEFLABEL (label_60)
  (Wrd206.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_17]))));
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd190.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_16]))));
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd193.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_58)
  (Wrd190.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_15]))));
  (* (--Rsp)) = (Wrd189.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_4]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd182.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_14]))));
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd177.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_56)
  (Wrd174.Obj) = Rvl;
  goto label_111;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_81_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd217.Obj) = (current_block [OBJECT_81_2]);
  (* (--Rsp)) = (Wrd217.Obj);
  (Wrd221.Obj) = (Rsp [1]);
  (Wrd222.uLng) = (OBJECT_TYPE (Wrd221.Obj));
  if (! ((Wrd222.uLng) == 1))
    goto label_116;
  (Wrd219.pObj) = (OBJECT_ADDRESS (Wrd221.Obj));
  (Wrd220.Obj) = ((Wrd219.pObj) [0]);
  (* (--Rsp)) = (Wrd220.Obj);

DEFLABEL (label_115)
  (Wrd230.Obj) = (Rsp [2]);
  (Wrd231.uLng) = (OBJECT_TYPE (Wrd230.Obj));
  if (! ((Wrd231.uLng) == 1))
    goto label_114;
  (Wrd229.pObj) = (OBJECT_ADDRESS (Wrd230.Obj));
  (Wrd227.Obj) = ((Wrd229.pObj) [1]);

DEFLABEL (label_113)
  (Rsp [2]) = (Wrd227.Obj);
  goto lambda_0;

DEFLABEL (label_114)
  (Wrd235.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_12]))));
  (* (--Rsp)) = (Wrd235.Obj);
  (* (--Rsp)) = (Wrd230.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_4]), 1);

DEFLABEL (label_62)
  (Wrd227.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd226.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_11]))));
  (* (--Rsp)) = (Wrd226.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (lambda_65)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_81_9);
  (Wrd14.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd15.Obj) = (current_block [OBJECT_81_0]);
  (Wrd16.Obj) = (current_block [OBJECT_81_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-7]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_5 3
#define LABEL_82_4 5
#define LABEL_82_6 7
#define LABEL_82_7 9
#define LABEL_82_8 11
#define LABEL_82_9 13
#define LABEL_82_10 15
#define LABEL_82_11 17
#define LABEL_82_12 19
#define LABEL_82_13 21
#define LABEL_82_15 23
#define LABEL_82_17 25
#define LABEL_82_16 27
#define ENVIRONMENT_LABEL_82_3 43
#define DEBUGGING_LABEL_82_2 42
#define OBJECT_82_8 41
#define OBJECT_82_7 40
#define OBJECT_82_6 39
#define OBJECT_82_5 38
#define OBJECT_82_4 37
#define OBJECT_82_3 36
#define OBJECT_82_2 35
#define OBJECT_82_1 34
#define OBJECT_82_0 33
#define EXECUTE_CACHE_82_18 29
#define EXECUTE_CACHE_82_14 31
#define FREE_REFERENCES_LABEL_82_0 28
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd77;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd117;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd95;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd93;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_82_5);
      goto continuation_11;

    case 1:
      current_block = (Rpc - LABEL_82_4);
      goto debugging_file_wrapperP_24;

    case 2:
      current_block = (Rpc - LABEL_82_6);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_82_7);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_82_8);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_82_9);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_82_10);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_82_11);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_82_12);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_82_13);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_82_15);
      goto loop_20;

    case 11:
      current_block = (Rpc - LABEL_82_17);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_82_16);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_file_wrapperP_36)
DEFLABEL (debugging_file_wrapperP_24)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_39;

DEFLABEL (label_38)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  if (! ((Wrd6.uLng) == 10))
    goto label_58;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_57)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_82_1])))
    goto label_38;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_56;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_56;
  (Wrd21.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_55)
  if (! ((Wrd21.Obj) == (current_block [OBJECT_82_4])))
    goto label_38;
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_54;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd46.Lng))))
    goto label_54;
  (Wrd38.Obj) = ((Wrd44.pObj) [2]);

DEFLABEL (label_53)
  if ((Wrd38.Obj) == (current_block [OBJECT_82_5]))
    goto label_51;

DEFLABEL (label_50)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 10))
    goto label_49;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd63.Lng))))
    goto label_49;
  (Wrd55.Obj) = ((Wrd61.pObj) [2]);

DEFLABEL (label_48)
  if (! ((Wrd55.Obj) == (current_block [OBJECT_82_6])))
    goto label_38;
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd84.Obj) = (Rsp [1]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 10))
    goto label_47;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd83.Lng))))
    goto label_47;
  (Wrd77.Obj) = ((Wrd81.pObj) [3]);
  (* (--Rsp)) = (Wrd77.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_82_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;

DEFLABEL (label_45)
  (Wrd104.Obj) = (Rsp [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 10))
    goto label_44;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd103.Lng))))
    goto label_44;
  (Wrd95.Obj) = ((Wrd101.pObj) [4]);

DEFLABEL (label_43)
  (Rsp [0]) = (Wrd95.Obj);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd117.uLng) == 10))
    goto label_42;
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [0]);
  (Wrd115.Obj) = (MAKE_OBJECT (26, (Wrd114.uLng)));
  (* (--Rsp)) = (Wrd115.Obj);

DEFLABEL (label_41)
  (Wrd122.Obj) = (Rsp [0]);
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  if ((Wrd123.Lng) < 1L)
    goto label_40;
  (Wrd126.Obj) = (current_block [OBJECT_82_2]);
  (* (--Rsp)) = (Wrd126.Obj);
  goto loop_20;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_11]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd106.Obj) = (Rsp [0]);
  (Wrd107.Obj) = (current_block [OBJECT_82_7]);
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_10]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 2);

DEFLABEL (label_31)
  (Wrd95.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_47)
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.Obj) = (current_block [OBJECT_82_6]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_13]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.Obj) = (current_block [OBJECT_82_5]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_12]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 2);

DEFLABEL (label_29)
  (Wrd55.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd135.Obj) = (Rsp [0]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd136.uLng) == 10))
    goto label_52;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd134.Lng))))
    goto label_52;
  (Wrd93.Obj) = ((Wrd132.pObj) [3]);
  if ((Wrd93.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_50;

DEFLABEL (label_52)
  (Wrd137.Obj) = (Rsp [0]);
  (Wrd138.Obj) = (current_block [OBJECT_82_6]);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_9]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 2);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_50;

DEFLABEL (label_54)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_82_5]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_8]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 2);

DEFLABEL (label_28)
  (Wrd38.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_82_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 2);

DEFLABEL (label_27)
  (Wrd21.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_26)
  (Wrd9.Obj) = Rvl;
  goto label_57;

DEFLABEL (loop_37)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_82_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_59;
  Rvl = (current_block [OBJECT_82_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_62;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_62;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_62;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_18]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_82_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_20;

DEFLABEL (label_60)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_17]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_61;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define ENVIRONMENT_LABEL_83_3 7
#define DEBUGGING_LABEL_83_2 6
#define OBJECT_83_1 5
#define OBJECT_83_0 4
#define FREE_REFERENCES_LABEL_83_0 4
#define NUMBER_OF_LINKER_SECTIONS_83_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_83_4);
      goto debugging_file_wrapper_version_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_file_wrapper_version_3)
DEFLABEL (debugging_file_wrapper_version_0)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_83_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

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

#define LABEL_84_4 3
#define ENVIRONMENT_LABEL_84_3 7
#define DEBUGGING_LABEL_84_2 6
#define OBJECT_84_1 5
#define OBJECT_84_0 4
#define FREE_REFERENCES_LABEL_84_0 4
#define NUMBER_OF_LINKER_SECTIONS_84_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_84_4);
      goto debugging_file_wrapper_key_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_file_wrapper_key_3)
DEFLABEL (debugging_file_wrapper_key_0)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_84_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

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

#define LABEL_85_4 3
#define ENVIRONMENT_LABEL_85_3 7
#define DEBUGGING_LABEL_85_2 6
#define OBJECT_85_1 5
#define OBJECT_85_0 4
#define FREE_REFERENCES_LABEL_85_0 4
#define NUMBER_OF_LINKER_SECTIONS_85_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_85_4);
      goto debugging_file_wrapper_info_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_file_wrapper_info_3)
DEFLABEL (debugging_file_wrapper_info_0)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_85_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

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

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_9 7
#define LABEL_86_10 9
#define LABEL_86_11 11
#define LABEL_86_7 13
#define LABEL_86_12 15
#define ENVIRONMENT_LABEL_86_3 27
#define DEBUGGING_LABEL_86_2 26
#define OBJECT_86_4 25
#define OBJECT_86_3 24
#define OBJECT_86_2 23
#define OBJECT_86_1 22
#define OBJECT_86_0 21
#define EXECUTE_CACHE_86_8 17
#define EXECUTE_CACHE_86_6 19
#define FREE_REFERENCES_LABEL_86_0 16
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd49;
  machine_word Wrd76;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd85;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_86_4);
      goto canonicalize_file_wrapper_15;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_86_9);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_86_10);
      goto loop_11;

    case 4:
      current_block = (Rpc - LABEL_86_11);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_86_7);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_86_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_file_wrapper_20)
DEFLABEL (canonicalize_file_wrapper_15)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_86_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd12.Obj) = (MAKE_OBJECT (0, 1));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  (Wrd20.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd21.Obj) = (current_block [OBJECT_86_0]);
  (Wrd22.Obj) = (current_block [OBJECT_86_1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd7.Obj);

DEFLABEL (label_24)
  (Wrd16.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd16.pObj)));

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 10)
    goto label_27;

DEFLABEL (label_26)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_23;

DEFLABEL (label_27)
  if (! ((Wrd25.uLng) == 10))
    goto label_30;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Obj) = (MAKE_OBJECT (26, (Wrd31.uLng)));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_29)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if ((Wrd40.Lng) < 1L)
    goto label_28;
  (Wrd43.Obj) = (current_block [OBJECT_86_4]);
  (* (--Rsp)) = (Wrd43.Obj);
  goto loop_11;

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  goto label_26;

DEFLABEL (label_30)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_3]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (loop_21)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_86_10);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (Rsp [1]);
  if ((Wrd45.Obj) == (Wrd46.Obj))
    goto label_34;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_9]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 10))
    goto label_33;
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_33;
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) (Wrd59.Lng)) < ((unsigned long) (Wrd63.Lng))))
    goto label_33;
  (Wrd51.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd54.pObj) = (& ((Wrd61.pObj) [(Wrd51.Lng)]));
  (Wrd55.Obj) = ((Wrd54.pObj) [1]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_86_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  (Wrd88.Lng) = ((Wrd87.Lng) + 1L);
  (Wrd85.Obj) = (LONG_TO_FIXNUM (Wrd88.Lng));
  (Rsp [0]) = (Wrd85.Obj);
  goto loop_11;

DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));
  goto label_26;

DEFLABEL (label_33)
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_11]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_2]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  Rsp = (& (Rsp [2]));
  (Wrd79.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd80.Obj) = (current_block [OBJECT_86_0]);
  (Wrd81.Obj) = (current_block [OBJECT_86_1]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd76.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd76.Obj);
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define LABEL_87_9 7
#define LABEL_87_7 9
#define LABEL_87_10 11
#define LABEL_87_13 13
#define LABEL_87_15 15
#define ENVIRONMENT_LABEL_87_3 30
#define DEBUGGING_LABEL_87_2 29
#define OBJECT_87_1 28
#define OBJECT_87_0 27
#define EXECUTE_CACHE_87_14 17
#define EXECUTE_CACHE_87_12 19
#define EXECUTE_CACHE_87_11 21
#define EXECUTE_CACHE_87_8 23
#define EXECUTE_CACHE_87_6 25
#define FREE_REFERENCES_LABEL_87_0 16
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_87_4);
      goto get_wrapped_dbg_info_11;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_87_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_87_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_87_10);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_87_13);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_87_15);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_wrapped_dbg_info_15)
DEFLABEL (get_wrapped_dbg_info_11)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd10.Obj) = (Rsp [2]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_87_9);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_27)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rsp = (& (Rsp [3]));
  if (! ((Wrd16.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_87_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_87_13);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 10))
    goto label_23;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_22)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) < (Wrd19.Lng))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 10)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

DEFLABEL (label_21)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_20;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_20;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd27.pObj) = (& ((Wrd34.pObj) [(Wrd24.Lng)]));
  Rvl = ((Wrd27.pObj) [1]);
  goto label_18;

DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_0]), 1);

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd27.Obj) = (Rsp [1]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;

DEFLABEL (label_25)
  Rsp = (& (Rsp [3]));
  goto label_16;

DEFLABEL (label_26)
  (Wrd30.Obj) = (Rsp [2]);
  if (! ((Wrd30.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_25;
  Rsp = (& (Rsp [3]));
  goto label_17;

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define ENVIRONMENT_LABEL_88_3 10
#define DEBUGGING_LABEL_88_2 9
#define OBJECT_88_2 8
#define OBJECT_88_1 7
#define OBJECT_88_0 6
#define FREE_REFERENCES_LABEL_88_0 6
#define NUMBER_OF_LINKER_SECTIONS_88_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_88_4);
      goto dbg_info_keyP_2;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_keyP_6)
DEFLABEL (dbg_info_keyP_2)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if (! ((Wrd6.uLng) == 30))
    goto label_11;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_10)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_88_1])))
    goto label_8;
  Rvl = (current_block [OBJECT_88_2]);
  goto label_7;

DEFLABEL (label_11)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 1);

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define ENVIRONMENT_LABEL_89_3 8
#define DEBUGGING_LABEL_89_2 7
#define EXECUTE_CACHE_89_5 5
#define FREE_REFERENCES_LABEL_89_0 4
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_89_4);
      goto dbg_info_key_P_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dbg_info_key_P_3)
DEFLABEL (dbg_info_key_P_0)
  INTERRUPT_CHECK (26, LABEL_89_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define ENVIRONMENT_LABEL_90_3 11
#define DEBUGGING_LABEL_90_2 10
#define OBJECT_90_0 9
#define EXECUTE_CACHE_90_6 7
#define FREE_REFERENCES_LABEL_90_0 6
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
infstr_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_90_4);
      goto debug_info_pathnameP_2;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_info_pathnameP_5)
DEFLABEL (debug_info_pathnameP_2)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_90_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = Rvl;

DEFLABEL (label_6)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 30)
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_90_0]);

DEFLABEL (label_8)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_6 9
#define LABEL_8 11
#define LABEL_12 13
#define LABEL_14 15
#define LABEL_18 17
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_19 25
#define LABEL_20 27
#define LABEL_24 29
#define LABEL_21 31
#define LABEL_22 33
#define LABEL_23 35
#define LABEL_25 37
#define LABEL_26 39
#define LABEL_30 41
#define LABEL_27 43
#define LABEL_28 45
#define LABEL_29 47
#define LABEL_31 49
#define LABEL_32 51
#define LABEL_36 53
#define LABEL_33 55
#define LABEL_34 57
#define LABEL_35 59
#define LABEL_37 61
#define LABEL_38 63
#define LABEL_42 65
#define LABEL_39 67
#define LABEL_40 69
#define LABEL_41 71
#define LABEL_43 73
#define LABEL_44 75
#define LABEL_48 77
#define LABEL_45 79
#define LABEL_46 81
#define LABEL_47 83
#define LABEL_49 85
#define LABEL_51 87
#define LABEL_50 89
#define LABEL_53 91
#define LABEL_52 93
#define LABEL_54 95
#define LABEL_55 97
#define LABEL_56 99
#define ENVIRONMENT_LABEL_3 189
#define DEBUGGING_LABEL_2 188
#define PURIFICATION_ROOT 187
#define OBJECT_67 186
#define OBJECT_66 185
#define OBJECT_65 184
#define OBJECT_64 183
#define OBJECT_63 182
#define OBJECT_62 181
#define OBJECT_61 180
#define OBJECT_60 179
#define OBJECT_59 178
#define OBJECT_58 177
#define OBJECT_57 176
#define OBJECT_56 175
#define OBJECT_55 174
#define OBJECT_54 173
#define OBJECT_53 172
#define OBJECT_52 171
#define OBJECT_51 170
#define OBJECT_50 169
#define OBJECT_49 168
#define OBJECT_48 167
#define OBJECT_47 166
#define OBJECT_46 165
#define OBJECT_45 164
#define OBJECT_44 163
#define OBJECT_43 162
#define OBJECT_42 161
#define OBJECT_41 160
#define OBJECT_40 159
#define OBJECT_39 158
#define OBJECT_38 157
#define OBJECT_37 156
#define OBJECT_36 155
#define OBJECT_35 154
#define OBJECT_34 153
#define OBJECT_33 152
#define OBJECT_32 151
#define OBJECT_31 150
#define OBJECT_30 149
#define OBJECT_29 148
#define OBJECT_28 147
#define OBJECT_27 146
#define OBJECT_26 145
#define OBJECT_25 144
#define OBJECT_24 143
#define OBJECT_23 142
#define OBJECT_22 141
#define OBJECT_21 140
#define OBJECT_20 139
#define OBJECT_19 138
#define OBJECT_18 137
#define OBJECT_17 136
#define OBJECT_16 135
#define OBJECT_15 134
#define OBJECT_14 133
#define OBJECT_13 132
#define OBJECT_12 131
#define OBJECT_11 130
#define OBJECT_10 129
#define OBJECT_9 128
#define OBJECT_8 127
#define OBJECT_7 126
#define OBJECT_6 125
#define OBJECT_5 124
#define OBJECT_4 123
#define OBJECT_3 122
#define OBJECT_2 121
#define OBJECT_1 120
#define OBJECT_0 119
#define FREE_REFERENCE_8 101
#define FREE_REFERENCE_7 102
#define FREE_REFERENCE_6 103
#define FREE_REFERENCE_5 104
#define FREE_REFERENCE_4 105
#define FREE_REFERENCE_3 106
#define FREE_REFERENCE_2 107
#define FREE_REFERENCE_1 108
#define FREE_REFERENCE_0 109
#define GLOBAL_EXECUTE_CACHE_13 111
#define GLOBAL_EXECUTE_CACHE_11 113
#define GLOBAL_EXECUTE_CACHE_10 115
#define GLOBAL_EXECUTE_CACHE_7 117
#define FREE_REFERENCES_LABEL_0 100
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
infstr_so_8f1a64bea062dd77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_4);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_46;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_14);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_47;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_24);
      goto label_48;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_30);
      goto label_49;

    case 20:
      current_block = (Rpc - LABEL_27);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_19;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_27;

    case 25:
      current_block = (Rpc - LABEL_36);
      goto label_50;

    case 26:
      current_block = (Rpc - LABEL_33);
      goto continuation_26;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto continuation_25;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto continuation_28;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto continuation_29;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto continuation_33;

    case 31:
      current_block = (Rpc - LABEL_42);
      goto label_51;

    case 32:
      current_block = (Rpc - LABEL_39);
      goto continuation_32;

    case 33:
      current_block = (Rpc - LABEL_40);
      goto continuation_31;

    case 34:
      current_block = (Rpc - LABEL_41);
      goto continuation_34;

    case 35:
      current_block = (Rpc - LABEL_43);
      goto continuation_35;

    case 36:
      current_block = (Rpc - LABEL_44);
      goto continuation_39;

    case 37:
      current_block = (Rpc - LABEL_48);
      goto label_52;

    case 38:
      current_block = (Rpc - LABEL_45);
      goto continuation_38;

    case 39:
      current_block = (Rpc - LABEL_46);
      goto continuation_37;

    case 40:
      current_block = (Rpc - LABEL_47);
      goto continuation_40;

    case 41:
      current_block = (Rpc - LABEL_49);
      goto continuation_41;

    case 42:
      current_block = (Rpc - LABEL_51);
      goto label_53;

    case 43:
      current_block = (Rpc - LABEL_50);
      goto continuation_42;

    case 44:
      current_block = (Rpc - LABEL_53);
      goto label_54;

    case 45:
      current_block = (Rpc - LABEL_52);
      goto continuation_43;

    case 46:
      current_block = (Rpc - LABEL_54);
      goto label_57;

    case 47:
      current_block = (Rpc - LABEL_55);
      goto label_58;

    case 48:
      current_block = (Rpc - LABEL_56);
      goto expression_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_45)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_55])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_58)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_57)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	0,
	1,
	1,
	0,
	0,
	0,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
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
	0,
	0,
	0,
	0,
	0,
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
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 90)
      goto label_56;
    blocks = (current_block [OBJECT_67]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_54])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_56)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd18.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (MAKE_OBJECT (0, 5));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-6]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_76;
  Wrd8 = Wrd12;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-5]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_74;
  Wrd8 = Wrd12;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (0, 2));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-3]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_72;
  Wrd8 = Wrd12;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (MAKE_OBJECT (0, 10));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-11]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_70;
  Wrd8 = Wrd12;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (MAKE_OBJECT (0, 5));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-6]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_68;
  Wrd8 = Wrd12;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (MAKE_OBJECT (0, 6));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-7]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_66;
  Wrd8 = Wrd12;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_46);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-4]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_64;
  Wrd8 = Wrd12;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_62;
  Wrd8 = Wrd12;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_60;
  Wrd8 = Wrd12;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd5.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_66]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53])), (Wrd9.pObj));

DEFLABEL (label_54)
  (Wrd8.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51])), (Wrd9.pObj));

DEFLABEL (label_53)
  (Wrd8.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd9.pObj));

DEFLABEL (label_52)
  (Wrd8.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd9.pObj));

DEFLABEL (label_51)
  (Wrd8.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd9.pObj));

DEFLABEL (label_50)
  (Wrd8.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd9.pObj));

DEFLABEL (label_49)
  (Wrd8.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd9.pObj));

DEFLABEL (label_48)
  (Wrd8.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd9.pObj));

DEFLABEL (label_47)
  (Wrd8.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd9.pObj));

DEFLABEL (label_46)
  (Wrd8.Obj) = Rvl;
  goto label_75;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_infstr_so_8f1a64bea062dd77 [90] =
  {
    { "infstr_so_code_1", 1, infstr_so_code_1 },
    { "infstr_so_code_2", 1, infstr_so_code_2 },
    { "infstr_so_code_3", 1, infstr_so_code_3 },
    { "infstr_so_code_4", 1, infstr_so_code_4 },
    { "infstr_so_code_5", 1, infstr_so_code_5 },
    { "infstr_so_code_6", 1, infstr_so_code_6 },
    { "infstr_so_code_7", 4, infstr_so_code_7 },
    { "infstr_so_code_8", 2, infstr_so_code_8 },
    { "infstr_so_code_9", 2, infstr_so_code_9 },
    { "infstr_so_code_10", 9, infstr_so_code_10 },
    { "infstr_so_code_11", 8, infstr_so_code_11 },
    { "infstr_so_code_12", 13, infstr_so_code_12 },
    { "infstr_so_code_13", 1, infstr_so_code_13 },
    { "infstr_so_code_14", 1, infstr_so_code_14 },
    { "infstr_so_code_15", 1, infstr_so_code_15 },
    { "infstr_so_code_16", 1, infstr_so_code_16 },
    { "infstr_so_code_17", 1, infstr_so_code_17 },
    { "infstr_so_code_18", 1, infstr_so_code_18 },
    { "infstr_so_code_19", 4, infstr_so_code_19 },
    { "infstr_so_code_20", 4, infstr_so_code_20 },
    { "infstr_so_code_21", 1, infstr_so_code_21 },
    { "infstr_so_code_22", 1, infstr_so_code_22 },
    { "infstr_so_code_23", 1, infstr_so_code_23 },
    { "infstr_so_code_24", 1, infstr_so_code_24 },
    { "infstr_so_code_25", 4, infstr_so_code_25 },
    { "infstr_so_code_26", 3, infstr_so_code_26 },
    { "infstr_so_code_27", 1, infstr_so_code_27 },
    { "infstr_so_code_28", 1, infstr_so_code_28 },
    { "infstr_so_code_29", 1, infstr_so_code_29 },
    { "infstr_so_code_30", 1, infstr_so_code_30 },
    { "infstr_so_code_31", 1, infstr_so_code_31 },
    { "infstr_so_code_32", 1, infstr_so_code_32 },
    { "infstr_so_code_33", 1, infstr_so_code_33 },
    { "infstr_so_code_34", 1, infstr_so_code_34 },
    { "infstr_so_code_35", 1, infstr_so_code_35 },
    { "infstr_so_code_36", 1, infstr_so_code_36 },
    { "infstr_so_code_37", 1, infstr_so_code_37 },
    { "infstr_so_code_38", 1, infstr_so_code_38 },
    { "infstr_so_code_39", 1, infstr_so_code_39 },
    { "infstr_so_code_40", 4, infstr_so_code_40 },
    { "infstr_so_code_41", 4, infstr_so_code_41 },
    { "infstr_so_code_42", 3, infstr_so_code_42 },
    { "infstr_so_code_43", 1, infstr_so_code_43 },
    { "infstr_so_code_44", 1, infstr_so_code_44 },
    { "infstr_so_code_45", 1, infstr_so_code_45 },
    { "infstr_so_code_46", 1, infstr_so_code_46 },
    { "infstr_so_code_47", 1, infstr_so_code_47 },
    { "infstr_so_code_48", 1, infstr_so_code_48 },
    { "infstr_so_code_49", 1, infstr_so_code_49 },
    { "infstr_so_code_50", 4, infstr_so_code_50 },
    { "infstr_so_code_51", 3, infstr_so_code_51 },
    { "infstr_so_code_52", 7, infstr_so_code_52 },
    { "infstr_so_code_53", 1, infstr_so_code_53 },
    { "infstr_so_code_54", 1, infstr_so_code_54 },
    { "infstr_so_code_55", 1, infstr_so_code_55 },
    { "infstr_so_code_56", 1, infstr_so_code_56 },
    { "infstr_so_code_57", 1, infstr_so_code_57 },
    { "infstr_so_code_58", 1, infstr_so_code_58 },
    { "infstr_so_code_59", 1, infstr_so_code_59 },
    { "infstr_so_code_60", 1, infstr_so_code_60 },
    { "infstr_so_code_61", 4, infstr_so_code_61 },
    { "infstr_so_code_62", 1, infstr_so_code_62 },
    { "infstr_so_code_63", 1, infstr_so_code_63 },
    { "infstr_so_code_64", 1, infstr_so_code_64 },
    { "infstr_so_code_65", 1, infstr_so_code_65 },
    { "infstr_so_code_66", 1, infstr_so_code_66 },
    { "infstr_so_code_67", 4, infstr_so_code_67 },
    { "infstr_so_code_68", 2, infstr_so_code_68 },
    { "infstr_so_code_69", 2, infstr_so_code_69 },
    { "infstr_so_code_70", 2, infstr_so_code_70 },
    { "infstr_so_code_71", 6, infstr_so_code_71 },
    { "infstr_so_code_72", 5, infstr_so_code_72 },
    { "infstr_so_code_73", 19, infstr_so_code_73 },
    { "infstr_so_code_74", 1, infstr_so_code_74 },
    { "infstr_so_code_75", 1, infstr_so_code_75 },
    { "infstr_so_code_76", 1, infstr_so_code_76 },
    { "infstr_so_code_77", 1, infstr_so_code_77 },
    { "infstr_so_code_78", 1, infstr_so_code_78 },
    { "infstr_so_code_79", 1, infstr_so_code_79 },
    { "infstr_so_code_80", 1, infstr_so_code_80 },
    { "infstr_so_code_81", 31, infstr_so_code_81 },
    { "infstr_so_code_82", 13, infstr_so_code_82 },
    { "infstr_so_code_83", 1, infstr_so_code_83 },
    { "infstr_so_code_84", 1, infstr_so_code_84 },
    { "infstr_so_code_85", 1, infstr_so_code_85 },
    { "infstr_so_code_86", 7, infstr_so_code_86 },
    { "infstr_so_code_87", 7, infstr_so_code_87 },
    { "infstr_so_code_88", 2, infstr_so_code_88 },
    { "infstr_so_code_89", 1, infstr_so_code_89 },
    { "infstr_so_code_90", 2, infstr_so_code_90 }
  };

int
decl_infstr_so_8f1a64bea062dd77 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_infstr_so_8f1a64bea062dd77);
  return (0);
}

DECLARE_COMPILED_CODE ("infstr.so", 49, decl_infstr_so_8f1a64bea062dd77, infstr_so_8f1a64bea062dd77)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_infstr_so_data_8f1a64bea062dd77 [8365] =
  "\xbe\x01\x74\xcf\x10\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x22"
  "\x29\x21\x9d\x2b\xba\x1d\xb0\x82\x88\xc2\xbb\x81\x22\x29\x21\x9e"
  "\x2b\xbc\x1d\xb0\x83\x88\xb3\x82\x22\x29\x21\x9e\x2b\xbd\x1d\xb0"
  "\x84\x88\xb3\x83\x22\x29\x21\x9e\x2b\xbe\x1d\xb0\x85\x88\xb3\x84"
  "\x22\x29\x21\x9e\x2b\xbf\x1d\xb0\x86\x88\xb3\x85\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\xb3\x80\xc1\x1c\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x0d\xc1\x1c\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x0c\x1b\xc1\x1c\x83\xb3\x82\x28\x1b\x28\x1b\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x0c\x1b\x1b\xb3\x83\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x1b\x0d\x1b\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb3\x81\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb3\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x84"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x84\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\xb3\x80\x1b\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x84"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x82\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x1b\xb3\x80\x1b\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x82\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb3\x81\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb3\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x84"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x85\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb3\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\xb3\x80"
  "\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x82\xb3\x02\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\xb3\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x84\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x85\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x1b\xb3\x80\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\xb3\x82\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\xb3\x82\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x82"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x83\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb3\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x86"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x86\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\xb3\x80\x1b\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb3\x81\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\xb3\x80\x1b\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xc2\x80\x1b\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06"
  "\x07\x85\x84\x83\x82\x81\x0d\x1c\xb3\x80\x86\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x83\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\xb3\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb3\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x80\x81\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x83\x82\x81\x0d\x1c"
  "\xb3\x80\x84\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x81\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x82\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x80"
  "\x1b\xb3\x81\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x1b\x28\x0d\x1c\x28\x0d\xbb\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\xc1\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xb8"
  "\x17\x1c\x88\x1b\xb0\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x17\x1b\x1b\x1b\x0d\x0d\x1b\x1b\x0d\x1b\x1b\x0d\x0d\x1b"
  "\x0d\x0d\xb3\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x17\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x0d\x0d\x0d\x0d\x0d\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0c\x0d\x0d\x1c\x0d"
  "\x1c\x9a\x83\x82\x81\x9a\x0d\x1c\x0d\x1b\x84\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0c\x0d\x0d\x0d\x0d\x0d\x1b\x9d"
  "\x86\x85\x84\x83\x82\x81\x9d\x0d\x1c\x0d\x1b\x02\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0c\x0d\x1c\x0d"
  "\x1b\x0d\x1c\x0d\x1c\x9c\x0d\x1c\x0d\x1b\x0d\x1b\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0c\x1b\x0d\x0d"
  "\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x17\x02\x02\x02\x02\x86\x85\x84\x83"
  "\x82\x81\x17\x0d\x1c\x0d\x1b\x02\x0d\x0d\x0d\x0d\x0d\x0d\x9d\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x0c\x1b\x1b\x99"
  "\x82\x81\x99\x0d\x1c\x0d\x1b\x83\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x9f\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x9f\x0c\x0d\x0d\x0d\x0d\x9b\x84\x83\x82\x81\x9b\x0d\x1c\x0d"
  "\x1b\x85\x1b\x1b\x1b\x1b\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6"
  "\x2a\xb5\x2a\xb4\x2a\xb2\x2a\x17\x0d\x0c\x0d\x0d\x0d\x0d\x0d\x9c"
  "\x85\x84\x83\x82\x81\x9c\xc3\x0d\x1c\x0d\xb1\x86\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x69"
  "\x6e\x66\x73\x74\x72\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x2a"
  "\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64\x62\x67\x2d\x69\x6e\x66"
  "\x6f\x2d\x76\x65\x63\x74\x6f\x72\x5d\x32\x04\x87\x0c\x03\x02\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x33\x04\x83\x04\x03\x02"
  "\x34\x04\x83\x04\x03\x02\x35\x04\x83\x04\x03\x02\x36\x04\x83\x04"
  "\x03\x02\x37\x04\x83\x04\x03\x09\x02\x08\x0e\x76\x65\x63\x74\x6f"
  "\x72\x2d\x6c\x65\x6e\x67\x74\x68\x0a\x3b\x0a\x81\x83\x02\x3a\x08"
  "\x81\x83\x02\x39\x06\x81\x83\x02\x38\x04\x83\x04\x09\x11\x0b\x02"
  "\x09\x03\x15\x6e\x65\x77\x2d\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2d"
  "\x76\x65\x63\x74\x6f\x72\x3f\x0c\x03\x15\x6f\x6c\x64\x2d\x64\x62"
  "\x67\x2d\x69\x6e\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x3f\x0d\x03"
  "\x3d\x06\x81\x83\x02\x3c\x04\x83\x04\x05\x0d\x0e\x02\x0a\x2e\x23"
  "\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64\x62\x67\x2d\x69\x6e\x66\x6f"
  "\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x5d\x04\x63\x61\x72"
  "\x0f\x3f\x06\x81\x83\x02\x3e\x04\x83\x04\x05\x0b\x10\x02\x0b\x1e"
  "\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x2f"
  "\x62\x6c\x6f\x63\x6b\x73\x2d\x76\x65\x63\x74\x6f\x72\x11\x10\x64"
  "\x62\x67\x2d\x69\x6e\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x0f\x04"
  "\x63\x64\x72\x12\x03\x0c\x03\x0d\x04\x0e\x76\x65\x63\x74\x6f\x72"
  "\x2d\x61\x70\x70\x65\x6e\x64\x03\x11\x25\x63\x6f\x6d\x70\x6f\x75"
  "\x6e\x64\x2d\x69\x74\x65\x6d\x73\x3f\x13\x05\x1a\x65\x72\x72\x6f"
  "\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x14\x06\x48\x14\x81\x83\x02\x47\x12\x81\x85"
  "\x02\x46\x10\x81\x85\x02\x45\x0e\x81\x83\x02\x44\x0c\x81\x83\x02"
  "\x43\x0a\x81\x85\x02\x42\x08\x81\x83\x02\x41\x06\x81\x83\x02\x40"
  "\x04\x83\x04\x13\x28\x15\x02\x0c\x22\x64\x62\x67\x2d\x69\x6e\x66"
  "\x6f\x2d\x76\x65\x63\x74\x6f\x72\x2f\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x16\x10\x64\x62\x67\x2d"
  "\x69\x6e\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x0f\x12\x03\x0c\x03"
  "\x0d\x03\x13\x05\x14\x05\x50\x12\x81\x83\x02\x4f\x10\x81\x85\x02"
  "\x4e\x0e\x81\x85\x02\x4d\x0c\x81\x85\x02\x4c\x0a\x81\x83\x02\x4b"
  "\x08\x81\x83\x02\x4a\x06\x81\x83\x02\x49\x04\x83\x04\x11\x23\x14"
  "\x02\x0d\x12\x17\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x62\x79\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x0f\x5d\x1c\x81\x83\x02"
  "\x5c\x1a\x81\x83\x02\x5b\x18\x81\x83\x02\x5a\x16\x81\x83\x02\x59"
  "\x14\x81\x83\x02\x58\x12\x81\x83\x02\x57\x10\x81\x83\x02\x56\x0e"
  "\x81\x83\x02\x55\x0c\x81\x83\x02\x54\x0a\x81\x83\x02\x53\x08\x81"
  "\x83\x02\x52\x06\x81\x83\x02\x51\x04\x83\x04\x1b\x23\x17\x02\x0e"
  "\x23\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64\x62\x67\x2d\x69\x6e"
  "\x66\x6f\x5d\x18\x5e\x04\x86\x0a\x03\x19\x02\x0f\x5f\x04\x83\x04"
  "\x03\x1a\x02\x10\x60\x04\x83\x04\x03\x1b\x02\x11\x61\x04\x83\x04"
  "\x03\x1c\x02\x12\x62\x04\x83\x04\x03\x1d\x02\x13\x0c\x76\x65\x63"
  "\x74\x6f\x72\x2d\x73\x65\x74\x21\x1e\x02\x63\x04\x84\x06\x03\x1f"
  "\x02\x14\x18\x0a\x67\x0a\x81\x83\x02\x66\x08\x81\x83\x02\x65\x06"
  "\x81\x83\x02\x64\x04\x83\x04\x09\x11\x20\x02\x15\x1e\x03\x0c\x72"
  "\x65\x61\x64\x2d\x6c\x61\x62\x65\x6c\x73\x02\x6b\x0a\x81\x85\x02"
  "\x6a\x08\x81\x85\x02\x69\x06\x81\x83\x02\x68\x04\x83\x04\x09\x12"
  "\x21\x02\x16\x29\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64\x62\x67"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x5d\x22\x6c\x04\x84"
  "\x06\x03\x23\x02\x17\x6d\x04\x83\x04\x03\x24\x02\x18\x6e\x04\x83"
  "\x04\x03\x25\x02\x19\x1e\x02\x6f\x04\x84\x06\x03\x26\x02\x1a\x22"
  "\x0a\x73\x0a\x81\x83\x02\x72\x08\x81\x83\x02\x71\x06\x81\x83\x02"
  "\x70\x04\x83\x04\x09\x11\x27\x02\x1b\x12\x03\x04\x61\x62\x73\x28"
  "\x02\x76\x08\x81\x83\x02\x75\x06\x81\x83\x02\x74\x04\x83\x04\x07"
  "\x10\x29\x02\x1c\x28\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64\x62"
  "\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x5d\x2a\x77\x04\x8b"
  "\x14\x03\x2b\x02\x1d\x78\x04\x83\x04\x03\x2c\x02\x1e\x79\x04\x83"
  "\x04\x03\x2d\x02\x1f\x7a\x04\x83\x04\x03\x2e\x02\x20\x7b\x04\x83"
  "\x04\x03\x2f\x02\x21\x7c\x04\x83\x04\x03\x30\x02\x22\x7d\x04\x83"
  "\x04\x03\x31\x02\x23\x08\x7e\x04\x83\x04\x03\x32\x02\x24\x09\x7f"
  "\x04\x83\x04\x03\x33\x02\x25\x0a\x80\x01\x04\x83\x04\x03\x34\x02"
  "\x26\x0b\x81\x01\x04\x83\x04\x03\x35\x02\x27\x1e\x02\x82\x01\x04"
  "\x84\x06\x03\x36\x02\x28\x1e\x02\x0a\x83\x01\x04\x84\x06\x03\x37"
  "\x02\x29\x2a\x0a\x87\x01\x0a\x81\x83\x02\x86\x01\x08\x81\x83\x02"
  "\x85\x01\x06\x81\x83\x02\x84\x01\x04\x83\x04\x09\x11\x38\x02\x2a"
  "\x12\x0a\x03\x28\x02\x8b\x01\x0a\x81\x83\x02\x8a\x01\x08\x81\x85"
  "\x02\x89\x01\x06\x83\x04\x88\x01\x04\x81\x83\x02\x09\x13\x39\x02"
  "\x2b\x03\x1b\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2f\x6c\x61\x62\x65\x6c\x2d\x6f\x66\x66\x73\x65\x74\x3a\x02\x8e"
  "\x01\x08\x81\x85\x02\x8d\x01\x06\x81\x85\x02\x8c\x01\x04\x84\x06"
  "\x07\x0e\x3b\x02\x2c\x2b\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65"
  "\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64"
  "\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x5d"
  "\x3c\x8f\x01\x04\x87\x0c\x03\x3d\x02\x2d\x90\x01\x04\x83\x04\x03"
  "\x3e\x02\x2e\x91\x01\x04\x83\x04\x03\x3f\x02\x2f\x92\x01\x04\x83"
  "\x04\x03\x40\x02\x30\x93\x01\x04\x83\x04\x03\x41\x02\x31\x94\x01"
  "\x04\x83\x04\x03\x42\x02\x32\x1e\x02\x95\x01\x04\x84\x06\x03\x43"
  "\x02\x33\x3c\x0a\x99\x01\x0a\x81\x83\x02\x98\x01\x08\x81\x83\x02"
  "\x97\x01\x06\x81\x83\x02\x96\x01\x04\x83\x04\x09\x11\x44\x02\x34"
  "\x12\x03\x28\x02\x9c\x01\x08\x81\x83\x02\x9b\x01\x06\x81\x83\x02"
  "\x9a\x01\x04\x83\x04\x07\x10\x45\x02\x35\x12\x03\x28\x02\xa3\x01"
  "\x10\x81\x85\x02\xa2\x01\x0e\x81\x87\x02\xa1\x01\x0c\x81\x87\x02"
  "\xa0\x01\x0a\x81\x85\x02\x9f\x01\x08\x81\x87\x02\x9e\x01\x06\x81"
  "\x87\x02\x9d\x01\x04\x84\x06\x0f\x19\x46\x02\x36\x24\x23\x5b\x28"
  "\x72\x75\x6e\x74\x69\x6d\x65\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x2d\x69\x6e\x66\x6f\x29\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x5d"
  "\x47\xa4\x01\x04\x87\x0c\x03\x48\x02\x37\xa5\x01\x04\x83\x04\x03"
  "\x49\x02\x38\xa6\x01\x04\x83\x04\x03\x4a\x02\x39\xa7\x01\x04\x83"
  "\x04\x03\x4b\x02\x3a\xa8\x01\x04\x83\x04\x03\x4c\x02\x3b\xa9\x01"
  "\x04\x83\x04\x03\x4d\x02\x3c\xaa\x01\x04\x83\x04\x03\x4e\x02\x3d"
  "\x1e\x02\xab\x01\x04\x84\x06\x03\x4f\x02\x3e\x47\x0a\xaf\x01\x0a"
  "\x81\x83\x02\xae\x01\x08\x81\x83\x02\xad\x01\x06\x81\x83\x02\xac"
  "\x01\x04\x83\x04\x09\x11\x50\x02\x3f\x27\x23\x5b\x28\x72\x75\x6e"
  "\x74\x69\x6d\x65\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e"
  "\x66\x6f\x29\x64\x62\x67\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x5d"
  "\x51\xb0\x01\x04\x85\x08\x03\x52\x02\x40\xb1\x01\x04\x83\x04\x03"
  "\x53\x02\x41\xb2\x01\x04\x83\x04\x03\x54\x02\x42\xb3\x01\x04\x83"
  "\x04\x03\x55\x02\x43\x1e\x02\xb4\x01\x04\x84\x06\x03\x56\x02\x44"
  "\x51\x0a\xb8\x01\x0a\x81\x83\x02\xb7\x01\x08\x81\x83\x02\xb6\x01"
  "\x06\x81\x83\x02\xb5\x01\x04\x83\x04\x09\x11\x57\x02\x45\x12\x03"
  "\x28\x02\xba\x01\x06\x81\x83\x02\xb9\x01\x04\x83\x04\x05\x0c\x28"
  "\x02\x46\x12\xbc\x01\x06\x81\x83\x02\xbb\x01\x04\x83\x04\x05\x0a"
  "\x58\x02\x47\x0f\xbe\x01\x06\x81\x83\x02\xbd\x01\x04\x83\x04\x05"
  "\x0a\x59\x02\x48\x02\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x12\xc4"
  "\x01\x0e\x81\x85\x02\xc3\x01\x0c\x81\x83\x02\xc2\x01\x0a\x81\x83"
  "\x02\xc1\x01\x08\x81\x87\x02\xc0\x01\x06\x84\x06\xbf\x01\x04\x81"
  "\x85\x02\x0d\x14\x5a\x02\x49\x03\x23\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x65\x62"
  "\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x03\x13\x64\x65\x62"
  "\x75\x67\x67\x69\x6e\x67\x2d\x77\x72\x61\x70\x70\x65\x72\x3f\x5b"
  "\x03\x1e\x63\x6f\x6e\x76\x65\x72\x74\x2d\x6f\x6c\x64\x2d\x64\x65"
  "\x62\x75\x67\x67\x69\x6e\x67\x2d\x77\x72\x61\x70\x70\x65\x72\x5c"
  "\x04\x28\x73\x65\x74\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63"
  "\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x65\x62\x75\x67\x67"
  "\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x21\x05\xc9\x01\x0c\x81\x85\x02"
  "\xc8\x01\x0a\x81\x85\x02\xc7\x01\x08\x81\x85\x02\xc6\x01\x06\x81"
  "\x83\x02\xc5\x01\x04\x83\x04\x0b\x17\x5d\x02\x4a\x17\x64\x65\x62"
  "\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2d\x77\x72\x61\x70"
  "\x70\x65\x72\x5e\x0a\x03\x0a\x64\x62\x67\x2d\x69\x6e\x66\x6f\x3f"
  "\x5f\x03\x15\x64\x65\x62\x75\x67\x2d\x69\x6e\x66\x6f\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x3f\x60\x03\x0e\x64\x62\x67\x2d\x69\x6e"
  "\x66\x6f\x2d\x6b\x65\x79\x3f\x61\x04\xdc\x01\x28\x81\x85\x02\xdb"
  "\x01\x26\x81\x85\x02\xda\x01\x24\x81\x85\x02\xd9\x01\x22\x81\x85"
  "\x02\xd8\x01\x20\x81\x87\x02\xd7\x01\x1e\x81\x87\x02\xd6\x01\x1c"
  "\x81\x85\x02\xd5\x01\x1a\x81\x85\x02\xd4\x01\x18\x81\x85\x02\xd3"
  "\x01\x16\x81\x85\x02\xd2\x01\x14\x81\x85\x02\xd1\x01\x12\x81\x85"
  "\x02\xd0\x01\x10\x81\x83\x02\xcf\x01\x0e\x81\x83\x02\xce\x01\x0c"
  "\x81\x83\x02\xcd\x01\x0a\x81\x83\x02\xcc\x01\x08\x83\x04\xcb\x01"
  "\x06\x81\x83\x02\xca\x01\x04\x81\x85\x02\x27\x3d\x62\x02\x4b\xdd"
  "\x01\x04\x83\x04\x03\x63\x02\x4c\xde\x01\x04\x83\x04\x03\x64\x02"
  "\x4d\xdf\x01\x04\x83\x04\x03\x65\x02\x4e\x1e\x02\xe0\x01\x04\x84"
  "\x06\x03\x66\x02\x4f\xe1\x01\x04\x83\x04\x03\x67\x02\x50\xe2\x01"
  "\x04\x83\x04\x03\x68\x02\x51\x1e\x02\xe3\x01\x04\x84\x06\x03\x1e"
  "\x02\x52\x12\x0f\x5e\x03\x5f\x03\x60\x03\x82\x02\x40\x81\x85\x02"
  "\x81\x02\x3e\x81\x85\x02\x80\x02\x3c\x81\x83\x02\xff\x01\x3a\x81"
  "\x85\x02\xfe\x01\x38\x81\x85\x02\xfd\x01\x36\x81\x83\x02\xfc\x01"
  "\x34\x81\x85\x02\xfb\x01\x32\x81\x83\x02\xfa\x01\x30\x81\x83\x02"
  "\xf9\x01\x2e\x81\x83\x02\xf8\x01\x2c\x81\x83\x02\xf7\x01\x2a\x81"
  "\x83\x02\xf6\x01\x28\x81\x85\x02\xf5\x01\x26\x81\x83\x02\xf4\x01"
  "\x24\x81\x83\x02\xf3\x01\x22\x81\x83\x02\xf2\x01\x20\x81\x83\x02"
  "\xf1\x01\x1e\x81\x85\x02\xf0\x01\x1c\x81\x83\x02\xef\x01\x1a\x81"
  "\x87\x02\xee\x01\x18\x81\x85\x02\xed\x01\x16\x81\x85\x02\xec\x01"
  "\x14\x81\x83\x02\xeb\x01\x12\x81\x83\x02\xea\x01\x10\x81\x83\x02"
  "\xe9\x01\x0e\x81\x87\x02\xe8\x01\x0c\x81\x85\x02\xe7\x01\x0a\x81"
  "\x83\x02\xe6\x01\x08\x81\x87\x02\xe5\x01\x06\x81\x83\x02\xe4\x01"
  "\x04\x83\x04\x3f\x4c\x5e\x02\x53\x17\x64\x65\x62\x75\x67\x67\x69"
  "\x6e\x67\x2d\x66\x69\x6c\x65\x2d\x77\x72\x61\x70\x70\x65\x72\x12"
  "\x0a\x03\x61\x03\x5f\x03\x8f\x02\x1c\x81\x87\x02\x8e\x02\x1a\x81"
  "\x89\x02\x8d\x02\x18\x81\x87\x02\x8c\x02\x16\x81\x85\x02\x8b\x02"
  "\x14\x81\x83\x02\x8a\x02\x12\x81\x83\x02\x89\x02\x10\x81\x83\x02"
  "\x88\x02\x0e\x81\x83\x02\x87\x02\x0c\x81\x83\x02\x86\x02\x0a\x81"
  "\x83\x02\x85\x02\x08\x81\x83\x02\x84\x02\x06\x83\x04\x83\x02\x04"
  "\x81\x83\x02\x1b\x2c\x0f\x02\x54\x90\x02\x04\x83\x04\x03\x69\x02"
  "\x55\x91\x02\x04\x83\x04\x03\x6a\x02\x56\x92\x02\x04\x83\x04\x03"
  "\x6b\x02\x57\x0a\x12\x03\x18\x64\x65\x62\x75\x67\x67\x69\x6e\x67"
  "\x2d\x66\x69\x6c\x65\x2d\x77\x72\x61\x70\x70\x65\x72\x3f\x12\x03"
  "\x5f\x03\x99\x02\x10\x81\x83\x02\x98\x02\x0e\x81\x83\x02\x97\x02"
  "\x0c\x81\x89\x02\x96\x02\x0a\x81\x87\x02\x95\x02\x08\x81\x87\x02"
  "\x94\x02\x06\x81\x83\x02\x93\x02\x04\x83\x04\x0f\x1c\x6c\x02\x58"
  "\x0a\x03\x1b\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x66\x69\x6c"
  "\x65\x2d\x77\x72\x61\x70\x70\x65\x72\x2f\x6b\x65\x79\x0a\x03\x16"
  "\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x77\x72\x61\x70\x70\x65"
  "\x72\x2f\x6b\x65\x79\x03\x1c\x64\x65\x62\x75\x67\x67\x69\x6e\x67"
  "\x2d\x66\x69\x6c\x65\x2d\x77\x72\x61\x70\x70\x65\x72\x2f\x69\x6e"
  "\x66\x6f\x6d\x04\x0f\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2d\x6b\x65"
  "\x79\x3d\x3f\x6e\x03\x18\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d"
  "\x77\x72\x61\x70\x70\x65\x72\x2f\x69\x6e\x64\x65\x78\x6f\x06\xa0"
  "\x02\x10\x81\x85\x02\x9f\x02\x0e\x81\x85\x02\x9e\x02\x0c\x81\x85"
  "\x02\x9d\x02\x0a\x81\x87\x02\x9c\x02\x08\x81\x89\x02\x9b\x02\x06"
  "\x81\x85\x02\x9a\x02\x04\x84\x06\x0f\x1f\x70\x02\x59\x21\x0e\x73"
  "\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\xa2\x02\x06\x81"
  "\x83\x02\xa1\x02\x04\x83\x04\x05\x0b\x71\x02\x5a\x04\x09\x73\x74"
  "\x72\x69\x6e\x67\x3d\x3f\x02\xa3\x02\x04\x84\x06\x03\x72\x02\x5b"
  "\x03\x0a\x70\x61\x74\x68\x6e\x61\x6d\x65\x3f\x02\xa5\x02\x06\x81"
  "\x83\x02\xa4\x02\x04\x83\x04\x05\x0c\x5b\x73\x73\x04\x72\x04\x71"
  "\x04\x70\x04\x6c\x04\x6b\x04\x6a\x04\x69\x04\x0f\x06\x5e\x04\x1e"
  "\x04\x68\x04\x67\x04\x66\x04\x65\x04\x64\x04\x63\x04\x62\x08\x5d"
  "\x04\x5a\x06\x59\x04\x58\x04\x28\x04\x18\x60\x6e\x61\x15\x67\x65"
  "\x74\x2d\x77\x72\x61\x70\x70\x65\x64\x2d\x64\x62\x67\x2d\x69\x6e"
  "\x66\x6f\x1a\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2d"
  "\x66\x69\x6c\x65\x2d\x77\x72\x61\x70\x70\x65\x72\x6d\x0a\x1f\x64"
  "\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x66\x69\x6c\x65\x2d\x77\x72"
  "\x61\x70\x70\x65\x72\x2f\x76\x65\x72\x73\x69\x6f\x6e\x12\x5c\x1c"
  "\x73\x65\x74\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x77\x72"
  "\x61\x70\x70\x65\x72\x2f\x69\x6e\x66\x6f\x21\x17\x64\x65\x62\x75"
  "\x67\x67\x69\x6e\x67\x2d\x77\x72\x61\x70\x70\x65\x72\x2f\x69\x6e"
  "\x66\x6f\x6f\x20\x73\x65\x74\x2d\x64\x65\x62\x75\x67\x67\x69\x6e"
  "\x67\x2d\x77\x72\x61\x70\x70\x65\x72\x2f\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x21\x1b\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x77\x72"
  "\x61\x70\x70\x65\x72\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65\x1a\x64"
  "\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x77\x72\x61\x70\x70\x65\x72"
  "\x2f\x76\x65\x72\x73\x69\x6f\x6e\x5b\x26\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x65"
  "\x62\x75\x67\x67\x69\x6e\x67\x2d\x77\x72\x61\x70\x70\x65\x72\x19"
  "\x73\x65\x74\x2d\x64\x62\x67\x2d\x6c\x61\x62\x65\x6c\x2f\x65\x78"
  "\x74\x65\x72\x6e\x61\x6c\x3f\x21\x10\x64\x62\x67\x2d\x6c\x61\x62"
  "\x65\x6c\x2f\x6e\x61\x6d\x65\x73\x14\x64\x62\x67\x2d\x6c\x61\x62"
  "\x65\x6c\x2f\x65\x78\x74\x65\x72\x6e\x61\x6c\x3f\x11\x64\x62\x67"
  "\x2d\x6c\x61\x62\x65\x6c\x2f\x6f\x66\x66\x73\x65\x74\x18\x0f\x64"
  "\x62\x67\x2d\x6c\x61\x62\x65\x6c\x2f\x6e\x61\x6d\x65\x11\x6d\x61"
  "\x6b\x65\x2d\x64\x62\x67\x2d\x6c\x61\x62\x65\x6c\x2d\x32\x1b\x64"
  "\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x73\x74"
  "\x61\x74\x69\x63\x2d\x6c\x69\x6e\x6b\x1e\x64\x62\x67\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x72\x65\x74\x75\x72\x6e\x2d"
  "\x61\x64\x64\x72\x65\x73\x73\x1e\x64\x62\x67\x2d\x62\x6c\x6f\x63"
  "\x6b\x2d\x6e\x61\x6d\x65\x2f\x6e\x6f\x72\x6d\x61\x6c\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x19\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x6e\x61\x6d\x65\x2f\x69\x63\x2d\x70\x61\x72\x65\x6e\x74\x1c\x64"
  "\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x64\x79"
  "\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x0e\x64\x62\x67\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x3f\x18\x73\x65\x74\x2d\x64\x62\x67"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x76\x61\x6c\x75\x65\x21"
  "\x13\x64\x62\x67\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x76\x61"
  "\x6c\x75\x65\x12\x64\x62\x67\x2d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x2f\x74\x79\x70\x65\x12\x64\x62\x67\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2f\x6e\x61\x6d\x65\x12\x6d\x61\x6b\x65\x2d\x64\x62\x67"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x0c\x35\x23\x5b\x28\x72\x75"
  "\x6e\x74\x69\x6d\x65\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69"
  "\x6e\x66\x6f\x29\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x61"
  "\x6d\x65\x2f\x73\x74\x61\x74\x69\x63\x2d\x6c\x69\x6e\x6b\x5d\x38"
  "\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64\x62\x67\x2d\x62\x6c\x6f"
  "\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x72\x65\x74\x75\x72\x6e\x2d\x61"
  "\x64\x64\x72\x65\x73\x73\x5d\x38\x23\x5b\x28\x72\x75\x6e\x74\x69"
  "\x6d\x65\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e\x66\x6f"
  "\x29\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x2f"
  "\x6e\x6f\x72\x6d\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x5d\x33"
  "\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64\x62\x67\x2d\x62\x6c\x6f"
  "\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x69\x63\x2d\x70\x61\x72\x65\x6e"
  "\x74\x5d\x36\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e\x66\x6f\x29\x64\x62\x67\x2d"
  "\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x2f\x64\x79\x6e\x61\x6d"
  "\x69\x63\x2d\x6c\x69\x6e\x6b\x5d\x57\x04\x56\x04\x55\x04\x54\x04"
  "\x53\x04\x52\x04\x0c\x0d\x64\x62\x67\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x06\x76\x61\x6c\x75\x65\x05\x74\x79\x70\x65\x73\x05\x6e"
  "\x61\x6d\x65\x72\x11\x72\x74\x64\x3a\x64\x62\x67\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x71\x0d\x64\x62\x67\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x51\x0b\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x3f\x19"
  "\x73\x65\x74\x2d\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x21\x14\x64\x62\x67\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x15\x64\x62\x67"
  "\x2d\x62\x6c\x6f\x63\x6b\x2f\x73\x74\x61\x63\x6b\x2d\x6c\x69\x6e"
  "\x6b\x11\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f\x6c\x61\x79\x6f"
  "\x75\x74\x1a\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x2f\x6f\x72\x69"
  "\x67\x69\x6e\x61\x6c\x2d\x70\x61\x72\x65\x6e\x74\x11\x64\x62\x67"
  "\x2d\x62\x6c\x6f\x63\x6b\x2f\x70\x61\x72\x65\x6e\x74\x0f\x64\x62"
  "\x67\x2d\x62\x6c\x6f\x63\x6b\x2f\x74\x79\x70\x65\x0f\x6d\x61\x6b"
  "\x65\x2d\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x0a\x50\x04\x4f\x04"
  "\x4e\x04\x4d\x04\x4c\x04\x4b\x04\x4a\x04\x49\x04\x48\x04\x0a\x0a"
  "\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x0a\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x0b\x73\x74\x61\x63\x6b\x2d\x6c\x69\x6e\x6b\x07\x6c"
  "\x61\x79\x6f\x75\x74\x10\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x70"
  "\x61\x72\x65\x6e\x74\x07\x70\x61\x72\x65\x6e\x74\x73\x0e\x72\x74"
  "\x64\x3a\x64\x62\x67\x2d\x62\x6c\x6f\x63\x6b\x70\x0a\x64\x62\x67"
  "\x2d\x62\x6c\x6f\x63\x6b\x47\x08\x13\x64\x62\x67\x2d\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x3c\x3f\x1e\x64\x62\x67\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x6c\x61\x62"
  "\x65\x6c\x2d\x6f\x66\x66\x73\x65\x74\x12\x64\x62\x67\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x3f\x1c\x73\x65\x74\x2d"
  "\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x2f\x6c\x61\x62\x65\x6c\x21\x1d\x64\x62\x67\x2d\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x73\x6f\x75\x72\x63\x65\x2d"
  "\x63\x6f\x64\x65\x18\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2f\x6f\x66\x66\x73\x65\x74\x16\x64\x62\x67"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x74\x79"
  "\x70\x65\x17\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2f\x6c\x61\x62\x65\x6c\x17\x64\x62\x67\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x62\x6c\x6f\x63\x6b"
  "\x16\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x0b\x46\x04\x45\x04\x44\x04\x43\x04\x42"
  "\x04\x41\x04\x40\x04\x3f\x04\x3e\x04\x3d\x04\x0b\x11\x64\x62\x67"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x0c\x73\x6f"
  "\x75\x72\x63\x65\x2d\x63\x6f\x64\x65\x6f\x07\x6f\x66\x66\x73\x65"
  "\x74\x73\x06\x6c\x61\x62\x65\x6c\x6e\x06\x62\x6c\x6f\x63\x6b\x6d"
  "\x15\x72\x74\x64\x3a\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x6c\x11\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x3c\x10\x64\x62\x67\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x3c\x3f\x3a\x0f\x64\x62\x67\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x3f\x22\x73\x65\x74\x2d\x64\x62\x67"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x65\x78\x74\x65\x72"
  "\x6e\x61\x6c\x2d\x6c\x61\x62\x65\x6c\x21\x19\x73\x65\x74\x2d\x64"
  "\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x6c\x61\x62"
  "\x65\x6c\x21\x1a\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2f\x73\x6f\x75\x72\x63\x65\x2d\x63\x6f\x64\x65\x1d\x64\x62"
  "\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x65\x78\x74\x65"
  "\x72\x6e\x61\x6c\x2d\x6c\x61\x62\x65\x6c\x18\x64\x62\x67\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x61\x75\x78\x69\x6c\x69\x61"
  "\x72\x79\x13\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2f\x72\x65\x73\x74\x17\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2f\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x17\x64\x62\x67"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x72\x65\x71\x75\x69"
  "\x72\x65\x64\x13\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2f\x6e\x61\x6d\x65\x13\x64\x62\x67\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2f\x74\x79\x70\x65\x14\x64\x62\x67\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2f\x6c\x61\x62\x65\x6c\x14\x64\x62"
  "\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x62\x6c\x6f\x63"
  "\x6b\x13\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x11\x3b\x04\x39\x06\x38\x04\x37\x04\x36\x04\x35"
  "\x04\x34\x04\x33\x04\x32\x04\x31\x04\x30\x04\x2f\x04\x2e\x04\x2d"
  "\x04\x2c\x04\x2b\x04\x11\x0e\x64\x62\x67\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x6f\x0f\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x6c"
  "\x61\x62\x65\x6c\x0a\x61\x75\x78\x69\x6c\x69\x61\x72\x79\x05\x72"
  "\x65\x73\x74\x09\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x09\x72\x65\x71"
  "\x75\x69\x72\x65\x64\x72\x73\x6e\x6d\x0b\x0b\x0a\x09\x08\x0b\x12"
  "\x72\x74\x64\x3a\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x73\x0e\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2a\x0c\x1c\x64\x62\x67\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x2f\x6c\x61\x62\x65\x6c\x2d\x6f\x66\x66\x73\x65\x74\x10\x64"
  "\x62\x67\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x1a\x73"
  "\x65\x74\x2d\x64\x62\x67\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x2f\x6c\x61\x62\x65\x6c\x21\x15\x64\x62\x67\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2f\x6c\x61\x62\x65\x6c\x15\x64\x62"
  "\x67\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x62\x6c\x6f"
  "\x63\x6b\x14\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x29\x04\x27\x04\x26\x04\x25\x04\x24\x04"
  "\x23\x04\x0f\x64\x62\x67\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x6e\x6d\x13\x72\x74\x64\x3a\x64\x62\x67\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x72\x0f\x64\x62\x67\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x22\x10\x64\x62\x67\x2d\x69\x6e\x66\x6f"
  "\x2f\x6c\x61\x62\x65\x6c\x73\x5f\x1a\x73\x65\x74\x2d\x64\x62\x67"
  "\x2d\x69\x6e\x66\x6f\x2f\x6c\x61\x62\x65\x6c\x73\x2f\x64\x65\x73"
  "\x63\x21\x15\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2f\x6c\x61\x62\x65"
  "\x6c\x73\x2f\x64\x65\x73\x63\x17\x64\x62\x67\x2d\x69\x6e\x66\x6f"
  "\x2f\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x73\x14\x64"
  "\x62\x67\x2d\x69\x6e\x66\x6f\x2f\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x73\x14\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2f\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x0e\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d"
  "\x69\x6e\x66\x6f\x21\x04\x20\x04\x1f\x04\x1d\x04\x1c\x04\x1b\x04"
  "\x1a\x04\x19\x04\x09\x64\x62\x67\x2d\x69\x6e\x66\x6f\x0c\x6c\x61"
  "\x62\x65\x6c\x73\x2f\x64\x65\x73\x63\x0e\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x73\x0b\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x73\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x0d\x72\x74"
  "\x64\x3a\x64\x62\x67\x2d\x69\x6e\x66\x6f\x6f\x09\x64\x62\x67\x2d"
  "\x69\x6e\x66\x6f\x18\x13\x16\x11\x0d\x11\x64\x62\x67\x2d\x69\x6e"
  "\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x3f\x0c\x18\x64\x62\x67\x2d"
  "\x69\x6e\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x2f\x74\x6c\x2d\x66"
  "\x72\x65\x65\x19\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2d\x76\x65\x63"
  "\x74\x6f\x72\x2f\x74\x6c\x2d\x62\x6f\x75\x6e\x64\x1d\x64\x62\x67"
  "\x2d\x69\x6e\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x2f\x6f\x74\x68"
  "\x65\x72\x2d\x62\x6c\x6f\x63\x6b\x73\x1b\x64\x62\x67\x2d\x69\x6e"
  "\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x2f\x72\x6f\x6f\x74\x2d\x62"
  "\x6c\x6f\x63\x6b\x21\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2f\x63\x6f\x6d\x70\x69\x6c\x61\x74\x69\x6f\x6e"
  "\x2d\x74\x79\x70\x65\x15\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d\x69"
  "\x6e\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x0d\x17\x04\x14\x04\x15"
  "\x04\x10\x04\x0e\x04\x0b\x04\x09\x04\x04\x04\x04\x04\x04\x0d\x07"
  "\x76\x65\x63\x74\x6f\x72\x10\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2d"
  "\x76\x65\x63\x74\x6f\x72\x08\x74\x6c\x2d\x66\x72\x65\x65\x09\x74"
  "\x6c\x2d\x62\x6f\x75\x6e\x64\x0d\x6f\x74\x68\x65\x72\x2d\x62\x6c"
  "\x6f\x63\x6b\x73\x0b\x72\x6f\x6f\x74\x2d\x62\x6c\x6f\x63\x6b\x11"
  "\x63\x6f\x6d\x70\x69\x6c\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x14\x72\x74\x64\x3a\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2d\x76"
  "\x65\x63\x74\x6f\x72\x6e\x10\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2d"
  "\x76\x65\x63\x74\x6f\x72\x04\x19\x73\x74\x61\x6e\x64\x61\x72\x64"
  "\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64"
  "\x04\x25\x6e\x61\x6d\x65\x64\x2d\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x2f\x73\x65\x74\x2d\x74\x61\x67\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x69\x6f\x6e\x21\x0a\x1b\x6d\x61\x6b\x65\x2d\x64\x65\x66"
  "\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79"
  "\x70\x65\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x05\x6e\x6f\x72\x73\x6c\x70\x71\x05\x63\x6f\x6e\x73"
  "\x04\x63\x61\x72\x0a\x31\x64\x80\x80\x04\x30\x62\x81\x81\x02\x2f"
  "\x60\x81\x81\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x85\x02\x2c\x5a"
  "\x81\x83\x02\x2b\x58\x81\x85\x02\x2a\x56\x81\x83\x02\x29\x54\x81"
  "\x83\x02\x28\x52\x81\x8b\x02\x27\x50\x81\x85\x02\x26\x4e\x81\x85"
  "\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x83\x02"
  "\x22\x46\x81\x8b\x02\x21\x44\x81\x85\x02\x20\x42\x81\x85\x02\x1f"
  "\x40\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x83\x02\x1c\x3a"
  "\x81\x8b\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x85\x02\x19\x34\x81"
  "\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x8b"
  "\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x85\x02\x13\x28\x81\x83\x02"
  "\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x8b\x02\x0f"
  "\x20\x81\x85\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x83\x02\x0c\x1a"
  "\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x8b\x02\x09\x14\x81"
  "\x85\x02\x08\x12\x81\x85\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83"
  "\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x8b\x02\x03\x08\x81\x85\x02"
  "\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02\x63\xbe\x01";

SCHEME_OBJECT *
infstr_so_data_8f1a64bea062dd77 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_infstr_so_data_8f1a64bea062dd77 [0]))), (sizeof (prog_infstr_so_data_8f1a64bea062dd77)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_56]));
}

DECLARE_COMPILED_DATA_NS ("infstr.so", infstr_so_data_8f1a64bea062dd77)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("infstr.so", "bc9504c57ed49a30")
