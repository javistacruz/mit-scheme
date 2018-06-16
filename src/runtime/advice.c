/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:24-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define ENVIRONMENT_LABEL_1_3 20
#define DEBUGGING_LABEL_1_2 19
#define OBJECT_1_0 18
#define EXECUTE_CACHE_1_6 13
#define FREE_ASSIGNMENT_1_1 16
#define FREE_ASSIGNMENT_1_0 17
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_7)
DEFLABEL (initialize_packageB_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_11)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_1_0]);
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 12
#define DEBUGGING_LABEL_2_2 11
#define EXECUTE_CACHE_2_6 7
#define FREE_REFERENCE_2_0 10
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto Z__args__0;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__args__4)
DEFLABEL (Z__args__0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 9
#define DEBUGGING_LABEL_3_2 8
#define FREE_REFERENCE_3_0 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto Z__proc__0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__proc__4)
DEFLABEL (Z__proc__0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 9
#define DEBUGGING_LABEL_4_2 8
#define FREE_REFERENCE_4_0 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto Z__result__0;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__result__4)
DEFLABEL (Z__result__0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 12
#define DEBUGGING_LABEL_5_2 11
#define EXECUTE_CACHE_5_7 7
#define EXECUTE_CACHE_5_6 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto get_advice_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_advice_4)
DEFLABEL (get_advice_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_8 5
#define LABEL_6_5 7
#define TAG_6_6 2
#define LABEL_6_9 9
#define LABEL_6_10 11
#define LABEL_6_11 13
#define TAG_6_12 5
#define ENVIRONMENT_LABEL_6_3 23
#define DEBUGGING_LABEL_6_2 22
#define OBJECT_6_2 21
#define OBJECT_6_1 20
#define OBJECT_6_0 19
#define EXECUTE_CACHE_6_13 15
#define EXECUTE_CACHE_6_7 17
#define FREE_REFERENCES_LABEL_6_0 14
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_advice_7;

    case 1:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_13;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_advice_12)
DEFLABEL (lambda_advice_7)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_19;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_8);

DEFLABEL (label_19)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_18;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_16;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_15)
  (Rsp [2]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_11])));
  Rhp += 2;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd37 = Wrd34;
  (Wrd38.Obj) = (Rsp [1]);
  ((Wrd37.pObj) [2]) = (Wrd38.Obj);
  (Wrd36.Obj) = (Rsp [0]);
  ((Wrd37.pObj) [3]) = (Wrd36.Obj);
  Rvl = (Wrd33.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_10)
  (Wrd23.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_9)
  (Wrd14.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_6_11);

DEFLABEL (lambda_4)
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

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_8 7
#define LABEL_7_7 9
#define ENVIRONMENT_LABEL_7_3 20
#define DEBUGGING_LABEL_7_2 19
#define OBJECT_7_1 18
#define OBJECT_7_0 17
#define EXECUTE_CACHE_7_9 11
#define EXECUTE_CACHE_7_6 13
#define FREE_REFERENCE_7_0 16
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_7_4);
      goto make_advice_hook_5;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_advice_hook_9)
DEFLABEL (make_advice_hook_5)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd9.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_11;
  Wrd14 = Wrd18;

DEFLABEL (label_10)
  (Wrd23.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_8])), (Wrd15.pObj));

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 8
#define DEBUGGING_LABEL_8_2 7
#define EXECUTE_CACHE_8_5 5
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto hook_advised_procedure_wrapper_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hook_advised_procedure_wrapper_3)
DEFLABEL (hook_advised_procedure_wrapper_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_9 9
#define TAG_9_10 3
#define LABEL_9_11 11
#define LABEL_9_13 13
#define TAG_9_14 5
#define LABEL_9_19 15
#define TAG_9_20 6
#define LABEL_9_17 17
#define TAG_9_18 7
#define LABEL_9_26 19
#define LABEL_9_27 21
#define LABEL_9_28 23
#define LABEL_9_22 25
#define LABEL_9_23 27
#define TAG_9_24 12
#define LABEL_9_31 29
#define LABEL_9_30 31
#define LABEL_9_32 33
#define TAG_9_33 15
#define LABEL_9_35 35
#define LABEL_9_41 37
#define LABEL_9_37 39
#define TAG_9_38 18
#define LABEL_9_40 41
#define LABEL_9_42 43
#define TAG_9_43 20
#define LABEL_9_44 45
#define TAG_9_45 21
#define ENVIRONMENT_LABEL_9_3 83
#define DEBUGGING_LABEL_9_2 82
#define OBJECT_9_8 81
#define OBJECT_9_7 80
#define OBJECT_9_6 79
#define OBJECT_9_5 78
#define OBJECT_9_4 77
#define OBJECT_9_3 76
#define OBJECT_9_2 75
#define OBJECT_9_1 74
#define OBJECT_9_0 73
#define EXECUTE_CACHE_9_39 47
#define EXECUTE_CACHE_9_36 49
#define EXECUTE_CACHE_9_34 51
#define EXECUTE_CACHE_9_29 53
#define EXECUTE_CACHE_9_25 55
#define EXECUTE_CACHE_9_21 57
#define EXECUTE_CACHE_9_16 59
#define EXECUTE_CACHE_9_15 61
#define EXECUTE_CACHE_9_12 63
#define EXECUTE_CACHE_9_8 65
#define EXECUTE_CACHE_9_6 67
#define FREE_REFERENCE_9_0 70
#define FREE_ASSIGNMENT_9_0 72
#define FREE_REFERENCES_LABEL_9_0 46
#define NUMBER_OF_LINKER_SECTIONS_9_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd24;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd10;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_9_4);
      goto advised_procedure_wrapper_27;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto lambda_36;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_9_13);
      goto lambda_37;

    case 6:
      current_block = (Rpc - LABEL_9_19);
      goto lambda_39;

    case 7:
      current_block = (Rpc - LABEL_9_17);
      goto swapB_38;

    case 8:
      current_block = (Rpc - LABEL_9_26);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_9_27);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_9_28);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_9_22);
      goto lambda_3;

    case 12:
      current_block = (Rpc - LABEL_9_23);
      goto lambda_40;

    case 13:
      current_block = (Rpc - LABEL_9_31);
      goto label_32;

    case 14:
      current_block = (Rpc - LABEL_9_30);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_9_32);
      goto lambda_42;

    case 16:
      current_block = (Rpc - LABEL_9_35);
      goto continuation_8;

    case 17:
      current_block = (Rpc - LABEL_9_41);
      goto label_33;

    case 18:
      current_block = (Rpc - LABEL_9_37);
      goto lambda_43;

    case 19:
      current_block = (Rpc - LABEL_9_40);
      goto continuation_12;

    case 20:
      current_block = (Rpc - LABEL_9_42);
      goto lambda_44;

    case 21:
      current_block = (Rpc - LABEL_9_44);
      goto lambda_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (advised_procedure_wrapper_35)
DEFLABEL (advised_procedure_wrapper_27)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_9])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_9_9);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_13])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd20 = Wrd7;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd22.pObj) [3]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd22.pObj) [4]);
  ((Wrd20.pObj) [4]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [6]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_9_13);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_17])));
  Rhp += 1;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  ((Wrd40.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_19])));
  Rhp += 6;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd30 = Wrd11;
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  ((Wrd30.pObj) [2]) = (Wrd33.Obj);
  (Wrd29.Obj) = ((Wrd32.pObj) [3]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  (Wrd25.Obj) = ((Wrd32.pObj) [4]);
  ((Wrd30.pObj) [4]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd32.pObj) [5]);
  ((Wrd30.pObj) [5]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd32.pObj) [6]);
  ((Wrd30.pObj) [6]) = (Wrd17.Obj);
  ((Wrd30.pObj) [7]) = (Wrd8.Obj);
  (Rsp [3]) = (Wrd41.Obj);
  (Rsp [1]) = (Wrd41.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_9_19);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_23])));
  Rhp += 5;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd31 = Wrd14;
  (Wrd34.Obj) = ((Wrd8.pObj) [2]);
  ((Wrd31.pObj) [2]) = (Wrd34.Obj);
  (Wrd30.Obj) = ((Wrd8.pObj) [3]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (Wrd26.Obj) = ((Wrd8.pObj) [4]);
  ((Wrd31.pObj) [4]) = (Wrd26.Obj);
  (Wrd22.Obj) = ((Wrd8.pObj) [5]);
  ((Wrd31.pObj) [5]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd8.pObj) [6]);
  ((Wrd31.pObj) [6]) = (Wrd18.Obj);
  (Rsp [4]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_25]));

DEFLABEL (swapB_38)
  CLOSURE_HEADER (LABEL_9_17);

DEFLABEL (swapB_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_54;

DEFLABEL (label_53)
  Wrd5 = Wrd9;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_49)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_48;

DEFLABEL (label_47)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_46)
  Rvl = (current_block [OBJECT_9_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_48)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_47;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_28])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_31)
  goto label_46;

DEFLABEL (label_51)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_50;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_27])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_30)
  goto label_49;

DEFLABEL (label_54)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_53;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_9_26])), (Wrd6.pObj));

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_41)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_9_22);
  (Wrd5.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_29]));

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_9_23);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [5]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_58;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_57)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_32])));
  Rhp += 3;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd33 = Wrd24;
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [2]);
  ((Wrd33.pObj) [2]) = (Wrd36.Obj);
  (Wrd32.Obj) = ((Wrd35.pObj) [3]);
  ((Wrd33.pObj) [3]) = (Wrd32.Obj);
  (Wrd28.Obj) = ((Wrd35.pObj) [4]);
  ((Wrd33.pObj) [4]) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_34]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_36]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [5]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_56;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_55)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_43);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_42])));
  Rhp += 4;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd35 = Wrd24;
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [2]);
  ((Wrd35.pObj) [2]) = (Wrd38.Obj);
  (Wrd34.Obj) = ((Wrd37.pObj) [3]);
  ((Wrd35.pObj) [3]) = (Wrd34.Obj);
  (Wrd30.Obj) = ((Wrd37.pObj) [4]);
  ((Wrd35.pObj) [4]) = (Wrd30.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd35.pObj) [5]) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_34]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9_40);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_41]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_31]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_9_32);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_37])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd19 = Wrd8;
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd21.pObj) [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd21.pObj) [4]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [5]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_9_6]);
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_39]));

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_9_37);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_9_42);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_44])));
  Rhp += 5;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd23 = Wrd8;
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  ((Wrd23.pObj) [2]) = (Wrd26.Obj);
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd25.pObj) [4]);
  ((Wrd23.pObj) [4]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd25.pObj) [5]);
  ((Wrd23.pObj) [5]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [6]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_9_8]);
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_39]));

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_9_44);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_8 9
#define LABEL_10_10 11
#define ENVIRONMENT_LABEL_10_3 19
#define DEBUGGING_LABEL_10_2 18
#define OBJECT_10_0 17
#define EXECUTE_CACHE_10_9 13
#define EXECUTE_CACHE_10_6 15
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_10_4);
      goto advice_5;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_3;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (advice_8)
DEFLABEL (advice_5)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_10_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (Wrd9.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define ENVIRONMENT_LABEL_11_3 14
#define DEBUGGING_LABEL_11_2 13
#define EXECUTE_CACHE_11_8 9
#define EXECUTE_CACHE_11_6 11
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto entry_advice_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entry_advice_5)
DEFLABEL (entry_advice_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_11_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define ENVIRONMENT_LABEL_12_3 14
#define DEBUGGING_LABEL_12_2 13
#define EXECUTE_CACHE_12_8 9
#define EXECUTE_CACHE_12_6 11
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto exit_advice_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (exit_advice_5)
DEFLABEL (exit_advice_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_12_7);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_9 9
#define ENVIRONMENT_LABEL_13_3 20
#define DEBUGGING_LABEL_13_2 19
#define EXECUTE_CACHE_13_10 11
#define EXECUTE_CACHE_13_8 13
#define EXECUTE_CACHE_13_6 15
#define FREE_REFERENCE_13_0 18
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_13_4);
      goto advise_entry_2;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (advise_entry_6)
DEFLABEL (advise_entry_2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_9])), (Wrd8.pObj));

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_8 9
#define ENVIRONMENT_LABEL_14_3 20
#define DEBUGGING_LABEL_14_2 19
#define EXECUTE_CACHE_14_10 11
#define EXECUTE_CACHE_14_9 13
#define EXECUTE_CACHE_14_6 15
#define FREE_REFERENCE_14_0 18
#define FREE_REFERENCES_LABEL_14_0 10
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_14_4);
      goto advise_exit_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (advise_exit_6)
DEFLABEL (advise_exit_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_7])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_9 9
#define ENVIRONMENT_LABEL_15_3 18
#define DEBUGGING_LABEL_15_2 17
#define EXECUTE_CACHE_15_10 11
#define EXECUTE_CACHE_15_8 13
#define EXECUTE_CACHE_15_6 15
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto advise_both_3;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (advise_both_6)
DEFLABEL (advise_both_3)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define TAG_16_7 2
#define LABEL_16_8 9
#define TAG_16_9 3
#define LABEL_16_13 11
#define LABEL_16_14 13
#define LABEL_16_11 15
#define LABEL_16_15 17
#define LABEL_16_12 19
#define LABEL_16_19 21
#define LABEL_16_20 23
#define LABEL_16_17 25
#define LABEL_16_21 27
#define LABEL_16_23 29
#define LABEL_16_18 31
#define ENVIRONMENT_LABEL_16_3 47
#define DEBUGGING_LABEL_16_2 46
#define OBJECT_16_3 45
#define OBJECT_16_2 44
#define OBJECT_16_1 43
#define OBJECT_16_0 42
#define EXECUTE_CACHE_16_22 33
#define EXECUTE_CACHE_16_16 35
#define EXECUTE_CACHE_16_10 37
#define FREE_REFERENCE_16_1 40
#define FREE_REFERENCE_16_0 41
#define FREE_REFERENCES_LABEL_16_0 32
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_16_4);
      goto primitive_advise_17;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto lambda_26;

    case 4:
      current_block = (Rpc - LABEL_16_13);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_16_14);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_16_19);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_16_20);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_16_17);
      goto continuation_0;

    case 12:
      current_block = (Rpc - LABEL_16_21);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_16_23);
      goto label_21;

    case 14:
      current_block = (Rpc - LABEL_16_18);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_advise_24)
DEFLABEL (primitive_advise_17)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_6])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_8])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  ((Wrd19.pObj) [2]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_5);
  Rvl = (current_block [OBJECT_16_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_25)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_16_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_17);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  if (Rvl == (Wrd6.Obj))
    goto label_31;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_33;
  Wrd13 = Wrd17;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_20);

DEFLABEL (label_31)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (Rsp [4]);
  if (! ((Wrd19.Obj) == (Wrd20.Obj)))
    goto label_28;

DEFLABEL (label_27)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_30;
  Wrd27 = Wrd31;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_19);
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_21])), (Wrd28.pObj));

DEFLABEL (label_22)
  (Wrd27.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_23])), (Wrd14.pObj));

DEFLABEL (label_21)
  (Wrd13.Obj) = Rvl;
  goto label_32;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_16_8);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_34;
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_7;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16_18);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_34)
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_38;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_37)
  (Wrd27.Obj) = (Rsp [5]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_36;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_35)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  goto lambda_7;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16_12);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_36)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define TAG_17_6 1
#define LABEL_17_7 7
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define EXECUTE_CACHE_17_8 9
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_17_4);
      goto adjoiner_2;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (adjoiner_5)
DEFLABEL (adjoiner_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (Rsp [1]);
  goto label_7;

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define LABEL_18_10 7
#define LABEL_18_7 9
#define TAG_18_8 3
#define LABEL_18_12 11
#define ENVIRONMENT_LABEL_18_3 23
#define DEBUGGING_LABEL_18_2 22
#define EXECUTE_CACHE_18_13 13
#define EXECUTE_CACHE_18_11 15
#define EXECUTE_CACHE_18_9 17
#define FREE_REFERENCE_18_1 20
#define FREE_REFERENCE_18_0 21
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_18_4);
      goto entry_unadviser_3;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_18_10);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_18_12);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entry_unadviser_8)
DEFLABEL (entry_unadviser_3)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_7])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_12;
  Wrd7 = Wrd11;

DEFLABEL (label_11)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_10])), (Wrd8.pObj));

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_11;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_18_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_13]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_12])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define TAG_19_6 1
#define LABEL_19_10 7
#define LABEL_19_7 9
#define TAG_19_8 3
#define LABEL_19_12 11
#define ENVIRONMENT_LABEL_19_3 23
#define DEBUGGING_LABEL_19_2 22
#define EXECUTE_CACHE_19_13 13
#define EXECUTE_CACHE_19_11 15
#define EXECUTE_CACHE_19_9 17
#define FREE_REFERENCE_19_1 20
#define FREE_REFERENCE_19_0 21
#define FREE_REFERENCES_LABEL_19_0 12
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_19_4);
      goto exit_unadviser_3;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_19_10);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_19_12);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (exit_unadviser_8)
DEFLABEL (exit_unadviser_3)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_7])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_19_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_12;
  Wrd10 = Wrd14;

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_10])), (Wrd11.pObj));

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_11;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_19_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_12])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define TAG_20_6 1
#define LABEL_20_13 7
#define LABEL_20_7 9
#define TAG_20_8 3
#define LABEL_20_10 11
#define LABEL_20_16 13
#define LABEL_20_11 15
#define TAG_20_12 6
#define LABEL_20_19 17
#define LABEL_20_17 19
#define TAG_20_18 8
#define LABEL_20_20 21
#define ENVIRONMENT_LABEL_20_3 34
#define DEBUGGING_LABEL_20_2 33
#define EXECUTE_CACHE_20_15 23
#define EXECUTE_CACHE_20_14 25
#define EXECUTE_CACHE_20_9 27
#define FREE_REFERENCE_20_2 30
#define FREE_REFERENCE_20_1 31
#define FREE_REFERENCE_20_0 32
#define FREE_REFERENCES_LABEL_20_0 22
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_20_4);
      goto both_unadviser_5;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_20_13);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_20_16);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_20_11);
      goto lambda_15;

    case 7:
      current_block = (Rpc - LABEL_20_19);
      goto label_9;

    case 8:
      current_block = (Rpc - LABEL_20_17);
      goto lambda_16;

    case 9:
      current_block = (Rpc - LABEL_20_20);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (both_unadviser_12)
DEFLABEL (both_unadviser_5)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_7])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  ((Wrd17.pObj) [2]) = (Wrd11.Obj);
  ((Wrd17.pObj) [3]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd13.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_20_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_11])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_20;
  Wrd14 = Wrd18;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_18;
  Wrd5 = Wrd9;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_17])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_16])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_13])), (Wrd15.pObj));

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_20_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_15]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_20_11);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_22;
  Wrd7 = Wrd11;

DEFLABEL (label_21)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_15]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_19])), (Wrd8.pObj));

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_21;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_20_17);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_2]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_24;
  Wrd10 = Wrd14;

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_15]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_20])), (Wrd11.pObj));

DEFLABEL (label_10)
  (Wrd10.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define TAG_21_6 1
#define LABEL_21_7 7
#define LABEL_21_8 9
#define ENVIRONMENT_LABEL_21_3 16
#define DEBUGGING_LABEL_21_2 15
#define OBJECT_21_1 14
#define OBJECT_21_0 13
#define EXECUTE_CACHE_21_9 11
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_21_4);
      goto unadviser_4;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unadviser_7)
DEFLABEL (unadviser_4)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x102, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_21_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_21_0])))
    goto label_10;

DEFLABEL (label_9)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_7);
  Rvl = (current_block [OBJECT_21_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define TAG_22_6 1
#define LABEL_22_7 7
#define LABEL_22_9 9
#define LABEL_22_11 11
#define LABEL_22_12 13
#define LABEL_22_10 15
#define LABEL_22_13 17
#define LABEL_22_15 19
#define LABEL_22_17 21
#define TAG_22_18 9
#define ENVIRONMENT_LABEL_22_3 36
#define DEBUGGING_LABEL_22_2 35
#define OBJECT_22_0 34
#define EXECUTE_CACHE_22_19 23
#define EXECUTE_CACHE_22_16 25
#define EXECUTE_CACHE_22_14 27
#define EXECUTE_CACHE_22_8 29
#define FREE_REFERENCE_22_1 32
#define FREE_REFERENCE_22_0 33
#define FREE_REFERENCES_LABEL_22_0 22
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_22_4);
      goto primitive_unadvise_13;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto lambda_19;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_22_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_22_13);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_22_15);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_22_17);
      goto lambda_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_unadvise_18)
DEFLABEL (primitive_unadvise_13)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_22_5);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_22_0]))
    goto label_28;

DEFLABEL (label_27)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_22_0]))
    goto label_24;

DEFLABEL (label_23)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_22_0]);
  if ((Wrd9.Obj) == (Wrd10.Obj))
    goto label_22;

DEFLABEL (label_21)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [4]);
  (Rsp [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_17])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Rsp [4]) = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_19]));

DEFLABEL (label_22)
  (Wrd22.Obj) = (Rsp [1]);
  if (! ((Wrd22.Obj) == (Wrd10.Obj)))
    goto label_21;
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [4]);
  (Rsp [4]) = (Wrd24.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_16]));

DEFLABEL (label_24)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_26;
  Wrd34 = Wrd38;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_12);
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_15])), (Wrd35.pObj));

DEFLABEL (label_15)
  (Wrd34.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [4]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_30;
  Wrd46 = Wrd50;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_11);
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_13])), (Wrd47.pObj));

DEFLABEL (label_16)
  (Wrd46.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_22_17);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd15.Obj) = ((Wrd11.pObj) [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 6
#define DEBUGGING_LABEL_23_2 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto nullifier_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nullifier_3)
DEFLABEL (nullifier_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  Rvl = (current_block [OBJECT_23_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define ENVIRONMENT_LABEL_24_3 10
#define DEBUGGING_LABEL_24_2 9
#define EXECUTE_CACHE_24_7 7
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_24_4);
      goto disjoiner_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (disjoiner_4)
DEFLABEL (disjoiner_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define ENVIRONMENT_LABEL_25_3 12
#define DEBUGGING_LABEL_25_2 11
#define EXECUTE_CACHE_25_7 7
#define EXECUTE_CACHE_25_6 9
#define FREE_REFERENCES_LABEL_25_0 6
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto specific_entry_unadviser_1;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (specific_entry_unadviser_4)
DEFLABEL (specific_entry_unadviser_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 12
#define DEBUGGING_LABEL_26_2 11
#define EXECUTE_CACHE_26_7 7
#define EXECUTE_CACHE_26_6 9
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto specific_exit_unadviser_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (specific_exit_unadviser_4)
DEFLABEL (specific_exit_unadviser_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define ENVIRONMENT_LABEL_27_3 14
#define DEBUGGING_LABEL_27_2 13
#define EXECUTE_CACHE_27_8 9
#define EXECUTE_CACHE_27_6 11
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto specific_both_unadviser_2;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (specific_both_unadviser_5)
DEFLABEL (specific_both_unadviser_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 12
#define DEBUGGING_LABEL_28_2 11
#define EXECUTE_CACHE_28_7 7
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto trace_entry_advice_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trace_entry_advice_4)
DEFLABEL (trace_entry_advice_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define ENVIRONMENT_LABEL_29_3 14
#define DEBUGGING_LABEL_29_2 13
#define EXECUTE_CACHE_29_8 9
#define EXECUTE_CACHE_29_7 11
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_29_4);
      goto trace_exit_advice_2;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trace_exit_advice_5)
DEFLABEL (trace_exit_advice_2)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_5);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_7 7
#define LABEL_30_10 9
#define LABEL_30_8 11
#define LABEL_30_13 13
#define LABEL_30_16 15
#define LABEL_30_11 17
#define LABEL_30_18 19
#define LABEL_30_15 21
#define LABEL_30_21 23
#define LABEL_30_17 25
#define LABEL_30_19 27
#define LABEL_30_26 29
#define LABEL_30_22 31
#define LABEL_30_27 33
#define LABEL_30_28 35
#define LABEL_30_29 37
#define LABEL_30_30 39
#define LABEL_30_25 41
#define LABEL_30_24 43
#define LABEL_30_32 45
#define LABEL_30_34 47
#define LABEL_30_35 49
#define LABEL_30_39 51
#define LABEL_30_36 53
#define LABEL_30_37 55
#define LABEL_30_41 57
#define LABEL_30_40 59
#define LABEL_30_42 61
#define LABEL_30_44 63
#define LABEL_30_45 65
#define LABEL_30_43 67
#define LABEL_30_46 69
#define LABEL_30_47 71
#define LABEL_30_48 73
#define ENVIRONMENT_LABEL_30_3 112
#define DEBUGGING_LABEL_30_2 111
#define OBJECT_30_17 110
#define OBJECT_30_16 109
#define OBJECT_30_15 108
#define OBJECT_30_14 107
#define OBJECT_30_13 106
#define OBJECT_30_12 105
#define OBJECT_30_11 104
#define OBJECT_30_10 103
#define OBJECT_30_9 102
#define OBJECT_30_8 101
#define OBJECT_30_7 100
#define OBJECT_30_6 99
#define OBJECT_30_5 98
#define OBJECT_30_4 97
#define OBJECT_30_3 96
#define OBJECT_30_2 95
#define OBJECT_30_1 94
#define OBJECT_30_0 93
#define EXECUTE_CACHE_30_38 75
#define EXECUTE_CACHE_30_33 77
#define EXECUTE_CACHE_30_31 79
#define EXECUTE_CACHE_30_23 81
#define EXECUTE_CACHE_30_20 83
#define EXECUTE_CACHE_30_14 85
#define EXECUTE_CACHE_30_12 87
#define EXECUTE_CACHE_30_9 89
#define EXECUTE_CACHE_30_6 91
#define FREE_REFERENCES_LABEL_30_0 74
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd22;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd54;
  machine_word Wrd6;
  machine_word Wrd50;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_30_4);
      goto trace_display_43;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_30_10);
      goto label_45;

    case 4:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_30_16);
      goto label_46;

    case 7:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_30_18);
      goto label_47;

    case 9:
      current_block = (Rpc - LABEL_30_15);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_30_21);
      goto lambda_11;

    case 11:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_19;

    case 12:
      current_block = (Rpc - LABEL_30_19);
      goto continuation_16;

    case 13:
      current_block = (Rpc - LABEL_30_26);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_30_22);
      goto continuation_4;

    case 15:
      current_block = (Rpc - LABEL_30_27);
      goto label_51;

    case 16:
      current_block = (Rpc - LABEL_30_28);
      goto label_48;

    case 17:
      current_block = (Rpc - LABEL_30_29);
      goto label_49;

    case 18:
      current_block = (Rpc - LABEL_30_30);
      goto label_50;

    case 19:
      current_block = (Rpc - LABEL_30_25);
      goto continuation_21;

    case 20:
      current_block = (Rpc - LABEL_30_24);
      goto continuation_34;

    case 21:
      current_block = (Rpc - LABEL_30_32);
      goto continuation_35;

    case 22:
      current_block = (Rpc - LABEL_30_34);
      goto label_52;

    case 23:
      current_block = (Rpc - LABEL_30_35);
      goto continuation_40;

    case 24:
      current_block = (Rpc - LABEL_30_39);
      goto lambda_33;

    case 25:
      current_block = (Rpc - LABEL_30_36);
      goto continuation_38;

    case 26:
      current_block = (Rpc - LABEL_30_37);
      goto continuation_37;

    case 27:
      current_block = (Rpc - LABEL_30_41);
      goto loop_31;

    case 28:
      current_block = (Rpc - LABEL_30_40);
      goto continuation_39;

    case 29:
      current_block = (Rpc - LABEL_30_42);
      goto continuation_23;

    case 30:
      current_block = (Rpc - LABEL_30_44);
      goto label_53;

    case 31:
      current_block = (Rpc - LABEL_30_45);
      goto label_54;

    case 32:
      current_block = (Rpc - LABEL_30_43);
      goto continuation_26;

    case 33:
      current_block = (Rpc - LABEL_30_46);
      goto label_55;

    case 34:
      current_block = (Rpc - LABEL_30_47);
      goto continuation_29;

    case 35:
      current_block = (Rpc - LABEL_30_48);
      goto label_56;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trace_display_58)
DEFLABEL (trace_display_43)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (Wrd5.Obj) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_72;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd12.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_72;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_71)
  (Wrd14.Obj) = (Rsp [4]);
  if ((Wrd14.Obj) == (current_block [OBJECT_30_0]))
    goto label_70;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_30_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_30_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_69;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_69;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_68)
  (Wrd24.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto lambda_11;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_30_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_30_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_30_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_67;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - 11L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_67;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_66)
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto lambda_11;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_30_17);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (current_block [OBJECT_30_6]))
    goto label_65;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_20]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_30_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_33]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_30_32);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_64;
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd7.Lng) > 10L)
    goto label_63;

DEFLABEL (label_62)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_35]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.pObj) = (& (Rsp [2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto lambda_33;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_30_35);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_7]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (label_63)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_36]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.pObj) = (& (Rsp [2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_37]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_30_13]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_38]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_30_37);
  (* (--Rsp)) = Rvl;
  goto lambda_33;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_30_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_20]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_30_40);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_15]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (label_64)
  (Wrd29.Obj) = (current_block [OBJECT_30_13]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_34]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_52)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_63;

DEFLABEL (label_65)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_30_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_30_24);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_20]));

DEFLABEL (label_67)
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (current_block [OBJECT_30_5]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (current_block [OBJECT_30_4]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_70)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (label_72)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (lambda_59)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_30_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_23]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_22);
  (* (--Rsp)) = Rvl;
  (Wrd50.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd50.uLng) == 1))
    goto label_81;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_75;

DEFLABEL (label_80)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_26]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_30_11]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_79;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd34.Lng) = ((Wrd36.Lng) - 3L);
  if (! (LONG_TO_FIXNUM_P (Wrd34.Lng)))
    goto label_79;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_78)
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_77;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [1]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_76)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_31]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_26);

DEFLABEL (label_75)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_74;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_73)
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);
  (Rsp [3]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (label_74)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_28]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_10]), 1);

DEFLABEL (label_48)
  (Wrd9.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_77)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_30]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_10]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd27.Obj) = (Rsp [5]);
  (Wrd28.Obj) = (current_block [OBJECT_30_12]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_29]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_27]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_9]), 1);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  goto label_80;

DEFLABEL (lambda_60)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_30_39);
  (Wrd5.Obj) = (current_block [OBJECT_30_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_31;

DEFLABEL (loop_61)
DEFLABEL (loop_31)
  INTERRUPT_CHECK (26, LABEL_30_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_30_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.pObj) = (& ((Wrd9.pObj) [1]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = ((Wrd9.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_90;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd28.Lng) - 11L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_90;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_89)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_88;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_87)
  goto lambda_11;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30_43);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_86;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_85)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_30_6])))
    goto label_82;
  Rvl = (current_block [OBJECT_30_16]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_47]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_20]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_30_47);
  (Wrd5.Obj) = (current_block [OBJECT_30_17]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_84;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_83)
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_31;

DEFLABEL (label_84)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_48]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_10]), 1);

DEFLABEL (label_56)
  (Wrd6.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_46]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_10]), 1);

DEFLABEL (label_55)
  (Wrd5.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_45]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_9]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);
  (Wrd16.Obj) = (current_block [OBJECT_30_5]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_44]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_89;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 12
#define DEBUGGING_LABEL_31_2 11
#define EXECUTE_CACHE_31_6 7
#define FREE_REFERENCE_31_0 10
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto trace_entry_0;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trace_entry_4)
DEFLABEL (trace_entry_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 12
#define DEBUGGING_LABEL_32_2 11
#define EXECUTE_CACHE_32_6 7
#define FREE_REFERENCE_32_0 10
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto trace_exit_0;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trace_exit_4)
DEFLABEL (trace_exit_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define ENVIRONMENT_LABEL_33_3 15
#define DEBUGGING_LABEL_33_2 14
#define EXECUTE_CACHE_33_7 9
#define FREE_REFERENCE_33_1 12
#define FREE_REFERENCE_33_0 13
#define FREE_REFERENCES_LABEL_33_0 8
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_33_4);
      goto trace_both_0;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trace_both_5)
DEFLABEL (trace_both_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_7 5
#define TAG_34_8 1
#define LABEL_34_5 7
#define TAG_34_6 2
#define LABEL_34_11 9
#define LABEL_34_12 11
#define LABEL_34_13 13
#define LABEL_34_14 15
#define LABEL_34_15 17
#define LABEL_34_16 19
#define ENVIRONMENT_LABEL_34_3 34
#define DEBUGGING_LABEL_34_2 33
#define OBJECT_34_1 32
#define OBJECT_34_0 31
#define EXECUTE_CACHE_34_10 21
#define EXECUTE_CACHE_34_9 23
#define FREE_REFERENCE_34_1 26
#define FREE_REFERENCE_34_0 27
#define FREE_ASSIGNMENT_34_1 29
#define FREE_ASSIGNMENT_34_0 30
#define FREE_REFERENCES_LABEL_34_0 20
#define NUMBER_OF_LINKER_SECTIONS_34_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_34_4);
      goto break_entry_advice_15;

    case 1:
      current_block = (Rpc - LABEL_34_7);
      goto lambda_26;

    case 2:
      current_block = (Rpc - LABEL_34_5);
      goto swapB_25;

    case 3:
      current_block = (Rpc - LABEL_34_11);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_34_12);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_34_13);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_34_14);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_34_15);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_34_16);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (break_entry_advice_24)
DEFLABEL (break_entry_advice_15)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd8.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_5])));
  Rhp += 2;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  Wrd29 = Wrd31;
  ((Wrd29.pObj) [2]) = (Wrd7.Obj);
  ((Wrd29.pObj) [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_7])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  (Wrd21.Obj) = (Rsp [5]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  ((Wrd20.pObj) [3]) = (Wrd8.Obj);
  ((Wrd20.pObj) [4]) = (Wrd12.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd32.Obj);
  (Rsp [5]) = (Wrd32.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_34_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (swapB_25)
  CLOSURE_HEADER (LABEL_34_5);

DEFLABEL (swapB_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  Wrd5 = Wrd9;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_34_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_39)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_34_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_36)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  Wrd57 = Wrd61;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_34_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_30)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_34_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_34_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_34_16])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_22)
  goto label_27;

DEFLABEL (label_32)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_34_15])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_21)
  goto label_30;

DEFLABEL (label_35)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_34_14])), (Wrd58.pObj));

DEFLABEL (label_20)
  (Wrd57.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_38)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_34_13])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_19)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_34_12])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_18)
  goto label_39;

DEFLABEL (label_44)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_34_11])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_8 7
#define TAG_35_9 2
#define LABEL_35_6 9
#define TAG_35_7 3
#define LABEL_35_12 11
#define LABEL_35_13 13
#define LABEL_35_14 15
#define LABEL_35_15 17
#define LABEL_35_16 19
#define LABEL_35_17 21
#define LABEL_35_18 23
#define LABEL_35_19 25
#define LABEL_35_20 27
#define ENVIRONMENT_LABEL_35_3 44
#define DEBUGGING_LABEL_35_2 43
#define OBJECT_35_1 42
#define OBJECT_35_0 41
#define EXECUTE_CACHE_35_11 29
#define EXECUTE_CACHE_35_10 31
#define FREE_REFERENCE_35_2 34
#define FREE_REFERENCE_35_1 35
#define FREE_REFERENCE_35_0 36
#define FREE_ASSIGNMENT_35_2 38
#define FREE_ASSIGNMENT_35_1 39
#define FREE_ASSIGNMENT_35_0 40
#define FREE_REFERENCES_LABEL_35_0 28
#define NUMBER_OF_LINKER_SECTIONS_35_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_35_4);
      goto break_exit_advice_22;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_8);
      goto lambda_36;

    case 3:
      current_block = (Rpc - LABEL_35_6);
      goto swapB_35;

    case 4:
      current_block = (Rpc - LABEL_35_12);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_35_13);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_35_14);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_35_15);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_35_16);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_35_17);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_35_18);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_35_19);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_35_20);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (break_exit_advice_34)
DEFLABEL (break_exit_advice_22)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-1]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd43.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_6])));
  Rhp += 3;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  Wrd41 = Wrd43;
  ((Wrd41.pObj) [2]) = (Wrd10.Obj);
  ((Wrd41.pObj) [3]) = (Wrd14.Obj);
  ((Wrd41.pObj) [4]) = (Wrd18.Obj);
  (Rsp [3]) = (Wrd44.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_8])));
  Rhp += 4;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd31 = Wrd24;
  (Wrd32.Obj) = (Rsp [8]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  ((Wrd31.pObj) [3]) = (Wrd11.Obj);
  ((Wrd31.pObj) [4]) = (Wrd15.Obj);
  ((Wrd31.pObj) [5]) = (Wrd19.Obj);
  (Rsp [2]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd44.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_35_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [4]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (swapB_35)
  CLOSURE_HEADER (LABEL_35_6);

DEFLABEL (swapB_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  Wrd5 = Wrd9;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_58)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_57;

DEFLABEL (label_56)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_55)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_54;

DEFLABEL (label_53)
  Wrd57 = Wrd61;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_49)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [3]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_48;

DEFLABEL (label_47)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_46)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_45;

DEFLABEL (label_44)
  Wrd109 = Wrd113;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_40)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [2]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_37)
  Rvl = (current_block [OBJECT_35_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_38;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_20])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_32)
  goto label_37;

DEFLABEL (label_42)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_19])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_31)
  goto label_40;

DEFLABEL (label_45)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_44;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_35_18])), (Wrd110.pObj));

DEFLABEL (label_30)
  (Wrd109.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_48)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_47;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_17])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_29)
  goto label_46;

DEFLABEL (label_51)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_50;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_16])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_28)
  goto label_49;

DEFLABEL (label_54)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_53;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_35_15])), (Wrd58.pObj));

DEFLABEL (label_27)
  (Wrd57.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_57)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_56;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_26)
  goto label_55;

DEFLABEL (label_60)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_25)
  goto label_58;

DEFLABEL (label_63)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_62;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_35_12])), (Wrd6.pObj));

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_61;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_10 7
#define LABEL_36_6 9
#define LABEL_36_7 11
#define TAG_36_8 4
#define LABEL_36_13 13
#define ENVIRONMENT_LABEL_36_3 26
#define DEBUGGING_LABEL_36_2 25
#define OBJECT_36_0 24
#define EXECUTE_CACHE_36_12 15
#define EXECUTE_CACHE_36_11 17
#define EXECUTE_CACHE_36_9 19
#define FREE_REFERENCE_36_1 22
#define FREE_REFERENCE_36_0 23
#define FREE_REFERENCES_LABEL_36_0 14
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_36_4);
      goto break_rep_4;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_36_10);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_36_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_36_7);
      goto lambda_10;

    case 5:
      current_block = (Rpc - LABEL_36_13);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (break_rep_9)
DEFLABEL (break_rep_4)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_7])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_12;
  Wrd7 = Wrd11;

DEFLABEL (label_11)
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd13.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_10])), (Wrd8.pObj));

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_11;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_36_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_14;
  Wrd13 = Wrd17;

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 2);

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_13])), (Wrd14.pObj));

DEFLABEL (label_7)
  (Wrd13.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 12
#define DEBUGGING_LABEL_37_2 11
#define EXECUTE_CACHE_37_6 7
#define FREE_REFERENCE_37_0 10
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto break_entry_0;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (break_entry_4)
DEFLABEL (break_entry_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 12
#define DEBUGGING_LABEL_38_2 11
#define EXECUTE_CACHE_38_6 7
#define FREE_REFERENCE_38_0 10
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto break_exit_0;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (break_exit_4)
DEFLABEL (break_exit_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define ENVIRONMENT_LABEL_39_3 15
#define DEBUGGING_LABEL_39_2 14
#define EXECUTE_CACHE_39_7 9
#define FREE_REFERENCE_39_1 12
#define FREE_REFERENCE_39_0 13
#define FREE_REFERENCES_LABEL_39_0 8
#define NUMBER_OF_LINKER_SECTIONS_39_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
advice_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_39_4);
      goto break_both_0;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (break_both_5)
DEFLABEL (break_both_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_6 7
#define LABEL_12 9
#define LABEL_7 11
#define LABEL_10 13
#define LABEL_16 15
#define LABEL_17 17
#define LABEL_11 19
#define LABEL_14 21
#define LABEL_15 23
#define LABEL_19 25
#define LABEL_21 27
#define LABEL_20 29
#define LABEL_24 31
#define LABEL_22 33
#define LABEL_28 35
#define LABEL_23 37
#define LABEL_26 39
#define LABEL_32 41
#define LABEL_33 43
#define LABEL_27 45
#define LABEL_30 47
#define LABEL_31 49
#define LABEL_35 51
#define LABEL_38 53
#define LABEL_36 55
#define LABEL_41 57
#define LABEL_37 59
#define LABEL_39 61
#define LABEL_43 63
#define LABEL_44 65
#define LABEL_40 67
#define LABEL_42 69
#define LABEL_45 71
#define LABEL_46 73
#define LABEL_47 75
#define ENVIRONMENT_LABEL_3 119
#define DEBUGGING_LABEL_2 118
#define PURIFICATION_ROOT 117
#define OBJECT_17 116
#define OBJECT_16 115
#define OBJECT_15 114
#define OBJECT_14 113
#define OBJECT_13 112
#define OBJECT_12 111
#define OBJECT_11 110
#define OBJECT_10 109
#define OBJECT_9 108
#define OBJECT_8 107
#define OBJECT_7 106
#define OBJECT_6 105
#define OBJECT_5 104
#define OBJECT_4 103
#define OBJECT_3 102
#define OBJECT_2 101
#define OBJECT_1 100
#define OBJECT_0 99
#define EXECUTE_CACHE_34 77
#define EXECUTE_CACHE_29 79
#define EXECUTE_CACHE_25 81
#define EXECUTE_CACHE_18 83
#define EXECUTE_CACHE_13 85
#define EXECUTE_CACHE_9 87
#define FREE_REFERENCE_5 90
#define FREE_REFERENCE_4 91
#define FREE_REFERENCE_3 92
#define FREE_REFERENCE_2 93
#define FREE_REFERENCE_1 94
#define FREE_REFERENCE_0 95
#define GLOBAL_EXECUTE_CACHE_5 97
#define FREE_REFERENCES_LABEL_0 76
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
advice_so_76800ab1e942a353 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_8);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_16);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_17);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_11);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_24);
      goto label_28;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_28);
      goto label_29;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_9;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_12;

    case 19:
      current_block = (Rpc - LABEL_32);
      goto label_30;

    case 20:
      current_block = (Rpc - LABEL_33);
      goto label_31;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto continuation_11;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto continuation_14;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_13;

    case 24:
      current_block = (Rpc - LABEL_35);
      goto continuation_15;

    case 25:
      current_block = (Rpc - LABEL_38);
      goto label_32;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto continuation_17;

    case 27:
      current_block = (Rpc - LABEL_41);
      goto label_33;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_16;

    case 29:
      current_block = (Rpc - LABEL_39);
      goto continuation_19;

    case 30:
      current_block = (Rpc - LABEL_43);
      goto label_34;

    case 31:
      current_block = (Rpc - LABEL_44);
      goto label_35;

    case 32:
      current_block = (Rpc - LABEL_40);
      goto continuation_18;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_20;

    case 34:
      current_block = (Rpc - LABEL_45);
      goto label_38;

    case 35:
      current_block = (Rpc - LABEL_46);
      goto label_39;

    case 36:
      current_block = (Rpc - LABEL_47);
      goto expression_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_22)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_46])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_39)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_38)
  {
    static const short sections [] =
      {
	0,
	2,
	2,
	2,
	2,
	3,
	3,
	2,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	2,
	1,
	2,
	2,
	2,
	1,
	2,
	1,
	2,
	2,
	1,
	1,
	1,
	3,
	1,
	2,
	1,
	1,
	1,
	1,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 39)
      goto label_37;
    blocks = (current_block [OBJECT_17]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_45])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_37)
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
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_65;
  Wrd11 = Wrd15;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_63;
  Wrd11 = Wrd15;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_61;
  Wrd11 = Wrd15;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_59;
  Wrd17 = Wrd21;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_57;
  Wrd8 = Wrd12;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_55;
  Wrd11 = Wrd15;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_53;
  Wrd11 = Wrd15;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_51;
  Wrd11 = Wrd15;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_49;
  Wrd17 = Wrd21;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_47;
  Wrd11 = Wrd15;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_37);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_45;
  Wrd11 = Wrd15;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_43;
  Wrd10 = Wrd14;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_41;
  Wrd16 = Wrd20;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_42);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd17.pObj));

DEFLABEL (label_35)
  (Wrd16.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43])), (Wrd11.pObj));

DEFLABEL (label_34)
  (Wrd10.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd12.pObj));

DEFLABEL (label_33)
  (Wrd11.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd12.pObj));

DEFLABEL (label_32)
  (Wrd11.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd18.pObj));

DEFLABEL (label_31)
  (Wrd17.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd12.pObj));

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd12.pObj));

DEFLABEL (label_29)
  (Wrd11.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd12.pObj));

DEFLABEL (label_28)
  (Wrd11.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd9.pObj));

DEFLABEL (label_27)
  (Wrd8.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd18.pObj));

DEFLABEL (label_26)
  (Wrd17.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd12.pObj));

DEFLABEL (label_25)
  (Wrd11.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd12.pObj));

DEFLABEL (label_24)
  (Wrd11.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd12.pObj));

DEFLABEL (label_23)
  (Wrd11.Obj) = Rvl;
  goto label_64;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_advice_so_76800ab1e942a353 [39] =
  {
    { "advice_so_code_1", 5, advice_so_code_1 },
    { "advice_so_code_2", 2, advice_so_code_2 },
    { "advice_so_code_3", 2, advice_so_code_3 },
    { "advice_so_code_4", 2, advice_so_code_4 },
    { "advice_so_code_5", 2, advice_so_code_5 },
    { "advice_so_code_6", 6, advice_so_code_6 },
    { "advice_so_code_7", 4, advice_so_code_7 },
    { "advice_so_code_8", 1, advice_so_code_8 },
    { "advice_so_code_9", 22, advice_so_code_9 },
    { "advice_so_code_10", 5, advice_so_code_10 },
    { "advice_so_code_11", 3, advice_so_code_11 },
    { "advice_so_code_12", 3, advice_so_code_12 },
    { "advice_so_code_13", 4, advice_so_code_13 },
    { "advice_so_code_14", 4, advice_so_code_14 },
    { "advice_so_code_15", 4, advice_so_code_15 },
    { "advice_so_code_16", 15, advice_so_code_16 },
    { "advice_so_code_17", 3, advice_so_code_17 },
    { "advice_so_code_18", 5, advice_so_code_18 },
    { "advice_so_code_19", 5, advice_so_code_19 },
    { "advice_so_code_20", 10, advice_so_code_20 },
    { "advice_so_code_21", 4, advice_so_code_21 },
    { "advice_so_code_22", 10, advice_so_code_22 },
    { "advice_so_code_23", 1, advice_so_code_23 },
    { "advice_so_code_24", 2, advice_so_code_24 },
    { "advice_so_code_25", 2, advice_so_code_25 },
    { "advice_so_code_26", 2, advice_so_code_26 },
    { "advice_so_code_27", 3, advice_so_code_27 },
    { "advice_so_code_28", 2, advice_so_code_28 },
    { "advice_so_code_29", 3, advice_so_code_29 },
    { "advice_so_code_30", 36, advice_so_code_30 },
    { "advice_so_code_31", 2, advice_so_code_31 },
    { "advice_so_code_32", 2, advice_so_code_32 },
    { "advice_so_code_33", 3, advice_so_code_33 },
    { "advice_so_code_34", 9, advice_so_code_34 },
    { "advice_so_code_35", 13, advice_so_code_35 },
    { "advice_so_code_36", 6, advice_so_code_36 },
    { "advice_so_code_37", 2, advice_so_code_37 },
    { "advice_so_code_38", 2, advice_so_code_38 },
    { "advice_so_code_39", 3, advice_so_code_39 }
  };

int
decl_advice_so_76800ab1e942a353 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_advice_so_76800ab1e942a353);
  return (0);
}

DECLARE_COMPILED_CODE ("advice.so", 37, decl_advice_so_76800ab1e942a353, advice_so_76800ab1e942a353)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_advice_so_data_76800ab1e942a353 [5070] =
  "\x91\x01\x45\xce\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d\xb9"
  "\x0d\xba\x25\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbb\x1d\xb0\x82\x88\x0d\xbc\x24\x28\x0d\xbd\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x83\x88\x0d\xbf\x24\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0d\x1c\x24\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\xc1\x1c\xc1"
  "\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x0d\x1c\x24"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x1b\x0c\x0d\x1b\x0c\x1d\x0d\x0c\x0d\x1c\x25\x1b"
  "\x24\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d"
  "\x1c\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\xb5\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\xb5\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x02\x88\x0d\x1c\x24\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x1b\x1d\xb2\xb1\x24\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\xb1\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb2"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb2\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x1d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\xb1\xb2\x24\x28\x1b\x28\x0d\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x0c\x0c\x02\x83\x0f\x1b"
  "\x1b\x0c\x0c\x08\x02\x82\x02\x0c\x0c\x1d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\xb7\xb4\x25\xb7\xb4\x24"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x0c\xb7\xb4\x1b\x25\xb7\xb4\x1b\x24\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\x1b\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xb8\x17\x1c\x88\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b"
  "\x1b\x1b\x9d\xb0\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d"
  "\x0d\x0d\x0d\x0d\x0d\x1c\x0d\x0d\x1b\x1b\x1b\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x17\x0d\xc3\x0d\x1b\x0d\x1c\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d"
  "\x0d\x1b\xb7\xb4\x0d\xb2\xb1\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb5\x2a\x1b\x2a\x1b\x2a\x06\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x1e\x1e\x1e\xb3\x2a\x1e\x1e\x17\x28"
  "\x0d\x26\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x61\x64"
  "\x76\x69\x63\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x18"
  "\x65\x6e\x74\x72\x79\x2d\x61\x64\x76\x69\x63\x65\x2d\x70\x6f\x70"
  "\x75\x6c\x61\x74\x69\x6f\x6e\x17\x65\x78\x69\x74\x2d\x61\x64\x76"
  "\x69\x63\x65\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x03\x02"
  "\x10\x6d\x61\x6b\x65\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e"
  "\x02\x2a\x0c\x81\x81\x02\x29\x0a\x81\x81\x02\x28\x08\x81\x81\x02"
  "\x27\x06\x81\x81\x02\x26\x04\x82\x02\x0b\x15\x02\x0e\x74\x68\x65"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x02\x03\x0a\x6c\x69\x73"
  "\x74\x2d\x63\x6f\x70\x79\x02\x2c\x06\x81\x81\x02\x2b\x04\x82\x02"
  "\x05\x0d\x02\x0e\x74\x68\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x02\x2e\x06\x81\x81\x02\x2d\x04\x82\x02\x05\x0a\x09\x02\x0b"
  "\x74\x68\x65\x2d\x72\x65\x73\x75\x6c\x74\x0a\x02\x30\x06\x81\x81"
  "\x02\x2f\x04\x82\x02\x05\x0a\x0b\x02\x03\x11\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x6c\x61\x6d\x62\x64\x61\x0c\x03\x0e\x6c\x61"
  "\x6d\x62\x64\x61\x2d\x61\x64\x76\x69\x63\x65\x0d\x03\x32\x06\x81"
  "\x83\x02\x31\x04\x83\x04\x05\x0d\x0e\x02\x0d\x04\x63\x64\x72\x0f"
  "\x04\x63\x61\x72\x10\x04\x1a\x6c\x61\x6d\x62\x64\x61\x2d\x77\x72"
  "\x61\x70\x70\x65\x72\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73"
  "\x11\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e"
  "\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x03\x38\x0e\x81\x85"
  "\x02\x37\x0c\x81\x87\x02\x36\x0a\x81\x87\x02\x35\x08\x81\x87\x02"
  "\x34\x06\x81\x87\x02\x33\x04\x83\x04\x0d\x18\x12\x02\x08\x10\x1f"
  "\x68\x6f\x6f\x6b\x2f\x61\x64\x76\x69\x73\x65\x64\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x77\x72\x61\x70\x70\x65\x72\x13\x02"
  "\x02\x15\x6d\x61\x6b\x65\x2d\x74\x68\x65\x2d\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x04\x11\x6d\x61\x6b\x65\x2d\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x03\x3c\x0a\x81\x83\x02\x3b\x08"
  "\x81\x85\x02\x3a\x06\x81\x81\x02\x39\x04\x82\x02\x09\x15\x14\x02"
  "\x09\x03\x1a\x61\x64\x76\x69\x73\x65\x64\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x77\x72\x61\x70\x70\x65\x72\x15\x02\x3d\x04"
  "\x83\x04\x03\x16\x02\x0a\x1f\x52\x65\x74\x75\x72\x6e\x20\x66\x72"
  "\x6f\x6d\x20\x61\x64\x76\x69\x73\x65\x64\x20\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2e\x0f\x21\x43\x6f\x6e\x74\x69\x6e\x75\x65\x20"
  "\x77\x69\x74\x68\x20\x61\x64\x76\x69\x73\x65\x64\x20\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2e\x09\x63\x6f\x6e\x74\x69\x6e\x75\x65"
  "\x10\x10\x50\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x76\x61\x6c\x75"
  "\x65\x02\x0a\x75\x73\x65\x2d\x76\x61\x6c\x75\x65\x2b\x52\x65\x74"
  "\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d"
  "\x20\x74\x68\x65\x20\x61\x64\x76\x69\x73\x65\x64\x20\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2e\x14\x61\x64\x76\x69\x63\x65\x2d\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x17\x02\x17\x02\x03"
  "\x19\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f"
  "\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x03\x19\x69\x63\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x03\x0c\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68"
  "\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x04\x11\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77"
  "\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x11\x07\x0d\x77\x69"
  "\x74\x68\x2d\x72\x65\x73\x74\x61\x72\x74\x03\x20\x70\x72\x6f\x6d"
  "\x70\x74\x2d\x66\x6f\x72\x2d\x65\x76\x61\x6c\x75\x61\x74\x65\x64"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x04\x09\x66\x6f\x72"
  "\x2d\x65\x61\x63\x68\x04\x0b\x73\x63\x6f\x64\x65\x2d\x65\x76\x61"
  "\x6c\x05\x14\x77\x69\x74\x68\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x72"
  "\x65\x73\x74\x61\x72\x74\x0c\x53\x2e\x81\x83\x02\x52\x2c\x81\x85"
  "\x02\x51\x2a\x81\x85\x02\x50\x28\x81\x83\x02\x4f\x26\x81\x87\x02"
  "\x4e\x24\x81\x83\x02\x4d\x22\x81\x85\x02\x4c\x20\x81\x83\x02\x4b"
  "\x1e\x81\x85\x02\x4a\x1c\x81\x83\x02\x49\x1a\x82\x02\x48\x18\x81"
  "\x83\x02\x47\x16\x81\x85\x02\x46\x14\x81\x83\x02\x45\x12\x81\x83"
  "\x02\x44\x10\x81\x83\x02\x43\x0e\x81\x85\x02\x42\x0c\x81\x87\x02"
  "\x41\x0a\x81\x87\x02\x40\x08\x81\x85\x02\x3f\x06\x81\x83\x02\x3e"
  "\x04\x83\x04\x2d\x54\x18\x02\x0b\x03\x0b\x67\x65\x74\x2d\x61\x64"
  "\x76\x69\x63\x65\x19\x03\x03\x58\x0c\x81\x87\x02\x57\x0a\x81\x85"
  "\x02\x56\x08\x84\x06\x55\x06\x81\x83\x02\x54\x04\x83\x04\x0b\x14"
  "\x1a\x02\x0c\x03\x19\x03\x03\x5b\x08\x84\x06\x5a\x06\x81\x83\x02"
  "\x59\x04\x83\x04\x07\x0f\x1b\x02\x0d\x03\x19\x03\x03\x5e\x08\x84"
  "\x06\x5d\x06\x81\x83\x02\x5c\x04\x83\x04\x07\x0f\x02\x0e\x13\x69"
  "\x64\x65\x6e\x74\x69\x74\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x1c\x02\x03\x0c\x03\x09\x61\x64\x6a\x6f\x69\x6e\x65\x72\x1d"
  "\x05\x11\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x61\x64\x76\x69"
  "\x73\x65\x1e\x04\x62\x0a\x81\x87\x02\x61\x08\x81\x87\x02\x60\x06"
  "\x81\x85\x02\x5f\x04\x84\x06\x09\x15\x1f\x02\x0f\x1c\x02\x03\x0c"
  "\x03\x1d\x05\x1e\x04\x66\x0a\x81\x87\x02\x65\x08\x81\x87\x02\x64"
  "\x06\x81\x85\x02\x63\x04\x84\x06\x09\x15\x20\x02\x10\x03\x0c\x03"
  "\x1d\x05\x1e\x04\x6a\x0a\x81\x87\x02\x69\x08\x81\x87\x02\x68\x06"
  "\x81\x87\x02\x67\x04\x85\x08\x09\x13\x21\x02\x11\x10\x0f\x02\x03"
  "\x04\x12\x6c\x61\x6d\x62\x64\x61\x2d\x77\x72\x61\x70\x2d\x62\x6f"
  "\x64\x79\x21\x22\x02\x11\x6d\x61\x6b\x65\x2d\x61\x64\x76\x69\x63"
  "\x65\x2d\x68\x6f\x6f\x6b\x23\x04\x13\x61\x64\x64\x2d\x74\x6f\x2d"
  "\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x21\x04\x79\x20\x81\x89"
  "\x02\x78\x1e\x81\x8f\x02\x77\x1c\x81\x8f\x02\x76\x1a\x81\x89\x02"
  "\x75\x18\x81\x8b\x02\x74\x16\x81\x8b\x02\x73\x14\x81\x8b\x02\x72"
  "\x12\x81\x89\x02\x71\x10\x81\x87\x02\x70\x0e\x81\x8f\x02\x6f\x0c"
  "\x81\x8d\x02\x6e\x0a\x81\x89\x02\x6d\x08\x81\x87\x02\x6c\x06\x81"
  "\x87\x02\x6b\x04\x85\x08\x1f\x30\x24\x02\x12\x04\x05\x6d\x65\x6d"
  "\x71\x02\x7c\x08\x81\x85\x02\x7b\x06\x81\x85\x02\x7a\x04\x83\x04"
  "\x07\x0d\x25\x02\x13\x1c\x03\x04\x0a\x75\x6e\x61\x64\x76\x69\x73"
  "\x65\x72\x26\x05\x13\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x75"
  "\x6e\x61\x64\x76\x69\x73\x65\x27\x04\x14\x6d\x61\x70\x2d\x6f\x76"
  "\x65\x72\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x28\x04\x81"
  "\x01\x0c\x81\x83\x02\x80\x01\x0a\x81\x83\x02\x7f\x08\x81\x87\x02"
  "\x7e\x06\x81\x85\x02\x7d\x04\x83\x04\x0b\x18\x29\x02\x14\x1c\x03"
  "\x04\x26\x05\x27\x04\x28\x04\x86\x01\x0c\x81\x83\x02\x85\x01\x0a"
  "\x81\x83\x02\x84\x01\x08\x81\x87\x02\x83\x01\x06\x81\x85\x02\x82"
  "\x01\x04\x83\x04\x0b\x18\x2a\x02\x15\x1c\x04\x04\x26\x04\x28\x05"
  "\x27\x04\x90\x01\x16\x81\x87\x02\x8f\x01\x14\x81\x85\x02\x8e\x01"
  "\x12\x81\x87\x02\x8d\x01\x10\x81\x85\x02\x8c\x01\x0e\x81\x83\x02"
  "\x8b\x01\x0c\x81\x83\x02\x8a\x01\x0a\x81\x85\x02\x89\x01\x08\x81"
  "\x87\x02\x88\x01\x06\x81\x83\x02\x87\x01\x04\x84\x06\x15\x23\x28"
  "\x02\x16\x02\x08\x03\x0c\x02\x94\x01\x0a\x81\x87\x02\x93\x01\x08"
  "\x81\x85\x02\x92\x01\x06\x81\x85\x02\x91\x01\x04\x84\x06\x09\x11"
  "\x1c\x02\x17\x03\x03\x0d\x04\x18\x72\x65\x6d\x6f\x76\x65\x2d\x66"
  "\x72\x6f\x6d\x2d\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x21\x03"
  "\x14\x6c\x61\x6d\x62\x64\x61\x2d\x75\x6e\x77\x72\x61\x70\x2d\x62"
  "\x6f\x64\x79\x21\x04\x22\x05\x9e\x01\x16\x81\x89\x02\x9d\x01\x14"
  "\x81\x8f\x02\x9c\x01\x12\x81\x8f\x02\x9b\x01\x10\x81\x89\x02\x9a"
  "\x01\x0e\x81\x8b\x02\x99\x01\x0c\x81\x8b\x02\x98\x01\x0a\x81\x87"
  "\x02\x97\x01\x08\x81\x87\x02\x96\x01\x06\x81\x87\x02\x95\x01\x04"
  "\x85\x08\x15\x25\x22\x02\x18\x9f\x01\x04\x83\x04\x03\x0c\x02\x19"
  "\x04\x06\x64\x65\x6c\x71\x21\x02\xa1\x01\x06\x81\x85\x02\xa0\x01"
  "\x04\x83\x04\x05\x0b\x2b\x02\x1a\x03\x0a\x64\x69\x73\x6a\x6f\x69"
  "\x6e\x65\x72\x2c\x03\x10\x65\x6e\x74\x72\x79\x2d\x75\x6e\x61\x64"
  "\x76\x69\x73\x65\x72\x2d\x03\xa3\x01\x06\x81\x83\x02\xa2\x01\x04"
  "\x83\x04\x05\x0d\x2e\x02\x1b\x03\x2c\x03\x0f\x65\x78\x69\x74\x2d"
  "\x75\x6e\x61\x64\x76\x69\x73\x65\x72\x2f\x03\xa5\x01\x06\x81\x83"
  "\x02\xa4\x01\x04\x83\x04\x05\x0d\x30\x02\x1c\x03\x2c\x04\x0f\x62"
  "\x6f\x74\x68\x2d\x75\x6e\x61\x64\x76\x69\x73\x65\x72\x31\x03\xa8"
  "\x01\x08\x81\x85\x02\xa7\x01\x06\x81\x85\x02\xa6\x01\x04\x84\x06"
  "\x07\x0f\x32\x02\x1d\x02\x12\x74\x72\x61\x63\x65\x2d\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x33\x05\x0e\x74\x72\x61\x63\x65"
  "\x2d\x64\x69\x73\x70\x6c\x61\x79\x34\x03\xaa\x01\x06\x81\x87\x02"
  "\xa9\x01\x04\x85\x08\x05\x0d\x35\x02\x1e\x02\x33\x06\x34\x03\xad"
  "\x01\x08\x81\x91\x02\xac\x01\x06\x81\x89\x02\xab\x01\x04\x86\x0a"
  "\x07\x0f\x33\x02\x1f\x0b\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20"
  "\x02\x0f\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x2e\x2e\x2e\x5d"
  "\x0b\x20\x20\x20\x20\x41\x72\x67\x73\x3a\x20\x0b\x01\x2f\x0f\x10"
  "\x0b\x20\x20\x20\x20\x20\x20\x3c\x3d\x3d\x20\x02\x5d\x0c\x29\x02"
  "\x5b\x0b\x5b\x45\x6e\x74\x65\x72\x69\x6e\x67\x20\x08\x03\x0b\x66"
  "\x72\x65\x73\x68\x2d\x6c\x69\x6e\x65\x03\x13\x6f\x75\x74\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x2f\x78\x2d\x73\x69\x7a\x65\x04\x0d\x77"
  "\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x04\x04\x6d\x61\x78"
  "\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65\x04\x10\x77\x72\x69\x74\x65"
  "\x2d\x74\x6f\x2d\x73\x74\x72\x69\x6e\x67\x06\x10\x73\x75\x62\x73"
  "\x74\x72\x69\x6e\x67\x2d\x66\x69\x6c\x6c\x21\x03\x07\x6c\x65\x6e"
  "\x67\x74\x68\x04\x0a\x6c\x69\x73\x74\x2d\x68\x65\x61\x64\x0a\xd1"
  "\x01\x4a\x81\x87\x02\xd0\x01\x48\x81\x87\x02\xcf\x01\x46\x81\x87"
  "\x02\xce\x01\x44\x81\x87\x02\xcd\x01\x42\x81\x8d\x02\xcc\x01\x40"
  "\x81\x8b\x02\xcb\x01\x3e\x81\x87\x02\xca\x01\x3c\x81\x81\x02\xc9"
  "\x01\x3a\x81\x87\x02\xc8\x01\x38\x81\x85\x02\xc7\x01\x36\x81\x81"
  "\x02\xc6\x01\x34\x81\x85\x02\xc5\x01\x32\x81\x81\x02\xc4\x01\x30"
  "\x81\x81\x02\xc3\x01\x2e\x81\x81\x02\xc2\x01\x2c\x81\x8b\x02\xc1"
  "\x01\x2a\x81\x8b\x02\xc0\x01\x28\x81\x91\x02\xbf\x01\x26\x81\x8f"
  "\x02\xbe\x01\x24\x81\x89\x02\xbd\x01\x22\x81\x89\x02\xbc\x01\x20"
  "\x81\x87\x02\xbb\x01\x1e\x81\x89\x02\xba\x01\x1c\x81\x8b\x02\xb9"
  "\x01\x1a\x81\x8b\x02\xb8\x01\x18\x81\x87\x02\xb7\x01\x16\x81\x8b"
  "\x02\xb6\x01\x14\x81\x8f\x02\xb5\x01\x12\x81\x8b\x02\xb4\x01\x10"
  "\x81\x8f\x02\xb3\x01\x0e\x81\x8b\x02\xb2\x01\x0c\x81\x8b\x02\xb1"
  "\x01\x0a\x81\x89\x02\xb0\x01\x08\x81\x89\x02\xaf\x01\x06\x81\x89"
  "\x02\xae\x01\x04\x86\x08\x49\x71\x10\x02\x20\x13\x74\x72\x61\x63"
  "\x65\x2d\x65\x6e\x74\x72\x79\x2d\x61\x64\x76\x69\x63\x65\x0f\x02"
  "\x04\x0d\x61\x64\x76\x69\x73\x65\x2d\x65\x6e\x74\x72\x79\x36\x02"
  "\xd3\x01\x06\x81\x85\x02\xd2\x01\x04\x83\x04\x05\x0d\x37\x02\x21"
  "\x12\x74\x72\x61\x63\x65\x2d\x65\x78\x69\x74\x2d\x61\x64\x76\x69"
  "\x63\x65\x38\x02\x04\x0c\x61\x64\x76\x69\x73\x65\x2d\x65\x78\x69"
  "\x74\x39\x02\xd5\x01\x06\x81\x85\x02\xd4\x01\x04\x83\x04\x05\x0d"
  "\x3a\x02\x22\x0f\x38\x03\x05\x0c\x61\x64\x76\x69\x73\x65\x2d\x62"
  "\x6f\x74\x68\x3b\x02\xd8\x01\x08\x81\x87\x02\xd7\x01\x06\x81\x83"
  "\x02\xd6\x01\x04\x83\x04\x07\x10\x3c\x02\x23\x02\x14\x42\x72\x65"
  "\x61\x6b\x70\x6f\x69\x6e\x74\x20\x6f\x6e\x20\x65\x6e\x74\x72\x79"
  "\x03\x03\x05\x11\x06\x0a\x62\x72\x65\x61\x6b\x2d\x72\x65\x70\x3d"
  "\x03\xe1\x01\x14\x81\x83\x02\xe0\x01\x12\x81\x85\x02\xdf\x01\x10"
  "\x81\x83\x02\xde\x01\x0e\x81\x83\x02\xdd\x01\x0c\x81\x85\x02\xdc"
  "\x01\x0a\x81\x83\x02\xdb\x01\x08\x81\x83\x02\xda\x01\x06\x81\x83"
  "\x02\xd9\x01\x04\x85\x08\x13\x23\x3e\x02\x24\x02\x13\x42\x72\x65"
  "\x61\x6b\x70\x6f\x69\x6e\x74\x20\x6f\x6e\x20\x65\x78\x69\x74\x0a"
  "\x04\x0a\x04\x05\x11\x07\x3d\x03\xee\x01\x1c\x81\x83\x02\xed\x01"
  "\x1a\x81\x85\x02\xec\x01\x18\x81\x83\x02\xeb\x01\x16\x81\x83\x02"
  "\xea\x01\x14\x81\x85\x02\xe9\x01\x12\x81\x83\x02\xe8\x01\x10\x81"
  "\x83\x02\xe7\x01\x0e\x81\x85\x02\xe6\x01\x0c\x81\x83\x02\xe5\x01"
  "\x0a\x81\x83\x02\xe4\x01\x08\x81\x83\x02\xe3\x01\x06\x81\x89\x02"
  "\xe2\x01\x04\x86\x0a\x1b\x2d\x11\x02\x25\x06\x61\x70\x70\x6c\x79"
  "\x17\x34\x03\x03\x14\x63\x6d\x64\x6c\x2d\x6d\x65\x73\x73\x61\x67"
  "\x65\x2f\x61\x63\x74\x69\x76\x65\x05\x0b\x62\x72\x65\x61\x6b\x70"
  "\x6f\x69\x6e\x74\x04\x14\x63\x6d\x64\x6c\x2d\x6d\x65\x73\x73\x61"
  "\x67\x65\x2f\x61\x70\x70\x65\x6e\x64\x04\xf4\x01\x0e\x81\x85\x02"
  "\xf3\x01\x0c\x81\x85\x02\xf2\x01\x0a\x81\x8b\x02\xf1\x01\x08\x81"
  "\x89\x02\xf0\x01\x06\x81\x87\x02\xef\x01\x04\xfd\x07\x0d\x1b\x3f"
  "\x02\x26\x13\x62\x72\x65\x61\x6b\x2d\x65\x6e\x74\x72\x79\x2d\x61"
  "\x64\x76\x69\x63\x65\x40\x02\x04\x36\x02\xf6\x01\x06\x81\x85\x02"
  "\xf5\x01\x04\x83\x04\x05\x0d\x41\x02\x27\x12\x62\x72\x65\x61\x6b"
  "\x2d\x65\x78\x69\x74\x2d\x61\x64\x76\x69\x63\x65\x42\x02\x04\x39"
  "\x02\xf8\x01\x06\x81\x85\x02\xf7\x01\x04\x83\x04\x05\x0d\x43\x02"
  "\x28\x40\x42\x03\x05\x3b\x02\xfb\x01\x08\x81\x87\x02\xfa\x01\x06"
  "\x81\x83\x02\xf9\x01\x04\x83\x04\x07\x10\x28\x44\x44\x0d\x75\x6e"
  "\x62\x72\x65\x61\x6b\x2d\x65\x78\x69\x74\x08\x75\x6e\x62\x72\x65"
  "\x61\x6b\x0e\x75\x6e\x62\x72\x65\x61\x6b\x2d\x65\x6e\x74\x72\x79"
  "\x08\x75\x6e\x74\x72\x61\x63\x65\x0b\x62\x72\x65\x61\x6b\x2d\x62"
  "\x6f\x74\x68\x0b\x62\x72\x65\x61\x6b\x2d\x65\x78\x69\x74\x0c\x62"
  "\x72\x65\x61\x6b\x2d\x65\x6e\x74\x72\x79\x3d\x42\x40\x04\x43\x04"
  "\x41\x04\x3f\x04\x11\x04\x3e\x04\x0d\x75\x6e\x74\x72\x61\x63\x65"
  "\x2d\x65\x78\x69\x74\x0e\x75\x6e\x74\x72\x61\x63\x65\x2d\x65\x6e"
  "\x74\x72\x79\x06\x74\x72\x61\x63\x65\x09\x75\x6e\x61\x64\x76\x69"
  "\x73\x65\x0b\x74\x72\x61\x63\x65\x2d\x62\x6f\x74\x68\x44\x0b\x74"
  "\x72\x61\x63\x65\x2d\x65\x78\x69\x74\x0c\x74\x72\x61\x63\x65\x2d"
  "\x65\x6e\x74\x72\x79\x34\x38\x0f\x18\x73\x70\x65\x63\x69\x66\x69"
  "\x63\x2d\x62\x6f\x74\x68\x2d\x75\x6e\x61\x64\x76\x69\x73\x65\x72"
  "\x43\x18\x73\x70\x65\x63\x69\x66\x69\x63\x2d\x65\x78\x69\x74\x2d"
  "\x75\x6e\x61\x64\x76\x69\x73\x65\x72\x41\x19\x73\x70\x65\x63\x69"
  "\x66\x69\x63\x2d\x65\x6e\x74\x72\x79\x2d\x75\x6e\x61\x64\x76\x69"
  "\x73\x65\x72\x3f\x0a\x3c\x04\x3a\x04\x37\x04\x10\x04\x33\x04\x35"
  "\x04\x32\x04\x30\x04\x2e\x04\x0a\x0e\x75\x6e\x61\x64\x76\x69\x73"
  "\x65\x2d\x65\x78\x69\x74\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x0f\x75\x6e\x61\x64\x76\x69\x73\x65"
  "\x2d\x65\x6e\x74\x72\x79\x2c\x0a\x6e\x75\x6c\x6c\x69\x66\x69\x65"
  "\x72\x3e\x27\x26\x31\x2f\x2d\x1d\x1e\x3b\x39\x36\x0c\x65\x78\x69"
  "\x74\x2d\x61\x64\x76\x69\x63\x65\x0d\x65\x6e\x74\x72\x79\x2d\x61"
  "\x64\x76\x69\x63\x65\x07\x61\x64\x76\x69\x63\x65\x17\x15\x13\x23"
  "\x0d\x19\x09\x2a\x72\x65\x73\x75\x6c\x74\x2a\x07\x2a\x70\x72\x6f"
  "\x63\x2a\x07\x2a\x61\x72\x67\x73\x2a\x0a\x14\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x1f\x2b"
  "\x04\x0c\x04\x22\x04\x1c\x04\x28\x04\x2a\x04\x29\x04\x25\x04\x24"
  "\x04\x21\x04\x20\x04\x1f\x04\x04\x1b\x04\x1a\x04\x18\x04\x16\x04"
  "\x14\x04\x12\x04\x0e\x04\x0b\x04\x09\x04\x04\x04\x1f\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x3e"
  "\x44\x0f\x38\x40\x42\x07\x03\x2d\x03\x2f\x04\x31\x03\x3f\x03\x41"
  "\x04\x43\x07\x25\x4c\x80\x80\x04\x24\x4a\x81\x81\x02\x23\x48\x81"
  "\x81\x02\x22\x46\x81\x87\x02\x21\x44\x81\x85\x02\x20\x42\x81\x8b"
  "\x02\x1f\x40\x81\x89\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x85\x02"
  "\x1c\x3a\x81\x87\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x87\x02\x19"
  "\x34\x81\x83\x02\x18\x32\x81\x85\x02\x17\x30\x81\x83\x02\x16\x2e"
  "\x81\x85\x02\x15\x2c\x81\x89\x02\x14\x2a\x81\x87\x02\x13\x28\x81"
  "\x83\x02\x12\x26\x81\x85\x02\x11\x24\x81\x87\x02\x10\x22\x81\x83"
  "\x02\x0f\x20\x81\x87\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x85\x02"
  "\x0c\x1a\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09"
  "\x14\x81\x85\x02\x08\x12\x81\x89\x02\x07\x10\x81\x87\x02\x06\x0e"
  "\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x87\x02\x03\x08\x81"
  "\x83\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x4b\x78";

SCHEME_OBJECT *
advice_so_data_76800ab1e942a353 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_advice_so_data_76800ab1e942a353 [0]))), (sizeof (prog_advice_so_data_76800ab1e942a353)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_47]));
}

DECLARE_COMPILED_DATA_NS ("advice.so", advice_so_data_76800ab1e942a353)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("advice.so", "70b1f77693187dc7")
