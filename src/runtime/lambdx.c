/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:41-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define EXECUTE_CACHE_1_8 7
#define EXECUTE_CACHE_1_7 9
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambdx_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
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
      goto make_lambda__1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_lambda__4)
DEFLABEL (make_lambda__1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd16.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_0)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_8 7
#define ENVIRONMENT_LABEL_2_3 14
#define DEBUGGING_LABEL_2_2 13
#define EXECUTE_CACHE_2_9 9
#define EXECUTE_CACHE_2_7 11
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambdx_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto lambda_components__2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_components__5)
DEFLABEL (lambda_components__2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x808, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (Rsp [7]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Rsp [6]) = (Wrd12.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_8 7
#define LABEL_3_10 9
#define ENVIRONMENT_LABEL_3_3 19
#define DEBUGGING_LABEL_3_2 18
#define OBJECT_3_0 17
#define EXECUTE_CACHE_3_11 11
#define EXECUTE_CACHE_3_9 13
#define EXECUTE_CACHE_3_7 15
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambdx_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_components___4;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_components___7)
DEFLABEL (lambda_components___4)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd14.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_9;

DEFLABEL (label_10)
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_9)
DEFLABEL (label_11)
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Rsp [5]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd9.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
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
lambdx_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_pattern_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_pattern_name_3)
DEFLABEL (lambda_pattern_name_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
lambdx_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_pattern_required_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_pattern_required_3)
DEFLABEL (lambda_pattern_required_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
lambdx_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_pattern_optional_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_pattern_optional_3)
DEFLABEL (lambda_pattern_optional_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
lambdx_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_pattern_rest_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_pattern_rest_3)
DEFLABEL (lambda_pattern_rest_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define ENVIRONMENT_LABEL_8_3 17
#define DEBUGGING_LABEL_8_2 16
#define OBJECT_8_3 15
#define OBJECT_8_2 14
#define OBJECT_8_1 13
#define OBJECT_8_0 12
#define FREE_REFERENCE_8_0 11
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambdx_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_patternP_4;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_patternP_10)
DEFLABEL (lambda_patternP_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
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
  Rvl = (current_block [OBJECT_8_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_8_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_7 5
#define LABEL_9_5 7
#define TAG_9_6 2
#define LABEL_9_10 9
#define LABEL_9_11 11
#define LABEL_9_12 13
#define LABEL_9_15 15
#define LABEL_9_16 17
#define LABEL_9_8 19
#define TAG_9_9 8
#define LABEL_9_17 21
#define LABEL_9_18 23
#define LABEL_9_13 25
#define TAG_9_14 11
#define LABEL_9_20 27
#define ENVIRONMENT_LABEL_9_3 40
#define DEBUGGING_LABEL_9_2 39
#define OBJECT_9_7 38
#define OBJECT_9_6 37
#define OBJECT_9_5 36
#define OBJECT_9_4 35
#define OBJECT_9_3 34
#define OBJECT_9_2 33
#define OBJECT_9_1 32
#define OBJECT_9_0 31
#define EXECUTE_CACHE_9_19 29
#define FREE_REFERENCES_LABEL_9_0 28
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambdx_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      goto make_lambda___14;

    case 1:
      current_block = (Rpc - LABEL_9_7);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_25;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto split_13;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_9_15);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_9_8);
      goto lambda_26;

    case 9:
      current_block = (Rpc - LABEL_9_17);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_9_18);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_9_13);
      goto lambda_28;

    case 12:
      current_block = (Rpc - LABEL_9_20);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_lambda___24)
DEFLABEL (make_lambda___14)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_30;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_30;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_29)
  (Rsp [0]) = (Wrd12.Obj);
  goto split_13;

DEFLABEL (label_30)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_9_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_16)
  (Wrd12.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_8])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd13 = Wrd6;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_32;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd30.Lng))))
    goto label_32;
  (Wrd18.Obj) = ((Wrd28.pObj) [4]);

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd18.Obj);
  (Wrd42.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd42.Obj);
  goto split_13;

DEFLABEL (label_32)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [3]);
  (Wrd38.Obj) = (current_block [OBJECT_9_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_17)
  (Wrd18.Obj) = Rvl;
  goto label_31;

DEFLABEL (split_27)
DEFLABEL (split_13)
  INTERRUPT_CHECK (26, LABEL_9_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_33;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_4]);
  (Rsp [1]) = (Wrd9.Obj);
  goto pop_return;

DEFLABEL (label_33)
  if (! ((Wrd6.uLng) == 1))
    goto label_37;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_13])));
  Rhp += 2;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd24 = Wrd21;
  (Wrd25.Obj) = (Rsp [2]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_35;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_34)
  (Rsp [1]) = (Wrd26.Obj);
  goto split_13;

DEFLABEL (label_35)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_19)
  (Wrd26.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_18)
  (Wrd10.Obj) = Rvl;
  goto label_36;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_9_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd23.Obj) = ((Wrd6.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_43;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_43;
  (Wrd12.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_42)
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [6]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 1)
    goto label_40;
  (Wrd39.Obj) = (current_block [OBJECT_9_7]);

DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_38)
  (Rsp [4]) = (Wrd39.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [2]);
  (Rsp [5]) = (Wrd40.Obj);
  (Wrd43.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (label_40)
  if (! ((Wrd37.uLng) == 1))
    goto label_41;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd39.Obj) = ((Wrd46.pObj) [0]);
  goto label_39;

DEFLABEL (label_41)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_6]), 1);

DEFLABEL (label_21)
  (Wrd39.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Wrd28.Obj) = (current_block [OBJECT_9_5]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (Wrd39.Obj) = Rvl;
  goto label_38;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_9_13);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_45;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_44)
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [2]);
  (Rsp [0]) = (Wrd24.Obj);
  goto pop_return;

DEFLABEL (label_45)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_6]), 1);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_0
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
lambdx_so_dd0473fce14f6f47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto make_lambda_pattern_20;

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
	1,
	1,
	0,
	0,
	0,
	0,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 9)
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

DEFLABEL (make_lambda_pattern_20)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (make_lambda_pattern_9)
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

static const struct liarc_code_S arr_decl_lambdx_so_dd0473fce14f6f47 [9] =
  {
    { "lambdx_so_code_1", 2, lambdx_so_code_1 },
    { "lambdx_so_code_2", 3, lambdx_so_code_2 },
    { "lambdx_so_code_3", 4, lambdx_so_code_3 },
    { "lambdx_so_code_4", 1, lambdx_so_code_4 },
    { "lambdx_so_code_5", 1, lambdx_so_code_5 },
    { "lambdx_so_code_6", 1, lambdx_so_code_6 },
    { "lambdx_so_code_7", 1, lambdx_so_code_7 },
    { "lambdx_so_code_8", 4, lambdx_so_code_8 },
    { "lambdx_so_code_9", 13, lambdx_so_code_9 }
  };

int
decl_lambdx_so_dd0473fce14f6f47 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_lambdx_so_dd0473fce14f6f47);
  return (0);
}

DECLARE_COMPILED_CODE ("lambdx.so", 14, decl_lambdx_so_dd0473fce14f6f47, lambdx_so_dd0473fce14f6f47)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_lambdx_so_data_dd0473fce14f6f47 [1100] =
  "\x38\x0f\x92\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x82\x88\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x83\x88"
  "\x08\x28\x0d\xbb\x28\x0d\xbc\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x84\x88\xc2\xbe\x81\x22\x29\x21"
  "\x9e\x2b\xbf\x1d\xb0\x85\x88\xb6\x82\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x86\x88\xb6\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb6"
  "\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\xb6\x80\xc1\x0e"
  "\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x06\xc1\x81\x08\xc1\x83\xb6\x82\x28\x0d\xbe\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb8\x17\x1c\x88\x1b"
  "\x1b\xb0\x2a\x1b\x2a\x99\x0d\x0d\x99\xb4\x0d\x0d\x0d\x0d\x9b\x1b"
  "\x2a\x1b\x2a\x1b\x2a\xb7\x2a\x9b\xc3\x0d\x1c\x0c\x0d\x0d\x0d\x0d"
  "\x08\x8b\x08\x0d\xb3\xb6\x9a\xb5\x2a\xb2\x2a\xb1\x2a\x9a\x28\x0d"
  "\x28\x0d\x28\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e"
  "\x2f\x6c\x61\x6d\x62\x64\x78\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x04\x0d\x73\x63\x61\x6e\x2d\x64\x65\x66\x69\x6e\x65\x73\x09"
  "\x0c\x6d\x61\x6b\x65\x2d\x6c\x61\x6d\x62\x64\x61\x03\x10\x06\x81"
  "\x89\x02\x0f\x04\x87\x0c\x05\x0d\x02\x04\x12\x6c\x61\x6d\x62\x64"
  "\x61\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x05\x10\x6d\x61"
  "\x6b\x65\x2d\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x03\x13\x08"
  "\x81\x91\x02\x12\x06\x81\x91\x02\x11\x04\x84\x06\x07\x0f\x02\x04"
  "\x13\x6c\x61\x6d\x62\x64\x61\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e"
  "\x74\x73\x2a\x06\x14\x6d\x61\x6b\x65\x2d\x6c\x61\x6d\x62\x64\x61"
  "\x2d\x70\x61\x74\x74\x65\x72\x6e\x05\x07\x61\x70\x70\x65\x6e\x64"
  "\x04\x17\x0a\x81\x8f\x02\x16\x08\x81\x8d\x02\x15\x06\x81\x8d\x02"
  "\x14\x04\x84\x06\x09\x14\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d"
  "\x72\x65\x66\x18\x04\x83\x04\x03\x02\x19\x04\x83\x04\x03\x09\x02"
  "\x1a\x04\x83\x04\x03\x0a\x02\x08\x1b\x04\x83\x04\x03\x0b\x02\x09"
  "\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07"
  "\x2e\x74\x61\x67\x2e\x31\x0c\x02\x1f\x0a\x81\x85\x02\x1e\x08\x81"
  "\x83\x02\x1d\x06\x81\x83\x02\x1c\x04\x83\x04\x09\x12\x0d\x02\x0a"
  "\x04\x63\x61\x72\x04\x63\x64\x72\x07\x0d\x6d\x61\x6b\x65\x2d\x6c"
  "\x61\x6d\x62\x64\x61\x2a\x02\x2c\x1c\x81\x87\x02\x2b\x1a\x81\x87"
  "\x02\x2a\x18\x81\x8f\x02\x29\x16\x81\x89\x02\x28\x14\x81\x87\x02"
  "\x27\x12\x81\x8d\x02\x26\x10\x81\x87\x02\x25\x0e\x81\x87\x02\x24"
  "\x0c\x81\x87\x02\x23\x0a\x81\x89\x02\x22\x08\x81\x87\x02\x21\x06"
  "\x81\x87\x02\x20\x04\x85\x08\x1b\x29\x0a\x0e\x0e\x0c\x04\x0d\x04"
  "\x0e\x6d\x61\x6b\x65\x2d\x6c\x61\x6d\x62\x64\x61\x2a\x2a\x10\x6c"
  "\x61\x6d\x62\x64\x61\x2d\x70\x61\x74\x74\x65\x72\x6e\x3f\x14\x6c"
  "\x61\x6d\x62\x64\x61\x2d\x70\x61\x74\x74\x65\x72\x6e\x2f\x72\x65"
  "\x73\x74\x18\x6c\x61\x6d\x62\x64\x61\x2d\x70\x61\x74\x74\x65\x72"
  "\x6e\x2f\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x18\x6c\x61\x6d\x62\x64"
  "\x61\x2d\x70\x61\x74\x74\x65\x72\x6e\x2f\x72\x65\x71\x75\x69\x72"
  "\x65\x64\x14\x6c\x61\x6d\x62\x64\x61\x2d\x70\x61\x74\x74\x65\x72"
  "\x6e\x2f\x6e\x61\x6d\x65\x0b\x04\x0a\x04\x09\x04\x04\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x13\x72"
  "\x74\x64\x3a\x6c\x61\x6d\x62\x64\x61\x2d\x70\x61\x74\x74\x65\x72"
  "\x6e\x0e\x0f\x6c\x61\x6d\x62\x64\x61\x2d\x70\x61\x74\x74\x65\x72"
  "\x6e\x05\x6e\x61\x6d\x65\x09\x72\x65\x71\x75\x69\x72\x65\x64\x09"
  "\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x05\x72\x65\x73\x74\x14\x6c\x61"
  "\x6d\x62\x64\x61\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x2a"
  "\x2a\x04\x04\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d"
  "\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61"
  "\x67\x04\x0e\x02\x0e\x1e\x80\x80\x04\x0d\x1c\x81\x81\x02\x0c\x1a"
  "\x81\x81\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81"
  "\x8b\x02\x08\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85"
  "\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02"
  "\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x1d\x38";

SCHEME_OBJECT *
lambdx_so_data_dd0473fce14f6f47 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_lambdx_so_data_dd0473fce14f6f47 [0]))), (sizeof (prog_lambdx_so_data_dd0473fce14f6f47)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_21]));
}

DECLARE_COMPILED_DATA_NS ("lambdx.so", lambdx_so_data_dd0473fce14f6f47)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("lambdx.so", "facc5c5bdf2fd010")
