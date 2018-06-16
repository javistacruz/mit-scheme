/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:19-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define ENVIRONMENT_LABEL_1_3 17
#define DEBUGGING_LABEL_1_2 16
#define OBJECT_1_0 15
#define EXECUTE_CACHE_1_9 9
#define EXECUTE_CACHE_1_8 11
#define EXECUTE_CACHE_1_6 13
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_1_4);
      goto pop_return_3;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pop_return_6)
DEFLABEL (pop_return_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 12
#define DEBUGGING_LABEL_2_2 11
#define OBJECT_2_1 10
#define OBJECT_2_0 9
#define EXECUTE_CACHE_2_6 7
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_2_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_2_0])))
    goto label_13;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  if (! ((Wrd13.Obj) == (current_block [OBJECT_2_1])))
    goto label_13;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  goto label_12;

DEFLABEL (lambda_11)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_2_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_7 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_13 13
#define LABEL_3_14 15
#define ENVIRONMENT_LABEL_3_3 35
#define DEBUGGING_LABEL_3_2 34
#define OBJECT_3_4 33
#define OBJECT_3_3 32
#define OBJECT_3_2 31
#define OBJECT_3_1 30
#define OBJECT_3_0 29
#define EXECUTE_CACHE_3_17 17
#define EXECUTE_CACHE_3_16 19
#define EXECUTE_CACHE_3_15 21
#define EXECUTE_CACHE_3_12 23
#define EXECUTE_CACHE_3_11 25
#define EXECUTE_CACHE_3_8 27
#define FREE_REFERENCES_LABEL_3_0 16
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_23;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_27;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_11;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_15;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_26)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_29;

DEFLABEL (label_28)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_3_0])))
    goto label_28;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_28;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = ((Wrd31.pObj) [1]);
  if ((Wrd33.Obj) == (current_block [OBJECT_3_1]))
    goto label_32;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  ((Wrd42.pObj) [2]) = (Wrd22.Obj);
  Rvl = (Wrd41.Obj);

DEFLABEL (label_31)
DEFLABEL (label_33)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Wrd9.Obj) = (current_block [OBJECT_3_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define LABEL_4_7 7
#define LABEL_4_9 9
#define ENVIRONMENT_LABEL_4_3 20
#define DEBUGGING_LABEL_4_2 19
#define OBJECT_4_1 18
#define OBJECT_4_0 17
#define EXECUTE_CACHE_4_11 11
#define EXECUTE_CACHE_4_10 13
#define EXECUTE_CACHE_4_8 15
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_25;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_29;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_28)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_31;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_4_0])))
    goto label_30;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_30;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_32;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = ((Wrd41.pObj) [1]);
  if ((Wrd43.Obj) == (current_block [OBJECT_4_1]))
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd42.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd52.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd52.pObj)));
  ((Wrd52.pObj) [2]) = (Wrd42.Obj);
  Rvl = (Wrd51.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Wrd9.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 12
#define DEBUGGING_LABEL_5_2 11
#define OBJECT_5_1 10
#define OBJECT_5_0 9
#define EXECUTE_CACHE_5_6 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_17;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_20)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_23;

DEFLABEL (label_22)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_5_0])))
    goto label_22;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_22;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_24;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = ((Wrd31.pObj) [1]);
  if ((Wrd33.Obj) == (current_block [OBJECT_5_1]))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_25;

DEFLABEL (label_26)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));

DEFLABEL (label_25)
DEFLABEL (label_27)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_21)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_5_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_7 7
#define LABEL_6_9 9
#define LABEL_6_10 11
#define LABEL_6_13 13
#define LABEL_6_14 15
#define LABEL_6_15 17
#define ENVIRONMENT_LABEL_6_3 39
#define DEBUGGING_LABEL_6_2 38
#define OBJECT_6_4 37
#define OBJECT_6_3 36
#define OBJECT_6_2 35
#define OBJECT_6_1 34
#define OBJECT_6_0 33
#define EXECUTE_CACHE_6_19 19
#define EXECUTE_CACHE_6_18 21
#define EXECUTE_CACHE_6_17 23
#define EXECUTE_CACHE_6_16 25
#define EXECUTE_CACHE_6_12 27
#define EXECUTE_CACHE_6_11 29
#define EXECUTE_CACHE_6_8 31
#define FREE_REFERENCES_LABEL_6_0 18
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_29;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_33;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_19;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_18;

    case 5:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_17;

    case 6:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_16;

    case 7:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_32)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_35;

DEFLABEL (label_34)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_6_0])))
    goto label_34;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_34;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_36;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_37;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = ((Wrd41.pObj) [1]);
  if ((Wrd43.Obj) == (current_block [OBJECT_6_1]))
    goto label_38;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 2;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  Wrd56 = Wrd53;
  ((Wrd56.pObj) [2]) = (Wrd22.Obj);
  ((Wrd56.pObj) [3]) = (Wrd42.Obj);
  Rvl = (Wrd52.Obj);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_6_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_6_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (Wrd9.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_7 7
#define LABEL_7_9 9
#define LABEL_7_10 11
#define LABEL_7_13 13
#define LABEL_7_14 15
#define LABEL_7_16 17
#define LABEL_7_17 19
#define ENVIRONMENT_LABEL_7_3 43
#define DEBUGGING_LABEL_7_2 42
#define OBJECT_7_6 41
#define OBJECT_7_5 40
#define OBJECT_7_4 39
#define OBJECT_7_3 38
#define OBJECT_7_2 37
#define OBJECT_7_1 36
#define OBJECT_7_0 35
#define EXECUTE_CACHE_7_20 21
#define EXECUTE_CACHE_7_19 23
#define EXECUTE_CACHE_7_18 25
#define EXECUTE_CACHE_7_15 27
#define EXECUTE_CACHE_7_12 29
#define EXECUTE_CACHE_7_11 31
#define EXECUTE_CACHE_7_8 33
#define FREE_REFERENCES_LABEL_7_0 20
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_25;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_29;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_11;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_17;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_16;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_28)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_31;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_7_0])))
    goto label_30;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_30;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_32;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = ((Wrd31.pObj) [1]);
  if ((Wrd33.Obj) == (current_block [OBJECT_7_1]))
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_33;

DEFLABEL (label_34)
  (Rsp [1]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 1;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  ((Wrd42.pObj) [2]) = (Wrd22.Obj);
  Rvl = (Wrd41.Obj);

DEFLABEL (label_33)
DEFLABEL (label_35)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_5]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_7_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_6]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_20]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Wrd9.Obj) = (current_block [OBJECT_7_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define TAG_8_6 1
#define LABEL_8_7 7
#define LABEL_8_9 9
#define LABEL_8_10 11
#define LABEL_8_11 13
#define LABEL_8_12 15
#define ENVIRONMENT_LABEL_8_3 33
#define DEBUGGING_LABEL_8_2 32
#define OBJECT_8_2 31
#define OBJECT_8_1 30
#define OBJECT_8_0 29
#define EXECUTE_CACHE_8_17 17
#define EXECUTE_CACHE_8_16 19
#define EXECUTE_CACHE_8_15 21
#define EXECUTE_CACHE_8_14 23
#define EXECUTE_CACHE_8_13 25
#define EXECUTE_CACHE_8_8 27
#define FREE_REFERENCES_LABEL_8_0 16
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_28;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto lambda_32;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_18;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_17;

    case 5:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_31)
DEFLABEL (lambda_28)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_34;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_8_0])))
    goto label_33;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_33;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_35;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_36;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = ((Wrd41.pObj) [1]);
  if ((Wrd43.Obj) == (current_block [OBJECT_8_1]))
    goto label_37;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_5])));
  Rhp += 2;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  Wrd56 = Wrd53;
  ((Wrd56.pObj) [2]) = (Wrd22.Obj);
  ((Wrd56.pObj) [3]) = (Wrd42.Obj);
  Rvl = (Wrd52.Obj);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_8_5);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_8_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_17]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_8_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Wrd9.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_7 7
#define LABEL_9_9 9
#define LABEL_9_10 11
#define LABEL_9_11 13
#define LABEL_9_12 15
#define ENVIRONMENT_LABEL_9_3 33
#define DEBUGGING_LABEL_9_2 32
#define OBJECT_9_2 31
#define OBJECT_9_1 30
#define OBJECT_9_0 29
#define EXECUTE_CACHE_9_17 17
#define EXECUTE_CACHE_9_16 19
#define EXECUTE_CACHE_9_15 21
#define EXECUTE_CACHE_9_14 23
#define EXECUTE_CACHE_9_13 25
#define EXECUTE_CACHE_9_8 27
#define FREE_REFERENCES_LABEL_9_0 16
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_28;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_32;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_18;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_17;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_31)
DEFLABEL (lambda_28)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_34;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_9_0])))
    goto label_33;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_33;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_35;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_36;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = ((Wrd41.pObj) [1]);
  if ((Wrd43.Obj) == (current_block [OBJECT_9_1]))
    goto label_37;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 2;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  Wrd56 = Wrd53;
  ((Wrd56.pObj) [2]) = (Wrd22.Obj);
  ((Wrd56.pObj) [3]) = (Wrd42.Obj);
  Rvl = (Wrd52.Obj);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_17]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Wrd9.Obj) = (current_block [OBJECT_9_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_7 7
#define LABEL_10_9 9
#define LABEL_10_11 11
#define ENVIRONMENT_LABEL_10_3 28
#define DEBUGGING_LABEL_10_2 27
#define OBJECT_10_5 26
#define OBJECT_10_4 25
#define OBJECT_10_3 24
#define OBJECT_10_2 23
#define OBJECT_10_1 22
#define OBJECT_10_0 21
#define EXECUTE_CACHE_10_13 13
#define EXECUTE_CACHE_10_12 15
#define EXECUTE_CACHE_10_10 17
#define EXECUTE_CACHE_10_8 19
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_37;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_41;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_22;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_24;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_40)
DEFLABEL (lambda_37)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_43;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_10_0])))
    goto label_42;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_42;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_44;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_45;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd44.uLng) == 1)
    goto label_47;

DEFLABEL (label_46)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [0]);
  if (! ((Wrd47.Obj) == (current_block [OBJECT_10_1])))
    goto label_46;
  (Wrd51.Obj) = ((Wrd49.pObj) [1]);
  (Rsp [0]) = (Wrd51.Obj);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_46;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = ((Wrd57.pObj) [1]);
  (Wrd62.Obj) = (current_block [OBJECT_10_2]);
  if ((Wrd59.Obj) == (Wrd62.Obj))
    goto label_49;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd65.Obj) = ((Wrd41.pObj) [1]);
  if (! ((Wrd65.Obj) == (Wrd62.Obj)))
    goto label_48;
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd73.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 2;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd73.pObj)));
  Wrd76 = Wrd73;
  ((Wrd76.pObj) [2]) = (Wrd22.Obj);
  ((Wrd76.pObj) [3]) = (Wrd58.Obj);
  Rvl = (Wrd72.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (current_block [OBJECT_10_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (Wrd9.Obj) = (current_block [OBJECT_10_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_7 7
#define LABEL_11_9 9
#define LABEL_11_10 11
#define LABEL_11_11 13
#define LABEL_11_13 15
#define ENVIRONMENT_LABEL_11_3 35
#define DEBUGGING_LABEL_11_2 34
#define OBJECT_11_4 33
#define OBJECT_11_3 32
#define OBJECT_11_2 31
#define OBJECT_11_1 30
#define OBJECT_11_0 29
#define EXECUTE_CACHE_11_17 17
#define EXECUTE_CACHE_11_16 19
#define EXECUTE_CACHE_11_15 21
#define EXECUTE_CACHE_11_14 23
#define EXECUTE_CACHE_11_12 25
#define EXECUTE_CACHE_11_8 27
#define FREE_REFERENCES_LABEL_11_0 16
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd86;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_44;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_48;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_25;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_29;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_28;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_27;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_47)
DEFLABEL (lambda_44)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_50;

DEFLABEL (label_49)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_11_0])))
    goto label_49;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_49;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_51;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd44.uLng) == 1)
    goto label_54;

DEFLABEL (label_53)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [0]);
  if (! ((Wrd47.Obj) == (current_block [OBJECT_11_1])))
    goto label_53;
  (Wrd51.Obj) = ((Wrd49.pObj) [1]);
  (Rsp [0]) = (Wrd51.Obj);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_53;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = ((Wrd57.pObj) [1]);
  (Wrd62.Obj) = (current_block [OBJECT_11_2]);
  if ((Wrd59.Obj) == (Wrd62.Obj))
    goto label_55;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd67.Obj) = ((Wrd41.pObj) [1]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd69.uLng) == 1)
    goto label_56;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = ((Wrd73.pObj) [1]);
  if ((Wrd75.Obj) == (Wrd62.Obj))
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd86.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 3;
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd86.pObj)));
  Wrd91 = Wrd86;
  ((Wrd91.pObj) [2]) = (Wrd22.Obj);
  ((Wrd91.pObj) [3]) = (Wrd58.Obj);
  ((Wrd91.pObj) [4]) = (Wrd74.Obj);
  Rvl = (Wrd85.Obj);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_15]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (Wrd9.Obj) = (current_block [OBJECT_11_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define LABEL_12_7 7
#define LABEL_12_10 9
#define LABEL_12_12 11
#define LABEL_12_9 13
#define LABEL_12_13 15
#define LABEL_12_18 17
#define LABEL_12_15 19
#define LABEL_12_19 21
#define LABEL_12_20 23
#define LABEL_12_16 25
#define ENVIRONMENT_LABEL_12_3 53
#define DEBUGGING_LABEL_12_2 52
#define OBJECT_12_6 51
#define OBJECT_12_5 50
#define OBJECT_12_4 49
#define OBJECT_12_3 48
#define OBJECT_12_2 47
#define OBJECT_12_1 46
#define OBJECT_12_0 45
#define EXECUTE_CACHE_12_24 27
#define EXECUTE_CACHE_12_23 29
#define EXECUTE_CACHE_12_22 31
#define EXECUTE_CACHE_12_21 33
#define EXECUTE_CACHE_12_17 35
#define EXECUTE_CACHE_12_14 37
#define EXECUTE_CACHE_12_11 39
#define EXECUTE_CACHE_12_8 41
#define FREE_REFERENCE_12_0 44
#define FREE_REFERENCES_LABEL_12_0 26
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd34;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
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
      goto lambda_34;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_42;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_12_10);
      goto label_36;

    case 4:
      current_block = (Rpc - LABEL_12_12);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_19;

    case 7:
      current_block = (Rpc - LABEL_12_18);
      goto continuation_23;

    case 8:
      current_block = (Rpc - LABEL_12_15);
      goto continuation_18;

    case 9:
      current_block = (Rpc - LABEL_12_19);
      goto label_38;

    case 10:
      current_block = (Rpc - LABEL_12_20);
      goto label_39;

    case 11:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_41)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_44;

DEFLABEL (label_43)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_12_0])))
    goto label_43;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_43;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_45;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = ((Wrd41.pObj) [1]);
  if ((Wrd43.Obj) == (current_block [OBJECT_12_1]))
    goto label_47;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 2;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  Wrd56 = Wrd53;
  ((Wrd56.pObj) [2]) = (Wrd22.Obj);
  ((Wrd56.pObj) [3]) = (Wrd42.Obj);
  Rvl = (Wrd52.Obj);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_58;
  Wrd9 = Wrd13;

DEFLABEL (label_57)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  if (! ((Wrd17.Obj) == (Wrd9.Obj)))
    goto label_48;
  (Wrd42.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Wrd9.Obj) = (current_block [OBJECT_12_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (label_48)
  (Wrd26.Obj) = ((Wrd16.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_56;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd32.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_56;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_55)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_12_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_12_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_24]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_12_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_54;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_54;
  if (! ((Wrd5.Obj) == (Wrd7.Obj)))
    goto label_50;

DEFLABEL (label_49)
  (Wrd39.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_23]));

DEFLABEL (label_50)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_53;
  if (! ((Wrd15.Obj) == (current_block [OBJECT_12_4])))
    goto label_52;

DEFLABEL (label_51)
  (Wrd28.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Rsp [2]) = (Wrd29.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_12_6]);
  (Rsp [0]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_22]));

DEFLABEL (label_52)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [8]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_21]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_12_18);
  goto label_51;

DEFLABEL (label_53)
  (Wrd34.Obj) = (current_block [OBJECT_12_4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_20]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_51;

DEFLABEL (label_54)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  goto label_49;

DEFLABEL (label_56)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_10])), (Wrd10.pObj));

DEFLABEL (label_36)
  (Wrd9.Obj) = Rvl;
  goto label_57;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define ENVIRONMENT_LABEL_13_3 17
#define DEBUGGING_LABEL_13_2 16
#define OBJECT_13_0 15
#define EXECUTE_CACHE_13_9 9
#define EXECUTE_CACHE_13_8 11
#define EXECUTE_CACHE_13_6 13
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto invoke_special_primitive_3;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_special_primitive_6)
DEFLABEL (invoke_special_primitive_3)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd9.Obj) = (current_block [OBJECT_13_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define ENVIRONMENT_LABEL_14_3 18
#define DEBUGGING_LABEL_14_2 17
#define OBJECT_14_3 16
#define OBJECT_14_2 15
#define OBJECT_14_1 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_8 9
#define EXECUTE_CACHE_14_6 11
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_14_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_14_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_14_7);
  (Wrd5.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define ENVIRONMENT_LABEL_15_3 18
#define DEBUGGING_LABEL_15_2 17
#define OBJECT_15_3 16
#define OBJECT_15_2 15
#define OBJECT_15_1 14
#define OBJECT_15_0 13
#define EXECUTE_CACHE_15_8 9
#define EXECUTE_CACHE_15_6 11
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_15_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_15_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_15_7);
  (Wrd5.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define ENVIRONMENT_LABEL_16_3 18
#define DEBUGGING_LABEL_16_2 17
#define OBJECT_16_3 16
#define OBJECT_16_2 15
#define OBJECT_16_1 14
#define OBJECT_16_0 13
#define EXECUTE_CACHE_16_8 9
#define EXECUTE_CACHE_16_6 11
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_16_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_16_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_16_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_16_7);
  (Wrd5.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define ENVIRONMENT_LABEL_17_3 18
#define DEBUGGING_LABEL_17_2 17
#define OBJECT_17_3 16
#define OBJECT_17_2 15
#define OBJECT_17_1 14
#define OBJECT_17_0 13
#define EXECUTE_CACHE_17_8 9
#define EXECUTE_CACHE_17_6 11
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_17_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_17_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_17_7);
  (Wrd5.Obj) = (current_block [OBJECT_17_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define ENVIRONMENT_LABEL_18_3 18
#define DEBUGGING_LABEL_18_2 17
#define OBJECT_18_3 16
#define OBJECT_18_2 15
#define OBJECT_18_1 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_8 9
#define EXECUTE_CACHE_18_6 11
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_18_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_18_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_18_7);
  (Wrd5.Obj) = (current_block [OBJECT_18_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define ENVIRONMENT_LABEL_19_3 18
#define DEBUGGING_LABEL_19_2 17
#define OBJECT_19_3 16
#define OBJECT_19_2 15
#define OBJECT_19_1 14
#define OBJECT_19_0 13
#define EXECUTE_CACHE_19_8 9
#define EXECUTE_CACHE_19_6 11
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_19_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_19_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_19_7);
  (Wrd5.Obj) = (current_block [OBJECT_19_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define ENVIRONMENT_LABEL_20_3 18
#define DEBUGGING_LABEL_20_2 17
#define OBJECT_20_3 16
#define OBJECT_20_2 15
#define OBJECT_20_1 14
#define OBJECT_20_0 13
#define EXECUTE_CACHE_20_8 9
#define EXECUTE_CACHE_20_6 11
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_20_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_20_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_20_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_20_7);
  (Wrd5.Obj) = (current_block [OBJECT_20_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define ENVIRONMENT_LABEL_21_3 18
#define DEBUGGING_LABEL_21_2 17
#define OBJECT_21_3 16
#define OBJECT_21_2 15
#define OBJECT_21_1 14
#define OBJECT_21_0 13
#define EXECUTE_CACHE_21_8 9
#define EXECUTE_CACHE_21_6 11
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_21_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_21_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_21_7);
  (Wrd5.Obj) = (current_block [OBJECT_21_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define ENVIRONMENT_LABEL_22_3 18
#define DEBUGGING_LABEL_22_2 17
#define OBJECT_22_3 16
#define OBJECT_22_2 15
#define OBJECT_22_1 14
#define OBJECT_22_0 13
#define EXECUTE_CACHE_22_8 9
#define EXECUTE_CACHE_22_6 11
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_22_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_22_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_22_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_22_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_22_7);
  (Wrd5.Obj) = (current_block [OBJECT_22_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define ENVIRONMENT_LABEL_23_3 18
#define DEBUGGING_LABEL_23_2 17
#define OBJECT_23_3 16
#define OBJECT_23_2 15
#define OBJECT_23_1 14
#define OBJECT_23_0 13
#define EXECUTE_CACHE_23_8 9
#define EXECUTE_CACHE_23_6 11
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_23_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_23_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_23_7);
  (Wrd5.Obj) = (current_block [OBJECT_23_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define ENVIRONMENT_LABEL_24_3 18
#define DEBUGGING_LABEL_24_2 17
#define OBJECT_24_3 16
#define OBJECT_24_2 15
#define OBJECT_24_1 14
#define OBJECT_24_0 13
#define EXECUTE_CACHE_24_8 9
#define EXECUTE_CACHE_24_6 11
#define FREE_REFERENCES_LABEL_24_0 8
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_24_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_24_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_24_7);
  (Wrd5.Obj) = (current_block [OBJECT_24_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define ENVIRONMENT_LABEL_25_3 18
#define DEBUGGING_LABEL_25_2 17
#define OBJECT_25_3 16
#define OBJECT_25_2 15
#define OBJECT_25_1 14
#define OBJECT_25_0 13
#define EXECUTE_CACHE_25_8 9
#define EXECUTE_CACHE_25_6 11
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_25_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_25_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_25_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_25_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_25_7);
  (Wrd5.Obj) = (current_block [OBJECT_25_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define ENVIRONMENT_LABEL_26_3 18
#define DEBUGGING_LABEL_26_2 17
#define OBJECT_26_3 16
#define OBJECT_26_2 15
#define OBJECT_26_1 14
#define OBJECT_26_0 13
#define EXECUTE_CACHE_26_8 9
#define EXECUTE_CACHE_26_6 11
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_26_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_26_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_26_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_26_7);
  (Wrd5.Obj) = (current_block [OBJECT_26_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define ENVIRONMENT_LABEL_27_3 18
#define DEBUGGING_LABEL_27_2 17
#define OBJECT_27_3 16
#define OBJECT_27_2 15
#define OBJECT_27_1 14
#define OBJECT_27_0 13
#define EXECUTE_CACHE_27_8 9
#define EXECUTE_CACHE_27_6 11
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_27_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_27_2]))
    goto label_32;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));

DEFLABEL (label_31)
DEFLABEL (label_34)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_27_7);
  (Wrd5.Obj) = (current_block [OBJECT_27_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 13
#define DEBUGGING_LABEL_28_2 12
#define OBJECT_28_5 11
#define OBJECT_28_4 10
#define OBJECT_28_3 9
#define OBJECT_28_2 8
#define OBJECT_28_1 7
#define OBJECT_28_0 6
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_37;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto lambda_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_40)
DEFLABEL (lambda_37)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_43;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_28_0])))
    goto label_42;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_42;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);
  if (! ((Wrd20.Obj) == (current_block [OBJECT_28_1])))
    goto label_42;
  (Wrd24.Obj) = ((Wrd22.pObj) [1]);
  (Rsp [0]) = (Wrd24.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_42;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd35.uLng) == 1)
    goto label_45;

DEFLABEL (label_44)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [0]);
  if (! ((Wrd38.Obj) == (current_block [OBJECT_28_2])))
    goto label_44;
  (Wrd42.Obj) = ((Wrd40.pObj) [1]);
  (Rsp [0]) = (Wrd42.Obj);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_44;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd51.uLng) == 1)
    goto label_48;

DEFLABEL (label_47)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_46)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd54.Obj) = ((Wrd56.pObj) [0]);
  if (! ((Wrd54.Obj) == (current_block [OBJECT_28_3])))
    goto label_47;
  (Wrd58.Obj) = ((Wrd56.pObj) [1]);
  (Rsp [0]) = (Wrd58.Obj);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_47;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [0]);
  if (! ((Wrd63.Obj) == (current_block [OBJECT_28_4])))
    goto label_47;
  (Wrd67.Obj) = ((Wrd65.pObj) [1]);
  (Wrd70.Obj) = (current_block [OBJECT_28_5]);
  if (! ((Wrd67.Obj) == (Wrd70.Obj)))
    goto label_47;
  (Wrd71.Obj) = ((Wrd48.pObj) [1]);
  if (! ((Wrd71.Obj) == (Wrd70.Obj)))
    goto label_47;
  (Wrd75.Obj) = ((Wrd32.pObj) [1]);
  if (! ((Wrd75.Obj) == (Wrd70.Obj)))
    goto label_47;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  goto label_46;

DEFLABEL (lambda_41)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_28_5);
  Rvl = (current_block [OBJECT_28_5]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define TAG_29_6 1
#define LABEL_29_7 7
#define LABEL_29_9 9
#define ENVIRONMENT_LABEL_29_3 20
#define DEBUGGING_LABEL_29_2 19
#define OBJECT_29_3 18
#define OBJECT_29_2 17
#define OBJECT_29_1 16
#define OBJECT_29_0 15
#define EXECUTE_CACHE_29_10 11
#define EXECUTE_CACHE_29_8 13
#define FREE_REFERENCES_LABEL_29_0 10
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_29_4);
      goto lambda_30;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto lambda_34;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_19;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_33)
DEFLABEL (lambda_30)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_36;

DEFLABEL (label_35)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_29_0])))
    goto label_35;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_35;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_37;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_39;

DEFLABEL (label_38)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  if (! ((Wrd37.Obj) == (current_block [OBJECT_29_1])))
    goto label_38;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_38;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_29_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_41;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd55.Obj) = ((Wrd31.pObj) [1]);
  if (! ((Wrd55.Obj) == (Wrd52.Obj)))
    goto label_40;
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd63.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
  Rhp += 2;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd63.pObj)));
  Wrd66 = Wrd63;
  ((Wrd66.pObj) [2]) = (Wrd22.Obj);
  ((Wrd66.pObj) [3]) = (Wrd48.Obj);
  Rvl = (Wrd62.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_29_5);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (Wrd10.Obj) = (current_block [OBJECT_29_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_15 5
#define LABEL_30_13 7
#define LABEL_30_14 9
#define LABEL_30_11 11
#define LABEL_30_12 13
#define LABEL_30_8 15
#define LABEL_30_9 17
#define LABEL_30_5 19
#define LABEL_30_6 21
#define LABEL_30_17 23
#define LABEL_30_18 25
#define LABEL_30_20 27
#define LABEL_30_21 29
#define LABEL_30_22 31
#define LABEL_30_23 33
#define LABEL_30_25 35
#define LABEL_30_26 37
#define LABEL_30_27 39
#define LABEL_30_28 41
#define LABEL_30_29 43
#define LABEL_30_30 45
#define LABEL_30_31 47
#define LABEL_30_32 49
#define LABEL_30_35 51
#define LABEL_30_36 53
#define LABEL_30_37 55
#define LABEL_30_38 57
#define LABEL_30_39 59
#define LABEL_30_40 61
#define LABEL_30_41 63
#define LABEL_30_42 65
#define LABEL_30_44 67
#define LABEL_30_45 69
#define LABEL_30_46 71
#define LABEL_30_47 73
#define LABEL_30_49 75
#define LABEL_30_50 77
#define LABEL_30_51 79
#define LABEL_30_52 81
#define LABEL_30_53 83
#define LABEL_30_54 85
#define LABEL_30_55 87
#define LABEL_30_56 89
#define LABEL_30_57 91
#define LABEL_30_58 93
#define ENVIRONMENT_LABEL_30_3 131
#define DEBUGGING_LABEL_30_2 130
#define OBJECT_30_6 129
#define OBJECT_30_5 128
#define OBJECT_30_4 127
#define OBJECT_30_3 126
#define OBJECT_30_2 125
#define OBJECT_30_1 124
#define OBJECT_30_0 123
#define EXECUTE_CACHE_30_62 95
#define EXECUTE_CACHE_30_61 97
#define EXECUTE_CACHE_30_60 99
#define EXECUTE_CACHE_30_43 101
#define EXECUTE_CACHE_30_34 103
#define EXECUTE_CACHE_30_63 105
#define EXECUTE_CACHE_30_59 107
#define EXECUTE_CACHE_30_48 109
#define EXECUTE_CACHE_30_33 111
#define EXECUTE_CACHE_30_24 113
#define EXECUTE_CACHE_30_19 115
#define EXECUTE_CACHE_30_16 117
#define EXECUTE_CACHE_30_10 119
#define EXECUTE_CACHE_30_7 121
#define FREE_REFERENCES_LABEL_30_0 94
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_30_4);
      goto move_frame_up_50;

    case 1:
      current_block = (Rpc - LABEL_30_15);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_24;

    case 3:
      current_block = (Rpc - LABEL_30_14);
      goto continuation_23;

    case 4:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_34;

    case 5:
      current_block = (Rpc - LABEL_30_12);
      goto continuation_33;

    case 6:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_44;

    case 7:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_43;

    case 8:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_48;

    case 9:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_47;

    case 10:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_30_18);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_30_20);
      goto continuation_20;

    case 13:
      current_block = (Rpc - LABEL_30_21);
      goto continuation_19;

    case 14:
      current_block = (Rpc - LABEL_30_22);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_30_23);
      goto continuation_21;

    case 16:
      current_block = (Rpc - LABEL_30_25);
      goto continuation_38;

    case 17:
      current_block = (Rpc - LABEL_30_26);
      goto continuation_37;

    case 18:
      current_block = (Rpc - LABEL_30_27);
      goto continuation_32;

    case 19:
      current_block = (Rpc - LABEL_30_28);
      goto continuation_31;

    case 20:
      current_block = (Rpc - LABEL_30_29);
      goto continuation_46;

    case 21:
      current_block = (Rpc - LABEL_30_30);
      goto continuation_45;

    case 22:
      current_block = (Rpc - LABEL_30_31);
      goto continuation_42;

    case 23:
      current_block = (Rpc - LABEL_30_32);
      goto continuation_41;

    case 24:
      current_block = (Rpc - LABEL_30_35);
      goto continuation_14;

    case 25:
      current_block = (Rpc - LABEL_30_36);
      goto continuation_13;

    case 26:
      current_block = (Rpc - LABEL_30_37);
      goto continuation_12;

    case 27:
      current_block = (Rpc - LABEL_30_38);
      goto continuation_11;

    case 28:
      current_block = (Rpc - LABEL_30_39);
      goto continuation_28;

    case 29:
      current_block = (Rpc - LABEL_30_40);
      goto continuation_27;

    case 30:
      current_block = (Rpc - LABEL_30_41);
      goto continuation_18;

    case 31:
      current_block = (Rpc - LABEL_30_42);
      goto continuation_17;

    case 32:
      current_block = (Rpc - LABEL_30_44);
      goto continuation_40;

    case 33:
      current_block = (Rpc - LABEL_30_45);
      goto continuation_39;

    case 34:
      current_block = (Rpc - LABEL_30_46);
      goto continuation_36;

    case 35:
      current_block = (Rpc - LABEL_30_47);
      goto continuation_35;

    case 36:
      current_block = (Rpc - LABEL_30_49);
      goto continuation_16;

    case 37:
      current_block = (Rpc - LABEL_30_50);
      goto continuation_15;

    case 38:
      current_block = (Rpc - LABEL_30_51);
      goto continuation_8;

    case 39:
      current_block = (Rpc - LABEL_30_52);
      goto continuation_7;

    case 40:
      current_block = (Rpc - LABEL_30_53);
      goto continuation_10;

    case 41:
      current_block = (Rpc - LABEL_30_54);
      goto continuation_9;

    case 42:
      current_block = (Rpc - LABEL_30_55);
      goto continuation_30;

    case 43:
      current_block = (Rpc - LABEL_30_56);
      goto continuation_29;

    case 44:
      current_block = (Rpc - LABEL_30_57);
      goto continuation_26;

    case 45:
      current_block = (Rpc - LABEL_30_58);
      goto continuation_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (move_frame_up_53)
DEFLABEL (move_frame_up_50)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_54;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_33]));

DEFLABEL (label_54)
  (Wrd8.Obj) = (current_block [OBJECT_30_1]);
  if (! ((Wrd5.Obj) == (Wrd8.Obj)))
    goto label_55;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_24]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_30_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_43]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_30_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_29]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_30]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_30_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_30_29);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_48]));

DEFLABEL (label_55)
  if ((Wrd5.Obj) == (current_block [OBJECT_30_2]))
    goto label_58;
  if ((Wrd5.Obj) == (current_block [OBJECT_30_3]))
    goto label_56;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_30_5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_5]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_38]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_30_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_30_38);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_43]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_30_37);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_30_54);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_43]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_30_53);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_30_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_30_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_62]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_51);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_61]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_30_35);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_49]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_50]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_30_50);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_30_49);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_60]));

DEFLABEL (label_56)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (label_58)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  goto label_57;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_30_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_24]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_30_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_43]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_30_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_30_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_30_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_42]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_24]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_30_42);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_43]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_30_41);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_30_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_30_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_58]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_24]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_30_58);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_43]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30_57);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_30_39);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_55]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_56]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_30_56);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_30_55);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_63]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_30_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_24]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_30_28);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_43]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_30_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_30_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_30_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_24]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_30_47);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_43]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_30_46);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_30_25);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_44]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_45]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_30_45);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_30_44);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_59]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define TAG_31_6 1
#define LABEL_31_7 7
#define LABEL_31_9 9
#define LABEL_31_10 11
#define LABEL_31_11 13
#define LABEL_31_13 15
#define LABEL_31_14 17
#define LABEL_31_15 19
#define ENVIRONMENT_LABEL_31_3 40
#define DEBUGGING_LABEL_31_2 39
#define OBJECT_31_5 38
#define OBJECT_31_4 37
#define OBJECT_31_3 36
#define OBJECT_31_2 35
#define OBJECT_31_1 34
#define OBJECT_31_0 33
#define EXECUTE_CACHE_31_19 21
#define EXECUTE_CACHE_31_18 23
#define EXECUTE_CACHE_31_17 25
#define EXECUTE_CACHE_31_16 27
#define EXECUTE_CACHE_31_12 29
#define EXECUTE_CACHE_31_8 31
#define FREE_REFERENCES_LABEL_31_0 20
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd101;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd87;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_31_4);
      goto lambda_50;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto lambda_54;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_31;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_30;

    case 4:
      current_block = (Rpc - LABEL_31_10);
      goto continuation_36;

    case 5:
      current_block = (Rpc - LABEL_31_11);
      goto continuation_35;

    case 6:
      current_block = (Rpc - LABEL_31_13);
      goto continuation_34;

    case 7:
      current_block = (Rpc - LABEL_31_14);
      goto continuation_33;

    case 8:
      current_block = (Rpc - LABEL_31_15);
      goto continuation_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_53)
DEFLABEL (lambda_50)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_31_0])))
    goto label_55;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_55;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_59;

DEFLABEL (label_58)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  (Wrd40.Obj) = (current_block [OBJECT_31_1]);
  if (! ((Wrd37.Obj) == (Wrd40.Obj)))
    goto label_58;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_58;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_31_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_60;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd57.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd59.uLng) == 1)
    goto label_61;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd66.uLng) == 1)
    goto label_63;

DEFLABEL (label_62)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd69.Obj) = ((Wrd71.pObj) [0]);
  if (! ((Wrd69.Obj) == (Wrd40.Obj)))
    goto label_62;
  (Wrd73.Obj) = ((Wrd71.pObj) [1]);
  (Rsp [0]) = (Wrd73.Obj);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_62;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = ((Wrd79.pObj) [1]);
  if ((Wrd81.Obj) == (Wrd52.Obj))
    goto label_65;

DEFLABEL (label_64)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd87.Obj) = ((Wrd63.pObj) [1]);
  if (! ((Wrd87.Obj) == (Wrd52.Obj)))
    goto label_64;
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd96.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_5])));
  Rhp += 3;
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd96.pObj)));
  Wrd101 = Wrd96;
  ((Wrd101.pObj) [2]) = (Wrd22.Obj);
  ((Wrd101.pObj) [3]) = (Wrd48.Obj);
  ((Wrd101.pObj) [4]) = (Wrd80.Obj);
  Rvl = (Wrd95.Obj);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_31_5);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_31_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_31_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_16]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_31_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_19]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_31_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_31_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_31_5]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_18]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_31_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_31_10);
  (Wrd10.Obj) = (current_block [OBJECT_31_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 8
#define DEBUGGING_LABEL_32_2 7
#define OBJECT_32_0 6
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_32_4);
      goto make_code_word_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_code_word_5)
DEFLABEL (make_code_word_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_9;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (multiply_with_overflow ((Wrd17.Lng), 256, (& (Wrd13.Lng))))
    goto label_9;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd20.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_6;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd25.Lng) + (Wrd27.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_6;
  Rvl = (LONG_TO_FIXNUM (Wrd23.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd5.Obj) = (current_block [OBJECT_32_0]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_5 3
#define LABEL_33_4 5
#define LABEL_33_6 7
#define LABEL_33_7 9
#define LABEL_33_11 11
#define LABEL_33_12 13
#define LABEL_33_8 15
#define LABEL_33_13 17
#define LABEL_33_14 19
#define LABEL_33_15 21
#define LABEL_33_16 23
#define ENVIRONMENT_LABEL_33_3 34
#define DEBUGGING_LABEL_33_2 33
#define OBJECT_33_3 32
#define OBJECT_33_2 31
#define OBJECT_33_1 30
#define OBJECT_33_0 29
#define EXECUTE_CACHE_33_10 25
#define EXECUTE_CACHE_33_9 27
#define FREE_REFERENCES_LABEL_33_0 24
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd36;
  machine_word Wrd65;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd14;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd7;
  machine_word Wrd39;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_33_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_33_4);
      goto make_procedure_code_word_9;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_33_8);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_33_13);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_33_14);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_33_15);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_33_16);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_procedure_code_word_18)
DEFLABEL (make_procedure_code_word_9)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_36;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd34.Lng) < 0))
    goto label_34;

DEFLABEL (label_33)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_5);

DEFLABEL (label_32)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_8);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_31;
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd7.Lng) < 128L)
    goto label_29;

DEFLABEL (label_30)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_12);

DEFLABEL (label_29)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_28;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (multiply_with_overflow ((Wrd27.Lng), 256, (& (Wrd23.Lng))))
    goto label_28;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd20.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_26;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd65.Lng) < 0)
    goto label_24;

DEFLABEL (label_23)
  (Wrd39.Obj) = (Rsp [2]);

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd39.Obj);
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 26)
    goto label_20;

DEFLABEL (label_19)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_20)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_19;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd45.Lng) = ((Wrd47.Lng) + (Wrd49.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd45.Lng)))
    goto label_19;
  Rvl = (LONG_TO_FIXNUM (Wrd45.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_25;
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd59.Lng) = ((Wrd63.Lng) + 256L);
  if (! (LONG_TO_FIXNUM_P (Wrd59.Lng)))
    goto label_25;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd59.Lng));
  goto label_22;

DEFLABEL (label_25)
  (Wrd52.Obj) = (current_block [OBJECT_33_3]);
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_15)
  (Wrd39.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_26)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

DEFLABEL (label_28)
  (Wrd15.Obj) = (current_block [OBJECT_33_3]);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_13)
  (Wrd20.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  (Wrd67.Obj) = (current_block [OBJECT_33_0]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_29;

DEFLABEL (label_34)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_35;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd15.Lng) < 128L)
    goto label_32;
  goto label_33;

DEFLABEL (label_35)
  (Wrd28.Obj) = (current_block [OBJECT_33_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_32;

DEFLABEL (label_36)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_33_11);
  (Wrd39.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_5 3
#define LABEL_34_4 5
#define LABEL_34_6 7
#define LABEL_34_8 9
#define ENVIRONMENT_LABEL_34_3 21
#define DEBUGGING_LABEL_34_2 20
#define OBJECT_34_0 19
#define EXECUTE_CACHE_34_10 11
#define EXECUTE_CACHE_34_9 13
#define EXECUTE_CACHE_34_7 15
#define FREE_REFERENCE_34_0 18
#define FREE_REFERENCES_LABEL_34_0 10
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_34_4);
      goto continuation_code_word_2;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_code_word_6)
DEFLABEL (continuation_code_word_2)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_9)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_8;
  Wrd17 = Wrd21;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_6])), (Wrd18.pObj));

DEFLABEL (label_4)
  (Wrd17.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  (Wrd15.Obj) = (current_block [OBJECT_34_0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define ENVIRONMENT_LABEL_35_3 16
#define DEBUGGING_LABEL_35_2 15
#define EXECUTE_CACHE_35_8 9
#define EXECUTE_CACHE_35_6 11
#define FREE_REFERENCE_35_0 14
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_35_4);
      goto internal_procedure_code_word_1;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (internal_procedure_code_word_5)
DEFLABEL (internal_procedure_code_word_1)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_7;
  Wrd6 = Wrd10;

DEFLABEL (label_6)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_7])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define LABEL_36_9 9
#define LABEL_36_11 11
#define LABEL_36_12 13
#define LABEL_36_13 15
#define LABEL_36_15 17
#define ENVIRONMENT_LABEL_36_3 32
#define DEBUGGING_LABEL_36_2 31
#define OBJECT_36_3 30
#define OBJECT_36_2 29
#define OBJECT_36_1 28
#define OBJECT_36_0 27
#define EXECUTE_CACHE_36_14 19
#define EXECUTE_CACHE_36_10 21
#define EXECUTE_CACHE_36_8 23
#define EXECUTE_CACHE_36_6 25
#define FREE_REFERENCES_LABEL_36_0 18
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_36_4);
      goto frame_size__code_word_8;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_36_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_36_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_36_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_36_15);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame_size__code_word_15)
DEFLABEL (frame_size__code_word_8)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_27;
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd10.Lng) < 8192L)
    goto label_18;

DEFLABEL (label_17)
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_36_1]);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_36_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_9);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_26;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = ((Wrd16.Lng) + 128L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_26;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_25)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_24;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (multiply_with_overflow ((Wrd26.Lng), 256, (& (Wrd23.Lng))))
    goto label_24;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_23)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_36_13);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_22;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = ((Wrd16.Lng) + 128L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_22;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_20;

DEFLABEL (label_19)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_20)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_19;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) + (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_19;
  Rvl = (LONG_TO_FIXNUM (Wrd22.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd6.Obj) = (current_block [OBJECT_36_2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_13)
  (Wrd11.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd17.Obj) = (current_block [OBJECT_36_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd6.Obj) = (current_block [OBJECT_36_2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd21.Obj) = (current_block [OBJECT_36_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_9 7
#define LABEL_37_7 9
#define LABEL_37_10 11
#define LABEL_37_11 13
#define LABEL_37_15 15
#define ENVIRONMENT_LABEL_37_3 29
#define DEBUGGING_LABEL_37_2 28
#define OBJECT_37_0 27
#define EXECUTE_CACHE_37_14 17
#define EXECUTE_CACHE_37_13 19
#define EXECUTE_CACHE_37_12 21
#define EXECUTE_CACHE_37_8 23
#define EXECUTE_CACHE_37_6 25
#define FREE_REFERENCES_LABEL_37_0 16
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_37_4);
      goto simple_procedure_header_8;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_37_10);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_37_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simple_procedure_header_11)
DEFLABEL (simple_procedure_header_8)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_9);
  (Wrd12.Obj) = Rvl;

DEFLABEL (label_12)
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_37_11);
  (Wrd9.Obj) = (current_block [OBJECT_37_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_37_10);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_14]));

DEFLABEL (label_13)
  (Wrd12.Obj) = (current_block [OBJECT_37_0]);
  Rsp = (& (Rsp [1]));
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define LABEL_38_12 9
#define LABEL_38_9 11
#define LABEL_38_10 13
#define LABEL_38_15 15
#define ENVIRONMENT_LABEL_38_3 29
#define DEBUGGING_LABEL_38_2 28
#define OBJECT_38_0 27
#define EXECUTE_CACHE_38_14 17
#define EXECUTE_CACHE_38_13 19
#define EXECUTE_CACHE_38_11 21
#define EXECUTE_CACHE_38_8 23
#define EXECUTE_CACHE_38_6 25
#define FREE_REFERENCES_LABEL_38_0 16
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_38_4);
      goto dlink_procedure_header_8;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_38_12);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_38_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_38_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dlink_procedure_header_11)
DEFLABEL (dlink_procedure_header_8)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_38_10);
  (Wrd9.Obj) = (current_block [OBJECT_38_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_38_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_12);
  (Wrd12.Obj) = Rvl;

DEFLABEL (label_12)
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd13.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_13]));

DEFLABEL (label_13)
  (Wrd12.Obj) = (current_block [OBJECT_38_0]);
  Rsp = (& (Rsp [1]));
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define TAG_39_6 1
#define LABEL_39_7 7
#define LABEL_39_8 9
#define ENVIRONMENT_LABEL_39_3 20
#define DEBUGGING_LABEL_39_2 19
#define OBJECT_39_1 18
#define OBJECT_39_0 17
#define EXECUTE_CACHE_39_11 11
#define EXECUTE_CACHE_39_10 13
#define EXECUTE_CACHE_39_9 15
#define FREE_REFERENCES_LABEL_39_0 10
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_39_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_17)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_20;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_39_0])))
    goto label_19;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_19;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = ((Wrd21.pObj) [1]);
  if ((Wrd23.Obj) == (current_block [OBJECT_39_1]))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_5])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  ((Wrd32.pObj) [2]) = (Wrd22.Obj);
  Rvl = (Wrd31.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_39_5);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define TAG_40_6 1
#define LABEL_40_7 7
#define ENVIRONMENT_LABEL_40_3 17
#define DEBUGGING_LABEL_40_2 16
#define OBJECT_40_2 15
#define OBJECT_40_1 14
#define OBJECT_40_0 13
#define EXECUTE_CACHE_40_9 9
#define EXECUTE_CACHE_40_8 11
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_40_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_16)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_19;

DEFLABEL (label_18)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_40_0])))
    goto label_18;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_18;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = ((Wrd21.pObj) [1]);
  if ((Wrd23.Obj) == (current_block [OBJECT_40_1]))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_5])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  ((Wrd32.pObj) [2]) = (Wrd22.Obj);
  Rvl = (Wrd31.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_40_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_2]);
  (Rsp [3]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define TAG_41_6 1
#define LABEL_41_7 7
#define LABEL_41_10 9
#define LABEL_41_8 11
#define ENVIRONMENT_LABEL_41_3 25
#define DEBUGGING_LABEL_41_2 24
#define OBJECT_41_2 23
#define OBJECT_41_1 22
#define OBJECT_41_0 21
#define EXECUTE_CACHE_41_12 13
#define EXECUTE_CACHE_41_11 15
#define EXECUTE_CACHE_41_9 17
#define FREE_REFERENCE_41_0 20
#define FREE_REFERENCES_LABEL_41_0 12
#define NUMBER_OF_LINKER_SECTIONS_41_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_41_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto lambda_19;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_41_10);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_18)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_21;

DEFLABEL (label_20)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_41_0])))
    goto label_20;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_20;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = ((Wrd21.pObj) [1]);
  if ((Wrd23.Obj) == (current_block [OBJECT_41_1]))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_5])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  ((Wrd32.pObj) [2]) = (Wrd22.Obj);
  Rvl = (Wrd31.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_41_5);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_41_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_24;
  Wrd8 = Wrd12;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_41_2]);
  (Rsp [3]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_11]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_10])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define TAG_42_6 1
#define LABEL_42_7 7
#define LABEL_42_9 9
#define LABEL_42_11 11
#define LABEL_42_14 13
#define LABEL_42_15 15
#define LABEL_42_13 17
#define ENVIRONMENT_LABEL_42_3 35
#define DEBUGGING_LABEL_42_2 34
#define OBJECT_42_2 33
#define OBJECT_42_1 32
#define OBJECT_42_0 31
#define EXECUTE_CACHE_42_17 19
#define EXECUTE_CACHE_42_16 21
#define EXECUTE_CACHE_42_12 23
#define EXECUTE_CACHE_42_10 25
#define EXECUTE_CACHE_42_8 27
#define FREE_REFERENCE_42_0 30
#define FREE_REFERENCES_LABEL_42_0 18
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_42_4);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto lambda_25;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_42_11);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_42_14);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_42_15);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_42_13);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_24)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_42_0])))
    goto label_27;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = ((Wrd21.pObj) [1]);
  if ((Wrd23.Obj) == (current_block [OBJECT_42_1]))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_5])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  ((Wrd32.pObj) [2]) = (Wrd22.Obj);
  Rvl = (Wrd31.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_42_5);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_42_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_42_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_32;
  Wrd7 = Wrd11;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_42_15);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_14])), (Wrd8.pObj));

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_30;

DEFLABEL (lambda_26)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_42_13);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42_2]);
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_17]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define TAG_43_6 1
#define LABEL_43_7 7
#define LABEL_43_8 9
#define LABEL_43_10 11
#define ENVIRONMENT_LABEL_43_3 25
#define DEBUGGING_LABEL_43_2 24
#define OBJECT_43_2 23
#define OBJECT_43_1 22
#define OBJECT_43_0 21
#define EXECUTE_CACHE_43_13 13
#define EXECUTE_CACHE_43_12 15
#define EXECUTE_CACHE_43_11 17
#define EXECUTE_CACHE_43_9 19
#define FREE_REFERENCES_LABEL_43_0 12
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_43_4);
      goto lambda_25;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto lambda_29;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_16;

    case 3:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_15;

    case 4:
      current_block = (Rpc - LABEL_43_10);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_28)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_31;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_43_0])))
    goto label_30;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_30;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_32;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = ((Wrd41.pObj) [1]);
  if ((Wrd43.Obj) == (current_block [OBJECT_43_1]))
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd54.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_5])));
  Rhp += 3;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd54.pObj)));
  Wrd59 = Wrd54;
  ((Wrd59.pObj) [2]) = (Wrd22.Obj);
  ((Wrd59.pObj) [3]) = (Wrd32.Obj);
  ((Wrd59.pObj) [4]) = (Wrd42.Obj);
  Rvl = (Wrd53.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_43_5);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_9]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_43_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_43_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_11]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_43_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_43_2]);
  (Rsp [3]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 8
#define DEBUGGING_LABEL_44_2 7
#define EXECUTE_CACHE_44_5 5
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto label_statement_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (label_statement_3)
DEFLABEL (label_statement_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_7 5
#define LABEL_45_5 7
#define TAG_45_6 2
#define LABEL_45_8 9
#define LABEL_45_9 11
#define LABEL_45_12 13
#define LABEL_45_14 15
#define LABEL_45_15 17
#define LABEL_45_17 19
#define LABEL_45_20 21
#define LABEL_45_21 23
#define LABEL_45_23 25
#define LABEL_45_24 27
#define LABEL_45_26 29
#define ENVIRONMENT_LABEL_45_3 56
#define DEBUGGING_LABEL_45_2 55
#define OBJECT_45_3 54
#define OBJECT_45_2 53
#define OBJECT_45_1 52
#define OBJECT_45_0 51
#define EXECUTE_CACHE_45_28 31
#define EXECUTE_CACHE_45_27 33
#define EXECUTE_CACHE_45_25 35
#define EXECUTE_CACHE_45_22 37
#define EXECUTE_CACHE_45_19 39
#define EXECUTE_CACHE_45_18 41
#define EXECUTE_CACHE_45_16 43
#define EXECUTE_CACHE_45_13 45
#define EXECUTE_CACHE_45_11 47
#define EXECUTE_CACHE_45_10 49
#define FREE_REFERENCES_LABEL_45_0 30
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_38;

    case 1:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_15;

    case 2:
      current_block = (Rpc - LABEL_45_5);
      goto lambda_43;

    case 3:
      current_block = (Rpc - LABEL_45_8);
      goto label_40;

    case 4:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_16;

    case 5:
      current_block = (Rpc - LABEL_45_12);
      goto continuation_17;

    case 6:
      current_block = (Rpc - LABEL_45_14);
      goto continuation_19;

    case 7:
      current_block = (Rpc - LABEL_45_15);
      goto continuation_18;

    case 8:
      current_block = (Rpc - LABEL_45_17);
      goto continuation_20;

    case 9:
      current_block = (Rpc - LABEL_45_20);
      goto continuation_26;

    case 10:
      current_block = (Rpc - LABEL_45_21);
      goto continuation_24;

    case 11:
      current_block = (Rpc - LABEL_45_23);
      goto continuation_22;

    case 12:
      current_block = (Rpc - LABEL_45_24);
      goto continuation_21;

    case 13:
      current_block = (Rpc - LABEL_45_26);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_42)
DEFLABEL (lambda_38)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_45;

DEFLABEL (label_44)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_45_0])))
    goto label_44;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_44;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_47;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = ((Wrd41.pObj) [1]);
  if ((Wrd43.Obj) == (current_block [OBJECT_45_1]))
    goto label_48;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd42.Obj);
  (Rsp [1]) = (Wrd32.Obj);
  (Rsp [2]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd54.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_5])));
  Rhp += 2;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd54.pObj)));
  Wrd57 = Wrd54;
  ((Wrd57.pObj) [2]) = (Wrd22.Obj);
  ((Wrd57.pObj) [3]) = (Wrd32.Obj);
  Rvl = (Wrd53.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_45_5);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_51;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd32.Lng) == 0)
    goto label_50;

DEFLABEL (label_49)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_45_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_13]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_45_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_16]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_45_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_19]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_45_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_18]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_45_17);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_22]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_45_21);
  (Wrd9.Obj) = (current_block [OBJECT_45_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_26]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_18]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_45_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_27]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_45_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_25]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_45_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_28]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_45_23);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_27]));

DEFLABEL (label_50)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_45_2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_11]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_45_7);
  goto label_49;

DEFLABEL (label_51)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_50;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define TAG_46_6 1
#define ENVIRONMENT_LABEL_46_3 15
#define DEBUGGING_LABEL_46_2 14
#define OBJECT_46_4 13
#define OBJECT_46_3 12
#define OBJECT_46_2 11
#define OBJECT_46_1 10
#define OBJECT_46_0 9
#define EXECUTE_CACHE_46_7 7
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd149;
  machine_word Wrd139;
  machine_word Wrd140;
  machine_word Wrd129;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_46_4);
      goto lambda_62;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto lambda_66;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_65)
DEFLABEL (lambda_62)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_68;

DEFLABEL (label_67)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_46_0])))
    goto label_67;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_67;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_70;

DEFLABEL (label_69)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_46_1])))
    goto label_69;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_69;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_46_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_71;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_72;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_46_3])))
    goto label_73;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_73;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_46_4])))
    goto label_75;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_75;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_77;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_78;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd105.Obj) = ((Wrd101.pObj) [1]);
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd107.uLng) == 1)
    goto label_79;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd115.Obj) = ((Wrd111.pObj) [1]);
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd117.uLng) == 1)
    goto label_80;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd123.Obj) = ((Wrd121.pObj) [1]);
  if ((Wrd123.Obj) == (Wrd42.Obj))
    goto label_82;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_81;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd140.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_5])));
  Rhp += 5;
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd140.pObj)));
  Wrd149 = Wrd140;
  ((Wrd149.pObj) [2]) = (Wrd38.Obj);
  ((Wrd149.pObj) [3]) = (Wrd86.Obj);
  ((Wrd149.pObj) [4]) = (Wrd102.Obj);
  ((Wrd149.pObj) [5]) = (Wrd112.Obj);
  ((Wrd149.pObj) [6]) = (Wrd122.Obj);
  Rvl = (Wrd139.Obj);
  Rsp = (& (Rsp [18]));
  goto pop_return;

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_46_5);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [6]);
  (Rsp [4]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define LABEL_47_8 9
#define LABEL_47_9 11
#define LABEL_47_11 13
#define LABEL_47_19 15
#define LABEL_47_12 17
#define LABEL_47_13 19
#define LABEL_47_14 21
#define LABEL_47_17 23
#define LABEL_47_18 25
#define LABEL_47_24 27
#define LABEL_47_25 29
#define LABEL_47_26 31
#define ENVIRONMENT_LABEL_47_3 60
#define DEBUGGING_LABEL_47_2 59
#define OBJECT_47_5 58
#define OBJECT_47_4 57
#define OBJECT_47_3 56
#define OBJECT_47_2 55
#define OBJECT_47_1 54
#define OBJECT_47_0 53
#define EXECUTE_CACHE_47_28 33
#define EXECUTE_CACHE_47_27 35
#define EXECUTE_CACHE_47_23 37
#define EXECUTE_CACHE_47_22 39
#define EXECUTE_CACHE_47_21 41
#define EXECUTE_CACHE_47_20 43
#define EXECUTE_CACHE_47_16 45
#define EXECUTE_CACHE_47_15 47
#define EXECUTE_CACHE_47_10 49
#define EXECUTE_CACHE_47_6 51
#define FREE_REFERENCES_LABEL_47_0 32
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_47_4);
      goto cons_closure_17;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_47_8);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_47_9);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_47_11);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_47_19);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_47_12);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_47_13);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_47_14);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_47_17);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_47_18);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_47_24);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_47_25);
      goto continuation_2;

    case 14:
      current_block = (Rpc - LABEL_47_26);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cons_closure_21)
DEFLABEL (cons_closure_17)
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
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_47_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_47_8);
  (Wrd9.Obj) = (current_block [OBJECT_47_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_47_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_47_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_23]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_47_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_47_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_47_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_47_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [8]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_23;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd27.Lng) + 3L);
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_23;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_22)
  (Wrd29.Obj) = (current_block [OBJECT_47_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_47_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_28]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_27]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_47_17);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd16.Obj) = (current_block [OBJECT_47_4]);
  (Wrd17.Obj) = (Rsp [8]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_8 9
#define LABEL_48_9 11
#define LABEL_48_10 13
#define LABEL_48_11 15
#define LABEL_48_14 17
#define LABEL_48_15 19
#define LABEL_48_16 21
#define LABEL_48_18 23
#define LABEL_48_19 25
#define LABEL_48_20 27
#define LABEL_48_24 29
#define LABEL_48_25 31
#define LABEL_48_26 33
#define LABEL_48_28 35
#define LABEL_48_29 37
#define LABEL_48_30 39
#define LABEL_48_35 41
#define LABEL_48_36 43
#define LABEL_48_37 45
#define ENVIRONMENT_LABEL_48_3 83
#define DEBUGGING_LABEL_48_2 82
#define OBJECT_48_4 81
#define OBJECT_48_3 80
#define OBJECT_48_2 79
#define OBJECT_48_1 78
#define OBJECT_48_0 77
#define EXECUTE_CACHE_48_40 47
#define EXECUTE_CACHE_48_39 49
#define EXECUTE_CACHE_48_38 51
#define EXECUTE_CACHE_48_34 53
#define EXECUTE_CACHE_48_33 55
#define EXECUTE_CACHE_48_32 57
#define EXECUTE_CACHE_48_31 59
#define EXECUTE_CACHE_48_27 61
#define EXECUTE_CACHE_48_23 63
#define EXECUTE_CACHE_48_22 65
#define EXECUTE_CACHE_48_21 67
#define EXECUTE_CACHE_48_17 69
#define EXECUTE_CACHE_48_13 71
#define EXECUTE_CACHE_48_12 73
#define EXECUTE_CACHE_48_7 75
#define FREE_REFERENCES_LABEL_48_0 46
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_48_4);
      goto write_closure_entry_25;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_20;

    case 4:
      current_block = (Rpc - LABEL_48_9);
      goto continuation_19;

    case 5:
      current_block = (Rpc - LABEL_48_10);
      goto continuation_18;

    case 6:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_17;

    case 7:
      current_block = (Rpc - LABEL_48_14);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_48_15);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_48_16);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_48_18);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_48_19);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_48_20);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_48_24);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_48_25);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_48_26);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_48_28);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_48_29);
      goto continuation_9;

    case 18:
      current_block = (Rpc - LABEL_48_30);
      goto continuation_8;

    case 19:
      current_block = (Rpc - LABEL_48_35);
      goto continuation_3;

    case 20:
      current_block = (Rpc - LABEL_48_36);
      goto continuation_2;

    case 21:
      current_block = (Rpc - LABEL_48_37);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_closure_entry_28)
DEFLABEL (write_closure_entry_25)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_48_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_48_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_48_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_22]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_48_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_48_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_34]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_48_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_33]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_48_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_32]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_48_8);
  (Wrd9.Obj) = (current_block [OBJECT_48_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_48_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_48_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_31]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_48_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_30]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_48_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_34]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_48_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_33]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_48_28);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_32]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_48_14);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_24]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_26]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_27]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_48_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_38]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_48_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_48_37);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_48_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_40]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_48_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_35]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_48_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_36]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_21]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_39]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_35);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define TAG_49_6 1
#define LABEL_49_9 7
#define LABEL_49_10 9
#define LABEL_49_11 11
#define LABEL_49_12 13
#define LABEL_49_13 15
#define LABEL_49_14 17
#define LABEL_49_15 19
#define LABEL_49_17 21
#define LABEL_49_7 23
#define LABEL_49_20 25
#define LABEL_49_21 27
#define LABEL_49_23 29
#define LABEL_49_24 31
#define LABEL_49_27 33
#define LABEL_49_28 35
#define LABEL_49_29 37
#define LABEL_49_30 39
#define LABEL_49_31 41
#define ENVIRONMENT_LABEL_49_3 75
#define DEBUGGING_LABEL_49_2 74
#define OBJECT_49_10 73
#define OBJECT_49_9 72
#define OBJECT_49_8 71
#define OBJECT_49_7 70
#define OBJECT_49_6 69
#define OBJECT_49_5 68
#define OBJECT_49_4 67
#define OBJECT_49_3 66
#define OBJECT_49_2 65
#define OBJECT_49_1 64
#define OBJECT_49_0 63
#define EXECUTE_CACHE_49_34 43
#define EXECUTE_CACHE_49_33 45
#define EXECUTE_CACHE_49_32 47
#define EXECUTE_CACHE_49_26 49
#define EXECUTE_CACHE_49_25 51
#define EXECUTE_CACHE_49_22 53
#define EXECUTE_CACHE_49_19 55
#define EXECUTE_CACHE_49_18 57
#define EXECUTE_CACHE_49_16 59
#define EXECUTE_CACHE_49_8 61
#define FREE_REFERENCES_LABEL_49_0 42
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd101;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd68;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd7;
  machine_word Wrd114;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd97;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_49_4);
      goto lambda_72;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto lambda_83;

    case 2:
      current_block = (Rpc - LABEL_49_9);
      goto label_74;

    case 3:
      current_block = (Rpc - LABEL_49_10);
      goto label_75;

    case 4:
      current_block = (Rpc - LABEL_49_11);
      goto label_76;

    case 5:
      current_block = (Rpc - LABEL_49_12);
      goto label_77;

    case 6:
      current_block = (Rpc - LABEL_49_13);
      goto label_78;

    case 7:
      current_block = (Rpc - LABEL_49_14);
      goto label_79;

    case 8:
      current_block = (Rpc - LABEL_49_15);
      goto label_80;

    case 9:
      current_block = (Rpc - LABEL_49_17);
      goto continuation_35;

    case 10:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_44;

    case 11:
      current_block = (Rpc - LABEL_49_20);
      goto continuation_53;

    case 12:
      current_block = (Rpc - LABEL_49_21);
      goto continuation_52;

    case 13:
      current_block = (Rpc - LABEL_49_23);
      goto continuation_51;

    case 14:
      current_block = (Rpc - LABEL_49_24);
      goto continuation_50;

    case 15:
      current_block = (Rpc - LABEL_49_27);
      goto continuation_46;

    case 16:
      current_block = (Rpc - LABEL_49_28);
      goto continuation_45;

    case 17:
      current_block = (Rpc - LABEL_49_29);
      goto continuation_49;

    case 18:
      current_block = (Rpc - LABEL_49_30);
      goto continuation_48;

    case 19:
      current_block = (Rpc - LABEL_49_31);
      goto continuation_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_82)
DEFLABEL (lambda_72)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_85;

DEFLABEL (label_84)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_49_0])))
    goto label_84;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_84;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_87;

DEFLABEL (label_86)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_49_1])))
    goto label_86;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_86;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_49_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_88;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_89;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_91;

DEFLABEL (label_90)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_49_3])))
    goto label_90;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_90;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd73.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd75.uLng) == 1)
    goto label_92;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd83.Obj) = ((Wrd79.pObj) [1]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd85.uLng) == 1)
    goto label_93;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = ((Wrd89.pObj) [1]);
  if ((Wrd91.Obj) == (Wrd42.Obj))
    goto label_95;

DEFLABEL (label_94)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_95)
  (Wrd97.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd97.Obj) == (Wrd42.Obj)))
    goto label_94;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd107.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_5])));
  Rhp += 4;
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd107.pObj)));
  Wrd114 = Wrd107;
  ((Wrd114.pObj) [2]) = (Wrd38.Obj);
  ((Wrd114.pObj) [3]) = (Wrd70.Obj);
  ((Wrd114.pObj) [4]) = (Wrd80.Obj);
  ((Wrd114.pObj) [5]) = (Wrd90.Obj);
  Rvl = (Wrd106.Obj);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_49_5);

DEFLABEL (lambda_58)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_49_4])))
    goto label_96;
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd108.Obj) = (current_block [OBJECT_49_5]);
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd111.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd111.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_21]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_22]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_49_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_26]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_49_20);
  (Wrd9.Obj) = (current_block [OBJECT_49_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_23]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_49_10]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_25]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_49_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_31]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_22]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_49_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_34]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_49_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_33]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_49_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_32]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_49_23);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_27]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_28]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_22]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_49_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_32]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_49_27);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_96)
  if ((Wrd7.Obj) == (current_block [OBJECT_49_6]))
    goto label_97;
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_49_17);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_19]));

DEFLABEL (label_97)
  (Wrd42.Obj) = ((Wrd6.pObj) [5]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_111;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd39.Lng))))
    goto label_111;
  (Wrd27.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_110)
  (Rsp [0]) = (Wrd27.Obj);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_109;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_108)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_107;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_106)
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_105;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_104)
  (Wrd76.Obj) = (Rsp [3]);
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [2]);
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd82.Obj) = (Rsp [3]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_103;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [1]);

DEFLABEL (label_102)
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_101;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd88.Obj) = ((Wrd89.pObj) [1]);

DEFLABEL (label_100)
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_99;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd95.Obj) = ((Wrd96.pObj) [0]);

DEFLABEL (label_98)
  (Rsp [3]) = (Wrd95.Obj);
  (Wrd103.Obj) = (Rsp [4]);
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd102.Obj) = ((Wrd104.pObj) [4]);
  (Rsp [4]) = (Wrd102.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_16]));

DEFLABEL (label_99)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_15]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_9]), 1);

DEFLABEL (label_80)
  (Wrd95.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_14]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_8]), 1);

DEFLABEL (label_79)
  (Wrd88.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_13]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_8]), 1);

DEFLABEL (label_78)
  (Wrd79.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_9]), 1);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_9]), 1);

DEFLABEL (label_76)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_8]), 1);

DEFLABEL (label_75)
  (Wrd51.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [5]);
  (Wrd47.Obj) = (current_block [OBJECT_49_4]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_7]), 2);

DEFLABEL (label_74)
  (Wrd27.Obj) = Rvl;
  goto label_110;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define LABEL_50_8 9
#define LABEL_50_9 11
#define LABEL_50_11 13
#define LABEL_50_12 15
#define LABEL_50_13 17
#define LABEL_50_14 19
#define LABEL_50_15 21
#define LABEL_50_16 23
#define LABEL_50_19 25
#define LABEL_50_20 27
#define LABEL_50_24 29
#define LABEL_50_26 31
#define LABEL_50_31 33
#define LABEL_50_32 35
#define LABEL_50_33 37
#define LABEL_50_34 39
#define LABEL_50_35 41
#define LABEL_50_36 43
#define LABEL_50_28 45
#define LABEL_50_40 47
#define LABEL_50_41 49
#define LABEL_50_42 51
#define LABEL_50_29 53
#define LABEL_50_38 55
#define LABEL_50_39 57
#define LABEL_50_44 59
#define LABEL_50_45 61
#define LABEL_50_46 63
#define ENVIRONMENT_LABEL_50_3 103
#define DEBUGGING_LABEL_50_2 102
#define OBJECT_50_8 101
#define OBJECT_50_7 100
#define OBJECT_50_6 99
#define OBJECT_50_5 98
#define OBJECT_50_4 97
#define OBJECT_50_3 96
#define OBJECT_50_2 95
#define OBJECT_50_1 94
#define OBJECT_50_0 93
#define EXECUTE_CACHE_50_48 65
#define EXECUTE_CACHE_50_47 67
#define EXECUTE_CACHE_50_43 69
#define EXECUTE_CACHE_50_37 71
#define EXECUTE_CACHE_50_30 73
#define EXECUTE_CACHE_50_27 75
#define EXECUTE_CACHE_50_25 77
#define EXECUTE_CACHE_50_23 79
#define EXECUTE_CACHE_50_22 81
#define EXECUTE_CACHE_50_21 83
#define EXECUTE_CACHE_50_18 85
#define EXECUTE_CACHE_50_17 87
#define EXECUTE_CACHE_50_10 89
#define EXECUTE_CACHE_50_6 91
#define FREE_REFERENCES_LABEL_50_0 64
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto cons_multiclosure_35;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_30;

    case 3:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_28;

    case 4:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_27;

    case 5:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_50_12);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_50_13);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_50_14);
      goto continuation_26;

    case 9:
      current_block = (Rpc - LABEL_50_15);
      goto continuation_25;

    case 10:
      current_block = (Rpc - LABEL_50_16);
      goto continuation_24;

    case 11:
      current_block = (Rpc - LABEL_50_19);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_50_20);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_50_24);
      goto lambda_16;

    case 14:
      current_block = (Rpc - LABEL_50_26);
      goto lambda_23;

    case 15:
      current_block = (Rpc - LABEL_50_31);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_50_32);
      goto label_38;

    case 17:
      current_block = (Rpc - LABEL_50_33);
      goto label_39;

    case 18:
      current_block = (Rpc - LABEL_50_34);
      goto label_40;

    case 19:
      current_block = (Rpc - LABEL_50_35);
      goto label_41;

    case 20:
      current_block = (Rpc - LABEL_50_36);
      goto label_42;

    case 21:
      current_block = (Rpc - LABEL_50_28);
      goto continuation_10;

    case 22:
      current_block = (Rpc - LABEL_50_40);
      goto label_43;

    case 23:
      current_block = (Rpc - LABEL_50_41);
      goto label_44;

    case 24:
      current_block = (Rpc - LABEL_50_42);
      goto label_45;

    case 25:
      current_block = (Rpc - LABEL_50_29);
      goto continuation_9;

    case 26:
      current_block = (Rpc - LABEL_50_38);
      goto continuation_8;

    case 27:
      current_block = (Rpc - LABEL_50_39);
      goto continuation_7;

    case 28:
      current_block = (Rpc - LABEL_50_44);
      goto continuation_3;

    case 29:
      current_block = (Rpc - LABEL_50_45);
      goto continuation_2;

    case 30:
      current_block = (Rpc - LABEL_50_46);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cons_multiclosure_47)
DEFLABEL (cons_multiclosure_35)
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
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_50_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_18]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_50_8);
  (Wrd9.Obj) = (current_block [OBJECT_50_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_17]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_50_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_27]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_50_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_25]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_50_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_23]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_50_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_50_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_21]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_50_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_50_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_20]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_50_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_30]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_50_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_28]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_29]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_50_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_50_28);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_38]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_39]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_55;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (multiply_with_overflow ((Wrd26.Lng), 3, (& (Wrd24.Lng))))
    goto label_55;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_54)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_53;
  (Wrd36.Obj) = (Rsp [6]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_53;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd38.Lng) = ((Wrd39.Lng) + (Wrd41.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd38.Lng)))
    goto label_53;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));

DEFLABEL (label_52)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_51;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd47.Lng) = ((Wrd48.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd47.Lng)))
    goto label_51;
  (Wrd49.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_50)
  (Wrd50.Obj) = (current_block [OBJECT_50_8]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_43]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_50_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_46]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_46);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_48]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_45);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_47]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_50_38);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_42]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd30.Obj) = (Rsp [6]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_41]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_44)
  (Wrd34.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.Obj) = (current_block [OBJECT_50_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_40]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_43)
  (Wrd21.Obj) = Rvl;
  goto label_54;

DEFLABEL (lambda_48)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_50_24);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_23]));

DEFLABEL (lambda_49)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_50_26);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_67;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_66)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_65;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_64)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_63;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_62)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_61;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_60)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_59;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_58)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_57;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_56)
  (Rsp [2]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_37]));

DEFLABEL (label_57)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_36]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_6]), 1);

DEFLABEL (label_42)
  (Wrd46.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_35]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_5]), 1);

DEFLABEL (label_41)
  (Wrd39.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_34]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_5]), 1);

DEFLABEL (label_40)
  (Wrd30.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_33]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_6]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_6]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_31]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_5]), 1);

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_66;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_6 7
#define LABEL_51_8 9
#define LABEL_51_9 11
#define LABEL_51_7 13
#define ENVIRONMENT_LABEL_51_3 17
#define DEBUGGING_LABEL_51_2 16
#define OBJECT_51_1 15
#define OBJECT_51_0 14
#define FREE_REFERENCES_LABEL_51_0 14
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_51_4);
      goto make_multiclosure_offsets_7;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto generate_5;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_51_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_51_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_multiclosure_offsets_13)
DEFLABEL (make_multiclosure_offsets_7)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_51_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto generate_5;

DEFLABEL (generate_14)
DEFLABEL (generate_5)
  INTERRUPT_CHECK (26, LABEL_51_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_21;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd41.Lng) > 0)
    goto label_16;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_51_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_20;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) + 3L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_20;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_19)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_18;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd36.Lng) = ((Wrd38.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd36.Lng)))
    goto label_18;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_17)
  goto generate_5;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_51_7);
  (Wrd10.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_51_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_7 7
#define LABEL_52_8 9
#define LABEL_52_10 11
#define LABEL_52_13 13
#define LABEL_52_14 15
#define LABEL_52_16 17
#define LABEL_52_17 19
#define LABEL_52_19 21
#define LABEL_52_20 23
#define LABEL_52_22 25
#define ENVIRONMENT_LABEL_52_3 50
#define DEBUGGING_LABEL_52_2 49
#define OBJECT_52_1 48
#define OBJECT_52_0 47
#define EXECUTE_CACHE_52_25 27
#define EXECUTE_CACHE_52_24 29
#define EXECUTE_CACHE_52_23 31
#define EXECUTE_CACHE_52_21 33
#define EXECUTE_CACHE_52_18 35
#define EXECUTE_CACHE_52_15 37
#define EXECUTE_CACHE_52_12 39
#define EXECUTE_CACHE_52_11 41
#define EXECUTE_CACHE_52_9 43
#define EXECUTE_CACHE_52_6 45
#define FREE_REFERENCES_LABEL_52_0 26
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_52_4);
      goto generate_quotation_header_13;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_52_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_52_10);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_52_13);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_52_14);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_52_16);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_52_17);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_52_19);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_52_20);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_52_22);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_quotation_header_16)
DEFLABEL (generate_quotation_header_13)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_52_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_52_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_52_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_52_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_52_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_52_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_52_13);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_52_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_23]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_52_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_25]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_52_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define LABEL_53_7 7
#define LABEL_53_9 9
#define LABEL_53_10 11
#define LABEL_53_12 13
#define LABEL_53_15 15
#define LABEL_53_16 17
#define LABEL_53_17 19
#define LABEL_53_19 21
#define LABEL_53_20 23
#define LABEL_53_22 25
#define LABEL_53_23 27
#define LABEL_53_25 29
#define LABEL_53_26 31
#define LABEL_53_27 33
#define LABEL_53_29 35
#define ENVIRONMENT_LABEL_53_3 73
#define DEBUGGING_LABEL_53_2 72
#define OBJECT_53_2 71
#define OBJECT_53_1 70
#define OBJECT_53_0 69
#define EXECUTE_CACHE_53_36 37
#define EXECUTE_CACHE_53_35 39
#define EXECUTE_CACHE_53_34 41
#define EXECUTE_CACHE_53_33 43
#define EXECUTE_CACHE_53_32 45
#define EXECUTE_CACHE_53_31 47
#define EXECUTE_CACHE_53_30 49
#define EXECUTE_CACHE_53_28 51
#define EXECUTE_CACHE_53_24 53
#define EXECUTE_CACHE_53_21 55
#define EXECUTE_CACHE_53_18 57
#define EXECUTE_CACHE_53_14 59
#define EXECUTE_CACHE_53_13 61
#define EXECUTE_CACHE_53_11 63
#define EXECUTE_CACHE_53_8 65
#define EXECUTE_CACHE_53_6 67
#define FREE_REFERENCES_LABEL_53_0 36
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_53_4);
      goto generate_remote_link_17;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_53_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_53_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_53_12);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_53_15);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_53_16);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_53_17);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_53_19);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_53_20);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_53_22);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_53_23);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_53_25);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_53_26);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_53_27);
      goto continuation_4;

    case 16:
      current_block = (Rpc - LABEL_53_29);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_remote_link_20)
DEFLABEL (generate_remote_link_17)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_53_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_53_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_53_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_32]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_53_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_53_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_31]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_53_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_53_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_30]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_53_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_36]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_53_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_27]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_28]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_53_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_35]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_53_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_53_2]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_34]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_53_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_33]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_53_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_6 7
#define LABEL_54_7 9
#define LABEL_54_8 11
#define LABEL_54_9 13
#define LABEL_54_10 15
#define LABEL_54_12 17
#define LABEL_54_13 19
#define ENVIRONMENT_LABEL_54_3 33
#define DEBUGGING_LABEL_54_2 32
#define OBJECT_54_3 31
#define OBJECT_54_2 30
#define OBJECT_54_1 29
#define OBJECT_54_0 28
#define EXECUTE_CACHE_54_11 21
#define FREE_REFERENCE_54_1 24
#define FREE_REFERENCE_54_0 25
#define FREE_ASSIGNMENT_54_0 27
#define FREE_REFERENCES_LABEL_54_0 20
#define NUMBER_OF_LINKER_SECTIONS_54_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_54_4);
      goto add_remote_linkB_5;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_54_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_54_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_54_8);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_54_9);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_54_10);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_54_12);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_54_13);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_remote_linkB_15)
DEFLABEL (add_remote_linkB_5)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_31;
  Wrd5 = Wrd9;

DEFLABEL (label_30)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;

DEFLABEL (label_24)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_23;
  Wrd13 = Wrd17;

DEFLABEL (label_22)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_21;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_20)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_19;
  Wrd11 = Wrd15;

DEFLABEL (label_18)
  (Wrd17.Obj) = (* (Rsp++));
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_17;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  ((Wrd20.pObj) [1]) = (Wrd17.Obj);

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_54_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 2);

DEFLABEL (label_13)
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_12])), (Wrd12.pObj));

DEFLABEL (label_12)
  (Wrd11.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_8])), (Wrd14.pObj));

DEFLABEL (label_8)
  (Wrd13.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_29;
  Wrd31 = Wrd35;

DEFLABEL (label_28)
  (Wrd40.Obj) = (current_block [OBJECT_54_0]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_54_0]));
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd41.pObj) [0]) = (Wrd37.Obj);
  goto label_24;

DEFLABEL (label_27)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_54_7])), (Wrd41.pObj), (Wrd37.Obj));

DEFLABEL (label_11)
  goto label_24;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_6])), (Wrd32.pObj));

DEFLABEL (label_10)
  (Wrd31.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_7 7
#define LABEL_55_8 9
#define LABEL_55_10 11
#define LABEL_55_11 13
#define LABEL_55_12 15
#define LABEL_55_13 17
#define LABEL_55_15 19
#define LABEL_55_16 21
#define LABEL_55_17 23
#define LABEL_55_18 25
#define LABEL_55_21 27
#define LABEL_55_22 29
#define LABEL_55_23 31
#define LABEL_55_25 33
#define LABEL_55_26 35
#define LABEL_55_27 37
#define LABEL_55_28 39
#define LABEL_55_29 41
#define LABEL_55_30 43
#define LABEL_55_32 45
#define LABEL_55_37 47
#define LABEL_55_38 49
#define LABEL_55_39 51
#define LABEL_55_40 53
#define LABEL_55_42 55
#define LABEL_55_43 57
#define LABEL_55_47 59
#define LABEL_55_48 61
#define LABEL_55_49 63
#define LABEL_55_53 65
#define LABEL_55_54 67
#define LABEL_55_57 69
#define LABEL_55_58 71
#define LABEL_55_59 73
#define LABEL_55_61 75
#define LABEL_55_62 77
#define LABEL_55_63 79
#define LABEL_55_64 81
#define LABEL_55_65 83
#define LABEL_55_68 85
#define LABEL_55_69 87
#define LABEL_55_71 89
#define LABEL_55_74 91
#define LABEL_55_75 93
#define LABEL_55_76 95
#define LABEL_55_77 97
#define LABEL_55_78 99
#define LABEL_55_79 101
#define LABEL_55_80 103
#define ENVIRONMENT_LABEL_55_3 188
#define DEBUGGING_LABEL_55_2 187
#define OBJECT_55_17 186
#define OBJECT_55_16 185
#define OBJECT_55_15 184
#define OBJECT_55_14 183
#define OBJECT_55_13 182
#define OBJECT_55_12 181
#define OBJECT_55_11 180
#define OBJECT_55_10 179
#define OBJECT_55_9 178
#define OBJECT_55_8 177
#define OBJECT_55_7 176
#define OBJECT_55_6 175
#define OBJECT_55_5 174
#define OBJECT_55_4 173
#define OBJECT_55_3 172
#define OBJECT_55_2 171
#define OBJECT_55_1 170
#define OBJECT_55_0 169
#define EXECUTE_CACHE_55_84 105
#define EXECUTE_CACHE_55_83 107
#define EXECUTE_CACHE_55_81 109
#define EXECUTE_CACHE_55_73 111
#define EXECUTE_CACHE_55_82 113
#define EXECUTE_CACHE_55_72 115
#define EXECUTE_CACHE_55_70 117
#define EXECUTE_CACHE_55_67 119
#define EXECUTE_CACHE_55_66 121
#define EXECUTE_CACHE_55_56 123
#define EXECUTE_CACHE_55_55 125
#define EXECUTE_CACHE_55_52 127
#define EXECUTE_CACHE_55_51 129
#define EXECUTE_CACHE_55_50 131
#define EXECUTE_CACHE_55_46 133
#define EXECUTE_CACHE_55_45 135
#define EXECUTE_CACHE_55_44 137
#define EXECUTE_CACHE_55_41 139
#define EXECUTE_CACHE_55_60 141
#define EXECUTE_CACHE_55_36 143
#define EXECUTE_CACHE_55_35 145
#define EXECUTE_CACHE_55_34 147
#define EXECUTE_CACHE_55_33 149
#define EXECUTE_CACHE_55_31 151
#define EXECUTE_CACHE_55_24 153
#define EXECUTE_CACHE_55_20 155
#define EXECUTE_CACHE_55_19 157
#define EXECUTE_CACHE_55_14 159
#define EXECUTE_CACHE_55_9 161
#define EXECUTE_CACHE_55_6 163
#define FREE_REFERENCE_55_0 166
#define FREE_ASSIGNMENT_55_0 168
#define FREE_REFERENCES_LABEL_55_0 104
#define NUMBER_OF_LINKER_SECTIONS_55_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules3_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_55_4);
      goto generate_remote_links_53;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_55_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_55_10);
      goto label_55;

    case 5:
      current_block = (Rpc - LABEL_55_11);
      goto label_56;

    case 6:
      current_block = (Rpc - LABEL_55_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_55_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_55_15);
      goto continuation_51;

    case 9:
      current_block = (Rpc - LABEL_55_16);
      goto continuation_49;

    case 10:
      current_block = (Rpc - LABEL_55_17);
      goto continuation_47;

    case 11:
      current_block = (Rpc - LABEL_55_18);
      goto continuation_46;

    case 12:
      current_block = (Rpc - LABEL_55_21);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_55_22);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_55_23);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_55_25);
      goto continuation_44;

    case 16:
      current_block = (Rpc - LABEL_55_26);
      goto continuation_43;

    case 17:
      current_block = (Rpc - LABEL_55_27);
      goto continuation_42;

    case 18:
      current_block = (Rpc - LABEL_55_28);
      goto continuation_41;

    case 19:
      current_block = (Rpc - LABEL_55_29);
      goto continuation_40;

    case 20:
      current_block = (Rpc - LABEL_55_30);
      goto continuation_39;

    case 21:
      current_block = (Rpc - LABEL_55_32);
      goto continuation_45;

    case 22:
      current_block = (Rpc - LABEL_55_37);
      goto continuation_9;

    case 23:
      current_block = (Rpc - LABEL_55_38);
      goto continuation_36;

    case 24:
      current_block = (Rpc - LABEL_55_39);
      goto continuation_35;

    case 25:
      current_block = (Rpc - LABEL_55_40);
      goto continuation_34;

    case 26:
      current_block = (Rpc - LABEL_55_42);
      goto continuation_38;

    case 27:
      current_block = (Rpc - LABEL_55_43);
      goto continuation_37;

    case 28:
      current_block = (Rpc - LABEL_55_47);
      goto continuation_32;

    case 29:
      current_block = (Rpc - LABEL_55_48);
      goto continuation_31;

    case 30:
      current_block = (Rpc - LABEL_55_49);
      goto continuation_33;

    case 31:
      current_block = (Rpc - LABEL_55_53);
      goto continuation_30;

    case 32:
      current_block = (Rpc - LABEL_55_54);
      goto continuation_29;

    case 33:
      current_block = (Rpc - LABEL_55_57);
      goto continuation_25;

    case 34:
      current_block = (Rpc - LABEL_55_58);
      goto continuation_24;

    case 35:
      current_block = (Rpc - LABEL_55_59);
      goto continuation_23;

    case 36:
      current_block = (Rpc - LABEL_55_61);
      goto continuation_28;

    case 37:
      current_block = (Rpc - LABEL_55_62);
      goto continuation_27;

    case 38:
      current_block = (Rpc - LABEL_55_63);
      goto continuation_26;

    case 39:
      current_block = (Rpc - LABEL_55_64);
      goto continuation_22;

    case 40:
      current_block = (Rpc - LABEL_55_65);
      goto continuation_21;

    case 41:
      current_block = (Rpc - LABEL_55_68);
      goto continuation_20;

    case 42:
      current_block = (Rpc - LABEL_55_69);
      goto continuation_19;

    case 43:
      current_block = (Rpc - LABEL_55_71);
      goto continuation_18;

    case 44:
      current_block = (Rpc - LABEL_55_74);
      goto continuation_17;

    case 45:
      current_block = (Rpc - LABEL_55_75);
      goto continuation_16;

    case 46:
      current_block = (Rpc - LABEL_55_76);
      goto continuation_15;

    case 47:
      current_block = (Rpc - LABEL_55_77);
      goto continuation_14;

    case 48:
      current_block = (Rpc - LABEL_55_78);
      goto continuation_13;

    case 49:
      current_block = (Rpc - LABEL_55_79);
      goto continuation_12;

    case 50:
      current_block = (Rpc - LABEL_55_80);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_remote_links_58)
DEFLABEL (generate_remote_links_53)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_55_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_63;
  Wrd6 = Wrd10;

DEFLABEL (label_62)
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_55_0]));
  (Wrd24.Obj) = ((Wrd16.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd16.pObj) [0]) = (Wrd13.Obj);

DEFLABEL (label_59)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_55_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_55_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_19]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_55_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_34]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_55_17);
  (Wrd9.Obj) = (current_block [OBJECT_55_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_32]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_33]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_55_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_46]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_55_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_55_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_27]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_28]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_30]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_31]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_55_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_45]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_55_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_41]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_55_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_41]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_55_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_42]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_43]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_44]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_55_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_52]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_55_42);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_51]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_55_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_40]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_55_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_41]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_55_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_36]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_55_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_50]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_55_49);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_56]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_55_38);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_55_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_55_8]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_31]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_55_48);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_56]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_55_47);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_55]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_55_54);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_63]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_55_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_31]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_55_63);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_45]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_55_62);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_31]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_55_61);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_56]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_55_53);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_58]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_59]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_55_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_55_10]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_55_11]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_60]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_55_59);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_67]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_55_58);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_56]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_55_57);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_65]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_66]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_55_65);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_56]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_55_64);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_69]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_55_6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_70]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_55_69);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_73]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_55_68);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_72]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_55_71);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_72]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_55_74);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_72]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_55_75);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_77]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_78]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_50]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_55_78);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_45]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_55_77);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_55_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_82]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_55_76);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_80]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [20]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_81]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_55_80);
  (Wrd9.Obj) = (current_block [OBJECT_55_12]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_55_16]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_55_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_55_17]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_84]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_55_79);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_83]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_55_25);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_37]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_33]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_55_37);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_46]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_55_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_55_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_55_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_36]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_55_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_35]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_55_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_61)
  if ((Wrd24.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_55_11])), (Wrd16.pObj), (Wrd13.Obj));

DEFLABEL (label_56)
  goto label_59;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_10])), (Wrd7.pObj));

DEFLABEL (label_55)
  (Wrd6.Obj) = Rvl;
  goto label_62;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_7 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_15 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_18 29
#define LABEL_19 31
#define LABEL_20 33
#define LABEL_21 35
#define LABEL_22 37
#define LABEL_23 39
#define LABEL_24 41
#define LABEL_25 43
#define LABEL_26 45
#define LABEL_27 47
#define LABEL_28 49
#define LABEL_29 51
#define LABEL_30 53
#define LABEL_31 55
#define LABEL_32 57
#define LABEL_33 59
#define LABEL_34 61
#define LABEL_35 63
#define LABEL_36 65
#define LABEL_38 67
#define LABEL_39 69
#define LABEL_40 71
#define LABEL_41 73
#define LABEL_42 75
#define LABEL_43 77
#define LABEL_44 79
#define LABEL_45 81
#define LABEL_46 83
#define LABEL_47 85
#define LABEL_48 87
#define LABEL_49 89
#define LABEL_50 91
#define ENVIRONMENT_LABEL_3 188
#define DEBUGGING_LABEL_2 187
#define PURIFICATION_ROOT 186
#define OBJECT_87 185
#define OBJECT_86 184
#define OBJECT_85 183
#define OBJECT_84 182
#define OBJECT_83 181
#define OBJECT_82 180
#define OBJECT_81 179
#define OBJECT_80 178
#define OBJECT_79 177
#define OBJECT_78 176
#define OBJECT_77 175
#define OBJECT_76 174
#define OBJECT_75 173
#define OBJECT_74 172
#define OBJECT_73 171
#define OBJECT_72 170
#define OBJECT_71 169
#define OBJECT_70 168
#define OBJECT_69 167
#define OBJECT_68 166
#define OBJECT_67 165
#define OBJECT_66 164
#define OBJECT_65 163
#define OBJECT_64 162
#define OBJECT_63 161
#define OBJECT_62 160
#define OBJECT_61 159
#define OBJECT_60 158
#define OBJECT_59 157
#define OBJECT_58 156
#define OBJECT_57 155
#define OBJECT_56 154
#define OBJECT_55 153
#define OBJECT_54 152
#define OBJECT_53 151
#define OBJECT_52 150
#define OBJECT_51 149
#define OBJECT_50 148
#define OBJECT_49 147
#define OBJECT_48 146
#define OBJECT_47 145
#define OBJECT_46 144
#define OBJECT_45 143
#define OBJECT_44 142
#define OBJECT_43 141
#define OBJECT_42 140
#define OBJECT_41 139
#define OBJECT_40 138
#define OBJECT_39 137
#define OBJECT_38 136
#define OBJECT_37 135
#define OBJECT_36 134
#define OBJECT_35 133
#define OBJECT_34 132
#define OBJECT_33 131
#define OBJECT_32 130
#define OBJECT_31 129
#define OBJECT_30 128
#define OBJECT_29 127
#define OBJECT_28 126
#define OBJECT_27 125
#define OBJECT_26 124
#define OBJECT_25 123
#define OBJECT_24 122
#define OBJECT_23 121
#define OBJECT_22 120
#define OBJECT_21 119
#define OBJECT_20 118
#define OBJECT_19 117
#define OBJECT_18 116
#define OBJECT_17 115
#define OBJECT_16 114
#define OBJECT_15 113
#define OBJECT_14 112
#define OBJECT_13 111
#define OBJECT_12 110
#define OBJECT_11 109
#define OBJECT_10 108
#define OBJECT_9 107
#define OBJECT_8 106
#define OBJECT_7 105
#define OBJECT_6 104
#define OBJECT_5 103
#define OBJECT_4 102
#define OBJECT_3 101
#define OBJECT_2 100
#define OBJECT_1 99
#define OBJECT_0 98
#define EXECUTE_CACHE_6 93
#define GLOBAL_EXECUTE_CACHE_37 96
#define FREE_REFERENCES_LABEL_0 92
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rules3_so_5d595775909a10c4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_27);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_28);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_29);
      goto continuation_24;

    case 25:
      current_block = (Rpc - LABEL_30);
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_31);
      goto continuation_26;

    case 27:
      current_block = (Rpc - LABEL_32);
      goto continuation_27;

    case 28:
      current_block = (Rpc - LABEL_33);
      goto continuation_28;

    case 29:
      current_block = (Rpc - LABEL_34);
      goto continuation_29;

    case 30:
      current_block = (Rpc - LABEL_35);
      goto continuation_30;

    case 31:
      current_block = (Rpc - LABEL_36);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_38);
      goto continuation_32;

    case 33:
      current_block = (Rpc - LABEL_39);
      goto continuation_33;

    case 34:
      current_block = (Rpc - LABEL_40);
      goto continuation_34;

    case 35:
      current_block = (Rpc - LABEL_41);
      goto continuation_35;

    case 36:
      current_block = (Rpc - LABEL_42);
      goto continuation_36;

    case 37:
      current_block = (Rpc - LABEL_43);
      goto continuation_37;

    case 38:
      current_block = (Rpc - LABEL_44);
      goto continuation_38;

    case 39:
      current_block = (Rpc - LABEL_45);
      goto continuation_39;

    case 40:
      current_block = (Rpc - LABEL_46);
      goto continuation_40;

    case 41:
      current_block = (Rpc - LABEL_47);
      goto continuation_41;

    case 42:
      current_block = (Rpc - LABEL_48);
      goto label_46;

    case 43:
      current_block = (Rpc - LABEL_49);
      goto label_47;

    case 44:
      current_block = (Rpc - LABEL_50);
      goto expression_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_43)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_49])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_47)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_46)
  {
    static const short sections [] =
      {
	0,
	3,
	3,
	1,
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
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	1,
	0,
	1,
	1,
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 55)
      goto label_45;
    blocks = (current_block [OBJECT_87]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_48])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_45)
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
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_37]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_37]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd5.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_86]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_37]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rules3_so_5d595775909a10c4 [55] =
  {
    { "rules3_so_code_1", 3, rules3_so_code_1 },
    { "rules3_so_code_2", 2, rules3_so_code_2 },
    { "rules3_so_code_3", 7, rules3_so_code_3 },
    { "rules3_so_code_4", 4, rules3_so_code_4 },
    { "rules3_so_code_5", 2, rules3_so_code_5 },
    { "rules3_so_code_6", 8, rules3_so_code_6 },
    { "rules3_so_code_7", 9, rules3_so_code_7 },
    { "rules3_so_code_8", 7, rules3_so_code_8 },
    { "rules3_so_code_9", 7, rules3_so_code_9 },
    { "rules3_so_code_10", 5, rules3_so_code_10 },
    { "rules3_so_code_11", 7, rules3_so_code_11 },
    { "rules3_so_code_12", 12, rules3_so_code_12 },
    { "rules3_so_code_13", 3, rules3_so_code_13 },
    { "rules3_so_code_14", 3, rules3_so_code_14 },
    { "rules3_so_code_15", 3, rules3_so_code_15 },
    { "rules3_so_code_16", 3, rules3_so_code_16 },
    { "rules3_so_code_17", 3, rules3_so_code_17 },
    { "rules3_so_code_18", 3, rules3_so_code_18 },
    { "rules3_so_code_19", 3, rules3_so_code_19 },
    { "rules3_so_code_20", 3, rules3_so_code_20 },
    { "rules3_so_code_21", 3, rules3_so_code_21 },
    { "rules3_so_code_22", 3, rules3_so_code_22 },
    { "rules3_so_code_23", 3, rules3_so_code_23 },
    { "rules3_so_code_24", 3, rules3_so_code_24 },
    { "rules3_so_code_25", 3, rules3_so_code_25 },
    { "rules3_so_code_26", 3, rules3_so_code_26 },
    { "rules3_so_code_27", 3, rules3_so_code_27 },
    { "rules3_so_code_28", 2, rules3_so_code_28 },
    { "rules3_so_code_29", 4, rules3_so_code_29 },
    { "rules3_so_code_30", 46, rules3_so_code_30 },
    { "rules3_so_code_31", 9, rules3_so_code_31 },
    { "rules3_so_code_32", 2, rules3_so_code_32 },
    { "rules3_so_code_33", 11, rules3_so_code_33 },
    { "rules3_so_code_34", 4, rules3_so_code_34 },
    { "rules3_so_code_35", 3, rules3_so_code_35 },
    { "rules3_so_code_36", 8, rules3_so_code_36 },
    { "rules3_so_code_37", 7, rules3_so_code_37 },
    { "rules3_so_code_38", 7, rules3_so_code_38 },
    { "rules3_so_code_39", 4, rules3_so_code_39 },
    { "rules3_so_code_40", 3, rules3_so_code_40 },
    { "rules3_so_code_41", 5, rules3_so_code_41 },
    { "rules3_so_code_42", 8, rules3_so_code_42 },
    { "rules3_so_code_43", 5, rules3_so_code_43 },
    { "rules3_so_code_44", 1, rules3_so_code_44 },
    { "rules3_so_code_45", 14, rules3_so_code_45 },
    { "rules3_so_code_46", 2, rules3_so_code_46 },
    { "rules3_so_code_47", 15, rules3_so_code_47 },
    { "rules3_so_code_48", 22, rules3_so_code_48 },
    { "rules3_so_code_49", 20, rules3_so_code_49 },
    { "rules3_so_code_50", 31, rules3_so_code_50 },
    { "rules3_so_code_51", 6, rules3_so_code_51 },
    { "rules3_so_code_52", 12, rules3_so_code_52 },
    { "rules3_so_code_53", 17, rules3_so_code_53 },
    { "rules3_so_code_54", 9, rules3_so_code_54 },
    { "rules3_so_code_55", 51, rules3_so_code_55 }
  };

int
decl_rules3_so_5d595775909a10c4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rules3_so_5d595775909a10c4);
  return (0);
}

DECLARE_COMPILED_CODE ("rules3.so", 45, decl_rules3_so_5d595775909a10c4, rules3_so_5d595775909a10c4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rules3_so_data_5d595775909a10c4 [10248] =
  "\xf6\x01\x8a\x01\xf2\x16\x1d\x0c\xb8\x0d\xb9\x1d\xb0\x81\x88\x08"
  "\x28\x0d\x28\x0d\xba\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbc\x1d\xb0\x82\x88\x08\x0d\xbd\x28\xb5\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\xbe\x1d\xb0\x83\x88\x0d\xbf\x02\x0d\x1c\x08\x0d"
  "\x1c\x28\xb2\x28\x0d\x1c\x28\xb3\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x08\x0d\x1c\x28\xb2\x28\x0d\x28"
  "\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x85\x88\x08\x0d\x1c\x28\xb5\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x0d\x1c\x02\x0d\x1c\x08\x0d\x1c\x28\xb2\x28\x1b"
  "\x28\xb3\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb7\x1b\x1b\x02\x1b\x08\x0d\x1c\x28\xb2\x28"
  "\x1b\x28\xb3\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x0d\x1c\x28\xb2\x28\x0d\x28"
  "\xb3\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x08\x0d\x1c\x28\xb2\x28\x0d\x28\xb3\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x0d\x1c\x0d\x1c\x08\x0d\x1c"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\xb2\x28\xb3\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02"
  "\x0d\x08\x1b\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\xb2\x28\x1b\x28\x1b"
  "\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x0c\x87\xc1\x02\x08\x0d"
  "\x1c\x0d\x24\x28\xb2\x28\x0d\x28\xb3\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x08\x28\xb2\x28\x0d\x28\xb3\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08\xc2\xba\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x08\xc2\x1c\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08\xc2"
  "\x1c\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x08\xc2\x1c\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08\xc2"
  "\x1c\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x08\xc2\x1c\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08\xc2"
  "\x1c\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x08\xc1\x1c\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08\xc1"
  "\x1c\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x08\xc1\x1c\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08\xc1"
  "\x1c\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x08\xc1\x1c\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08\xc2"
  "\x1c\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x08\xc2\x1c\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c"
  "\x0d\x1c\x1b\x80\x0d\x1c\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x08\x1b\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x0c\x83"
  "\x82\x81\x80\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x1b\x08\x1b\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x22\x29\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x02\x0c\x0c\x02\x28\x0d\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x0d\x1c\x24"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02"
  "\x02\x0c\x02\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x28"
  "\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b\x28\x0d\x28"
  "\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x08\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08\x0d"
  "\x1c\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08"
  "\x0d\x1c\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x08\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\xb3\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x08\x1b\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x83\x82\x08"
  "\x81\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x1c\x28\xb3\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x81\x0d\xb7\x08\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xc1\x1c\xc1"
  "\x1c\xc2\x81\x1b\x80\x0d\x1c\x08\x1b\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x83\x1b\x1b\x0c\x80\x08\x81\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\xb3\x28\x0d\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x83\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x02\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x0d"
  "\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xc2"
  "\x1b\x08\x0d\x1c\x25\x1b\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\xb7\x1b\x0d\x80\x0c\x0d\x02"
  "\x0d\x82\x0d\x0c\x08\x1b\x0d\x0d\x81\x1b\x25\x1b\x24\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\xb3\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\xb1\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x9e\x0d\x1b\x1b\x0d\x0d\x1b\x1b\x9e\x1b"
  "\x1b\x0d\x1c\x0d\x1c\x88\x08\x89\x1b\x1b\x0d\x1c\x88\x1b\x0d\x1c"
  "\x88\x1b\x0d\x88\x08\x8b\x08\x8a\x1b\x2a\x1b\x1b\x99\x1b\x2a\x1b"
  "\x2a\x99\x1b\x1b\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x0d\x88\x08\x89"
  "\x1b\x0d\x1c\x88\x1b\x0d\x1c\x88\x1b\x1b\x88\x08\x8c\x08\x8a\x1b"
  "\x2a\x1b\x1b\x0d\x1c\x88\x1b\x1b\x88\x1b\x0d\x88\x08\x8b\x1b\x2a"
  "\x0d\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b\x88\x1b\x1b\x88\x08\x8b\x1b"
  "\x2a\x1b\x1b\x1b\x88\x08\x89\x1b\x2a\x1b\x1b\x1b\x88\x08\x89\x1b"
  "\x2a\x1b\x1b\x1b\x88\x08\x89\x1b\x2a\x1b\x1b\x1b\x88\x08\x89\x1b"
  "\x2a\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x17\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x02\x02\x02\x1b\x2a\x1b\x2a\x17\x1b\x1b"
  "\x0d\x1c\x88\x1b\x1b\x0d\x88\x08\x89\x1b\x1b\x0d\x88\x08\x89\x08"
  "\x8b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b\x0d\x88\x08\x89"
  "\x08\x8a\x1b\x2a\x1b\x80\x1b\x1b\x1b\x08\x89\x08\x89\x08\x8a\x1b"
  "\x2a\x1b\x1b\x1b\x88\x1b\x0d\x1c\x88\x1b\x08\x8b\x1b\x2a\x1b\x1b"
  "\x1b\x88\x1b\x1b\x88\x1b\x08\x8b\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b"
  "\x88\x1b\x08\x8b\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b\x88\x1b\x08\x8b"
  "\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b\x88\x1b\x08\x8b\x1b\x2a\x1b\x1b"
  "\x1b\x88\x1b\x1b\x88\x1b\x08\x8b\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b"
  "\x88\x1b\x08\x8b\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b\x88\x1b\x08\x8b"
  "\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b\x88\x1b\x08\x8b\x1b\x2a\x1b\x1b"
  "\x1b\x88\x1b\x1b\x88\x1b\x08\x8b\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b"
  "\x88\x1b\x08\x8b\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b\x88\x1b\x08\x8b"
  "\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b\x88\x1b\x08\x8b\x1b\x2a\x1b\x1b"
  "\x1b\x88\x1b\x1b\x88\xb2\x08\x8b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b"
  "\x88\x1b\x1b\x88\x1b\x0d\x88\x08\x8b\x1b\x2a\x1b\x1b\x1b\x88\x1b"
  "\x1b\x88\x1b\x1b\x0d\x88\x08\x89\x1b\x0d\x1c\x88\x08\x8c\x1b\x2a"
  "\x1b\x1b\x1b\x88\x1b\x1b\x88\x1b\x1b\x0d\x88\x08\x89\x08\x8b\x1b"
  "\x2a\x1b\x1b\x1b\x88\x1b\x1b\x88\x1b\x1b\x88\x08\x8b\x1b\x2a\x1b"
  "\x1b\x1b\x88\x1b\x1b\x88\x1b\x1b\x88\x08\x8b\x1b\x2a\x1b\x1b\x0d"
  "\x1c\x88\x1b\x1b\x88\x08\x8a\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b\x88"
  "\x1b\x0d\x1c\x88\x08\x8b\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b\x88\x08"
  "\x8a\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b\x88\x1b\x1b\x88\x08\x8b\x1b"
  "\x2a\x1b\x1b\x1b\x88\x1b\x1b\x88\x08\x8a\x1b\x2a\xb5\x08\x88\xb6"
  "\x2a\xc3\xb5\xb4\x2a\x28\x0d\x26\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x5f\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2f\x6d\x61\x63\x68\x69\x6e\x65\x73\x2f\x43\x2f\x72\x75\x6c"
  "\x65\x73\x33\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x0d\x63"
  "\x3a\x70\x6f\x70\x2d\x72\x65\x74\x75\x72\x6e\x02\x0b\x63\x6c\x65"
  "\x61\x72\x2d\x6d\x61\x70\x21\x04\x07\x61\x70\x70\x65\x6e\x64\x04"
  "\x30\x08\x81\x83\x02\x2f\x06\x81\x81\x02\x2e\x04\x82\x02\x07\x12"
  "\x02\x0b\x70\x6f\x70\x2d\x72\x65\x74\x75\x72\x6e\x02\x02\x32\x06"
  "\x82\x02\x31\x04\x83\x04\x05\x0d\x02\x05\x73\x6f\x62\x6a\x15\x0a"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x09\x11\x69\x6e\x76\x6f\x63"
  "\x61\x74\x69\x6f\x6e\x3a\x61\x70\x70\x6c\x79\x0a\x02\x05\x15\x63"
  "\x3a\x69\x6e\x76\x6f\x6b\x65\x2d\x69\x6e\x74\x65\x72\x66\x61\x63"
  "\x65\x2d\x32\x0b\x04\x02\x06\x63\x3a\x70\x6f\x70\x0c\x04\x0e\x63"
  "\x3a\x62\x72\x61\x63\x65\x2d\x67\x72\x6f\x75\x70\x0d\x05\x07\x63"
  "\x3a\x64\x65\x63\x6c\x0e\x07\x39\x10\x81\x8b\x02\x38\x0e\x81\x89"
  "\x02\x37\x0c\x81\x87\x02\x36\x0a\x81\x85\x02\x35\x08\x81\x83\x02"
  "\x34\x06\x81\x83\x02\x33\x04\x83\x04\x0f\x24\x0f\x02\x10\x69\x6e"
  "\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x6a\x75\x6d\x70\x10\x02\x03"
  "\x07\x63\x3a\x67\x6f\x74\x6f\x04\x04\x3d\x0a\x81\x85\x02\x3c\x08"
  "\x81\x83\x02\x3b\x06\x81\x83\x02\x3a\x04\x83\x04\x09\x15\x11\x02"
  "\x19\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x63\x6f\x6d\x70"
  "\x75\x74\x65\x64\x2d\x6a\x75\x6d\x70\x12\x02\x02\x3f\x06\x82\x02"
  "\x3e\x04\x83\x04\x05\x0d\x13\x02\x06\x73\x6f\x62\x6a\x2a\x14\x17"
  "\x12\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x5f\x61\x64\x64\x72\x65"
  "\x73\x73\x15\x11\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x6c"
  "\x65\x78\x70\x72\x16\x02\x05\x0b\x04\x03\x0e\x6c\x61\x62\x65\x6c"
  "\x2d\x3e\x6f\x66\x66\x73\x65\x74\x17\x04\x0d\x05\x0e\x03\x07\x63"
  "\x3a\x63\x70\x74\x72\x18\x08\x47\x12\x81\x8d\x02\x46\x10\x81\x8b"
  "\x02\x45\x0e\x81\x89\x02\x44\x0c\x81\x87\x02\x43\x0a\x81\x85\x02"
  "\x42\x08\x81\x83\x02\x41\x06\x81\x83\x02\x40\x04\x83\x04\x11\x28"
  "\x19\x02\x08\x14\x09\x17\x15\x1a\x69\x6e\x76\x6f\x63\x61\x74\x69"
  "\x6f\x6e\x3a\x63\x6f\x6d\x70\x75\x74\x65\x64\x2d\x6c\x65\x78\x70"
  "\x72\x15\x02\x05\x0b\x04\x03\x11\x63\x3a\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x61\x64\x64\x72\x65\x73\x73\x09\x02\x0c\x05\x0e\x05\x0d\x08"
  "\x50\x14\x81\x8d\x02\x4f\x12\x81\x8b\x02\x4e\x10\x81\x8b\x02\x4d"
  "\x0e\x81\x89\x02\x4c\x0c\x81\x87\x02\x4b\x0a\x81\x85\x02\x4a\x08"
  "\x81\x83\x02\x49\x06\x81\x83\x02\x48\x04\x83\x04\x13\x2c\x0c\x02"
  "\x09\x14\x14\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x75\x75"
  "\x6f\x2d\x6c\x69\x6e\x6b\x1a\x02\x04\x14\x66\x72\x65\x65\x2d\x75"
  "\x75\x6f\x2d\x6c\x69\x6e\x6b\x2d\x6c\x61\x62\x65\x6c\x04\x03\x07"
  "\x63\x3a\x6a\x75\x6d\x70\x1b\x04\x07\x63\x3a\x63\x61\x73\x74\x1c"
  "\x03\x07\x63\x3a\x63\x72\x65\x66\x1d\x07\x57\x10\x81\x8b\x02\x56"
  "\x0e\x81\x89\x02\x55\x0c\x81\x87\x02\x54\x0a\x81\x85\x02\x53\x08"
  "\x81\x83\x02\x52\x06\x81\x83\x02\x51\x04\x83\x04\x0f\x22\x1e\x02"
  "\x0a\x14\x17\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x67\x6c"
  "\x6f\x62\x61\x6c\x2d\x6c\x69\x6e\x6b\x1f\x02\x04\x16\x67\x6c\x6f"
  "\x62\x61\x6c\x2d\x75\x75\x6f\x2d\x6c\x69\x6e\x6b\x2d\x6c\x61\x62"
  "\x65\x6c\x04\x03\x1b\x04\x1c\x03\x1d\x07\x5e\x10\x81\x8b\x02\x5d"
  "\x0e\x81\x89\x02\x5c\x0c\x81\x87\x02\x5b\x0a\x81\x85\x02\x5a\x08"
  "\x81\x83\x02\x59\x06\x81\x83\x02\x58\x04\x83\x04\x0f\x22\x1b\x02"
  "\x0b\x1f\x0e\x63\x75\x72\x72\x65\x6e\x74\x5f\x62\x6c\x6f\x63\x6b"
  "\x20\x0f\x73\x63\x68\x65\x6d\x65\x5f\x6f\x62\x6a\x65\x63\x74\x2a"
  "\x21\x09\x72\x65\x67\x69\x73\x74\x65\x72\x22\x1b\x69\x6e\x76\x6f"
  "\x63\x61\x74\x69\x6f\x6e\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x23\x04\x11\x73\x74\x61\x6e\x64\x61\x72"
  "\x64\x2d\x73\x6f\x75\x72\x63\x65\x21\x24\x06\x15\x63\x3a\x69\x6e"
  "\x76\x6f\x6b\x65\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x2d\x33"
  "\x25\x02\x04\x05\x63\x0c\x81\x87\x02\x62\x0a\x81\x85\x02\x61\x08"
  "\x81\x83\x02\x60\x06\x81\x83\x02\x5f\x04\x83\x04\x0b\x1d\x26\x02"
  "\x0c\x36\x0e\x73\x63\x68\x65\x6d\x65\x5f\x6f\x62\x6a\x65\x63\x74"
  "\x22\x12\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x6c\x6f\x6f"
  "\x6b\x75\x70\x27\x04\x24\x03\x0f\x6f\x62\x6a\x65\x63\x74\x2d\x3e"
  "\x6f\x66\x66\x73\x65\x74\x28\x02\x06\x25\x03\x1d\x04\x07\x6a\x10"
  "\x81\x87\x02\x69\x0e\x81\x8b\x02\x68\x0c\x81\x89\x02\x67\x0a\x81"
  "\x85\x02\x66\x08\x81\x83\x02\x65\x06\x81\x83\x02\x64\x04\x83\x04"
  "\x0f\x24\x25\x02\x0d\x15\x28\x57\x72\x6f\x6e\x67\x20\x6e\x75\x6d"
  "\x62\x65\x72\x20\x6f\x66\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73"
  "\x20\x74\x6f\x20\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x3a\x1a\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x61\x72\x69\x74\x79\x16\x15\x69\x6e\x76\x6f\x63\x61"
  "\x74\x69\x6f\x6e\x3a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x29\x19"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x72\x72\x6f\x72\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x02\x02\x04\x15\x63\x3a\x69\x6e"
  "\x76\x6f\x6b\x65\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x2d\x31"
  "\x04\x03\x28\x06\x05\x77\x61\x72\x6e\x05\x0b\x04\x13\x63\x3a\x69"
  "\x6e\x76\x6f\x6b\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x03"
  "\x1d\x09\x76\x1a\x81\x8d\x02\x75\x18\x81\x87\x02\x74\x16\x81\x87"
  "\x02\x73\x14\x81\x8b\x02\x72\x12\x81\x87\x02\x71\x10\x81\x89\x02"
  "\x70\x0e\x81\x85\x02\x6f\x0c\x81\x87\x02\x6e\x0a\x81\x87\x02\x6d"
  "\x08\x81\x83\x02\x6c\x06\x81\x83\x02\x6b\x04\x83\x04\x19\x36\x28"
  "\x02\x0e\x02\x03\x15\x63\x3a\x69\x6e\x76\x6f\x6b\x65\x2d\x69\x6e"
  "\x74\x65\x72\x66\x61\x63\x65\x2d\x30\x04\x04\x79\x08\x81\x85\x02"
  "\x78\x06\x81\x83\x02\x77\x04\x83\x04\x07\x12\x0b\x02\x0f\x2c\x03"
  "\x26\x2b\x1d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x73\x70"
  "\x65\x63\x69\x61\x6c\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2a"
  "\x04\x05\x65\x71\x76\x3f\x2b\x03\x19\x69\x6e\x76\x6f\x6b\x65\x2d"
  "\x73\x70\x65\x63\x69\x61\x6c\x2d\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x2c\x03\x7c\x08\x82\x02\x7b\x06\x81\x8b\x02\x7a\x04\x83\x04"
  "\x07\x13\x2d\x02\x10\x29\x03\x26\x2d\x2e\x2a\x04\x2b\x03\x2c\x03"
  "\x7f\x08\x82\x02\x7e\x06\x81\x8b\x02\x7d\x04\x83\x04\x07\x13\x2f"
  "\x02\x11\x2a\x03\x26\x2a\x30\x2a\x04\x2b\x03\x2c\x03\x82\x01\x08"
  "\x82\x02\x81\x01\x06\x81\x8b\x02\x80\x01\x04\x83\x04\x07\x13\x31"
  "\x02\x12\x24\x03\x26\x2f\x32\x2a\x04\x2b\x03\x2c\x03\x85\x01\x08"
  "\x82\x02\x84\x01\x06\x81\x8b\x02\x83\x01\x04\x83\x04\x07\x13\x33"
  "\x02\x13\x25\x03\x26\x3d\x34\x2a\x04\x2b\x03\x2c\x03\x88\x01\x08"
  "\x82\x02\x87\x01\x06\x81\x8b\x02\x86\x01\x04\x83\x04\x07\x13\x35"
  "\x02\x14\x28\x03\x26\x3c\x36\x2a\x04\x2b\x03\x2c\x03\x8b\x01\x08"
  "\x82\x02\x8a\x01\x06\x81\x8b\x02\x89\x01\x04\x83\x04\x07\x13\x37"
  "\x02\x15\x26\x03\x26\x3e\x38\x2a\x04\x2b\x03\x2c\x03\x8e\x01\x08"
  "\x82\x02\x8d\x01\x06\x81\x8b\x02\x8c\x01\x04\x83\x04\x07\x13\x39"
  "\x02\x16\x27\x03\x31\x2b\x3a\x2a\x04\x2b\x03\x2c\x03\x91\x01\x08"
  "\x82\x02\x90\x01\x06\x81\x8b\x02\x8f\x01\x04\x83\x04\x07\x13\x3b"
  "\x02\x17\x23\x04\x2d\x31\x2b\x3c\x2a\x04\x2b\x03\x2c\x03\x94\x01"
  "\x08\x82\x02\x93\x01\x06\x81\x8b\x02\x92\x01\x04\x83\x04\x07\x13"
  "\x3d\x02\x18\x2e\x06\x7a\x65\x72\x6f\x3f\x3e\x2a\x04\x2b\x03\x2c"
  "\x03\x97\x01\x08\x82\x02\x96\x01\x06\x81\x8b\x02\x95\x01\x04\x83"
  "\x04\x07\x13\x3f\x02\x19\x2d\x0a\x70\x6f\x73\x69\x74\x69\x76\x65"
  "\x3f\x40\x2a\x04\x2b\x03\x2c\x03\x9a\x01\x08\x82\x02\x99\x01\x06"
  "\x81\x8b\x02\x98\x01\x04\x83\x04\x07\x13\x41\x02\x1a\x2b\x0a\x6e"
  "\x65\x67\x61\x74\x69\x76\x65\x3f\x42\x2a\x04\x2b\x03\x2c\x03\x9d"
  "\x01\x08\x82\x02\x9c\x01\x06\x81\x8b\x02\x9b\x01\x04\x83\x04\x07"
  "\x13\x43\x02\x1b\x38\x09\x71\x75\x6f\x74\x69\x65\x6e\x74\x44\x2a"
  "\x04\x2b\x03\x2c\x03\xa0\x01\x08\x82\x02\x9f\x01\x06\x81\x8b\x02"
  "\x9e\x01\x04\x83\x04\x07\x13\x45\x02\x1c\x39\x0a\x72\x65\x6d\x61"
  "\x69\x6e\x64\x65\x72\x46\x2a\x04\x2b\x03\x2c\x03\xa3\x01\x08\x82"
  "\x02\xa2\x01\x06\x81\x8b\x02\xa1\x01\x04\x83\x04\x07\x13\x2b\x02"
  "\x1d\x15\x72\x65\x67\x6e\x75\x6d\x3a\x73\x74\x61\x63\x6b\x2d\x70"
  "\x6f\x69\x6e\x74\x65\x72\x47\x08\x75\x6e\x71\x75\x6f\x74\x65\x48"
  "\x22\x20\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65"
  "\x66\x69\x78\x3a\x6d\x6f\x76\x65\x2d\x66\x72\x61\x6d\x65\x2d\x75"
  "\x70\x49\xa5\x01\x06\x82\x02\xa4\x01\x04\x83\x04\x05\x0e\x4a\x02"
  "\x1e\x21\x22\x49\x04\x24\x04\x0e\x6d\x6f\x76\x65\x2d\x66\x72\x61"
  "\x6d\x65\x2d\x75\x70\x4b\x03\xa9\x01\x0a\x81\x85\x02\xa8\x01\x08"
  "\x81\x83\x02\xa7\x01\x06\x81\x83\x02\xa6\x01\x04\x83\x04\x09\x15"
  "\x4c\x02\x1f\x06\x4d\x46\x55\x70\x31\x14\x06\x4d\x46\x55\x70\x32"
  "\x02\x09\x63\x3a\x73\x70\x2d\x72\x65\x67\x4d\x03\x07\x63\x3a\x73"
  "\x72\x65\x66\x05\x0e\x03\x07\x63\x3a\x73\x70\x74\x72\x03\x09\x63"
  "\x3a\x70\x72\x65\x64\x65\x63\x03\x08\x63\x3a\x67\x72\x6f\x75\x70"
  "\x4e\x04\x4e\x05\x4e\x06\x4e\x04\x04\x63\x3a\x3d\x4e\x03\x04\x63"
  "\x3a\x2a\x4f\x06\x0d\x04\x08\x63\x3a\x77\x68\x69\x6c\x65\x04\x04"
  "\x63\x3a\x3e\x50\x0f\xd7\x01\x5e\x81\x8f\x02\xd6\x01\x5c\x81\x8d"
  "\x02\xd5\x01\x5a\x81\x8d\x02\xd4\x01\x58\x81\x89\x02\xd3\x01\x56"
  "\x81\x91\x02\xd2\x01\x54\x81\x8f\x02\xd1\x01\x52\x81\x8f\x02\xd0"
  "\x01\x50\x81\x8d\x02\xcf\x01\x4e\x81\x8d\x02\xce\x01\x4c\x81\x89"
  "\x02\xcd\x01\x4a\x81\x8d\x02\xcc\x01\x48\x81\x8b\x02\xcb\x01\x46"
  "\x81\x8b\x02\xca\x01\x44\x81\x87\x02\xc9\x01\x42\x81\x8d\x02\xc8"
  "\x01\x40\x81\x8b\x02\xc7\x01\x3e\x81\x8b\x02\xc6\x01\x3c\x81\x89"
  "\x02\xc5\x01\x3a\x81\x8f\x02\xc4\x01\x38\x81\x8d\x02\xc3\x01\x36"
  "\x81\x8b\x02\xc2\x01\x34\x81\x89\x02\xc1\x01\x32\x81\x8b\x02\xc0"
  "\x01\x30\x81\x89\x02\xbf\x01\x2e\x81\x89\x02\xbe\x01\x2c\x81\x85"
  "\x02\xbd\x01\x2a\x81\x8b\x02\xbc\x01\x28\x81\x89\x02\xbb\x01\x26"
  "\x81\x89\x02\xba\x01\x24\x81\x87\x02\xb9\x01\x22\x81\x8b\x02\xb8"
  "\x01\x20\x81\x89\x02\xb7\x01\x1e\x81\x89\x02\xb6\x01\x1c\x81\x87"
  "\x02\xb5\x01\x1a\x81\x89\x02\xb4\x01\x18\x81\x87\x02\xb3\x01\x16"
  "\x81\x89\x02\xb2\x01\x14\x81\x85\x02\xb1\x01\x12\x81\x87\x02\xb0"
  "\x01\x10\x81\x85\x02\xaf\x01\x0e\x81\x87\x02\xae\x01\x0c\x81\x85"
  "\x02\xad\x01\x0a\x81\x87\x02\xac\x01\x08\x81\x85\x02\xab\x01\x06"
  "\x81\x85\x02\xaa\x01\x04\x84\x06\x5d\x84\x01\x51\x02\x20\x14\x07"
  "\x49\x50\x44\x4c\x70\x31\x21\x22\x1f\x69\x6e\x76\x6f\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x70\x72\x65\x66\x69\x78\x3a\x64\x79\x6e\x61\x6d"
  "\x69\x63\x2d\x6c\x69\x6e\x6b\x52\x04\x24\x04\x4b\x04\x05\x63\x3a"
  "\x3c\x3d\x04\x0d\x05\x0e\x05\x05\x63\x3a\x3f\x3a\x07\xe0\x01\x14"
  "\x81\x93\x02\xdf\x01\x12\x81\x8d\x02\xde\x01\x10\x81\x8b\x02\xdd"
  "\x01\x0e\x81\x89\x02\xdc\x01\x0c\x81\x87\x02\xdb\x01\x0a\x81\x85"
  "\x02\xda\x01\x08\x81\x83\x02\xd9\x01\x06\x81\x83\x02\xd8\x01\x04"
  "\x83\x04\x13\x29\x24\x02\x21\x81\x02\xe2\x01\x06\x81\x85\x02\xe1"
  "\x01\x04\x84\x06\x05\x53\x02\x22\x81\x02\x2f\x4d\x41\x4b\x45\x2d"
  "\x50\x52\x4f\x43\x45\x44\x55\x52\x45\x2d\x43\x4f\x44\x45\x2d\x57"
  "\x4f\x52\x44\x3a\x20\x6d\x61\x78\x69\x6d\x75\x6d\x20\x6f\x75\x74"
  "\x20\x6f\x66\x20\x72\x61\x6e\x67\x65\x2f\x4d\x41\x4b\x45\x2d\x50"
  "\x52\x4f\x43\x45\x44\x55\x52\x45\x2d\x43\x4f\x44\x45\x2d\x57\x4f"
  "\x52\x44\x3a\x20\x6d\x69\x6e\x69\x6d\x75\x6d\x20\x6f\x75\x74\x20"
  "\x6f\x66\x20\x72\x61\x6e\x67\x65\x81\x01\x03\x04\x61\x62\x73\x04"
  "\x06\x65\x72\x72\x6f\x72\x54\x03\xed\x01\x18\x81\x87\x02\xec\x01"
  "\x16\x81\x87\x02\xeb\x01\x14\x81\x85\x02\xea\x01\x12\x81\x85\x02"
  "\xe9\x01\x10\x81\x85\x02\xe8\x01\x0e\x81\x85\x02\xe7\x01\x0c\x81"
  "\x85\x02\xe6\x01\x0a\x81\x85\x02\xe5\x01\x08\x81\x85\x02\xe4\x01"
  "\x06\x84\x06\xe3\x01\x04\x81\x85\x02\x17\x23\x55\x02\x23\x20\x69"
  "\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x2d\x63\x6f\x64\x65\x2d\x77\x6f\x72\x64\x56\x02"
  "\x04\x16\x66\x72\x61\x6d\x65\x2d\x73\x69\x7a\x65\x2d\x3e\x63\x6f"
  "\x64\x65\x2d\x77\x6f\x72\x64\x57\x03\x0e\x6c\x61\x62\x65\x6c\x2d"
  "\x3e\x6f\x62\x6a\x65\x63\x74\x58\x03\x2a\x72\x74\x6c\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x6e\x65\x78\x74\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x6f\x66\x66"
  "\x73\x65\x74\x04\xf1\x01\x0a\x81\x85\x02\xf0\x01\x08\x81\x85\x02"
  "\xef\x01\x06\x83\x04\xee\x01\x04\x81\x83\x02\x09\x16\x59\x02\x24"
  "\x19\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x65\x6e\x74\x72\x79\x2d"
  "\x63\x6f\x64\x65\x2d\x77\x6f\x72\x64\x5a\x02\x03\x27\x72\x74\x6c"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x6e\x65\x78\x74\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x6f\x66\x66"
  "\x73\x65\x74\x04\x57\x03\xf4\x01\x08\x81\x85\x02\xf3\x01\x06\x81"
  "\x83\x02\xf2\x01\x04\x83\x04\x07\x11\x5b\x02\x25\x81\x02\x81\x01"
  "\x25\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x65\x6e\x63\x6f\x64"
  "\x65\x20\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x20\x6f"
  "\x66\x66\x73\x65\x74\x81\x40\x04\x54\x04\x0f\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x03\x19\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x2d\x72\x65\x6d\x61\x69\x6e"
  "\x64\x65\x72\x03\x18\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76"
  "\x69\x64\x65\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x05\xfc\x01\x12"
  "\x81\x85\x02\xfb\x01\x10\x81\x85\x02\xfa\x01\x0e\x81\x83\x02\xf9"
  "\x01\x0c\x81\x83\x02\xf8\x01\x0a\x81\x83\x02\xf7\x01\x08\x81\x85"
  "\x02\xf6\x01\x06\x81\x85\x02\xf5\x01\x04\x84\x06\x11\x21\x5c\x02"
  "\x26\x05\x15\x64\x65\x63\x6c\x61\x72\x65\x2d\x62\x6c\x6f\x63\x6b"
  "\x2d\x6c\x61\x62\x65\x6c\x21\x5d\x03\x17\x04\x12\x63\x3a\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x65\x63\x6b\x03\x19\x6c"
  "\x61\x70\x3a\x6d\x61\x6b\x65\x2d\x6c\x61\x62\x65\x6c\x2d\x73\x74"
  "\x61\x74\x65\x6d\x65\x6e\x74\x5e\x04\x06\x83\x02\x10\x81\x8f\x02"
  "\x82\x02\x0e\x81\x8d\x02\x81\x02\x0c\x81\x8b\x02\x80\x02\x0a\x81"
  "\x89\x02\xff\x01\x08\x81\x8b\x02\xfe\x01\x06\x81\x89\x02\xfd\x01"
  "\x04\x86\x0a\x0f\x1e\x5f\x02\x27\x05\x5d\x03\x17\x03\x18\x63\x3a"
  "\x64\x6c\x69\x6e\x6b\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d"
  "\x63\x68\x65\x63\x6b\x04\x03\x5e\x06\x8a\x02\x10\x81\x8d\x02\x89"
  "\x02\x0e\x81\x8b\x02\x88\x02\x0c\x81\x89\x02\x87\x02\x0a\x81\x8b"
  "\x02\x86\x02\x08\x81\x87\x02\x85\x02\x06\x81\x87\x02\x84\x02\x04"
  "\x85\x08\x0f\x1e\x60\x02\x28\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x2d\x65\x6e\x74\x72\x79\x61\x03\x17\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x63\x6f\x64\x65\x2d\x77"
  "\x6f\x72\x64\x62\x03\x5e\x05\x5d\x04\x8e\x02\x0a\x81\x89\x02\x8d"
  "\x02\x08\x81\x83\x02\x8c\x02\x06\x81\x83\x02\x8b\x02\x04\x83\x04"
  "\x09\x15\x63\x02\x29\x1c\x14\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2d\x68\x65\x61\x64\x65\x72\x64\x03\x62\x06\x18\x73"
  "\x69\x6d\x70\x6c\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x68\x65\x61\x64\x65\x72\x65\x03\x91\x02\x08\x81\x87\x02\x90\x02"
  "\x06\x81\x83\x02\x8f\x02\x04\x83\x04\x07\x12\x66\x02\x2a\x1d\x14"
  "\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65\x61"
  "\x64\x65\x72\x67\x15\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d"
  "\x63\x6f\x64\x65\x2d\x77\x6f\x72\x64\x68\x02\x03\x58\x06\x65\x03"
  "\x1d\x72\x74\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x65"
  "\x78\x74\x65\x72\x6e\x61\x6c\x2d\x6c\x61\x62\x65\x6c\x69\x04\x96"
  "\x02\x0c\x81\x85\x02\x95\x02\x0a\x81\x87\x02\x94\x02\x08\x81\x83"
  "\x02\x93\x02\x06\x81\x83\x02\x92\x02\x04\x83\x04\x0b\x1a\x6a\x02"
  "\x2b\x1b\x16\x6f\x70\x65\x6e\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x68\x65\x61\x64\x65\x72\x6b\x17\x64\x6c\x69\x6e\x6b\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72"
  "\x6c\x02\x03\x58\x03\x69\x03\x1c\x72\x74\x6c\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2f\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69"
  "\x6e\x6b\x3f\x03\x1d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x6f\x64\x65\x2d\x77\x6f\x72"
  "\x64\x6d\x06\x65\x06\x9e\x02\x12\x85\x08\x9d\x02\x10\x81\x89\x02"
  "\x9c\x02\x0e\x81\x87\x02\x9b\x02\x0c\x81\x87\x02\x9a\x02\x0a\x81"
  "\x85\x02\x99\x02\x08\x81\x83\x02\x98\x02\x06\x81\x83\x02\x97\x02"
  "\x04\x83\x04\x11\x24\x6e\x02\x2c\x1b\x11\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x6f\x03\x58\x04\x19\x6d"
  "\x61\x6b\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x6f"
  "\x64\x65\x2d\x77\x6f\x72\x64\x70\x03\x69\x06\x65\x05\xa3\x02\x0c"
  "\x81\x87\x02\xa2\x02\x0a\x81\x85\x02\xa1\x02\x08\x81\x83\x02\xa0"
  "\x02\x06\x81\x83\x02\x9f\x02\x04\x83\x04\x0b\x1a\x71\x02\x2d\x03"
  "\x5e\x02\xa4\x02\x04\x83\x04\x03\x72\x02\x2e\x0f\x43\x4c\x4f\x53"
  "\x55\x52\x45\x5f\x48\x45\x41\x44\x45\x52\x2c\x43\x6c\x6f\x73\x75"
  "\x72\x65\x20\x68\x65\x61\x64\x65\x72\x20\x66\x6f\x72\x20\x63\x6c"
  "\x6f\x73\x75\x72\x65\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x65\x6e"
  "\x74\x72\x69\x65\x73\x21\x0f\x63\x6c\x6f\x73\x75\x72\x65\x2d\x68"
  "\x65\x61\x64\x65\x72\x73\x03\x58\x04\x54\x03\x69\x03\x6d\x03\x5e"
  "\x05\x5d\x02\x1a\x63\x3a\x63\x6c\x6f\x73\x75\x72\x65\x2d\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x65\x63\x6b\x03\x17\x04"
  "\x04\x08\x63\x3a\x73\x63\x61\x6c\x6c\x54\x0b\xb2\x02\x1e\x81\x8b"
  "\x02\xb1\x02\x1c\x81\x8b\x02\xb0\x02\x1a\x81\x89\x02\xaf\x02\x18"
  "\x81\x89\x02\xae\x02\x16\x81\x87\x02\xad\x02\x14\x81\x87\x02\xac"
  "\x02\x12\x81\x8d\x02\xab\x02\x10\x81\x87\x02\xaa\x02\x0e\x81\x85"
  "\x02\xa9\x02\x0c\x81\x83\x02\xa8\x02\x0a\x81\x83\x02\xa7\x02\x08"
  "\x81\x83\x02\xa6\x02\x06\x81\x83\x02\xa5\x02\x04\x83\x04\x1d\x39"
  "\x74\x02\x2f\x10\x65\x6e\x74\x72\x79\x3a\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x75\x0d\x63\x6f\x6e\x73\x2d\x63\x6c\x6f\x73\x75\x72"
  "\x65\x76\x22\x07\x61\x73\x73\x69\x67\x6e\x77\x07\x76\x02\xb4\x02"
  "\x06\x81\x83\x02\xb3\x02\x04\x83\x04\x05\x10\x78\x02\x30\x14\x54"
  "\x43\x5f\x4d\x41\x4e\x49\x46\x45\x53\x54\x5f\x43\x4c\x4f\x53\x55"
  "\x52\x45\x21\x04\x11\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x74\x61"
  "\x72\x67\x65\x74\x21\x79\x02\x0b\x63\x3a\x66\x72\x65\x65\x2d\x72"
  "\x65\x67\x7a\x06\x14\x77\x72\x69\x74\x65\x2d\x63\x6c\x6f\x73\x75"
  "\x72\x65\x2d\x65\x6e\x74\x72\x79\x7b\x04\x05\x63\x3a\x2b\x3d\x7c"
  "\x04\x0e\x63\x3a\x6d\x61\x6b\x65\x2d\x6f\x62\x6a\x65\x63\x74\x7d"
  "\x04\x4e\x04\x04\x63\x3a\x2b\x7e\x04\x03\x4f\x03\x0a\x63\x3a\x70"
  "\x6f\x73\x74\x69\x6e\x63\x7f\x0b\xc3\x02\x20\x81\x97\x02\xc2\x02"
  "\x1e\x81\x95\x02\xc1\x02\x1c\x81\x93\x02\xc0\x02\x1a\x81\x91\x02"
  "\xbf\x02\x18\x81\x8f\x02\xbe\x02\x16\x81\x91\x02\xbd\x02\x14\x81"
  "\x95\x02\xbc\x02\x12\x81\x91\x02\xbb\x02\x10\x81\x93\x02\xba\x02"
  "\x0e\x81\x8f\x02\xb9\x02\x0c\x81\x93\x02\xb8\x02\x0a\x81\x8f\x02"
  "\xb7\x02\x08\x81\x8d\x02\xb6\x02\x06\x81\x8b\x02\xb5\x02\x04\x87"
  "\x0c\x1f\x3d\x80\x01\x02\x31\x17\x57\x52\x49\x54\x45\x5f\x4c\x41"
  "\x42\x45\x4c\x5f\x44\x45\x53\x43\x52\x49\x50\x54\x4f\x52\x0e\x64"
  "\x69\x73\x70\x61\x74\x63\x68\x5f\x62\x61\x73\x65\x03\x58\x03\x17"
  "\x03\x69\x03\x14\x6c\x61\x62\x65\x6c\x2d\x3e\x64\x69\x73\x70\x61"
  "\x74\x63\x68\x2d\x74\x61\x67\x02\x7a\x04\x1c\x03\x18\x04\x70\x04"
  "\x7e\x04\x4e\x03\x4f\x03\x7f\x03\x06\x63\x3a\x68\x65\x78\x04\x7c"
  "\x06\x54\x10\xd9\x02\x2e\x81\x93\x02\xd8\x02\x2c\x81\x91\x02\xd7"
  "\x02\x2a\x81\x8d\x02\xd6\x02\x28\x81\x95\x02\xd5\x02\x26\x81\x93"
  "\x02\xd4\x02\x24\x81\x91\x02\xd3\x02\x22\x81\x93\x02\xd2\x02\x20"
  "\x81\x91\x02\xd1\x02\x1e\x81\x8d\x02\xd0\x02\x1c\x81\x93\x02\xcf"
  "\x02\x1a\x81\x91\x02\xce\x02\x18\x81\x8f\x02\xcd\x02\x16\x81\x91"
  "\x02\xcc\x02\x14\x81\x8f\x02\xcb\x02\x12\x81\x8d\x02\xca\x02\x10"
  "\x81\x91\x02\xc9\x02\x0e\x81\x8f\x02\xc8\x02\x0c\x81\x8d\x02\xc7"
  "\x02\x0a\x81\x8b\x02\xc6\x02\x08\x81\x8b\x02\xc5\x02\x06\x81\x89"
  "\x02\xc4\x02\x04\x86\x0a\x2d\x54\x69\x02\x32\x13\x54\x43\x5f\x4d"
  "\x41\x4e\x49\x46\x45\x53\x54\x5f\x56\x45\x43\x54\x4f\x52\x04\x63"
  "\x61\x72\x58\x04\x63\x64\x72\x81\x01\x0b\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x21\x12\x63\x6f\x6e\x73\x2d\x6d\x75\x6c\x74\x69"
  "\x63\x6c\x6f\x73\x75\x72\x65\x82\x01\x22\x77\x04\x79\x07\x76\x03"
  "\x0d\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73\x74\x83\x01\x06"
  "\x82\x01\x02\x7a\x04\x7d\x04\x7c\x04\x4e\x03\x4f\x03\x7f\x0b\xed"
  "\x02\x2a\x81\x8f\x02\xec\x02\x28\x81\x8d\x02\xeb\x02\x26\x81\x8b"
  "\x02\xea\x02\x24\x81\x89\x02\xe9\x02\x22\x81\x87\x02\xe8\x02\x20"
  "\x81\x89\x02\xe7\x02\x1e\x81\x87\x02\xe6\x02\x1c\x81\x89\x02\xe5"
  "\x02\x1a\x81\x85\x02\xe4\x02\x18\x81\x85\x02\xe3\x02\x16\x81\x89"
  "\x02\xe2\x02\x14\x81\x8b\x02\xe1\x02\x12\x81\x8b\x02\xe0\x02\x10"
  "\x81\x8b\x02\xdf\x02\x0e\x81\x87\x02\xde\x02\x0c\x81\x85\x02\xdd"
  "\x02\x0a\x81\x85\x02\xdc\x02\x08\x81\x85\x02\xdb\x02\x06\x81\x83"
  "\x02\xda\x02\x04\x83\x04\x29\x4c\x84\x01\x02\x33\x14\x54\x43\x5f"
  "\x4d\x41\x4e\x49\x46\x45\x53\x54\x5f\x43\x4c\x4f\x53\x55\x52\x45"
  "\x58\x81\x01\x17\x57\x52\x49\x54\x45\x5f\x4c\x41\x42\x45\x4c\x5f"
  "\x44\x45\x53\x43\x52\x49\x50\x54\x4f\x52\x21\x04\x79\x02\x7a\x03"
  "\x1a\x6d\x61\x6b\x65\x2d\x6d\x75\x6c\x74\x69\x63\x6c\x6f\x73\x75"
  "\x72\x65\x2d\x6f\x66\x66\x73\x65\x74\x73\x7a\x04\x7c\x04\x4e\x04"
  "\x7e\x04\x05\x0d\x72\x65\x64\x75\x63\x65\x2d\x72\x69\x67\x68\x74"
  "\x05\x04\x6d\x61\x70\x06\x54\x06\x7b\x04\x7d\x03\x4f\x03\x7f\x0f"
  "\x8c\x03\x40\x81\x95\x02\x8b\x03\x3e\x81\x93\x02\x8a\x03\x3c\x81"
  "\x91\x02\x89\x03\x3a\x81\x8f\x02\x88\x03\x38\x81\x8d\x02\x87\x03"
  "\x36\x81\x91\x02\x86\x03\x34\x81\x91\x02\x85\x03\x32\x81\x91\x02"
  "\x84\x03\x30\x81\x91\x02\x83\x03\x2e\x81\x8d\x02\x82\x03\x2c\x81"
  "\x89\x02\x81\x03\x2a\x81\x89\x02\x80\x03\x28\x81\x89\x02\xff\x02"
  "\x26\x81\x87\x02\xfe\x02\x24\x81\x85\x02\xfd\x02\x22\x81\x85\x02"
  "\xfc\x02\x20\x84\x06\xfb\x02\x1e\x84\x06\xfa\x02\x1c\x81\x93\x02"
  "\xf9\x02\x1a\x81\x8d\x02\xf8\x02\x18\x81\x93\x02\xf7\x02\x16\x81"
  "\x91\x02\xf6\x02\x14\x81\x8f\x02\xf5\x02\x12\x81\x93\x02\xf4\x02"
  "\x10\x81\x8f\x02\xf3\x02\x0e\x81\x8d\x02\xf2\x02\x0c\x81\x91\x02"
  "\xf1\x02\x0a\x81\x8d\x02\xf0\x02\x08\x81\x8b\x02\xef\x02\x06\x81"
  "\x89\x02\xee\x02\x04\x86\x0a\x3f\x68\x7f\x02\x34\x92\x03\x0e\x81"
  "\x85\x02\x91\x03\x0c\x81\x89\x02\x90\x03\x0a\x81\x87\x02\x8f\x03"
  "\x08\x81\x85\x02\x8e\x03\x06\x81\x85\x02\x8d\x03\x04\x83\x04\x0d"
  "\x12\x7d\x02\x35\x18\x20\x02\x0f\x67\x65\x6e\x65\x72\x61\x74\x65"
  "\x2d\x6c\x61\x62\x65\x6c\x79\x03\x62\x03\x5e\x05\x5d\x03\x18\x02"
  "\x0a\x63\x3a\x65\x6e\x76\x2d\x72\x65\x67\x58\x03\x17\x03\x1d\x07"
  "\x15\x63\x3a\x69\x6e\x76\x6f\x6b\x65\x2d\x69\x6e\x74\x65\x72\x66"
  "\x61\x63\x65\x2d\x34\x54\x04\x4e\x0b\x9e\x03\x1a\x81\x8f\x02\x9d"
  "\x03\x18\x81\x95\x02\x9c\x03\x16\x81\x93\x02\x9b\x03\x14\x81\x8d"
  "\x02\x9a\x03\x12\x81\x8b\x02\x99\x03\x10\x81\x8f\x02\x98\x03\x0e"
  "\x81\x8b\x02\x97\x03\x0c\x81\x89\x02\x96\x03\x0a\x81\x8f\x02\x95"
  "\x03\x08\x81\x89\x02\x94\x03\x06\x81\x87\x02\x93\x03\x04\x85\x08"
  "\x19\x33\x4f\x02\x36\x14\x18\x0a\x73\x75\x62\x5f\x62\x6c\x6f\x63"
  "\x6b\x21\x02\x79\x03\x11\x61\x64\x64\x2d\x72\x65\x6d\x6f\x74\x65"
  "\x2d\x6c\x69\x6e\x6b\x21\x20\x03\x62\x03\x5e\x05\x5d\x04\x07\x63"
  "\x3a\x61\x70\x74\x72\x02\x58\x03\x17\x03\x1d\x04\x07\x63\x3a\x61"
  "\x72\x65\x66\x85\x01\x07\x54\x03\x18\x05\x0d\x05\x0e\x03\x09\x04"
  "\x4e\x11\xaf\x03\x24\x81\x95\x02\xae\x03\x22\x81\x97\x02\xad\x03"
  "\x20\x81\x95\x02\xac\x03\x1e\x81\x93\x02\xab\x03\x1c\x81\x99\x02"
  "\xaa\x03\x1a\x81\x97\x02\xa9\x03\x18\x81\x93\x02\xa8\x03\x16\x81"
  "\x91\x02\xa7\x03\x14\x81\x93\x02\xa6\x03\x12\x81\x8f\x02\xa5\x03"
  "\x10\x81\x8d\x02\xa4\x03\x0e\x81\x8b\x02\xa3\x03\x0c\x81\x91\x02"
  "\xa2\x03\x0a\x81\x8b\x02\xa1\x03\x08\x81\x8b\x02\xa0\x03\x06\x81"
  "\x89\x02\x9f\x03\x04\x86\x0a\x23\x4a\x86\x01\x02\x37\x02\x09\x73"
  "\x65\x74\x2d\x63\x64\x72\x21\x81\x01\x1b\x2a\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x2a\x81\x01\x02\x81\x01\x1b\x2a\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x2d\x6d\x61\x72"
  "\x6b\x65\x72\x2a\x87\x01\x03\x03\x13\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x6c\x61\x62\x65\x6c\x2d\x76\x61\x6c\x75\x65\x88\x01\x02\xb8\x03"
  "\x14\x81\x83\x02\xb7\x03\x12\x81\x85\x02\xb6\x03\x10\x81\x85\x02"
  "\xb5\x03\x0e\x81\x83\x02\xb4\x03\x0c\x81\x83\x02\xb3\x03\x0a\x81"
  "\x83\x02\xb2\x03\x08\x81\x83\x02\xb1\x03\x06\x81\x83\x02\xb0\x03"
  "\x04\x83\x04\x13\x22\x89\x01\x02\x38\x13\x73\x74\x61\x74\x69\x63"
  "\x20\x63\x6f\x6e\x73\x74\x20\x73\x68\x6f\x72\x74\x01\x14\x06\x73"
  "\x68\x6f\x72\x74\x0b\x4d\x45\x4d\x4f\x52\x59\x5f\x52\x45\x46\x07"
  "\x62\x6c\x6f\x63\x6b\x73\x18\x09\x73\x65\x63\x74\x69\x6f\x6e\x73"
  "\x08\x63\x6f\x75\x6e\x74\x65\x72\x10\x55\x4c\x4f\x4e\x47\x5f\x54"
  "\x4f\x5f\x46\x49\x58\x4e\x55\x4d\x21\x08\x73\x65\x63\x74\x69\x6f"
  "\x6e\x06\x75\x6c\x6f\x6e\x67\x81\x01\x02\x87\x01\x02\x02\x79\x03"
  "\x88\x01\x03\x62\x02\x4d\x05\x5d\x04\x1c\x04\x85\x01\x03\x5e\x04"
  "\x7c\x03\x07\x63\x3a\x70\x75\x73\x68\x04\x08\x63\x3a\x65\x63\x61"
  "\x6c\x6c\x88\x01\x05\x88\x01\x04\x7e\x03\x17\x03\x0f\x63\x3a\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d\x04\x02\x06\x63\x3a"
  "\x74\x6f\x73\x07\x54\x03\x18\x02\x58\x04\x4e\x03\x1d\x03\x09\x04"
  "\x50\x04\x0e\x05\x0e\x04\x0a\x63\x3a\x69\x66\x2d\x67\x6f\x74\x6f"
  "\x03\x83\x01\x0e\x0d\x06\x0d\x63\x3a\x61\x72\x72\x61\x79\x2d\x64"
  "\x65\x63\x6c\x1f\xeb\x03\x68\x81\xa9\x02\xea\x03\x66\x81\xa7\x02"
  "\xe9\x03\x64\x81\xa9\x02\xe8\x03\x62\x81\xa7\x02\xe7\x03\x60\x81"
  "\xa5\x02\xe6\x03\x5e\x81\xa3\x02\xe5\x03\x5c\x81\xa1\x02\xe4\x03"
  "\x5a\x81\x9f\x02\xe3\x03\x58\x81\xa1\x02\xe2\x03\x56\x81\x9d\x02"
  "\xe1\x03\x54\x81\x9d\x02\xe0\x03\x52\x81\x9b\x02\xdf\x03\x50\x81"
  "\x9f\x02\xde\x03\x4e\x81\x9d\x02\xdd\x03\x4c\x81\x9b\x02\xdc\x03"
  "\x4a\x81\x9d\x02\xdb\x03\x48\x81\x9b\x02\xda\x03\x46\x81\x99\x02"
  "\xd9\x03\x44\x81\x99\x02\xd8\x03\x42\x81\x97\x02\xd7\x03\x40\x81"
  "\x97\x02\xd6\x03\x3e\x81\x97\x02\xd5\x03\x3c\x81\x95\x02\xd4\x03"
  "\x3a\x81\x9b\x02\xd3\x03\x38\x81\x99\x02\xd2\x03\x36\x81\x97\x02"
  "\xd1\x03\x34\x81\x95\x02\xd0\x03\x32\x81\x93\x02\xcf\x03\x30\x81"
  "\x8f\x02\xce\x03\x2e\x81\x91\x02\xcd\x03\x2c\x81\x9b\x02\xcc\x03"
  "\x2a\x81\x99\x02\xcb\x03\x28\x81\x97\x02\xca\x03\x26\x81\x95\x02"
  "\xc9\x03\x24\x81\x91\x02\xc8\x03\x22\x81\x8f\x02\xc7\x03\x20\x81"
  "\x91\x02\xc6\x03\x1e\x81\x8f\x02\xc5\x03\x1c\x81\x8d\x02\xc4\x03"
  "\x1a\x81\x93\x02\xc3\x03\x18\x81\x8f\x02\xc2\x03\x16\x81\x8d\x02"
  "\xc1\x03\x14\x81\x8b\x02\xc0\x03\x12\x81\x91\x02\xbf\x03\x10\x81"
  "\x8b\x02\xbe\x03\x0e\x81\x8b\x02\xbd\x03\x0c\x81\x8d\x02\xbc\x03"
  "\x0a\x81\x8b\x02\xbb\x03\x08\x81\x89\x02\xba\x03\x06\x81\x87\x02"
  "\xb9\x03\x04\x85\x08\x67\xbd\x01\x88\x01\x38\x85\x01\x85\x01\x88"
  "\x01\x04\x89\x01\x04\x86\x01\x04\x4f\x04\x7d\x04\x7f\x04\x16\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2f\x72\x65\x6d\x6f\x74\x65\x2d\x6c"
  "\x69\x6e\x6b\x73\x87\x01\x20\x15\x67\x65\x6e\x65\x72\x61\x74\x65"
  "\x2f\x72\x65\x6d\x6f\x74\x65\x2d\x6c\x69\x6e\x6b\x1a\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2f\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x2d"
  "\x68\x65\x61\x64\x65\x72\x7a\x82\x01\x77\x22\x35\x23\x5b\x28\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x20\x70\x61\x74\x74\x65\x72\x6e\x2d"
  "\x6d\x61\x74\x63\x68\x65\x72\x2f\x6c\x6f\x6f\x6b\x75\x70\x29\x70"
  "\x61\x74\x74\x65\x72\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x5d"
  "\x89\x01\x07\x74\x61\x72\x67\x65\x74\x88\x01\x82\x01\x89\x01\x09"
  "\x6e\x65\x6e\x74\x72\x69\x65\x73\x87\x01\x89\x01\x06\x6e\x76\x61"
  "\x72\x73\x86\x01\x89\x01\x08\x65\x6e\x74\x72\x69\x65\x73\x84\x01"
  "\x04\x7b\x76\x69\x04\x80\x01\x04\x77\x22\x89\x01\x88\x01\x76\x75"
  "\x89\x01\x10\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6c\x61\x62"
  "\x65\x6c\x89\x01\x04\x6d\x69\x6e\x88\x01\x89\x01\x04\x6d\x61\x78"
  "\x85\x01\x89\x01\x86\x01\x78\x04\x73\x89\x01\x0f\x69\x6e\x74\x65"
  "\x72\x6e\x61\x6c\x2d\x6c\x61\x62\x65\x6c\x86\x01\x89\x01\x87\x01"
  "\x89\x01\x06\x65\x6e\x74\x72\x79\x74\x04\x10\x6c\x61\x62\x65\x6c"
  "\x2d\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x72\x04\x6f\x89\x01\x86"
  "\x01\x89\x01\x88\x01\x89\x01\x85\x01\x71\x04\x6b\x89\x01\x86\x01"
  "\x6e\x04\x67\x89\x01\x86\x01\x6a\x04\x64\x89\x01\x86\x01\x66\x04"
  "\x61\x89\x01\x86\x01\x63\x04\x6c\x65\x57\x6d\x62\x56\x5a\x68\x70"
  "\x0f\x6d\x61\x6b\x65\x2d\x63\x6f\x64\x65\x2d\x77\x6f\x72\x64\x0b"
  "\x60\x04\x5f\x04\x5c\x04\x5b\x04\x59\x06\xfd\xff\x03\xff\xff\x03"
  "\x80\x80\x04\x55\x06\x53\x04\x0b\x52\x89\x01\x0b\x66\x72\x61\x6d"
  "\x65\x2d\x73\x69\x7a\x65\x88\x01\x22\x89\x01\x09\x63\x68\x6f\x69"
  "\x63\x65\x2d\x31\x22\x89\x01\x09\x63\x68\x6f\x69\x63\x65\x2d\x32"
  "\x24\x04\x4b\x51\x04\x49\x89\x01\x88\x01\x22\x89\x01\x0a\x6e\x65"
  "\x77\x2d\x66\x72\x61\x6d\x65\x4c\x04\x49\x22\x48\x47\x4a\x04\x2a"
  "\x89\x01\x88\x01\x89\x01\x0d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x87\x01\x46\x2b\x04\x2a\x89\x01\x88\x01\x89\x01\x87"
  "\x01\x44\x45\x04\x2a\x89\x01\x88\x01\x89\x01\x87\x01\x42\x43\x04"
  "\x2a\x89\x01\x88\x01\x89\x01\x87\x01\x40\x41\x04\x2a\x89\x01\x88"
  "\x01\x89\x01\x87\x01\x3e\x3f\x04\x2a\x89\x01\x88\x01\x89\x01\x87"
  "\x01\x3c\x3d\x04\x2a\x89\x01\x88\x01\x89\x01\x87\x01\x3a\x3b\x04"
  "\x2a\x89\x01\x88\x01\x89\x01\x87\x01\x38\x39\x04\x2a\x89\x01\x88"
  "\x01\x89\x01\x87\x01\x36\x37\x04\x2a\x89\x01\x88\x01\x89\x01\x87"
  "\x01\x34\x35\x04\x2a\x89\x01\x88\x01\x89\x01\x87\x01\x32\x33\x04"
  "\x2a\x89\x01\x88\x01\x89\x01\x87\x01\x30\x31\x04\x2a\x89\x01\x88"
  "\x01\x89\x01\x87\x01\x2e\x2f\x04\x2a\x89\x01\x88\x01\x89\x01\x87"
  "\x01\x2d\x04\x2c\x0b\x04\x29\x89\x01\x88\x01\x89\x01\x87\x01\x89"
  "\x01\x0a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x28\x04\x27\x89\x01"
  "\x88\x01\x89\x01\x87\x01\x22\x89\x01\x0c\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x89\x01\x05\x6e\x61\x6d\x65\x86\x01\x25\x04"
  "\x23\x89\x01\x88\x01\x89\x01\x87\x01\x22\x89\x01\x0a\x65\x78\x74"
  "\x65\x6e\x73\x69\x6f\x6e\x26\x04\x1f\x89\x01\x88\x01\x89\x01\x87"
  "\x01\x89\x01\x86\x01\x1b\x04\x1a\x89\x01\x88\x01\x89\x01\x87\x01"
  "\x89\x01\x86\x01\x1e\x04\x15\x89\x01\x0e\x6e\x75\x6d\x62\x65\x72"
  "\x2d\x70\x75\x73\x68\x65\x64\x86\x01\x89\x01\x87\x01\x0c\x04\x16"
  "\x89\x01\x86\x01\x89\x01\x87\x01\x89\x01\x06\x6c\x61\x62\x65\x6c"
  "\x86\x01\x19\x04\x12\x89\x01\x88\x01\x89\x01\x87\x01\x13\x04\x10"
  "\x89\x01\x88\x01\x89\x01\x87\x01\x89\x01\x86\x01\x11\x04\x0a\x89"
  "\x01\x88\x01\x89\x01\x87\x01\x0f\x04\x04\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x04\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x04\x14"
  "\x61\x64\x64\x2d\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2d\x72\x75"
  "\x6c\x65\x21\x02\x2d\x5c\x80\x80\x04\x2c\x5a\x81\x81\x02\x2b\x58"
  "\x81\x81\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x83\x02\x28\x52\x81"
  "\x83\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x83"
  "\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81\x83\x02"
  "\x21\x44\x81\x83\x02\x20\x42\x81\x83\x02\x1f\x40\x81\x83\x02\x1e"
  "\x3e\x81\x83\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b\x38"
  "\x81\x83\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x83\x02\x18\x32\x81"
  "\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83"
  "\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02"
  "\x11\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e"
  "\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18"
  "\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81"
  "\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x83"
  "\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81\x83\x02"
  "\x01\x04\x81\x83\x02\x5b\xbd\x01";

SCHEME_OBJECT *
rules3_so_data_5d595775909a10c4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rules3_so_data_5d595775909a10c4 [0]))), (sizeof (prog_rules3_so_data_5d595775909a10c4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_50]));
}

DECLARE_COMPILED_DATA_NS ("rules3.so", rules3_so_data_5d595775909a10c4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rules3.so", "ef49000858d6603e")
