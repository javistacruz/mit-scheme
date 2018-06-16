/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:56-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_8 7
#define LABEL_1_10 9
#define LABEL_1_12 11
#define LABEL_1_15 13
#define LABEL_1_16 15
#define LABEL_1_14 17
#define ENVIRONMENT_LABEL_1_3 36
#define DEBUGGING_LABEL_1_2 35
#define EXECUTE_CACHE_1_19 19
#define EXECUTE_CACHE_1_18 21
#define EXECUTE_CACHE_1_17 23
#define EXECUTE_CACHE_1_13 25
#define EXECUTE_CACHE_1_11 27
#define EXECUTE_CACHE_1_9 29
#define EXECUTE_CACHE_1_7 31
#define EXECUTE_CACHE_1_6 33
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_compile_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_1_4);
      goto compile_item_top_level_8;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_item_top_level_11)
DEFLABEL (compile_item_top_level_8)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (label_13)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_8 9
#define LABEL_2_11 11
#define LABEL_2_10 13
#define LABEL_2_14 15
#define LABEL_2_13 17
#define ENVIRONMENT_LABEL_2_3 31
#define DEBUGGING_LABEL_2_2 30
#define EXECUTE_CACHE_2_15 19
#define EXECUTE_CACHE_2_12 21
#define EXECUTE_CACHE_2_9 23
#define EXECUTE_CACHE_2_7 25
#define FREE_REFERENCE_2_1 28
#define FREE_REFERENCE_2_0 29
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_compile_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_2_4);
      goto compile_body_item_top_level_5;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto label_8;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_body_item_top_level_10)
DEFLABEL (compile_body_item_top_level_5)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_11)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_2_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_15;
  Wrd9 = Wrd13;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_13;
  Wrd10 = Wrd14;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_14])), (Wrd11.pObj));

DEFLABEL (label_8)
  (Wrd10.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_11])), (Wrd10.pObj));

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define LABEL_3_5 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_13 13
#define LABEL_3_16 15
#define LABEL_3_18 17
#define LABEL_3_20 19
#define LABEL_3_21 21
#define ENVIRONMENT_LABEL_3_3 46
#define DEBUGGING_LABEL_3_2 45
#define OBJECT_3_1 44
#define OBJECT_3_0 43
#define EXECUTE_CACHE_3_23 23
#define EXECUTE_CACHE_3_22 25
#define EXECUTE_CACHE_3_19 27
#define EXECUTE_CACHE_3_17 29
#define EXECUTE_CACHE_3_15 31
#define EXECUTE_CACHE_3_14 33
#define EXECUTE_CACHE_3_12 35
#define EXECUTE_CACHE_3_11 37
#define EXECUTE_CACHE_3_10 39
#define EXECUTE_CACHE_3_6 41
#define FREE_REFERENCES_LABEL_3_0 22
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_compile_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_3_4);
      goto compile_body_items_12;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto lambda_9;

    case 5:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_3_21);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_body_items_15)
DEFLABEL (compile_body_items_12)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_17;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_7);

DEFLABEL (label_17)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (lambda_16)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_3_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd7.Obj) = (current_block [OBJECT_3_1]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_21);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define LABEL_4_5 7
#define ENVIRONMENT_LABEL_4_3 15
#define DEBUGGING_LABEL_4_2 14
#define OBJECT_4_0 13
#define EXECUTE_CACHE_4_8 9
#define EXECUTE_CACHE_4_6 11
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_compile_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_4_4);
      goto compile_item_expression_3;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_item_expression_6)
DEFLABEL (compile_item_expression_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_7)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_7 9
#define ENVIRONMENT_LABEL_5_3 19
#define DEBUGGING_LABEL_5_2 18
#define OBJECT_5_0 17
#define EXECUTE_CACHE_5_9 11
#define EXECUTE_CACHE_5_8 13
#define FREE_REFERENCE_5_0 16
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_compile_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_5_4);
      goto get_item_compiler_3;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_item_compiler_7)
DEFLABEL (get_item_compiler_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_12;
  Wrd8 = Wrd12;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd13.uLng) == 1)
    goto label_8;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_8)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_5 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define ENVIRONMENT_LABEL_6_3 22
#define DEBUGGING_LABEL_6_2 21
#define OBJECT_6_1 20
#define OBJECT_6_0 19
#define EXECUTE_CACHE_6_7 13
#define FREE_REFERENCE_6_0 16
#define FREE_ASSIGNMENT_6_0 18
#define FREE_REFERENCES_LABEL_6_0 12
#define NUMBER_OF_LINKER_SECTIONS_6_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_compile_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_6_4);
      goto define_item_compiler_4;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_item_compiler_10)
DEFLABEL (define_item_compiler_4)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [1]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_6_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_12)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_17;
  Wrd17 = Wrd21;

DEFLABEL (label_16)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd31.pObj) [0]) = (Wrd28.Obj);

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_6_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_9])), (Wrd31.pObj), (Wrd28.Obj));

DEFLABEL (label_8)
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_8])), (Wrd18.pObj));

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_6])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_7 7
#define ENVIRONMENT_LABEL_7_3 15
#define DEBUGGING_LABEL_7_2 14
#define OBJECT_7_0 13
#define EXECUTE_CACHE_7_9 9
#define EXECUTE_CACHE_7_8 11
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_compile_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_7_4);
      goto illegal_expression_compiler_2;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (illegal_expression_compiler_5)
DEFLABEL (illegal_expression_compiler_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

INVOKE_INTERFACE_TARGET_0
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
syntax_compile_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 10
#define DEBUGGING_LABEL_9_2 9
#define EXECUTE_CACHE_9_6 7
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_compile_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 12
#define DEBUGGING_LABEL_10_2 11
#define EXECUTE_CACHE_10_7 7
#define EXECUTE_CACHE_10_6 9
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_compile_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_11 9
#define LABEL_9 11
#define LABEL_14 13
#define LABEL_10 15
#define LABEL_16 17
#define LABEL_13 19
#define LABEL_18 21
#define LABEL_15 23
#define LABEL_20 25
#define LABEL_17 27
#define LABEL_22 29
#define LABEL_19 31
#define LABEL_24 33
#define LABEL_21 35
#define LABEL_23 37
#define LABEL_27 39
#define LABEL_25 41
#define LABEL_26 43
#define LABEL_30 45
#define LABEL_28 47
#define LABEL_31 49
#define LABEL_29 51
#define LABEL_33 53
#define LABEL_32 55
#define LABEL_34 57
#define LABEL_35 59
#define LABEL_36 61
#define ENVIRONMENT_LABEL_3 94
#define DEBUGGING_LABEL_2 93
#define PURIFICATION_ROOT 92
#define OBJECT_9 91
#define OBJECT_8 90
#define OBJECT_7 89
#define OBJECT_6 88
#define OBJECT_5 87
#define OBJECT_4 86
#define OBJECT_3 85
#define OBJECT_2 84
#define OBJECT_1 83
#define OBJECT_0 82
#define EXECUTE_CACHE_12 63
#define EXECUTE_CACHE_8 65
#define FREE_REFERENCE_10 68
#define FREE_REFERENCE_9 69
#define FREE_REFERENCE_8 70
#define FREE_REFERENCE_7 71
#define FREE_REFERENCE_6 72
#define FREE_REFERENCE_5 73
#define FREE_REFERENCE_4 74
#define FREE_REFERENCE_3 75
#define FREE_REFERENCE_2 76
#define FREE_REFERENCE_1 77
#define FREE_REFERENCE_0 78
#define GLOBAL_EXECUTE_CACHE_5 80
#define FREE_REFERENCES_LABEL_0 62
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
syntax_compile_so_d23a76ca0e479ed0 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
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
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_14);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_16);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_18);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_20);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto label_25;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_7;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto label_26;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto continuation_13;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto label_27;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto continuation_15;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto label_28;

    case 24:
      current_block = (Rpc - LABEL_29);
      goto continuation_14;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto label_29;

    case 26:
      current_block = (Rpc - LABEL_32);
      goto continuation_16;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto label_32;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto label_33;

    case 29:
      current_block = (Rpc - LABEL_36);
      goto expression_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_18)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_35])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_33)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_32)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	3,
	2,
	1,
	1,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 10)
      goto label_31;
    blocks = (current_block [OBJECT_9]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_34])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_31)
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
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_43;
  Wrd5 = Wrd9;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_41;
  Wrd9 = Wrd13;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_39;
  Wrd9 = Wrd13;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_37;
  Wrd9 = Wrd13;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_35;
  Wrd5 = Wrd9;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd6.pObj));

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd10.pObj));

DEFLABEL (label_25)
  (Wrd9.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd10.pObj));

DEFLABEL (label_23)
  (Wrd9.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd10.pObj));

DEFLABEL (label_21)
  (Wrd9.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd6.pObj));

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_42;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_55;
  Wrd9 = Wrd13;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_53;
  Wrd9 = Wrd13;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_51;
  Wrd9 = Wrd13;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_49;
  Wrd5 = Wrd9;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_47;
  Wrd5 = Wrd9;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_45;
  Wrd5 = Wrd9;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_32);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd6.pObj));

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd6.pObj));

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd6.pObj));

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd10.pObj));

DEFLABEL (label_24)
  (Wrd9.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd10.pObj));

DEFLABEL (label_22)
  (Wrd9.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd10.pObj));

DEFLABEL (label_20)
  (Wrd9.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_1
}

static const struct liarc_code_S arr_decl_syntax_compile_so_d23a76ca0e479ed0 [10] =
  {
    { "syntax_compile_so_code_1", 8, syntax_compile_so_code_1 },
    { "syntax_compile_so_code_2", 8, syntax_compile_so_code_2 },
    { "syntax_compile_so_code_3", 10, syntax_compile_so_code_3 },
    { "syntax_compile_so_code_4", 3, syntax_compile_so_code_4 },
    { "syntax_compile_so_code_5", 4, syntax_compile_so_code_5 },
    { "syntax_compile_so_code_6", 5, syntax_compile_so_code_6 },
    { "syntax_compile_so_code_7", 3, syntax_compile_so_code_7 },
    { "syntax_compile_so_code_8", 2, syntax_compile_so_code_8 },
    { "syntax_compile_so_code_9", 2, syntax_compile_so_code_9 },
    { "syntax_compile_so_code_10", 2, syntax_compile_so_code_10 }
  };

int
decl_syntax_compile_so_d23a76ca0e479ed0 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syntax_compile_so_d23a76ca0e479ed0);
  return (0);
}

DECLARE_COMPILED_CODE ("syntax-compile.so", 30, decl_syntax_compile_so_d23a76ca0e479ed0, syntax_compile_so_d23a76ca0e479ed0)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syntax_compile_so_data_d23a76ca0e479ed0 [1982] =
  "\x5f\x11\x99\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9\x28"
  "\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x28\x0d\xbd\x28\x0d\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x82\x88\x0d\x0d\xbf\x24\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83"
  "\x88\x08\x0c\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x28\xb1\x28\xb2"
  "\x28\xb4\x28\xb5\x28\xb3\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbd\x1d\xb0\x84\x88\xb2\x28\x0d\xbc\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x85\x88\xc1\x0d\xb9\x24\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\xc2\x1d\xb1\x25\xb1\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\xb8\x17\x1c\x88\x1b\x0c\x0c\xb0\x2a\x1b\x2a\x1b\x2a\x0c\x0c\x0d"
  "\x1c\xb1\x0d\x1c\xb4\xb2\x1b\x0d\xb7\x9f\x1b\x2a\x08\x1b\x2a\x1b"
  "\x2a\xb3\x2a\xb5\x2a\x1b\x2a\xb6\x2a\x9f\x28\x0d\x26\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x24\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5d\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75"
  "\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x79\x6e\x74\x61\x78\x2d\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x03\x0e\x62\x69\x6e\x64\x69\x6e\x67\x2d\x69\x74\x65\x6d\x3f\x03"
  "\x18\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x69\x74\x65\x6d\x2f\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x12\x62\x69\x6e\x64\x69\x6e"
  "\x67\x2d\x69\x74\x65\x6d\x2f\x6e\x61\x6d\x65\x03\x13\x62\x69\x6e"
  "\x64\x69\x6e\x67\x2d\x69\x74\x65\x6d\x2f\x76\x61\x6c\x75\x65\x03"
  "\x14\x6b\x65\x79\x77\x6f\x72\x64\x2d\x76\x61\x6c\x75\x65\x2d\x69"
  "\x74\x65\x6d\x3f\x03\x1e\x6b\x65\x79\x77\x6f\x72\x64\x2d\x76\x61"
  "\x6c\x75\x65\x2d\x69\x74\x65\x6d\x2f\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x04\x23\x6f\x75\x74\x70\x75\x74\x2f\x74\x6f\x70\x2d"
  "\x6c\x65\x76\x65\x6c\x2d\x73\x79\x6e\x74\x61\x78\x2d\x64\x65\x66"
  "\x69\x6e\x69\x74\x69\x6f\x6e\x04\x1c\x6f\x75\x74\x70\x75\x74\x2f"
  "\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x64\x65\x66\x69\x6e\x69"
  "\x74\x69\x6f\x6e\x09\x26\x12\x81\x85\x02\x25\x10\x81\x87\x02\x24"
  "\x0e\x81\x85\x02\x23\x0c\x81\x85\x02\x22\x0a\x81\x85\x02\x21\x08"
  "\x81\x83\x02\x20\x06\x81\x83\x02\x1f\x04\x83\x04\x11\x25\x02\x16"
  "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x69\x74\x65\x6d"
  "\x2f\x74\x65\x78\x74\x17\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x69\x74"
  "\x65\x6d\x2f\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x03\x03\x15\x62"
  "\x6f\x64\x79\x2d\x69\x74\x65\x6d\x2f\x63\x6f\x6d\x70\x6f\x6e\x65"
  "\x6e\x74\x73\x09\x03\x1f\x65\x78\x74\x72\x61\x63\x74\x2d\x64\x65"
  "\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x2d\x66\x72\x6f\x6d\x2d"
  "\x62\x6f\x64\x79\x04\x04\x6d\x61\x70\x0a\x04\x1a\x6f\x75\x74\x70"
  "\x75\x74\x2f\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x73\x65\x71"
  "\x75\x65\x6e\x63\x65\x05\x2e\x12\x81\x85\x02\x2d\x10\x81\x89\x02"
  "\x2c\x0e\x81\x85\x02\x2b\x0c\x81\x89\x02\x2a\x0a\x84\x06\x29\x08"
  "\x81\x85\x02\x28\x06\x81\x83\x02\x27\x04\x83\x04\x11\x20\x0b\x02"
  "\x0b\x45\x6d\x70\x74\x79\x20\x62\x6f\x64\x79\x03\x13\x66\x6c\x61"
  "\x74\x74\x65\x6e\x2d\x62\x6f\x64\x79\x2d\x69\x74\x65\x6d\x73\x04"
  "\x0a\x03\x0d\x73\x79\x6e\x74\x61\x78\x2d\x65\x72\x72\x6f\x72\x0a"
  "\x03\x10\x6f\x75\x74\x70\x75\x74\x2f\x73\x65\x71\x75\x65\x6e\x63"
  "\x65\x03\x03\x03\x03\x03\x04\x12\x6f\x75\x74\x70\x75\x74\x2f\x64"
  "\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x0b\x38\x16\x81\x87\x02\x37"
  "\x14\x81\x85\x02\x36\x12\x81\x85\x02\x35\x10\x81\x83\x02\x34\x0e"
  "\x81\x83\x02\x33\x0c\x83\x04\x32\x0a\x81\x83\x02\x31\x08\x81\x83"
  "\x02\x30\x06\x81\x83\x02\x2f\x04\x83\x04\x15\x2f\x02\x03\x12\x67"
  "\x65\x74\x2d\x69\x74\x65\x6d\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x03\x3b\x08\x81\x83\x02"
  "\x3a\x06\x81\x85\x02\x39\x04\x83\x04\x07\x10\x02\x04\x63\x64\x72"
  "\x0f\x69\x74\x65\x6d\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x73\x02"
  "\x03\x17\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x65"
  "\x73\x63\x72\x69\x70\x74\x6f\x72\x04\x05\x61\x73\x73\x71\x0c\x03"
  "\x3f\x0a\x81\x87\x02\x3e\x08\x81\x83\x02\x3d\x06\x81\x85\x02\x3c"
  "\x04\x83\x04\x09\x14\x0d\x02\x09\x73\x65\x74\x2d\x63\x64\x72\x21"
  "\x02\x02\x02\x04\x0c\x02\x44\x0c\x81\x87\x02\x43\x0a\x81\x87\x02"
  "\x42\x08\x81\x85\x02\x41\x06\x81\x87\x02\x40\x04\x84\x06\x0b\x17"
  "\x0c\x02\x08\x23\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20"
  "\x75\x73\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x3a\x04\x07\x73\x74\x72\x69\x6e\x67\x04\x0a"
  "\x03\x47\x08\x81\x85\x02\x46\x06\x81\x85\x02\x45\x04\x83\x04\x07"
  "\x10\x0a\x02\x09\x03\x13\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69"
  "\x74\x65\x6d\x2f\x6e\x61\x6d\x65\x03\x10\x6f\x75\x74\x70\x75\x74"
  "\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x03\x49\x06\x81\x83\x02\x48"
  "\x04\x83\x04\x05\x0d\x0e\x02\x0a\x03\x19\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x2d\x69\x74\x65\x6d\x2f\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x02\x4b\x06\x81\x83\x02\x4a\x04\x83\x04\x05\x0b\x0f\x02"
  "\x0b\x03\x09\x03\x13\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x62\x6f\x64"
  "\x79\x2d\x69\x74\x65\x6d\x73\x09\x03\x4d\x06\x81\x83\x02\x4c\x04"
  "\x83\x04\x05\x0d\x0b\x10\x10\x0b\x44\x65\x66\x69\x6e\x69\x74\x69"
  "\x6f\x6e\x0c\x44\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x04\x0f"
  "\x04\x0e\x04\x12\x53\x79\x6e\x74\x61\x63\x74\x69\x63\x20\x6b\x65"
  "\x79\x77\x6f\x72\x64\x0e\x52\x65\x73\x65\x72\x76\x65\x64\x20\x6e"
  "\x61\x6d\x65\x1c\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x10"
  "\x15\x64\x65\x66\x69\x6e\x65\x2d\x69\x74\x65\x6d\x2d\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x0f\x09\x1c\x63\x6f\x6d\x70\x69\x6c\x65\x2d"
  "\x62\x6f\x64\x79\x2d\x69\x74\x65\x6d\x2f\x74\x6f\x70\x2d\x6c\x65"
  "\x76\x65\x6c\x0a\x04\x0c\x04\x0d\x04\x04\x04\x0b\x04\x04\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\x15\x3c\x72\x65\x73\x65\x72\x76\x65\x64\x2d\x6e\x61\x6d\x65\x2d"
  "\x69\x74\x65\x6d\x3e\x10\x3c\x76\x61\x72\x69\x61\x62\x6c\x65\x2d"
  "\x69\x74\x65\x6d\x3e\x12\x3c\x63\x6c\x61\x73\x73\x69\x66\x69\x65"
  "\x72\x2d\x69\x74\x65\x6d\x3e\x12\x3c\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x2d\x69\x74\x65\x6d\x3e\x10\x3c\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2d\x69\x74\x65\x6d\x3e\x0c\x3c\x62\x6f\x64\x79\x2d"
  "\x69\x74\x65\x6d\x3e\x10\x3c\x65\x78\x70\x61\x6e\x64\x65\x72\x2d"
  "\x69\x74\x65\x6d\x3e\x15\x3c\x6b\x65\x79\x77\x6f\x72\x64\x2d\x76"
  "\x61\x6c\x75\x65\x2d\x69\x74\x65\x6d\x3e\x13\x3c\x64\x65\x63\x6c"
  "\x61\x72\x61\x74\x69\x6f\x6e\x2d\x69\x74\x65\x6d\x3e\x14\x3c\x6e"
  "\x75\x6c\x6c\x2d\x62\x69\x6e\x64\x69\x6e\x67\x2d\x69\x74\x65\x6d"
  "\x3e\x0f\x3c\x62\x69\x6e\x64\x69\x6e\x67\x2d\x69\x74\x65\x6d\x3e"
  "\x0c\x03\x10\x04\x0f\x03\x1e\x3e\x80\x80\x04\x1d\x3c\x81\x81\x02"
  "\x1c\x3a\x81\x81\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x87\x02\x19"
  "\x34\x81\x85\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e"
  "\x81\x87\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83\x02\x13\x28\x81"
  "\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x87"
  "\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x87\x02\x0d\x1c\x81\x83\x02"
  "\x0c\x1a\x81\x87\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x87\x02\x09"
  "\x14\x81\x83\x02\x08\x12\x81\x87\x02\x07\x10\x81\x85\x02\x06\x0e"
  "\x81\x87\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x87\x02\x03\x08\x81"
  "\x85\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x3d\x5f";

SCHEME_OBJECT *
syntax_compile_so_data_d23a76ca0e479ed0 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syntax_compile_so_data_d23a76ca0e479ed0 [0]))), (sizeof (prog_syntax_compile_so_data_d23a76ca0e479ed0)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_36]));
}

DECLARE_COMPILED_DATA_NS ("syntax-compile.so", syntax_compile_so_data_d23a76ca0e479ed0)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syntax-compile.so", "632e075fef749466")
