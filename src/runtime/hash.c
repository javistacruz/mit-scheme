/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:36-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_10 11
#define LABEL_1_13 13
#define LABEL_1_11 15
#define LABEL_1_15 17
#define LABEL_1_12 19
#define ENVIRONMENT_LABEL_1_3 40
#define DEBUGGING_LABEL_1_2 39
#define OBJECT_1_1 38
#define OBJECT_1_0 37
#define EXECUTE_CACHE_1_17 21
#define EXECUTE_CACHE_1_16 23
#define EXECUTE_CACHE_1_14 25
#define EXECUTE_CACHE_1_9 27
#define EXECUTE_CACHE_1_6 29
#define FREE_REFERENCE_1_1 32
#define FREE_REFERENCE_1_0 33
#define FREE_ASSIGNMENT_1_1 35
#define FREE_ASSIGNMENT_1_0 36
#define FREE_REFERENCES_LABEL_1_0 20
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
hash_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_4;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_1_15);
      goto label_9;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_11)
DEFLABEL (initialize_packageB_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_20)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_17)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_16;
  Wrd23 = Wrd27;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd24.pObj));

DEFLABEL (label_8)
  (Wrd23.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_19)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_7)
  goto label_17;

DEFLABEL (label_22)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_6)
  goto label_20;

DEFLABEL (lambda_12)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_1_12);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

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
hash_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto hash_table_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_size_3)
DEFLABEL (hash_table_size_0)
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
hash_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto hash_table_next_number_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_next_number_3)
DEFLABEL (hash_table_next_number_0)
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
hash_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto hash_table_hash_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_hash_table_3)
DEFLABEL (hash_table_hash_table_0)
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
hash_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto hash_table_unhash_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_unhash_table_3)
DEFLABEL (hash_table_unhash_table_0)
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
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define OBJECT_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
hash_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_hash_table_sizeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_hash_table_sizeB_3)
DEFLABEL (set_hash_table_sizeB_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
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
hash_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_hash_table_next_numberB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_hash_table_next_numberB_3)
DEFLABEL (set_hash_table_next_numberB_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
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
hash_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_hash_table_hash_tableB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_hash_table_hash_tableB_3)
DEFLABEL (set_hash_table_hash_tableB_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_8_1]);
  Rsp = (& (Rsp [3]));
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
hash_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_hash_table_unhash_tableB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_hash_table_unhash_tableB_3)
DEFLABEL (set_hash_table_unhash_tableB_0)
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
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define ENVIRONMENT_LABEL_10_3 17
#define DEBUGGING_LABEL_10_2 16
#define OBJECT_10_3 15
#define OBJECT_10_2 14
#define OBJECT_10_1 13
#define OBJECT_10_0 12
#define FREE_REFERENCE_10_0 11
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
hash_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto hash_tableP_4;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_tableP_10)
DEFLABEL (hash_tableP_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
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
  Rvl = (current_block [OBJECT_10_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_10_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_12 9
#define LABEL_11_7 11
#define LABEL_11_9 13
#define LABEL_11_10 15
#define LABEL_11_14 17
#define LABEL_11_11 19
#define LABEL_11_17 21
#define LABEL_11_18 23
#define LABEL_11_21 25
#define LABEL_11_19 27
#define LABEL_11_20 29
#define LABEL_11_23 31
#define LABEL_11_25 33
#define LABEL_11_24 35
#define ENVIRONMENT_LABEL_11_3 61
#define DEBUGGING_LABEL_11_2 60
#define OBJECT_11_9 59
#define OBJECT_11_8 58
#define OBJECT_11_7 57
#define OBJECT_11_6 56
#define OBJECT_11_5 55
#define OBJECT_11_4 54
#define OBJECT_11_3 53
#define OBJECT_11_2 52
#define OBJECT_11_1 51
#define OBJECT_11_0 50
#define EXECUTE_CACHE_11_22 37
#define EXECUTE_CACHE_11_16 39
#define EXECUTE_CACHE_11_15 41
#define EXECUTE_CACHE_11_13 43
#define EXECUTE_CACHE_11_8 45
#define FREE_REFERENCE_11_1 48
#define FREE_REFERENCE_11_0 49
#define FREE_REFERENCES_LABEL_11_0 36
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
hash_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS
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
      goto hash_table_make_26;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_20;

    case 3:
      current_block = (Rpc - LABEL_11_12);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_23;

    case 6:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_22;

    case 7:
      current_block = (Rpc - LABEL_11_14);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_21;

    case 9:
      current_block = (Rpc - LABEL_11_17);
      goto loop_17;

    case 10:
      current_block = (Rpc - LABEL_11_18);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_11_21);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_11_20);
      goto continuation_3;

    case 14:
      current_block = (Rpc - LABEL_11_23);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_11_25);
      goto label_33;

    case 16:
      current_block = (Rpc - LABEL_11_24);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_make_35)
DEFLABEL (hash_table_make_26)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_11_0]))
    goto label_38;
  Wrd7 = Wrd5;

DEFLABEL (label_37)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_17;

DEFLABEL (label_38)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_40;
  Wrd16 = Wrd20;

DEFLABEL (label_39)
  Wrd7 = Wrd16;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd17.pObj));

DEFLABEL (label_28)
  (Wrd16.Obj) = Rvl;
  goto label_39;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_44;
  Wrd15 = Wrd19;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_42;
  Wrd5 = Wrd9;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_15]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_11_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_14])), (Wrd6.pObj));

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_12])), (Wrd16.pObj));

DEFLABEL (label_29)
  (Wrd15.Obj) = Rvl;
  goto label_43;

DEFLABEL (loop_36)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_11_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_49;
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_48;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd27.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_48;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_6]), 1);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_23);
  (Wrd5.Obj) = Rvl;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_46;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd14.Lng))))
    goto label_46;
  ((Wrd12.pObj) [1]) = Rvl;

DEFLABEL (label_45)
  (Wrd6.Obj) = (current_block [OBJECT_11_7]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 2);

DEFLABEL (label_46)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_11_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 3);

DEFLABEL (label_33)
  goto label_45;

DEFLABEL (label_48)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd32.Obj) = (current_block [OBJECT_11_3]);
  (Wrd33.Obj) = (current_block [OBJECT_11_1]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_51;
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_51;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_51;
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd42.pObj) = (& ((Wrd48.pObj) [(Wrd39.Lng)]));
  ((Wrd42.pObj) [1]) = (Wrd29.Obj);

DEFLABEL (label_50)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd36.Lng) + 1L);
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (Rsp [0]) = (Wrd34.Obj);
  goto loop_17;

DEFLABEL (label_51)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 3);

DEFLABEL (label_32)
  goto label_50;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_22]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 15
#define DEBUGGING_LABEL_12_2 14
#define OBJECT_12_2 13
#define OBJECT_12_1 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCE_12_0 10
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
hash_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd8;
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
      goto hash_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_6)
DEFLABEL (hash_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = (current_block [OBJECT_12_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_12_1]))
    goto label_9;
  Wrd10 = Wrd8;

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12_2]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (label_9)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_11;
  Wrd12 = Wrd16;

DEFLABEL (label_10)
  Wrd10 = Wrd12;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd13.pObj));

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_9 9
#define LABEL_13_6 11
#define ENVIRONMENT_LABEL_13_3 22
#define DEBUGGING_LABEL_13_2 21
#define OBJECT_13_1 20
#define OBJECT_13_0 19
#define EXECUTE_CACHE_13_10 13
#define EXECUTE_CACHE_13_8 15
#define FREE_REFERENCE_13_0 18
#define FREE_REFERENCES_LABEL_13_0 12
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
hash_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_13_4);
      goto unhash_6;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unhash_11)
DEFLABEL (unhash_6)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_20;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd28.Lng) == 0))
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  if ((Wrd15.Obj) == (current_block [OBJECT_13_0]))
    goto label_17;
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_9);
  goto label_14;

DEFLABEL (label_17)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_19;
  Wrd19 = Wrd23;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_7])), (Wrd20.pObj));

DEFLABEL (label_9)
  (Wrd19.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define ENVIRONMENT_LABEL_14_3 16
#define DEBUGGING_LABEL_14_2 15
#define OBJECT_14_1 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_7 9
#define FREE_REFERENCE_14_0 12
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
hash_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_14_4);
      goto valid_hash_numberP_3;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (valid_hash_numberP_8)
DEFLABEL (valid_hash_numberP_3)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_15;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd24.Lng) == 0))
    goto label_10;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd12.Obj) = (Rsp [1]);
  if ((Wrd12.Obj) == (current_block [OBJECT_14_0]))
    goto label_12;
  Wrd14 = Wrd12;

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (label_12)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_14;
  Wrd15 = Wrd19;

DEFLABEL (label_13)
  Wrd14 = Wrd15;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd16.pObj));

DEFLABEL (label_6)
  (Wrd15.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_15)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 14
#define DEBUGGING_LABEL_15_2 13
#define OBJECT_15_1 12
#define OBJECT_15_0 11
#define EXECUTE_CACHE_15_6 7
#define FREE_REFERENCE_15_0 10
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
hash_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_15_4);
      goto object_hashedP_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_hashedP_8)
DEFLABEL (object_hashedP_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  (Wrd23.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_9)
DEFLABEL (label_16)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  if ((Wrd13.Obj) == (current_block [OBJECT_15_1]))
    goto label_13;
  Wrd15 = Wrd13;

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd15.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (label_13)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_15;
  Wrd17 = Wrd21;

DEFLABEL (label_14)
  Wrd15 = Wrd17;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd18.pObj));

DEFLABEL (label_6)
  (Wrd17.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_5 3
#define LABEL_16_6 5
#define LABEL_16_4 7
#define LABEL_16_8 9
#define LABEL_16_9 11
#define TAG_16_10 4
#define LABEL_16_14 13
#define LABEL_16_13 15
#define LABEL_16_17 17
#define LABEL_16_15 19
#define LABEL_16_16 21
#define LABEL_16_19 23
#define LABEL_16_20 25
#define LABEL_16_22 27
#define LABEL_16_24 29
#define LABEL_16_23 31
#define LABEL_16_25 33
#define LABEL_16_26 35
#define LABEL_16_27 37
#define LABEL_16_28 39
#define LABEL_16_29 41
#define LABEL_16_30 43
#define LABEL_16_31 45
#define LABEL_16_32 47
#define ENVIRONMENT_LABEL_16_3 81
#define DEBUGGING_LABEL_16_2 80
#define OBJECT_16_18 79
#define OBJECT_16_17 78
#define OBJECT_16_16 77
#define OBJECT_16_15 76
#define OBJECT_16_14 75
#define OBJECT_16_13 74
#define OBJECT_16_12 73
#define OBJECT_16_11 72
#define OBJECT_16_10 71
#define OBJECT_16_9 70
#define OBJECT_16_8 69
#define OBJECT_16_7 68
#define OBJECT_16_6 67
#define OBJECT_16_5 66
#define OBJECT_16_4 65
#define OBJECT_16_3 64
#define OBJECT_16_2 63
#define OBJECT_16_1 62
#define OBJECT_16_0 61
#define EXECUTE_CACHE_16_21 49
#define EXECUTE_CACHE_16_18 51
#define EXECUTE_CACHE_16_12 53
#define EXECUTE_CACHE_16_11 55
#define EXECUTE_CACHE_16_7 57
#define FREE_REFERENCE_16_0 60
#define FREE_REFERENCES_LABEL_16_0 48
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
hash_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd68;
  machine_word Wrd71;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd125;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd13;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd50;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_16_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_16_4);
      goto object_hash_36;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_38;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto lambda_53;

    case 5:
      current_block = (Rpc - LABEL_16_14);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_16_13);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_16_17);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_16_16);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_16_19);
      goto label_41;

    case 11:
      current_block = (Rpc - LABEL_16_20);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_16_22);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_16_24);
      goto label_43;

    case 14:
      current_block = (Rpc - LABEL_16_23);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_16_25);
      goto label_44;

    case 16:
      current_block = (Rpc - LABEL_16_26);
      goto label_45;

    case 17:
      current_block = (Rpc - LABEL_16_27);
      goto label_46;

    case 18:
      current_block = (Rpc - LABEL_16_28);
      goto label_49;

    case 19:
      current_block = (Rpc - LABEL_16_29);
      goto label_48;

    case 20:
      current_block = (Rpc - LABEL_16_30);
      goto label_47;

    case 21:
      current_block = (Rpc - LABEL_16_31);
      goto continuation_24;

    case 22:
      current_block = (Rpc - LABEL_16_32);
      goto label_50;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_hash_52)
DEFLABEL (object_hash_36)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_16_2]))
    goto label_55;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_54;

DEFLABEL (label_55)
  (Wrd30.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_54)
DEFLABEL (label_61)
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_16_2]))
    goto label_58;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_57;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_16_1]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_5);

DEFLABEL (label_57)
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_56)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_9])));
  Rhp += 3;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd27 = Wrd22;
  (Wrd28.Obj) = (Rsp [2]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd27.pObj) [3]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  ((Wrd27.pObj) [4]) = (Wrd24.Obj);
  (Rsp [4]) = (Wrd21.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (label_58)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_60;
  Wrd14 = Wrd18;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_56;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_8])), (Wrd15.pObj));

DEFLABEL (label_38)
  (Wrd14.Obj) = Rvl;
  goto label_59;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_16_9);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_88;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_88;
  (Wrd12.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_87)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_13);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd7.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd7.Lng));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [4]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_86;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd24.Lng))))
    goto label_86;
  (Wrd16.Obj) = ((Wrd22.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_85)
  (Wrd36.Obj) = (current_block [OBJECT_16_8]);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_9]), 2);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16_16);
  (* (--Rsp)) = Rvl;
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 10))
    goto label_84;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_84;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd18.Lng))))
    goto label_84;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd9.pObj) = (& ((Wrd16.pObj) [(Wrd6.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_83)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_16_20);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_62;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_62)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_12]), 1);

DEFLABEL (label_63)
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  if (! ((Wrd17.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_64;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd34.Obj) = ((Wrd16.pObj) [4]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_82;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_82;
  (Wrd19.Obj) = ((Wrd29.pObj) [3]);

DEFLABEL (label_81)
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd59.Obj) = (Rsp [5]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [4]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_80;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd58.Lng))))
    goto label_80;
  (Wrd50.Obj) = ((Wrd56.pObj) [2]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_79)
  (Wrd70.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_16_23);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_78;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_78;
  (Wrd5.Obj) = ((Wrd15.pObj) [5]);

DEFLABEL (label_77)
  (Wrd29.Obj) = (* (Rsp++));
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_76;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_76;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd38.Lng))))
    goto label_76;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd32.pObj) = (& ((Wrd36.pObj) [(Wrd30.Lng)]));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_75)
  (Wrd48.Obj) = (Rsp [5]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [2]);
  (Wrd51.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_74;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd59.Lng) = ((Wrd61.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd59.Lng)))
    goto label_74;
  (Wrd56.Obj) = (LONG_TO_FIXNUM (Wrd59.Lng));

DEFLABEL (label_73)
  (Wrd114.Obj) = (Rsp [6]);
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [4]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 62))
    goto label_72;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd112.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd113.Lng))))
    goto label_72;
  ((Wrd111.pObj) [3]) = (Wrd56.Obj);

DEFLABEL (label_71)
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd66.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Wrd94.Obj) = (Rsp [4]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 10))
    goto label_70;
  (Wrd86.Obj) = (Rsp [5]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 26))
    goto label_70;
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) (Wrd89.Lng)) < ((unsigned long) (Wrd93.Lng))))
    goto label_70;
  (Wrd82.uLng) = (OBJECT_DATUM (Wrd86.Obj));
  (Wrd85.pObj) = (& ((Wrd91.pObj) [(Wrd82.Lng)]));
  ((Wrd85.pObj) [1]) = (Wrd62.Obj);

DEFLABEL (label_69)
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_68;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [1]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_67)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_31]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (current_block [OBJECT_16_16]);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_17]), 2);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_16_31);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_66;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  ((Wrd13.pObj) [1]) = (Wrd7.Obj);

DEFLABEL (label_65)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_18]), 2);

DEFLABEL (label_50)
  goto label_65;

DEFLABEL (label_68)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_30]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_12]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd96.Obj) = (Rsp [4]);
  (Wrd97.Obj) = (Rsp [5]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_29]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_15]), 3);

DEFLABEL (label_48)
  goto label_69;

DEFLABEL (label_72)
  (Wrd119.Obj) = (Rsp [6]);
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd118.Obj) = ((Wrd120.pObj) [4]);
  (Wrd121.Obj) = (current_block [OBJECT_16_11]);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_28]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_14]), 3);

DEFLABEL (label_49)
  goto label_71;

DEFLABEL (label_74)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_27]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_46)
  (Wrd56.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_26]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_10]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [4]);
  (Wrd25.Obj) = (current_block [OBJECT_16_13]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_25]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 2);

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd64.Obj) = (Rsp [5]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [4]);
  (Wrd66.Obj) = (current_block [OBJECT_16_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_24]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [4]);
  (Wrd39.Obj) = (current_block [OBJECT_16_11]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_22]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 2);

DEFLABEL (label_42)
  (Wrd19.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_10]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [4]);
  (Wrd32.Obj) = (current_block [OBJECT_16_7]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [4]);
  (Wrd28.Obj) = (current_block [OBJECT_16_4]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_87;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_5 3
#define LABEL_17_6 5
#define LABEL_17_4 7
#define LABEL_17_8 9
#define LABEL_17_10 11
#define LABEL_17_9 13
#define LABEL_17_13 15
#define TAG_17_14 6
#define LABEL_17_16 17
#define LABEL_17_17 19
#define LABEL_17_18 21
#define LABEL_17_22 23
#define LABEL_17_19 25
#define LABEL_17_23 27
#define LABEL_17_20 29
#define TAG_17_21 13
#define LABEL_17_24 31
#define LABEL_17_25 33
#define TAG_17_26 15
#define LABEL_17_27 35
#define LABEL_17_28 37
#define LABEL_17_29 39
#define LABEL_17_30 41
#define ENVIRONMENT_LABEL_17_3 68
#define DEBUGGING_LABEL_17_2 67
#define OBJECT_17_12 66
#define OBJECT_17_11 65
#define OBJECT_17_10 64
#define OBJECT_17_9 63
#define OBJECT_17_8 62
#define OBJECT_17_7 61
#define OBJECT_17_6 60
#define OBJECT_17_5 59
#define OBJECT_17_4 58
#define OBJECT_17_3 57
#define OBJECT_17_2 56
#define OBJECT_17_1 55
#define OBJECT_17_0 54
#define EXECUTE_CACHE_17_15 43
#define EXECUTE_CACHE_17_12 45
#define EXECUTE_CACHE_17_11 47
#define EXECUTE_CACHE_17_7 49
#define FREE_REFERENCE_17_1 52
#define FREE_REFERENCE_17_0 53
#define FREE_REFERENCES_LABEL_17_0 42
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
hash_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd81;
  machine_word Wrd73;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd34;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd47;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  INVOKE_INTERFACE_DECLS
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_17_4);
      goto object_unhash_27;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_17_13);
      goto lambda_43;

    case 7:
      current_block = (Rpc - LABEL_17_16);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_17_17);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_17_18);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_17_22);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_17_19);
      goto continuation_20;

    case 12:
      current_block = (Rpc - LABEL_17_23);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_17_20);
      goto lambda_44;

    case 14:
      current_block = (Rpc - LABEL_17_24);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_17_25);
      goto loop_17;

    case 16:
      current_block = (Rpc - LABEL_17_27);
      goto label_37;

    case 17:
      current_block = (Rpc - LABEL_17_28);
      goto label_38;

    case 18:
      current_block = (Rpc - LABEL_17_29);
      goto label_39;

    case 19:
      current_block = (Rpc - LABEL_17_30);
      goto label_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_unhash_42)
DEFLABEL (object_unhash_27)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_17_2]))
    goto label_50;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_49;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_5);

DEFLABEL (label_49)
  (Wrd39.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_48)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_47;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_47;
  (Wrd22.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_46)
  (Wrd36.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_13])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (label_47)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (current_block [OBJECT_17_3]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_4]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_50)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_52;
  Wrd11 = Wrd15;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_48;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_8])), (Wrd12.pObj));

DEFLABEL (label_29)
  (Wrd11.Obj) = Rvl;
  goto label_51;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_17_13);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_62;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_62;
  (Wrd5.Obj) = ((Wrd15.pObj) [5]);

DEFLABEL (label_61)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_60;
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [4]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_60;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) (Wrd43.Lng)) < ((unsigned long) (Wrd46.Lng))))
    goto label_60;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd34.pObj) = (& ((Wrd44.pObj) [(Wrd32.Lng)]));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_59)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_58;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  ((Wrd73.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_57)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd59.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_20])));
  Rhp += 2;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd59.pObj)));
  Wrd62 = Wrd59;
  (Wrd63.Obj) = (Rsp [2]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [2]);
  ((Wrd62.pObj) [2]) = (Wrd65.Obj);
  (Wrd61.Obj) = (Rsp [1]);
  ((Wrd62.pObj) [3]) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_56;
  Wrd66 = Wrd70;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_8]), 2);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_17_19);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_54;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = (current_block [OBJECT_17_9]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);

DEFLABEL (label_53)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd13.Obj) = (current_block [OBJECT_17_9]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_7]), 2);

DEFLABEL (label_35)
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_22])), (Wrd67.pObj));

DEFLABEL (label_33)
  (Wrd66.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_7]), 2);

DEFLABEL (label_34)
  goto label_57;

DEFLABEL (label_60)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [4]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_6]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_17_5]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_4]), 2);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_61;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_17_20);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_64;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_63)
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_25])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  Wrd23 = Wrd27;
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  ((Wrd23.pObj) [2]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd28.Obj);
  goto loop_17;

DEFLABEL (label_64)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_24]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_10]), 1);

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_63;

DEFLABEL (loop_45)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_17_25);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_17_11]))
    goto label_75;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_74;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_73)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_72;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_72;
  if ((Wrd20.Obj) == (Wrd16.Obj))
    goto label_68;

DEFLABEL (label_67)
  (Wrd31.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_66;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_65)
  (Rsp [1]) = (Wrd32.Obj);
  goto loop_17;

DEFLABEL (label_66)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_29]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_10]), 1);

DEFLABEL (label_39)
  (Wrd32.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_71;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [0]);

DEFLABEL (label_70)
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  Rvl = ((Wrd51.pObj) [0]);

DEFLABEL (label_69)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_30]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_12]), 1);

DEFLABEL (label_40)
  (Wrd41.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_28]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  goto label_68;

DEFLABEL (label_74)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_12]), 1);

DEFLABEL (label_37)
  (Wrd7.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_69;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define ENVIRONMENT_LABEL_18_3 13
#define DEBUGGING_LABEL_18_2 12
#define OBJECT_18_3 11
#define OBJECT_18_2 10
#define OBJECT_18_1 9
#define OBJECT_18_0 8
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
hash_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_18_4);
      goto hash_table_rehash_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hash_table_rehash_7)
DEFLABEL (hash_table_rehash_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd27.pObj) [4]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 2);

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_18_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_18_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_6 5
#define LABEL_19_5 7
#define LABEL_19_8 9
#define LABEL_19_9 11
#define LABEL_19_11 13
#define LABEL_19_14 15
#define LABEL_19_13 17
#define LABEL_19_15 19
#define LABEL_19_16 21
#define LABEL_19_19 23
#define LABEL_19_18 25
#define LABEL_19_20 27
#define LABEL_19_21 29
#define ENVIRONMENT_LABEL_19_3 47
#define DEBUGGING_LABEL_19_2 46
#define OBJECT_19_4 45
#define OBJECT_19_3 44
#define OBJECT_19_2 43
#define OBJECT_19_1 42
#define OBJECT_19_0 41
#define EXECUTE_CACHE_19_17 31
#define EXECUTE_CACHE_19_12 33
#define EXECUTE_CACHE_19_10 35
#define EXECUTE_CACHE_19_7 37
#define FREE_REFERENCE_19_0 40
#define FREE_REFERENCES_LABEL_19_0 30
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
hash_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_19_4);
      goto rehash_all_gc_daemon_14;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto loop_12;

    case 5:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_19_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_19_15);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_19_16);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_19_19);
      goto label_18;

    case 11:
      current_block = (Rpc - LABEL_19_18);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_19_20);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_19_21);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rehash_all_gc_daemon_21)
DEFLABEL (rehash_all_gc_daemon_14)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_26;
  Wrd8 = Wrd12;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_24;
  Wrd5 = Wrd9;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_12;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_8])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_6])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_25;

DEFLABEL (loop_22)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_19_9);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_19_0])))
    goto label_27;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (label_27)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19_16);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_31;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_31;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_20);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_29;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd12.Lng))))
    goto label_29;
  (Wrd7.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_28)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 2);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19_15);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19_18);
  (Rsp [1]) = Rvl;
  goto loop_12;

DEFLABEL (label_29)
  (Wrd15.Obj) = (current_block [OBJECT_19_3]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_21]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd15.Obj) = (current_block [OBJECT_19_1]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_19_13);
  (Rsp [1]) = Rvl;
  goto loop_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_18 17
#define LABEL_14 19
#define TAG_15 8
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_19 25
#define LABEL_20 27
#define LABEL_21 29
#define ENVIRONMENT_LABEL_3 55
#define DEBUGGING_LABEL_2 54
#define PURIFICATION_ROOT 53
#define OBJECT_13 52
#define OBJECT_12 51
#define OBJECT_11 50
#define OBJECT_10 49
#define OBJECT_9 48
#define OBJECT_8 47
#define OBJECT_7 46
#define OBJECT_6 45
#define OBJECT_5 44
#define OBJECT_4 43
#define OBJECT_3 42
#define OBJECT_2 41
#define OBJECT_1 40
#define OBJECT_0 39
#define FREE_REFERENCE_0 31
#define GLOBAL_EXECUTE_CACHE_12 33
#define GLOBAL_EXECUTE_CACHE_8 35
#define GLOBAL_EXECUTE_CACHE_5 37
#define FREE_REFERENCES_LABEL_0 30
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
hash_so_bd844b4e18eca8eb (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
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
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto Z__hash_table_make_20;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto expression_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_16)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_20])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_23)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_22)
  {
    static const short sections [] =
      {
	0,
	2,
	0,
	2,
	2,
	2,
	2,
	2,
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
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 19)
      goto label_21;
    blocks = (current_block [OBJECT_13]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_19])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_21)
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
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_27;
  Wrd11 = Wrd15;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_25;
  Wrd11 = Wrd15;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_11]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_18)
  (Wrd11.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_26;

DEFLABEL (Z__hash_table_make_20)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (Z__hash_table_make_9)
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

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_hash_so_bd844b4e18eca8eb [19] =
  {
    { "hash_so_code_1", 9, hash_so_code_1 },
    { "hash_so_code_2", 1, hash_so_code_2 },
    { "hash_so_code_3", 1, hash_so_code_3 },
    { "hash_so_code_4", 1, hash_so_code_4 },
    { "hash_so_code_5", 1, hash_so_code_5 },
    { "hash_so_code_6", 1, hash_so_code_6 },
    { "hash_so_code_7", 1, hash_so_code_7 },
    { "hash_so_code_8", 1, hash_so_code_8 },
    { "hash_so_code_9", 1, hash_so_code_9 },
    { "hash_so_code_10", 4, hash_so_code_10 },
    { "hash_so_code_11", 17, hash_so_code_11 },
    { "hash_so_code_12", 2, hash_so_code_12 },
    { "hash_so_code_13", 5, hash_so_code_13 },
    { "hash_so_code_14", 3, hash_so_code_14 },
    { "hash_so_code_15", 2, hash_so_code_15 },
    { "hash_so_code_16", 23, hash_so_code_16 },
    { "hash_so_code_17", 20, hash_so_code_17 },
    { "hash_so_code_18", 3, hash_so_code_18 },
    { "hash_so_code_19", 14, hash_so_code_19 }
  };

int
decl_hash_so_bd844b4e18eca8eb (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_hash_so_bd844b4e18eca8eb);
  return (0);
}

DECLARE_COMPILED_CODE ("hash.so", 14, decl_hash_so_bd844b4e18eca8eb, hash_so_bd844b4e18eca8eb)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_hash_so_data_bd844b4e18eca8eb [2710] =
  "\x64\x25\xbf\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x80\x08\x0d\xb9"
  "\x0d\xba\x25\x0d\x0d\xbb\x24\x28\x0d\xbc\x28\x0d\xbd\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x82\x88\xc2\xbf"
  "\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x83\x88\xb7\x82\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x84\x88\xb7\x83\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x85\x88\xb7\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x86\x88\xc3"
  "\x1c\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\xb7\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xc2\x1c\x02\xc1"
  "\x81\xc3\x1c\x07\x80\x08\x1d\x0d\x1c\xb1\x24\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\xb4\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x1d\x80\xb2\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1d\xb2\x24\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x1d\xb2\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x07\xb2\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\xc2\x02"
  "\x1b\x1b\x84\xc1\x1c\x82\xc2\x1c\x1b\x02\x83\xc1\xb7\x81\x07\x1d"
  "\x0c\x1b\xb2\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x08\x1b\x07\xc2\xc2\x1b"
  "\x84\xb7\x81\x1d\x0c\x1b\xb2\x0d\x24\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x1c\x83\xb7\x84\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x84\xb7\x83\x08\xb1\x24\x28\x1b\x28\x1b"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\xb3"
  "\x0d\x1b\x1b\x0d\x0d\x1b\x0d\xb5\x1b\x17\xb4\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x9f\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x9f\xc3\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x08\x8b\x08"
  "\x0d\xb1\xb2\x1b\x9b\xb6\x2a\x1e\x1e\x02\x9b\x28\x0d\x28\x0d\x28"
  "\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x53\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x68\x61"
  "\x73\x68\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x10\x61\x6c\x6c"
  "\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x73\x13\x64\x65\x66"
  "\x61\x75\x6c\x74\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x03"
  "\x14\x65\x76\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73"
  "\x74\x6f\x72\x65\x15\x72\x65\x68\x61\x73\x68\x2d\x61\x6c\x6c\x2d"
  "\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x03\x04\x0a\x77\x65\x61\x6b"
  "\x2d\x63\x6f\x6e\x73\x02\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c"
  "\x65\x2f\x6d\x61\x6b\x65\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e"
  "\x74\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x21\x03\x19\x61\x64\x64"
  "\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x67\x63\x2d\x64\x61"
  "\x65\x6d\x6f\x6e\x21\x02\x08\x67\x63\x2d\x66\x6c\x69\x70\x06\x17"
  "\x14\x82\x02\x16\x12\x81\x81\x02\x15\x10\x81\x81\x02\x14\x0e\x81"
  "\x85\x02\x13\x0c\x81\x81\x02\x12\x0a\x81\x81\x02\x11\x08\x81\x81"
  "\x02\x10\x06\x81\x81\x02\x0f\x04\x82\x02\x13\x29\x02\x0c\x25\x72"
  "\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x18\x04\x83\x04\x03\x09\x02"
  "\x19\x04\x83\x04\x03\x0a\x02\x1a\x04\x83\x04\x03\x0b\x02\x1b\x04"
  "\x83\x04\x03\x0c\x02\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65"
  "\x74\x21\x0d\x02\x1c\x04\x84\x06\x03\x0e\x02\x08\x0d\x02\x1d\x04"
  "\x84\x06\x03\x0f\x02\x09\x0d\x02\x1e\x04\x84\x06\x03\x10\x02\x0a"
  "\x0d\x02\x1f\x04\x84\x06\x03\x11\x02\x0b\x0f\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31"
  "\x12\x02\x23\x0a\x81\x85\x02\x22\x08\x81\x83\x02\x21\x06\x81\x83"
  "\x02\x20\x04\x83\x04\x09\x12\x13\x02\x0c\x28\x1a\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74"
  "\x2d\x74\x79\x70\x65\x14\x17\x18\x6d\x61\x6b\x65\x2d\x6e\x6f\x6e"
  "\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x6f\x62\x6a\x65\x63\x74\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x15\x08\x18\x64\x65"
  "\x66\x61\x75\x6c\x74\x2f\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x2d\x73\x69\x7a\x65\x16\x03\x04\x0c\x6d\x61\x6b\x65\x2d\x76\x65"
  "\x63\x74\x6f\x72\x03\x09\x77\x65\x61\x6b\x2d\x63\x64\x72\x17\x04"
  "\x0e\x77\x65\x61\x6b\x2d\x73\x65\x74\x2d\x63\x64\x72\x21\x18\x04"
  "\x06\x11\x25\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x6d\x61"
  "\x6b\x65\x06\x34\x24\x81\x85\x02\x33\x22\x81\x83\x02\x32\x20\x81"
  "\x83\x02\x31\x1e\x81\x89\x02\x30\x1c\x81\x87\x02\x2f\x1a\x81\x8d"
  "\x02\x2e\x18\x81\x89\x02\x2d\x16\x81\x89\x02\x2c\x14\x81\x87\x02"
  "\x2b\x12\x81\x87\x02\x2a\x10\x81\x85\x02\x29\x0e\x81\x83\x02\x28"
  "\x0c\x81\x85\x02\x27\x0a\x81\x89\x02\x26\x08\x81\x83\x02\x25\x06"
  "\x81\x83\x02\x24\x04\x83\x02\x23\x3e\x19\x02\x0d\x08\x02\x05\x0c"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x68\x61\x73\x68\x1a\x02\x36\x06\x81"
  "\x87\x02\x35\x04\x84\x04\x05\x10\x1b\x02\x0e\x07\x75\x6e\x68\x61"
  "\x73\x68\x1c\x08\x02\x04\x0e\x6f\x62\x6a\x65\x63\x74\x2d\x75\x6e"
  "\x68\x61\x73\x68\x1d\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64"
  "\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x03"
  "\x3b\x0c\x81\x85\x02\x3a\x0a\x81\x87\x02\x39\x08\x81\x87\x02\x38"
  "\x06\x81\x85\x02\x37\x04\x84\x04\x0b\x17\x1e\x02\x0f\x08\x02\x04"
  "\x1d\x02\x3e\x08\x81\x85\x02\x3d\x06\x81\x85\x02\x3c\x04\x84\x04"
  "\x07\x11\x1f\x02\x10\x08\x02\x05\x1a\x02\x40\x06\x81\x87\x02\x3f"
  "\x04\x84\x04\x05\x0f\x20\x02\x11\x09\x73\x65\x74\x2d\x63\x64\x72"
  "\x21\x10\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70"
  "\x65\x38\x15\x0d\x04\x63\x64\x72\x15\x0b\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x0d\x14\x0b\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x64"
  "\x61\x74\x75\x6d\x08\x12\x6f\x62\x6a\x65\x63\x74\x2d\x68\x61\x73"
  "\x68\x20\x74\x61\x62\x6c\x65\x1a\x02\x05\x1a\x65\x72\x72\x6f\x72"
  "\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x14\x03\x1e\x77\x69\x74\x68\x2d\x61\x62\x73\x6f"
  "\x6c\x75\x74\x65\x6c\x79\x2d\x6e\x6f\x2d\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x73\x21\x03\x0c\x68\x61\x73\x68\x2d\x74\x61\x62\x6c"
  "\x65\x3f\x22\x04\x07\x6d\x6f\x64\x75\x6c\x6f\x23\x04\x05\x61\x73"
  "\x73\x71\x06\x57\x30\x81\x8f\x02\x56\x2e\x81\x91\x02\x55\x2c\x81"
  "\x8f\x02\x54\x2a\x81\x8f\x02\x53\x28\x81\x8f\x02\x52\x26\x81\x8f"
  "\x02\x51\x24\x81\x8b\x02\x50\x22\x81\x8d\x02\x4f\x20\x81\x8b\x02"
  "\x4e\x1e\x81\x8d\x02\x4d\x1c\x81\x8b\x02\x4c\x1a\x81\x89\x02\x4b"
  "\x18\x81\x87\x02\x4a\x16\x81\x85\x02\x49\x14\x81\x87\x02\x48\x12"
  "\x81\x87\x02\x47\x10\x81\x83\x02\x46\x0e\x81\x85\x02\x45\x0c\x81"
  "\x83\x02\x44\x0a\x81\x89\x02\x43\x08\x85\x04\x42\x06\x81\x89\x02"
  "\x41\x04\x81\x89\x02\x2f\x52\x24\x02\x12\x04\x63\x61\x72\x15\x14"
  "\x77\x69\x74\x68\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d"
  "\x61\x73\x6b\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x0d\x08\x12\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x68\x61\x73\x68\x20\x74\x61\x62\x6c\x65"
  "\x1d\x15\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b"
  "\x2f\x67\x63\x2d\x6f\x6b\x03\x05\x14\x04\x23\x03\x22\x03\x21\x05"
  "\x6b\x2a\x81\x85\x02\x6a\x28\x81\x85\x02\x69\x26\x81\x85\x02\x68"
  "\x24\x81\x85\x02\x67\x22\x81\x85\x02\x66\x20\x81\x85\x02\x65\x1e"
  "\x81\x85\x02\x64\x1c\x81\x87\x02\x63\x1a\x81\x85\x02\x62\x18\x81"
  "\x89\x02\x61\x16\x81\x85\x02\x60\x14\x81\x83\x02\x5f\x12\x81\x83"
  "\x02\x5e\x10\x81\x83\x02\x5d\x0e\x81\x87\x02\x5c\x0c\x81\x89\x02"
  "\x5b\x0a\x81\x85\x02\x5a\x08\x84\x04\x59\x06\x81\x85\x02\x58\x04"
  "\x81\x85\x02\x29\x45\x23\x02\x13\x07\x72\x65\x68\x61\x73\x68\x21"
  "\x6e\x08\x81\x85\x02\x6d\x06\x81\x83\x02\x6c\x04\x83\x04\x07\x0e"
  "\x15\x02\x14\x21\x02\x03\x17\x04\x18\x03\x0f\x77\x65\x61\x6b\x2d"
  "\x70\x61\x69\x72\x2f\x63\x61\x72\x3f\x03\x09\x77\x65\x61\x6b\x2d"
  "\x63\x61\x72\x05\x7c\x1e\x81\x89\x02\x7b\x1c\x81\x89\x02\x7a\x1a"
  "\x81\x85\x02\x79\x18\x81\x87\x02\x78\x16\x81\x87\x02\x77\x14\x81"
  "\x85\x02\x76\x12\x81\x85\x02\x75\x10\x81\x85\x02\x74\x0e\x81\x85"
  "\x02\x73\x0c\x81\x85\x02\x72\x0a\x81\x83\x02\x71\x08\x81\x81\x02"
  "\x70\x06\x81\x83\x02\x6f\x04\x82\x02\x1d\x30\x21\x14\x18\x18\x12"
  "\x21\x04\x15\x04\x23\x08\x24\x08\x20\x04\x1f\x04\x1e\x04\x1b\x04"
  "\x19\x04\x13\x04\x0b\x12\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x2f\x72\x65\x68\x61\x73\x68\x1d\x1a\x0f\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x68\x61\x73\x68\x65\x64\x3f\x13\x76\x61\x6c\x69\x64\x2d\x68"
  "\x61\x73\x68\x2d\x6e\x75\x6d\x62\x65\x72\x3f\x1c\x05\x68\x61\x73"
  "\x68\x22\x0b\x1d\x73\x65\x74\x2d\x68\x61\x73\x68\x2d\x74\x61\x62"
  "\x6c\x65\x2f\x75\x6e\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x21"
  "\x1b\x73\x65\x74\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f"
  "\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x21\x1c\x73\x65\x74\x2d"
  "\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x6e\x65\x78\x74\x2d"
  "\x6e\x75\x6d\x62\x65\x72\x21\x15\x73\x65\x74\x2d\x68\x61\x73\x68"
  "\x2d\x74\x61\x62\x6c\x65\x2f\x73\x69\x7a\x65\x21\x18\x68\x61\x73"
  "\x68\x2d\x74\x61\x62\x6c\x65\x2f\x75\x6e\x68\x61\x73\x68\x2d\x74"
  "\x61\x62\x6c\x65\x16\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f"
  "\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x17\x68\x61\x73\x68\x2d"
  "\x74\x61\x62\x6c\x65\x2f\x6e\x65\x78\x74\x2d\x6e\x75\x6d\x62\x65"
  "\x72\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x73\x69\x7a"
  "\x65\x11\x04\x10\x04\x0f\x04\x0e\x04\x0c\x04\x0b\x04\x0a\x04\x09"
  "\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x0f\x72\x74\x64\x3a\x68\x61\x73\x68\x2d\x74\x61\x62\x6c"
  "\x65\x24\x0b\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x05\x73\x69"
  "\x7a\x65\x0c\x6e\x65\x78\x74\x2d\x6e\x75\x6d\x62\x65\x72\x0b\x68"
  "\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x0d\x75\x6e\x68\x61\x73\x68"
  "\x2d\x74\x61\x62\x6c\x65\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a"
  "\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x16\x04\xba\x02\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06"
  "\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64"
  "\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x24\x02\x0e\x1e"
  "\x80\x80\x04\x0d\x1c\x81\x81\x02\x0c\x1a\x81\x81\x02\x0b\x18\x81"
  "\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x8b\x02\x08\x12\x81\x87"
  "\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02"
  "\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02\x01"
  "\x04\x81\x83\x02\x1d\x38";

SCHEME_OBJECT *
hash_so_data_bd844b4e18eca8eb (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_hash_so_data_bd844b4e18eca8eb [0]))), (sizeof (prog_hash_so_data_bd844b4e18eca8eb)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_21]));
}

DECLARE_COMPILED_DATA_NS ("hash.so", hash_so_data_bd844b4e18eca8eb)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("hash.so", "566973d21174ff21")
