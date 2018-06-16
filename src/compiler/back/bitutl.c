/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:08-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd8;
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
      goto make_queue_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_queue_3)
DEFLABEL (make_queue_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
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
bitutl_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto queue__list_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (queue__list_3)
DEFLABEL (queue__list_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define LABEL_3_8 11
#define ENVIRONMENT_LABEL_3_3 18
#define DEBUGGING_LABEL_3_2 17
#define OBJECT_3_4 16
#define OBJECT_3_3 15
#define OBJECT_3_2 14
#define OBJECT_3_1 13
#define OBJECT_3_0 12
#define FREE_REFERENCES_LABEL_3_0 12
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_3_4);
      goto add_to_queueB_6;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_to_queueB_13)
DEFLABEL (add_to_queueB_6)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_22;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_21)
  if ((Wrd10.Obj) == (current_block [OBJECT_3_0]))
    goto label_19;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_18;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_17)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_16;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd39.Obj) = (Rsp [0]);
  ((Wrd38.pObj) [1]) = (Wrd39.Obj);

DEFLABEL (label_15)
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_14;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [1]) = (Wrd33.Obj);
  Rvl = (current_block [OBJECT_3_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_16)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_10)
  goto label_15;

DEFLABEL (label_18)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_9)
  (Wrd20.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_20;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = (Rsp [0]);
  ((Wrd47.pObj) [0]) = (Wrd48.Obj);
  goto label_15;

DEFLABEL (label_20)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_11)
  goto label_15;

DEFLABEL (label_22)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_8)
  (Wrd10.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define LABEL_4_5 7
#define LABEL_4_9 9
#define LABEL_4_6 11
#define LABEL_4_12 13
#define LABEL_4_11 15
#define ENVIRONMENT_LABEL_4_3 30
#define DEBUGGING_LABEL_4_2 29
#define OBJECT_4_2 28
#define OBJECT_4_1 27
#define OBJECT_4_0 26
#define EXECUTE_CACHE_4_13 17
#define EXECUTE_CACHE_4_10 19
#define EXECUTE_CACHE_4_8 21
#define FREE_REFERENCE_4_1 24
#define FREE_REFERENCE_4_0 25
#define FREE_REFERENCES_LABEL_4_0 16
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_4_4);
      goto set_label_valueB_6;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_label_valueB_12)
DEFLABEL (set_label_valueB_6)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_18;
  Wrd11 = Wrd15;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd8 = Wrd12;

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_9])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_12])), (Wrd9.pObj));

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_7])), (Wrd12.pObj));

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define ENVIRONMENT_LABEL_5_3 15
#define DEBUGGING_LABEL_5_2 14
#define OBJECT_5_0 13
#define EXECUTE_CACHE_5_6 9
#define FREE_ASSIGNMENT_5_0 12
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_5_4);
      goto clear_symbol_tableB_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (clear_symbol_tableB_5)
DEFLABEL (clear_symbol_tableB_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_5_0]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define ENVIRONMENT_LABEL_6_3 16
#define DEBUGGING_LABEL_6_2 15
#define OBJECT_6_0 14
#define EXECUTE_CACHE_6_7 9
#define FREE_REFERENCE_6_1 12
#define FREE_REFERENCE_6_0 13
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_6_4);
      goto initialize_symbol_tableB_0;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_symbol_tableB_5)
DEFLABEL (initialize_symbol_tableB_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_7;
  Wrd12 = Wrd16;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_6])), (Wrd13.pObj));

DEFLABEL (label_3)
  (Wrd12.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_9 5
#define LABEL_7_10 7
#define LABEL_7_5 9
#define LABEL_7_12 11
#define LABEL_7_13 13
#define LABEL_7_6 15
#define LABEL_7_16 17
#define LABEL_7_17 19
#define LABEL_7_18 21
#define LABEL_7_19 23
#define LABEL_7_20 25
#define LABEL_7_21 27
#define LABEL_7_7 29
#define LABEL_7_8 31
#define LABEL_7_14 33
#define LABEL_7_23 35
#define LABEL_7_24 37
#define LABEL_7_26 39
#define LABEL_7_27 41
#define LABEL_7_29 43
#define LABEL_7_33 45
#define LABEL_7_25 47
#define LABEL_7_30 49
#define LABEL_7_36 51
#define LABEL_7_37 53
#define LABEL_7_38 55
#define LABEL_7_39 57
#define LABEL_7_40 59
#define LABEL_7_31 61
#define LABEL_7_41 63
#define LABEL_7_42 65
#define LABEL_7_43 67
#define LABEL_7_44 69
#define LABEL_7_32 71
#define LABEL_7_46 73
#define LABEL_7_45 75
#define ENVIRONMENT_LABEL_7_3 105
#define DEBUGGING_LABEL_7_2 104
#define OBJECT_7_5 103
#define OBJECT_7_4 102
#define OBJECT_7_3 101
#define OBJECT_7_2 100
#define OBJECT_7_1 99
#define OBJECT_7_0 98
#define EXECUTE_CACHE_7_47 77
#define EXECUTE_CACHE_7_35 79
#define EXECUTE_CACHE_7_34 81
#define EXECUTE_CACHE_7_28 83
#define EXECUTE_CACHE_7_22 85
#define EXECUTE_CACHE_7_15 87
#define EXECUTE_CACHE_7_11 89
#define FREE_REFERENCE_7_5 92
#define FREE_REFERENCE_7_4 93
#define FREE_REFERENCE_7_3 94
#define FREE_REFERENCE_7_2 95
#define FREE_REFERENCE_7_1 96
#define FREE_REFERENCE_7_0 97
#define FREE_REFERENCES_LABEL_7_0 76
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd8;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_7_4);
      goto finish_symbol_tableB_30;

    case 1:
      current_block = (Rpc - LABEL_7_9);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_7_10);
      goto label_33;

    case 3:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_21;

    case 4:
      current_block = (Rpc - LABEL_7_12);
      goto label_34;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto label_35;

    case 6:
      current_block = (Rpc - LABEL_7_6);
      goto lambda_20;

    case 7:
      current_block = (Rpc - LABEL_7_16);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_7_17);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_7_18);
      goto label_38;

    case 10:
      current_block = (Rpc - LABEL_7_19);
      goto label_39;

    case 11:
      current_block = (Rpc - LABEL_7_20);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_7_21);
      goto label_41;

    case 13:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_23;

    case 14:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_7_14);
      goto lambda_28;

    case 16:
      current_block = (Rpc - LABEL_7_23);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_7_24);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_7_26);
      goto label_44;

    case 19:
      current_block = (Rpc - LABEL_7_27);
      goto label_45;

    case 20:
      current_block = (Rpc - LABEL_7_29);
      goto do_loop_18;

    case 21:
      current_block = (Rpc - LABEL_7_33);
      goto label_46;

    case 22:
      current_block = (Rpc - LABEL_7_25);
      goto continuation_27;

    case 23:
      current_block = (Rpc - LABEL_7_30);
      goto continuation_14;

    case 24:
      current_block = (Rpc - LABEL_7_36);
      goto label_47;

    case 25:
      current_block = (Rpc - LABEL_7_37);
      goto label_48;

    case 26:
      current_block = (Rpc - LABEL_7_38);
      goto label_49;

    case 27:
      current_block = (Rpc - LABEL_7_39);
      goto label_50;

    case 28:
      current_block = (Rpc - LABEL_7_40);
      goto label_51;

    case 29:
      current_block = (Rpc - LABEL_7_31);
      goto continuation_13;

    case 30:
      current_block = (Rpc - LABEL_7_41);
      goto label_52;

    case 31:
      current_block = (Rpc - LABEL_7_42);
      goto label_53;

    case 32:
      current_block = (Rpc - LABEL_7_43);
      goto label_54;

    case 33:
      current_block = (Rpc - LABEL_7_44);
      goto label_55;

    case 34:
      current_block = (Rpc - LABEL_7_32);
      goto continuation_9;

    case 35:
      current_block = (Rpc - LABEL_7_46);
      goto label_56;

    case 36:
      current_block = (Rpc - LABEL_7_45);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_symbol_tableB_58)
DEFLABEL (finish_symbol_tableB_30)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_69;
  Wrd16 = Wrd20;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_67;
  Wrd22 = Wrd26;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_22]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_65;
  Wrd6 = Wrd10;

DEFLABEL (label_64)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_63;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_62)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (label_63)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_12])), (Wrd7.pObj));

DEFLABEL (label_34)
  (Wrd6.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_10])), (Wrd23.pObj));

DEFLABEL (label_33)
  (Wrd22.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_9])), (Wrd17.pObj));

DEFLABEL (label_32)
  (Wrd16.Obj) = Rvl;
  goto label_68;

DEFLABEL (lambda_59)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_7_6);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_3]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_81;
  Wrd6 = Wrd10;

DEFLABEL (label_80)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_79;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_78)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_4]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_77;
  Wrd20 = Wrd24;

DEFLABEL (label_76)
  Wrd19 = Wrd20;
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_75;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_75;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (multiply_with_overflow ((Wrd37.Lng), (Wrd38.Lng), (& (Wrd35.Lng))))
    goto label_75;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));

DEFLABEL (label_74)
  (Rsp [1]) = (Wrd31.Obj);
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_4]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_73;
  Wrd40 = Wrd44;

DEFLABEL (label_72)
  Wrd39 = Wrd40;
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 26))
    goto label_71;
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_71;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (multiply_with_overflow ((Wrd57.Lng), (Wrd58.Lng), (& (Wrd55.Lng))))
    goto label_71;
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd55.Lng));

DEFLABEL (label_70)
  (Rsp [2]) = (Wrd51.Obj);
  goto do_loop_18;

DEFLABEL (label_71)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_41)
  (Wrd51.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_20])), (Wrd41.pObj));

DEFLABEL (label_40)
  (Wrd40.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_39)
  (Wrd31.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_18])), (Wrd21.pObj));

DEFLABEL (label_38)
  (Wrd20.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_16])), (Wrd7.pObj));

DEFLABEL (label_36)
  (Wrd6.Obj) = Rvl;
  goto label_80;

DEFLABEL (lambda_60)
DEFLABEL (lambda_28)
  INTERRUPT_CHECK (26, LABEL_7_14);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_89;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_88)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_87;
  Wrd14 = Wrd18;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_85;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_84)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_83;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_82)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_28]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_7_25);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_35]));

DEFLABEL (label_83)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_26]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_44)
  (Wrd24.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_24])), (Wrd15.pObj));

DEFLABEL (label_43)
  (Wrd14.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (do_loop_61)
DEFLABEL (do_loop_18)
  INTERRUPT_CHECK (26, LABEL_7_29);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_7_2])))
    goto label_90;
  Rvl = (current_block [OBJECT_7_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_31]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_32]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_4]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_112;
  Wrd16 = Wrd20;

DEFLABEL (label_111)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_34]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_110;
  Wrd8 = Wrd12;

DEFLABEL (label_109)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_34]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_45);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_4]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_7_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_7_5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_47]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7_31);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_108;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_107)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_106;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_105)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_104;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_103)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_102;
  Wrd28 = Wrd32;

DEFLABEL (label_101)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_35]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7_30);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_100;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_99)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_5]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_98;
  Wrd15 = Wrd19;

DEFLABEL (label_97)
  Wrd14 = Wrd15;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_96;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_96;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd30.Lng) = ((Wrd32.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_96;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_95)
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_5]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_94;
  Wrd35 = Wrd39;

DEFLABEL (label_93)
  Wrd34 = Wrd35;
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_92;
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd49.uLng) == 26))
    goto label_92;
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd50.Lng) = ((Wrd52.Lng) + (Wrd53.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd50.Lng)))
    goto label_92;
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd50.Lng));

DEFLABEL (label_91)
  (Rsp [2]) = (Wrd46.Obj);
  goto do_loop_18;

DEFLABEL (label_92)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_40]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_51)
  (Wrd46.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_39])), (Wrd36.pObj));

DEFLABEL (label_50)
  (Wrd35.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_38]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_49)
  (Wrd26.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_37])), (Wrd16.pObj));

DEFLABEL (label_48)
  (Wrd15.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_36]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_47)
  (Wrd5.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_44])), (Wrd29.pObj));

DEFLABEL (label_55)
  (Wrd28.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_43]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_42]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_53)
  (Wrd14.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_41]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_52)
  (Wrd5.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_46])), (Wrd9.pObj));

DEFLABEL (label_56)
  (Wrd8.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_33])), (Wrd17.pObj));

DEFLABEL (label_46)
  (Wrd16.Obj) = Rvl;
  goto label_111;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_5 3
#define LABEL_8_4 5
#define LABEL_8_6 7
#define LABEL_8_8 9
#define LABEL_8_9 11
#define LABEL_8_10 13
#define LABEL_8_11 15
#define LABEL_8_14 17
#define LABEL_8_15 19
#define LABEL_8_16 21
#define LABEL_8_17 23
#define LABEL_8_18 25
#define LABEL_8_19 27
#define LABEL_8_20 29
#define LABEL_8_12 31
#define TAG_8_13 14
#define ENVIRONMENT_LABEL_8_3 43
#define DEBUGGING_LABEL_8_2 42
#define OBJECT_8_6 41
#define OBJECT_8_5 40
#define OBJECT_8_4 39
#define OBJECT_8_3 38
#define OBJECT_8_2 37
#define OBJECT_8_1 36
#define OBJECT_8_0 35
#define EXECUTE_CACHE_8_7 33
#define FREE_REFERENCES_LABEL_8_0 32
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd5;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
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
      current_block = (Rpc - LABEL_8_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_8_4);
      goto variable_width_lengths_22;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_8_11);
      goto loop_18;

    case 7:
      current_block = (Rpc - LABEL_8_14);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_8_15);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_8_16);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_8_17);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_8_18);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_8_19);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_8_20);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_8_12);
      goto lambda_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (variable_width_lengths_36)
DEFLABEL (variable_width_lengths_22)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_47;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_46)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == (current_block [OBJECT_8_2])))
    goto label_45;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_8_3]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_5);

DEFLABEL (label_45)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_44;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_43)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_42;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd38.Lng))))
    goto label_42;
  (Wrd33.Obj) = ((Wrd36.pObj) [2]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_41)
  (Wrd45.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_40;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [1]) = (Wrd47.Obj);
  (Wrd56.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd56.Obj);
  goto loop_18;

DEFLABEL (label_40)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_27)
  (Wrd47.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd41.Obj) = (current_block [OBJECT_8_5]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_25)
  (Wrd23.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_8_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (loop_37)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_8_11);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_8_2])))
    goto label_48;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd91.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_12])));
  Rhp += 2;
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd91.pObj)));
  Wrd94 = Wrd91;
  (Wrd95.Obj) = (Rsp [1]);
  ((Wrd94.pObj) [2]) = (Wrd95.Obj);
  (Wrd93.Obj) = (Rsp [0]);
  ((Wrd94.pObj) [3]) = (Wrd93.Obj);
  Rvl = (Wrd90.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_65;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_64)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_63;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_63;
  (Wrd17.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_62)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_61;
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_61;
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd86.Lng) < (Wrd88.Lng))
    goto label_58;

DEFLABEL (label_57)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_56;
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_56;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if ((Wrd71.Lng) > (Wrd73.Lng))
    goto label_53;

DEFLABEL (label_52)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_51;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd49.Obj);

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  goto loop_18;

DEFLABEL (label_51)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_32)
  (Wrd49.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_55;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd59.Obj);
  (Wrd68.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd68.Obj);
  goto label_49;

DEFLABEL (label_55)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_33)
  (Wrd59.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_53;

DEFLABEL (label_58)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_60;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd74.Obj) = ((Wrd76.pObj) [1]);

DEFLABEL (label_59)
  (Rsp [1]) = (Wrd74.Obj);
  (Wrd83.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd83.Obj);
  goto label_49;

DEFLABEL (label_60)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 1);

DEFLABEL (label_34)
  (Wrd74.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_61)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_58;

DEFLABEL (label_63)
  (Wrd25.Obj) = (current_block [OBJECT_8_5]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_28)
  (Wrd7.Obj) = Rvl;
  goto label_64;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_8_12);

DEFLABEL (lambda_16)
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

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto selector_handler_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (selector_handler_3)
DEFLABEL (selector_handler_0)
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
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
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
bitutl_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto selector_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (selector_length_3)
DEFLABEL (selector_length_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

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

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto selector_low_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (selector_low_3)
DEFLABEL (selector_low_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
bitutl_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto selector_high_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (selector_high_3)
DEFLABEL (selector_high_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

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

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define LABEL_13_8 11
#define LABEL_13_10 13
#define LABEL_13_11 15
#define LABEL_13_12 17
#define LABEL_13_13 19
#define LABEL_13_14 21
#define LABEL_13_15 23
#define LABEL_13_16 25
#define LABEL_13_17 27
#define LABEL_13_20 29
#define LABEL_13_9 31
#define LABEL_13_23 33
#define LABEL_13_24 35
#define LABEL_13_22 37
#define LABEL_13_26 39
#define LABEL_13_25 41
#define ENVIRONMENT_LABEL_13_3 69
#define DEBUGGING_LABEL_13_2 68
#define OBJECT_13_14 67
#define OBJECT_13_13 66
#define OBJECT_13_12 65
#define OBJECT_13_11 64
#define OBJECT_13_10 63
#define OBJECT_13_9 62
#define OBJECT_13_8 61
#define OBJECT_13_7 60
#define OBJECT_13_6 59
#define OBJECT_13_5 58
#define OBJECT_13_4 57
#define OBJECT_13_3 56
#define OBJECT_13_2 55
#define OBJECT_13_1 54
#define OBJECT_13_0 53
#define EXECUTE_CACHE_13_27 43
#define EXECUTE_CACHE_13_21 45
#define EXECUTE_CACHE_13_19 47
#define EXECUTE_CACHE_13_18 49
#define FREE_REFERENCE_13_0 52
#define FREE_REFERENCES_LABEL_13_0 42
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd32;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd109;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd73;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd69;
  machine_word Wrd95;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd54;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd65;
  machine_word Wrd53;
  machine_word Wrd106;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd29;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd150;
  machine_word Wrd14;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd188;
  machine_word Wrd195;
  machine_word Wrd191;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd187;
  machine_word Wrd177;
  machine_word Wrd184;
  machine_word Wrd180;
  machine_word Wrd174;
  machine_word Wrd175;
  machine_word Wrd176;
  machine_word Wrd166;
  machine_word Wrd173;
  machine_word Wrd161;
  machine_word Wrd163;
  machine_word Wrd160;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd153;
  machine_word Wrd5;
  machine_word Wrd197;
  machine_word Wrd201;
  machine_word Wrd205;
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
      current_block = (Rpc - LABEL_13_4);
      goto evaluate_22;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_11;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto inner_21;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_13_11);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_13_12);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_13_13);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_13_14);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_13_15);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_13_16);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_13_17);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_13_20);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_13_23);
      goto label_33;

    case 16:
      current_block = (Rpc - LABEL_13_24);
      goto label_34;

    case 17:
      current_block = (Rpc - LABEL_13_22);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_13_26);
      goto label_35;

    case 19:
      current_block = (Rpc - LABEL_13_25);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (evaluate_37)
DEFLABEL (evaluate_22)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto inner_21;

DEFLABEL (inner_38)
DEFLABEL (inner_21)
  DLINK_INTERRUPT_CHECK (25, LABEL_13_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_68;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd142.Obj) = (current_block [OBJECT_13_2]);
  (Wrd145.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd145.Lng))))
    goto label_67;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd142.Obj));
  if ((Wrd14.Obj) == (Wrd6.Obj))
    goto label_60;

DEFLABEL (label_66)
  (Wrd132.Obj) = (current_block [OBJECT_13_4]);
  (Wrd135.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd135.Lng))))
    goto label_65;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd132.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_60;

DEFLABEL (label_64)
  (Wrd122.Obj) = (current_block [OBJECT_13_5]);
  (Wrd125.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd125.Lng))))
    goto label_63;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd122.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_60;

DEFLABEL (label_62)
  (Wrd112.Obj) = (current_block [OBJECT_13_6]);
  (Wrd115.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd115.Lng))))
    goto label_61;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd112.Obj));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd26.Obj) == (Wrd28.Obj))
    goto label_60;

DEFLABEL (label_59)
  (Wrd29.Obj) = (current_block [OBJECT_13_7]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd41.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd41.Lng)))
    goto label_40;

DEFLABEL (label_39)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_40)
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_42;
  (Wrd33.Obj) = (current_block [OBJECT_13_9]);
  goto label_41;

DEFLABEL (label_42)
  (Wrd33.Obj) = (current_block [OBJECT_13_8]);

DEFLABEL (label_41)
DEFLABEL (label_58)
  Rsp = (& (Rsp [3]));
  (Wrd30.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd30.Obj));
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;

DEFLABEL (label_44)
  Rvl = (Rsp [0]);

DEFLABEL (label_43)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_45)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd98.Obj) = (current_block [OBJECT_13_10]);
  (Wrd101.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd101.Lng))))
    goto label_57;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd98.Obj));
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_56;

DEFLABEL (label_55)
  (Wrd53.Obj) = (current_block [OBJECT_13_11]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd65.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd65.Lng))))
    goto label_39;
  (Wrd59.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd59.Obj) == (Wrd61.Obj))
    goto label_47;
  (Wrd57.Obj) = (current_block [OBJECT_13_9]);
  goto label_46;

DEFLABEL (label_47)
  (Wrd57.Obj) = (current_block [OBJECT_13_8]);

DEFLABEL (label_46)
DEFLABEL (label_54)
  Rsp = (& (Rsp [3]));
  (Wrd54.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd54.Obj));
  if (! ((Wrd57.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_49;

DEFLABEL (label_48)
  (Wrd67.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (current_block [OBJECT_13_12]);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_18]));

DEFLABEL (label_49)
  (Wrd69.Obj) = (Rsp [0]);
  if ((Wrd69.Obj) == (current_block [OBJECT_13_13]))
    goto label_52;
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd80.Obj) = ((Wrd73.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_51;
  Wrd72 = Wrd80;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_21]));

DEFLABEL (label_51)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_20])), (Wrd73.pObj));

DEFLABEL (label_24)
  (Wrd74.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd72.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [1]);
  if (! ((Wrd84.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_53;
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd94.Obj) = (current_block [OBJECT_13_14]);
  (* (--Rsp)) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd205.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd205.Obj));

DEFLABEL (label_53)
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  Rvl = ((Wrd87.pObj) [1]);
  goto label_43;

DEFLABEL (label_56)
  Rsp = (& (Rsp [2]));
  (Wrd95.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd95.Obj));
  goto label_49;

DEFLABEL (label_57)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_56;

DEFLABEL (label_60)
  Rsp = (& (Rsp [2]));
  (Wrd109.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd109.Obj));
  goto label_44;

DEFLABEL (label_61)
  (Wrd117.Obj) = (Rsp [0]);
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_60;

DEFLABEL (label_63)
  (Wrd127.Obj) = (Rsp [0]);
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_60;

DEFLABEL (label_65)
  (Wrd137.Obj) = (Rsp [0]);
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_60;

DEFLABEL (label_67)
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_60;

DEFLABEL (label_68)
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (Wrd157.Obj) = (Rsp [3]);
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd158.pObj)));
  (* (--Rsp)) = (Wrd160.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_80;
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd161.Obj) = ((Wrd163.pObj) [1]);

DEFLABEL (label_79)
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd176.uLng) == 1))
    goto label_78;
  (Wrd175.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd174.Obj) = ((Wrd175.pObj) [1]);

DEFLABEL (label_77)
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd174.Obj));
  if (! ((Wrd187.uLng) == 1))
    goto label_76;
  (Wrd185.pObj) = (OBJECT_ADDRESS (Wrd174.Obj));
  (Wrd186.Obj) = ((Wrd185.pObj) [0]);
  (* (--Rsp)) = (Wrd186.Obj);

DEFLABEL (label_75)
  Rdl = (& (Rsp [2]));
  goto inner_21;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_74;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_73)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_72;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_71)
  Rdl = (& (Rsp [2]));
  goto inner_21;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_13_22);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_25]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_70;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_27]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_13_25);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_26]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_35)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_34)
  (Wrd32.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd32.Obj));
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_23]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_33)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd16.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd191.Obj);
  (Wrd195.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_32)
  (Wrd188.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd188.Obj));
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd180.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd180.Obj);
  (Wrd184.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd184.Obj);
  (* (--Rsp)) = (Wrd161.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_31)
  (Wrd177.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd177.Obj));
  (Wrd174.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_30)
  (Wrd166.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd166.Obj));
  (Wrd161.Obj) = Rvl;
  goto label_79;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (Wrd201.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd201.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_49;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd197.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd197.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_6 5
#define LABEL_14_8 7
#define LABEL_14_5 9
#define LABEL_14_10 11
#define ENVIRONMENT_LABEL_14_3 22
#define DEBUGGING_LABEL_14_2 21
#define OBJECT_14_1 20
#define OBJECT_14_0 19
#define EXECUTE_CACHE_14_9 13
#define EXECUTE_CACHE_14_7 15
#define FREE_REFERENCE_14_0 18
#define FREE_REFERENCES_LABEL_14_0 12
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_14_4);
      goto find_operator_4;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_14_10);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_operator_9)
DEFLABEL (find_operator_4)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd8 = Wrd12;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_8);

DEFLABEL (label_12)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_11;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_11)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 9
#define DEBUGGING_LABEL_15_2 8
#define FREE_REFERENCE_15_0 7
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 9
#define DEBUGGING_LABEL_16_2 8
#define FREE_REFERENCE_16_0 7
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 9
#define DEBUGGING_LABEL_17_2 8
#define FREE_REFERENCE_17_0 7
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 9
#define DEBUGGING_LABEL_18_2 8
#define FREE_REFERENCE_18_0 7
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 9
#define DEBUGGING_LABEL_19_2 8
#define FREE_REFERENCE_19_0 7
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 9
#define DEBUGGING_LABEL_20_2 8
#define FREE_REFERENCE_20_0 7
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 12
#define DEBUGGING_LABEL_21_2 11
#define EXECUTE_CACHE_21_6 7
#define FREE_REFERENCE_21_0 10
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_21_4);
      goto Z___machine_pc_0;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___machine_pc_4)
DEFLABEL (Z___machine_pc_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 9
#define DEBUGGING_LABEL_22_2 8
#define FREE_REFERENCE_22_0 7
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_22_4);
      goto Z___bitstring_pc_0;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___bitstring_pc_4)
DEFLABEL (Z___bitstring_pc_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 26)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_6)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_5;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (multiply_with_overflow ((Wrd20.Lng), (Wrd22.Lng), (& (Wrd18.Lng))))
    goto label_5;
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_9 7
#define LABEL_23_7 9
#define LABEL_23_10 11
#define ENVIRONMENT_LABEL_23_3 23
#define DEBUGGING_LABEL_23_2 22
#define OBJECT_23_0 21
#define EXECUTE_CACHE_23_12 13
#define EXECUTE_CACHE_23_11 15
#define EXECUTE_CACHE_23_8 17
#define EXECUTE_CACHE_23_6 19
#define FREE_REFERENCES_LABEL_23_0 12
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_23_4);
      goto paranoid_quotient_5;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_23_10);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (paranoid_quotient_9)
DEFLABEL (paranoid_quotient_5)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_12;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd20.Lng) == 0))
    goto label_11;

DEFLABEL (label_10)
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (label_11)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_9);
  goto label_10;

DEFLABEL (label_12)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 13
#define DEBUGGING_LABEL_24_2 12
#define OBJECT_24_0 11
#define EXECUTE_CACHE_24_6 7
#define FREE_REFERENCE_24_0 10
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_24_4);
      goto final_pad_0;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (final_pad_4)
DEFLABEL (final_pad_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_6;
  Wrd8 = Wrd12;

DEFLABEL (label_5)
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd9.pObj));

DEFLABEL (label_2)
  (Wrd8.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_6 5
#define LABEL_25_5 7
#define LABEL_25_7 9
#define LABEL_25_8 11
#define LABEL_25_9 13
#define LABEL_25_10 15
#define ENVIRONMENT_LABEL_25_3 17
#define DEBUGGING_LABEL_25_2 16
#define FREE_REFERENCES_LABEL_25_0 16
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd71;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_25_4);
      goto paddify_5;

    case 1:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_25_8);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_25_9);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_25_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (paddify_12)
DEFLABEL (paddify_5)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_0)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 26))
    goto label_24;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_24;
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd76.Lng) > (Wrd78.Lng))
    goto label_20;

DEFLABEL (label_19)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_17;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_17;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) - (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_17;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_15)
  (Rsp [3]) = (Wrd24.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 26)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_14)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_13;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd42.Lng) + (Wrd44.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd40.Lng)))
    goto label_13;
  Rvl = (LONG_TO_FIXNUM (Wrd40.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_8)
DEFLABEL (label_18)
  (Wrd24.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_20)
  (Wrd53.Obj) = (Rsp [4]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_23;
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 26))
    goto label_23;
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  (Wrd57.Lng) = ((Wrd59.Lng) - (Wrd61.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd57.Lng)))
    goto label_23;
  (Wrd52.Obj) = (LONG_TO_FIXNUM (Wrd57.Lng));

DEFLABEL (label_22)
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_21;
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd70.uLng) == 26))
    goto label_21;
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd71.Lng) = ((Wrd73.Lng) + (Wrd74.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd71.Lng)))
    goto label_21;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd71.Lng));
  goto label_16;

DEFLABEL (label_21)
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_10)
  goto label_18;

DEFLABEL (label_23)
  (Wrd47.Obj) = (Rsp [4]);
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_9)
  (Wrd52.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_20;

DEFLABEL (continuation_2)
  (Wrd24.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 7
#define DEBUGGING_LABEL_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto interval_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval_offset_3)
DEFLABEL (interval_offset_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

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

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 7
#define DEBUGGING_LABEL_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto interval_segset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval_segset_3)
DEFLABEL (interval_segset_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

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

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define LABEL_28_7 9
#define ENVIRONMENT_LABEL_28_3 17
#define DEBUGGING_LABEL_28_2 16
#define OBJECT_28_3 15
#define OBJECT_28_2 14
#define OBJECT_28_1 13
#define OBJECT_28_0 12
#define FREE_REFERENCE_28_0 11
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto intervalP_4;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (intervalP_10)
DEFLABEL (intervalP_4)
  INTERRUPT_CHECK (26, LABEL_28_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
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
  Rvl = (current_block [OBJECT_28_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_28_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_6 5
#define LABEL_29_5 7
#define LABEL_29_9 9
#define LABEL_29_8 11
#define ENVIRONMENT_LABEL_29_3 23
#define DEBUGGING_LABEL_29_2 22
#define OBJECT_29_2 21
#define OBJECT_29_1 20
#define OBJECT_29_0 19
#define EXECUTE_CACHE_29_10 13
#define EXECUTE_CACHE_29_7 15
#define FREE_REFERENCE_29_0 18
#define FREE_REFERENCES_LABEL_29_0 12
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_29_4);
      goto label__machine_interval_5;

    case 1:
      current_block = (Rpc - LABEL_29_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (label__machine_interval_10)
DEFLABEL (label__machine_interval_5)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd8 = Wrd12;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_12;
  Wrd8 = Wrd12;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_29_2]);
  (Rsp [0]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_9])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 9
#define DEBUGGING_LABEL_30_2 8
#define OBJECT_30_0 7
#define EXECUTE_CACHE_30_5 5
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_30_4);
      goto make_interval_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_interval_4)
DEFLABEL (make_interval_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_30_0]))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_5]));

DEFLABEL (label_5)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_9 7
#define LABEL_31_10 9
#define LABEL_31_11 11
#define LABEL_31_12 13
#define LABEL_31_13 15
#define LABEL_31_18 17
#define LABEL_31_19 19
#define LABEL_31_20 21
#define LABEL_31_21 23
#define LABEL_31_22 25
#define LABEL_31_23 27
#define LABEL_31_24 29
#define LABEL_31_25 31
#define LABEL_31_26 33
#define LABEL_31_27 35
#define LABEL_31_28 37
#define LABEL_31_29 39
#define LABEL_31_30 41
#define LABEL_31_31 43
#define LABEL_31_32 45
#define LABEL_31_7 47
#define TAG_31_8 22
#define LABEL_31_14 49
#define TAG_31_15 23
#define LABEL_31_16 51
#define TAG_31_17 24
#define ENVIRONMENT_LABEL_31_3 63
#define DEBUGGING_LABEL_31_2 62
#define OBJECT_31_6 61
#define OBJECT_31_5 60
#define OBJECT_31_4 59
#define OBJECT_31_3 58
#define OBJECT_31_2 57
#define OBJECT_31_1 56
#define OBJECT_31_0 55
#define EXECUTE_CACHE_31_6 53
#define FREE_REFERENCES_LABEL_31_0 52
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd151;
  machine_word Wrd153;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd142;
  machine_word Wrd138;
  machine_word Wrd143;
  machine_word Wrd147;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd130;
  machine_word Wrd134;
  machine_word Wrd137;
  machine_word Wrd135;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd115;
  machine_word Wrd120;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd89;
  machine_word Wrd93;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd189;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd186;
  machine_word Wrd187;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd179;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd176;
  machine_word Wrd177;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd196;
  machine_word Wrd194;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd5;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd41;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd57;
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
      current_block = (Rpc - LABEL_31_4);
      goto interval_values_31;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_9);
      goto label_33;

    case 3:
      current_block = (Rpc - LABEL_31_10);
      goto label_34;

    case 4:
      current_block = (Rpc - LABEL_31_11);
      goto label_35;

    case 5:
      current_block = (Rpc - LABEL_31_12);
      goto loop_29;

    case 6:
      current_block = (Rpc - LABEL_31_13);
      goto label_51;

    case 7:
      current_block = (Rpc - LABEL_31_18);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_31_19);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_31_20);
      goto label_38;

    case 10:
      current_block = (Rpc - LABEL_31_21);
      goto label_39;

    case 11:
      current_block = (Rpc - LABEL_31_22);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_31_23);
      goto label_41;

    case 13:
      current_block = (Rpc - LABEL_31_24);
      goto label_42;

    case 14:
      current_block = (Rpc - LABEL_31_25);
      goto label_43;

    case 15:
      current_block = (Rpc - LABEL_31_26);
      goto label_44;

    case 16:
      current_block = (Rpc - LABEL_31_27);
      goto label_45;

    case 17:
      current_block = (Rpc - LABEL_31_28);
      goto label_46;

    case 18:
      current_block = (Rpc - LABEL_31_29);
      goto label_47;

    case 19:
      current_block = (Rpc - LABEL_31_30);
      goto label_48;

    case 20:
      current_block = (Rpc - LABEL_31_31);
      goto label_49;

    case 21:
      current_block = (Rpc - LABEL_31_32);
      goto label_50;

    case 22:
      current_block = (Rpc - LABEL_31_7);
      goto lambda_54;

    case 23:
      current_block = (Rpc - LABEL_31_14);
      goto lambda_56;

    case 24:
      current_block = (Rpc - LABEL_31_16);
      goto lambda_57;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval_values_53)
DEFLABEL (interval_values_31)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_58;
  (Wrd57.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd60.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_7])));
  Rhp += 2;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd60.pObj)));
  Wrd63 = Wrd60;
  ((Wrd63.pObj) [2]) = (Wrd57.Obj);
  ((Wrd63.pObj) [3]) = (Wrd57.Obj);
  Rvl = (Wrd59.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd7.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_64;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_64;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_63)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_62;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd33.Lng))))
    goto label_62;
  (Wrd27.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_61)
  (Wrd50.Obj) = (Rsp [4]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_60;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd49.Lng))))
    goto label_60;
  (Wrd41.Obj) = ((Wrd47.pObj) [3]);

DEFLABEL (label_59)
  (Rsp [4]) = (Wrd41.Obj);
  goto loop_29;

DEFLABEL (label_60)
  (Wrd52.Obj) = (Rsp [4]);
  (Wrd53.Obj) = (current_block [OBJECT_31_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_35)
  (Wrd41.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.Obj) = (current_block [OBJECT_31_1]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_31_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (loop_55)
DEFLABEL (loop_29)
  INTERRUPT_CHECK (26, LABEL_31_12);
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == (current_block [OBJECT_31_4]))
    goto label_95;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_94;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_93)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_92;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_91)
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_90;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_89)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_88;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd32.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_87)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_86;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_85)
  (Wrd49.Obj) = (Rsp [6]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_84;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [0]);

DEFLABEL (label_83)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_82;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_81)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_80;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_79)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 26))
    goto label_78;
  (Wrd77.Obj) = (Rsp [5]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 26))
    goto label_78;
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  (Wrd79.Lng) = ((Wrd81.Lng) - (Wrd83.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd79.Lng)))
    goto label_78;
  (Wrd74.Obj) = (LONG_TO_FIXNUM (Wrd79.Lng));

DEFLABEL (label_77)
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd90.uLng) == 26))
    goto label_76;
  (Wrd91.Obj) = (Rsp [2]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 26))
    goto label_76;
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (multiply_with_overflow ((Wrd94.Lng), (Wrd96.Lng), (& (Wrd93.Lng))))
    goto label_76;
  (Wrd89.Obj) = (LONG_TO_FIXNUM (Wrd93.Lng));

DEFLABEL (label_75)
  (Wrd103.Obj) = (Rsp [3]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 26))
    goto label_74;
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd105.uLng) == 26))
    goto label_74;
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  (Wrd106.Lng) = ((Wrd108.Lng) + (Wrd109.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd106.Lng)))
    goto label_74;
  (Wrd102.Obj) = (LONG_TO_FIXNUM (Wrd106.Lng));

DEFLABEL (label_73)
  (Rsp [3]) = (Wrd102.Obj);
  (Wrd116.Obj) = (Rsp [1]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 26))
    goto label_72;
  (Wrd118.Obj) = (Rsp [6]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 26))
    goto label_72;
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  (Wrd120.Lng) = ((Wrd122.Lng) - (Wrd124.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd120.Lng)))
    goto label_72;
  (Wrd115.Obj) = (LONG_TO_FIXNUM (Wrd120.Lng));

DEFLABEL (label_71)
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd131.uLng) == 26))
    goto label_70;
  (Wrd132.Obj) = (Rsp [2]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd133.uLng) == 26))
    goto label_70;
  (Wrd135.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  (Wrd137.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  if (multiply_with_overflow ((Wrd135.Lng), (Wrd137.Lng), (& (Wrd134.Lng))))
    goto label_70;
  (Wrd130.Obj) = (LONG_TO_FIXNUM (Wrd134.Lng));

DEFLABEL (label_69)
  (Wrd144.Obj) = (Rsp [4]);
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd144.Obj));
  if (! ((Wrd145.uLng) == 26))
    goto label_68;
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if (! ((Wrd146.uLng) == 26))
    goto label_68;
  (Wrd149.Lng) = (FIXNUM_TO_LONG (Wrd144.Obj));
  (Wrd150.Lng) = (FIXNUM_TO_LONG (Wrd130.Obj));
  (Wrd147.Lng) = ((Wrd149.Lng) + (Wrd150.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd147.Lng)))
    goto label_68;
  (Wrd143.Obj) = (LONG_TO_FIXNUM (Wrd147.Lng));

DEFLABEL (label_67)
  (Rsp [4]) = (Wrd143.Obj);
  (Wrd154.Obj) = (Rsp [7]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd155.uLng) == 1))
    goto label_66;
  (Wrd153.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd151.Obj) = ((Wrd153.pObj) [1]);

DEFLABEL (label_65)
  (Rsp [7]) = (Wrd151.Obj);
  (Wrd160.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd160.Obj);
  (Wrd161.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd161.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_29;

DEFLABEL (label_66)
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_32]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 1);

DEFLABEL (label_50)
  (Wrd151.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd138.Obj) = (Rsp [4]);
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_31]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_49)
  (Wrd143.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd126.Obj) = (Rsp [2]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_30]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_48)
  (Wrd130.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.Obj) = (Rsp [6]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_29]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_47)
  (Wrd115.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd97.Obj) = (Rsp [3]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_28]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_46)
  (Wrd102.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd85.Obj) = (Rsp [2]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_27]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_45)
  (Wrd89.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.Obj) = (Rsp [5]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_26]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_44)
  (Wrd74.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_25]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_5]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_24]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_5]), 1);

DEFLABEL (label_42)
  (Wrd55.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_23]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_5]), 1);

DEFLABEL (label_41)
  (Wrd46.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_22]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_21]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_5]), 1);

DEFLABEL (label_39)
  (Wrd32.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_20]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_5]), 1);

DEFLABEL (label_38)
  (Wrd23.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_19]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_5]), 1);

DEFLABEL (label_36)
  (Wrd7.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_95)
  (Wrd163.Obj) = (Rsp [0]);
  (Wrd164.uLng) = (OBJECT_TYPE (Wrd163.Obj));
  if (! ((Wrd164.uLng) == 26))
    goto label_100;
  (Wrd165.Obj) = (Rsp [1]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd166.uLng) == 26))
    goto label_100;
  (Wrd194.Lng) = (FIXNUM_TO_LONG (Wrd163.Obj));
  (Wrd196.Lng) = (FIXNUM_TO_LONG (Wrd165.Obj));
  if ((Wrd194.Lng) > (Wrd196.Lng))
    goto label_97;

DEFLABEL (label_98)
  (Wrd173.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd173.Obj);
  (Wrd174.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd174.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd177.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_14])));
  Rhp += 2;
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd177.pObj)));
  Wrd180 = Wrd177;
  (Wrd181.Obj) = (Rsp [1]);
  ((Wrd180.pObj) [2]) = (Wrd181.Obj);
  (Wrd179.Obj) = (Rsp [0]);
  ((Wrd180.pObj) [3]) = (Wrd179.Obj);
  Rvl = (Wrd176.Obj);
  goto label_96;

DEFLABEL (label_97)
  (Wrd183.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd183.Obj);
  (Wrd184.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd184.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd187.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_16])));
  Rhp += 2;
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd187.pObj)));
  Wrd190 = Wrd187;
  (Wrd191.Obj) = (Rsp [1]);
  ((Wrd190.pObj) [2]) = (Wrd191.Obj);
  (Wrd189.Obj) = (Rsp [0]);
  ((Wrd190.pObj) [3]) = (Wrd189.Obj);
  Rvl = (Wrd186.Obj);

DEFLABEL (label_96)
DEFLABEL (label_99)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_100)
  (Wrd167.Obj) = (Rsp [0]);
  (Wrd168.Obj) = (Rsp [1]);
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  goto label_97;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_31_7);

DEFLABEL (lambda_1)
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

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_31_14);

DEFLABEL (lambda_27)
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

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_31_16);

DEFLABEL (lambda_25)
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

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_9 11
#define LABEL_32_10 13
#define LABEL_32_11 15
#define LABEL_32_12 17
#define LABEL_32_13 19
#define LABEL_32_14 21
#define LABEL_32_15 23
#define LABEL_32_16 25
#define LABEL_32_17 27
#define LABEL_32_18 29
#define ENVIRONMENT_LABEL_32_3 41
#define DEBUGGING_LABEL_32_2 40
#define OBJECT_32_6 39
#define OBJECT_32_5 38
#define OBJECT_32_4 37
#define OBJECT_32_3 36
#define OBJECT_32_2 35
#define OBJECT_32_1 34
#define OBJECT_32_0 33
#define EXECUTE_CACHE_32_6 31
#define FREE_REFERENCES_LABEL_32_0 30
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd78;
  machine_word Wrd74;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_32_4);
      goto interval_final_value_17;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto loop_15;

    case 5:
      current_block = (Rpc - LABEL_32_10);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_32_11);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_32_12);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_32_13);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_32_14);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_32_15);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_32_16);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_32_17);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_32_18);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval_final_value_31)
DEFLABEL (interval_final_value_17)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd7.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_37;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_37;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_36)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_35;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_35;
  (Wrd24.Obj) = ((Wrd30.pObj) [3]);

DEFLABEL (label_34)
  (Rsp [2]) = (Wrd24.Obj);
  goto loop_15;

DEFLABEL (label_35)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_32_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_20)
  (Wrd24.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_32_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (loop_32)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_32_9);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_32_4])))
    goto label_38;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_56;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_55)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_54;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_53)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_52;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_51)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_50;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd32.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_49)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_48;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_47)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 26))
    goto label_46;
  (Wrd54.Obj) = (Rsp [3]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_46;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd56.Lng) = ((Wrd58.Lng) - (Wrd60.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd56.Lng)))
    goto label_46;
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd56.Lng));

DEFLABEL (label_45)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd67.uLng) == 26))
    goto label_44;
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_44;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (multiply_with_overflow ((Wrd71.Lng), (Wrd73.Lng), (& (Wrd70.Lng))))
    goto label_44;
  (Wrd66.Obj) = (LONG_TO_FIXNUM (Wrd70.Lng));

DEFLABEL (label_43)
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 26))
    goto label_42;
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd82.uLng) == 26))
    goto label_42;
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  (Wrd83.Lng) = ((Wrd85.Lng) + (Wrd86.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd83.Lng)))
    goto label_42;
  (Wrd79.Obj) = (LONG_TO_FIXNUM (Wrd83.Lng));

DEFLABEL (label_41)
  (Rsp [2]) = (Wrd79.Obj);
  (Wrd90.Obj) = (Rsp [4]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_40;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd87.Obj) = ((Wrd89.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [4]) = (Wrd87.Obj);
  (Wrd96.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd96.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_15;

DEFLABEL (label_40)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_18]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 1);

DEFLABEL (label_29)
  (Wrd87.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd74.Obj) = (Rsp [2]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_17]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_28)
  (Wrd79.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_27)
  (Wrd66.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_26)
  (Wrd51.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_24)
  (Wrd32.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_55;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_8 7
#define LABEL_33_9 9
#define LABEL_33_10 11
#define LABEL_33_11 13
#define LABEL_33_14 15
#define LABEL_33_15 17
#define LABEL_33_7 19
#define LABEL_33_17 21
#define LABEL_33_18 23
#define LABEL_33_19 25
#define LABEL_33_13 27
#define LABEL_33_20 29
#define LABEL_33_21 31
#define LABEL_33_22 33
#define ENVIRONMENT_LABEL_33_3 45
#define DEBUGGING_LABEL_33_2 44
#define OBJECT_33_2 43
#define OBJECT_33_1 42
#define OBJECT_33_0 41
#define EXECUTE_CACHE_33_16 35
#define EXECUTE_CACHE_33_12 37
#define EXECUTE_CACHE_33_6 39
#define FREE_REFERENCES_LABEL_33_0 34
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
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
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_33_4);
      goto interval___15;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_33_10);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_33_14);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_33_15);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_33_17);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_33_18);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_33_19);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_33_13);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_33_20);
      goto label_25;

    case 14:
      current_block = (Rpc - LABEL_33_21);
      goto label_26;

    case 15:
      current_block = (Rpc - LABEL_33_22);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval___29)
DEFLABEL (interval___15)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_30;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_30)
DEFLABEL (label_32)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_42;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_42;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_41)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_40;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_40;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_33_13);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_38;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_36;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_36;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_35)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_34;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_34;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd46.Lng) = ((Wrd47.Lng) + (Wrd48.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd46.Lng)))
    goto label_34;
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd43.Obj);
  (Wrd49.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (label_34)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_22]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_27)
  (Wrd43.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_33_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_21]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_26)
  (Wrd21.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_33_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_33_0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_33_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_49;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd50.Lng))))
    goto label_49;
  (Wrd44.Obj) = ((Wrd48.pObj) [3]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_48)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 62))
    goto label_47;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd66.Lng))))
    goto label_47;
  (Wrd58.Obj) = ((Wrd64.pObj) [2]);

DEFLABEL (label_46)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_45;
  (Wrd81.Obj) = (Rsp [2]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 26))
    goto label_45;
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  (Wrd83.Lng) = ((Wrd84.Lng) + (Wrd86.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd83.Lng)))
    goto label_45;
  (Wrd79.Obj) = (LONG_TO_FIXNUM (Wrd83.Lng));

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd79.Obj);
  (Wrd87.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd87.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (label_45)
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_21)
  (Wrd79.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.Obj) = (current_block [OBJECT_33_2]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_20)
  (Wrd58.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.Obj) = (current_block [OBJECT_33_0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_55;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_55;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_54)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_53;
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_53;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) + (Wrd35.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_53;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_52)
  (Rsp [0]) = (Wrd28.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_51;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd44.Lng))))
    goto label_51;
  (Wrd36.Obj) = ((Wrd42.pObj) [3]);

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (label_51)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_33_0]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_24)
  (Wrd36.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_23)
  (Wrd28.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_33_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 26)
    goto label_58;

DEFLABEL (label_57)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_58)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 26))
    goto label_57;
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  (Wrd57.Lng) = ((Wrd59.Lng) + (Wrd61.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd57.Lng)))
    goto label_57;
  Rvl = (LONG_TO_FIXNUM (Wrd57.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_8 7
#define LABEL_34_9 9
#define LABEL_34_10 11
#define LABEL_34_11 13
#define LABEL_34_14 15
#define LABEL_34_15 17
#define LABEL_34_7 19
#define LABEL_34_17 21
#define LABEL_34_18 23
#define LABEL_34_20 25
#define LABEL_34_13 27
#define LABEL_34_22 29
#define LABEL_34_23 31
#define LABEL_34_24 33
#define LABEL_34_19 35
#define ENVIRONMENT_LABEL_34_3 49
#define DEBUGGING_LABEL_34_2 48
#define OBJECT_34_2 47
#define OBJECT_34_1 46
#define OBJECT_34_0 45
#define EXECUTE_CACHE_34_21 37
#define EXECUTE_CACHE_34_16 39
#define EXECUTE_CACHE_34_12 41
#define EXECUTE_CACHE_34_6 43
#define FREE_REFERENCES_LABEL_34_0 36
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd11;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd56;
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
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_34_4);
      goto interval___16;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_34_9);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_34_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_34_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_34_14);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_34_15);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_34_17);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_34_18);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_34_20);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_34_13);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_34_22);
      goto label_26;

    case 14:
      current_block = (Rpc - LABEL_34_23);
      goto label_27;

    case 15:
      current_block = (Rpc - LABEL_34_24);
      goto label_28;

    case 16:
      current_block = (Rpc - LABEL_34_19);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval___30)
DEFLABEL (interval___16)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_31;

DEFLABEL (label_32)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_31)
DEFLABEL (label_33)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_34_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_43;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_43;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_42)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_41;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_41;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_16]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_34_13);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_39;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_39;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_38)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_37;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_37;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_36)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_35;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_35;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd46.Lng) = ((Wrd47.Lng) - (Wrd48.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd46.Lng)))
    goto label_35;
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));

DEFLABEL (label_34)
  (Rsp [1]) = (Wrd43.Obj);
  (Wrd49.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (label_35)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_24]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_28)
  (Wrd43.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_34_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_23]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_27)
  (Wrd21.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_34_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_34_0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_34_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_50;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd50.Lng))))
    goto label_50;
  (Wrd44.Obj) = ((Wrd48.pObj) [3]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_49)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 62))
    goto label_48;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd66.Lng))))
    goto label_48;
  (Wrd58.Obj) = ((Wrd64.pObj) [2]);

DEFLABEL (label_47)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_46;
  (Wrd81.Obj) = (Rsp [2]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 26))
    goto label_46;
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  (Wrd83.Lng) = ((Wrd84.Lng) - (Wrd86.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd83.Lng)))
    goto label_46;
  (Wrd79.Obj) = (LONG_TO_FIXNUM (Wrd83.Lng));

DEFLABEL (label_45)
  (Rsp [1]) = (Wrd79.Obj);
  (Wrd87.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd87.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (label_46)
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_22)
  (Wrd79.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.Obj) = (current_block [OBJECT_34_2]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_21)
  (Wrd58.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.Obj) = (current_block [OBJECT_34_0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_56;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_56;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_55)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_54;
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_54;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) - (Wrd35.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_54;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_53)
  (Rsp [0]) = (Wrd28.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_19]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_52;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd47.Lng))))
    goto label_52;
  (Wrd41.Obj) = ((Wrd45.pObj) [3]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_19);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (label_52)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.Obj) = (current_block [OBJECT_34_0]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_20]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_24)
  (Wrd28.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_34_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_23)
  (Wrd7.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_57)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 26)
    goto label_59;

DEFLABEL (label_58)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_59)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_58;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd60.Lng) = ((Wrd62.Lng) - (Wrd64.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd60.Lng)))
    goto label_58;
  Rvl = (LONG_TO_FIXNUM (Wrd60.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_8 7
#define LABEL_35_10 9
#define LABEL_35_7 11
#define LABEL_35_14 13
#define LABEL_35_9 15
#define LABEL_35_15 17
#define LABEL_35_16 19
#define LABEL_35_13 21
#define LABEL_35_18 23
#define LABEL_35_19 25
#define ENVIRONMENT_LABEL_35_3 40
#define DEBUGGING_LABEL_35_2 39
#define OBJECT_35_3 38
#define OBJECT_35_2 37
#define OBJECT_35_1 36
#define OBJECT_35_0 35
#define EXECUTE_CACHE_35_17 27
#define EXECUTE_CACHE_35_12 29
#define EXECUTE_CACHE_35_11 31
#define EXECUTE_CACHE_35_6 33
#define FREE_REFERENCES_LABEL_35_0 26
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd13;
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
      goto interval___11;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_35_10);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_35_14);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_35_9);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_35_15);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_35_16);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_35_13);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_35_18);
      goto label_17;

    case 11:
      current_block = (Rpc - LABEL_35_19);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval___20)
DEFLABEL (interval___11)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_21;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_21)
DEFLABEL (label_23)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd7.Obj) = (current_block [OBJECT_35_2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_12]));

DEFLABEL (label_24)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_30;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_30;
  (Wrd14.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_35_9);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_27)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_26;
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_26;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (multiply_with_overflow ((Wrd31.Lng), (Wrd33.Lng), (& (Wrd30.Lng))))
    goto label_26;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd34.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_17]));

DEFLABEL (label_26)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_16]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_16)
  (Wrd26.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_35_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_35_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_36;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_36;
  (Wrd13.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_35_13);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_34;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_33)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_32;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_32;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (multiply_with_overflow ((Wrd31.Lng), (Wrd33.Lng), (& (Wrd30.Lng))))
    goto label_32;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd34.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_17]));

DEFLABEL (label_32)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_18)
  (Wrd26.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_35_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_35_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 26)
    goto label_39;

DEFLABEL (label_38)
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_39)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_38;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (multiply_with_overflow ((Wrd34.Lng), (Wrd36.Lng), (& (Wrd32.Lng))))
    goto label_38;
  Rvl = (LONG_TO_FIXNUM (Wrd32.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_7 5
#define LABEL_36_5 7
#define LABEL_36_8 9
#define LABEL_36_11 11
#define LABEL_36_12 13
#define LABEL_36_19 15
#define LABEL_36_13 17
#define LABEL_36_20 19
#define LABEL_36_22 21
#define LABEL_36_14 23
#define LABEL_36_15 25
#define LABEL_36_16 27
#define LABEL_36_18 29
#define LABEL_36_24 31
#define ENVIRONMENT_LABEL_36_3 55
#define DEBUGGING_LABEL_36_2 54
#define OBJECT_36_4 53
#define OBJECT_36_3 52
#define OBJECT_36_2 51
#define OBJECT_36_1 50
#define OBJECT_36_0 49
#define EXECUTE_CACHE_36_26 33
#define EXECUTE_CACHE_36_25 35
#define EXECUTE_CACHE_36_21 37
#define EXECUTE_CACHE_36_17 39
#define EXECUTE_CACHE_36_10 41
#define EXECUTE_CACHE_36_23 43
#define EXECUTE_CACHE_36_9 45
#define EXECUTE_CACHE_36_6 47
#define FREE_REFERENCES_LABEL_36_0 32
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto interval___15;

    case 1:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_36_11);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_36_12);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_36_19);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_36_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_36_20);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_36_22);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_36_14);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_36_15);
      goto lambda_10;

    case 12:
      current_block = (Rpc - LABEL_36_16);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_36_18);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_36_24);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval___20)
DEFLABEL (interval___15)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_7);

DEFLABEL (label_29)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_36_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_26;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_26;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_25)
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_4)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_26]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_36_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_17]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_36_16);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_36_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;

DEFLABEL (label_23)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_36_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_36_22);
  goto label_23;

DEFLABEL (label_26)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_36_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_19]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_36_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (lambda_21)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_36_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_36_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_25]));

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_7 5
#define LABEL_37_8 7
#define LABEL_37_5 9
#define ENVIRONMENT_LABEL_37_3 17
#define DEBUGGING_LABEL_37_2 16
#define OBJECT_37_0 15
#define EXECUTE_CACHE_37_9 11
#define EXECUTE_CACHE_37_6 13
#define FREE_REFERENCES_LABEL_37_0 10
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_37_4);
      goto interval_quotient_3;

    case 1:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval_quotient_6)
DEFLABEL (interval_quotient_3)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_8);

DEFLABEL (label_7)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (label_9)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_7 5
#define LABEL_38_8 7
#define LABEL_38_5 9
#define ENVIRONMENT_LABEL_38_3 17
#define DEBUGGING_LABEL_38_2 16
#define OBJECT_38_0 15
#define EXECUTE_CACHE_38_9 11
#define EXECUTE_CACHE_38_6 13
#define FREE_REFERENCES_LABEL_38_0 10
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_38_4);
      goto interval_remainder_3;

    case 1:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interval_remainder_6)
DEFLABEL (interval_remainder_3)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_8);

DEFLABEL (label_7)
  INVOKE_INTERFACE_0 (56);

DEFLABEL (label_9)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define ENVIRONMENT_LABEL_39_3 8
#define DEBUGGING_LABEL_39_2 7
#define OBJECT_39_0 6
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_39_4);
      goto segment_min_1;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segment_min_5)
DEFLABEL (segment_min_1)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_8;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_6;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd16.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 1);

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define ENVIRONMENT_LABEL_40_3 9
#define DEBUGGING_LABEL_40_2 8
#define OBJECT_40_1 7
#define OBJECT_40_0 6
#define FREE_REFERENCES_LABEL_40_0 6
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_40_4);
      goto segment_max_1;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segment_max_5)
DEFLABEL (segment_max_1)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_8;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_6;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 1);

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define LABEL_41_7 9
#define LABEL_41_8 11
#define ENVIRONMENT_LABEL_41_3 15
#define DEBUGGING_LABEL_41_2 14
#define OBJECT_41_1 13
#define OBJECT_41_0 12
#define FREE_REFERENCES_LABEL_41_0 12
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_41_4);
      goto segment___4;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_41_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_41_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segment___11)
DEFLABEL (segment___4)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_24;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_23)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_22;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_20;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_19)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_18;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd30.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 26)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_13)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_12;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if ((Wrd43.Lng) < (Wrd45.Lng))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_41_1]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_9)
  (Wrd30.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_6 7
#define LABEL_42_7 9
#define LABEL_42_8 11
#define ENVIRONMENT_LABEL_42_3 15
#define DEBUGGING_LABEL_42_2 14
#define OBJECT_42_1 13
#define OBJECT_42_0 12
#define FREE_REFERENCES_LABEL_42_0 12
#define NUMBER_OF_LINKER_SECTIONS_42_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_42_4);
      goto segment___4;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_42_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_42_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_42_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segment___11)
DEFLABEL (segment___4)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_24;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_23)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_22;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_20;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_19)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_18;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd30.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 26)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_13)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_12;
  if ((Wrd38.Obj) == (Wrd30.Obj))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_42_1]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_9)
  (Wrd30.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_5 3
#define LABEL_43_4 5
#define LABEL_43_6 7
#define LABEL_43_7 9
#define LABEL_43_8 11
#define LABEL_43_9 13
#define LABEL_43_10 15
#define LABEL_43_11 17
#define LABEL_43_12 19
#define LABEL_43_13 21
#define LABEL_43_14 23
#define LABEL_43_16 25
#define LABEL_43_17 27
#define LABEL_43_18 29
#define LABEL_43_19 31
#define LABEL_43_20 33
#define LABEL_43_21 35
#define LABEL_43_22 37
#define LABEL_43_23 39
#define LABEL_43_24 41
#define LABEL_43_25 43
#define LABEL_43_26 45
#define LABEL_43_28 47
#define LABEL_43_15 49
#define LABEL_43_30 51
#define LABEL_43_31 53
#define LABEL_43_32 55
#define LABEL_43_33 57
#define LABEL_43_34 59
#define LABEL_43_27 61
#define LABEL_43_36 63
#define LABEL_43_37 65
#define LABEL_43_38 67
#define LABEL_43_39 69
#define LABEL_43_40 71
#define ENVIRONMENT_LABEL_43_3 81
#define DEBUGGING_LABEL_43_2 80
#define OBJECT_43_2 79
#define OBJECT_43_1 78
#define OBJECT_43_0 77
#define EXECUTE_CACHE_43_35 73
#define EXECUTE_CACHE_43_29 75
#define FREE_REFERENCES_LABEL_43_0 72
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd190;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd177;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd162;
  machine_word Wrd164;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd161;
  machine_word Wrd153;
  machine_word Wrd155;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd134;
  machine_word Wrd135;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd127;
  machine_word Wrd128;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd118;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd117;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd62;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_43_5);
      goto continuation_23;

    case 1:
      current_block = (Rpc - LABEL_43_4);
      goto segset___35;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto label_37;

    case 3:
      current_block = (Rpc - LABEL_43_7);
      goto label_38;

    case 4:
      current_block = (Rpc - LABEL_43_8);
      goto label_39;

    case 5:
      current_block = (Rpc - LABEL_43_9);
      goto label_40;

    case 6:
      current_block = (Rpc - LABEL_43_10);
      goto label_41;

    case 7:
      current_block = (Rpc - LABEL_43_11);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_43_12);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_43_13);
      goto label_44;

    case 10:
      current_block = (Rpc - LABEL_43_14);
      goto label_45;

    case 11:
      current_block = (Rpc - LABEL_43_16);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_43_17);
      goto label_47;

    case 13:
      current_block = (Rpc - LABEL_43_18);
      goto label_48;

    case 14:
      current_block = (Rpc - LABEL_43_19);
      goto label_49;

    case 15:
      current_block = (Rpc - LABEL_43_20);
      goto label_50;

    case 16:
      current_block = (Rpc - LABEL_43_21);
      goto label_51;

    case 17:
      current_block = (Rpc - LABEL_43_22);
      goto label_52;

    case 18:
      current_block = (Rpc - LABEL_43_23);
      goto label_53;

    case 19:
      current_block = (Rpc - LABEL_43_24);
      goto label_54;

    case 20:
      current_block = (Rpc - LABEL_43_25);
      goto label_55;

    case 21:
      current_block = (Rpc - LABEL_43_26);
      goto label_56;

    case 22:
      current_block = (Rpc - LABEL_43_28);
      goto label_57;

    case 23:
      current_block = (Rpc - LABEL_43_15);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_43_30);
      goto label_58;

    case 25:
      current_block = (Rpc - LABEL_43_31);
      goto label_59;

    case 26:
      current_block = (Rpc - LABEL_43_32);
      goto label_60;

    case 27:
      current_block = (Rpc - LABEL_43_33);
      goto label_61;

    case 28:
      current_block = (Rpc - LABEL_43_34);
      goto label_62;

    case 29:
      current_block = (Rpc - LABEL_43_27);
      goto continuation_34;

    case 30:
      current_block = (Rpc - LABEL_43_36);
      goto label_63;

    case 31:
      current_block = (Rpc - LABEL_43_37);
      goto label_64;

    case 32:
      current_block = (Rpc - LABEL_43_38);
      goto label_65;

    case 33:
      current_block = (Rpc - LABEL_43_39);
      goto label_66;

    case 34:
      current_block = (Rpc - LABEL_43_40);
      goto label_67;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segset___69)
DEFLABEL (segset___35)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_43_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_117;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_115;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_114;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_113)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_112;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_111)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_110;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_109)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_108;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [0]);

DEFLABEL (label_107)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_106;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd41.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_105)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_104;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd49.pObj) [0]);

DEFLABEL (label_103)
  (Wrd55.Obj) = (* (Rsp++));
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd56.uLng) == 26))
    goto label_102;
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_102;
  (Wrd191.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd192.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if ((Wrd191.Lng) < (Wrd192.Lng))
    goto label_95;

DEFLABEL (label_94)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_93;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd64.Obj) = ((Wrd66.pObj) [0]);

DEFLABEL (label_92)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_91;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_90)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_15]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd86.Obj) = (Rsp [3]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_89;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [1]);
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_88)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd98.Obj) = (Rsp [5]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_87;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd95.Obj) = ((Wrd97.pObj) [0]);

DEFLABEL (label_86)
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd106.uLng) == 1))
    goto label_85;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd104.Obj) = ((Wrd105.pObj) [0]);

DEFLABEL (label_84)
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd113.uLng) == 1))
    goto label_83;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (* (--Rsp)) = (Wrd112.Obj);

DEFLABEL (label_82)
  (Wrd121.Obj) = (Rsp [5]);
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd122.uLng) == 1))
    goto label_81;
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd118.Obj) = ((Wrd120.pObj) [0]);

DEFLABEL (label_80)
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd129.uLng) == 1))
    goto label_79;
  (Wrd128.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd127.Obj) = ((Wrd128.pObj) [0]);

DEFLABEL (label_78)
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd136.uLng) == 1))
    goto label_77;
  (Wrd135.pObj) = (OBJECT_ADDRESS (Wrd127.Obj));
  (Wrd134.Obj) = ((Wrd135.pObj) [0]);

DEFLABEL (label_76)
  (Wrd141.Obj) = (* (Rsp++));
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd142.uLng) == 26))
    goto label_75;
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd143.uLng) == 26))
    goto label_75;
  if ((Wrd134.Obj) == (Wrd141.Obj))
    goto label_72;

DEFLABEL (label_71)
  (Wrd151.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd151.Obj);

DEFLABEL (label_70)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_29]));

DEFLABEL (label_72)
  (Wrd156.Obj) = (Rsp [4]);
  (Wrd157.uLng) = (OBJECT_TYPE (Wrd156.Obj));
  if (! ((Wrd157.uLng) == 1))
    goto label_74;
  (Wrd155.pObj) = (OBJECT_ADDRESS (Wrd156.Obj));
  (Wrd153.Obj) = ((Wrd155.pObj) [1]);

DEFLABEL (label_73)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd153.Obj);
  goto label_70;

DEFLABEL (label_74)
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_24]))));
  (* (--Rsp)) = (Wrd161.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (label_54)
  (Wrd153.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_75)
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_23]))));
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_72;

DEFLABEL (label_77)
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_22]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_52)
  (Wrd134.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_21]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_51)
  (Wrd127.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_20]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_50)
  (Wrd118.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_19]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_18]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_48)
  (Wrd104.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_17]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_47)
  (Wrd95.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_16]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_14]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_13]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_44)
  (Wrd64.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd165.Obj) = (Rsp [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd166.uLng) == 1))
    goto label_101;
  (Wrd164.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd162.Obj) = ((Wrd164.pObj) [0]);

DEFLABEL (label_100)
  (Wrd173.uLng) = (OBJECT_TYPE (Wrd162.Obj));
  if (! ((Wrd173.uLng) == 1))
    goto label_99;
  (Wrd171.pObj) = (OBJECT_ADDRESS (Wrd162.Obj));
  (Wrd172.Obj) = ((Wrd171.pObj) [0]);
  (* (--Rsp)) = (Wrd172.Obj);

DEFLABEL (label_98)
  (Wrd180.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_27]))));
  (* (--Rsp)) = (Wrd180.Obj);
  (Wrd181.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd181.Obj);
  (Wrd185.Obj) = (Rsp [3]);
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd185.Obj));
  if (! ((Wrd186.uLng) == 1))
    goto label_96;
  (Wrd183.pObj) = (OBJECT_ADDRESS (Wrd185.Obj));
  (Wrd184.Obj) = ((Wrd183.pObj) [1]);
  (* (--Rsp)) = (Wrd184.Obj);
  goto label_70;

DEFLABEL (label_96)
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_28]))));
  (* (--Rsp)) = (Wrd190.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (label_57)
DEFLABEL (label_97)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_99)
  (Wrd177.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_26]))));
  (* (--Rsp)) = (Wrd177.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_25]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd165.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_55)
  (Wrd162.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_102)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  goto label_95;

DEFLABEL (label_104)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_42)
  (Wrd48.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_41)
  (Wrd41.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_40)
  (Wrd32.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_38)
  (Wrd18.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_37)
  (Wrd9.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_115)
  Rvl = (Wrd5.Obj);

DEFLABEL (label_116)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_117)
  Rvl = (Rsp [1]);
  goto label_116;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_43_5);
  goto label_97;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_43_15);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_127;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_126)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_125;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_124)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_123;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_122)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_121;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_120)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_119;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_119;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd46.Lng) = ((Wrd47.Lng) + (Wrd48.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd46.Lng)))
    goto label_119;
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));

DEFLABEL (label_118)
  (Rsp [2]) = (Wrd43.Obj);
  (Wrd49.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_35]));

DEFLABEL (label_119)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_34]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_62)
  (Wrd43.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_33]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (label_61)
  (Wrd30.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_32]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_60)
  (Wrd21.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_30]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_58)
  (Wrd5.Obj) = Rvl;
  goto label_126;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_43_27);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_137;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_136)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_135;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_134)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_133;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_132)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_131;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_130)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_129;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_129;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd46.Lng) = ((Wrd47.Lng) + (Wrd48.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd46.Lng)))
    goto label_129;
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));

DEFLABEL (label_128)
  (Rsp [2]) = (Wrd43.Obj);
  (Wrd49.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_35]));

DEFLABEL (label_129)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_40]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_67)
  (Wrd43.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_39]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (label_66)
  (Wrd30.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_38]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_65)
  (Wrd21.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_36]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_63)
  (Wrd5.Obj) = Rvl;
  goto label_136;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_5 3
#define LABEL_44_4 5
#define LABEL_44_7 7
#define LABEL_44_8 9
#define LABEL_44_9 11
#define LABEL_44_10 13
#define LABEL_44_11 15
#define LABEL_44_12 17
#define LABEL_44_13 19
#define LABEL_44_14 21
#define LABEL_44_15 23
#define LABEL_44_17 25
#define LABEL_44_18 27
#define LABEL_44_19 29
#define LABEL_44_20 31
#define LABEL_44_21 33
#define LABEL_44_22 35
#define LABEL_44_23 37
#define LABEL_44_24 39
#define LABEL_44_25 41
#define LABEL_44_26 43
#define LABEL_44_27 45
#define LABEL_44_29 47
#define LABEL_44_16 49
#define LABEL_44_31 51
#define LABEL_44_32 53
#define LABEL_44_33 55
#define LABEL_44_34 57
#define LABEL_44_35 59
#define LABEL_44_28 61
#define LABEL_44_37 63
#define LABEL_44_38 65
#define LABEL_44_39 67
#define LABEL_44_40 69
#define LABEL_44_41 71
#define ENVIRONMENT_LABEL_44_3 83
#define DEBUGGING_LABEL_44_2 82
#define OBJECT_44_2 81
#define OBJECT_44_1 80
#define OBJECT_44_0 79
#define EXECUTE_CACHE_44_36 73
#define EXECUTE_CACHE_44_30 75
#define EXECUTE_CACHE_44_6 77
#define FREE_REFERENCES_LABEL_44_0 72
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd190;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd177;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd162;
  machine_word Wrd164;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd161;
  machine_word Wrd153;
  machine_word Wrd155;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd134;
  machine_word Wrd135;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd127;
  machine_word Wrd128;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd118;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd117;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd62;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_44_5);
      goto continuation_23;

    case 1:
      current_block = (Rpc - LABEL_44_4);
      goto segset___35;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto label_37;

    case 3:
      current_block = (Rpc - LABEL_44_8);
      goto label_38;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto label_39;

    case 5:
      current_block = (Rpc - LABEL_44_10);
      goto label_40;

    case 6:
      current_block = (Rpc - LABEL_44_11);
      goto label_41;

    case 7:
      current_block = (Rpc - LABEL_44_12);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_44_13);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_44_14);
      goto label_44;

    case 10:
      current_block = (Rpc - LABEL_44_15);
      goto label_45;

    case 11:
      current_block = (Rpc - LABEL_44_17);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_44_18);
      goto label_47;

    case 13:
      current_block = (Rpc - LABEL_44_19);
      goto label_48;

    case 14:
      current_block = (Rpc - LABEL_44_20);
      goto label_49;

    case 15:
      current_block = (Rpc - LABEL_44_21);
      goto label_50;

    case 16:
      current_block = (Rpc - LABEL_44_22);
      goto label_51;

    case 17:
      current_block = (Rpc - LABEL_44_23);
      goto label_52;

    case 18:
      current_block = (Rpc - LABEL_44_24);
      goto label_53;

    case 19:
      current_block = (Rpc - LABEL_44_25);
      goto label_54;

    case 20:
      current_block = (Rpc - LABEL_44_26);
      goto label_55;

    case 21:
      current_block = (Rpc - LABEL_44_27);
      goto label_56;

    case 22:
      current_block = (Rpc - LABEL_44_29);
      goto label_57;

    case 23:
      current_block = (Rpc - LABEL_44_16);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_44_31);
      goto label_58;

    case 25:
      current_block = (Rpc - LABEL_44_32);
      goto label_59;

    case 26:
      current_block = (Rpc - LABEL_44_33);
      goto label_60;

    case 27:
      current_block = (Rpc - LABEL_44_34);
      goto label_61;

    case 28:
      current_block = (Rpc - LABEL_44_35);
      goto label_62;

    case 29:
      current_block = (Rpc - LABEL_44_28);
      goto continuation_34;

    case 30:
      current_block = (Rpc - LABEL_44_37);
      goto label_63;

    case 31:
      current_block = (Rpc - LABEL_44_38);
      goto label_64;

    case 32:
      current_block = (Rpc - LABEL_44_39);
      goto label_65;

    case 33:
      current_block = (Rpc - LABEL_44_40);
      goto label_66;

    case 34:
      current_block = (Rpc - LABEL_44_41);
      goto label_67;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segset___69)
DEFLABEL (segset___35)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_44_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_70;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (label_70)
  (Wrd7.Obj) = (Rsp [1]);
  if (! ((Wrd7.Obj) == (Wrd6.Obj)))
    goto label_71;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_116;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_115)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_114;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_113)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_112;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_111)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_110;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [0]);

DEFLABEL (label_109)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_108;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd41.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_107)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_106;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd49.pObj) [0]);

DEFLABEL (label_105)
  (Wrd55.Obj) = (* (Rsp++));
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd56.uLng) == 26))
    goto label_104;
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_104;
  (Wrd191.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd192.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if ((Wrd191.Lng) < (Wrd192.Lng))
    goto label_97;

DEFLABEL (label_96)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_95;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd64.Obj) = ((Wrd66.pObj) [0]);

DEFLABEL (label_94)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_93;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_92)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_16]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd86.Obj) = (Rsp [3]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_91;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [1]);
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_90)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd98.Obj) = (Rsp [5]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_89;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd95.Obj) = ((Wrd97.pObj) [0]);

DEFLABEL (label_88)
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd106.uLng) == 1))
    goto label_87;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd104.Obj) = ((Wrd105.pObj) [0]);

DEFLABEL (label_86)
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd113.uLng) == 1))
    goto label_85;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (* (--Rsp)) = (Wrd112.Obj);

DEFLABEL (label_84)
  (Wrd121.Obj) = (Rsp [5]);
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd122.uLng) == 1))
    goto label_83;
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd118.Obj) = ((Wrd120.pObj) [0]);

DEFLABEL (label_82)
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd129.uLng) == 1))
    goto label_81;
  (Wrd128.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd127.Obj) = ((Wrd128.pObj) [0]);

DEFLABEL (label_80)
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd136.uLng) == 1))
    goto label_79;
  (Wrd135.pObj) = (OBJECT_ADDRESS (Wrd127.Obj));
  (Wrd134.Obj) = ((Wrd135.pObj) [0]);

DEFLABEL (label_78)
  (Wrd141.Obj) = (* (Rsp++));
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd142.uLng) == 26))
    goto label_77;
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd143.uLng) == 26))
    goto label_77;
  if ((Wrd134.Obj) == (Wrd141.Obj))
    goto label_74;

DEFLABEL (label_73)
  (Wrd151.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd151.Obj);

DEFLABEL (label_72)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_30]));

DEFLABEL (label_74)
  (Wrd156.Obj) = (Rsp [4]);
  (Wrd157.uLng) = (OBJECT_TYPE (Wrd156.Obj));
  if (! ((Wrd157.uLng) == 1))
    goto label_76;
  (Wrd155.pObj) = (OBJECT_ADDRESS (Wrd156.Obj));
  (Wrd153.Obj) = ((Wrd155.pObj) [1]);

DEFLABEL (label_75)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd153.Obj);
  goto label_72;

DEFLABEL (label_76)
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_25]))));
  (* (--Rsp)) = (Wrd161.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_54)
  (Wrd153.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_24]))));
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  goto label_74;

DEFLABEL (label_79)
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_23]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_52)
  (Wrd134.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_22]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_51)
  (Wrd127.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_21]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_50)
  (Wrd118.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_20]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_19]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_48)
  (Wrd104.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_18]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_47)
  (Wrd95.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_17]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_14]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_44)
  (Wrd64.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd165.Obj) = (Rsp [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd166.uLng) == 1))
    goto label_103;
  (Wrd164.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd162.Obj) = ((Wrd164.pObj) [0]);

DEFLABEL (label_102)
  (Wrd173.uLng) = (OBJECT_TYPE (Wrd162.Obj));
  if (! ((Wrd173.uLng) == 1))
    goto label_101;
  (Wrd171.pObj) = (OBJECT_ADDRESS (Wrd162.Obj));
  (Wrd172.Obj) = ((Wrd171.pObj) [0]);
  (* (--Rsp)) = (Wrd172.Obj);

DEFLABEL (label_100)
  (Wrd180.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_28]))));
  (* (--Rsp)) = (Wrd180.Obj);
  (Wrd181.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd181.Obj);
  (Wrd185.Obj) = (Rsp [3]);
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd185.Obj));
  if (! ((Wrd186.uLng) == 1))
    goto label_98;
  (Wrd183.pObj) = (OBJECT_ADDRESS (Wrd185.Obj));
  (Wrd184.Obj) = ((Wrd183.pObj) [1]);
  (* (--Rsp)) = (Wrd184.Obj);
  goto label_72;

DEFLABEL (label_98)
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_29]))));
  (* (--Rsp)) = (Wrd190.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_57)
DEFLABEL (label_99)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_101)
  (Wrd177.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_27]))));
  (* (--Rsp)) = (Wrd177.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_26]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd165.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_55)
  (Wrd162.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_104)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;
  goto label_97;

DEFLABEL (label_106)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_42)
  (Wrd48.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_41)
  (Wrd41.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_40)
  (Wrd32.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_38)
  (Wrd18.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_37)
  (Wrd9.Obj) = Rvl;
  goto label_115;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_44_5);
  goto label_99;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_44_16);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_126;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_125)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_124;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_123)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_122;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_121)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_120;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_119)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_118;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_118;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd46.Lng) = ((Wrd47.Lng) - (Wrd48.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd46.Lng)))
    goto label_118;
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));

DEFLABEL (label_117)
  (Rsp [2]) = (Wrd43.Obj);
  (Wrd49.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_36]));

DEFLABEL (label_118)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_35]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_62)
  (Wrd43.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_34]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_61)
  (Wrd30.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_33]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_60)
  (Wrd21.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_31]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_58)
  (Wrd5.Obj) = Rvl;
  goto label_125;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_44_28);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_136;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_135)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_134;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_133)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_132;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_131)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_130;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_129)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_128;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_128;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd46.Lng) = ((Wrd47.Lng) - (Wrd48.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd46.Lng)))
    goto label_128;
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));

DEFLABEL (label_127)
  (Rsp [2]) = (Wrd43.Obj);
  (Wrd49.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_36]));

DEFLABEL (label_128)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_41]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_67)
  (Wrd43.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_40]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_66)
  (Wrd30.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_39]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_65)
  (Wrd21.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_38]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_63)
  (Wrd5.Obj) = Rvl;
  goto label_135;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 9
#define DEBUGGING_LABEL_45_2 8
#define OBJECT_45_0 7
#define EXECUTE_CACHE_45_5 5
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto segset_negate_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segset_negate_3)
DEFLABEL (segset_negate_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_6 5
#define LABEL_46_5 7
#define LABEL_46_8 9
#define LABEL_46_9 11
#define LABEL_46_10 13
#define LABEL_46_11 15
#define LABEL_46_12 17
#define ENVIRONMENT_LABEL_46_3 25
#define DEBUGGING_LABEL_46_2 24
#define OBJECT_46_2 23
#define OBJECT_46_1 22
#define OBJECT_46_0 21
#define EXECUTE_CACHE_46_7 19
#define FREE_REFERENCES_LABEL_46_0 18
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto segset_scale_9;

    case 1:
      current_block = (Rpc - LABEL_46_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_46_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_46_10);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_46_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_46_12);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segset_scale_18)
DEFLABEL (segset_scale_9)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_46_0])))
    goto label_19;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_31;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_29;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_28)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_27;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_26)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_25;
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_25;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (multiply_with_overflow ((Wrd30.Lng), (Wrd32.Lng), (& (Wrd29.Lng))))
    goto label_25;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_24)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_23;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_22)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_21;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd43.Obj) = ((Wrd44.pObj) [0]);

DEFLABEL (label_20)
  (Wrd50.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd54.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_12]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (label_16)
  (Wrd43.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (label_15)
  (Wrd34.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 1);

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_5 3
#define LABEL_47_4 5
#define LABEL_47_6 7
#define LABEL_47_7 9
#define LABEL_47_8 11
#define ENVIRONMENT_LABEL_47_3 17
#define DEBUGGING_LABEL_47_2 16
#define OBJECT_47_3 15
#define OBJECT_47_2 14
#define OBJECT_47_1 13
#define OBJECT_47_0 12
#define FREE_REFERENCES_LABEL_47_0 12
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
bitutl_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_47_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_47_4);
      goto cons_segset_5;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_47_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_47_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cons_segset_11)
DEFLABEL (cons_segset_5)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_47_0]))
    goto label_22;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_21;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_20)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_19;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_17)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_16;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_16;
  if ((Wrd27.Obj) == (Wrd20.Obj))
    goto label_13;

DEFLABEL (label_14)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd45.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  goto label_12;

DEFLABEL (label_13)
  Rvl = (Rsp [2]);

DEFLABEL (label_12)
DEFLABEL (label_15)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_13;

DEFLABEL (label_19)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 1);

DEFLABEL (label_8)
  (Wrd20.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 1);

DEFLABEL (label_7)
  (Wrd10.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd20.Obj) = (current_block [OBJECT_47_1]);
  goto label_18;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Wrd20.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_8 9
#define LABEL_13 11
#define LABEL_9 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_15 19
#define LABEL_20 21
#define LABEL_16 23
#define TAG_17 10
#define LABEL_18 25
#define LABEL_19 27
#define LABEL_21 29
#define LABEL_23 31
#define LABEL_22 33
#define LABEL_25 35
#define LABEL_24 37
#define LABEL_27 39
#define LABEL_26 41
#define LABEL_29 43
#define LABEL_28 45
#define LABEL_31 47
#define LABEL_30 49
#define LABEL_33 51
#define LABEL_32 53
#define LABEL_34 55
#define LABEL_35 57
#define LABEL_36 59
#define ENVIRONMENT_LABEL_3 111
#define DEBUGGING_LABEL_2 110
#define PURIFICATION_ROOT 109
#define OBJECT_36 108
#define OBJECT_35 107
#define OBJECT_34 106
#define OBJECT_33 105
#define OBJECT_32 104
#define OBJECT_31 103
#define OBJECT_30 102
#define OBJECT_29 101
#define OBJECT_28 100
#define OBJECT_27 99
#define OBJECT_26 98
#define OBJECT_25 97
#define OBJECT_24 96
#define OBJECT_23 95
#define OBJECT_22 94
#define OBJECT_21 93
#define OBJECT_20 92
#define OBJECT_19 91
#define OBJECT_18 90
#define OBJECT_17 89
#define OBJECT_16 88
#define OBJECT_15 87
#define OBJECT_14 86
#define OBJECT_13 85
#define OBJECT_12 84
#define OBJECT_11 83
#define OBJECT_10 82
#define OBJECT_9 81
#define OBJECT_8 80
#define OBJECT_7 79
#define OBJECT_6 78
#define OBJECT_5 77
#define OBJECT_4 76
#define OBJECT_3 75
#define OBJECT_2 74
#define OBJECT_1 73
#define OBJECT_0 72
#define FREE_REFERENCE_3 61
#define FREE_REFERENCE_2 62
#define FREE_REFERENCE_1 63
#define FREE_REFERENCE_0 64
#define GLOBAL_EXECUTE_CACHE_14 66
#define GLOBAL_EXECUTE_CACHE_10 68
#define GLOBAL_EXECUTE_CACHE_5 70
#define FREE_REFERENCES_LABEL_0 60
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
bitutl_so_b113cf1be872b766 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto continuation_13;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_18;

    case 4:
      current_block = (Rpc - LABEL_13);
      goto label_36;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_17;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_23;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_19;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_24;

    case 9:
      current_block = (Rpc - LABEL_20);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto Z__make_interval_45;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_26;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_25;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_27;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto label_38;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_28;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_29;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto label_40;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto continuation_30;

    case 20:
      current_block = (Rpc - LABEL_29);
      goto label_41;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_31;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto label_42;

    case 23:
      current_block = (Rpc - LABEL_30);
      goto continuation_32;

    case 24:
      current_block = (Rpc - LABEL_33);
      goto label_43;

    case 25:
      current_block = (Rpc - LABEL_32);
      goto continuation_33;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto label_47;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto label_48;

    case 28:
      current_block = (Rpc - LABEL_36);
      goto expression_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_35)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_35])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_48)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_47)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
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
	2,
	1,
	0,
	0,
	0,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	0,
	0,
	0,
	0,
	1,
	2,
	2,
	2,
	2,
	0,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 47)
      goto label_46;
    blocks = (current_block [OBJECT_36]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_34])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_46)
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
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_4]);
  (Wrd17.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_6]);
  (Wrd22.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_8]);
  (Wrd27.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_10]);
  (Wrd32.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_12]);
  (Wrd37.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_14]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_14]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_64;
  Wrd11 = Wrd15;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_62;
  Wrd11 = Wrd15;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_60;
  Wrd8 = Wrd12;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_58;
  Wrd8 = Wrd12;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_56;
  Wrd8 = Wrd12;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_54;
  Wrd8 = Wrd12;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_52;
  Wrd8 = Wrd12;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_50;
  Wrd8 = Wrd12;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_35]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd9.pObj));

DEFLABEL (label_43)
  (Wrd8.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd9.pObj));

DEFLABEL (label_42)
  (Wrd8.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd9.pObj));

DEFLABEL (label_41)
  (Wrd8.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd9.pObj));

DEFLABEL (label_40)
  (Wrd8.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd9.pObj));

DEFLABEL (label_39)
  (Wrd8.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd9.pObj));

DEFLABEL (label_38)
  (Wrd8.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd12.pObj));

DEFLABEL (label_37)
  (Wrd11.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd12.pObj));

DEFLABEL (label_36)
  (Wrd11.Obj) = Rvl;
  goto label_63;

DEFLABEL (Z__make_interval_45)
  CLOSURE_HEADER (LABEL_16);

DEFLABEL (Z__make_interval_21)
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

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_bitutl_so_b113cf1be872b766 [47] =
  {
    { "bitutl_so_code_1", 1, bitutl_so_code_1 },
    { "bitutl_so_code_2", 1, bitutl_so_code_2 },
    { "bitutl_so_code_3", 5, bitutl_so_code_3 },
    { "bitutl_so_code_4", 7, bitutl_so_code_4 },
    { "bitutl_so_code_5", 3, bitutl_so_code_5 },
    { "bitutl_so_code_6", 3, bitutl_so_code_6 },
    { "bitutl_so_code_7", 37, bitutl_so_code_7 },
    { "bitutl_so_code_8", 15, bitutl_so_code_8 },
    { "bitutl_so_code_9", 1, bitutl_so_code_9 },
    { "bitutl_so_code_10", 1, bitutl_so_code_10 },
    { "bitutl_so_code_11", 1, bitutl_so_code_11 },
    { "bitutl_so_code_12", 1, bitutl_so_code_12 },
    { "bitutl_so_code_13", 20, bitutl_so_code_13 },
    { "bitutl_so_code_14", 5, bitutl_so_code_14 },
    { "bitutl_so_code_15", 2, bitutl_so_code_15 },
    { "bitutl_so_code_16", 2, bitutl_so_code_16 },
    { "bitutl_so_code_17", 2, bitutl_so_code_17 },
    { "bitutl_so_code_18", 2, bitutl_so_code_18 },
    { "bitutl_so_code_19", 2, bitutl_so_code_19 },
    { "bitutl_so_code_20", 2, bitutl_so_code_20 },
    { "bitutl_so_code_21", 2, bitutl_so_code_21 },
    { "bitutl_so_code_22", 2, bitutl_so_code_22 },
    { "bitutl_so_code_23", 5, bitutl_so_code_23 },
    { "bitutl_so_code_24", 2, bitutl_so_code_24 },
    { "bitutl_so_code_25", 7, bitutl_so_code_25 },
    { "bitutl_so_code_26", 1, bitutl_so_code_26 },
    { "bitutl_so_code_27", 1, bitutl_so_code_27 },
    { "bitutl_so_code_28", 4, bitutl_so_code_28 },
    { "bitutl_so_code_29", 5, bitutl_so_code_29 },
    { "bitutl_so_code_30", 1, bitutl_so_code_30 },
    { "bitutl_so_code_31", 25, bitutl_so_code_31 },
    { "bitutl_so_code_32", 14, bitutl_so_code_32 },
    { "bitutl_so_code_33", 16, bitutl_so_code_33 },
    { "bitutl_so_code_34", 17, bitutl_so_code_34 },
    { "bitutl_so_code_35", 12, bitutl_so_code_35 },
    { "bitutl_so_code_36", 15, bitutl_so_code_36 },
    { "bitutl_so_code_37", 4, bitutl_so_code_37 },
    { "bitutl_so_code_38", 4, bitutl_so_code_38 },
    { "bitutl_so_code_39", 2, bitutl_so_code_39 },
    { "bitutl_so_code_40", 2, bitutl_so_code_40 },
    { "bitutl_so_code_41", 5, bitutl_so_code_41 },
    { "bitutl_so_code_42", 5, bitutl_so_code_42 },
    { "bitutl_so_code_43", 35, bitutl_so_code_43 },
    { "bitutl_so_code_44", 35, bitutl_so_code_44 },
    { "bitutl_so_code_45", 1, bitutl_so_code_45 },
    { "bitutl_so_code_46", 8, bitutl_so_code_46 },
    { "bitutl_so_code_47", 5, bitutl_so_code_47 }
  };

int
decl_bitutl_so_b113cf1be872b766 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_bitutl_so_b113cf1be872b766);
  return (0);
}

DECLARE_COMPILED_CODE ("bitutl.so", 29, decl_bitutl_so_b113cf1be872b766, bitutl_so_b113cf1be872b766)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_bitutl_so_data_b113cf1be872b766 [5871] =
  "\x82\x01\x47\xf6\x0c\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x22\x29"
  "\x21\x9d\x2b\xb9\x1d\xb0\x82\x88\xc1\xba\x22\x29\x21\x9d\x2b\xbb"
  "\x1d\xb0\x83\x88\x1d\xc2\xc2\xc1\xbc\x08\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x84\x88\x80\x08\x81\x0d"
  "\xbe\x0d\xbf\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\x1d\xb7\x25\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x80\x0d\xb7\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x81\x07"
  "\x08\xb4\xb2\x0d\xb7\x0d\x0d\xb6\x0d\x1c\x24\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\x81\xb2\x0c\x08\xc2\x1c\x83\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0d\x0c\x85\x02\x06\x07\x02\x86\x02\x02\xc2\x02\xb2\xb4"
  "\xb7\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x02\x88\xb4\x0c\x0d\x1c"
  "\x24\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb6\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb6\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1b\x24"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x80\x08\x81\xb6\x24\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0"
  "\x02\x88\x08\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb4\xb2\x08\x82\x1b\x81\x80\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb4\xb2\x08\x82\x1b\x81\x80\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x81\x1b\x82\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x1b\x82\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81"
  "\x0c\x1b\x82\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x82\x1b"
  "\x81\x0c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb2\x22\x29\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\xb4\xb2\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb2\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\xb2\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\xb2\x08\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\xb2\x08\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x87\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb2\xb4\x08\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb4\xb2\x80\x08\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbc\x17\xba\x88\xb2\xb4\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b"
  "\x1b\x0d\x0d\x0d\x0d\x17\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x0d\x1b\x1b\x0d\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x1b\x2a\x17"
  "\x1b\x0d\x0d\x99\x1b\x2a\x1b\x2a\x99\x0d\x1c\x0c\x0d\x0d\x08\x89"
  "\x1b\x0d\x1b\x0d\x0d\x9c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x9c\xc3\x1b\x08\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x17\x1b\x2a\xb7\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a\xb3\x2a\xb1"
  "\x2a\x17\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x0d\x0d\x0d\x24\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2f\x62\x61\x63\x6b\x2f\x62\x69\x74\x75\x74\x6c"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x1e\x04\x82\x02\x03\x02"
  "\x04\x63\x61\x72\x1f\x04\x83\x04\x03\x02\x02\x09\x73\x65\x74\x2d"
  "\x63\x64\x72\x21\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x04\x63\x64"
  "\x72\x24\x0c\x81\x87\x02\x23\x0a\x81\x87\x02\x22\x08\x81\x87\x02"
  "\x21\x06\x81\x87\x02\x20\x04\x84\x06\x0b\x13\x02\x17\x61\x64\x64"
  "\x72\x65\x73\x73\x69\x6e\x67\x2d\x67\x72\x61\x6e\x75\x6c\x61\x72"
  "\x69\x74\x79\x13\x2a\x74\x68\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x2d"
  "\x74\x61\x62\x6c\x65\x2a\x03\x04\x12\x70\x61\x72\x61\x6e\x6f\x69"
  "\x64\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x09\x05\x15\x73\x79\x6d"
  "\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x2d\x64\x65\x66\x69\x6e\x65"
  "\x21\x0a\x04\x0e\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x76\x61"
  "\x6c\x0b\x04\x2b\x10\x81\x8b\x02\x2a\x0e\x81\x8d\x02\x29\x0c\x81"
  "\x89\x02\x28\x0a\x81\x87\x02\x27\x08\x81\x87\x02\x26\x06\x81\x8b"
  "\x02\x25\x04\x85\x08\x0f\x1f\x0c\x02\x02\x02\x02\x12\x6d\x61\x6b"
  "\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x02\x2e"
  "\x08\x81\x81\x02\x2d\x06\x81\x81\x02\x2c\x04\x82\x02\x07\x10\x0d"
  "\x02\x0e\x2a\x73\x74\x61\x72\x74\x2d\x6c\x61\x62\x65\x6c\x2a\x03"
  "\x05\x0a\x02\x31\x08\x81\x85\x02\x30\x06\x81\x83\x02\x2f\x04\x82"
  "\x02\x07\x11\x0e\x02\x08\x0c\x2a\x65\x6e\x64\x2d\x6c\x61\x62\x65"
  "\x6c\x2a\x0a\x2a\x65\x71\x75\x61\x74\x65\x73\x2a\x0a\x2a\x6f\x62"
  "\x6a\x65\x63\x74\x73\x2a\x14\x73\x63\x68\x65\x6d\x65\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x77\x69\x64\x74\x68\x0f\x07\x04\x13\x73\x79"
  "\x6d\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x2d\x76\x61\x6c\x75\x65"
  "\x10\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03\x10\x69\x6e\x74"
  "\x65\x72\x76\x61\x6c\x2d\x76\x61\x6c\x75\x65\x73\x11\x04\x09\x65"
  "\x76\x61\x6c\x75\x61\x74\x65\x12\x04\x09\x05\x0a\x04\x0b\x08\x56"
  "\x4c\x81\x8d\x02\x55\x4a\x81\x8f\x02\x54\x48\x81\x8b\x02\x53\x46"
  "\x81\x8d\x02\x52\x44\x81\x8b\x02\x51\x42\x81\x8b\x02\x50\x40\x81"
  "\x8b\x02\x4f\x3e\x81\x89\x02\x4e\x3c\x81\x87\x02\x4d\x3a\x81\x87"
  "\x02\x4c\x38\x81\x87\x02\x4b\x36\x81\x87\x02\x4a\x34\x81\x87\x02"
  "\x49\x32\x81\x87\x02\x48\x30\x81\x87\x02\x47\x2e\x81\x8d\x02\x46"
  "\x2c\x81\x87\x02\x45\x2a\x81\x8b\x02\x44\x28\x81\x8b\x02\x43\x26"
  "\x81\x85\x02\x42\x24\x81\x83\x02\x41\x22\x83\x04\x40\x20\x81\x87"
  "\x02\x3f\x1e\x81\x85\x02\x3e\x1c\x81\x87\x02\x3d\x1a\x81\x87\x02"
  "\x3c\x18\x81\x87\x02\x3b\x16\x81\x87\x02\x3a\x14\x81\x85\x02\x39"
  "\x12\x81\x85\x02\x38\x10\x84\x06\x37\x0e\x81\x81\x02\x36\x0c\x81"
  "\x81\x02\x35\x0a\x81\x81\x02\x34\x08\x81\x8b\x02\x33\x06\x81\x89"
  "\x02\x32\x04\x82\x02\x4b\x6a\x0a\x02\x09\x1e\x42\x61\x64\x20\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x20\x77\x69\x64\x74\x68\x20\x64\x69"
  "\x72\x65\x63\x74\x69\x76\x65\x3a\x0b\x76\x65\x63\x74\x6f\x72\x2d"
  "\x72\x65\x66\x13\x04\x06\x65\x72\x72\x6f\x72\x14\x02\x65\x20\x81"
  "\x85\x02\x64\x1e\x81\x89\x02\x63\x1c\x81\x89\x02\x62\x1a\x81\x89"
  "\x02\x61\x18\x81\x89\x02\x60\x16\x81\x89\x02\x5f\x14\x81\x87\x02"
  "\x5e\x12\x81\x87\x02\x5d\x10\x81\x87\x02\x5c\x0e\x81\x89\x02\x5b"
  "\x0c\x81\x85\x02\x5a\x0a\x81\x85\x02\x59\x08\x81\x83\x02\x58\x06"
  "\x83\x04\x57\x04\x81\x85\x02\x1f\x2c\x15\x02\x0a\x13\x66\x04\x83"
  "\x04\x03\x16\x02\x0b\x13\x67\x04\x83\x04\x03\x17\x02\x0c\x13\x68"
  "\x04\x83\x04\x03\x18\x02\x0d\x13\x69\x04\x83\x04\x03\x13\x02\x0e"
  "\x28\x65\x76\x61\x6c\x75\x61\x74\x65\x3a\x20\x2a\x50\x43\x2a\x20"
  "\x66\x6f\x75\x6e\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x50\x43"
  "\x20\x64\x65\x66\x69\x6e\x65\x64\x05\x2a\x70\x63\x2a\x19\x65\x76"
  "\x61\x6c\x75\x61\x74\x65\x3a\x20\x62\x61\x64\x20\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x1e\x3d\x3b\x0f\x0d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x74\x79\x70\x65\x3f\x1b\x02\x04\x14\x03\x14\x04\x10\x03"
  "\x0e\x66\x69\x6e\x64\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x10\x05"
  "\x7d\x2a\xfd\xff\x03\x7c\x28\xfd\xff\x03\x7b\x26\xfd\xff\x03\x7a"
  "\x24\xfd\xff\x03\x79\x22\xfd\xff\x03\x78\x20\xfd\xff\x03\x77\x1e"
  "\xfd\xff\x03\x76\x1c\x81\x83\x02\x75\x1a\x81\x83\x02\x74\x18\x81"
  "\x83\x02\x73\x16\x81\x83\x02\x72\x14\x81\x83\x02\x71\x12\xfd\xff"
  "\x03\x70\x10\xfd\xff\x03\x6f\x0e\xfd\xff\x03\x6e\x0c\xff\xff\x03"
  "\x6d\x0a\xfd\xff\x03\x6c\x08\xfd\xff\x03\x6b\x06\xfd\xff\x03\x6a"
  "\x04\x84\x06\x29\x46\x02\x0f\x1c\x65\x76\x61\x6c\x75\x61\x74\x65"
  "\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x6f\x70\x65\x72\x61\x74"
  "\x6f\x72\x3a\x0a\x6f\x70\x65\x72\x61\x74\x6f\x72\x73\x19\x02\x04"
  "\x05\x61\x73\x73\x71\x04\x14\x03\x82\x01\x0c\x81\x85\x02\x81\x01"
  "\x0a\x81\x83\x02\x80\x01\x08\x81\x85\x02\x7f\x06\x81\x85\x02\x7e"
  "\x04\x83\x04\x0b\x17\x1a\x02\x10\x0b\x69\x6e\x74\x65\x72\x76\x61"
  "\x6c\x3a\x2b\x1b\x02\x84\x01\x06\x81\x81\x02\x83\x01\x04\x82\x02"
  "\x05\x0a\x1c\x02\x11\x0b\x69\x6e\x74\x65\x72\x76\x61\x6c\x3a\x2d"
  "\x1d\x02\x86\x01\x06\x81\x81\x02\x85\x01\x04\x82\x02\x05\x0a\x1e"
  "\x02\x12\x0b\x69\x6e\x74\x65\x72\x76\x61\x6c\x3a\x2a\x1f\x02\x88"
  "\x01\x06\x81\x81\x02\x87\x01\x04\x82\x02\x05\x0a\x20\x02\x13\x0b"
  "\x69\x6e\x74\x65\x72\x76\x61\x6c\x3a\x2f\x21\x02\x8a\x01\x06\x81"
  "\x81\x02\x89\x01\x04\x82\x02\x05\x0a\x22\x02\x14\x12\x69\x6e\x74"
  "\x65\x72\x76\x61\x6c\x3a\x71\x75\x6f\x74\x69\x65\x6e\x74\x23\x02"
  "\x8c\x01\x06\x81\x81\x02\x8b\x01\x04\x82\x02\x05\x0a\x24\x02\x15"
  "\x13\x69\x6e\x74\x65\x72\x76\x61\x6c\x3a\x72\x65\x6d\x61\x69\x6e"
  "\x64\x65\x72\x25\x02\x8e\x01\x06\x81\x81\x02\x8d\x01\x04\x82\x02"
  "\x05\x0a\x26\x02\x16\x02\x04\x09\x02\x90\x01\x06\x81\x85\x02\x8f"
  "\x01\x04\x83\x04\x05\x0d\x27\x02\x17\x02\x92\x01\x06\x81\x85\x02"
  "\x91\x01\x04\x83\x04\x05\x0a\x28\x02\x18\x22\x70\x61\x72\x61\x6e"
  "\x6f\x69\x64\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x3a\x20\x6e\x6f"
  "\x74\x20\x61\x20\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x0f\x69\x6e"
  "\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x03\x19\x69\x6e"
  "\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x2d\x72\x65\x6d"
  "\x61\x69\x6e\x64\x65\x72\x05\x14\x03\x18\x69\x6e\x74\x65\x67\x65"
  "\x72\x2d\x64\x69\x76\x69\x64\x65\x2d\x71\x75\x6f\x74\x69\x65\x6e"
  "\x74\x05\x97\x01\x0c\x81\x87\x02\x96\x01\x0a\x81\x87\x02\x95\x01"
  "\x08\x81\x87\x02\x94\x01\x06\x81\x85\x02\x93\x01\x04\x84\x06\x0b"
  "\x18\x29\x02\x19\x0f\x02\x05\x08\x70\x61\x64\x64\x69\x66\x79\x0f"
  "\x02\x99\x01\x06\x81\x87\x02\x98\x01\x04\x83\x04\x05\x0e\x2a\x02"
  "\x1a\xa0\x01\x10\x81\x8b\x02\x9f\x01\x0e\x81\x8b\x02\x9e\x01\x0c"
  "\x81\x8b\x02\x9d\x01\x0a\x81\x8b\x02\x9c\x01\x08\x81\x87\x02\x9b"
  "\x01\x06\x81\x89\x02\x9a\x01\x04\x85\x08\x0f\x12\x2b\x02\x1b\x0c"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x2c\xa1\x01\x04\x83"
  "\x04\x03\x2d\x02\x1c\x2c\xa2\x01\x04\x83\x04\x03\x2e\x02\x1d\x2c"
  "\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07"
  "\x2e\x74\x61\x67\x2e\x31\x2f\x02\xa6\x01\x0a\x81\x85\x02\xa5\x01"
  "\x08\x81\x83\x02\xa4\x01\x06\x81\x83\x02\xa3\x01\x04\x83\x04\x09"
  "\x12\x30\x02\x1e\x02\x04\x09\x04\x0b\x03\xab\x01\x0c\x81\x87\x02"
  "\xaa\x01\x0a\x81\x89\x02\xa9\x01\x08\x81\x85\x02\xa8\x01\x06\x81"
  "\x87\x02\xa7\x01\x04\x84\x06\x0b\x18\x02\x1f\x04\x0f\x25\x6d\x61"
  "\x6b\x65\x2d\x69\x6e\x74\x65\x72\x76\x61\x6c\x31\x02\xac\x01\x04"
  "\x84\x06\x03\x0a\x32\x02\x20\x2c\x03\x0a\x69\x6e\x74\x65\x72\x76"
  "\x61\x6c\x3f\x33\x02\xc5\x01\x34\x81\x85\x02\xc4\x01\x32\x81\x85"
  "\x02\xc3\x01\x30\x81\x85\x02\xc2\x01\x2e\x81\x91\x02\xc1\x01\x2c"
  "\x81\x91\x02\xc0\x01\x2a\x81\x91\x02\xbf\x01\x28\x81\x91\x02\xbe"
  "\x01\x26\x81\x91\x02\xbd\x01\x24\x81\x91\x02\xbc\x01\x22\x81\x91"
  "\x02\xbb\x01\x20\x81\x8f\x02\xba\x01\x1e\x81\x8f\x02\xb9\x01\x1c"
  "\x81\x8f\x02\xb8\x01\x1a\x81\x8d\x02\xb7\x01\x18\x81\x8d\x02\xb6"
  "\x01\x16\x81\x8d\x02\xb5\x01\x14\x81\x8b\x02\xb4\x01\x12\x81\x8b"
  "\x02\xb3\x01\x10\x81\x8b\x02\xb2\x01\x0e\x81\x8b\x02\xb1\x01\x0c"
  "\x81\x8b\x02\xb0\x01\x0a\x81\x89\x02\xaf\x01\x08\x81\x87\x02\xae"
  "\x01\x06\x81\x83\x02\xad\x01\x04\x83\x04\x33\x40\x34\x02\x21\x2c"
  "\x03\x33\x02\xd3\x01\x1e\x81\x8b\x02\xd2\x01\x1c\x81\x8b\x02\xd1"
  "\x01\x1a\x81\x8b\x02\xd0\x01\x18\x81\x8b\x02\xcf\x01\x16\x81\x89"
  "\x02\xce\x01\x14\x81\x89\x02\xcd\x01\x12\x81\x89\x02\xcc\x01\x10"
  "\x81\x87\x02\xcb\x01\x0e\x81\x87\x02\xca\x01\x0c\x81\x87\x02\xc9"
  "\x01\x0a\x81\x87\x02\xc8\x01\x08\x81\x85\x02\xc7\x01\x06\x81\x83"
  "\x02\xc6\x01\x04\x83\x04\x1d\x2a\x35\x02\x22\x2c\x03\x33\x04\x0b"
  "\x04\x09\x73\x65\x67\x73\x65\x74\x3a\x2b\x36\x04\xe3\x01\x22\x81"
  "\x87\x02\xe2\x01\x20\x81\x89\x02\xe1\x01\x1e\x81\x87\x02\xe0\x01"
  "\x1c\x81\x85\x02\xdf\x01\x1a\x81\x85\x02\xde\x01\x18\x81\x85\x02"
  "\xdd\x01\x16\x81\x85\x02\xdc\x01\x14\x81\x85\x02\xdb\x01\x12\x81"
  "\x89\x02\xda\x01\x10\x81\x87\x02\xd9\x01\x0e\x81\x87\x02\xd8\x01"
  "\x0c\x81\x87\x02\xd7\x01\x0a\x81\x85\x02\xd6\x01\x08\x81\x85\x02"
  "\xd5\x01\x06\x81\x85\x02\xd4\x01\x04\x84\x06\x21\x2e\x37\x02\x23"
  "\x2c\x03\x33\x04\x0b\x04\x09\x73\x65\x67\x73\x65\x74\x3a\x2d\x38"
  "\x03\x0e\x73\x65\x67\x73\x65\x74\x3a\x6e\x65\x67\x61\x74\x65\x39"
  "\x05\xf4\x01\x24\x81\x85\x02\xf3\x01\x22\x81\x87\x02\xf2\x01\x20"
  "\x81\x89\x02\xf1\x01\x1e\x81\x87\x02\xf0\x01\x1c\x81\x85\x02\xef"
  "\x01\x1a\x81\x87\x02\xee\x01\x18\x81\x85\x02\xed\x01\x16\x81\x85"
  "\x02\xec\x01\x14\x81\x85\x02\xeb\x01\x12\x81\x89\x02\xea\x01\x10"
  "\x81\x87\x02\xe9\x01\x0e\x81\x87\x02\xe8\x01\x0c\x81\x87\x02\xe7"
  "\x01\x0a\x81\x85\x02\xe6\x01\x08\x81\x85\x02\xe5\x01\x06\x81\x85"
  "\x02\xe4\x01\x04\x84\x06\x23\x32\x3a\x02\x24\x1e\x43\x61\x6e\x27"
  "\x74\x20\x6d\x75\x6c\x74\x69\x70\x6c\x79\x20\x74\x77\x6f\x20\x69"
  "\x6e\x74\x65\x72\x76\x61\x6c\x73\x3a\x2c\x03\x33\x04\x0d\x73\x65"
  "\x67\x73\x65\x74\x3a\x73\x63\x61\x6c\x65\x3b\x05\x14\x04\x0b\x05"
  "\x80\x02\x1a\x81\x87\x02\xff\x01\x18\x81\x87\x02\xfe\x01\x16\x81"
  "\x85\x02\xfd\x01\x14\x81\x87\x02\xfc\x01\x12\x81\x87\x02\xfb\x01"
  "\x10\x81\x85\x02\xfa\x01\x0e\x81\x89\x02\xf9\x01\x0c\x81\x85\x02"
  "\xf8\x01\x0a\x81\x89\x02\xf7\x01\x08\x81\x85\x02\xf6\x01\x06\x81"
  "\x85\x02\xf5\x01\x04\x84\x06\x19\x29\x3c\x02\x25\x1d\x49\x6e\x74"
  "\x65\x72\x76\x61\x6c\x20\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x6e"
  "\x6f\x74\x20\x65\x78\x61\x63\x74\x3a\x2c\x1d\x43\x61\x6e\x27\x74"
  "\x20\x64\x69\x76\x69\x64\x65\x20\x62\x79\x20\x61\x6e\x20\x69\x6e"
  "\x74\x65\x72\x76\x61\x6c\x3a\x03\x33\x04\x14\x05\x14\x04\x09\x03"
  "\x11\x04\x3b\x03\x09\x69\x6e\x74\x65\x67\x65\x72\x3f\x04\x0b\x09"
  "\x8f\x02\x20\x81\x85\x02\x8e\x02\x1e\x81\x89\x02\x8d\x02\x1c\x81"
  "\x8b\x02\x8c\x02\x1a\x84\x06\x8b\x02\x18\x81\x87\x02\x8a\x02\x16"
  "\x81\x87\x02\x89\x02\x14\x81\x8b\x02\x88\x02\x12\x81\x89\x02\x87"
  "\x02\x10\x81\x8d\x02\x86\x02\x0e\x81\x87\x02\x85\x02\x0c\x81\x85"
  "\x02\x84\x02\x0a\x81\x85\x02\x83\x02\x08\x81\x85\x02\x82\x02\x06"
  "\x81\x85\x02\x81\x02\x04\x84\x06\x1f\x38\x2c\x02\x26\x1f\x51\x55"
  "\x4f\x54\x49\x45\x4e\x54\x20\x64\x6f\x65\x73\x6e\x27\x74\x20\x64"
  "\x6f\x20\x69\x6e\x74\x65\x72\x76\x61\x6c\x73\x3a\x03\x33\x05\x14"
  "\x03\x93\x02\x0a\x81\x85\x02\x92\x02\x08\x81\x85\x02\x91\x02\x06"
  "\x81\x85\x02\x90\x02\x04\x84\x06\x09\x12\x3d\x02\x27\x20\x52\x45"
  "\x4d\x41\x49\x4e\x44\x45\x52\x20\x64\x6f\x65\x73\x6e\x27\x74\x20"
  "\x64\x6f\x20\x69\x6e\x74\x65\x72\x76\x61\x6c\x73\x3a\x03\x33\x05"
  "\x14\x03\x97\x02\x0a\x81\x85\x02\x96\x02\x08\x81\x85\x02\x95\x02"
  "\x06\x81\x85\x02\x94\x02\x04\x84\x06\x09\x12\x14\x02\x28\x99\x02"
  "\x06\x81\x83\x02\x98\x02\x04\x83\x04\x05\x3e\x02\x29\x9b\x02\x06"
  "\x81\x83\x02\x9a\x02\x04\x83\x04\x05\x0a\x3f\x02\x2a\xa0\x02\x0c"
  "\x81\x85\x02\x9f\x02\x0a\x81\x85\x02\x9e\x02\x08\x81\x85\x02\x9d"
  "\x02\x06\x81\x85\x02\x9c\x02\x04\x84\x06\x0b\x10\x40\x02\x2b\xa5"
  "\x02\x0c\x81\x85\x02\xa4\x02\x0a\x81\x85\x02\xa3\x02\x08\x81\x85"
  "\x02\xa2\x02\x06\x81\x85\x02\xa1\x02\x04\x84\x06\x0b\x10\x41\x02"
  "\x2c\x04\x36\x05\x0c\x63\x6f\x6e\x73\x2d\x73\x65\x67\x73\x65\x74"
  "\x42\x03\xc8\x02\x48\x81\x89\x02\xc7\x02\x46\x81\x8b\x02\xc6\x02"
  "\x44\x81\x8b\x02\xc5\x02\x42\x81\x89\x02\xc4\x02\x40\x81\x89\x02"
  "\xc3\x02\x3e\x81\x87\x02\xc2\x02\x3c\x81\x89\x02\xc1\x02\x3a\x81"
  "\x8b\x02\xc0\x02\x38\x81\x8b\x02\xbf\x02\x36\x81\x89\x02\xbe\x02"
  "\x34\x81\x89\x02\xbd\x02\x32\x81\x87\x02\xbc\x02\x30\x81\x8b\x02"
  "\xbb\x02\x2e\x81\x85\x02\xba\x02\x2c\x81\x85\x02\xb9\x02\x2a\x81"
  "\x8d\x02\xb8\x02\x28\x81\x8d\x02\xb7\x02\x26\x81\x8f\x02\xb6\x02"
  "\x24\x81\x8f\x02\xb5\x02\x22\x81\x8f\x02\xb4\x02\x20\x81\x8d\x02"
  "\xb3\x02\x1e\x81\x8d\x02\xb2\x02\x1c\x81\x8d\x02\xb1\x02\x1a\x81"
  "\x89\x02\xb0\x02\x18\x81\x85\x02\xaf\x02\x16\x81\x85\x02\xae\x02"
  "\x14\x81\x85\x02\xad\x02\x12\x81\x87\x02\xac\x02\x10\x81\x87\x02"
  "\xab\x02\x0e\x81\x87\x02\xaa\x02\x0c\x81\x85\x02\xa9\x02\x0a\x81"
  "\x85\x02\xa8\x02\x08\x81\x85\x02\xa7\x02\x06\x84\x06\xa6\x02\x04"
  "\x81\x8b\x02\x47\x52\x43\x02\x2d\x03\x39\x04\x38\x05\x42\x04\xeb"
  "\x02\x48\x81\x89\x02\xea\x02\x46\x81\x8b\x02\xe9\x02\x44\x81\x8b"
  "\x02\xe8\x02\x42\x81\x89\x02\xe7\x02\x40\x81\x89\x02\xe6\x02\x3e"
  "\x81\x87\x02\xe5\x02\x3c\x81\x89\x02\xe4\x02\x3a\x81\x8b\x02\xe3"
  "\x02\x38\x81\x8b\x02\xe2\x02\x36\x81\x89\x02\xe1\x02\x34\x81\x89"
  "\x02\xe0\x02\x32\x81\x87\x02\xdf\x02\x30\x81\x8b\x02\xde\x02\x2e"
  "\x81\x85\x02\xdd\x02\x2c\x81\x85\x02\xdc\x02\x2a\x81\x8d\x02\xdb"
  "\x02\x28\x81\x8d\x02\xda\x02\x26\x81\x8f\x02\xd9\x02\x24\x81\x8f"
  "\x02\xd8\x02\x22\x81\x8f\x02\xd7\x02\x20\x81\x8d\x02\xd6\x02\x1e"
  "\x81\x8d\x02\xd5\x02\x1c\x81\x8d\x02\xd4\x02\x1a\x81\x89\x02\xd3"
  "\x02\x18\x81\x85\x02\xd2\x02\x16\x81\x85\x02\xd1\x02\x14\x81\x85"
  "\x02\xd0\x02\x12\x81\x87\x02\xcf\x02\x10\x81\x87\x02\xce\x02\x0e"
  "\x81\x87\x02\xcd\x02\x0c\x81\x85\x02\xcc\x02\x0a\x81\x85\x02\xcb"
  "\x02\x08\x81\x85\x02\xca\x02\x06\x84\x06\xc9\x02\x04\x81\x8b\x02"
  "\x47\x54\x44\x02\x2e\x04\x3b\x02\xec\x02\x04\x83\x04\x03\x0a\x45"
  "\x02\x2f\x04\x3b\x02\xf4\x02\x12\x81\x89\x02\xf3\x02\x10\x81\x89"
  "\x02\xf2\x02\x0e\x81\x87\x02\xf1\x02\x0c\x81\x87\x02\xf0\x02\x0a"
  "\x81\x87\x02\xef\x02\x08\x81\x85\x02\xee\x02\x06\x81\x89\x02\xed"
  "\x02\x04\x84\x06\x11\x1a\x46\x02\x30\xf9\x02\x0c\x81\x87\x02\xf8"
  "\x02\x0a\x81\x89\x02\xf7\x02\x08\x81\x89\x02\xf6\x02\x06\x85\x08"
  "\xf5\x02\x04\x81\x87\x02\x0b\x12\x30\x06\x46\x04\x45\x04\x44\x06"
  "\x43\x06\x41\x04\x40\x04\x3f\x04\x3e\x04\x0a\x42\x3b\x39\x38\x36"
  "\x0a\x73\x65\x67\x6d\x65\x6e\x74\x3a\x3d\x0a\x73\x65\x67\x6d\x65"
  "\x6e\x74\x3a\x3c\x0c\x73\x65\x67\x6d\x65\x6e\x74\x2d\x6d\x61\x78"
  "\x0c\x73\x65\x67\x6d\x65\x6e\x74\x2d\x6d\x69\x6e\x0a\x0a\x70\x6f"
  "\x69\x6e\x74\x2d\x6d\x61\x78\x0a\x70\x6f\x69\x6e\x74\x2d\x6d\x69"
  "\x6e\x0b\x6d\x61\x6b\x65\x2d\x70\x6f\x69\x6e\x74\x0e\x73\x65\x67"
  "\x6d\x65\x6e\x74\x2d\x63\x6f\x65\x66\x66\x0e\x73\x65\x67\x6d\x65"
  "\x6e\x74\x2d\x70\x6f\x69\x6e\x74\x0d\x6d\x61\x6b\x65\x2d\x73\x65"
  "\x67\x6d\x65\x6e\x74\x2f\x25\x23\x21\x1f\x1d\x1b\x15\x69\x6e\x74"
  "\x65\x72\x76\x61\x6c\x2d\x66\x69\x6e\x61\x6c\x2d\x76\x61\x6c\x75"
  "\x65\x11\x0b\x18\x6c\x61\x62\x65\x6c\x2d\x3e\x6d\x61\x63\x68\x69"
  "\x6e\x65\x2d\x69\x6e\x74\x65\x72\x76\x61\x6c\x33\x0c\x14\x04\x3d"
  "\x04\x2c\x04\x3c\x04\x3a\x04\x37\x04\x35\x04\x34\x04\x32\x04\x04"
  "\x30\x04\x0c\x31\x10\x69\x6e\x74\x65\x72\x76\x61\x6c\x2d\x73\x65"
  "\x67\x73\x65\x74\x10\x69\x6e\x74\x65\x72\x76\x61\x6c\x2d\x6f\x66"
  "\x66\x73\x65\x74\x2e\x04\x2d\x04\x0d\x72\x74\x64\x3a\x69\x6e\x74"
  "\x65\x72\x76\x61\x6c\x46\x09\x69\x6e\x74\x65\x72\x76\x61\x6c\x07"
  "\x6f\x66\x66\x73\x65\x74\x07\x73\x65\x67\x73\x65\x74\x0f\x0a\x66"
  "\x69\x6e\x61\x6c\x2d\x70\x61\x64\x09\x0f\x2d\x3e\x62\x69\x74\x73"
  "\x74\x72\x69\x6e\x67\x2d\x70\x63\x0d\x2d\x3e\x6d\x61\x63\x68\x69"
  "\x6e\x65\x2d\x70\x63\x2b\x04\x2a\x04\x29\x04\x28\x04\x27\x04\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x19\x26\x04\x0a\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x24\x04\x09"
  "\x71\x75\x6f\x74\x69\x65\x6e\x74\x22\x04\x02\x2f\x20\x04\x02\x2a"
  "\x1e\x04\x02\x2d\x1c\x04\x02\x2b\x10\x12\x0e\x73\x65\x6c\x65\x63"
  "\x74\x6f\x72\x2f\x68\x69\x67\x68\x0d\x73\x65\x6c\x65\x63\x74\x6f"
  "\x72\x2f\x6c\x6f\x77\x10\x73\x65\x6c\x65\x63\x74\x6f\x72\x2f\x6c"
  "\x65\x6e\x67\x74\x68\x11\x73\x65\x6c\x65\x63\x74\x6f\x72\x2f\x68"
  "\x61\x6e\x64\x6c\x65\x72\x17\x76\x61\x72\x69\x61\x62\x6c\x65\x2d"
  "\x77\x69\x64\x74\x68\x2d\x6c\x65\x6e\x67\x74\x68\x73\x15\x66\x69"
  "\x6e\x69\x73\x68\x2d\x73\x79\x6d\x62\x6f\x6c\x2d\x74\x61\x62\x6c"
  "\x65\x21\x19\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x73\x79"
  "\x6d\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x21\x14\x63\x6c\x65\x61"
  "\x72\x2d\x73\x79\x6d\x62\x6f\x6c\x2d\x74\x61\x62\x6c\x65\x21\x11"
  "\x73\x65\x74\x2d\x6c\x61\x62\x65\x6c\x2d\x76\x61\x6c\x75\x65\x21"
  "\x0e\x61\x64\x64\x2d\x74\x6f\x2d\x71\x75\x65\x75\x65\x21\x0c\x71"
  "\x75\x65\x75\x65\x2d\x3e\x6c\x69\x73\x74\x0b\x6d\x61\x6b\x65\x2d"
  "\x71\x75\x65\x75\x65\x0f\x1a\x04\x04\x13\x04\x18\x04\x17\x04\x16"
  "\x04\x15\x06\x0a\x04\x0e\x04\x0d\x04\x0c\x04\x04\x04\x04\x0f\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d"
  "\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x46\x05\x63"
  "\x6f\x6e\x73\x04\x63\x61\x72\x04\x63\x64\x72\x05\x1d\x3c\x80\x80"
  "\x04\x1c\x3a\x81\x81\x02\x1b\x38\x81\x81\x02\x1a\x36\x81\x83\x02"
  "\x19\x34\x81\x85\x02\x18\x32\x81\x83\x02\x17\x30\x81\x85\x02\x16"
  "\x2e\x81\x83\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83\x02\x13\x28"
  "\x81\x85\x02\x12\x26\x81\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81"
  "\x83\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x85"
  "\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x87\x02\x0a\x16\x81\x87\x02"
  "\x09\x14\x81\x83\x02\x08\x12\x81\x85\x02\x07\x10\x81\x83\x02\x06"
  "\x0e\x81\x85\x02\x05\x0c\x81\x87\x02\x04\x0a\x81\x83\x02\x03\x08"
  "\x81\x83\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x3b\x70";

SCHEME_OBJECT *
bitutl_so_data_b113cf1be872b766 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_bitutl_so_data_b113cf1be872b766 [0]))), (sizeof (prog_bitutl_so_data_b113cf1be872b766)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_36]));
}

DECLARE_COMPILED_DATA_NS ("bitutl.so", bitutl_so_data_b113cf1be872b766)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("bitutl.so", "ab3b6063e1184f5f")
