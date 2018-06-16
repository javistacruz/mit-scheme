/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:38-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 10
#define DEBUGGING_LABEL_1_2 9
#define OBJECT_1_1 8
#define OBJECT_1_0 7
#define EXECUTE_CACHE_1_5 5
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
http_client_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_1_4);
      goto http_get_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (http_get_3)
DEFLABEL (http_get_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_1]);
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 10
#define DEBUGGING_LABEL_2_2 9
#define OBJECT_2_1 8
#define OBJECT_2_0 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
http_client_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      goto http_head_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (http_head_3)
DEFLABEL (http_head_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_1]);
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 9
#define DEBUGGING_LABEL_3_2 8
#define OBJECT_3_0 7
#define EXECUTE_CACHE_3_5 5
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
http_client_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto http_post_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (http_post_3)
DEFLABEL (http_post_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define TAG_4_8 2
#define LABEL_4_10 9
#define ENVIRONMENT_LABEL_4_3 20
#define DEBUGGING_LABEL_4_2 19
#define EXECUTE_CACHE_4_12 11
#define EXECUTE_CACHE_4_11 13
#define EXECUTE_CACHE_4_9 15
#define EXECUTE_CACHE_4_6 17
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
http_client_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      goto http_client_exchange_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (http_client_exchange_7)
DEFLABEL (http_client_exchange_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_4_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_11 13
#define LABEL_5_13 15
#define ENVIRONMENT_LABEL_5_3 29
#define DEBUGGING_LABEL_5_2 28
#define OBJECT_5_0 27
#define EXECUTE_CACHE_5_15 17
#define EXECUTE_CACHE_5_14 19
#define EXECUTE_CACHE_5_12 21
#define EXECUTE_CACHE_5_10 23
#define EXECUTE_CACHE_5_7 25
#define FREE_REFERENCES_LABEL_5_0 16
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
http_client_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto call_with_http_client_socket_11;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_http_client_socket_14)
DEFLABEL (call_with_http_client_socket_11)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd8.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_16)
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);

DEFLABEL (label_15)
DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_11);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_9 9
#define LABEL_6_12 11
#define LABEL_6_10 13
#define LABEL_6_14 15
#define LABEL_6_16 17
#define ENVIRONMENT_LABEL_6_3 36
#define DEBUGGING_LABEL_6_2 35
#define EXECUTE_CACHE_6_18 19
#define EXECUTE_CACHE_6_17 21
#define EXECUTE_CACHE_6_15 23
#define EXECUTE_CACHE_6_13 25
#define EXECUTE_CACHE_6_11 27
#define EXECUTE_CACHE_6_8 29
#define EXECUTE_CACHE_6_6 31
#define FREE_REFERENCE_6_0 34
#define FREE_REFERENCES_LABEL_6_0 18
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
http_client_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_6_4);
      goto http_client_request_6;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_6_12);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_6_16);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (http_client_request_10)
DEFLABEL (http_client_request_6)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_16);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_12;
  Wrd7 = Wrd11;

DEFLABEL (label_11)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_12])), (Wrd8.pObj));

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_8 9
#define LABEL_7_10 11
#define LABEL_7_9 13
#define LABEL_7_11 15
#define ENVIRONMENT_LABEL_7_3 24
#define DEBUGGING_LABEL_7_2 23
#define OBJECT_7_1 22
#define OBJECT_7_0 21
#define EXECUTE_CACHE_7_6 17
#define FREE_REFERENCE_7_0 20
#define FREE_REFERENCES_LABEL_7_0 16
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
http_client_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_7_4);
      goto add_default_headers_8;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto loop_6;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_7_11);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_default_headers_14)
DEFLABEL (add_default_headers_8)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_17;
  Wrd5 = Wrd9;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_7])), (Wrd6.pObj));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_16;

DEFLABEL (loop_15)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_7_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_18;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_22;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_21)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_20;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_6;

DEFLABEL (label_20)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_10 7
#define LABEL_11 9
#define LABEL_12 11
#define LABEL_13 13
#define LABEL_14 15
#define LABEL_7 17
#define LABEL_15 19
#define LABEL_17 21
#define LABEL_8 23
#define LABEL_9 25
#define LABEL_25 27
#define LABEL_18 29
#define TAG_19 13
#define LABEL_20 31
#define LABEL_21 33
#define LABEL_22 35
#define LABEL_23 37
#define LABEL_26 39
#define TAG_27 18
#define LABEL_28 41
#define LABEL_30 43
#define LABEL_31 45
#define LABEL_32 47
#define LABEL_33 49
#define LABEL_35 51
#define LABEL_36 53
#define LABEL_37 55
#define LABEL_38 57
#define LABEL_40 59
#define LABEL_41 61
#define LABEL_48 63
#define LABEL_44 65
#define TAG_45 31
#define LABEL_46 67
#define TAG_47 32
#define LABEL_50 69
#define LABEL_52 71
#define LABEL_53 73
#define TAG_54 35
#define LABEL_55 75
#define TAG_56 36
#define LABEL_57 77
#define LABEL_58 79
#define LABEL_60 81
#define LABEL_61 83
#define LABEL_62 85
#define LABEL_63 87
#define LABEL_66 89
#define LABEL_67 91
#define LABEL_69 93
#define LABEL_64 95
#define LABEL_68 97
#define LABEL_71 99
#define LABEL_70 101
#define LABEL_72 103
#define LABEL_73 105
#define LABEL_74 107
#define ENVIRONMENT_LABEL_3 167
#define DEBUGGING_LABEL_2 166
#define PURIFICATION_ROOT 165
#define OBJECT_28 164
#define OBJECT_27 163
#define OBJECT_26 162
#define OBJECT_25 161
#define OBJECT_24 160
#define OBJECT_23 159
#define OBJECT_22 158
#define OBJECT_21 157
#define OBJECT_20 156
#define OBJECT_19 155
#define OBJECT_18 154
#define OBJECT_17 153
#define OBJECT_16 152
#define OBJECT_15 151
#define OBJECT_14 150
#define OBJECT_13 149
#define OBJECT_12 148
#define OBJECT_11 147
#define OBJECT_10 146
#define OBJECT_9 145
#define OBJECT_8 144
#define OBJECT_7 143
#define OBJECT_6 142
#define OBJECT_5 141
#define OBJECT_4 140
#define OBJECT_3 139
#define OBJECT_2 138
#define OBJECT_1 137
#define OBJECT_0 136
#define EXECUTE_CACHE_65 109
#define EXECUTE_CACHE_59 111
#define EXECUTE_CACHE_51 113
#define EXECUTE_CACHE_49 115
#define EXECUTE_CACHE_43 117
#define EXECUTE_CACHE_42 119
#define EXECUTE_CACHE_39 121
#define EXECUTE_CACHE_34 123
#define EXECUTE_CACHE_29 125
#define EXECUTE_CACHE_24 127
#define EXECUTE_CACHE_16 129
#define FREE_REFERENCE_0 132
#define GLOBAL_EXECUTE_CACHE_5 134
#define FREE_REFERENCES_LABEL_0 108
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
http_client_so_e088ee710da3342b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd38;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
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
      goto continuation_42;

    case 2:
      current_block = (Rpc - LABEL_10);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_11);
      goto lambda_15;

    case 4:
      current_block = (Rpc - LABEL_12);
      goto lambda_17;

    case 5:
      current_block = (Rpc - LABEL_13);
      goto lambda_19;

    case 6:
      current_block = (Rpc - LABEL_14);
      goto continuation_52;

    case 7:
      current_block = (Rpc - LABEL_7);
      goto lambda_41;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto label_80;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto add_55;

    case 10:
      current_block = (Rpc - LABEL_8);
      goto continuation_40;

    case 11:
      current_block = (Rpc - LABEL_9);
      goto lambda_39;

    case 12:
      current_block = (Rpc - LABEL_25);
      goto modify_66;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto lambda_90;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto lambda_35;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto continuation_27;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto lambda_26;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_36;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto lambda_93;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto continuation_51;

    case 20:
      current_block = (Rpc - LABEL_30);
      goto continuation_28;

    case 21:
      current_block = (Rpc - LABEL_31);
      goto continuation_24;

    case 22:
      current_block = (Rpc - LABEL_32);
      goto lambda_23;

    case 23:
      current_block = (Rpc - LABEL_33);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_35);
      goto continuation_56;

    case 25:
      current_block = (Rpc - LABEL_36);
      goto continuation_53;

    case 26:
      current_block = (Rpc - LABEL_37);
      goto continuation_34;

    case 27:
      current_block = (Rpc - LABEL_38);
      goto continuation_29;

    case 28:
      current_block = (Rpc - LABEL_40);
      goto continuation_20;

    case 29:
      current_block = (Rpc - LABEL_41);
      goto continuation_21;

    case 30:
      current_block = (Rpc - LABEL_48);
      goto continuation_60;

    case 31:
      current_block = (Rpc - LABEL_44);
      goto lambda_97;

    case 32:
      current_block = (Rpc - LABEL_46);
      goto lambda_98;

    case 33:
      current_block = (Rpc - LABEL_50);
      goto continuation_32;

    case 34:
      current_block = (Rpc - LABEL_52);
      goto continuation_18;

    case 35:
      current_block = (Rpc - LABEL_53);
      goto lambda_99;

    case 36:
      current_block = (Rpc - LABEL_55);
      goto lambda_100;

    case 37:
      current_block = (Rpc - LABEL_57);
      goto continuation_57;

    case 38:
      current_block = (Rpc - LABEL_58);
      goto continuation_31;

    case 39:
      current_block = (Rpc - LABEL_60);
      goto continuation_16;

    case 40:
      current_block = (Rpc - LABEL_61);
      goto continuation_61;

    case 41:
      current_block = (Rpc - LABEL_62);
      goto continuation_14;

    case 42:
      current_block = (Rpc - LABEL_63);
      goto lambda_13;

    case 43:
      current_block = (Rpc - LABEL_66);
      goto loop_74;

    case 44:
      current_block = (Rpc - LABEL_67);
      goto label_81;

    case 45:
      current_block = (Rpc - LABEL_69);
      goto label_82;

    case 46:
      current_block = (Rpc - LABEL_64);
      goto continuation_7;

    case 47:
      current_block = (Rpc - LABEL_68);
      goto continuation_73;

    case 48:
      current_block = (Rpc - LABEL_71);
      goto label_83;

    case 49:
      current_block = (Rpc - LABEL_70);
      goto continuation_4;

    case 50:
      current_block = (Rpc - LABEL_72);
      goto label_104;

    case 51:
      current_block = (Rpc - LABEL_73);
      goto label_105;

    case 52:
      current_block = (Rpc - LABEL_74);
      goto expression_79;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_79)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_73])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_105)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_104)
  {
    static const short sections [] =
      {
	0,
	2,
	2,
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
    if (counter > 7)
      goto label_103;
    blocks = (current_block [OBJECT_28]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_72])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_103)
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
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto add_55;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto modify_66;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto add_55;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto modify_66;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto add_55;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto add_55;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto add_55;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto add_55;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17]), 3);

DEFLABEL (lambda_88)
DEFLABEL (lambda_41)
  INTERRUPT_CHECK (26, LABEL_7);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_108;
  Wrd7 = Wrd11;

DEFLABEL (label_107)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_106)
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd10.Obj) = (Rsp [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd8.pObj));

DEFLABEL (label_80)
  (Wrd7.Obj) = Rvl;
  goto label_107;

DEFLABEL (add_89)
DEFLABEL (add_55)
  INTERRUPT_CHECK (26, LABEL_17);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18])));
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

DEFLABEL (lambda_91)
DEFLABEL (lambda_39)
  INTERRUPT_CHECK (26, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_109;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_109)
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (Wrd12.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (modify_92)
DEFLABEL (modify_66)
  INTERRUPT_CHECK (26, LABEL_25);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26])));
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

DEFLABEL (lambda_90)
  CLOSURE_HEADER (LABEL_18);

DEFLABEL (lambda_54)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_110;
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_110)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto pop_return;

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (lambda_94)
DEFLABEL (lambda_35)
  INTERRUPT_CHECK (26, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_111;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd10.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_95)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (lambda_93)
  CLOSURE_HEADER (LABEL_26);

DEFLABEL (lambda_65)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_35);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_112;
  (Wrd11.Obj) = (current_block [OBJECT_4]);
  (Rsp [2]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd21.Obj) = ((Wrd19.pObj) [2]);
  (Rsp [1]) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  ((Wrd26.pObj) [2]) = (Wrd16.Obj);
  (Rsp [4]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_112)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_48);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd17.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [1]) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_56);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  ((Wrd22.pObj) [2]) = (Wrd12.Obj);
  (Rsp [4]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_96)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_41);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_113;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd11.Obj) = (current_block [OBJECT_5]);
  (Wrd12.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_87)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_13);
  (Wrd17.Obj) = (current_block [OBJECT_8]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd17.Obj);
  goto label_106;

DEFLABEL (lambda_97)
  CLOSURE_HEADER (LABEL_44);

DEFLABEL (lambda_58)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_98)
  CLOSURE_HEADER (LABEL_46);

DEFLABEL (lambda_59)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_86)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_12);
  (Wrd19.Obj) = (current_block [OBJECT_7]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_106;

DEFLABEL (lambda_99)
  CLOSURE_HEADER (LABEL_53);

DEFLABEL (lambda_62)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_61);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  Rdl = (& (Rsp [5]));
  goto loop_74;

DEFLABEL (lambda_100)
  CLOSURE_HEADER (LABEL_55);

DEFLABEL (lambda_63)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_85)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_11);
  (Wrd21.Obj) = (current_block [OBJECT_6]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_106;

DEFLABEL (lambda_101)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd26.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd27.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd29.Obj);
  goto label_106;

DEFLABEL (loop_102)
DEFLABEL (loop_74)
  DLINK_INTERRUPT_CHECK (25, LABEL_66);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_115;
  Rvl = (current_block [OBJECT_4]);

DEFLABEL (label_114)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_115)
  if (! ((Wrd6.uLng) == 1))
    goto label_122;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_121)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  if ((Wrd8.Obj) == (Wrd23.Obj))
    goto label_120;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_119;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_118)
  Rdl = (& (Rsp [2]));
  goto loop_74;

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_117;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_116)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_117)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20]), 1);

DEFLABEL (label_83)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 1);

DEFLABEL (label_82)
  (Wrd38.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd38.Obj));
  (* (--Rsp)) = Rvl;
  goto label_118;

DEFLABEL (label_120)
  (Wrd52.Obj) = ((Wrd22.pObj) [1]);
  (Wrd53.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  goto label_114;

DEFLABEL (label_122)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20]), 1);

DEFLABEL (label_81)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd8.Obj) = Rvl;
  goto label_121;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_http_client_so_e088ee710da3342b [7] =
  {
    { "http_client_so_code_1", 1, http_client_so_code_1 },
    { "http_client_so_code_2", 1, http_client_so_code_2 },
    { "http_client_so_code_3", 1, http_client_so_code_3 },
    { "http_client_so_code_4", 4, http_client_so_code_4 },
    { "http_client_so_code_5", 7, http_client_so_code_5 },
    { "http_client_so_code_6", 8, http_client_so_code_6 },
    { "http_client_so_code_7", 7, http_client_so_code_7 }
  };

int
decl_http_client_so_e088ee710da3342b (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_http_client_so_e088ee710da3342b);
  return (0);
}

DECLARE_COMPILED_CODE ("http-client.so", 53, decl_http_client_so_e088ee710da3342b, http_client_so_e088ee710da3342b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_http_client_so_data_e088ee710da3342b [1821] =
  "\xa8\x01\x14\x9c\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0c\x28"
  "\x0d\xb9\x23\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x0c\x0c\x28"
  "\xb1\x23\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x83\x88\x0c\x28\xb1\x23"
  "\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x84\x88\x28\x0d\xbd\x28\x0d\xbe"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbf\x1d\xb0\x85\x88\x02\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0d\x24\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\xb8\xc1\x1c\x0d\x1c\x24\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x9e\x1c\x88\x1b\x0d\x0d\x0d\x1c\x0c\x88\x0d\x0d\x1c\x1b\x0c\x88"
  "\x08\x89\x1b\x0c\x88\xb0\x1b\x1b\x0d\xc3\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x08\x88\x0d\x1b\x0c\x88\x08\x89\x08\x89\x0d\x08\x88"
  "\x08\x88\x0d\x08\x88\x0d\x08\x88\x0d\x08\x88\x08\x8a\x0d\x08\x0d"
  "\x1b\x1b\xb5\xb6\xb1\x0d\x0d\x0d\x9e\x1b\x2a\x1b\x2a\x1b\x2a\xb7"
  "\x2a\xb4\x2a\xb3\x2a\xb2\x2a\x9e\x28\x0d\x26\x0d\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x5a\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x68\x74\x74\x70"
  "\x2d\x63\x6c\x69\x65\x6e\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x01\x04\x47\x45\x54\x06\x15\x68\x74\x74\x70\x2d\x63\x6c\x69"
  "\x65\x6e\x74\x2d\x65\x78\x63\x68\x61\x6e\x67\x65\x02\x36\x04\x84"
  "\x06\x03\x0b\x02\x01\x05\x48\x45\x41\x44\x06\x02\x37\x04\x84\x06"
  "\x03\x0b\x02\x05\x50\x4f\x53\x54\x06\x02\x38\x04\x85\x08\x03\x0a"
  "\x02\x06\x14\x68\x74\x74\x70\x2d\x63\x6c\x69\x65\x6e\x74\x2d\x72"
  "\x65\x71\x75\x65\x73\x74\x04\x1d\x63\x61\x6c\x6c\x2d\x77\x69\x74"
  "\x68\x2d\x68\x74\x74\x70\x2d\x63\x6c\x69\x65\x6e\x74\x2d\x73\x6f"
  "\x63\x6b\x65\x74\x04\x13\x77\x72\x69\x74\x65\x2d\x68\x74\x74\x70"
  "\x2d\x72\x65\x71\x75\x65\x73\x74\x04\x13\x72\x65\x61\x64\x2d\x68"
  "\x74\x74\x70\x2d\x72\x65\x73\x70\x6f\x6e\x73\x65\x05\x3c\x0a\x81"
  "\x85\x02\x3b\x08\x81\x85\x02\x3a\x06\x81\x89\x02\x39\x04\x86\x0a"
  "\x09\x15\x02\x51\x03\x0e\x75\x72\x69\x2d\x61\x75\x74\x68\x6f\x72"
  "\x69\x74\x79\x09\x03\x13\x75\x72\x69\x2d\x61\x75\x74\x68\x6f\x72"
  "\x69\x74\x79\x2d\x68\x6f\x73\x74\x0a\x03\x0b\x63\x6c\x6f\x73\x65"
  "\x2d\x70\x6f\x72\x74\x03\x13\x75\x72\x69\x2d\x61\x75\x74\x68\x6f"
  "\x72\x69\x74\x79\x2d\x70\x6f\x72\x74\x0b\x04\x17\x6f\x70\x65\x6e"
  "\x2d\x74\x63\x70\x2d\x73\x74\x72\x65\x61\x6d\x2d\x73\x6f\x63\x6b"
  "\x65\x74\x06\x43\x10\x81\x85\x02\x42\x0e\x81\x89\x02\x41\x0c\x81"
  "\x83\x02\x40\x0a\x81\x87\x02\x3f\x08\x81\x87\x02\x3e\x06\x81\x85"
  "\x02\x3d\x04\x84\x06\x0f\x1e\x0c\x02\x11\x68\x74\x74\x70\x2d\x76"
  "\x65\x72\x73\x69\x6f\x6e\x3a\x31\x2e\x31\x02\x03\x17\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65\x2d"
  "\x75\x72\x69\x05\x14\x61\x64\x64\x2d\x64\x65\x66\x61\x75\x6c\x74"
  "\x2d\x68\x65\x61\x64\x65\x72\x73\x0d\x03\x0d\x75\x72\x69\x2d\x66"
  "\x72\x61\x67\x6d\x65\x6e\x74\x07\x12\x6d\x61\x6b\x65\x2d\x68\x74"
  "\x74\x70\x2d\x72\x65\x71\x75\x65\x73\x74\x03\x0a\x75\x72\x69\x2d"
  "\x71\x75\x65\x72\x79\x03\x09\x75\x72\x69\x2d\x70\x61\x74\x68\x07"
  "\x09\x6d\x61\x6b\x65\x2d\x75\x72\x69\x08\x4b\x12\x81\x91\x02\x4a"
  "\x10\x81\x8f\x02\x49\x0e\x81\x8d\x02\x48\x0c\x81\x8b\x02\x47\x0a"
  "\x81\x8b\x02\x46\x08\x81\x8b\x02\x45\x06\x81\x89\x02\x44\x04\x86"
  "\x0a\x11\x25\x0e\x02\x08\x04\x63\x64\x72\x04\x63\x61\x72\x0f\x13"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x68\x65\x61\x64\x65\x72\x2d\x6f"
  "\x70\x73\x10\x02\x03\x15\x63\x6f\x6e\x76\x65\x72\x74\x2d\x68\x74"
  "\x74\x70\x2d\x68\x65\x61\x64\x65\x72\x73\x02\x52\x10\x81\x8b\x02"
  "\x51\x0e\x81\x8b\x02\x50\x0c\x81\x93\x02\x4f\x0a\x81\x8b\x02\x4e"
  "\x08\x81\x89\x02\x4d\x06\x81\x87\x02\x4c\x04\x85\x08\x0f\x19\x11"
  "\x12\x12\x0c\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x0a\x78"
  "\x68\x74\x6d\x6c\x2b\x78\x6d\x6c\x02\x71\x12\x04\x30\x2e\x39\x06"
  "\x78\x68\x74\x6d\x6c\x05\x74\x65\x78\x74\x13\x12\x04\x30\x2e\x31"
  "\x12\x04\x30\x2e\x35\x0f\x13\x06\x70\x6c\x61\x69\x6e\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x07\x61"
  "\x63\x63\x65\x70\x74\x0f\x61\x63\x63\x65\x70\x74\x2d\x63\x68\x61"
  "\x72\x73\x65\x74\x10\x61\x63\x63\x65\x70\x74\x2d\x65\x6e\x63\x6f"
  "\x64\x69\x6e\x67\x10\x61\x63\x63\x65\x70\x74\x2d\x6c\x61\x6e\x67"
  "\x75\x61\x67\x65\x0b\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x05"
  "\x68\x6f\x73\x74\x09\x74\x72\x61\x69\x6c\x65\x72\x73\x05\x64\x61"
  "\x74\x65\x06\x65\x6e\x2d\x75\x73\x03\x65\x6e\x12\x04\x30\x2e\x39"
  "\x09\x69\x64\x65\x6e\x74\x69\x74\x79\x09\x75\x73\x2d\x61\x73\x63"
  "\x69\x69\x0b\x69\x73\x6f\x2d\x38\x38\x35\x39\x2d\x31\x06\x75\x74"
  "\x66\x2d\x38\x03\x74\x65\x0b\x75\x73\x65\x72\x2d\x61\x67\x65\x6e"
  "\x74\x10\x0d\x0a\x68\x74\x74\x70\x2d\x70\x6f\x73\x74\x0a\x68\x74"
  "\x74\x70\x2d\x68\x65\x61\x64\x09\x68\x74\x74\x70\x2d\x67\x65\x74"
  "\x11\x04\x0e\x04\x0c\x04\x04\x04\x04\x04\x05\x10\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x18\x64\x65\x66"
  "\x61\x75\x6c\x74\x2d\x68\x74\x74\x70\x2d\x75\x73\x65\x72\x2d\x61"
  "\x67\x65\x6e\x74\x02\x04\x11\x6d\x61\x6b\x65\x2d\x68\x74\x74\x70"
  "\x2d\x68\x65\x61\x64\x65\x72\x04\x05\x61\x73\x73\x71\x05\x0c\x68"
  "\x74\x74\x70\x2d\x68\x65\x61\x64\x65\x72\x02\x13\x67\x65\x74\x2d"
  "\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65\x03\x09"
  "\x04\x05\x6d\x65\x6d\x71\x03\x24\x75\x6e\x69\x76\x65\x72\x73\x61"
  "\x6c\x2d\x74\x69\x6d\x65\x2d\x3e\x67\x6c\x6f\x62\x61\x6c\x2d\x64"
  "\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x03\x19\x68\x74\x74"
  "\x70\x2d\x68\x65\x61\x64\x65\x72\x2d\x70\x61\x72\x73\x65\x64\x2d"
  "\x76\x61\x6c\x75\x65\x03\x0b\x03\x0a\x04\x0f\x6d\x61\x6b\x65\x2d"
  "\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x0c\x35\x6c\x80\x80\x04\x34"
  "\x6a\x81\x81\x02\x33\x68\x81\x81\x02\x32\x66\x81\x83\x02\x31\x64"
  "\xfd\xff\x03\x30\x62\xfd\xff\x03\x2f\x60\x81\x81\x02\x2e\x5e\xfd"
  "\xff\x03\x2d\x5c\xfd\xff\x03\x2c\x5a\xff\xff\x03\x2b\x58\x82\x02"
  "\x2a\x56\x81\x89\x02\x29\x54\x81\x89\x02\x28\x52\x81\x89\x02\x27"
  "\x50\x81\x8d\x02\x26\x4e\x81\x85\x02\x25\x4c\x81\x83\x02\x24\x4a"
  "\x81\x85\x02\x23\x48\x81\x89\x02\x22\x46\x81\x8b\x02\x21\x44\x81"
  "\x83\x02\x20\x42\x81\x85\x02\x1f\x40\x81\x8b\x02\x1e\x3e\x81\x87"
  "\x02\x1d\x3c\x81\x89\x02\x1c\x3a\x81\x89\x02\x1b\x38\x81\x87\x02"
  "\x1a\x36\x81\x89\x02\x19\x34\x81\x89\x02\x18\x32\x81\x81\x02\x17"
  "\x30\x85\x08\x16\x2e\x81\x89\x02\x15\x2c\x81\x87\x02\x14\x2a\x81"
  "\x89\x02\x13\x28\x81\x89\x02\x12\x26\x81\x87\x02\x11\x24\x82\x02"
  "\x10\x22\x81\x89\x02\x0f\x20\x85\x08\x0e\x1e\x81\x89\x02\x0d\x1c"
  "\x81\x85\x02\x0c\x1a\x85\x08\x0b\x18\x81\x89\x02\x0a\x16\x81\x85"
  "\x02\x09\x14\x81\x81\x02\x08\x12\x82\x02\x07\x10\x81\x8b\x02\x06"
  "\x0e\x82\x02\x05\x0c\x82\x02\x04\x0a\x82\x02\x03\x08\x81\x83\x02"
  "\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x6b\xa8\x01";

SCHEME_OBJECT *
http_client_so_data_e088ee710da3342b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_http_client_so_data_e088ee710da3342b [0]))), (sizeof (prog_http_client_so_data_e088ee710da3342b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_74]));
}

DECLARE_COMPILED_DATA_NS ("http-client.so", http_client_so_data_e088ee710da3342b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("http-client.so", "270cdf73a840679e")
