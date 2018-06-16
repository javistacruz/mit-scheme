/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:51-07 by Liar version 4.118. */

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
rfc2822_headers_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto make_rfc2822_header_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_rfc2822_header_5)
DEFLABEL (make_rfc2822_header_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 13
#define DEBUGGING_LABEL_2_2 12
#define OBJECT_2_0 11
#define EXECUTE_CACHE_2_7 7
#define EXECUTE_CACHE_2_6 9
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto guarantee_rfc2822_header_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_rfc2822_header_4)
DEFLABEL (guarantee_rfc2822_header_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 11
#define DEBUGGING_LABEL_3_2 10
#define OBJECT_3_2 9
#define OBJECT_3_1 8
#define OBJECT_3_0 7
#define EXECUTE_CACHE_3_5 5
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto error_not_rfc2822_header_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_rfc2822_header_5)
DEFLABEL (error_not_rfc2822_header_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_3_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_3_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

INVOKE_INTERFACE_TARGET_1
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
rfc2822_headers_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd10.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_9 9
#define ENVIRONMENT_LABEL_5_3 21
#define DEBUGGING_LABEL_5_2 20
#define OBJECT_5_0 19
#define EXECUTE_CACHE_5_10 11
#define EXECUTE_CACHE_5_8 13
#define EXECUTE_CACHE_5_6 15
#define FREE_REFERENCE_5_0 18
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5_4);
      goto header_nameP_3;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (header_nameP_7)
DEFLABEL (header_nameP_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == (current_block [OBJECT_5_0]))
    goto label_8;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_9])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 13
#define DEBUGGING_LABEL_6_2 12
#define OBJECT_6_0 11
#define EXECUTE_CACHE_6_7 7
#define EXECUTE_CACHE_6_6 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto guarantee_header_name_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_header_name_4)
DEFLABEL (guarantee_header_name_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_6_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 11
#define DEBUGGING_LABEL_7_2 10
#define OBJECT_7_2 9
#define OBJECT_7_1 8
#define OBJECT_7_0 7
#define EXECUTE_CACHE_7_5 5
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto error_not_header_name_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_header_name_5)
DEFLABEL (error_not_header_name_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_7_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_7_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 12
#define DEBUGGING_LABEL_8_2 11
#define EXECUTE_CACHE_8_6 7
#define FREE_REFERENCE_8_0 10
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      goto header_valueP_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (header_valueP_5)
DEFLABEL (header_valueP_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_8;
  Wrd11 = Wrd15;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 13
#define DEBUGGING_LABEL_9_2 12
#define OBJECT_9_0 11
#define EXECUTE_CACHE_9_7 7
#define EXECUTE_CACHE_9_6 9
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_header_value_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_header_value_4)
DEFLABEL (guarantee_header_value_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_9_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 11
#define DEBUGGING_LABEL_10_2 10
#define OBJECT_10_2 9
#define OBJECT_10_1 8
#define OBJECT_10_0 7
#define EXECUTE_CACHE_10_5 5
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto error_not_header_value_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_header_value_5)
DEFLABEL (error_not_header_value_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_10_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_10_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_8 9
#define LABEL_11_7 11
#define ENVIRONMENT_LABEL_11_3 20
#define DEBUGGING_LABEL_11_2 19
#define OBJECT_11_3 18
#define OBJECT_11_2 17
#define OBJECT_11_1 16
#define OBJECT_11_0 15
#define EXECUTE_CACHE_11_9 13
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto string_in_char_setP_9;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_in_char_setP_14)
DEFLABEL (string_in_char_setP_9)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_16)
  (Wrd16.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_6;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (loop_15)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_11_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_18;
  Rvl = (current_block [OBJECT_11_3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 30))
    goto label_21;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_21;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_21;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd19.pChr) = (& ((Wrd27.pChr) [(Wrd16.Lng)]));
  (Wrd20.uLng) = ((unsigned long) (((unsigned char *) (Wrd19.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd21.Obj) = (MAKE_OBJECT (2, (Wrd20.uLng)));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_20)
  (Wrd37.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_6;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 13
#define DEBUGGING_LABEL_12_2 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCE_12_0 10
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_12_4);
      goto guarantee_rfc2822_headers_0;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_rfc2822_headers_4)
DEFLABEL (guarantee_rfc2822_headers_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define TAG_13_8 2
#define LABEL_13_10 9
#define ENVIRONMENT_LABEL_13_3 20
#define DEBUGGING_LABEL_13_2 19
#define OBJECT_13_1 18
#define OBJECT_13_0 17
#define EXECUTE_CACHE_13_11 11
#define EXECUTE_CACHE_13_9 13
#define EXECUTE_CACHE_13_6 15
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto first_rfc2822_header_3;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (first_rfc2822_header_6)
DEFLABEL (first_rfc2822_header_3)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_13_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if (Rvl == (Wrd9.Obj))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_13_1]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define TAG_14_8 2
#define LABEL_14_10 9
#define ENVIRONMENT_LABEL_14_3 20
#define DEBUGGING_LABEL_14_2 19
#define OBJECT_14_1 18
#define OBJECT_14_0 17
#define EXECUTE_CACHE_14_11 11
#define EXECUTE_CACHE_14_9 13
#define EXECUTE_CACHE_14_6 15
#define FREE_REFERENCES_LABEL_14_0 10
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto all_rfc2822_headers_3;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (all_rfc2822_headers_6)
DEFLABEL (all_rfc2822_headers_3)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_14_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if (Rvl == (Wrd9.Obj))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_14_1]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define EXECUTE_CACHE_15_8 7
#define EXECUTE_CACHE_15_7 9
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto rfc2822_headers__string_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rfc2822_headers__string_4)
DEFLABEL (rfc2822_headers__string_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_8 9
#define TAG_16_9 3
#define ENVIRONMENT_LABEL_16_3 21
#define DEBUGGING_LABEL_16_2 20
#define OBJECT_16_0 19
#define EXECUTE_CACHE_16_12 11
#define EXECUTE_CACHE_16_11 13
#define EXECUTE_CACHE_16_10 15
#define EXECUTE_CACHE_16_6 17
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_16_4);
      goto write_rfc2822_headers_3;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_rfc2822_headers_6)
DEFLABEL (write_rfc2822_headers_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_8])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_7);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_16_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_8 9
#define LABEL_17_11 11
#define LABEL_17_12 13
#define ENVIRONMENT_LABEL_17_3 27
#define DEBUGGING_LABEL_17_2 26
#define OBJECT_17_0 25
#define EXECUTE_CACHE_17_14 15
#define EXECUTE_CACHE_17_13 17
#define EXECUTE_CACHE_17_10 19
#define EXECUTE_CACHE_17_9 21
#define EXECUTE_CACHE_17_7 23
#define FREE_REFERENCES_LABEL_17_0 14
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_17_4);
      goto write_header_5;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_17_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_header_8)
DEFLABEL (write_header_5)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_11);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define LABEL_18_9 9
#define LABEL_18_8 11
#define LABEL_18_12 13
#define TAG_18_13 5
#define LABEL_18_16 15
#define LABEL_18_14 17
#define TAG_18_15 7
#define LABEL_18_21 19
#define LABEL_18_17 21
#define LABEL_18_19 23
#define LABEL_18_20 25
#define ENVIRONMENT_LABEL_18_3 43
#define DEBUGGING_LABEL_18_2 42
#define OBJECT_18_4 41
#define OBJECT_18_3 40
#define OBJECT_18_2 39
#define OBJECT_18_1 38
#define OBJECT_18_0 37
#define EXECUTE_CACHE_18_22 27
#define EXECUTE_CACHE_18_18 29
#define EXECUTE_CACHE_18_11 31
#define EXECUTE_CACHE_18_10 33
#define EXECUTE_CACHE_18_6 35
#define FREE_REFERENCES_LABEL_18_0 26
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd21;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd53;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_18_4);
      goto write_name_22;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_18_9);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_18_12);
      goto lambda_30;

    case 6:
      current_block = (Rpc - LABEL_18_16);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_18_14);
      goto lambda_31;

    case 8:
      current_block = (Rpc - LABEL_18_21);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_18_17);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_18_19);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_18_20);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_name_29)
DEFLABEL (write_name_22)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 30))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_35)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 30))
    goto label_34;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_34;
  (Wrd22.uLng) = ((unsigned long) (((unsigned char *) (Wrd27.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd23.Obj) = (MAKE_OBJECT (2, (Wrd22.uLng)));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd12.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_12])));
  Rhp += 5;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd29 = Wrd20;
  (Wrd30.Obj) = (Rsp [5]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  ((Wrd29.pObj) [3]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd29.pObj) [4]) = (Wrd26.Obj);
  ((Wrd29.pObj) [5]) = (Wrd9.Obj);
  ((Wrd29.pObj) [6]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_14])));
  Rhp += 4;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  Wrd39 = Wrd32;
  ((Wrd39.pObj) [2]) = (Wrd30.Obj);
  ((Wrd39.pObj) [3]) = (Wrd28.Obj);
  ((Wrd39.pObj) [4]) = (Wrd26.Obj);
  ((Wrd39.pObj) [5]) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  ((Wrd14.pObj) [0]) = (Wrd31.Obj);
  ((Wrd8.pObj) [0]) = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [0]);
  (Rsp [4]) = (Wrd48.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_18_1]);
  (Rsp [5]) = (Wrd51.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_32)
  (Wrd53.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd53.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (label_34)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_18_1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_18_12);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_37;
  Rvl = (current_block [OBJECT_18_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd15.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd39.Obj) = ((Wrd8.pObj) [3]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 30))
    goto label_42;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_42;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_42;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd24.pChr) = (& ((Wrd34.pChr) [(Wrd19.Lng)]));
  (Wrd25.uLng) = ((unsigned long) (((unsigned char *) (Wrd24.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd26.Obj) = (MAKE_OBJECT (2, (Wrd25.uLng)));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_41)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [2]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_18_17);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_18_4]))
    goto label_39;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd11.pObj) [0]);
  (Rsp [2]) = (Wrd7.Obj);
  goto label_38;

DEFLABEL (label_39)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [6]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd18.pObj) [0]);
  (Rsp [2]) = (Wrd14.Obj);

DEFLABEL (label_38)
DEFLABEL (label_40)
  (Wrd19.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_42)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [3]);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_18_14);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_43;
  Rvl = (current_block [OBJECT_18_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd44.Obj) = ((Wrd8.pObj) [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 30))
    goto label_45;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_45;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_45;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd29.pChr) = (& ((Wrd39.pChr) [(Wrd24.Lng)]));
  (Wrd30.uLng) = ((unsigned long) (((unsigned char *) (Wrd29.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd31.Obj) = (MAKE_OBJECT (2, (Wrd30.uLng)));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_18_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18_19);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd12.Lng) + 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (Rsp [1]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_45)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [3]);
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_21]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define EXECUTE_CACHE_19_6 7
#define FREE_REFERENCE_19_0 10
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto string__rfc2822_headers_0;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__rfc2822_headers_4)
DEFLABEL (string__rfc2822_headers_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define ENVIRONMENT_LABEL_20_3 15
#define DEBUGGING_LABEL_20_2 14
#define OBJECT_20_0 13
#define EXECUTE_CACHE_20_8 9
#define EXECUTE_CACHE_20_7 11
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_20_4);
      goto read_rfc2822_headers_6;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto loop_4;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_rfc2822_headers_9)
DEFLABEL (read_rfc2822_headers_6)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_4;

DEFLABEL (loop_10)
DEFLABEL (loop_4)
  INTERRUPT_CHECK (26, LABEL_20_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_4;

DEFLABEL (label_11)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_9 7
#define LABEL_21_7 9
#define LABEL_21_12 11
#define LABEL_21_11 13
#define LABEL_21_13 15
#define LABEL_21_15 17
#define LABEL_21_16 19
#define ENVIRONMENT_LABEL_21_3 41
#define DEBUGGING_LABEL_21_2 40
#define OBJECT_21_2 39
#define OBJECT_21_1 38
#define OBJECT_21_0 37
#define EXECUTE_CACHE_21_20 21
#define EXECUTE_CACHE_21_19 23
#define EXECUTE_CACHE_21_18 25
#define EXECUTE_CACHE_21_17 27
#define EXECUTE_CACHE_21_14 29
#define EXECUTE_CACHE_21_10 31
#define EXECUTE_CACHE_21_8 33
#define EXECUTE_CACHE_21_6 35
#define FREE_REFERENCES_LABEL_21_0 20
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_21_4);
      goto read_rfc2822_header_12;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_21_12);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_21_13);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_21_15);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_21_16);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_rfc2822_header_16)
DEFLABEL (read_rfc2822_header_12)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_9);

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 30))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (Wrd14.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_18)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = ((Wrd26.Lng) + 1L);
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_21_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_18]));

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_11);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_15);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_19]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define LABEL_22_10 9
#define LABEL_22_9 11
#define LABEL_22_12 13
#define TAG_22_13 5
#define LABEL_22_16 15
#define LABEL_22_19 17
#define LABEL_22_17 19
#define LABEL_22_18 21
#define LABEL_22_21 23
#define LABEL_22_22 25
#define LABEL_22_24 27
#define LABEL_22_26 29
#define LABEL_22_32 31
#define LABEL_22_28 33
#define LABEL_22_31 35
#define ENVIRONMENT_LABEL_22_3 68
#define DEBUGGING_LABEL_22_2 67
#define OBJECT_22_7 66
#define OBJECT_22_6 65
#define OBJECT_22_5 64
#define OBJECT_22_4 63
#define OBJECT_22_3 62
#define OBJECT_22_2 61
#define OBJECT_22_1 60
#define OBJECT_22_0 59
#define EXECUTE_CACHE_22_30 37
#define EXECUTE_CACHE_22_29 39
#define EXECUTE_CACHE_22_27 41
#define EXECUTE_CACHE_22_25 43
#define EXECUTE_CACHE_22_23 45
#define EXECUTE_CACHE_22_20 47
#define EXECUTE_CACHE_22_15 49
#define EXECUTE_CACHE_22_14 51
#define EXECUTE_CACHE_22_11 53
#define EXECUTE_CACHE_22_8 55
#define EXECUTE_CACHE_22_6 57
#define FREE_REFERENCES_LABEL_22_0 36
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_22_4);
      goto read_rfc2822_folded_line_21;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_10);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_22_12);
      goto lambda_27;

    case 6:
      current_block = (Rpc - LABEL_22_16);
      goto loop_17;

    case 7:
      current_block = (Rpc - LABEL_22_19);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_22_17);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_22_18);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_22_21);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_22_22);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_22_24);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_22_26);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_22_32);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_22_28);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_22_31);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_rfc2822_folded_line_26)
DEFLABEL (read_rfc2822_folded_line_21)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_32;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_32;
  (Wrd15.uLng) = ((unsigned long) (((unsigned char *) (Wrd20.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd16.Obj) = (MAKE_OBJECT (2, (Wrd15.uLng)));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22_3]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_15]));

DEFLABEL (label_30)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_12])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (label_32)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_22_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_22_12);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_17;

DEFLABEL (loop_28)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_22_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 30))
    goto label_34;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_33)
  (Wrd22.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_18);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_24]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_22_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [7]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_30]));

DEFLABEL (label_34)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_22_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_22_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_29]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_22_28);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (label_36)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_22_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_22_32);
  goto label_35;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_22_21);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  Rvl = (current_block [OBJECT_22_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_27]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_22_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_22_31);
  (Rsp [0]) = Rvl;
  goto loop_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define ENVIRONMENT_LABEL_23_3 15
#define DEBUGGING_LABEL_23_2 14
#define OBJECT_23_0 13
#define EXECUTE_CACHE_23_8 11
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_23_4);
      goto skip_wsp_left_7;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto loop_5;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (skip_wsp_left_11)
DEFLABEL (skip_wsp_left_7)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_5;

DEFLABEL (loop_12)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_23_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_14;

DEFLABEL (label_13)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 30))
    goto label_16;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_16;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_16;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd19.pChr) = (& ((Wrd27.pChr) [(Wrd16.Lng)]));
  (Wrd20.uLng) = ((unsigned long) (((unsigned char *) (Wrd19.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd21.Obj) = (MAKE_OBJECT (2, (Wrd20.uLng)));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd41.Lng) + 1L);
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (Rsp [0]) = (Wrd39.Obj);
  goto loop_5;

DEFLABEL (label_16)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define ENVIRONMENT_LABEL_24_3 15
#define DEBUGGING_LABEL_24_2 14
#define OBJECT_24_0 13
#define EXECUTE_CACHE_24_8 11
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_24_4);
      goto skip_wsp_right_8;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (skip_wsp_right_12)
DEFLABEL (skip_wsp_right_8)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_24_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) > (Wrd8.Lng))
    goto label_15;

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_17;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_17;
  Wrd26 = Wrd17;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_17;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd22.pChr) = (& ((Wrd28.pChr) [(Wrd19.Lng)]));
  (Wrd23.uLng) = ((unsigned long) (((unsigned char *) (Wrd22.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd24.Obj) = (MAKE_OBJECT (2, (Wrd23.uLng)));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd42.Lng) - 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (Rsp [0]) = (Wrd40.Obj);
  goto loop_6;

DEFLABEL (label_17)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_9 9
#define LABEL_25_10 11
#define LABEL_25_12 13
#define LABEL_25_15 15
#define LABEL_25_17 17
#define LABEL_25_14 19
#define LABEL_25_21 21
#define LABEL_25_22 23
#define LABEL_25_20 25
#define LABEL_25_25 27
#define LABEL_25_26 29
#define ENVIRONMENT_LABEL_25_3 57
#define DEBUGGING_LABEL_25_2 56
#define OBJECT_25_3 55
#define OBJECT_25_2 54
#define OBJECT_25_1 53
#define OBJECT_25_0 52
#define EXECUTE_CACHE_25_24 31
#define EXECUTE_CACHE_25_23 33
#define EXECUTE_CACHE_25_19 35
#define EXECUTE_CACHE_25_18 37
#define EXECUTE_CACHE_25_16 39
#define EXECUTE_CACHE_25_13 41
#define EXECUTE_CACHE_25_11 43
#define EXECUTE_CACHE_25_8 45
#define EXECUTE_CACHE_25_6 47
#define FREE_REFERENCE_25_1 50
#define FREE_REFERENCE_25_0 51
#define FREE_REFERENCES_LABEL_25_0 30
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_25_4);
      goto quote_rfc2822_text_16;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto loop_13;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_25_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_25_15);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_25_17);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_25_14);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_25_21);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_25_22);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_25_20);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_25_25);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_25_26);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (quote_rfc2822_text_21)
DEFLABEL (quote_rfc2822_text_16)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto loop_13;

DEFLABEL (loop_22)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_25_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_25_17);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd8.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [4]) = (Wrd8.Obj);
  (Rsp [5]) = Rvl;
  (Wrd10.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [6]) = (Wrd10.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_19]));

DEFLABEL (label_23)
  Rvl = Rvl;
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_30;
  Wrd15 = Wrd19;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_25_22);
  Rsp = (& (Rsp [1]));
  goto loop_13;

DEFLABEL (label_25)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_20]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_28;
  Wrd16 = Wrd20;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_25_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd12.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_25_1]);
  (Rsp [6]) = (Wrd13.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_24]));

DEFLABEL (label_26)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_25_26);
  (Wrd5.Obj) = (current_block [OBJECT_25_3]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_13;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_21])), (Wrd17.pObj));

DEFLABEL (label_19)
  (Wrd16.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_15])), (Wrd16.pObj));

DEFLABEL (label_18)
  (Wrd15.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define LABEL_26_11 9
#define LABEL_26_9 11
#define LABEL_26_12 13
#define TAG_26_13 5
#define LABEL_26_14 15
#define TAG_26_15 6
#define LABEL_26_16 17
#define LABEL_26_17 19
#define LABEL_26_18 21
#define TAG_26_19 9
#define LABEL_26_20 23
#define LABEL_26_25 25
#define LABEL_26_21 27
#define LABEL_26_22 29
#define TAG_26_23 13
#define LABEL_26_24 31
#define LABEL_26_27 33
#define LABEL_26_29 35
#define LABEL_26_30 37
#define LABEL_26_31 39
#define LABEL_26_38 41
#define LABEL_26_33 43
#define LABEL_26_39 45
#define LABEL_26_34 47
#define LABEL_26_35 49
#define TAG_26_36 23
#define LABEL_26_40 51
#define LABEL_26_42 53
#define LABEL_26_43 55
#define LABEL_26_47 57
#define LABEL_26_45 59
#define LABEL_26_48 61
#define ENVIRONMENT_LABEL_26_3 92
#define DEBUGGING_LABEL_26_2 91
#define OBJECT_26_2 90
#define OBJECT_26_1 89
#define OBJECT_26_0 88
#define EXECUTE_CACHE_26_49 63
#define EXECUTE_CACHE_26_46 65
#define EXECUTE_CACHE_26_44 67
#define EXECUTE_CACHE_26_41 69
#define EXECUTE_CACHE_26_37 71
#define EXECUTE_CACHE_26_32 73
#define EXECUTE_CACHE_26_28 75
#define EXECUTE_CACHE_26_26 77
#define EXECUTE_CACHE_26_10 79
#define EXECUTE_CACHE_26_8 81
#define EXECUTE_CACHE_26_6 83
#define FREE_REFERENCE_26_1 86
#define FREE_REFERENCE_26_0 87
#define FREE_REFERENCES_LABEL_26_0 62
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto parser_rfc2822_quoted_string_43;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_26_12);
      goto lambda_49;

    case 6:
      current_block = (Rpc - LABEL_26_14);
      goto Z___ks7__39;

    case 7:
      current_block = (Rpc - LABEL_26_16);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_26_17);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_26_18);
      goto lambda_51;

    case 10:
      current_block = (Rpc - LABEL_26_20);
      goto continuation_29;

    case 11:
      current_block = (Rpc - LABEL_26_25);
      goto label_45;

    case 12:
      current_block = (Rpc - LABEL_26_21);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_26_22);
      goto lambda_52;

    case 14:
      current_block = (Rpc - LABEL_26_24);
      goto continuation_34;

    case 15:
      current_block = (Rpc - LABEL_26_27);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_26_29);
      goto continuation_30;

    case 17:
      current_block = (Rpc - LABEL_26_30);
      goto continuation_24;

    case 18:
      current_block = (Rpc - LABEL_26_31);
      goto lambda_23;

    case 19:
      current_block = (Rpc - LABEL_26_38);
      goto continuation_32;

    case 20:
      current_block = (Rpc - LABEL_26_33);
      goto continuation_31;

    case 21:
      current_block = (Rpc - LABEL_26_39);
      goto label_46;

    case 22:
      current_block = (Rpc - LABEL_26_34);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_26_35);
      goto lambda_54;

    case 24:
      current_block = (Rpc - LABEL_26_40);
      goto continuation_11;

    case 25:
      current_block = (Rpc - LABEL_26_42);
      goto loop_19;

    case 26:
      current_block = (Rpc - LABEL_26_43);
      goto continuation_13;

    case 27:
      current_block = (Rpc - LABEL_26_47);
      goto continuation_16;

    case 28:
      current_block = (Rpc - LABEL_26_45);
      goto continuation_14;

    case 29:
      current_block = (Rpc - LABEL_26_48);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parser_rfc2822_quoted_string_48)
DEFLABEL (parser_rfc2822_quoted_string_43)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_12])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_14])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  Wrd19 = Wrd21;
  ((Wrd19.pObj) [2]) = (Wrd10.Obj);
  ((Wrd19.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd13.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto Z___ks7__39;

DEFLABEL (label_56)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_9);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_26_12);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_16);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (Z___ks7__50)
DEFLABEL (Z___ks7__39)
  INTERRUPT_CHECK (26, LABEL_26_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_26_17);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_18])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  ((Wrd16.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_26_20);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_22])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  ((Wrd14.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_59;
  Wrd21 = Wrd25;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_26]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_26_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto Z___ks7__39;

DEFLABEL (label_57)
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_33;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_25])), (Wrd22.pObj));

DEFLABEL (label_45)
  (Wrd21.Obj) = Rvl;
  goto label_58;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_26_18);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_26_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_28]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_26_27);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_30]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_31]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_32]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_26_30);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_34]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_26_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [4]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_26_22);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_26_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_26_33);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_62;

DEFLABEL (label_61)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [4]);
  (Rsp [0]) = (Wrd19.Obj);
  goto lambda_28;

DEFLABEL (label_62)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_38]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_64;
  Wrd10 = Wrd14;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_26]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_26_38);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = ((Wrd25.pObj) [4]);
  (Rsp [1]) = (Wrd27.Obj);
  goto Z___ks7__39;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_39])), (Wrd11.pObj));

DEFLABEL (label_46)
  (Wrd10.Obj) = Rvl;
  goto label_63;

DEFLABEL (lambda_53)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_26_31);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_35])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_37]));

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_26_35);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_41]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_26_40);
  (* (--Rsp)) = Rvl;
  goto loop_19;

DEFLABEL (loop_55)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_26_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_44]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_26_43);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_46]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_26_45);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  Rvl = (current_block [OBJECT_26_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_48]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_47]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  if (! ((Wrd16.Obj) == (current_block [OBJECT_26_1])))
    goto label_67;
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_44]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_26_47);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_66)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_49]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_26_48);
  Rsp = (& (Rsp [1]));
  goto loop_19;

DEFLABEL (label_67)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_66;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_7 5
#define LABEL_27_5 7
#define LABEL_27_10 9
#define LABEL_27_6 11
#define LABEL_27_14 13
#define LABEL_27_8 15
#define LABEL_27_16 17
#define LABEL_27_11 19
#define LABEL_27_18 21
#define LABEL_27_12 23
#define LABEL_27_22 25
#define LABEL_27_19 27
#define LABEL_27_23 29
#define LABEL_27_26 31
#define LABEL_27_20 33
#define LABEL_27_28 35
#define LABEL_27_24 37
#define LABEL_27_29 39
#define LABEL_27_31 41
#define LABEL_27_32 43
#define LABEL_27_25 45
#define LABEL_27_30 47
#define LABEL_27_38 49
#define LABEL_27_34 51
#define LABEL_27_36 53
#define TAG_27_37 25
#define LABEL_27_39 55
#define LABEL_27_41 57
#define ENVIRONMENT_LABEL_27_3 110
#define DEBUGGING_LABEL_27_2 109
#define OBJECT_27_15 108
#define OBJECT_27_14 107
#define OBJECT_27_13 106
#define OBJECT_27_12 105
#define OBJECT_27_11 104
#define OBJECT_27_10 103
#define OBJECT_27_9 102
#define OBJECT_27_8 101
#define OBJECT_27_7 100
#define OBJECT_27_6 99
#define OBJECT_27_5 98
#define OBJECT_27_4 97
#define OBJECT_27_3 96
#define OBJECT_27_2 95
#define OBJECT_27_1 94
#define OBJECT_27_0 93
#define EXECUTE_CACHE_27_42 59
#define EXECUTE_CACHE_27_40 61
#define EXECUTE_CACHE_27_35 63
#define EXECUTE_CACHE_27_33 65
#define EXECUTE_CACHE_27_27 67
#define EXECUTE_CACHE_27_17 69
#define EXECUTE_CACHE_27_15 71
#define EXECUTE_CACHE_27_21 73
#define EXECUTE_CACHE_27_13 75
#define EXECUTE_CACHE_27_9 77
#define FREE_REFERENCE_27_6 80
#define FREE_REFERENCE_27_5 81
#define FREE_REFERENCE_27_4 82
#define FREE_REFERENCE_27_3 83
#define FREE_REFERENCE_27_2 84
#define FREE_REFERENCE_27_1 85
#define FREE_REFERENCE_27_0 86
#define FREE_ASSIGNMENT_27_4 88
#define FREE_ASSIGNMENT_27_3 89
#define FREE_ASSIGNMENT_27_2 90
#define FREE_ASSIGNMENT_27_1 91
#define FREE_ASSIGNMENT_27_0 92
#define FREE_REFERENCES_LABEL_27_0 58
#define NUMBER_OF_LINKER_SECTIONS_27_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rfc2822_headers_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_27_4);
      goto initialize_packageB_16;

    case 1:
      current_block = (Rpc - LABEL_27_7);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_27_10);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_27_14);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_27_16);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_27_18);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_27_12);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_27_22);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_27_19);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_27_23);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_27_26);
      goto label_25;

    case 15:
      current_block = (Rpc - LABEL_27_20);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_27_28);
      goto label_26;

    case 17:
      current_block = (Rpc - LABEL_27_24);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_27_29);
      goto label_27;

    case 19:
      current_block = (Rpc - LABEL_27_31);
      goto label_28;

    case 20:
      current_block = (Rpc - LABEL_27_32);
      goto label_29;

    case 21:
      current_block = (Rpc - LABEL_27_25);
      goto lambda_10;

    case 22:
      current_block = (Rpc - LABEL_27_30);
      goto continuation_12;

    case 23:
      current_block = (Rpc - LABEL_27_38);
      goto label_30;

    case 24:
      current_block = (Rpc - LABEL_27_34);
      goto continuation_7;

    case 25:
      current_block = (Rpc - LABEL_27_36);
      goto lambda_34;

    case 26:
      current_block = (Rpc - LABEL_27_39);
      goto continuation_8;

    case 27:
      current_block = (Rpc - LABEL_27_41);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_32)
DEFLABEL (initialize_packageB_16)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_65;
  Wrd11 = Wrd15;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_8);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_63;
  Wrd5 = Wrd9;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_61;
  Wrd5 = Wrd9;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_57)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_27_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_27_3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_27_4]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_12);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_56;
  Wrd5 = Wrd9;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_54;

DEFLABEL (label_53)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_52)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_27_5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_27_6]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_27_7]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_27_8]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_27_20);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_51;
  Wrd5 = Wrd9;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_19);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_49;

DEFLABEL (label_48)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_47)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_27_9]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_3]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_46;
  Wrd24 = Wrd28;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_27_10]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_27_24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_42)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_30]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_5]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_41;
  Wrd21 = Wrd25;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_27_11]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_6]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_39;
  Wrd28 = Wrd32;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_33]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27_30);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x3fc, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_36])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_4]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  ((Wrd11.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_27_13]);
  goto pop_return;

DEFLABEL (label_37)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_36;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_38])), (Wrd11.pObj), (Wrd6.Obj));

DEFLABEL (label_30)
  goto label_35;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_32])), (Wrd29.pObj));

DEFLABEL (label_29)
  (Wrd28.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_31])), (Wrd22.pObj));

DEFLABEL (label_28)
  (Wrd21.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_44)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_29])), (Wrd6.pObj), Rvl);

DEFLABEL (label_27)
  goto label_42;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_26])), (Wrd25.pObj));

DEFLABEL (label_25)
  (Wrd24.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_49)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_48;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_23])), (Wrd6.pObj), Rvl);

DEFLABEL (label_24)
  goto label_47;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_28])), (Wrd6.pObj));

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_54)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_53;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_18])), (Wrd6.pObj), Rvl);

DEFLABEL (label_22)
  goto label_52;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_22])), (Wrd6.pObj));

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_59)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_19)
  goto label_57;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_14])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_16])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_7])), (Wrd12.pObj));

DEFLABEL (label_18)
  (Wrd11.Obj) = Rvl;
  goto label_64;

DEFLABEL (lambda_33)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_27_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_35]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_27_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_40]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_27_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_40]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_27_41);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_42]));

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_27_36);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_10 7
#define LABEL_6 9
#define LABEL_8 11
#define LABEL_14 13
#define LABEL_9 15
#define LABEL_12 17
#define LABEL_18 19
#define LABEL_13 21
#define LABEL_16 23
#define LABEL_22 25
#define LABEL_17 27
#define LABEL_20 29
#define LABEL_21 31
#define LABEL_23 33
#define LABEL_25 35
#define LABEL_26 37
#define LABEL_28 39
#define LABEL_30 41
#define LABEL_31 43
#define LABEL_32 45
#define ENVIRONMENT_LABEL_3 84
#define DEBUGGING_LABEL_2 83
#define PURIFICATION_ROOT 82
#define OBJECT_17 81
#define OBJECT_16 80
#define OBJECT_15 79
#define OBJECT_14 78
#define OBJECT_13 77
#define OBJECT_12 76
#define OBJECT_11 75
#define OBJECT_10 74
#define OBJECT_9 73
#define OBJECT_8 72
#define OBJECT_7 71
#define OBJECT_6 70
#define OBJECT_5 69
#define OBJECT_4 68
#define OBJECT_3 67
#define OBJECT_2 66
#define OBJECT_1 65
#define OBJECT_0 64
#define EXECUTE_CACHE_29 47
#define EXECUTE_CACHE_27 49
#define EXECUTE_CACHE_19 51
#define EXECUTE_CACHE_15 53
#define EXECUTE_CACHE_11 55
#define EXECUTE_CACHE_7 57
#define FREE_REFERENCE_0 60
#define GLOBAL_EXECUTE_CACHE_24 62
#define FREE_REFERENCES_LABEL_0 46
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rfc2822_headers_so_002c154e0674395d (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_10);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_14);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_18);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_22);
      goto label_19;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto continuation_13;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_28);
      goto label_20;

    case 19:
      current_block = (Rpc - LABEL_30);
      goto label_23;

    case 20:
      current_block = (Rpc - LABEL_31);
      goto label_24;

    case 21:
      current_block = (Rpc - LABEL_32);
      goto expression_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_15)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_31])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_24)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_23)
  {
    static const short sections [] =
      {
	0,
	3,
	2,
	2,
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
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 27)
      goto label_22;
    blocks = (current_block [OBJECT_17]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_30])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_22)
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_34;
  Wrd12 = Wrd16;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_32;
  Wrd11 = Wrd15;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_30;
  Wrd12 = Wrd16;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_28;
  Wrd12 = Wrd16;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_26;
  Wrd5 = Wrd9;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_16]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_24]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd13.pObj));

DEFLABEL (label_19)
  (Wrd12.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd13.pObj));

DEFLABEL (label_18)
  (Wrd12.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd12.pObj));

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd13.pObj));

DEFLABEL (label_16)
  (Wrd12.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rfc2822_headers_so_002c154e0674395d [27] =
  {
    { "rfc2822_headers_so_code_1", 3, rfc2822_headers_so_code_1 },
    { "rfc2822_headers_so_code_2", 2, rfc2822_headers_so_code_2 },
    { "rfc2822_headers_so_code_3", 1, rfc2822_headers_so_code_3 },
    { "rfc2822_headers_so_code_4", 2, rfc2822_headers_so_code_4 },
    { "rfc2822_headers_so_code_5", 4, rfc2822_headers_so_code_5 },
    { "rfc2822_headers_so_code_6", 2, rfc2822_headers_so_code_6 },
    { "rfc2822_headers_so_code_7", 1, rfc2822_headers_so_code_7 },
    { "rfc2822_headers_so_code_8", 2, rfc2822_headers_so_code_8 },
    { "rfc2822_headers_so_code_9", 2, rfc2822_headers_so_code_9 },
    { "rfc2822_headers_so_code_10", 1, rfc2822_headers_so_code_10 },
    { "rfc2822_headers_so_code_11", 5, rfc2822_headers_so_code_11 },
    { "rfc2822_headers_so_code_12", 2, rfc2822_headers_so_code_12 },
    { "rfc2822_headers_so_code_13", 4, rfc2822_headers_so_code_13 },
    { "rfc2822_headers_so_code_14", 4, rfc2822_headers_so_code_14 },
    { "rfc2822_headers_so_code_15", 2, rfc2822_headers_so_code_15 },
    { "rfc2822_headers_so_code_16", 4, rfc2822_headers_so_code_16 },
    { "rfc2822_headers_so_code_17", 6, rfc2822_headers_so_code_17 },
    { "rfc2822_headers_so_code_18", 12, rfc2822_headers_so_code_18 },
    { "rfc2822_headers_so_code_19", 2, rfc2822_headers_so_code_19 },
    { "rfc2822_headers_so_code_20", 3, rfc2822_headers_so_code_20 },
    { "rfc2822_headers_so_code_21", 9, rfc2822_headers_so_code_21 },
    { "rfc2822_headers_so_code_22", 17, rfc2822_headers_so_code_22 },
    { "rfc2822_headers_so_code_23", 4, rfc2822_headers_so_code_23 },
    { "rfc2822_headers_so_code_24", 4, rfc2822_headers_so_code_24 },
    { "rfc2822_headers_so_code_25", 14, rfc2822_headers_so_code_25 },
    { "rfc2822_headers_so_code_26", 30, rfc2822_headers_so_code_26 },
    { "rfc2822_headers_so_code_27", 28, rfc2822_headers_so_code_27 }
  };

int
decl_rfc2822_headers_so_002c154e0674395d (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rfc2822_headers_so_002c154e0674395d);
  return (0);
}

DECLARE_COMPILED_CODE ("rfc2822-headers.so", 22, decl_rfc2822_headers_so_002c154e0674395d, rfc2822_headers_so_002c154e0674395d)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rfc2822_headers_so_data_002c154e0674395d [4762] =
  "\x8c\x01\x3d\xd0\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x28"
  "\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbd\x1d\xb0\x82\x88\x1d\x28\x0d\xbe\x28\x0d\xbf\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x06\x1d\x0c\x28\x0d"
  "\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x08\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0d\x0d\x1c"
  "\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1d\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d"
  "\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\xc2\x1c\x80\xc1\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\xb6\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c"
  "\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x1d\x1b\x80\x1b\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x0c\x0f\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x28\xb1\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0f\x1d\x1b\x1b\x0c\x1b\x80\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x0f\x0d\x0c\x0d\x1c\x1b\x24\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0f\x0f\x1b\x1b\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x1d\x0c\x0d\x1b"
  "\x1b\x08\x8a\x0d\x1b\x1b\x08\x89\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f"
  "\x0f\x1b\x1b\x1b\x0d\x1c\x1b\x25\x0d\x0d\x0d\x0d\x1b\x0d\x1b\x24"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1b\x1b\x1b\x1b\x1b"
  "\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b"
  "\x1b\xb3\x1b\x1b\xb2\x1b\x17\x0d\x1b\x2a\x1b\xb7\x0d\x99\x1b\x2a"
  "\x1b\x2a\x99\x1b\x0d\x1c\xb6\x0d\x1c\xb4\x0d\x1c\x1b\x1b\x08\x89"
  "\xc3\xb1\xb5\x2a\x28\x0d\x26\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x5e\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x72\x66\x63\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x73\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x14\x6d\x61\x6b\x65\x2d\x72"
  "\x66\x63\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x04\x16\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x68\x65\x61\x64\x65\x72\x2d"
  "\x6e\x61\x6d\x65\x04\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x68\x65\x61\x64\x65\x72\x2d\x76\x61\x6c\x75\x65\x04\x0c\x6d\x61"
  "\x6b\x65\x2d\x68\x65\x61\x64\x65\x72\x04\x19\x08\x81\x85\x02\x18"
  "\x06\x81\x85\x02\x17\x04\x84\x06\x07\x12\x02\x02\x03\x10\x72\x66"
  "\x63\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x3f\x04\x19\x65"
  "\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x72\x66\x63\x32\x38\x32\x32"
  "\x2d\x68\x65\x61\x64\x65\x72\x03\x1b\x06\x81\x85\x02\x1a\x04\x84"
  "\x04\x05\x0e\x09\x02\x08\x16\x52\x46\x43\x20\x32\x38\x32\x32\x20"
  "\x68\x65\x61\x64\x65\x72\x20\x66\x69\x65\x6c\x64\x05\x1a\x65\x72"
  "\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61"
  "\x72\x67\x75\x6d\x65\x6e\x74\x0a\x02\x1c\x04\x84\x04\x03\x0c\x0b"
  "\x02\x03\x14\x72\x66\x63\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65"
  "\x72\x2d\x6e\x61\x6d\x65\x0c\x02\x1e\x06\x81\x83\x02\x1d\x04\x83"
  "\x04\x05\x0c\x0d\x02\x01\x16\x63\x68\x61\x72\x2d\x73\x65\x74\x3a"
  "\x72\x66\x63\x32\x38\x32\x32\x2d\x6e\x61\x6d\x65\x0e\x02\x03\x11"
  "\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x3f"
  "\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\x0f\x04\x14"
  "\x73\x74\x72\x69\x6e\x67\x2d\x69\x6e\x2d\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x3f\x10\x04\x22\x0a\x81\x85\x02\x21\x08\x81\x83\x02\x20"
  "\x06\x81\x83\x02\x1f\x04\x83\x04\x09\x16\x11\x02\x02\x03\x0d\x68"
  "\x65\x61\x64\x65\x72\x2d\x6e\x61\x6d\x65\x3f\x12\x04\x16\x65\x72"
  "\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x68\x65\x61\x64\x65\x72\x2d\x6e"
  "\x61\x6d\x65\x13\x03\x24\x06\x81\x85\x02\x23\x04\x84\x04\x05\x0e"
  "\x14\x02\x08\x08\x1b\x52\x46\x43\x20\x32\x38\x32\x32\x20\x68\x65"
  "\x61\x64\x65\x72\x2d\x66\x69\x65\x6c\x64\x20\x6e\x61\x6d\x65\x05"
  "\x0a\x02\x25\x04\x84\x04\x03\x0c\x15\x02\x09\x16\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\x3a\x72\x66\x63\x32\x38\x32\x32\x2d\x74\x65\x78"
  "\x74\x16\x02\x04\x10\x02\x27\x06\x81\x85\x02\x26\x04\x83\x04\x05"
  "\x0d\x17\x02\x0a\x02\x03\x0e\x68\x65\x61\x64\x65\x72\x2d\x76\x61"
  "\x6c\x75\x65\x3f\x18\x04\x17\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74"
  "\x2d\x68\x65\x61\x64\x65\x72\x2d\x76\x61\x6c\x75\x65\x19\x03\x29"
  "\x06\x81\x85\x02\x28\x04\x84\x04\x05\x0e\x1a\x02\x0b\x08\x1c\x52"
  "\x46\x43\x20\x32\x38\x32\x32\x20\x68\x65\x61\x64\x65\x72\x2d\x66"
  "\x69\x65\x6c\x64\x20\x76\x61\x6c\x75\x65\x05\x0a\x02\x2a\x04\x84"
  "\x04\x03\x0c\x0a\x02\x0c\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65"
  "\x66\x1b\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x1c\x04\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x6d\x65\x6d\x62"
  "\x65\x72\x3f\x1d\x02\x2f\x0c\x81\x89\x02\x2e\x0a\x81\x8b\x02\x2d"
  "\x08\x81\x89\x02\x2c\x06\x81\x85\x02\x2b\x04\x84\x06\x0b\x15\x1e"
  "\x02\x0d\x1f\x6c\x69\x73\x74\x20\x6f\x66\x20\x52\x46\x43\x20\x32"
  "\x38\x32\x32\x20\x68\x65\x61\x64\x65\x72\x20\x66\x69\x65\x6c\x64"
  "\x73\x02\x06\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6c\x69"
  "\x73\x74\x2d\x6f\x66\x2d\x74\x79\x70\x65\x02\x31\x06\x81\x85\x02"
  "\x30\x04\x84\x04\x05\x0e\x1f\x02\x0e\x15\x66\x69\x72\x73\x74\x2d"
  "\x72\x66\x63\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x20\x04"
  "\x1a\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x72\x66\x63\x32\x38"
  "\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x73\x21\x04\x05\x66\x69\x6e"
  "\x64\x03\x0c\x04\x35\x0a\x81\x85\x02\x34\x08\x81\x85\x02\x33\x06"
  "\x81\x85\x02\x32\x04\x84\x06\x09\x15\x22\x02\x0f\x14\x61\x6c\x6c"
  "\x2d\x72\x66\x63\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x73"
  "\x23\x04\x21\x04\x07\x66\x69\x6c\x74\x65\x72\x03\x0c\x04\x39\x0a"
  "\x81\x85\x02\x38\x08\x81\x85\x02\x37\x06\x81\x85\x02\x36\x04\x84"
  "\x06\x09\x15\x24\x02\x10\x03\x18\x63\x61\x6c\x6c\x2d\x77\x69\x74"
  "\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x25"
  "\x04\x16\x77\x72\x69\x74\x65\x2d\x72\x66\x63\x32\x38\x32\x32\x2d"
  "\x68\x65\x61\x64\x65\x72\x73\x26\x03\x3b\x06\x81\x85\x02\x3a\x04"
  "\x83\x04\x05\x0d\x27\x02\x11\x26\x04\x21\x04\x09\x66\x6f\x72\x2d"
  "\x65\x61\x63\x68\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65\x28\x04\x0d"
  "\x77\x72\x69\x74\x65\x2d\x68\x65\x61\x64\x65\x72\x29\x05\x3f\x0a"
  "\x81\x85\x02\x3e\x08\x81\x85\x02\x3d\x06\x81\x85\x02\x3c\x04\x84"
  "\x06\x09\x16\x2a\x02\x12\x03\x3a\x20\x03\x0c\x04\x0d\x77\x72\x69"
  "\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x2b\x04\x0b\x77\x72\x69\x74"
  "\x65\x2d\x6e\x61\x6d\x65\x2c\x03\x15\x72\x66\x63\x32\x38\x32\x32"
  "\x2d\x68\x65\x61\x64\x65\x72\x2d\x76\x61\x6c\x75\x65\x2d\x03\x28"
  "\x06\x45\x0e\x81\x89\x02\x44\x0c\x81\x85\x02\x43\x0a\x81\x85\x02"
  "\x42\x08\x81\x89\x02\x41\x06\x81\x85\x02\x40\x04\x84\x06\x0d\x1c"
  "\x28\x02\x13\x01\x2e\x02\x1b\x1c\x03\x0f\x03\x11\x63\x68\x61\x72"
  "\x2d\x61\x6c\x70\x68\x61\x62\x65\x74\x69\x63\x3f\x04\x2b\x04\x0b"
  "\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x0f\x03\x0c\x63\x68\x61"
  "\x72\x2d\x75\x70\x63\x61\x73\x65\x06\x51\x1a\x81\x89\x02\x50\x18"
  "\x81\x85\x02\x4f\x16\x81\x89\x02\x4e\x14\x81\x8b\x02\x4d\x12\x81"
  "\x85\x02\x4c\x10\x81\x87\x02\x4b\x0e\x81\x85\x02\x4a\x0c\x81\x89"
  "\x02\x49\x0a\x81\x8b\x02\x48\x08\x81\x87\x02\x47\x06\x81\x85\x02"
  "\x46\x04\x84\x06\x19\x2c\x2e\x02\x14\x15\x72\x65\x61\x64\x2d\x72"
  "\x66\x63\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x73\x2f\x02"
  "\x04\x17\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x69\x6e\x70\x75"
  "\x74\x2d\x73\x74\x72\x69\x6e\x67\x02\x53\x06\x81\x85\x02\x52\x04"
  "\x83\x04\x05\x0d\x30\x02\x15\x03\x14\x72\x65\x61\x64\x2d\x72\x66"
  "\x63\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x31\x03\x09\x72"
  "\x65\x76\x65\x72\x73\x65\x21\x03\x56\x08\x81\x85\x02\x55\x06\x81"
  "\x85\x02\x54\x04\x83\x04\x07\x10\x32\x02\x16\x1c\x1f\x4d\x69\x73"
  "\x73\x69\x6e\x67\x20\x63\x6f\x6c\x6f\x6e\x20\x69\x6e\x20\x68\x65"
  "\x61\x64\x65\x72\x20\x66\x69\x65\x6c\x64\x3a\x01\x3b\x03\x19\x72"
  "\x65\x61\x64\x2d\x72\x66\x63\x32\x38\x32\x32\x2d\x66\x6f\x6c\x64"
  "\x65\x64\x2d\x6c\x69\x6e\x65\x33\x04\x16\x73\x74\x72\x69\x6e\x67"
  "\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x63\x68\x61\x72\x05"
  "\x0c\x70\x61\x72\x73\x65\x2d\x65\x72\x72\x6f\x72\x34\x05\x0e\x73"
  "\x6b\x69\x70\x2d\x77\x73\x70\x2d\x6c\x65\x66\x74\x35\x04\x0c\x73"
  "\x74\x72\x69\x6e\x67\x2d\x68\x65\x61\x64\x05\x0a\x73\x75\x62\x73"
  "\x74\x72\x69\x6e\x67\x04\x03\x07\x69\x6e\x74\x65\x72\x6e\x09\x5f"
  "\x14\x81\x89\x02\x5e\x12\x81\x87\x02\x5d\x10\x81\x83\x02\x5c\x0e"
  "\x81\x87\x02\x5b\x0c\x81\x89\x02\x5a\x0a\x81\x85\x02\x59\x08\x81"
  "\x87\x02\x58\x06\x81\x83\x02\x57\x04\x83\x04\x13\x2a\x36\x02\x17"
  "\x0f\x50\x72\x65\x6d\x61\x74\x75\x72\x65\x20\x45\x4f\x46\x3a\x01"
  "\x21\x02\x1c\x33\x1d\x55\x6e\x6d\x61\x74\x63\x68\x65\x64\x20\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x20\x6c\x69\x6e\x65"
  "\x3a\x1b\x03\x0a\x72\x65\x61\x64\x2d\x6c\x69\x6e\x65\x03\x0d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x6e\x75\x6c\x6c\x3f\x03\x0a\x63\x68\x61"
  "\x72\x2d\x77\x73\x70\x3f\x1c\x03\x25\x05\x34\x05\x0f\x73\x6b\x69"
  "\x70\x2d\x77\x73\x70\x2d\x72\x69\x67\x68\x74\x37\x03\x0a\x70\x65"
  "\x65\x6b\x2d\x63\x68\x61\x72\x05\x35\x04\x0f\x03\x0c\x65\x6f\x66"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x38\x06\x10\x77\x72\x69\x74\x65"
  "\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x0c\x70\x24\x81\x87\x02"
  "\x6f\x22\x81\x83\x02\x6e\x20\x81\x83\x02\x6d\x1e\x81\x87\x02\x6c"
  "\x1c\x81\x85\x02\x6b\x1a\x81\x89\x02\x6a\x18\x81\x87\x02\x69\x16"
  "\x81\x89\x02\x68\x14\x81\x87\x02\x67\x12\x81\x8b\x02\x66\x10\x81"
  "\x87\x02\x65\x0e\x81\x85\x02\x64\x0c\x81\x85\x02\x63\x0a\x81\x87"
  "\x02\x62\x08\x81\x85\x02\x61\x06\x81\x83\x02\x60\x04\x83\x04\x23"
  "\x45\x39\x02\x18\x1b\x03\x1c\x02\x74\x0a\x81\x8b\x02\x73\x08\x81"
  "\x89\x02\x72\x06\x81\x89\x02\x71\x04\x85\x08\x09\x10\x3a\x02\x19"
  "\x1b\x03\x1c\x02\x78\x0a\x81\x8b\x02\x77\x08\x81\x89\x02\x76\x06"
  "\x81\x89\x02\x75\x04\x85\x08\x09\x10\x1c\x02\x1a\x01\x5d\x15\x71"
  "\x75\x6f\x74\x65\x2d\x72\x66\x63\x32\x38\x32\x32\x2d\x73\x74\x72"
  "\x69\x6e\x67\x02\x22\x17\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x72"
  "\x66\x63\x32\x38\x32\x32\x2d\x71\x74\x65\x78\x74\x1b\x16\x03\x02"
  "\x13\x6f\x70\x65\x6e\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x05\x12\x6f\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x3b\x03\x0a\x72\x65\x61\x64\x2d\x63\x68"
  "\x61\x72\x3c\x03\x38\x04\x1d\x03\x12\x67\x65\x74\x2d\x6f\x75\x74"
  "\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x05\x0e\x73\x74\x72\x69"
  "\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x04\x0f\x04\x19\x65\x72\x72"
  "\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x0a\x86\x01\x1e\x81\x8f\x02\x85\x01\x1c\x81"
  "\x8f\x02\x84\x01\x1a\x81\x8f\x02\x83\x01\x18\x81\x8f\x02\x82\x01"
  "\x16\x81\x93\x02\x81\x01\x14\x81\x8f\x02\x80\x01\x12\x81\x8f\x02"
  "\x7f\x10\x81\x93\x02\x7e\x0e\x81\x8f\x02\x7d\x0c\x81\x8d\x02\x7c"
  "\x0a\x81\x8d\x02\x7b\x08\x81\x89\x02\x7a\x06\x81\x87\x02\x79\x04"
  "\x85\x04\x1d\x3a\x1d\x02\x1b\x02\x01\x5d\x01\x23\x1b\x16\x03\x03"
  "\x1a\x67\x65\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66"
  "\x65\x72\x2d\x70\x6f\x69\x6e\x74\x65\x72\x04\x19\x6d\x61\x74\x63"
  "\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d"
  "\x63\x68\x61\x72\x04\x1b\x73\x65\x74\x2d\x70\x61\x72\x73\x65\x72"
  "\x2d\x62\x75\x66\x66\x65\x72\x2d\x70\x6f\x69\x6e\x74\x65\x72\x21"
  "\x04\x20\x6d\x61\x74\x63\x68\x2d\x70\x61\x72\x73\x65\x72\x2d\x62"
  "\x75\x66\x66\x65\x72\x2d\x63\x68\x61\x72\x2d\x69\x6e\x2d\x73\x65"
  "\x74\x04\x17\x67\x65\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x62\x75"
  "\x66\x66\x65\x72\x2d\x74\x61\x69\x6c\x04\x0b\x76\x65\x63\x74\x6f"
  "\x72\x2d\x6d\x61\x70\x03\x25\x03\x3b\x03\x3c\x03\x38\x04\x0f\x0c"
  "\xa4\x01\x3e\x81\x89\x02\xa3\x01\x3c\x81\x89\x02\xa2\x01\x3a\x81"
  "\x8d\x02\xa1\x01\x38\x81\x87\x02\xa0\x01\x36\x81\x87\x02\x9f\x01"
  "\x34\x81\x85\x02\x9e\x01\x32\x81\x85\x02\x9d\x01\x30\x81\x85\x02"
  "\x9c\x01\x2e\x81\x85\x02\x9b\x01\x2c\x81\x83\x02\x9a\x01\x2a\x81"
  "\x83\x02\x99\x01\x28\x83\x04\x98\x01\x26\x81\x85\x02\x97\x01\x24"
  "\x81\x83\x02\x96\x01\x22\x81\x83\x02\x95\x01\x20\x81\x89\x02\x94"
  "\x01\x1e\x81\x83\x02\x93\x01\x1c\x81\x83\x02\x92\x01\x1a\x81\x8b"
  "\x02\x91\x01\x18\x81\x87\x02\x90\x01\x16\x81\x83\x02\x8f\x01\x14"
  "\x81\x85\x02\x8e\x01\x12\x81\x83\x02\x8d\x01\x10\x81\x85\x02\x8c"
  "\x01\x0e\x81\x83\x02\x8b\x01\x0c\x81\x85\x02\x8a\x01\x0a\x81\x85"
  "\x02\x89\x01\x08\x81\x85\x02\x88\x01\x06\x81\x83\x02\x87\x01\x04"
  "\x83\x04\x3d\x5d\x3c\x02\x1c\x0a\x69\x72\x72\x69\x74\x61\x6e\x74"
  "\x73\x3b\x08\x6d\x65\x73\x73\x61\x67\x65\x38\x02\x27\x45\x72\x72"
  "\x6f\x72\x20\x77\x68\x69\x6c\x65\x20\x70\x61\x72\x73\x69\x6e\x67"
  "\x20\x52\x46\x43\x20\x32\x38\x32\x32\x20\x68\x65\x61\x64\x65\x72"
  "\x73\x3a\x20\x05\x70\x6f\x72\x74\x38\x3b\x14\x72\x66\x63\x32\x38"
  "\x32\x32\x2d\x70\x61\x72\x73\x65\x2d\x65\x72\x72\x6f\x72\x38\x3b"
  "\x01\x0a\x01\x80\x01\x01\x5d\x01\x23\x01\x01\x01\x0b\x01\x0e\x01"
  "\x21\x01\x3b\x0e\x16\x1b\x23\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x74\x79\x70\x65\x3a\x72\x66\x63\x32\x38\x32\x32\x2d\x70\x61"
  "\x72\x73\x65\x2d\x65\x72\x72\x6f\x72\x3b\x34\x06\x14\x63\x68\x61"
  "\x72\x2d\x73\x65\x74\x3a\x75\x70\x70\x65\x72\x2d\x63\x61\x73\x65"
  "\x0f\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x61\x73\x63\x69\x69\x0e"
  "\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x63\x74\x6c\x73\x1a\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x70\x6f\x72"
  "\x74\x2d\x65\x72\x72\x6f\x72\x16\x17\x73\x74\x61\x6e\x64\x61\x72"
  "\x64\x2d\x65\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65\x72\x3b"
  "\x08\x04\x09\x63\x68\x61\x72\x2d\x73\x65\x74\x38\x05\x38\x07\x38"
  "\x04\x14\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x64\x69\x66\x66\x65"
  "\x72\x65\x6e\x63\x65\x05\x0f\x63\x68\x61\x72\x2d\x73\x65\x74\x2d"
  "\x75\x6e\x69\x6f\x6e\x06\x14\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x05\x14\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x73\x69\x67\x6e\x61\x6c\x6c\x65\x72\x04"
  "\x2b\x04\x11\x61\x63\x63\x65\x73\x73\x2d\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x05\x15\x66\x6f\x72\x6d\x61\x74\x2d\x65\x72\x72\x6f"
  "\x72\x2d\x6d\x65\x73\x73\x61\x67\x65\x0b\xc0\x01\x3a\x81\x87\x02"
  "\xbf\x01\x38\x81\x85\x02\xbe\x01\x36\x81\x89\x02\xbd\x01\x34\x81"
  "\x85\x02\xbc\x01\x32\x81\x81\x02\xbb\x01\x30\x81\x81\x02\xba\x01"
  "\x2e\x84\x06\xb9\x01\x2c\x81\x87\x02\xb8\x01\x2a\x81\x83\x02\xb7"
  "\x01\x28\x81\x81\x02\xb6\x01\x26\x81\x81\x02\xb5\x01\x24\x81\x85"
  "\x02\xb4\x01\x22\x81\x83\x02\xb3\x01\x20\x81\x87\x02\xb2\x01\x1e"
  "\x81\x81\x02\xb1\x01\x1c\x81\x81\x02\xb0\x01\x1a\x81\x85\x02\xaf"
  "\x01\x18\x81\x83\x02\xae\x01\x16\x81\x81\x02\xad\x01\x14\x81\x81"
  "\x02\xac\x01\x12\x81\x89\x02\xab\x01\x10\x81\x87\x02\xaa\x01\x0e"
  "\x81\x85\x02\xa9\x01\x0c\x81\x83\x02\xa8\x01\x0a\x81\x81\x02\xa7"
  "\x01\x08\x81\x81\x02\xa6\x01\x06\x81\x85\x02\xa5\x01\x04\x82\x02"
  "\x39\x6f\x38\x1c\x2b\x2b\x38\x04\x3c\x04\x1d\x04\x1c\x04\x3a\x04"
  "\x39\x04\x36\x04\x32\x04\x30\x04\x2e\x04\x28\x04\x2a\x04\x27\x04"
  "\x24\x04\x22\x04\x1f\x04\x1e\x04\x0a\x04\x1a\x04\x17\x04\x15\x04"
  "\x14\x04\x11\x04\x1d\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65"
  "\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x34\x3b\x1b\x16\x0e\x1d\x70"
  "\x61\x72\x73\x65\x72\x3a\x72\x66\x63\x32\x38\x32\x32\x2d\x71\x75"
  "\x6f\x74\x65\x64\x2d\x73\x74\x72\x69\x6e\x67\x13\x71\x75\x6f\x74"
  "\x65\x2d\x72\x66\x63\x32\x38\x32\x32\x2d\x74\x65\x78\x74\x37\x35"
  "\x33\x31\x2f\x18\x73\x74\x72\x69\x6e\x67\x2d\x3e\x72\x66\x63\x32"
  "\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x73\x2c\x29\x26\x18\x72"
  "\x66\x63\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x73\x2d\x3e"
  "\x73\x74\x72\x69\x6e\x67\x23\x20\x21\x10\x19\x18\x13\x12\x1d\x0f"
  "\x72\x66\x63\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x0d\x04"
  "\x2d\x19\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x72\x66\x63\x32"
  "\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x0b\x04\x09\x04\x0c\x06"
  "\x76\x61\x6c\x75\x65\x3c\x05\x6e\x61\x6d\x65\x3b\x11\x3c\x72\x66"
  "\x63\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x3e\x3a\x3b\x3c"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x3a\x02\x04\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x04\x13\x72\x65\x63\x6f\x72\x64"
  "\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x03\x11\x72\x65"
  "\x63\x6f\x72\x64\x2d\x70\x72\x65\x64\x69\x63\x61\x74\x65\x04\x10"
  "\x72\x65\x63\x6f\x72\x64\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x04"
  "\x17\x73\x69\x6d\x70\x6c\x65\x2d\x75\x6e\x70\x61\x72\x73\x65\x72"
  "\x2d\x6d\x65\x74\x68\x6f\x64\x04\x21\x73\x65\x74\x2d\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x75\x6e\x70\x61\x72\x73\x65"
  "\x72\x2d\x6d\x65\x74\x68\x6f\x64\x21\x07\x16\x2e\x80\x80\x04\x15"
  "\x2c\x81\x81\x02\x14\x2a\x81\x81\x02\x13\x28\x81\x87\x02\x12\x26"
  "\x81\x85\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81"
  "\x85\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x85\x02\x0c\x1a\x81\x89"
  "\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x89\x02"
  "\x08\x12\x81\x83\x02\x07\x10\x81\x85\x02\x06\x0e\x81\x87\x02\x05"
  "\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x89\x02\x02\x06"
  "\x81\x83\x02\x01\x04\x81\x83\x02\x2d\x55";

SCHEME_OBJECT *
rfc2822_headers_so_data_002c154e0674395d (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rfc2822_headers_so_data_002c154e0674395d [0]))), (sizeof (prog_rfc2822_headers_so_data_002c154e0674395d)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_32]));
}

DECLARE_COMPILED_DATA_NS ("rfc2822-headers.so", rfc2822_headers_so_data_002c154e0674395d)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rfc2822-headers.so", "d4a7fdc0dd4853ed")
