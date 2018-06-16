/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:52-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_7 5
#define LABEL_1_5 7
#define LABEL_1_8 9
#define LABEL_1_10 11
#define ENVIRONMENT_LABEL_1_3 22
#define DEBUGGING_LABEL_1_2 21
#define OBJECT_1_1 20
#define OBJECT_1_0 19
#define EXECUTE_CACHE_1_11 13
#define EXECUTE_CACHE_1_9 15
#define EXECUTE_CACHE_1_6 17
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto open_tcp_server_socket_6;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_tcp_server_socket_9)
DEFLABEL (open_tcp_server_socket_6)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_1_0])))
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 0);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define ENVIRONMENT_LABEL_2_3 17
#define DEBUGGING_LABEL_2_2 16
#define OBJECT_2_2 15
#define OBJECT_2_1 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_6 11
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_2_4);
      goto create_tcp_server_socket_3;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (create_tcp_server_socket_6)
DEFLABEL (create_tcp_server_socket_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define ENVIRONMENT_LABEL_3_3 15
#define DEBUGGING_LABEL_3_2 14
#define OBJECT_3_0 13
#define EXECUTE_CACHE_3_8 9
#define EXECUTE_CACHE_3_6 11
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_3_4);
      goto bind_tcp_server_socket_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_tcp_server_socket_5)
DEFLABEL (bind_tcp_server_socket_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 11
#define DEBUGGING_LABEL_4_2 10
#define OBJECT_4_0 9
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_4_4);
      goto listen_tcp_server_socket_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (listen_tcp_server_socket_4)
DEFLABEL (listen_tcp_server_socket_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_2 11
#define OBJECT_5_1 10
#define OBJECT_5_0 9
#define EXECUTE_CACHE_5_6 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto tcp_service__port_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tcp_service__port_4)
DEFLABEL (tcp_service__port_1)
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_5)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto close_tcp_server_socket_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_tcp_server_socket_3)
DEFLABEL (close_tcp_server_socket_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define TAG_7_7 2
#define LABEL_7_10 9
#define TAG_7_11 3
#define LABEL_7_13 11
#define TAG_7_14 4
#define LABEL_7_12 13
#define LABEL_7_15 15
#define LABEL_7_20 17
#define LABEL_7_17 19
#define TAG_7_18 8
#define LABEL_7_22 21
#define LABEL_7_24 23
#define TAG_7_25 10
#define LABEL_7_27 25
#define ENVIRONMENT_LABEL_7_3 47
#define DEBUGGING_LABEL_7_2 46
#define OBJECT_7_2 45
#define OBJECT_7_1 44
#define OBJECT_7_0 43
#define EXECUTE_CACHE_7_28 27
#define EXECUTE_CACHE_7_26 29
#define EXECUTE_CACHE_7_23 31
#define EXECUTE_CACHE_7_21 33
#define EXECUTE_CACHE_7_19 35
#define EXECUTE_CACHE_7_16 37
#define EXECUTE_CACHE_7_9 39
#define EXECUTE_CACHE_7_8 41
#define FREE_REFERENCES_LABEL_7_0 26
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_7_4);
      goto tcp_server_connection_accept_19;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_17;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto lambda_23;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_7_13);
      goto loop_25;

    case 5:
      current_block = (Rpc - LABEL_7_12);
      goto lambda_11;

    case 6:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_7_20);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_7_17);
      goto lambda_27;

    case 9:
      current_block = (Rpc - LABEL_7_22);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_7_24);
      goto lambda_28;

    case 11:
      current_block = (Rpc - LABEL_7_27);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tcp_server_connection_accept_22)
DEFLABEL (tcp_server_connection_accept_19)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_6])));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (label_29)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_7_6);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_10])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd15 = Wrd6;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd17.pObj) [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd10.Obj) = ((Wrd17.pObj) [4]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_13])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  ((Wrd29.pObj) [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_13;

DEFLABEL (label_30)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (Rsp [1]) = (Wrd31.Obj);
  goto lambda_10;

DEFLABEL (lambda_24)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_7_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_15);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_7_0])))
    goto label_31;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_17])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd22.pObj) [4]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (label_31)
  if (Rvl == (current_block [OBJECT_7_1]))
    goto label_32;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_23]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (loop_25)
  CLOSURE_HEADER (LABEL_7_13);

DEFLABEL (loop_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  goto lambda_10;

DEFLABEL (lambda_26)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_7_12);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_7_17);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_24])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_26]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_7_24);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_28]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_27);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [2]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 3);

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
socket_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto open_tcp_stream_socket_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_tcp_stream_socket_5)
DEFLABEL (open_tcp_stream_socket_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 12
#define DEBUGGING_LABEL_9_2 11
#define EXECUTE_CACHE_9_7 7
#define EXECUTE_CACHE_9_6 9
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto open_unix_stream_socket_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_unix_stream_socket_5)
DEFLABEL (open_unix_stream_socket_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define LABEL_10_9 9
#define LABEL_10_10 11
#define LABEL_10_12 13
#define TAG_10_13 5
#define LABEL_10_15 15
#define TAG_10_16 6
#define ENVIRONMENT_LABEL_10_3 32
#define DEBUGGING_LABEL_10_2 31
#define OBJECT_10_3 30
#define OBJECT_10_2 29
#define OBJECT_10_1 28
#define OBJECT_10_0 27
#define EXECUTE_CACHE_10_17 17
#define EXECUTE_CACHE_10_14 19
#define EXECUTE_CACHE_10_11 21
#define EXECUTE_CACHE_10_8 23
#define EXECUTE_CACHE_10_7 25
#define FREE_REFERENCES_LABEL_10_0 16
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_10_4);
      goto open_tcp_stream_socket_channel_8;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto lambda_13;

    case 6:
      current_block = (Rpc - LABEL_10_15);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_tcp_stream_socket_channel_12)
DEFLABEL (open_tcp_stream_socket_channel_8)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_18)
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 10))
    goto label_17;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd12.Lng))))
    goto label_17;
  (Wrd6.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_12])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  ((Wrd11.pObj) [2]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (label_17)
  (Wrd15.Obj) = (current_block [OBJECT_10_1]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_16;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_10_12);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_15])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_10_15);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [2]) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 3);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_8 7
#define TAG_11_9 2
#define ENVIRONMENT_LABEL_11_3 15
#define DEBUGGING_LABEL_11_2 14
#define OBJECT_11_0 13
#define EXECUTE_CACHE_11_10 9
#define EXECUTE_CACHE_11_7 11
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_11_4);
      goto open_unix_stream_socket_channel_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_11_8);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_unix_stream_socket_channel_5)
DEFLABEL (open_unix_stream_socket_channel_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_11_8);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 12
#define DEBUGGING_LABEL_12_2 11
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCE_12_0 10
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_12_4);
      goto make_socket_port_0;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_socket_port_4)
DEFLABEL (make_socket_port_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_6;
  Wrd8 = Wrd12;

DEFLABEL (label_5)
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd9.pObj));

DEFLABEL (label_2)
  (Wrd8.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_8 7
#define LABEL_13_6 9
#define LABEL_13_9 11
#define LABEL_13_10 13
#define ENVIRONMENT_LABEL_13_3 30
#define DEBUGGING_LABEL_13_2 29
#define OBJECT_13_4 28
#define OBJECT_13_3 27
#define OBJECT_13_2 26
#define OBJECT_13_1 25
#define OBJECT_13_0 24
#define EXECUTE_CACHE_13_11 15
#define EXECUTE_CACHE_13_7 17
#define FREE_REFERENCE_13_1 20
#define FREE_REFERENCE_13_0 21
#define FREE_ASSIGNMENT_13_0 23
#define FREE_REFERENCES_LABEL_13_0 14
#define NUMBER_OF_LINKER_SECTIONS_13_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_13_4);
      goto initialize_packageB_8;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_14)
DEFLABEL (initialize_packageB_8)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_21;
  Wrd6 = Wrd10;

DEFLABEL (label_20)
  (Wrd15.Obj) = (current_block [OBJECT_13_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_13_3]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_19;
  Wrd25 = Wrd29;

DEFLABEL (label_18)
  (Wrd34.Obj) = (current_block [OBJECT_13_2]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_13_4]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd39.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_13_1]);
  goto pop_return;

DEFLABEL (label_17)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_10)
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_10])), (Wrd26.pObj));

DEFLABEL (label_12)
  (Wrd25.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_9])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_7 5
#define LABEL_14_5 7
#define LABEL_14_9 9
#define LABEL_14_10 11
#define ENVIRONMENT_LABEL_14_3 24
#define DEBUGGING_LABEL_14_2 23
#define OBJECT_14_1 22
#define OBJECT_14_0 21
#define EXECUTE_CACHE_14_12 13
#define EXECUTE_CACHE_14_11 15
#define EXECUTE_CACHE_14_8 17
#define EXECUTE_CACHE_14_6 19
#define FREE_REFERENCES_LABEL_14_0 12
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_14_4);
      goto socket_close_input_4;

    case 1:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (socket_close_input_7)
DEFLABEL (socket_close_input_4)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_7);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_7 5
#define LABEL_15_5 7
#define LABEL_15_9 9
#define LABEL_15_10 11
#define ENVIRONMENT_LABEL_15_3 24
#define DEBUGGING_LABEL_15_2 23
#define OBJECT_15_1 22
#define OBJECT_15_0 21
#define EXECUTE_CACHE_15_12 13
#define EXECUTE_CACHE_15_11 15
#define EXECUTE_CACHE_15_8 17
#define EXECUTE_CACHE_15_6 19
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_15_4);
      goto socket_close_output_4;

    case 1:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (socket_close_output_7)
DEFLABEL (socket_close_output_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_7);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define TAG_16_6 1
#define ENVIRONMENT_LABEL_16_3 11
#define DEBUGGING_LABEL_16_2 10
#define OBJECT_16_0 9
#define EXECUTE_CACHE_16_7 7
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto get_host_by_name_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_host_by_name_4)
DEFLABEL (get_host_by_name_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_16_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define TAG_17_6 1
#define ENVIRONMENT_LABEL_17_3 11
#define DEBUGGING_LABEL_17_2 10
#define OBJECT_17_0 9
#define EXECUTE_CACHE_17_7 7
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto get_host_by_address_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_host_by_address_4)
DEFLABEL (get_host_by_address_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define ENVIRONMENT_LABEL_18_3 11
#define DEBUGGING_LABEL_18_2 10
#define OBJECT_18_0 9
#define EXECUTE_CACHE_18_7 7
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto canonical_host_name_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonical_host_name_4)
DEFLABEL (canonical_host_name_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define EXECUTE_CACHE_19_7 7
#define EXECUTE_CACHE_19_6 9
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto os_hostname_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_hostname_4)
DEFLABEL (os_hostname_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 9
#define DEBUGGING_LABEL_20_2 8
#define OBJECT_20_1 7
#define OBJECT_20_0 6
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
socket_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto allocate_host_address_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_host_address_4)
DEFLABEL (allocate_host_address_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5 3
#define LABEL_6 5
#define LABEL_7 7
#define ENVIRONMENT_LABEL_3 16
#define DEBUGGING_LABEL_2 15
#define PURIFICATION_ROOT 14
#define OBJECT_2 13
#define OBJECT_1 12
#define OBJECT_0 11
#define GLOBAL_EXECUTE_CACHE_4 9
#define FREE_REFERENCES_LABEL_0 8
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
socket_so_4d6205cc6a5a548b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5);
      goto label_4;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto expression_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_1)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_6])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_5)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_4)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	3,
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
    if (counter > 20)
      goto label_3;
    blocks = (current_block [OBJECT_2]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_5])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_3)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_4]));

INVOKE_INTERFACE_TARGET_4
}

static const struct liarc_code_S arr_decl_socket_so_4d6205cc6a5a548b [20] =
  {
    { "socket_so_code_1", 5, socket_so_code_1 },
    { "socket_so_code_2", 4, socket_so_code_2 },
    { "socket_so_code_3", 3, socket_so_code_3 },
    { "socket_so_code_4", 2, socket_so_code_4 },
    { "socket_so_code_5", 2, socket_so_code_5 },
    { "socket_so_code_6", 1, socket_so_code_6 },
    { "socket_so_code_7", 12, socket_so_code_7 },
    { "socket_so_code_8", 2, socket_so_code_8 },
    { "socket_so_code_9", 2, socket_so_code_9 },
    { "socket_so_code_10", 7, socket_so_code_10 },
    { "socket_so_code_11", 3, socket_so_code_11 },
    { "socket_so_code_12", 2, socket_so_code_12 },
    { "socket_so_code_13", 6, socket_so_code_13 },
    { "socket_so_code_14", 5, socket_so_code_14 },
    { "socket_so_code_15", 5, socket_so_code_15 },
    { "socket_so_code_16", 2, socket_so_code_16 },
    { "socket_so_code_17", 2, socket_so_code_17 },
    { "socket_so_code_18", 2, socket_so_code_18 },
    { "socket_so_code_19", 2, socket_so_code_19 },
    { "socket_so_code_20", 2, socket_so_code_20 }
  };

int
decl_socket_so_4d6205cc6a5a548b (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_socket_so_4d6205cc6a5a548b);
  return (0);
}

DECLARE_COMPILED_CODE ("socket.so", 3, decl_socket_so_4d6205cc6a5a548b, socket_so_4d6205cc6a5a548b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_socket_so_data_4d6205cc6a5a548b [2609] =
  "\x39\x24\xae\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc0\xb9\x1d\x28"
  "\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x82\x88\xc2\x07\xc0\x28\x0d"
  "\xbe\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0"
  "\x83\x88\xc3\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xc1\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xc1\xc2\x0c\x28\x0d\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x28\x0d\x23\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\xc3\x0d\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x28\xb6\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc3\xc2\x80\x1b\x28\x0d\x1c\x28\x0d\x28\x1b\x28\xb6\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x28\xb6\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x08"
  "\x1d\x0d\x1b\x25\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x1c\x81\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x82\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\xc0\x22\x29\x22\x29\x21\x17\x2b\xb8\x17\x1c\x88\x1b"
  "\xc0\xb1\xb0\x2a\x1b\x2a\xc0\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1e\x1b\x2a\xb6\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb5\x2a\x17\x0d\x0d\x0d"
  "\x0d\x1b\x1b\x0d\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d"
  "\x1b\xb4\xb3\xb2\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x6f\x63"
  "\x6b\x65\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x11\x68\x6f"
  "\x73\x74\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x61\x6e\x79\x08\x02"
  "\x19\x63\x72\x65\x61\x74\x65\x2d\x74\x63\x70\x2d\x73\x65\x72\x76"
  "\x65\x72\x2d\x73\x6f\x63\x6b\x65\x74\x05\x17\x62\x69\x6e\x64\x2d"
  "\x74\x63\x70\x2d\x73\x65\x72\x76\x65\x72\x2d\x73\x6f\x63\x6b\x65"
  "\x74\x03\x19\x6c\x69\x73\x74\x65\x6e\x2d\x74\x63\x70\x2d\x73\x65"
  "\x72\x76\x65\x72\x2d\x73\x6f\x63\x6b\x65\x74\x04\x08\x0c\x81\x87"
  "\x02\x07\x0a\x81\x87\x02\x06\x08\x81\x85\x02\x05\x06\x81\x89\x02"
  "\x04\x04\x84\x04\x0b\x17\x02\x15\x73\x79\x73\x74\x65\x6d\x2d\x70"
  "\x61\x69\x72\x2d\x73\x65\x74\x2d\x63\x64\x72\x21\x19\x63\x72\x65"
  "\x61\x74\x65\x2d\x74\x63\x70\x2d\x73\x65\x72\x76\x65\x72\x2d\x73"
  "\x6f\x63\x6b\x65\x74\x03\x0d\x6f\x70\x65\x6e\x2d\x63\x68\x61\x6e"
  "\x6e\x65\x6c\x02\x0c\x0a\x81\x85\x02\x0b\x08\x81\x83\x02\x0a\x06"
  "\x83\x04\x09\x04\x82\x02\x09\x12\x02\x17\x62\x69\x6e\x64\x2d\x74"
  "\x63\x70\x2d\x73\x65\x72\x76\x65\x72\x2d\x73\x6f\x63\x6b\x65\x74"
  "\x03\x13\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x6f\x72\x09\x03\x12\x74\x63\x70\x2d\x73\x65\x72\x76\x69"
  "\x63\x65\x2d\x3e\x70\x6f\x72\x74\x0a\x03\x0f\x08\x81\x87\x02\x0e"
  "\x06\x81\x87\x02\x0d\x04\x85\x08\x07\x10\x0b\x02\x19\x6c\x69\x73"
  "\x74\x65\x6e\x2d\x74\x63\x70\x2d\x73\x65\x72\x76\x65\x72\x2d\x73"
  "\x6f\x63\x6b\x65\x74\x03\x09\x02\x11\x06\x81\x83\x02\x10\x04\x83"
  "\x04\x05\x0c\x0c\x02\x16\x67\x65\x74\x2d\x73\x65\x72\x76\x69\x63"
  "\x65\x2d\x62\x79\x2d\x6e\x75\x6d\x62\x65\x72\x14\x67\x65\x74\x2d"
  "\x73\x65\x72\x76\x69\x63\x65\x2d\x62\x79\x2d\x6e\x61\x6d\x65\x04"
  "\x74\x63\x70\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65"
  "\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x02"
  "\x13\x06\x81\x83\x02\x12\x04\x83\x04\x05\x0e\x0d\x02\x03\x0e\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x2d\x63\x6c\x6f\x73\x65\x02\x14\x04\x83"
  "\x04\x03\x0e\x02\x08\x21\x6e\x65\x77\x2d\x74\x63\x70\x2d\x73\x65"
  "\x72\x76\x65\x72\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x2d"
  "\x61\x63\x63\x65\x70\x74\x16\x70\x72\x6f\x63\x65\x73\x73\x2d\x73"
  "\x74\x61\x74\x75\x73\x2d\x63\x68\x61\x6e\x67\x65\x05\x72\x65\x61"
  "\x64\x03\x1b\x77\x69\x74\x68\x2d\x74\x68\x72\x65\x61\x64\x2d\x65"
  "\x76\x65\x6e\x74\x73\x2d\x62\x6c\x6f\x63\x6b\x65\x64\x03\x11\x6d"
  "\x61\x6b\x65\x2d\x73\x6f\x63\x6b\x65\x74\x2d\x70\x6f\x72\x74\x0f"
  "\x05\x17\x74\x65\x73\x74\x2d\x66\x6f\x72\x2d\x69\x6f\x2d\x6f\x6e"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x03\x02\x20\x68\x61\x6e\x64\x6c"
  "\x65\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x74\x61"
  "\x74\x75\x73\x2d\x63\x68\x61\x6e\x67\x65\x03\x10\x63\x68\x61\x6e"
  "\x6e\x65\x6c\x2d\x63\x6c\x6f\x73\x65\x64\x3f\x03\x1a\x77\x69\x74"
  "\x68\x2d\x74\x68\x72\x65\x61\x64\x2d\x74\x69\x6d\x65\x72\x2d\x73"
  "\x74\x6f\x70\x70\x65\x64\x10\x03\x09\x09\x20\x1a\x81\x85\x02\x1f"
  "\x18\x81\x83\x02\x1e\x16\x81\x87\x02\x1d\x14\x81\x85\x02\x1c\x12"
  "\x81\x87\x02\x1b\x10\x81\x85\x02\x1a\x0e\x82\x02\x19\x0c\x81\x83"
  "\x02\x18\x0a\x81\x85\x02\x17\x08\x81\x83\x02\x16\x06\x81\x87\x02"
  "\x15\x04\x85\x08\x19\x30\x11\x02\x09\x04\x1f\x6f\x70\x65\x6e\x2d"
  "\x74\x63\x70\x2d\x73\x74\x72\x65\x61\x6d\x2d\x73\x6f\x63\x6b\x65"
  "\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x12\x03\x0f\x03\x22\x06\x81"
  "\x85\x02\x21\x04\x84\x06\x05\x0d\x13\x02\x0a\x03\x20\x6f\x70\x65"
  "\x6e\x2d\x75\x6e\x69\x78\x2d\x73\x74\x72\x65\x61\x6d\x2d\x73\x6f"
  "\x63\x6b\x65\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x14\x03\x0f\x03"
  "\x24\x06\x81\x83\x02\x23\x04\x83\x04\x05\x0d\x15\x02\x0b\x1b\x6e"
  "\x65\x77\x2d\x6f\x70\x65\x6e\x2d\x74\x63\x70\x2d\x73\x74\x72\x65"
  "\x61\x6d\x2d\x73\x6f\x63\x6b\x65\x74\x0b\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x12\x03\x11\x67\x65\x74\x2d\x68\x6f\x73\x74\x2d"
  "\x62\x79\x2d\x6e\x61\x6d\x65\x16\x04\x19\x65\x72\x72\x6f\x72\x3a"
  "\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65"
  "\x6e\x74\x03\x0a\x03\x03\x10\x06\x2b\x10\x81\x83\x02\x2a\x0e\x81"
  "\x85\x02\x29\x0c\x81\x85\x02\x28\x0a\x81\x85\x02\x27\x08\x81\x85"
  "\x02\x26\x06\x81\x87\x02\x25\x04\x84\x06\x0f\x21\x17\x02\x0c\x1c"
  "\x6e\x65\x77\x2d\x6f\x70\x65\x6e\x2d\x75\x6e\x69\x78\x2d\x73\x74"
  "\x72\x65\x61\x6d\x2d\x73\x6f\x63\x6b\x65\x74\x03\x03\x10\x03\x2e"
  "\x08\x81\x83\x02\x2d\x06\x81\x85\x02\x2c\x04\x83\x04\x07\x10\x02"
  "\x0d\x11\x73\x6f\x63\x6b\x65\x74\x2d\x70\x6f\x72\x74\x2d\x74\x79"
  "\x70\x65\x18\x02\x05\x16\x6d\x61\x6b\x65\x2d\x67\x65\x6e\x65\x72"
  "\x69\x63\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x02\x30\x06\x81\x87"
  "\x02\x2f\x04\x83\x04\x05\x0d\x19\x02\x0e\x0c\x63\x6c\x6f\x73\x65"
  "\x2d\x69\x6e\x70\x75\x74\x0d\x63\x6c\x6f\x73\x65\x2d\x6f\x75\x74"
  "\x70\x75\x74\x02\x08\x63\x68\x61\x6e\x6e\x65\x6c\x18\x02\x14\x73"
  "\x6f\x63\x6b\x65\x74\x2f\x63\x6c\x6f\x73\x65\x2d\x6f\x75\x74\x70"
  "\x75\x74\x1a\x13\x73\x6f\x63\x6b\x65\x74\x2f\x63\x6c\x6f\x73\x65"
  "\x2d\x69\x6e\x70\x75\x74\x1b\x03\x04\x16\x67\x65\x6e\x65\x72\x69"
  "\x63\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x04"
  "\x0f\x6d\x61\x6b\x65\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x03"
  "\x36\x0e\x81\x87\x02\x35\x0c\x81\x85\x02\x34\x0a\x81\x83\x02\x33"
  "\x08\x81\x81\x02\x32\x06\x81\x81\x02\x31\x04\x82\x02\x0d\x1f\x1c"
  "\x02\x0f\x10\x73\x68\x75\x74\x64\x6f\x77\x6e\x2d\x73\x6f\x63\x6b"
  "\x65\x74\x1d\x03\x0b\x70\x6f\x72\x74\x2f\x6f\x70\x65\x6e\x3f\x1e"
  "\x03\x17\x67\x65\x6e\x65\x72\x69\x63\x2d\x69\x6f\x2f\x63\x6c\x6f"
  "\x73\x65\x2d\x69\x6e\x70\x75\x74\x03\x13\x70\x6f\x72\x74\x2f\x69"
  "\x6e\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x1f\x03\x09\x05"
  "\x3b\x0c\x81\x89\x02\x3a\x0a\x81\x87\x02\x39\x08\x81\x83\x02\x38"
  "\x06\x81\x83\x02\x37\x04\x83\x04\x0b\x19\x20\x02\x10\x1d\x03\x1e"
  "\x03\x18\x67\x65\x6e\x65\x72\x69\x63\x2d\x69\x6f\x2f\x63\x6c\x6f"
  "\x73\x65\x2d\x6f\x75\x74\x70\x75\x74\x03\x1f\x03\x09\x05\x40\x0c"
  "\x81\x89\x02\x3f\x0a\x81\x87\x02\x3e\x08\x81\x83\x02\x3d\x06\x81"
  "\x83\x02\x3c\x04\x83\x04\x0b\x19\x1f\x02\x11\x11\x67\x65\x74\x2d"
  "\x68\x6f\x73\x74\x2d\x62\x79\x2d\x6e\x61\x6d\x65\x03\x10\x02\x42"
  "\x06\x81\x83\x02\x41\x04\x83\x04\x05\x0c\x1e\x02\x12\x14\x67\x65"
  "\x74\x2d\x68\x6f\x73\x74\x2d\x62\x79\x2d\x61\x64\x64\x72\x65\x73"
  "\x73\x03\x10\x02\x44\x06\x81\x83\x02\x43\x04\x83\x04\x05\x0c\x1d"
  "\x02\x13\x14\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x2d\x68\x6f\x73"
  "\x74\x2d\x6e\x61\x6d\x65\x03\x10\x02\x46\x06\x81\x83\x02\x45\x04"
  "\x83\x04\x05\x0c\x10\x02\x14\x02\x0e\x67\x65\x74\x2d\x68\x6f\x73"
  "\x74\x2d\x6e\x61\x6d\x65\x09\x03\x14\x63\x61\x6e\x6f\x6e\x69\x63"
  "\x61\x6c\x2d\x68\x6f\x73\x74\x2d\x6e\x61\x6d\x65\x21\x03\x48\x06"
  "\x81\x81\x02\x47\x04\x82\x02\x05\x0d\x22\x02\x15\x10\x73\x74\x72"
  "\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x14\x68\x6f\x73"
  "\x74\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x4a\x06\x81\x81\x02\x49\x04\x82\x02\x05\x0a\x15\x23\x23\x16\x68"
  "\x6f\x73\x74\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x6c\x6f\x6f\x70"
  "\x62\x61\x63\x6b\x04\x22\x04\x0e\x67\x65\x74\x2d\x68\x6f\x73\x74"
  "\x2d\x6e\x61\x6d\x65\x10\x04\x1d\x04\x1e\x04\x1f\x04\x20\x04\x1c"
  "\x04\x19\x04\x04\x17\x04\x15\x04\x13\x04\x11\x04\x0e\x04\x0d\x04"
  "\x0c\x04\x0b\x04\x04\x04\x19\x16\x68\x6f\x73\x74\x2d\x61\x64\x64"
  "\x72\x65\x73\x73\x2d\x6c\x6f\x6f\x70\x62\x61\x63\x6b\x11\x68\x6f"
  "\x73\x74\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x61\x6e\x79\x16\x61"
  "\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x68\x6f\x73\x74\x2d\x61\x64\x64"
  "\x72\x65\x73\x73\x0c\x6f\x73\x2f\x68\x6f\x73\x74\x6e\x61\x6d\x65"
  "\x09\x21\x14\x67\x65\x74\x2d\x68\x6f\x73\x74\x2d\x62\x79\x2d\x61"
  "\x64\x64\x72\x65\x73\x73\x16\x1a\x1b\x14\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x18\x0f\x14"
  "\x12\x18\x6f\x70\x65\x6e\x2d\x75\x6e\x69\x78\x2d\x73\x74\x72\x65"
  "\x61\x6d\x2d\x73\x6f\x63\x6b\x65\x74\x17\x6f\x70\x65\x6e\x2d\x74"
  "\x63\x70\x2d\x73\x74\x72\x65\x61\x6d\x2d\x73\x6f\x63\x6b\x65\x74"
  "\x1d\x74\x63\x70\x2d\x73\x65\x72\x76\x65\x72\x2d\x63\x6f\x6e\x6e"
  "\x65\x63\x74\x69\x6f\x6e\x2d\x61\x63\x63\x65\x70\x74\x18\x63\x6c"
  "\x6f\x73\x65\x2d\x74\x63\x70\x2d\x73\x65\x72\x76\x65\x72\x2d\x73"
  "\x6f\x63\x6b\x65\x74\x0a\x17\x6f\x70\x65\x6e\x2d\x74\x63\x70\x2d"
  "\x73\x65\x72\x76\x65\x72\x2d\x73\x6f\x63\x6b\x65\x74\x19\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07"
  "\x11";

SCHEME_OBJECT *
socket_so_data_4d6205cc6a5a548b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_socket_so_data_4d6205cc6a5a548b [0]))), (sizeof (prog_socket_so_data_4d6205cc6a5a548b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("socket.so", socket_so_data_4d6205cc6a5a548b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("socket.so", "593f90b41732c4f8")
