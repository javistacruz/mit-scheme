/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:18-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_8 5
#define LABEL_1_9 7
#define LABEL_1_10 9
#define LABEL_1_5 11
#define LABEL_1_6 13
#define LABEL_1_11 15
#define ENVIRONMENT_LABEL_1_3 28
#define DEBUGGING_LABEL_1_2 27
#define OBJECT_1_1 26
#define OBJECT_1_0 25
#define EXECUTE_CACHE_1_12 17
#define EXECUTE_CACHE_1_7 19
#define FREE_REFERENCE_1_0 22
#define FREE_ASSIGNMENT_1_0 24
#define FREE_REFERENCES_LABEL_1_0 16
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgspcm_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_1_4);
      goto define_special_primitive_handler_7;

    case 1:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_1_9);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_special_primitive_handler_13)
DEFLABEL (define_special_primitive_handler_7)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_23;
  Wrd8 = Wrd12;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd15.uLng) == 1)
    goto label_14;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_14)
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  ((Wrd12.pObj) [1]) = (Wrd9.Obj);

DEFLABEL (label_16)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_21;
  Wrd17 = Wrd21;

DEFLABEL (label_20)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  ((Wrd31.pObj) [0]) = (Wrd28.Obj);
  goto label_16;

DEFLABEL (label_19)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_10])), (Wrd31.pObj), (Wrd28.Obj));

DEFLABEL (label_11)
  goto label_16;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd18.pObj));

DEFLABEL (label_10)
  (Wrd17.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_22;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_5 7
#define ENVIRONMENT_LABEL_2_3 15
#define DEBUGGING_LABEL_2_2 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_7 9
#define FREE_REFERENCE_2_0 12
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgspcm_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_2_4);
      goto special_primitive_handler_2;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (special_primitive_handler_6)
DEFLABEL (special_primitive_handler_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd13.uLng) == 1)
    goto label_7;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_7)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 12
#define DEBUGGING_LABEL_3_2 11
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCE_3_0 10
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgspcm_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto define_special_primitive_standard_0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_special_primitive_standard_4)
DEFLABEL (define_special_primitive_standard_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_8 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_11 13
#define LABEL_12 15
#define LABEL_13 17
#define LABEL_14 19
#define LABEL_15 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_18 27
#define LABEL_19 29
#define LABEL_20 31
#define LABEL_21 33
#define LABEL_22 35
#define ENVIRONMENT_LABEL_3 61
#define DEBUGGING_LABEL_2 60
#define PURIFICATION_ROOT 59
#define OBJECT_16 58
#define OBJECT_15 57
#define OBJECT_14 56
#define OBJECT_13 55
#define OBJECT_12 54
#define OBJECT_11 53
#define OBJECT_10 52
#define OBJECT_9 51
#define OBJECT_8 50
#define OBJECT_7 49
#define OBJECT_6 48
#define OBJECT_5 47
#define OBJECT_4 46
#define OBJECT_3 45
#define OBJECT_2 44
#define OBJECT_1 43
#define OBJECT_0 42
#define EXECUTE_CACHE_7 37
#define GLOBAL_EXECUTE_CACHE_5 40
#define FREE_REFERENCES_LABEL_0 36
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rgspcm_so_ec6bcb27d8dec1e8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_4);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto label_18;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto label_19;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto expression_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_15)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_21])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_19)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_18)
  {
    static const short sections [] =
      {
	0,
	2,
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 3)
      goto label_17;
    blocks = (current_block [OBJECT_16]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_20])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_17)
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
  (Wrd8.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

INVOKE_INTERFACE_TARGET_1
}

static const struct liarc_code_S arr_decl_rgspcm_so_ec6bcb27d8dec1e8 [3] =
  {
    { "rgspcm_so_code_1", 7, rgspcm_so_code_1 },
    { "rgspcm_so_code_2", 3, rgspcm_so_code_2 },
    { "rgspcm_so_code_3", 2, rgspcm_so_code_3 }
  };

int
decl_rgspcm_so_ec6bcb27d8dec1e8 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rgspcm_so_ec6bcb27d8dec1e8);
  return (0);
}

DECLARE_COMPILED_CODE ("rgspcm.so", 17, decl_rgspcm_so_ec6bcb27d8dec1e8, rgspcm_so_ec6bcb27d8dec1e8)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rgspcm_so_data_ec6bcb27d8dec1e8 [733] =
  "\x3e\x07\x98\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\x07\x0d\xb9"
  "\x25\xb1\x24\x28\x0d\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88\xc1"
  "\xb1\x24\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d"
  "\xb0\x83\x88\x0d\x24\x28\x0d\xb8\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\xbc\x9a\xbd\x88\xb5\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\xbd\xb1\x0d\xb0\x9b\xb4\x2a\x08\xb2\x2a\xb3\x2a"
  "\x9b\x28\x0d\x26\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5f\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2f\x6d\x61\x63\x68\x69\x6e\x65\x73\x2f\x43"
  "\x2f\x72\x67\x73\x70\x63\x6d\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x1b\x73\x70\x65\x63\x69"
  "\x61\x6c\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x68\x61\x6e"
  "\x64\x6c\x65\x72\x73\x02\x02\x04\x19\x6d\x61\x6b\x65\x2d\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x04\x05\x61\x73\x73\x71\x03\x18\x10\x81\x85\x02\x17\x0e\x81"
  "\x87\x02\x16\x0c\x81\x85\x02\x15\x0a\x81\x85\x02\x14\x08\x81\x85"
  "\x02\x13\x06\x81\x83\x02\x12\x04\x84\x06\x0f\x1d\x02\x04\x63\x64"
  "\x72\x02\x04\x02\x1b\x08\x81\x83\x02\x1a\x06\x81\x85\x02\x19\x04"
  "\x83\x04\x07\x10\x02\x26\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69"
  "\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x73\x70\x65\x63\x69\x61"
  "\x6c\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x02\x04\x21\x64\x65"
  "\x66\x69\x6e\x65\x2d\x73\x70\x65\x63\x69\x61\x6c\x2d\x70\x72\x69"
  "\x6d\x69\x74\x69\x76\x65\x2d\x68\x61\x6e\x64\x6c\x65\x72\x02\x1d"
  "\x06\x81\x85\x02\x1c\x04\x83\x04\x05\x0d\x0a\x72\x65\x6d\x61\x69"
  "\x6e\x64\x65\x72\x09\x71\x75\x6f\x74\x69\x65\x6e\x74\x0a\x6e\x65"
  "\x67\x61\x74\x69\x76\x65\x3f\x0a\x70\x6f\x73\x69\x74\x69\x76\x65"
  "\x3f\x06\x7a\x65\x72\x6f\x3f\x04\x2d\x31\x2b\x03\x31\x2b\x03\x26"
  "\x3e\x03\x26\x3c\x03\x26\x3d\x03\x26\x2f\x03\x26\x2a\x03\x26\x2d"
  "\x03\x26\x2b\x22\x64\x65\x66\x69\x6e\x65\x2d\x73\x70\x65\x63\x69"
  "\x61\x6c\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2f\x73\x74\x61"
  "\x6e\x64\x61\x72\x64\x1a\x73\x70\x65\x63\x69\x61\x6c\x2d\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x68\x61\x6e\x64\x6c\x65\x72\x04"
  "\x04\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x03\x02\x11\x24\x80\x80\x04\x10\x22\x81\x81\x02"
  "\x0f\x20\x81\x81\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c"
  "\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14"
  "\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81"
  "\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83"
  "\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x23\x3e";

SCHEME_OBJECT *
rgspcm_so_data_ec6bcb27d8dec1e8 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rgspcm_so_data_ec6bcb27d8dec1e8 [0]))), (sizeof (prog_rgspcm_so_data_ec6bcb27d8dec1e8)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_22]));
}

DECLARE_COMPILED_DATA_NS ("rgspcm.so", rgspcm_so_data_ec6bcb27d8dec1e8)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rgspcm.so", "5012700c70d1d212")
