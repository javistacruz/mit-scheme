/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:39-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 13
#define DEBUGGING_LABEL_1_2 12
#define OBJECT_1_0 11
#define EXECUTE_CACHE_1_7 7
#define EXECUTE_CACHE_1_6 9
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto guarantee_http_request_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_http_request_4)
DEFLABEL (guarantee_http_request_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_1_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 11
#define DEBUGGING_LABEL_2_2 10
#define OBJECT_2_2 9
#define OBJECT_2_1 8
#define OBJECT_2_0 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto error_not_http_request_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_http_request_5)
DEFLABEL (error_not_http_request_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_2_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_2_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_9 9
#define LABEL_3_11 11
#define LABEL_3_13 13
#define TAG_3_14 5
#define ENVIRONMENT_LABEL_3_3 27
#define DEBUGGING_LABEL_3_2 26
#define OBJECT_3_0 25
#define EXECUTE_CACHE_3_15 15
#define EXECUTE_CACHE_3_12 17
#define EXECUTE_CACHE_3_10 19
#define EXECUTE_CACHE_3_8 21
#define EXECUTE_CACHE_3_6 23
#define FREE_REFERENCES_LABEL_3_0 14
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_3_4);
      goto make_http_request_5;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_3_13);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_http_request_8)
DEFLABEL (make_http_request_5)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_13])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_3_13);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_8 9
#define ENVIRONMENT_LABEL_4_3 19
#define DEBUGGING_LABEL_4_2 18
#define OBJECT_4_0 17
#define EXECUTE_CACHE_4_10 11
#define EXECUTE_CACHE_4_9 13
#define EXECUTE_CACHE_4_7 15
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd9.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_7 7
#define EXECUTE_CACHE_5_6 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_http_response_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_http_response_4)
DEFLABEL (guarantee_http_response_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_5_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 11
#define DEBUGGING_LABEL_6_2 10
#define OBJECT_6_2 9
#define OBJECT_6_1 8
#define OBJECT_6_0 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto error_not_http_response_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_http_response_5)
DEFLABEL (error_not_http_response_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_6_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_6_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_9 9
#define LABEL_7_11 11
#define LABEL_7_13 13
#define TAG_7_14 5
#define ENVIRONMENT_LABEL_7_3 27
#define DEBUGGING_LABEL_7_2 26
#define OBJECT_7_0 25
#define EXECUTE_CACHE_7_15 15
#define EXECUTE_CACHE_7_12 17
#define EXECUTE_CACHE_7_10 19
#define EXECUTE_CACHE_7_8 21
#define EXECUTE_CACHE_7_6 23
#define FREE_REFERENCES_LABEL_7_0 14
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_7_4);
      goto make_http_response_5;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_http_response_8)
DEFLABEL (make_http_response_5)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_13])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_7_13);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 11
#define DEBUGGING_LABEL_8_2 10
#define OBJECT_8_0 9
#define EXECUTE_CACHE_8_6 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  (Wrd10.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_9 7
#define LABEL_9_7 9
#define TAG_9_8 3
#define LABEL_9_11 11
#define LABEL_9_15 13
#define LABEL_9_13 15
#define LABEL_9_19 17
#define LABEL_9_21 19
#define TAG_9_22 8
#define LABEL_9_16 21
#define LABEL_9_17 23
#define LABEL_9_23 25
#define TAG_9_24 11
#define ENVIRONMENT_LABEL_9_3 44
#define DEBUGGING_LABEL_9_2 43
#define OBJECT_9_1 42
#define OBJECT_9_0 41
#define EXECUTE_CACHE_9_25 27
#define EXECUTE_CACHE_9_20 29
#define EXECUTE_CACHE_9_18 31
#define EXECUTE_CACHE_9_14 33
#define EXECUTE_CACHE_9_12 35
#define EXECUTE_CACHE_9_10 37
#define EXECUTE_CACHE_9_6 39
#define FREE_REFERENCES_LABEL_9_0 26
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_9_4);
      goto guarantee_headers_body_16;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto lambda_21;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_9_19);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_9_21);
      goto lambda_22;

    case 9:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_9_23);
      goto lambda_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_headers_body_20)
DEFLABEL (guarantee_headers_body_16)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_13);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  (Wrd34.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_25]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_23])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  Rvl = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_28;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_28;
  if (! (Rvl == (Wrd9.Obj)))
    goto label_27;

DEFLABEL (label_26)
  (Wrd22.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd23.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_21])));
  Rhp += 2;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd29 = Wrd26;
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  ((Wrd29.pObj) [3]) = (Wrd28.Obj);
  Rvl = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9_15);
  goto label_26;

DEFLABEL (label_28)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_26;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_9_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [2]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_9_21);

DEFLABEL (lambda_13)
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

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_9_23);

DEFLABEL (lambda_9)
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
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define ENVIRONMENT_LABEL_10_3 15
#define DEBUGGING_LABEL_10_2 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_8 9
#define EXECUTE_CACHE_10_6 11
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto simple_http_requestP_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simple_http_requestP_5)
DEFLABEL (simple_http_requestP_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_10_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_7 7
#define EXECUTE_CACHE_11_6 9
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto guarantee_simple_http_request_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_simple_http_request_4)
DEFLABEL (guarantee_simple_http_request_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_11_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 11
#define DEBUGGING_LABEL_12_2 10
#define OBJECT_12_2 9
#define OBJECT_12_1 8
#define OBJECT_12_0 7
#define EXECUTE_CACHE_12_5 5
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto error_not_simple_http_request_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_simple_http_request_5)
DEFLABEL (error_not_simple_http_request_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_12_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_12_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 16
#define DEBUGGING_LABEL_13_2 15
#define OBJECT_13_3 14
#define OBJECT_13_2 13
#define OBJECT_13_1 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_7 7
#define EXECUTE_CACHE_13_6 9
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      goto make_simple_http_request_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_simple_http_request_4)
DEFLABEL (make_simple_http_request_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd5.Obj) = (current_block [OBJECT_13_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13_3]);
  (Rsp [4]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define ENVIRONMENT_LABEL_14_3 15
#define DEBUGGING_LABEL_14_2 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_8 9
#define EXECUTE_CACHE_14_6 11
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_14_4);
      goto simple_http_responseP_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simple_http_responseP_5)
DEFLABEL (simple_http_responseP_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_14_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 13
#define DEBUGGING_LABEL_15_2 12
#define OBJECT_15_0 11
#define EXECUTE_CACHE_15_7 7
#define EXECUTE_CACHE_15_6 9
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto guarantee_simple_http_response_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_simple_http_response_4)
DEFLABEL (guarantee_simple_http_response_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_15_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 11
#define DEBUGGING_LABEL_16_2 10
#define OBJECT_16_2 9
#define OBJECT_16_1 8
#define OBJECT_16_0 7
#define EXECUTE_CACHE_16_5 5
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto error_not_simple_http_response_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_simple_http_response_5)
DEFLABEL (error_not_simple_http_response_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_16_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_16_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define ENVIRONMENT_LABEL_17_3 19
#define DEBUGGING_LABEL_17_2 18
#define OBJECT_17_2 17
#define OBJECT_17_1 16
#define OBJECT_17_0 15
#define EXECUTE_CACHE_17_9 9
#define EXECUTE_CACHE_17_8 11
#define EXECUTE_CACHE_17_6 13
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_17_4);
      goto make_simple_http_response_2;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_simple_http_response_5)
DEFLABEL (make_simple_http_response_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd5.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define EXECUTE_CACHE_18_7 7
#define EXECUTE_CACHE_18_6 9
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto http_messageP_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (http_messageP_5)
DEFLABEL (http_messageP_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 13
#define DEBUGGING_LABEL_19_2 12
#define OBJECT_19_0 11
#define EXECUTE_CACHE_19_7 7
#define EXECUTE_CACHE_19_6 9
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto guarantee_http_message_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_http_message_4)
DEFLABEL (guarantee_http_message_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_19_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 11
#define DEBUGGING_LABEL_20_2 10
#define OBJECT_20_2 9
#define OBJECT_20_1 8
#define OBJECT_20_0 7
#define EXECUTE_CACHE_20_5 5
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto error_not_http_message_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_http_message_5)
DEFLABEL (error_not_http_message_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_20_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_20_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define ENVIRONMENT_LABEL_21_3 21
#define DEBUGGING_LABEL_21_2 20
#define OBJECT_21_0 19
#define EXECUTE_CACHE_21_11 9
#define EXECUTE_CACHE_21_10 11
#define EXECUTE_CACHE_21_9 13
#define EXECUTE_CACHE_21_8 15
#define EXECUTE_CACHE_21_6 17
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_21_4);
      goto http_message_headers_2;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (http_message_headers_5)
DEFLABEL (http_message_headers_2)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (label_7)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define ENVIRONMENT_LABEL_22_3 21
#define DEBUGGING_LABEL_22_2 20
#define OBJECT_22_0 19
#define EXECUTE_CACHE_22_11 9
#define EXECUTE_CACHE_22_10 11
#define EXECUTE_CACHE_22_9 13
#define EXECUTE_CACHE_22_8 15
#define EXECUTE_CACHE_22_6 17
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto http_message_body_2;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (http_message_body_5)
DEFLABEL (http_message_body_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (label_7)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define ENVIRONMENT_LABEL_23_3 18
#define DEBUGGING_LABEL_23_2 17
#define OBJECT_23_1 16
#define OBJECT_23_0 15
#define EXECUTE_CACHE_23_9 9
#define EXECUTE_CACHE_23_8 11
#define EXECUTE_CACHE_23_6 13
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto http_request_uriP_5;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (http_request_uriP_8)
DEFLABEL (http_request_uriP_5)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = Rvl;

DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd10.Obj) = (Rsp [1]);
  if ((Wrd10.Obj) == (current_block [OBJECT_23_0]))
    goto label_12;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_23_1]);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 13
#define DEBUGGING_LABEL_24_2 12
#define OBJECT_24_0 11
#define EXECUTE_CACHE_24_7 7
#define EXECUTE_CACHE_24_6 9
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto guarantee_http_request_uri_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_http_request_uri_4)
DEFLABEL (guarantee_http_request_uri_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_24_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 11
#define DEBUGGING_LABEL_25_2 10
#define OBJECT_25_2 9
#define OBJECT_25_1 8
#define OBJECT_25_0 7
#define EXECUTE_CACHE_25_5 5
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto error_not_http_request_uri_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_http_request_uri_5)
DEFLABEL (error_not_http_request_uri_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_25_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_25_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define LABEL_26_9 9
#define LABEL_26_11 11
#define ENVIRONMENT_LABEL_26_3 24
#define DEBUGGING_LABEL_26_2 23
#define EXECUTE_CACHE_26_13 13
#define EXECUTE_CACHE_26_12 15
#define EXECUTE_CACHE_26_10 17
#define EXECUTE_CACHE_26_8 19
#define EXECUTE_CACHE_26_6 21
#define FREE_REFERENCES_LABEL_26_0 12
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_26_4);
      goto simple_http_request_uriP_4;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simple_http_request_uriP_7)
DEFLABEL (simple_http_request_uriP_4)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 13
#define DEBUGGING_LABEL_27_2 12
#define OBJECT_27_0 11
#define EXECUTE_CACHE_27_7 7
#define EXECUTE_CACHE_27_6 9
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto guarantee_simple_http_request_uri_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_simple_http_request_uri_4)
DEFLABEL (guarantee_simple_http_request_uri_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_27_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 11
#define DEBUGGING_LABEL_28_2 10
#define OBJECT_28_2 9
#define OBJECT_28_1 8
#define OBJECT_28_0 7
#define EXECUTE_CACHE_28_5 5
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto error_not_simple_http_request_uri_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_simple_http_request_uri_5)
DEFLABEL (error_not_simple_http_request_uri_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_28_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_28_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 14
#define DEBUGGING_LABEL_29_2 13
#define OBJECT_29_1 12
#define OBJECT_29_0 11
#define EXECUTE_CACHE_29_7 7
#define EXECUTE_CACHE_29_6 9
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      goto Z__text_mode_1;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__text_mode_4)
DEFLABEL (Z__text_mode_1)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_1]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 13
#define DEBUGGING_LABEL_30_2 12
#define OBJECT_30_0 11
#define EXECUTE_CACHE_30_7 7
#define EXECUTE_CACHE_30_6 9
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_30_4);
      goto Z__binary_mode_1;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__binary_mode_4)
DEFLABEL (Z__binary_mode_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_7 7
#define LABEL_31_8 9
#define LABEL_31_10 11
#define LABEL_31_12 13
#define LABEL_31_13 15
#define LABEL_31_15 17
#define LABEL_31_17 19
#define LABEL_31_21 21
#define LABEL_31_19 23
#define LABEL_31_22 25
#define LABEL_31_25 27
#define LABEL_31_26 29
#define LABEL_31_31 31
#define LABEL_31_33 33
#define LABEL_31_34 35
#define LABEL_31_36 37
#define LABEL_31_39 39
#define ENVIRONMENT_LABEL_31_3 82
#define DEBUGGING_LABEL_31_2 81
#define OBJECT_31_3 80
#define OBJECT_31_2 79
#define OBJECT_31_1 78
#define OBJECT_31_0 77
#define EXECUTE_CACHE_31_40 41
#define EXECUTE_CACHE_31_38 43
#define EXECUTE_CACHE_31_37 45
#define EXECUTE_CACHE_31_35 47
#define EXECUTE_CACHE_31_32 49
#define EXECUTE_CACHE_31_30 51
#define EXECUTE_CACHE_31_29 53
#define EXECUTE_CACHE_31_28 55
#define EXECUTE_CACHE_31_27 57
#define EXECUTE_CACHE_31_24 59
#define EXECUTE_CACHE_31_23 61
#define EXECUTE_CACHE_31_20 63
#define EXECUTE_CACHE_31_18 65
#define EXECUTE_CACHE_31_16 67
#define EXECUTE_CACHE_31_14 69
#define EXECUTE_CACHE_31_11 71
#define EXECUTE_CACHE_31_9 73
#define EXECUTE_CACHE_31_6 75
#define FREE_REFERENCES_LABEL_31_0 40
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_31_4);
      goto write_http_request_20;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_31_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_31_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_31_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_31_15);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_31_17);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_31_21);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_31_19);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_31_22);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_31_25);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_31_26);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_31_31);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_31_33);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_31_34);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_31_36);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_31_39);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_http_request_23)
DEFLABEL (write_http_request_20)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_31_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_24]));

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_31_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_30]));

DEFLABEL (label_25)
  (Wrd9.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == (current_block [OBJECT_31_1]))
    goto label_26;
  (Wrd11.Obj) = (current_block [OBJECT_31_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_29]));

DEFLABEL (label_26)
  (Wrd13.Obj) = (current_block [OBJECT_31_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_28]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_31_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_31_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_26]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_16]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_31_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_32]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_31_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_20]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_31_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_35]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_31_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_38]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_31_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_37]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_31_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_39]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_40]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_31_39);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_31_19);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_27]));

DEFLABEL (label_27)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_19]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_20]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_7 5
#define LABEL_32_5 7
#define LABEL_32_10 9
#define LABEL_32_8 11
#define LABEL_32_12 13
#define LABEL_32_13 15
#define LABEL_32_14 17
#define LABEL_32_15 19
#define LABEL_32_17 21
#define LABEL_32_21 23
#define LABEL_32_22 25
#define LABEL_32_24 27
#define LABEL_32_26 29
#define LABEL_32_27 31
#define LABEL_32_29 33
#define LABEL_32_31 35
#define ENVIRONMENT_LABEL_32_3 65
#define DEBUGGING_LABEL_32_2 64
#define OBJECT_32_0 63
#define EXECUTE_CACHE_32_33 37
#define EXECUTE_CACHE_32_32 39
#define EXECUTE_CACHE_32_30 41
#define EXECUTE_CACHE_32_28 43
#define EXECUTE_CACHE_32_25 45
#define EXECUTE_CACHE_32_23 47
#define EXECUTE_CACHE_32_20 49
#define EXECUTE_CACHE_32_19 51
#define EXECUTE_CACHE_32_18 53
#define EXECUTE_CACHE_32_16 55
#define EXECUTE_CACHE_32_11 57
#define EXECUTE_CACHE_32_9 59
#define EXECUTE_CACHE_32_6 61
#define FREE_REFERENCES_LABEL_32_0 36
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_32_4);
      goto write_http_response_16;

    case 1:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_32_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_32_13);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_32_14);
      goto continuation_15;

    case 8:
      current_block = (Rpc - LABEL_32_15);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_32_17);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_32_21);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_32_22);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_32_24);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_32_26);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_32_27);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_32_29);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_32_31);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_http_response_19)
DEFLABEL (write_http_response_16)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_32_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_32_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_27]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_32_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_32_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_32_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_32]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_32_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_33]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_32_7);

DEFLABEL (label_20)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_32_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_32_14);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_20]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define LABEL_33_9 9
#define LABEL_33_12 11
#define LABEL_33_11 13
#define ENVIRONMENT_LABEL_33_3 29
#define DEBUGGING_LABEL_33_2 28
#define OBJECT_33_0 27
#define EXECUTE_CACHE_33_14 15
#define EXECUTE_CACHE_33_13 17
#define EXECUTE_CACHE_33_10 19
#define EXECUTE_CACHE_33_8 21
#define EXECUTE_CACHE_33_6 23
#define FREE_REFERENCE_33_0 26
#define FREE_REFERENCES_LABEL_33_0 14
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_33_4);
      goto read_simple_http_request_5;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_33_12);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_simple_http_request_9)
DEFLABEL (read_simple_http_request_5)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_12;
  Wrd14 = Wrd18;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_11);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_14]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_12])), (Wrd15.pObj));

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define ENVIRONMENT_LABEL_34_3 12
#define DEBUGGING_LABEL_34_2 11
#define EXECUTE_CACHE_34_7 7
#define EXECUTE_CACHE_34_6 9
#define FREE_REFERENCES_LABEL_34_0 6
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto read_simple_http_response_1;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_simple_http_response_4)
DEFLABEL (read_simple_http_response_1)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_9 9
#define LABEL_35_12 11
#define LABEL_35_11 13
#define LABEL_35_14 15
#define TAG_35_15 6
#define LABEL_35_16 17
#define LABEL_35_21 19
#define LABEL_35_19 21
#define LABEL_35_18 23
#define LABEL_35_25 25
#define LABEL_35_24 27
#define LABEL_35_27 29
#define ENVIRONMENT_LABEL_35_3 57
#define DEBUGGING_LABEL_35_2 56
#define OBJECT_35_2 55
#define OBJECT_35_1 54
#define OBJECT_35_0 53
#define EXECUTE_CACHE_35_28 31
#define EXECUTE_CACHE_35_26 33
#define EXECUTE_CACHE_35_23 35
#define EXECUTE_CACHE_35_22 37
#define EXECUTE_CACHE_35_20 39
#define EXECUTE_CACHE_35_17 41
#define EXECUTE_CACHE_35_13 43
#define EXECUTE_CACHE_35_10 45
#define EXECUTE_CACHE_35_8 47
#define EXECUTE_CACHE_35_6 49
#define FREE_REFERENCE_35_0 52
#define FREE_REFERENCES_LABEL_35_0 30
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_35_4);
      goto read_http_request_17;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_35_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_35_12);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_35_11);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_35_14);
      goto lambda_24;

    case 7:
      current_block = (Rpc - LABEL_35_16);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_35_21);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_35_19);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_35_18);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_35_25);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_35_24);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_35_27);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_http_request_23)
DEFLABEL (read_http_request_17)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_27;
  Wrd14 = Wrd18;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_35_11);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_12])), (Wrd15.pObj));

DEFLABEL (label_19)
  (Wrd14.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_35_14);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_19);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_21]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_21);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_22]));

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_32;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_26]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_35_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_30;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_29)
  (Rsp [6]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_28]));

DEFLABEL (label_30)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_27]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 1);

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_35_18);
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define LABEL_36_9 9
#define LABEL_36_14 11
#define LABEL_36_11 13
#define TAG_36_12 5
#define LABEL_36_13 15
#define LABEL_36_16 17
#define LABEL_36_21 19
#define LABEL_36_23 21
#define LABEL_36_25 23
#define LABEL_36_27 25
#define LABEL_36_19 27
#define LABEL_36_18 29
#define LABEL_36_32 31
#define LABEL_36_31 33
#define LABEL_36_34 35
#define LABEL_36_29 37
#define ENVIRONMENT_LABEL_36_3 75
#define DEBUGGING_LABEL_36_2 74
#define OBJECT_36_4 73
#define OBJECT_36_3 72
#define OBJECT_36_2 71
#define OBJECT_36_1 70
#define OBJECT_36_0 69
#define EXECUTE_CACHE_36_36 39
#define EXECUTE_CACHE_36_35 41
#define EXECUTE_CACHE_36_33 43
#define EXECUTE_CACHE_36_30 45
#define EXECUTE_CACHE_36_28 47
#define EXECUTE_CACHE_36_26 49
#define EXECUTE_CACHE_36_24 51
#define EXECUTE_CACHE_36_22 53
#define EXECUTE_CACHE_36_20 55
#define EXECUTE_CACHE_36_17 57
#define EXECUTE_CACHE_36_15 59
#define EXECUTE_CACHE_36_10 61
#define EXECUTE_CACHE_36_8 63
#define EXECUTE_CACHE_36_6 65
#define FREE_REFERENCE_36_0 68
#define FREE_REFERENCES_LABEL_36_0 38
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
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
      goto read_http_response_22;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_36_14);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_36_11);
      goto lambda_29;

    case 6:
      current_block = (Rpc - LABEL_36_13);
      goto continuation_20;

    case 7:
      current_block = (Rpc - LABEL_36_16);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_36_21);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_36_23);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_36_25);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_36_27);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_36_19);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_36_18);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_36_32);
      goto label_25;

    case 15:
      current_block = (Rpc - LABEL_36_31);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_36_34);
      goto label_26;

    case 17:
      current_block = (Rpc - LABEL_36_29);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_http_response_28)
DEFLABEL (read_http_response_22)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_11])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_32;
  Wrd21 = Wrd25;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_15]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_36_13);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_14])), (Wrd22.pObj));

DEFLABEL (label_24)
  (Wrd21.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_36_11);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_36_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_27]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_29]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_30]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_36_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_36]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_36_27);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_25]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_28]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_36_25);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_23]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [4]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [2]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_26]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_36_23);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_21]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (Rsp [4]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [2]);
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_36_21);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_22]));

DEFLABEL (label_33)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;

DEFLABEL (label_38)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_37;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_36)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_33]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_36_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_35;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_34)
  (Rsp [6]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_35]));

DEFLABEL (label_35)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_34]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_4]), 1);

DEFLABEL (label_26)
  (Wrd8.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_40)
  (Wrd25.Obj) = (current_block [OBJECT_36_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_38;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_36_18);
  goto label_39;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_8 7
#define LABEL_37_7 9
#define LABEL_37_11 11
#define LABEL_37_13 13
#define LABEL_37_14 15
#define LABEL_37_15 17
#define LABEL_37_17 19
#define LABEL_37_18 21
#define LABEL_37_20 23
#define LABEL_37_22 25
#define LABEL_37_24 27
#define LABEL_37_29 29
#define LABEL_37_26 31
#define LABEL_37_27 33
#define ENVIRONMENT_LABEL_37_3 66
#define DEBUGGING_LABEL_37_2 65
#define OBJECT_37_5 64
#define OBJECT_37_4 63
#define OBJECT_37_3 62
#define OBJECT_37_2 61
#define OBJECT_37_1 60
#define OBJECT_37_0 59
#define EXECUTE_CACHE_37_31 35
#define EXECUTE_CACHE_37_30 37
#define EXECUTE_CACHE_37_28 39
#define EXECUTE_CACHE_37_25 41
#define EXECUTE_CACHE_37_23 43
#define EXECUTE_CACHE_37_21 45
#define EXECUTE_CACHE_37_19 47
#define EXECUTE_CACHE_37_16 49
#define EXECUTE_CACHE_37_12 51
#define EXECUTE_CACHE_37_10 53
#define EXECUTE_CACHE_37_9 55
#define EXECUTE_CACHE_37_6 57
#define FREE_REFERENCES_LABEL_37_0 34
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_37_4);
      goto Z__read_chunked_body_24;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_37_13);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_37_14);
      goto loop_18;

    case 7:
      current_block = (Rpc - LABEL_37_15);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_37_17);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_37_18);
      goto continuation_21;

    case 10:
      current_block = (Rpc - LABEL_37_20);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_37_22);
      goto continuation_20;

    case 12:
      current_block = (Rpc - LABEL_37_24);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_37_29);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_37_26);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_37_27);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__read_chunked_body_28)
DEFLABEL (Z__read_chunked_body_24)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_37_1]))
    goto label_31;
  (Wrd14.Obj) = (current_block [OBJECT_37_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_32)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_37_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_4]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_37_13);
  (Rsp [1]) = Rvl;
  goto loop_18;

DEFLABEL (loop_29)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_37_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_37_15);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_37;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd25.Lng) > 0)
    goto label_34;

DEFLABEL (label_33)
  Rsp = (& (Rsp [1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_19]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_37_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_23]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_37_22);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_37_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_37_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_28]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_37_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_31]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_37_29);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd9.Obj) = (current_block [OBJECT_37_5]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_30]));

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));
  goto loop_18;

DEFLABEL (label_37)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_37_26);
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define LABEL_38_11 9
#define LABEL_38_9 11
#define LABEL_38_15 13
#define LABEL_38_12 15
#define ENVIRONMENT_LABEL_38_3 31
#define DEBUGGING_LABEL_38_2 30
#define OBJECT_38_2 29
#define OBJECT_38_1 28
#define OBJECT_38_0 27
#define EXECUTE_CACHE_38_14 17
#define EXECUTE_CACHE_38_13 19
#define EXECUTE_CACHE_38_10 21
#define EXECUTE_CACHE_38_8 23
#define EXECUTE_CACHE_38_6 25
#define FREE_REFERENCES_LABEL_38_0 16
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_38_4);
      goto Z__read_chunk_leader_8;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_38_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_38_15);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_38_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__read_chunk_leader_11)
DEFLABEL (Z__read_chunk_leader_8)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_11);

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_38_12);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_38_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_38_15);

DEFLABEL (label_13)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define LABEL_39_9 9
#define LABEL_39_10 11
#define LABEL_39_14 13
#define LABEL_39_11 15
#define LABEL_39_15 17
#define LABEL_39_12 19
#define LABEL_39_16 21
#define LABEL_39_20 23
#define ENVIRONMENT_LABEL_39_3 41
#define DEBUGGING_LABEL_39_2 40
#define OBJECT_39_2 39
#define OBJECT_39_1 38
#define OBJECT_39_0 37
#define EXECUTE_CACHE_39_19 25
#define EXECUTE_CACHE_39_18 27
#define EXECUTE_CACHE_39_17 29
#define EXECUTE_CACHE_39_13 31
#define EXECUTE_CACHE_39_8 33
#define EXECUTE_CACHE_39_6 35
#define FREE_REFERENCES_LABEL_39_0 24
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_39_4);
      goto Z__read_chunk_14;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_39_9);
      goto loop_11;

    case 4:
      current_block = (Rpc - LABEL_39_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_39_14);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_39_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_39_15);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_39_12);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_39_16);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_39_20);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__read_chunk_20)
DEFLABEL (Z__read_chunk_14)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_11;

DEFLABEL (loop_21)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_39_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_29;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd24.Lng) > 0)
    goto label_23;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_39_0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_39_11);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_28;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd24.Lng) == 0)
    goto label_27;

DEFLABEL (label_26)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_39_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_39_16);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_25;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_25;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) - (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_25;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_11;

DEFLABEL (label_25)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_18)
  (Wrd10.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_14]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_39_2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_39_14);
  goto label_26;

DEFLABEL (label_28)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (label_29)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define LABEL_40_8 9
#define TAG_40_9 3
#define LABEL_40_11 11
#define ENVIRONMENT_LABEL_40_3 23
#define DEBUGGING_LABEL_40_2 22
#define OBJECT_40_2 21
#define OBJECT_40_1 20
#define OBJECT_40_0 19
#define EXECUTE_CACHE_40_12 13
#define EXECUTE_CACHE_40_10 15
#define EXECUTE_CACHE_40_6 17
#define FREE_REFERENCES_LABEL_40_0 12
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_40_4);
      goto Z__read_delimited_body_5;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_40_8);
      goto lambda_9;

    case 4:
      current_block = (Rpc - LABEL_40_11);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__read_delimited_body_8)
DEFLABEL (Z__read_delimited_body_5)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_8])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  ((Wrd14.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (Wrd10.Obj) = (current_block [OBJECT_40_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_40_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_12]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_8 5
#define LABEL_41_6 7
#define LABEL_41_5 9
#define LABEL_41_11 11
#define ENVIRONMENT_LABEL_41_3 26
#define DEBUGGING_LABEL_41_2 25
#define OBJECT_41_3 24
#define OBJECT_41_2 23
#define OBJECT_41_1 22
#define OBJECT_41_0 21
#define EXECUTE_CACHE_41_12 13
#define EXECUTE_CACHE_41_10 15
#define EXECUTE_CACHE_41_9 17
#define EXECUTE_CACHE_41_7 19
#define FREE_REFERENCES_LABEL_41_0 12
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_41_4);
      goto Z__read_terminal_body_7;

    case 1:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_41_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__read_terminal_body_10)
DEFLABEL (Z__read_terminal_body_7)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_8);
  (Rsp [0]) = Rvl;
  if (Rvl == (current_block [OBJECT_41_1]))
    goto label_11;
  (Wrd23.Obj) = (current_block [OBJECT_41_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_41_11);
  (Wrd10.Obj) = (current_block [OBJECT_41_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define TAG_42_8 2
#define LABEL_42_10 9
#define LABEL_42_11 11
#define LABEL_42_12 13
#define LABEL_42_14 15
#define LABEL_42_15 17
#define ENVIRONMENT_LABEL_42_3 32
#define DEBUGGING_LABEL_42_2 31
#define OBJECT_42_3 30
#define OBJECT_42_2 29
#define OBJECT_42_1 28
#define OBJECT_42_0 27
#define EXECUTE_CACHE_42_16 19
#define EXECUTE_CACHE_42_13 21
#define EXECUTE_CACHE_42_9 23
#define EXECUTE_CACHE_42_6 25
#define FREE_REFERENCES_LABEL_42_0 18
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_42_4);
      goto Z__read_all_11;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto lambda_16;

    case 3:
      current_block = (Rpc - LABEL_42_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_42_11);
      goto loop_7;

    case 5:
      current_block = (Rpc - LABEL_42_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_42_14);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_42_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__read_all_15)
DEFLABEL (Z__read_all_11)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_9]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_42_7);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_10);
  (* (--Rsp)) = Rvl;
  goto loop_7;

DEFLABEL (loop_17)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_42_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_42_12);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_20;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd22.Lng) > 0)
    goto label_19;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_42_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_42_3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_42_15);
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (label_20)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define ENVIRONMENT_LABEL_43_3 9
#define DEBUGGING_LABEL_43_2 8
#define OBJECT_43_0 7
#define EXECUTE_CACHE_43_5 5
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto Z__no_read_body_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__no_read_body_3)
DEFLABEL (Z__no_read_body_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_8 7
#define LABEL_44_7 9
#define LABEL_44_12 11
#define TAG_44_13 4
#define LABEL_44_15 13
#define LABEL_44_10 15
#define LABEL_44_14 17
#define LABEL_44_16 19
#define LABEL_44_20 21
#define LABEL_44_17 23
#define TAG_44_18 10
#define LABEL_44_19 25
#define LABEL_44_21 27
#define LABEL_44_22 29
#define LABEL_44_25 31
#define LABEL_44_24 33
#define LABEL_44_27 35
#define LABEL_44_29 37
#define TAG_44_30 17
#define LABEL_44_31 39
#define LABEL_44_32 41
#define LABEL_44_33 43
#define TAG_44_34 20
#define LABEL_44_35 45
#define LABEL_44_36 47
#define LABEL_44_38 49
#define LABEL_44_39 51
#define LABEL_44_46 53
#define LABEL_44_41 55
#define TAG_44_42 26
#define LABEL_44_43 57
#define LABEL_44_45 59
#define LABEL_44_47 61
#define LABEL_44_48 63
#define TAG_44_49 30
#define LABEL_44_50 65
#define LABEL_44_52 67
#define LABEL_44_53 69
#define ENVIRONMENT_LABEL_44_3 100
#define DEBUGGING_LABEL_44_2 99
#define OBJECT_44_1 98
#define OBJECT_44_0 97
#define EXECUTE_CACHE_44_54 71
#define EXECUTE_CACHE_44_51 73
#define EXECUTE_CACHE_44_44 75
#define EXECUTE_CACHE_44_40 77
#define EXECUTE_CACHE_44_37 79
#define EXECUTE_CACHE_44_28 81
#define EXECUTE_CACHE_44_26 83
#define EXECUTE_CACHE_44_23 85
#define EXECUTE_CACHE_44_11 87
#define EXECUTE_CACHE_44_9 89
#define EXECUTE_CACHE_44_6 91
#define FREE_REFERENCE_44_2 94
#define FREE_REFERENCE_44_1 95
#define FREE_REFERENCE_44_0 96
#define FREE_REFERENCES_LABEL_44_0 70
#define NUMBER_OF_LINKER_SECTIONS_44_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_44_4);
      goto parse_request_line_48;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_44_8);
      goto label_50;

    case 3:
      current_block = (Rpc - LABEL_44_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_44_12);
      goto lambda_56;

    case 5:
      current_block = (Rpc - LABEL_44_15);
      goto Z___ks13__45;

    case 6:
      current_block = (Rpc - LABEL_44_10);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_44_14);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_44_16);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_44_20);
      goto label_51;

    case 10:
      current_block = (Rpc - LABEL_44_17);
      goto lambda_58;

    case 11:
      current_block = (Rpc - LABEL_44_19);
      goto continuation_42;

    case 12:
      current_block = (Rpc - LABEL_44_21);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_44_22);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_44_25);
      goto label_52;

    case 15:
      current_block = (Rpc - LABEL_44_24);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_44_27);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_44_29);
      goto lambda_15;

    case 18:
      current_block = (Rpc - LABEL_44_31);
      goto continuation_16;

    case 19:
      current_block = (Rpc - LABEL_44_32);
      goto continuation_12;

    case 20:
      current_block = (Rpc - LABEL_44_33);
      goto lambda_60;

    case 21:
      current_block = (Rpc - LABEL_44_35);
      goto continuation_31;

    case 22:
      current_block = (Rpc - LABEL_44_36);
      goto continuation_13;

    case 23:
      current_block = (Rpc - LABEL_44_38);
      goto continuation_17;

    case 24:
      current_block = (Rpc - LABEL_44_39);
      goto continuation_32;

    case 25:
      current_block = (Rpc - LABEL_44_46);
      goto label_53;

    case 26:
      current_block = (Rpc - LABEL_44_41);
      goto lambda_61;

    case 27:
      current_block = (Rpc - LABEL_44_43);
      goto continuation_27;

    case 28:
      current_block = (Rpc - LABEL_44_45);
      goto continuation_34;

    case 29:
      current_block = (Rpc - LABEL_44_47);
      goto continuation_18;

    case 30:
      current_block = (Rpc - LABEL_44_48);
      goto lambda_62;

    case 31:
      current_block = (Rpc - LABEL_44_50);
      goto continuation_23;

    case 32:
      current_block = (Rpc - LABEL_44_52);
      goto continuation_19;

    case 33:
      current_block = (Rpc - LABEL_44_53);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_request_line_55)
DEFLABEL (parse_request_line_48)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_65;
  Wrd8 = Wrd12;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_12])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  goto Z___ks13__45;

DEFLABEL (label_63)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_10);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_8])), (Wrd9.pObj));

DEFLABEL (label_50)
  (Wrd8.Obj) = Rvl;
  goto label_64;

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_44_12);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_44_14);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (Z___ks13__57)
DEFLABEL (Z___ks13__45)
  INTERRUPT_CHECK (26, LABEL_44_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_44_16);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_17])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_68;
  Wrd19 = Wrd23;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_9]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_44_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto Z___ks13__45;

DEFLABEL (label_66)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_41;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_20])), (Wrd20.pObj));

DEFLABEL (label_51)
  (Wrd19.Obj) = Rvl;
  goto label_67;

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_44_17);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_44_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_44_22);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_24]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_74;
  Wrd16 = Wrd20;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_26]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_44_24);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_27]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_28]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_44_27);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_69;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [4]);
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_69)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_29])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_31]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_44_31);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_33])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd15 = Wrd6;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd17.pObj) [4]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  ((Wrd15.pObj) [5]) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_35]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_44_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_28]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_44_35);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_70;
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd14.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_30;

DEFLABEL (label_70)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_39]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_23]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_44_39);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_45]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_2]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_72;
  Wrd18 = Wrd22;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_26]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_44_45);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_15;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_46])), (Wrd19.pObj));

DEFLABEL (label_53)
  (Wrd18.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_25])), (Wrd17.pObj));

DEFLABEL (label_52)
  (Wrd16.Obj) = Rvl;
  goto label_73;

DEFLABEL (lambda_59)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_44_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_28]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_44_32);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_75;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_36]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_37]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_44_36);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_40]));

DEFLABEL (label_76)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_44_33);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_44_38);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_42);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_41])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd19 = Wrd6;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd21.pObj) [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd21.pObj) [4]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd10.Obj) = ((Wrd21.pObj) [5]);
  ((Wrd19.pObj) [5]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_43]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_44]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_44_43);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [1]) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [4]);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  goto lambda_15;

DEFLABEL (label_77)
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_26;

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_44_41);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_44_47);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_49);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_48])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd19 = Wrd6;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd21.pObj) [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd21.pObj) [4]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd10.Obj) = ((Wrd21.pObj) [5]);
  ((Wrd19.pObj) [5]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_50]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_51]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_44_50);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [1]) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [4]);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  goto lambda_15;

DEFLABEL (label_78)
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_22;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_44_48);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_44_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_54]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_44_53);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd10.Obj);
  goto lambda_15;

DEFLABEL (label_79)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [3]);
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_9 7
#define LABEL_45_7 9
#define LABEL_45_12 11
#define LABEL_45_15 13
#define LABEL_45_10 15
#define LABEL_45_17 17
#define LABEL_45_16 19
#define LABEL_45_18 21
#define LABEL_45_19 23
#define LABEL_45_21 25
#define LABEL_45_20 27
#define LABEL_45_23 29
#define LABEL_45_24 31
#define ENVIRONMENT_LABEL_45_3 53
#define DEBUGGING_LABEL_45_2 52
#define OBJECT_45_0 51
#define EXECUTE_CACHE_45_26 33
#define EXECUTE_CACHE_45_25 35
#define EXECUTE_CACHE_45_22 37
#define EXECUTE_CACHE_45_14 39
#define EXECUTE_CACHE_45_13 41
#define EXECUTE_CACHE_45_11 43
#define EXECUTE_CACHE_45_8 45
#define EXECUTE_CACHE_45_6 47
#define FREE_REFERENCE_45_0 50
#define FREE_REFERENCES_LABEL_45_0 32
#define NUMBER_OF_LINKER_SECTIONS_45_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_45_4);
      goto parse_response_line_21;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_45_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_45_15);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_45_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_45_17);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_45_16);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_45_18);
      goto Z___ks4__15;

    case 10:
      current_block = (Rpc - LABEL_45_19);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_45_21);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_45_20);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_45_23);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_45_24);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_response_line_25)
DEFLABEL (parse_response_line_21)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_45_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_45_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_45_16);
  (* (--Rsp)) = Rvl;
  goto Z___ks4__15;

DEFLABEL (label_27)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_45_17);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_12);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (Z___ks4__26)
DEFLABEL (Z___ks4__15)
  INTERRUPT_CHECK (26, LABEL_45_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_45_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_31;
  Wrd8 = Wrd12;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_45_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rsp = (& (Rsp [1]));
  goto Z___ks4__15;

DEFLABEL (label_29)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_45_23);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_24]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_45_24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_26]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_21])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_7 7
#define LABEL_46_11 9
#define LABEL_46_14 11
#define LABEL_46_9 13
#define LABEL_46_13 15
#define LABEL_46_16 17
#define LABEL_46_19 19
#define LABEL_46_18 21
#define LABEL_46_21 23
#define ENVIRONMENT_LABEL_46_3 46
#define DEBUGGING_LABEL_46_2 45
#define OBJECT_46_1 44
#define OBJECT_46_0 43
#define EXECUTE_CACHE_46_22 25
#define EXECUTE_CACHE_46_20 27
#define EXECUTE_CACHE_46_17 29
#define EXECUTE_CACHE_46_15 31
#define EXECUTE_CACHE_46_12 33
#define EXECUTE_CACHE_46_10 35
#define EXECUTE_CACHE_46_8 37
#define EXECUTE_CACHE_46_6 39
#define FREE_REFERENCE_46_0 42
#define FREE_REFERENCES_LABEL_46_0 24
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_46_4);
      goto parse_simple_request_14;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_46_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_46_14);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_46_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_46_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_46_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_46_19);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_46_18);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_46_21);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_simple_request_18)
DEFLABEL (parse_simple_request_14)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_11);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_22;
  Wrd16 = Wrd20;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_46_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_46_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_46_19);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_22]));

DEFLABEL (label_19)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_21]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_46_21);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_46_18);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_14])), (Wrd17.pObj));

DEFLABEL (label_16)
  (Wrd16.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_9);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_7 5
#define LABEL_47_5 7
#define LABEL_47_10 9
#define LABEL_47_11 11
#define LABEL_47_12 13
#define LABEL_47_8 15
#define ENVIRONMENT_LABEL_47_3 35
#define DEBUGGING_LABEL_47_2 34
#define OBJECT_47_6 33
#define OBJECT_47_5 32
#define OBJECT_47_4 31
#define OBJECT_47_3 30
#define OBJECT_47_2 29
#define OBJECT_47_1 28
#define OBJECT_47_0 27
#define EXECUTE_CACHE_47_14 17
#define EXECUTE_CACHE_47_13 19
#define EXECUTE_CACHE_47_9 21
#define EXECUTE_CACHE_47_6 23
#define FREE_REFERENCE_47_0 26
#define FREE_REFERENCES_LABEL_47_0 16
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
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
      current_block = (Rpc - LABEL_47_4);
      goto parse_line_7;

    case 1:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_47_10);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_47_11);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_47_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_47_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_line_12)
DEFLABEL (parse_line_7)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_7);

DEFLABEL (label_20)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 10))
    goto label_19;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));

DEFLABEL (label_18)
  if ((Wrd7.Obj) == (current_block [OBJECT_47_3]))
    goto label_15;
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_14;
  Wrd20 = Wrd24;

DEFLABEL (label_13)
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_47_12);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_6]), 2);

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_11])), (Wrd21.pObj));

DEFLABEL (label_10)
  (Wrd20.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_15)
  (Wrd30.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_47_4]);
  (Rsp [3]) = (Wrd31.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 10)
    goto label_17;

DEFLABEL (label_16)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_5]), 2);

DEFLABEL (label_17)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd41.Lng))))
    goto label_16;
  Rvl = ((Wrd39.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 1);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_8 9
#define LABEL_48_9 11
#define LABEL_48_10 13
#define LABEL_48_12 15
#define LABEL_48_11 17
#define LABEL_48_13 19
#define LABEL_48_14 21
#define LABEL_48_15 23
#define LABEL_48_16 25
#define LABEL_48_17 27
#define LABEL_48_18 29
#define LABEL_48_19 31
#define ENVIRONMENT_LABEL_48_3 46
#define DEBUGGING_LABEL_48_2 45
#define OBJECT_48_7 44
#define OBJECT_48_6 43
#define OBJECT_48_5 42
#define OBJECT_48_4 41
#define OBJECT_48_3 40
#define OBJECT_48_2 39
#define OBJECT_48_1 38
#define OBJECT_48_0 37
#define EXECUTE_CACHE_48_6 33
#define FREE_REFERENCE_48_0 36
#define FREE_REFERENCES_LABEL_48_0 32
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd88;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd69;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_48_4);
      goto http_status_description_16;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_48_9);
      goto loop_14;

    case 5:
      current_block = (Rpc - LABEL_48_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_48_12);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_48_13);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_48_14);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_48_15);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_48_16);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_48_17);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_48_18);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_48_19);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (http_status_description_30)
DEFLABEL (http_status_description_16)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_35;
  Wrd6 = Wrd10;

DEFLABEL (label_34)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_33;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_32)
  (Wrd21.Obj) = (current_block [OBJECT_48_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto loop_14;

DEFLABEL (label_33)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_7])), (Wrd7.pObj));

DEFLABEL (label_18)
  (Wrd6.Obj) = Rvl;
  goto label_34;

DEFLABEL (loop_31)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_48_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_58;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_58;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd37.Lng) < (Wrd39.Lng))
    goto label_37;

DEFLABEL (label_36)
  Rvl = (current_block [OBJECT_48_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_48_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_57;
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_57;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd32.Lng) + (Wrd34.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_57;
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_56)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_5)
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_55;
  Wrd6 = Wrd10;

DEFLABEL (label_54)
  Wrd5 = Wrd6;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_53;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_53;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_53;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd15.pObj) = (& ((Wrd21.pObj) [(Wrd13.Lng)]));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_52)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_51;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_50)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_49;
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_49;
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if ((Wrd91.Lng) < (Wrd92.Lng))
    goto label_48;

DEFLABEL (label_47)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_46;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [0]);

DEFLABEL (label_45)
  (Wrd57.Obj) = (Rsp [4]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_44;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_44;
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if ((Wrd86.Lng) > (Wrd87.Lng))
    goto label_40;

DEFLABEL (label_39)
  (Wrd66.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd66.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_38;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  Rvl = ((Wrd69.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_7]), 1);

DEFLABEL (label_40)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_43;
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  (Wrd81.Lng) = ((Wrd83.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd81.Lng)))
    goto label_43;
  (Wrd78.Obj) = (LONG_TO_FIXNUM (Wrd81.Lng));

DEFLABEL (label_42)
  (Rsp [2]) = (Wrd78.Obj);

DEFLABEL (label_41)
  Rsp = (& (Rsp [2]));
  goto loop_14;

DEFLABEL (label_43)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_19]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_28)
  (Wrd78.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd60.Obj) = (Rsp [4]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_18]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_40;

DEFLABEL (label_46)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_17]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_6]), 1);

DEFLABEL (label_26)
  (Wrd48.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd88.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd88.Obj);
  goto label_41;

DEFLABEL (label_49)
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_16]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_48;

DEFLABEL (label_51)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_15]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_6]), 1);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_5]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_13])), (Wrd7.pObj));

DEFLABEL (label_22)
  (Wrd6.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define ENVIRONMENT_LABEL_49_3 17
#define DEBUGGING_LABEL_49_2 16
#define OBJECT_49_4 15
#define OBJECT_49_3 14
#define OBJECT_49_2 13
#define OBJECT_49_1 12
#define OBJECT_49_0 11
#define EXECUTE_CACHE_49_6 9
#define FREE_REFERENCES_LABEL_49_0 8
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd28;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_49_4);
      goto non_body_statusP_3;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (non_body_statusP_7)
DEFLABEL (non_body_statusP_3)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_49_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = Rvl;

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_14;
  if ((Wrd9.Obj) == (current_block [OBJECT_49_2]))
    goto label_12;

DEFLABEL (label_13)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_49_3]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd17.uLng) == 26)
    goto label_10;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_10)
  if ((Wrd13.Obj) == (Wrd14.Obj))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_49_4]);

DEFLABEL (label_11)
  goto label_8;

DEFLABEL (label_14)
  (Wrd25.Obj) = (current_block [OBJECT_49_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_8 9
#define LABEL_50_9 11
#define TAG_50_10 4
#define LABEL_50_11 13
#define LABEL_50_14 15
#define LABEL_50_19 17
#define LABEL_50_22 19
#define LABEL_50_18 21
#define LABEL_50_16 23
#define LABEL_50_26 25
#define LABEL_50_25 27
#define LABEL_50_23 29
#define LABEL_50_20 31
#define ENVIRONMENT_LABEL_50_3 59
#define DEBUGGING_LABEL_50_2 58
#define OBJECT_50_6 57
#define OBJECT_50_5 56
#define OBJECT_50_4 55
#define OBJECT_50_3 54
#define OBJECT_50_2 53
#define OBJECT_50_1 52
#define OBJECT_50_0 51
#define EXECUTE_CACHE_50_28 33
#define EXECUTE_CACHE_50_27 35
#define EXECUTE_CACHE_50_24 37
#define EXECUTE_CACHE_50_21 39
#define EXECUTE_CACHE_50_17 41
#define EXECUTE_CACHE_50_15 43
#define EXECUTE_CACHE_50_13 45
#define EXECUTE_CACHE_50_12 47
#define EXECUTE_CACHE_50_7 49
#define FREE_REFERENCES_LABEL_50_0 32
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_50_4);
      goto http_message_body_port_23;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_20;

    case 4:
      current_block = (Rpc - LABEL_50_9);
      goto lambda_27;

    case 5:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_21;

    case 6:
      current_block = (Rpc - LABEL_50_14);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_50_19);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_50_22);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_50_18);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_50_16);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_50_26);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_50_25);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_50_23);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_50_20);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (http_message_body_port_26)
DEFLABEL (http_message_body_port_23)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_12]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_50_11);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_50_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_50_9);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_14);
  (Wrd6.Obj) = (current_block [OBJECT_50_0]);
  if (Rvl == (Wrd6.Obj))
    goto label_36;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_50_18);
  if (! (Rvl == (current_block [OBJECT_50_4])))
    goto label_33;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_22]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_19]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_50_19);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_50_1]))
    goto label_28;
  (Wrd47.Obj) = (current_block [OBJECT_50_2]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_20]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_50_20);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_28]));

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_32)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_23]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  if ((Wrd35.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd35.Obj);
  goto label_29;

DEFLABEL (label_30)
  (Wrd44.Obj) = (current_block [OBJECT_50_3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_29)
DEFLABEL (label_31)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_17]));

DEFLABEL (label_33)
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_26]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_34;

DEFLABEL (label_35)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_25]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_50_5]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_34)
  goto label_31;

DEFLABEL (label_36)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_37;

DEFLABEL (label_38)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd6.Obj);

DEFLABEL (label_37)
DEFLABEL (label_39)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_17]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_50_16);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_27]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_50_23);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_6]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_27]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_50_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_32;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_50_26);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_50_25);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_5]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_27]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_8 7
#define LABEL_51_10 9
#define LABEL_51_6 11
#define LABEL_51_14 13
#define LABEL_51_9 15
#define LABEL_51_18 17
#define LABEL_51_12 19
#define LABEL_51_17 21
#define LABEL_51_15 23
#define TAG_51_16 10
#define LABEL_51_20 25
#define LABEL_51_23 27
#define TAG_51_24 12
#define ENVIRONMENT_LABEL_51_3 48
#define DEBUGGING_LABEL_51_2 47
#define OBJECT_51_5 46
#define OBJECT_51_4 45
#define OBJECT_51_3 44
#define OBJECT_51_2 43
#define OBJECT_51_1 42
#define OBJECT_51_0 41
#define EXECUTE_CACHE_51_22 29
#define EXECUTE_CACHE_51_21 31
#define EXECUTE_CACHE_51_19 33
#define EXECUTE_CACHE_51_13 35
#define EXECUTE_CACHE_51_11 37
#define EXECUTE_CACHE_51_7 39
#define FREE_REFERENCES_LABEL_51_0 28
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_51_4);
      goto Z__get_content_type_17;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_51_8);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_51_10);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_51_6);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_51_14);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_51_9);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_51_18);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_51_12);
      goto lambda_16;

    case 9:
      current_block = (Rpc - LABEL_51_17);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_51_15);
      goto lambda_25;

    case 11:
      current_block = (Rpc - LABEL_51_20);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_51_23);
      goto lambda_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__get_content_type_23)
DEFLABEL (Z__get_content_type_17)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_12]))));
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_13]));

DEFLABEL (lambda_24)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_51_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_36;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_35)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_34;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_33)
  (Wrd26.Obj) = (current_block [OBJECT_51_3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_51_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_51_17);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_51_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd20.Obj) = (Rsp [0]);
  goto label_28;

DEFLABEL (label_29)
  (Wrd20.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_28)
DEFLABEL (label_30)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_15])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  ((Wrd26.pObj) [2]) = (Wrd20.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  Rvl = (Wrd22.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_26)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_51_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_51_20);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_23])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_51_15);

DEFLABEL (lambda_10)
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

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_51_23);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define LABEL_52_8 9
#define ENVIRONMENT_LABEL_52_3 17
#define DEBUGGING_LABEL_52_2 16
#define OBJECT_52_0 15
#define EXECUTE_CACHE_52_9 11
#define EXECUTE_CACHE_52_7 13
#define FREE_REFERENCES_LABEL_52_0 10
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_52_4);
      goto Z__get_content_length_3;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_52_8);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__get_content_length_6)
DEFLABEL (Z__get_content_length_3)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_52_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_52_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_52_8);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 11
#define DEBUGGING_LABEL_53_2 10
#define OBJECT_53_0 9
#define EXECUTE_CACHE_53_6 7
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_53_4);
      goto optional_header_3;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optional_header_6)
DEFLABEL (optional_header_3)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_53_0]))
    goto label_8;
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_8)
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define ENVIRONMENT_LABEL_54_3 12
#define DEBUGGING_LABEL_54_2 11
#define EXECUTE_CACHE_54_7 7
#define EXECUTE_CACHE_54_6 9
#define FREE_REFERENCES_LABEL_54_0 6
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
httpio_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto http_message_header_1;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (http_message_header_4)
DEFLABEL (http_message_header_1)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_13 11
#define LABEL_8 13
#define LABEL_11 15
#define LABEL_17 17
#define LABEL_12 19
#define LABEL_15 21
#define LABEL_21 23
#define LABEL_16 25
#define LABEL_19 27
#define LABEL_24 29
#define LABEL_20 31
#define LABEL_22 33
#define LABEL_27 35
#define LABEL_23 37
#define LABEL_25 39
#define LABEL_30 41
#define LABEL_26 43
#define LABEL_28 45
#define LABEL_29 47
#define LABEL_31 49
#define LABEL_33 51
#define LABEL_34 53
#define LABEL_38 55
#define LABEL_36 57
#define LABEL_42 59
#define LABEL_37 61
#define LABEL_40 63
#define LABEL_45 65
#define LABEL_41 67
#define LABEL_43 69
#define LABEL_48 71
#define LABEL_44 73
#define LABEL_46 75
#define LABEL_51 77
#define LABEL_47 79
#define LABEL_49 81
#define LABEL_54 83
#define LABEL_50 85
#define LABEL_52 87
#define LABEL_57 89
#define LABEL_53 91
#define LABEL_55 93
#define LABEL_60 95
#define LABEL_56 97
#define LABEL_58 99
#define LABEL_59 101
#define LABEL_61 103
#define LABEL_62 105
#define LABEL_63 107
#define LABEL_64 109
#define LABEL_65 111
#define LABEL_66 113
#define LABEL_67 115
#define ENVIRONMENT_LABEL_3 174
#define DEBUGGING_LABEL_2 173
#define PURIFICATION_ROOT 172
#define OBJECT_36 171
#define OBJECT_35 170
#define OBJECT_34 169
#define OBJECT_33 168
#define OBJECT_32 167
#define OBJECT_31 166
#define OBJECT_30 165
#define OBJECT_29 164
#define OBJECT_28 163
#define OBJECT_27 162
#define OBJECT_26 161
#define OBJECT_25 160
#define OBJECT_24 159
#define OBJECT_23 158
#define OBJECT_22 157
#define OBJECT_21 156
#define OBJECT_20 155
#define OBJECT_19 154
#define OBJECT_18 153
#define OBJECT_17 152
#define OBJECT_16 151
#define OBJECT_15 150
#define OBJECT_14 149
#define OBJECT_13 148
#define OBJECT_12 147
#define OBJECT_11 146
#define OBJECT_10 145
#define OBJECT_9 144
#define OBJECT_8 143
#define OBJECT_7 142
#define OBJECT_6 141
#define OBJECT_5 140
#define OBJECT_4 139
#define OBJECT_3 138
#define OBJECT_2 137
#define OBJECT_1 136
#define OBJECT_0 135
#define EXECUTE_CACHE_39 117
#define EXECUTE_CACHE_35 119
#define EXECUTE_CACHE_18 121
#define EXECUTE_CACHE_14 123
#define EXECUTE_CACHE_10 125
#define EXECUTE_CACHE_6 127
#define FREE_REFERENCE_1 130
#define FREE_REFERENCE_0 131
#define GLOBAL_EXECUTE_CACHE_32 133
#define FREE_REFERENCES_LABEL_0 116
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
httpio_so_f81c838fdbd0641e (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd7;
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
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_40;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_13);
      goto label_41;

    case 5:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_17);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_21);
      goto label_43;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_24);
      goto label_44;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_27);
      goto label_45;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_30);
      goto label_46;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_15;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_14;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_16;

    case 24:
      current_block = (Rpc - LABEL_33);
      goto continuation_18;

    case 25:
      current_block = (Rpc - LABEL_34);
      goto continuation_17;

    case 26:
      current_block = (Rpc - LABEL_38);
      goto label_47;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto continuation_20;

    case 28:
      current_block = (Rpc - LABEL_42);
      goto label_48;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto continuation_19;

    case 30:
      current_block = (Rpc - LABEL_40);
      goto continuation_22;

    case 31:
      current_block = (Rpc - LABEL_45);
      goto label_49;

    case 32:
      current_block = (Rpc - LABEL_41);
      goto continuation_21;

    case 33:
      current_block = (Rpc - LABEL_43);
      goto continuation_24;

    case 34:
      current_block = (Rpc - LABEL_48);
      goto label_50;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto continuation_23;

    case 36:
      current_block = (Rpc - LABEL_46);
      goto continuation_26;

    case 37:
      current_block = (Rpc - LABEL_51);
      goto label_51;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto continuation_25;

    case 39:
      current_block = (Rpc - LABEL_49);
      goto continuation_28;

    case 40:
      current_block = (Rpc - LABEL_54);
      goto label_52;

    case 41:
      current_block = (Rpc - LABEL_50);
      goto continuation_27;

    case 42:
      current_block = (Rpc - LABEL_52);
      goto continuation_30;

    case 43:
      current_block = (Rpc - LABEL_57);
      goto label_53;

    case 44:
      current_block = (Rpc - LABEL_53);
      goto continuation_29;

    case 45:
      current_block = (Rpc - LABEL_55);
      goto continuation_32;

    case 46:
      current_block = (Rpc - LABEL_60);
      goto label_54;

    case 47:
      current_block = (Rpc - LABEL_56);
      goto continuation_31;

    case 48:
      current_block = (Rpc - LABEL_58);
      goto continuation_34;

    case 49:
      current_block = (Rpc - LABEL_59);
      goto continuation_33;

    case 50:
      current_block = (Rpc - LABEL_61);
      goto continuation_35;

    case 51:
      current_block = (Rpc - LABEL_62);
      goto continuation_37;

    case 52:
      current_block = (Rpc - LABEL_63);
      goto continuation_36;

    case 53:
      current_block = (Rpc - LABEL_64);
      goto label_55;

    case 54:
      current_block = (Rpc - LABEL_65);
      goto label_58;

    case 55:
      current_block = (Rpc - LABEL_66);
      goto label_59;

    case 56:
      current_block = (Rpc - LABEL_67);
      goto expression_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_39)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_66])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_59)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_58)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
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
	2,
	2,
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 54)
      goto label_57;
    blocks = (current_block [OBJECT_36]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_65])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_57)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_91;
  Wrd12 = Wrd16;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_89;
  Wrd11 = Wrd15;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_87;
  Wrd12 = Wrd16;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_85;
  Wrd12 = Wrd16;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_83;
  Wrd12 = Wrd16;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_81;
  Wrd12 = Wrd16;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_79;
  Wrd12 = Wrd16;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_32]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_77;
  Wrd5 = Wrd9;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_37);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_75;
  Wrd12 = Wrd16;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_73;
  Wrd11 = Wrd15;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_71;
  Wrd12 = Wrd16;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_69;
  Wrd12 = Wrd16;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_67;
  Wrd12 = Wrd16;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_65;
  Wrd12 = Wrd16;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_56);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_63;
  Wrd12 = Wrd16;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_59);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_32]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_63);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_61;
  Wrd5 = Wrd9;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_35]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_32]));

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64])), (Wrd6.pObj));

DEFLABEL (label_55)
  (Wrd5.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60])), (Wrd13.pObj));

DEFLABEL (label_54)
  (Wrd12.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57])), (Wrd13.pObj));

DEFLABEL (label_53)
  (Wrd12.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54])), (Wrd13.pObj));

DEFLABEL (label_52)
  (Wrd12.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51])), (Wrd13.pObj));

DEFLABEL (label_51)
  (Wrd12.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd13.pObj));

DEFLABEL (label_50)
  (Wrd12.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45])), (Wrd12.pObj));

DEFLABEL (label_49)
  (Wrd11.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd13.pObj));

DEFLABEL (label_48)
  (Wrd12.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd6.pObj));

DEFLABEL (label_47)
  (Wrd5.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd13.pObj));

DEFLABEL (label_46)
  (Wrd12.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd13.pObj));

DEFLABEL (label_45)
  (Wrd12.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd13.pObj));

DEFLABEL (label_44)
  (Wrd12.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd13.pObj));

DEFLABEL (label_43)
  (Wrd12.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd13.pObj));

DEFLABEL (label_42)
  (Wrd12.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd12.pObj));

DEFLABEL (label_41)
  (Wrd11.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd13.pObj));

DEFLABEL (label_40)
  (Wrd12.Obj) = Rvl;
  goto label_90;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_httpio_so_f81c838fdbd0641e [54] =
  {
    { "httpio_so_code_1", 2, httpio_so_code_1 },
    { "httpio_so_code_2", 1, httpio_so_code_2 },
    { "httpio_so_code_3", 6, httpio_so_code_3 },
    { "httpio_so_code_4", 4, httpio_so_code_4 },
    { "httpio_so_code_5", 2, httpio_so_code_5 },
    { "httpio_so_code_6", 1, httpio_so_code_6 },
    { "httpio_so_code_7", 6, httpio_so_code_7 },
    { "httpio_so_code_8", 2, httpio_so_code_8 },
    { "httpio_so_code_9", 12, httpio_so_code_9 },
    { "httpio_so_code_10", 3, httpio_so_code_10 },
    { "httpio_so_code_11", 2, httpio_so_code_11 },
    { "httpio_so_code_12", 1, httpio_so_code_12 },
    { "httpio_so_code_13", 2, httpio_so_code_13 },
    { "httpio_so_code_14", 3, httpio_so_code_14 },
    { "httpio_so_code_15", 2, httpio_so_code_15 },
    { "httpio_so_code_16", 1, httpio_so_code_16 },
    { "httpio_so_code_17", 3, httpio_so_code_17 },
    { "httpio_so_code_18", 2, httpio_so_code_18 },
    { "httpio_so_code_19", 2, httpio_so_code_19 },
    { "httpio_so_code_20", 1, httpio_so_code_20 },
    { "httpio_so_code_21", 3, httpio_so_code_21 },
    { "httpio_so_code_22", 3, httpio_so_code_22 },
    { "httpio_so_code_23", 3, httpio_so_code_23 },
    { "httpio_so_code_24", 2, httpio_so_code_24 },
    { "httpio_so_code_25", 1, httpio_so_code_25 },
    { "httpio_so_code_26", 5, httpio_so_code_26 },
    { "httpio_so_code_27", 2, httpio_so_code_27 },
    { "httpio_so_code_28", 1, httpio_so_code_28 },
    { "httpio_so_code_29", 2, httpio_so_code_29 },
    { "httpio_so_code_30", 2, httpio_so_code_30 },
    { "httpio_so_code_31", 19, httpio_so_code_31 },
    { "httpio_so_code_32", 17, httpio_so_code_32 },
    { "httpio_so_code_33", 6, httpio_so_code_33 },
    { "httpio_so_code_34", 2, httpio_so_code_34 },
    { "httpio_so_code_35", 14, httpio_so_code_35 },
    { "httpio_so_code_36", 18, httpio_so_code_36 },
    { "httpio_so_code_37", 16, httpio_so_code_37 },
    { "httpio_so_code_38", 7, httpio_so_code_38 },
    { "httpio_so_code_39", 11, httpio_so_code_39 },
    { "httpio_so_code_40", 5, httpio_so_code_40 },
    { "httpio_so_code_41", 5, httpio_so_code_41 },
    { "httpio_so_code_42", 8, httpio_so_code_42 },
    { "httpio_so_code_43", 1, httpio_so_code_43 },
    { "httpio_so_code_44", 34, httpio_so_code_44 },
    { "httpio_so_code_45", 15, httpio_so_code_45 },
    { "httpio_so_code_46", 11, httpio_so_code_46 },
    { "httpio_so_code_47", 7, httpio_so_code_47 },
    { "httpio_so_code_48", 15, httpio_so_code_48 },
    { "httpio_so_code_49", 3, httpio_so_code_49 },
    { "httpio_so_code_50", 15, httpio_so_code_50 },
    { "httpio_so_code_51", 13, httpio_so_code_51 },
    { "httpio_so_code_52", 4, httpio_so_code_52 },
    { "httpio_so_code_53", 2, httpio_so_code_53 },
    { "httpio_so_code_54", 2, httpio_so_code_54 }
  };

int
decl_httpio_so_f81c838fdbd0641e (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_httpio_so_f81c838fdbd0641e);
  return (0);
}

DECLARE_COMPILED_CODE ("httpio.so", 57, decl_httpio_so_f81c838fdbd0641e, httpio_so_f81c838fdbd0641e)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_httpio_so_data_f81c838fdbd0641e [10165] =
  "\xaf\x01\x77\xc3\x12\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x28\x0d"
  "\xb9\x28\x0d\xba\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82"
  "\x88\x06\x1d\x0c\x28\x0d\xbc\x23\x22\x29\x21\x17\x2b\xbd\x1d\xb0"
  "\x83\x88\x0d\xbe\x28\x0d\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x84\x88\x08\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85"
  "\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x86\x88\x06\x1d\x0c\x28\xb4\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0c\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28"
  "\xb1\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\xb4\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x08\xb6\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\xb4\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x02\x08\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\xb1\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\xb4\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\xb1\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x28\xb1\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c"
  "\x28\xb4\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d"
  "\x0c\x28\xb4\x23\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88\x0d\x0d"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0f\x1b\x0c\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x24"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x1c\xc1\x1c\x0c\x0d\x1c\x24\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x0c\x0c"
  "\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xc1"
  "\x1c\x02\x0d\x1d\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x0c\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x80\x1d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02"
  "\x08\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1d\x0d\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1d\x1b\x02\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f\x0d"
  "\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0f\x0d\x24\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0c\x1b\x24\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\xc2"
  "\x1c\x80\x81\xc1\x1c\x0c\x0c\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x82\x0c\x80\x1b\x1b"
  "\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x02\x02"
  "\x02\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1b\x0d\x1c\x0d\x0c\x0d\x0d\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0d\x0d\x1b\x1b\x0d\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c"
  "\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x02\x0c"
  "\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88"
  "\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02"
  "\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c"
  "\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88"
  "\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02"
  "\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c"
  "\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88"
  "\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02"
  "\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c"
  "\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88\x02\x0c\x88"
  "\x02\x0c\x88\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb4\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x1b\xb7\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x0d\x1b\x1b"
  "\x1b\x0d\x1b\x1b\x17\x0d\x1b\x2a\x1b\x1b\x1b\x0d\x9a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x9a\x1b\x1b\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x1b\x0d\x1c"
  "\x0d\x1c\x1b\x1b\x0d\x1c\x0d\x1c\x08\x8c\x0d\x1b\x2a\x1b\xb6\xb2"
  "\x0d\x9a\x1b\x2a\xb5\x2a\xb3\x2a\x9a\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x0d\x1c\xb1\x0d\x1c\x1b\xc3\x0d\x1c\x1b\x1b\x1b\x1b\x1b\x08\x8c"
  "\x28\x0d\x26\x1b\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65"
  "\x2f\x2e\x2f\x68\x74\x74\x70\x69\x6f\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x02\x03\x0e\x68\x74\x74\x70\x2d\x72\x65\x71\x75\x65"
  "\x73\x74\x3f\x04\x17\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x68"
  "\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x03\x3b\x06\x81\x85"
  "\x02\x3a\x04\x84\x04\x05\x0e\x02\x08\x0d\x48\x54\x54\x50\x20\x72"
  "\x65\x71\x75\x65\x73\x74\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72"
  "\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e"
  "\x74\x02\x3c\x04\x84\x04\x03\x0c\x02\x12\x6d\x61\x6b\x65\x2d\x68"
  "\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x04\x1c\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x2d\x68\x74\x74\x70\x2d\x74\x6f\x6b\x65"
  "\x6e\x2d\x73\x74\x72\x69\x6e\x67\x04\x1b\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x68\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74"
  "\x2d\x75\x72\x69\x04\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x68\x74\x74\x70\x2d\x76\x65\x72\x73\x69\x6f\x6e\x09\x05\x17\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x68\x65\x61\x64\x65\x72\x73"
  "\x26\x62\x6f\x64\x79\x0a\x07\x13\x25\x6d\x61\x6b\x65\x2d\x68\x74"
  "\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x0b\x06\x42\x0e\x81\x87"
  "\x02\x41\x0c\x81\x8b\x02\x40\x0a\x81\x8b\x02\x3f\x08\x81\x8b\x02"
  "\x3e\x06\x81\x8b\x02\x3d\x04\x87\x0c\x0d\x1c\x0c\x02\x03\x11\x68"
  "\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x2d\x75\x72\x69\x0d"
  "\x03\x14\x68\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x2d\x6d"
  "\x65\x74\x68\x6f\x64\x0e\x03\x0c\x75\x72\x69\x2d\x3e\x73\x74\x72"
  "\x69\x6e\x67\x04\x46\x0a\x81\x85\x02\x45\x08\x81\x85\x02\x44\x06"
  "\x81\x83\x02\x43\x04\x83\x04\x09\x14\x0f\x02\x02\x03\x0f\x68\x74"
  "\x74\x70\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x3f\x10\x04\x18\x65"
  "\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x68\x74\x74\x70\x2d\x72\x65"
  "\x73\x70\x6f\x6e\x73\x65\x11\x03\x48\x06\x81\x85\x02\x47\x04\x84"
  "\x04\x05\x0e\x12\x02\x08\x0e\x48\x54\x54\x50\x20\x72\x65\x73\x70"
  "\x6f\x6e\x73\x65\x05\x02\x49\x04\x84\x04\x03\x0c\x13\x02\x08\x13"
  "\x6d\x61\x6b\x65\x2d\x68\x74\x74\x70\x2d\x72\x65\x73\x70\x6f\x6e"
  "\x73\x65\x14\x04\x09\x04\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x68\x74\x74\x70\x2d\x73\x74\x61\x74\x75\x73\x09\x04\x14\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x68\x74\x74\x70\x2d\x74\x65"
  "\x78\x74\x05\x0a\x07\x14\x25\x6d\x61\x6b\x65\x2d\x68\x74\x74\x70"
  "\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x15\x06\x4f\x0e\x81\x87\x02"
  "\x4e\x0c\x81\x8b\x02\x4d\x0a\x81\x8b\x02\x4c\x08\x81\x8b\x02\x4b"
  "\x06\x81\x8b\x02\x4a\x04\x87\x0c\x0d\x1c\x16\x02\x09\x03\x15\x68"
  "\x74\x74\x70\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x2d\x73\x74\x61"
  "\x74\x75\x73\x17\x02\x51\x06\x81\x83\x02\x50\x04\x83\x04\x05\x0c"
  "\x18\x02\x0a\x0f\x63\x6f\x6e\x74\x65\x6e\x74\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x19\x01\x04\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x68\x74\x74\x70\x2d\x68\x65\x61\x64\x65\x72\x73\x04\x11\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x74\x72\x69\x6e\x67\x1a\x03"
  "\x11\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x1b\x03\x14\x25\x67\x65\x74\x2d\x63\x6f\x6e\x74\x65\x6e\x74"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x1c\x03\x0f\x6e\x75\x6d\x62\x65\x72"
  "\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\x19\x65\x72\x72\x6f\x72\x3a"
  "\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65"
  "\x6e\x74\x04\x11\x6d\x61\x6b\x65\x2d\x68\x74\x74\x70\x2d\x68\x65"
  "\x61\x64\x65\x72\x08\x5d\x1a\x81\x85\x02\x5c\x18\x81\x8d\x02\x5b"
  "\x16\x81\x8b\x02\x5a\x14\x81\x85\x02\x59\x12\x81\x8b\x02\x58\x10"
  "\x81\x89\x02\x57\x0e\x81\x8b\x02\x56\x0c\x81\x87\x02\x55\x0a\x81"
  "\x85\x02\x54\x08\x81\x87\x02\x53\x06\x81\x87\x02\x52\x04\x85\x08"
  "\x19\x2d\x1d\x02\x0b\x03\x03\x15\x68\x74\x74\x70\x2d\x72\x65\x71"
  "\x75\x65\x73\x74\x2d\x76\x65\x72\x73\x69\x6f\x6e\x1e\x03\x60\x08"
  "\x81\x83\x02\x5f\x06\x81\x83\x02\x5e\x04\x83\x04\x07\x10\x1f\x02"
  "\x0c\x02\x03\x15\x73\x69\x6d\x70\x6c\x65\x2d\x68\x74\x74\x70\x2d"
  "\x72\x65\x71\x75\x65\x73\x74\x3f\x20\x04\x1e\x65\x72\x72\x6f\x72"
  "\x3a\x6e\x6f\x74\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x68\x74\x74\x70"
  "\x2d\x72\x65\x71\x75\x65\x73\x74\x21\x03\x62\x06\x81\x85\x02\x61"
  "\x04\x84\x04\x05\x0e\x22\x02\x0d\x08\x14\x73\x69\x6d\x70\x6c\x65"
  "\x20\x48\x54\x54\x50\x20\x72\x65\x71\x75\x65\x73\x74\x05\x02\x63"
  "\x04\x84\x04\x03\x0c\x23\x02\x0e\x01\x04\x47\x45\x54\x04\x22\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x69\x6d\x70\x6c\x65\x2d"
  "\x68\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x2d\x75\x72\x69"
  "\x24\x07\x0b\x03\x65\x06\x81\x83\x02\x64\x04\x83\x04\x05\x11\x25"
  "\x02\x0f\x03\x10\x03\x16\x68\x74\x74\x70\x2d\x72\x65\x73\x70\x6f"
  "\x6e\x73\x65\x2d\x76\x65\x72\x73\x69\x6f\x6e\x26\x03\x68\x08\x81"
  "\x83\x02\x67\x06\x81\x83\x02\x66\x04\x83\x04\x07\x10\x27\x02\x10"
  "\x02\x03\x16\x73\x69\x6d\x70\x6c\x65\x2d\x68\x74\x74\x70\x2d\x72"
  "\x65\x73\x70\x6f\x6e\x73\x65\x3f\x28\x04\x1f\x65\x72\x72\x6f\x72"
  "\x3a\x6e\x6f\x74\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x68\x74\x74\x70"
  "\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x29\x03\x6a\x06\x81\x85\x02"
  "\x69\x04\x84\x04\x05\x0e\x2a\x02\x11\x08\x15\x73\x69\x6d\x70\x6c"
  "\x65\x20\x48\x54\x54\x50\x20\x72\x65\x73\x70\x6f\x6e\x73\x65\x05"
  "\x02\x6b\x04\x84\x04\x03\x0c\x2b\x02\x12\xc9\x01\x1a\x6d\x61\x6b"
  "\x65\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x68\x74\x74\x70\x2d\x72\x65"
  "\x73\x70\x6f\x6e\x73\x65\x2c\x04\x1a\x03\x18\x68\x74\x74\x70\x2d"
  "\x73\x74\x61\x74\x75\x73\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69"
  "\x6f\x6e\x1a\x07\x15\x04\x6e\x08\x81\x85\x02\x6d\x06\x81\x83\x02"
  "\x6c\x04\x83\x04\x07\x14\x2d\x02\x13\x03\x03\x10\x03\x70\x06\x81"
  "\x83\x02\x6f\x04\x83\x04\x05\x0d\x2e\x02\x14\x02\x03\x0e\x68\x74"
  "\x74\x70\x2d\x6d\x65\x73\x73\x61\x67\x65\x3f\x2f\x04\x17\x65\x72"
  "\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x68\x74\x74\x70\x2d\x6d\x65\x73"
  "\x73\x61\x67\x65\x30\x03\x72\x06\x81\x85\x02\x71\x04\x84\x04\x05"
  "\x0e\x31\x02\x15\x08\x0d\x48\x54\x54\x50\x20\x6d\x65\x73\x73\x61"
  "\x67\x65\x05\x02\x73\x04\x84\x04\x03\x0c\x32\x02\x16\x15\x68\x74"
  "\x74\x70\x2d\x6d\x65\x73\x73\x61\x67\x65\x2d\x68\x65\x61\x64\x65"
  "\x72\x73\x33\x03\x03\x10\x03\x15\x68\x74\x74\x70\x2d\x72\x65\x71"
  "\x75\x65\x73\x74\x2d\x68\x65\x61\x64\x65\x72\x73\x34\x04\x30\x03"
  "\x16\x68\x74\x74\x70\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x2d\x68"
  "\x65\x61\x64\x65\x72\x73\x35\x06\x76\x08\x81\x83\x02\x75\x06\x81"
  "\x83\x02\x74\x04\x83\x04\x07\x16\x36\x02\x17\x12\x68\x74\x74\x70"
  "\x2d\x6d\x65\x73\x73\x61\x67\x65\x2d\x62\x6f\x64\x79\x37\x03\x03"
  "\x10\x03\x12\x68\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x2d"
  "\x62\x6f\x64\x79\x38\x04\x30\x03\x13\x68\x74\x74\x70\x2d\x72\x65"
  "\x73\x70\x6f\x6e\x73\x65\x2d\x62\x6f\x64\x79\x39\x06\x79\x08\x81"
  "\x83\x02\x78\x06\x81\x83\x02\x77\x04\x83\x04\x07\x16\x3a\x02\x18"
  "\x02\x2a\x3b\x03\x19\x73\x69\x6d\x70\x6c\x65\x2d\x68\x74\x74\x70"
  "\x2d\x72\x65\x71\x75\x65\x73\x74\x2d\x75\x72\x69\x3f\x3c\x03\x0e"
  "\x61\x62\x73\x6f\x6c\x75\x74\x65\x2d\x75\x72\x69\x3f\x03\x0f\x75"
  "\x72\x69\x2d\x61\x75\x74\x68\x6f\x72\x69\x74\x79\x3f\x3d\x04\x7c"
  "\x08\x81\x85\x02\x7b\x06\x81\x83\x02\x7a\x04\x83\x04\x07\x13\x3e"
  "\x02\x19\x02\x03\x12\x68\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73"
  "\x74\x2d\x75\x72\x69\x3f\x3f\x04\x1b\x65\x72\x72\x6f\x72\x3a\x6e"
  "\x6f\x74\x2d\x68\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x2d"
  "\x75\x72\x69\x40\x03\x7e\x06\x81\x85\x02\x7d\x04\x84\x04\x05\x0e"
  "\x41\x02\x1a\x08\x09\x48\x54\x54\x50\x20\x55\x52\x49\x05\x02\x7f"
  "\x04\x84\x04\x03\x0c\x42\x02\x1b\x03\x05\x75\x72\x69\x3f\x43\x03"
  "\x0b\x75\x72\x69\x2d\x73\x63\x68\x65\x6d\x65\x03\x0e\x75\x72\x69"
  "\x2d\x61\x75\x74\x68\x6f\x72\x69\x74\x79\x03\x09\x75\x72\x69\x2d"
  "\x70\x61\x74\x68\x03\x13\x75\x72\x69\x2d\x70\x61\x74\x68\x2d\x61"
  "\x62\x73\x6f\x6c\x75\x74\x65\x3f\x06\x84\x01\x0c\x81\x83\x02\x83"
  "\x01\x0a\x81\x83\x02\x82\x01\x08\x81\x83\x02\x81\x01\x06\x81\x83"
  "\x02\x80\x01\x04\x83\x04\x0b\x19\x44\x02\x1c\x02\x03\x3c\x04\x22"
  "\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x73\x69\x6d\x70\x6c\x65"
  "\x2d\x68\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x2d\x75\x72"
  "\x69\x45\x03\x86\x01\x06\x81\x85\x02\x85\x01\x04\x84\x04\x05\x0e"
  "\x46\x02\x1d\x08\x10\x73\x69\x6d\x70\x6c\x65\x20\x48\x54\x54\x50"
  "\x20\x55\x52\x49\x05\x02\x87\x01\x04\x84\x04\x03\x0c\x02\x1e\x05"
  "\x63\x72\x6c\x66\x0b\x69\x73\x6f\x2d\x38\x38\x35\x39\x2d\x31\x04"
  "\x10\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d\x63\x6f\x64\x69\x6e\x67"
  "\x47\x04\x15\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d\x6c\x69\x6e\x65"
  "\x2d\x65\x6e\x64\x69\x6e\x67\x48\x03\x89\x01\x06\x81\x83\x02\x88"
  "\x01\x04\x83\x04\x05\x0f\x49\x02\x1f\x07\x62\x69\x6e\x61\x72\x79"
  "\x4a\x04\x47\x04\x48\x03\x8b\x01\x06\x81\x83\x02\x8a\x01\x04\x83"
  "\x04\x05\x0e\x4b\x02\x20\x19\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65"
  "\x64\x20\x48\x54\x54\x50\x20\x72\x65\x71\x75\x65\x73\x74\x3a\x01"
  "\x2b\x3b\x02\x20\x03\x0b\x25\x74\x65\x78\x74\x2d\x6d\x6f\x64\x65"
  "\x3b\x03\x0e\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x4c\x03\x0d\x03\x1e\x03\x43\x03\x08\x6e\x65\x77\x6c\x69\x6e"
  "\x65\x43\x03\x3d\x04\x0a\x77\x72\x69\x74\x65\x2d\x75\x72\x69\x03"
  "\x0d\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74\x3d\x04\x0b"
  "\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x04\x06\x65\x72\x72\x6f"
  "\x72\x4d\x04\x14\x77\x72\x69\x74\x65\x2d\x75\x72\x69\x2d\x61\x75"
  "\x74\x68\x6f\x72\x69\x74\x79\x04\x13\x77\x72\x69\x74\x65\x2d\x68"
  "\x74\x74\x70\x2d\x76\x65\x72\x73\x69\x6f\x6e\x4e\x03\x34\x03\x0d"
  "\x25\x62\x69\x6e\x61\x72\x79\x2d\x6d\x6f\x64\x65\x4f\x04\x13\x77"
  "\x72\x69\x74\x65\x2d\x68\x74\x74\x70\x2d\x68\x65\x61\x64\x65\x72"
  "\x73\x50\x03\x38\x13\x9e\x01\x28\x81\x89\x02\x9d\x01\x26\x81\x85"
  "\x02\x9c\x01\x24\x81\x89\x02\x9b\x01\x22\x81\x85\x02\x9a\x01\x20"
  "\x81\x85\x02\x99\x01\x1e\x81\x89\x02\x98\x01\x1c\x81\x85\x02\x97"
  "\x01\x1a\x81\x83\x02\x96\x01\x18\x81\x85\x02\x95\x01\x16\x81\x85"
  "\x02\x94\x01\x14\x81\x83\x02\x93\x01\x12\x81\x85\x02\x92\x01\x10"
  "\x81\x87\x02\x91\x01\x0e\x81\x85\x02\x90\x01\x0c\x81\x85\x02\x8f"
  "\x01\x0a\x81\x89\x02\x8e\x01\x08\x81\x85\x02\x8d\x01\x06\x81\x85"
  "\x02\x8c\x01\x04\x84\x06\x27\x53\x51\x02\x21\x02\x20\x03\x26\x03"
  "\x4f\x03\x3b\x03\x39\x04\x4c\x04\x4e\x03\x3d\x03\x17\x04\x06\x77"
  "\x72\x69\x74\x65\x03\x15\x68\x74\x74\x70\x2d\x72\x65\x73\x70\x6f"
  "\x6e\x73\x65\x2d\x72\x65\x61\x73\x6f\x6e\x4e\x03\x43\x03\x35\x04"
  "\x50\x0e\xaf\x01\x24\x81\x89\x02\xae\x01\x22\x81\x85\x02\xad\x01"
  "\x20\x81\x89\x02\xac\x01\x1e\x81\x85\x02\xab\x01\x1c\x81\x85\x02"
  "\xaa\x01\x1a\x81\x89\x02\xa9\x01\x18\x81\x85\x02\xa8\x01\x16\x81"
  "\x85\x02\xa7\x01\x14\x81\x89\x02\xa6\x01\x12\x81\x85\x02\xa5\x01"
  "\x10\x81\x89\x02\xa4\x01\x0e\x81\x85\x02\xa3\x01\x0c\x81\x85\x02"
  "\xa2\x01\x0a\x81\x85\x02\xa1\x01\x08\x81\x85\x02\xa0\x01\x06\x81"
  "\x85\x02\x9f\x01\x04\x84\x06\x23\x42\x50\x02\x22\x14\x73\x69\x6d"
  "\x70\x6c\x65\x20\x48\x54\x54\x50\x20\x72\x65\x71\x75\x65\x73\x74"
  "\x15\x70\x61\x72\x73\x65\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x72\x65"
  "\x71\x75\x65\x73\x74\x4c\x02\x03\x3b\x03\x0a\x72\x65\x61\x64\x2d"
  "\x6c\x69\x6e\x65\x43\x03\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x3f\x3d\x05\x0b\x70\x61\x72\x73\x65\x2d\x6c\x69\x6e\x65\x52"
  "\x03\x19\x6d\x61\x6b\x65\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x68\x74"
  "\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x53\x06\xb5\x01\x0e\x81"
  "\x83\x02\xb4\x01\x0c\x81\x89\x02\xb3\x01\x0a\x81\x83\x02\xb2\x01"
  "\x08\x81\x83\x02\xb1\x01\x06\x81\x83\x02\xb0\x01\x04\x83\x04\x0d"
  "\x1e\x54\x02\x23\x03\x0a\x25\x72\x65\x61\x64\x2d\x61\x6c\x6c\x55"
  "\x03\x2c\x03\xb7\x01\x06\x81\x83\x02\xb6\x01\x04\x83\x04\x05\x0d"
  "\x56\x02\x24\x04\x63\x61\x72\x57\x04\x63\x64\x72\x58\x12\x48\x54"
  "\x54\x50\x20\x72\x65\x71\x75\x65\x73\x74\x20\x6c\x69\x6e\x65\x13"
  "\x70\x61\x72\x73\x65\x2d\x72\x65\x71\x75\x65\x73\x74\x2d\x6c\x69"
  "\x6e\x65\x59\x02\x03\x3b\x03\x43\x03\x3d\x05\x52\x03\x12\x72\x65"
  "\x61\x64\x2d\x68\x74\x74\x70\x2d\x68\x65\x61\x64\x65\x72\x73\x5a"
  "\x04\x13\x25\x72\x65\x61\x64\x2d\x63\x68\x75\x6e\x6b\x65\x64\x2d"
  "\x62\x6f\x64\x79\x5b\x02\x0e\x25\x6e\x6f\x2d\x72\x65\x61\x64\x2d"
  "\x62\x6f\x64\x79\x5c\x04\x15\x25\x72\x65\x61\x64\x2d\x64\x65\x6c"
  "\x69\x6d\x69\x74\x65\x64\x2d\x62\x6f\x64\x79\x5d\x04\x08\x61\x70"
  "\x70\x65\x6e\x64\x21\x5e\x07\x0b\xc5\x01\x1e\x81\x8f\x02\xc4\x01"
  "\x1c\x81\x8d\x02\xc3\x01\x1a\x81\x8f\x02\xc2\x01\x18\x81\x8b\x02"
  "\xc1\x01\x16\x81\x8d\x02\xc0\x01\x14\x81\x83\x02\xbf\x01\x12\x81"
  "\x89\x02\xbe\x01\x10\x81\x89\x02\xbd\x01\x0e\x81\x85\x02\xbc\x01"
  "\x0c\x81\x8b\x02\xbb\x01\x0a\x81\x85\x02\xba\x01\x08\x81\x83\x02"
  "\xb9\x01\x06\x81\x83\x02\xb8\x01\x04\x83\x04\x1d\x3a\x5f\x02\x25"
  "\x57\x58\x05\x48\x45\x41\x44\x13\x48\x54\x54\x50\x20\x72\x65\x73"
  "\x70\x6f\x6e\x73\x65\x20\x6c\x69\x6e\x65\x14\x70\x61\x72\x73\x65"
  "\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x2d\x6c\x69\x6e\x65\x60\x02"
  "\x03\x3b\x03\x43\x03\x3d\x05\x52\x03\x5a\x03\x11\x6e\x6f\x6e\x2d"
  "\x62\x6f\x64\x79\x2d\x73\x74\x61\x74\x75\x73\x3f\x61\x02\x5c\x04"
  "\x14\x25\x72\x65\x61\x64\x2d\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d"
  "\x62\x6f\x64\x79\x62\x04\x5d\x04\x5b\x03\x0e\x04\x5e\x07\x14\x04"
  "\x09\x73\x74\x72\x69\x6e\x67\x3d\x3f\x0f\xd7\x01\x26\x81\x91\x02"
  "\xd6\x01\x24\x81\x8f\x02\xd5\x01\x22\x81\x8d\x02\xd4\x01\x20\x81"
  "\x8f\x02\xd3\x01\x1e\x81\x8b\x02\xd2\x01\x1c\x81\x8d\x02\xd1\x01"
  "\x1a\x81\x8d\x02\xd0\x01\x18\x81\x8d\x02\xcf\x01\x16\x81\x83\x02"
  "\xce\x01\x14\x81\x83\x02\xcd\x01\x12\x81\x89\x02\xcc\x01\x10\x81"
  "\x87\x02\xcb\x01\x0e\x81\x89\x02\xca\x01\x0c\x81\x8d\x02\xc9\x01"
  "\x0a\x81\x87\x02\xc8\x01\x08\x81\x85\x02\xc7\x01\x06\x81\x85\x02"
  "\xc6\x01\x04\x84\x06\x25\x4c\x5e\x02\x26\x1f\x4d\x69\x73\x73\x69"
  "\x6e\x67\x20\x43\x52\x4c\x46\x20\x61\x66\x74\x65\x72\x20\x63\x68"
  "\x75\x6e\x6b\x20\x64\x61\x74\x61\x2e\x10\x73\x74\x72\x69\x6e\x67"
  "\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x63\x81\x20\x08\x63\x68\x75"
  "\x6e\x6b\x65\x64\x08\x12\x74\x72\x61\x6e\x73\x66\x65\x72\x2d\x65"
  "\x6e\x63\x6f\x64\x69\x6e\x67\x05\x0c\x68\x74\x74\x70\x2d\x68\x65"
  "\x61\x64\x65\x72\x64\x03\x19\x68\x74\x74\x70\x2d\x68\x65\x61\x64"
  "\x65\x72\x2d\x70\x61\x72\x73\x65\x64\x2d\x76\x61\x6c\x75\x65\x65"
  "\x04\x05\x61\x73\x73\x71\x66\x02\x13\x6f\x70\x65\x6e\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2d\x6f\x63\x74\x65\x74\x73\x03\x13\x25\x72\x65"
  "\x61\x64\x2d\x63\x68\x75\x6e\x6b\x2d\x6c\x65\x61\x64\x65\x72\x67"
  "\x03\x5a\x06\x0c\x25\x72\x65\x61\x64\x2d\x63\x68\x75\x6e\x6b\x5a"
  "\x03\x13\x67\x65\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x21\x03\x3b\x03\x43\x03\x4d\x03\x0d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x6e\x75\x6c\x6c\x3f\x0d\xe7\x01\x22\x81\x8d\x02\xe6"
  "\x01\x20\x81\x8b\x02\xe5\x01\x1e\x81\x83\x02\xe4\x01\x1c\x81\x8b"
  "\x02\xe3\x01\x1a\x81\x8b\x02\xe2\x01\x18\x81\x8b\x02\xe1\x01\x16"
  "\x81\x89\x02\xe0\x01\x14\x81\x8b\x02\xdf\x01\x12\x81\x89\x02\xde"
  "\x01\x10\x81\x89\x02\xdd\x01\x0e\x81\x89\x02\xdc\x01\x0c\x81\x87"
  "\x02\xdb\x01\x0a\x81\x87\x02\xda\x01\x08\x81\x89\x02\xd9\x01\x06"
  "\x81\x85\x02\xd8\x01\x04\x84\x06\x21\x43\x68\x02\x27\x57\x27\x49"
  "\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x20\x63\x68\x75\x6e\x6b\x20"
  "\x69\x6e\x20\x48\x54\x54\x50\x20\x6d\x65\x73\x73\x61\x67\x65\x20"
  "\x62\x6f\x64\x79\x2e\x24\x50\x72\x65\x6d\x61\x74\x75\x72\x65\x20"
  "\x45\x4f\x46\x20\x69\x6e\x20\x48\x54\x54\x50\x20\x6d\x65\x73\x73"
  "\x61\x67\x65\x20\x62\x6f\x64\x79\x2e\x03\x3b\x03\x43\x03\x3d\x03"
  "\x18\x70\x61\x72\x73\x65\x2d\x68\x74\x74\x70\x2d\x63\x68\x75\x6e"
  "\x6b\x2d\x6c\x65\x61\x64\x65\x72\x03\x4d\x06\xee\x01\x10\x81\x83"
  "\x02\xed\x01\x0e\x81\x83\x02\xec\x01\x0c\x81\x83\x02\xeb\x01\x0a"
  "\x81\x83\x02\xea\x01\x08\x81\x83\x02\xe9\x01\x06\x81\x83\x02\xe8"
  "\x01\x04\x83\x04\x0f\x20\x43\x02\x28\x24\x50\x72\x65\x6d\x61\x74"
  "\x75\x72\x65\x20\x45\x4f\x46\x20\x69\x6e\x20\x48\x54\x54\x50\x20"
  "\x6d\x65\x73\x73\x61\x67\x65\x20\x62\x6f\x64\x79\x2e\x02\x03\x4f"
  "\x03\x1b\x04\x04\x6d\x69\x6e\x06\x10\x77\x72\x69\x74\x65\x2d\x73"
  "\x75\x62\x73\x74\x72\x69\x6e\x67\x3d\x03\x4d\x06\x10\x72\x65\x61"
  "\x64\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x21\x07\xf9\x01\x18"
  "\x81\x8f\x02\xf8\x01\x16\x81\x8f\x02\xf7\x01\x14\x81\x91\x02\xf6"
  "\x01\x12\x81\x8f\x02\xf5\x01\x10\x81\x8d\x02\xf4\x01\x0e\x81\x8f"
  "\x02\xf3\x01\x0c\x81\x8d\x02\xf2\x01\x0a\x81\x8d\x02\xf1\x01\x08"
  "\x81\x89\x02\xf0\x01\x06\x81\x89\x02\xef\x01\x04\x86\x0a\x17\x2a"
  "\x1b\x02\x29\x63\x81\x20\x03\x1c\x03\x18\x63\x61\x6c\x6c\x2d\x77"
  "\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x6f\x63\x74\x65\x74"
  "\x73\x69\x06\x5a\x04\xfe\x01\x0c\x81\x85\x02\xfd\x01\x0a\x81\x85"
  "\x02\xfc\x01\x08\x81\x87\x02\xfb\x01\x06\x81\x85\x02\xfa\x01\x04"
  "\x84\x06\x0b\x18\x6a\x02\x2a\x06\x63\x6c\x6f\x73\x65\x08\x0b\x63"
  "\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x05\x64\x04\x05\x6d\x65\x6d"
  "\x71\x03\x65\x03\x55\x05\x83\x02\x0c\x81\x85\x02\x82\x02\x0a\x81"
  "\x85\x02\x81\x02\x08\x81\x87\x02\x80\x02\x06\x81\x83\x02\xff\x01"
  "\x04\x84\x06\x0b\x1b\x6b\x02\x2b\x02\x63\x81\x20\x03\x4f\x03\x69"
  "\x04\x0d\x72\x65\x61\x64\x2d\x73\x74\x72\x69\x6e\x67\x21\x06\x3d"
  "\x05\x8b\x02\x12\x81\x89\x02\x8a\x02\x10\x81\x89\x02\x89\x02\x0e"
  "\x81\x87\x02\x88\x02\x0c\x81\x87\x02\x87\x02\x0a\x81\x85\x02\x86"
  "\x02\x08\x81\x85\x02\x85\x02\x06\x81\x83\x02\x84\x02\x04\x83\x04"
  "\x11\x21\x69\x02\x2c\x2e\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20"
  "\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x48\x54\x54\x50\x20\x6d"
  "\x65\x73\x73\x61\x67\x65\x20\x62\x6f\x64\x79\x20\x6c\x65\x6e\x67"
  "\x74\x68\x2e\x03\x4d\x02\x8c\x02\x04\x82\x02\x03\x0a\x63\x02\x2d"
  "\x01\x2b\x01\x21\x14\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x68\x74"
  "\x74\x70\x2d\x74\x6f\x6b\x65\x6e\x0f\x73\x74\x72\x69\x6e\x67\x2d"
  "\x3e\x73\x79\x6d\x62\x6f\x6c\x3d\x07\x69\x6e\x74\x65\x72\x6e\x6c"
  "\x04\x03\x1a\x67\x65\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75"
  "\x66\x66\x65\x72\x2d\x70\x6f\x69\x6e\x74\x65\x72\x6d\x04\x20\x6d"
  "\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66"
  "\x65\x72\x2d\x63\x68\x61\x72\x2d\x69\x6e\x2d\x73\x65\x74\x6e\x04"
  "\x1b\x73\x65\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66"
  "\x65\x72\x2d\x70\x6f\x69\x6e\x74\x65\x72\x21\x6f\x04\x17\x67\x65"
  "\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d"
  "\x74\x61\x69\x6c\x70\x04\x0b\x76\x65\x63\x74\x6f\x72\x2d\x6d\x61"
  "\x70\x71\x04\x19\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72"
  "\x2d\x62\x75\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x72\x03\x13\x70"
  "\x61\x72\x73\x65\x2d\x68\x74\x74\x70\x2d\x76\x65\x72\x73\x69\x6f"
  "\x6e\x73\x05\x0e\x76\x65\x63\x74\x6f\x72\x2d\x61\x70\x70\x65\x6e"
  "\x64\x74\x03\x13\x70\x61\x72\x73\x65\x2d\x61\x62\x73\x6f\x6c\x75"
  "\x74\x65\x2d\x75\x72\x69\x03\x18\x70\x61\x72\x73\x65\x2d\x75\x72"
  "\x69\x2d\x70\x61\x74\x68\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65\x75"
  "\x03\x14\x70\x61\x72\x73\x65\x2d\x75\x72\x69\x2d\x61\x75\x74\x68"
  "\x6f\x72\x69\x74\x79\x0c\xae\x02\x46\x81\x83\x02\xad\x02\x44\x81"
  "\x83\x02\xac\x02\x42\x81\x85\x02\xab\x02\x40\x81\x83\x02\xaa\x02"
  "\x3e\x81\x83\x02\xa9\x02\x3c\x81\x8d\x02\xa8\x02\x3a\x81\x85\x02"
  "\xa7\x02\x38\x81\x83\x02\xa6\x02\x36\x81\x91\x02\xa5\x02\x34\x81"
  "\x89\x02\xa4\x02\x32\x81\x83\x02\xa3\x02\x30\x81\x87\x02\xa2\x02"
  "\x2e\x81\x89\x02\xa1\x02\x2c\x81\x83\x02\xa0\x02\x2a\x81\x87\x02"
  "\x9f\x02\x28\x81\x85\x02\x9e\x02\x26\x81\x87\x02\x9d\x02\x24\x81"
  "\x85\x02\x9c\x02\x22\x81\x85\x02\x9b\x02\x20\x81\x89\x02\x9a\x02"
  "\x1e\x81\x83\x02\x99\x02\x1c\x81\x83\x02\x98\x02\x1a\x81\x87\x02"
  "\x97\x02\x18\x81\x83\x02\x96\x02\x16\x81\x89\x02\x95\x02\x14\x81"
  "\x87\x02\x94\x02\x12\x81\x83\x02\x93\x02\x10\x81\x85\x02\x92\x02"
  "\x0e\x81\x87\x02\x91\x02\x0c\x81\x83\x02\x90\x02\x0a\x81\x85\x02"
  "\x8f\x02\x08\x81\x87\x02\x8e\x02\x06\x81\x83\x02\x8d\x02\x04\x83"
  "\x04\x45\x65\x76\x02\x2e\x01\x21\x13\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x3a\x68\x74\x74\x70\x2d\x74\x65\x78\x74\x02\x03\x6d\x03\x73"
  "\x03\x12\x70\x61\x72\x73\x65\x2d\x68\x74\x74\x70\x2d\x73\x74\x61"
  "\x74\x75\x73\x04\x6f\x04\x72\x04\x6e\x04\x70\x05\x74\x09\xbd\x02"
  "\x20\x81\x8d\x02\xbc\x02\x1e\x81\x8d\x02\xbb\x02\x1c\x81\x8d\x02"
  "\xba\x02\x1a\x81\x8f\x02\xb9\x02\x18\x81\x8b\x02\xb8\x02\x16\x81"
  "\x8b\x02\xb7\x02\x14\x81\x89\x02\xb6\x02\x12\x81\x89\x02\xb5\x02"
  "\x10\x81\x87\x02\xb4\x02\x0e\x81\x89\x02\xb3\x02\x0c\x81\x87\x02"
  "\xb2\x02\x0a\x81\x85\x02\xb1\x02\x08\x81\x87\x02\xb0\x02\x06\x81"
  "\x83\x02\xaf\x02\x04\x83\x04\x1f\x36\x73\x02\x2f\x01\x21\x04\x47"
  "\x45\x54\x3d\x02\x03\x6d\x04\x1b\x6d\x61\x74\x63\x68\x2d\x70\x61"
  "\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x73\x74\x72\x69"
  "\x6e\x67\x04\x6f\x04\x70\x04\x71\x04\x72\x03\x75\x04\x74\x09\xc8"
  "\x02\x18\x81\x89\x02\xc7\x02\x16\x81\x87\x02\xc6\x02\x14\x81\x87"
  "\x02\xc5\x02\x12\x81\x87\x02\xc4\x02\x10\x81\x87\x02\xc3\x02\x0e"
  "\x81\x85\x02\xc2\x02\x0c\x81\x8b\x02\xc1\x02\x0a\x81\x85\x02\xc0"
  "\x02\x08\x81\x85\x02\xbf\x02\x06\x81\x83\x02\xbe\x02\x04\x83\x04"
  "\x17\x2f\x75\x02\x30\x06\x61\x70\x70\x6c\x79\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x74\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x72\x0b\x4d\x61\x6c\x66\x6f\x72\x6d\x65\x64"
  "\x20\x02\x3a\x07\x76\x61\x6c\x75\x65\x73\x02\x04\x0e\x2a\x70\x61"
  "\x72\x73\x65\x2d\x73\x74\x72\x69\x6e\x67\x05\x0e\x73\x74\x72\x69"
  "\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x03\x0d\x76\x65\x63\x74\x6f"
  "\x72\x2d\x3e\x6c\x69\x73\x74\x04\x4d\x05\xcf\x02\x10\x81\x8d\x02"
  "\xce\x02\x0e\x81\x89\x02\xcd\x02\x0c\x81\x89\x02\xcc\x02\x0a\x81"
  "\x89\x02\xcb\x02\x08\x81\x87\x02\xca\x02\x06\x81\x89\x02\xc9\x02"
  "\x04\x85\x08\x0f\x24\x71\x02\x31\x58\x57\x74\x0a\x28\x55\x6e\x6b"
  "\x6e\x6f\x77\x6e\x29\x72\x1a\x13\x6b\x6e\x6f\x77\x6e\x2d\x73\x74"
  "\x61\x74\x75\x73\x2d\x63\x6f\x64\x65\x73\x74\x02\x04\x09\x02\xde"
  "\x02\x20\x81\x8b\x02\xdd\x02\x1e\x81\x8b\x02\xdc\x02\x1c\x81\x8b"
  "\x02\xdb\x02\x1a\x81\x8b\x02\xda\x02\x18\x81\x8b\x02\xd9\x02\x16"
  "\x81\x89\x02\xd8\x02\x14\x81\x89\x02\xd7\x02\x12\x81\x87\x02\xd6"
  "\x02\x10\x81\x8b\x02\xd5\x02\x0e\x81\x87\x02\xd4\x02\x0c\x81\x87"
  "\x02\xd3\x02\x0a\x81\x83\x02\xd2\x02\x08\x81\x83\x02\xd1\x02\x06"
  "\x81\x83\x02\xd0\x02\x04\x83\x04\x1f\x2f\x72\x02\x32\xb1\x02\xcd"
  "\x01\x65\xc8\x01\x05\x03\x3c\x3d\x02\xe1\x02\x08\x81\x85\x02\xe0"
  "\x02\x06\x81\x83\x02\xdf\x02\x04\x83\x04\x07\x12\x70\x02\x33\x08"
  "\x78\x6d\x6c\x2d\x31\x2e\x30\x4a\x0c\x61\x70\x70\x6c\x69\x63\x61"
  "\x74\x69\x6f\x6e\x6f\x06\x75\x74\x66\x2d\x38\x05\x2b\x78\x6d\x6c"
  "\x04\x78\x6d\x6c\x05\x74\x65\x78\x74\x03\x37\x03\x12\x25\x67\x65"
  "\x74\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x2d\x74\x79\x70\x65\x6e\x03"
  "\x12\x6f\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x6f\x63\x74\x65"
  "\x74\x73\x03\x14\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x2f\x74\x6f"
  "\x70\x2d\x6c\x65\x76\x65\x6c\x04\x47\x03\x0c\x73\x79\x6d\x62\x6f"
  "\x6c\x2d\x6e\x61\x6d\x65\x03\x12\x6d\x69\x6d\x65\x2d\x74\x79\x70"
  "\x65\x2f\x73\x75\x62\x74\x79\x70\x65\x04\x48\x04\x12\x73\x74\x72"
  "\x69\x6e\x67\x2d\x73\x75\x66\x66\x69\x78\x2d\x63\x69\x3f\x0a\xf0"
  "\x02\x20\x81\x85\x02\xef\x02\x1e\x81\x87\x02\xee\x02\x1c\x81\x87"
  "\x02\xed\x02\x1a\x81\x87\x02\xec\x02\x18\x81\x87\x02\xeb\x02\x16"
  "\x81\x87\x02\xea\x02\x14\x81\x87\x02\xe9\x02\x12\x81\x89\x02\xe8"
  "\x02\x10\x81\x87\x02\xe7\x02\x0e\x81\x89\x02\xe6\x02\x0c\x81\x87"
  "\x02\xe5\x02\x0a\x81\x85\x02\xe4\x02\x08\x81\x85\x02\xe3\x02\x06"
  "\x81\x83\x02\xe2\x02\x04\x83\x04\x1f\x3c\x6d\x02\x34\x6f\x0d\x6f"
  "\x63\x74\x65\x74\x2d\x73\x74\x72\x65\x61\x6d\x08\x63\x68\x61\x72"
  "\x73\x65\x74\x58\x57\x0d\x63\x6f\x6e\x74\x65\x6e\x74\x2d\x74\x79"
  "\x70\x65\x05\x14\x68\x74\x74\x70\x2d\x6d\x65\x73\x73\x61\x67\x65"
  "\x2d\x68\x65\x61\x64\x65\x72\x6f\x04\x66\x05\x10\x6f\x70\x74\x69"
  "\x6f\x6e\x61\x6c\x2d\x68\x65\x61\x64\x65\x72\x66\x03\x6c\x04\x0f"
  "\x6d\x61\x6b\x65\x2d\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x03\x19"
  "\x6b\x6e\x6f\x77\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74"
  "\x2d\x63\x6f\x64\x69\x6e\x67\x3f\x07\xfd\x02\x1c\x81\x85\x02\xfc"
  "\x02\x1a\x81\x81\x02\xfb\x02\x18\x81\x85\x02\xfa\x02\x16\x81\x87"
  "\x02\xf9\x02\x14\x82\x02\xf8\x02\x12\x81\x89\x02\xf7\x02\x10\x81"
  "\x85\x02\xf6\x02\x0e\x81\x87\x02\xf5\x02\x0c\x81\x85\x02\xf4\x02"
  "\x0a\x81\x87\x02\xf3\x02\x08\x81\x83\x02\xf2\x02\x06\x83\x04\xf1"
  "\x02\x04\x83\x04\x1b\x31\x6c\x02\x35\x19\x05\x64\x05\x66\x03\x81"
  "\x03\x0a\x82\x02\x80\x03\x08\x81\x85\x02\xff\x02\x06\x83\x04\xfe"
  "\x02\x04\x83\x04\x09\x12\x58\x02\x36\x08\x03\x65\x02\x83\x03\x06"
  "\x81\x87\x02\x82\x03\x04\x85\x08\x05\x0c\x65\x02\x37\x03\x33\x05"
  "\x64\x03\x85\x03\x06\x81\x87\x02\x84\x03\x04\x85\x08\x05\x0d\x64"
  "\x37\x57\x57\x64\x04\x65\x04\x58\x04\x6c\x04\x6d\x04\x70\x04\xff"
  "\x03\x0d\x4e\x6f\x74\x20\x45\x78\x74\x65\x6e\x64\x65\x64\xfe\x03"
  "\x19\x42\x61\x6e\x64\x77\x69\x64\x74\x68\x20\x4c\x69\x6d\x69\x74"
  "\x20\x45\x78\x63\x65\x65\x64\x65\x64\xfc\x03\x15\x49\x6e\x73\x75"
  "\x66\x66\x69\x63\x69\x65\x6e\x74\x20\x53\x74\x6f\x72\x61\x67\x65"
  "\xfb\x03\x18\x56\x61\x72\x69\x61\x6e\x74\x20\x41\x6c\x73\x6f\x20"
  "\x4e\x65\x67\x6f\x74\x69\x61\x74\x65\x73\xfa\x03\x1b\x48\x54\x54"
  "\x50\x20\x56\x65\x72\x73\x69\x6f\x6e\x20\x4e\x6f\x74\x20\x53\x75"
  "\x70\x70\x6f\x72\x74\x65\x64\xf9\x03\x10\x47\x61\x74\x65\x77\x61"
  "\x79\x20\x54\x69\x6d\x65\x6f\x75\x74\xf8\x03\x14\x53\x65\x72\x76"
  "\x69\x63\x65\x20\x55\x6e\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\xf7"
  "\x03\x0c\x42\x61\x64\x20\x47\x61\x74\x65\x77\x61\x79\xf6\x03\x10"
  "\x4e\x6f\x74\x20\x49\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64\xf5"
  "\x03\x16\x49\x6e\x74\x65\x72\x6e\x61\x6c\x20\x53\x65\x72\x76\x65"
  "\x72\x20\x45\x72\x72\x6f\x72\xc2\x03\x0b\x52\x65\x74\x72\x79\x20"
  "\x57\x69\x74\x68\xab\x03\x11\x55\x70\x67\x72\x61\x64\x65\x20\x52"
  "\x65\x71\x75\x69\x72\x65\x64\xaa\x03\x15\x55\x6e\x6f\x72\x64\x65"
  "\x72\x65\x64\x20\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\xa9\x03"
  "\x12\x46\x61\x69\x6c\x65\x64\x20\x44\x65\x70\x65\x6e\x64\x65\x6e"
  "\x63\x79\xa8\x03\x07\x4c\x6f\x63\x6b\x65\x64\xa7\x03\x15\x55\x6e"
  "\x70\x72\x6f\x63\x65\x73\x73\x61\x62\x6c\x65\x20\x45\x6e\x74\x69"
  "\x74\x79\xa3\x03\x0d\x49\x27\x6d\x20\x61\x20\x54\x65\x61\x70\x6f"
  "\x74\xa2\x03\x13\x45\x78\x70\x65\x63\x74\x61\x74\x69\x6f\x6e\x20"
  "\x46\x61\x69\x6c\x65\x64\xa1\x03\x20\x52\x65\x71\x75\x65\x73\x74"
  "\x65\x64\x20\x52\x61\x6e\x67\x65\x20\x4e\x6f\x74\x20\x53\x61\x74"
  "\x69\x73\x66\x69\x61\x62\x6c\x65\xa0\x03\x17\x55\x6e\x73\x75\x70"
  "\x70\x6f\x72\x74\x65\x64\x20\x4d\x65\x64\x69\x61\x20\x54\x79\x70"
  "\x65\x9f\x03\x15\x52\x65\x71\x75\x65\x73\x74\x2d\x55\x52\x49\x20"
  "\x54\x6f\x6f\x20\x4c\x6f\x6e\x67\x9e\x03\x19\x52\x65\x71\x75\x65"
  "\x73\x74\x20\x45\x6e\x74\x69\x74\x79\x20\x54\x6f\x6f\x20\x4c\x61"
  "\x72\x67\x65\x9d\x03\x14\x50\x72\x65\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x20\x46\x61\x69\x6c\x65\x64\x9c\x03\x10\x4c\x65\x6e\x67"
  "\x74\x68\x20\x52\x65\x71\x75\x69\x72\x65\x64\x9b\x03\x05\x47\x6f"
  "\x6e\x65\x9a\x03\x09\x43\x6f\x6e\x66\x6c\x69\x63\x74\x99\x03\x10"
  "\x52\x65\x71\x75\x65\x73\x74\x20\x54\x69\x6d\x65\x6f\x75\x74\x98"
  "\x03\x1e\x50\x72\x6f\x78\x79\x20\x41\x75\x74\x68\x65\x6e\x74\x69"
  "\x63\x61\x74\x69\x6f\x6e\x20\x52\x65\x71\x75\x69\x72\x65\x64\x97"
  "\x03\x0f\x4e\x6f\x74\x20\x41\x63\x63\x65\x70\x74\x61\x62\x6c\x65"
  "\x96\x03\x13\x4d\x65\x74\x68\x6f\x64\x20\x4e\x6f\x74\x20\x41\x6c"
  "\x6c\x6f\x77\x65\x64\x95\x03\x0a\x4e\x6f\x74\x20\x46\x6f\x75\x6e"
  "\x64\x94\x03\x0a\x46\x6f\x72\x62\x69\x64\x64\x65\x6e\x93\x03\x11"
  "\x50\x61\x79\x6d\x65\x6e\x74\x20\x52\x65\x71\x75\x69\x72\x65\x64"
  "\x92\x03\x0d\x55\x6e\x61\x75\x74\x68\x6f\x72\x69\x7a\x65\x64\x91"
  "\x03\x0c\x42\x61\x64\x20\x52\x65\x71\x75\x65\x73\x74\xb4\x02\x13"
  "\x54\x65\x6d\x70\x6f\x72\x61\x72\x79\x20\x52\x65\x64\x69\x72\x65"
  "\x63\x74\xb3\x02\x0d\x53\x77\x69\x74\x63\x68\x20\x50\x72\x6f\x78"
  "\x79\xb2\x02\x0a\x55\x73\x65\x20\x50\x72\x6f\x78\x79\xb1\x02\x0d"
  "\x4e\x6f\x74\x20\x4d\x6f\x64\x69\x66\x69\x65\x64\xb0\x02\x0a\x53"
  "\x65\x65\x20\x4f\x74\x68\x65\x72\xaf\x02\x06\x46\x6f\x75\x6e\x64"
  "\xae\x02\x12\x4d\x6f\x76\x65\x64\x20\x50\x65\x72\x6d\x61\x6e\x65"
  "\x6e\x74\x6c\x79\xad\x02\x11\x4d\x75\x6c\x74\x69\x70\x6c\x65\x20"
  "\x43\x68\x6f\x69\x63\x65\x73\xe3\x01\x08\x49\x4d\x20\x55\x73\x65"
  "\x64\xd0\x01\x0d\x4d\x75\x6c\x74\x69\x2d\x53\x74\x61\x74\x75\x73"
  "\xcf\x01\x10\x50\x61\x72\x74\x69\x61\x6c\x20\x43\x6f\x6e\x74\x65"
  "\x6e\x74\xce\x01\x0e\x52\x65\x73\x65\x74\x20\x43\x6f\x6e\x74\x65"
  "\x6e\x74\xcd\x01\x0b\x4e\x6f\x20\x43\x6f\x6e\x74\x65\x6e\x74\xcc"
  "\x01\x1e\x4e\x6f\x6e\x2d\x41\x75\x74\x68\x6f\x72\x69\x74\x61\x74"
  "\x69\x76\x65\x20\x49\x6e\x66\x6f\x72\x6d\x61\x74\x69\x6f\x6e\xcb"
  "\x01\x09\x41\x63\x63\x65\x70\x74\x65\x64\xca\x01\x08\x43\x72\x65"
  "\x61\x74\x65\x64\xc9\x01\x03\x4f\x4b\x67\x0b\x50\x72\x6f\x63\x65"
  "\x73\x73\x69\x6e\x67\x66\x14\x53\x77\x69\x74\x63\x68\x69\x6e\x67"
  "\x20\x50\x72\x6f\x74\x6f\x63\x6f\x6c\x73\x65\x09\x43\x6f\x6e\x74"
  "\x69\x6e\x75\x65\x38\x72\x04\x71\x04\x75\x04\x73\x04\x76\x04\x63"
  "\x04\x69\x04\x6b\x04\x6a\x04\x1b\x04\x43\x04\x68\x04\x5e\x04\x5f"
  "\x04\x56\x04\x54\x04\x50\x04\x51\x04\x4b\x04\x49\x04\x04\x46\x04"
  "\x44\x04\x42\x04\x41\x04\x3e\x04\x3a\x04\x36\x04\x32\x04\x31\x04"
  "\x2e\x04\x2d\x04\x2b\x04\x2a\x04\x27\x04\x25\x04\x23\x04\x22\x04"
  "\x1f\x04\x1d\x04\x30\x6f\x66\x1c\x6e\x17\x68\x74\x74\x70\x2d\x6d"
  "\x65\x73\x73\x61\x67\x65\x2d\x62\x6f\x64\x79\x2d\x70\x6f\x72\x74"
  "\x61\x74\x1a\x52\x4c\x60\x59\x5c\x55\x62\x5d\x5a\x67\x5b\x13\x72"
  "\x65\x61\x64\x2d\x68\x74\x74\x70\x2d\x72\x65\x73\x70\x6f\x6e\x73"
  "\x65\x12\x72\x65\x61\x64\x2d\x68\x74\x74\x70\x2d\x72\x65\x71\x75"
  "\x65\x73\x74\x1a\x72\x65\x61\x64\x2d\x73\x69\x6d\x70\x6c\x65\x2d"
  "\x68\x74\x74\x70\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x19\x72\x65"
  "\x61\x64\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x68\x74\x74\x70\x2d\x72"
  "\x65\x71\x75\x65\x73\x74\x14\x77\x72\x69\x74\x65\x2d\x68\x74\x74"
  "\x70\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x13\x77\x72\x69\x74\x65"
  "\x2d\x68\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x4f\x3b\x45"
  "\x24\x3c\x40\x3f\x37\x33\x30\x17\x67\x75\x61\x72\x61\x6e\x74\x65"
  "\x65\x2d\x68\x74\x74\x70\x2d\x6d\x65\x73\x73\x61\x67\x65\x2f\x2c"
  "\x29\x1f\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x69\x6d\x70"
  "\x6c\x65\x2d\x68\x74\x74\x70\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65"
  "\x28\x53\x21\x1e\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x69"
  "\x6d\x70\x6c\x65\x2d\x68\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73"
  "\x74\x20\x0a\x30\x0e\x68\x74\x74\x70\x2d\x72\x65\x73\x70\x6f\x6e"
  "\x73\x65\x18\x04\x39\x14\x11\x18\x67\x75\x61\x72\x61\x6e\x74\x65"
  "\x65\x2d\x68\x74\x74\x70\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x16"
  "\x04\x13\x04\x12\x04\x35\x4e\x17\x07\x72\x65\x61\x73\x6f\x6e\x76"
  "\x26\x07\x73\x74\x61\x74\x75\x73\x75\x10\x15\x10\x3c\x68\x74\x74"
  "\x70\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x3e\x74\x08\x76\x65\x72"
  "\x73\x69\x6f\x6e\x73\x75\x76\x08\x68\x65\x61\x64\x65\x72\x73\x76"
  "\x05\x62\x6f\x64\x79\x75\x0d\x68\x74\x74\x70\x2d\x72\x65\x71\x75"
  "\x65\x73\x74\x0f\x04\x38\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x68\x74\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x0c\x04\x04"
  "\x04\x34\x75\x1e\x76\x0d\x73\x0e\x04\x75\x72\x69\x72\x07\x6d\x65"
  "\x74\x68\x6f\x64\x71\x0b\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x0f\x3c\x68\x74\x74\x70\x2d\x72\x65"
  "\x71\x75\x65\x73\x74\x3e\x70\x71\x72\x73\x76\x75\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x70\x74"
  "\x03\x04\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x04\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73"
  "\x74\x72\x75\x63\x74\x6f\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d"
  "\x70\x72\x65\x64\x69\x63\x61\x74\x65\x04\x10\x72\x65\x63\x6f\x72"
  "\x64\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x04\x17\x73\x69\x6d\x70"
  "\x6c\x65\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68"
  "\x6f\x64\x04\x21\x73\x65\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74"
  "\x68\x6f\x64\x21\x07\x39\x74\x80\x80\x04\x38\x72\x81\x81\x02\x37"
  "\x70\x81\x81\x02\x36\x6e\x81\x87\x02\x35\x6c\x81\x85\x02\x34\x6a"
  "\x81\x83\x02\x33\x68\x81\x83\x02\x32\x66\x81\x85\x02\x31\x64\x81"
  "\x83\x02\x30\x62\x81\x85\x02\x2f\x60\x81\x89\x02\x2e\x5e\x81\x83"
  "\x02\x2d\x5c\x81\x85\x02\x2c\x5a\x81\x89\x02\x2b\x58\x81\x83\x02"
  "\x2a\x56\x81\x85\x02\x29\x54\x81\x89\x02\x28\x52\x81\x83\x02\x27"
  "\x50\x81\x85\x02\x26\x4e\x81\x89\x02\x25\x4c\x81\x83\x02\x24\x4a"
  "\x81\x85\x02\x23\x48\x81\x89\x02\x22\x46\x81\x83\x02\x21\x44\x81"
  "\x85\x02\x20\x42\x81\x87\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x85"
  "\x02\x1d\x3c\x81\x89\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x87\x02"
  "\x1a\x36\x81\x85\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02\x17"
  "\x30\x81\x85\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x85\x02\x14\x2a"
  "\x81\x89\x02\x13\x28\x81\x83\x02\x12\x26\x81\x85\x02\x11\x24\x81"
  "\x89\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x89"
  "\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x89\x02"
  "\x0a\x16\x81\x83\x02\x09\x14\x81\x85\x02\x08\x12\x81\x89\x02\x07"
  "\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x87\x02\x04\x0a"
  "\x81\x83\x02\x03\x08\x81\x85\x02\x02\x06\x81\x89\x02\x01\x04\x81"
  "\x83\x02\x73\xaf\x01";

SCHEME_OBJECT *
httpio_so_data_f81c838fdbd0641e (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_httpio_so_data_f81c838fdbd0641e [0]))), (sizeof (prog_httpio_so_data_f81c838fdbd0641e)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_67]));
}

DECLARE_COMPILED_DATA_NS ("httpio.so", httpio_so_data_f81c838fdbd0641e)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("httpio.so", "48d870036ce826fb")
