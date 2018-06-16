/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:22-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define OBJECT_1_2 10
#define OBJECT_1_1 9
#define OBJECT_1_0 8
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_1_4);
      goto rtl_set_invocation_continuationB_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_set_invocation_continuationB_7)
DEFLABEL (rtl_set_invocation_continuationB_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_12;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_11)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_10;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_8;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [0]) = (Wrd24.Obj);
  Rvl = (current_block [OBJECT_1_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_10)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 8
#define DEBUGGING_LABEL_2_2 7
#define OBJECT_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_2_4);
      goto rtl_interpreter_call_result_access_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_interpreter_call_result_access_4)
DEFLABEL (rtl_interpreter_call_result_access_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (Wrd9.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 8
#define DEBUGGING_LABEL_3_2 7
#define OBJECT_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_3_4);
      goto rtl_interpreter_call_result_cache_reference_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_interpreter_call_result_cache_reference_4)
DEFLABEL (rtl_interpreter_call_result_cache_reference_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (Wrd9.Obj) = (current_block [OBJECT_3_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 8
#define DEBUGGING_LABEL_4_2 7
#define OBJECT_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_4_4);
      goto rtl_interpreter_call_result_cache_unassignedP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_interpreter_call_result_cache_unassignedP_4)
DEFLABEL (rtl_interpreter_call_result_cache_unassignedP_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (Wrd9.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 8
#define DEBUGGING_LABEL_5_2 7
#define OBJECT_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_5_4);
      goto rtl_interpreter_call_result_lookup_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_interpreter_call_result_lookup_4)
DEFLABEL (rtl_interpreter_call_result_lookup_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (Wrd9.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_5_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define OBJECT_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_6_4);
      goto rtl_interpreter_call_result_unassignedP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_interpreter_call_result_unassignedP_4)
DEFLABEL (rtl_interpreter_call_result_unassignedP_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (Wrd9.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_6_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 8
#define DEBUGGING_LABEL_7_2 7
#define OBJECT_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_7_4);
      goto rtl_interpreter_call_result_unboundP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_interpreter_call_result_unboundP_4)
DEFLABEL (rtl_interpreter_call_result_unboundP_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (Wrd9.Obj) = (current_block [OBJECT_7_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_7_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 10
#define DEBUGGING_LABEL_8_2 9
#define OBJECT_8_2 8
#define OBJECT_8_1 7
#define OBJECT_8_0 6
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_8_4);
      goto rtl_locative_offsetP_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_offsetP_6)
DEFLABEL (rtl_locative_offsetP_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if (! ((Wrd6.uLng) == 1))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_10)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_8_1])))
    goto label_8;
  Rvl = (current_block [OBJECT_8_2]);
  goto label_7;

DEFLABEL (label_11)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define LABEL_9_8 11
#define ENVIRONMENT_LABEL_9_3 17
#define DEBUGGING_LABEL_9_2 16
#define OBJECT_9_3 15
#define OBJECT_9_2 14
#define OBJECT_9_1 13
#define OBJECT_9_0 12
#define FREE_REFERENCES_LABEL_9_0 12
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_9_4);
      goto rtl_locative_byte_offsetP_4;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_byte_offsetP_11)
DEFLABEL (rtl_locative_byte_offsetP_4)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_21)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_19)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_18;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_17)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_16;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_15)
  if ((Wrd28.Obj) == (current_block [OBJECT_9_2]))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_9_3]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_9)
  (Wrd28.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define ENVIRONMENT_LABEL_10_3 17
#define DEBUGGING_LABEL_10_2 16
#define OBJECT_10_3 15
#define OBJECT_10_2 14
#define OBJECT_10_1 13
#define OBJECT_10_0 12
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_10_4);
      goto rtl_locative_float_offsetP_4;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_float_offsetP_11)
DEFLABEL (rtl_locative_float_offsetP_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_21)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_19)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_18;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_17)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_16;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_15)
  if ((Wrd28.Obj) == (current_block [OBJECT_10_2]))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_10_3]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_9)
  (Wrd28.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_8 11
#define ENVIRONMENT_LABEL_11_3 17
#define DEBUGGING_LABEL_11_2 16
#define OBJECT_11_3 15
#define OBJECT_11_2 14
#define OBJECT_11_1 13
#define OBJECT_11_0 12
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_11_4);
      goto rtl_locative_object_offsetP_4;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_object_offsetP_11)
DEFLABEL (rtl_locative_object_offsetP_4)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_21)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_19)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_18;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_17)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_16;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_15)
  if ((Wrd28.Obj) == (current_block [OBJECT_11_2]))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_11_3]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_9)
  (Wrd28.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 8
#define DEBUGGING_LABEL_12_2 7
#define EXECUTE_CACHE_12_5 5
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto rtl_locative_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_offset_3)
DEFLABEL (rtl_locative_offset_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_5 7
#define LABEL_13_11 9
#define LABEL_13_12 11
#define LABEL_13_13 13
#define LABEL_13_14 15
#define LABEL_13_15 17
#define LABEL_13_16 19
#define LABEL_13_17 21
#define LABEL_13_19 23
#define LABEL_13_20 25
#define LABEL_13_21 27
#define LABEL_13_22 29
#define LABEL_13_23 31
#define LABEL_13_24 33
#define LABEL_13_25 35
#define LABEL_13_26 37
#define LABEL_13_27 39
#define LABEL_13_28 41
#define LABEL_13_29 43
#define LABEL_13_10 45
#define LABEL_13_31 47
#define LABEL_13_32 49
#define LABEL_13_8 51
#define ENVIRONMENT_LABEL_13_3 72
#define DEBUGGING_LABEL_13_2 71
#define OBJECT_13_7 70
#define OBJECT_13_6 69
#define OBJECT_13_5 68
#define OBJECT_13_4 67
#define OBJECT_13_3 66
#define OBJECT_13_2 65
#define OBJECT_13_1 64
#define OBJECT_13_0 63
#define EXECUTE_CACHE_13_30 53
#define EXECUTE_CACHE_13_18 55
#define EXECUTE_CACHE_13_9 57
#define EXECUTE_CACHE_13_6 59
#define FREE_REFERENCE_13_0 62
#define FREE_REFERENCES_LABEL_13_0 52
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd98;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd127;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd114;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd99;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd145;
  machine_word Wrd146;
  machine_word Wrd147;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd139;
  machine_word Wrd136;
  machine_word Wrd128;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd155;
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
      current_block = (Rpc - LABEL_13_4);
      goto rtl_locative_byte_offset_30;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_13_11);
      goto label_32;

    case 4:
      current_block = (Rpc - LABEL_13_12);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_13_13);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_13_14);
      goto label_35;

    case 7:
      current_block = (Rpc - LABEL_13_15);
      goto label_47;

    case 8:
      current_block = (Rpc - LABEL_13_16);
      goto label_48;

    case 9:
      current_block = (Rpc - LABEL_13_17);
      goto label_49;

    case 10:
      current_block = (Rpc - LABEL_13_19);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_13_20);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_13_21);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_13_22);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_13_23);
      goto label_43;

    case 15:
      current_block = (Rpc - LABEL_13_24);
      goto label_44;

    case 16:
      current_block = (Rpc - LABEL_13_25);
      goto label_45;

    case 17:
      current_block = (Rpc - LABEL_13_26);
      goto label_46;

    case 18:
      current_block = (Rpc - LABEL_13_27);
      goto label_40;

    case 19:
      current_block = (Rpc - LABEL_13_28);
      goto label_41;

    case 20:
      current_block = (Rpc - LABEL_13_29);
      goto label_42;

    case 21:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_26;

    case 22:
      current_block = (Rpc - LABEL_13_31);
      goto label_50;

    case 23:
      current_block = (Rpc - LABEL_13_32);
      goto label_51;

    case 24:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_byte_offset_53)
DEFLABEL (rtl_locative_byte_offset_30)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_57;
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (Wrd156.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd156.Obj);
  (Wrd157.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd157.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  Rvl = (Rsp [0]);
  goto label_54;

DEFLABEL (label_55)
  (Wrd12.Obj) = (current_block [OBJECT_13_3]);
  (Wrd13.Obj) = (current_block [OBJECT_13_6]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_13_7]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));

DEFLABEL (label_54)
DEFLABEL (label_56)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_100;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_99)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_98;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_97)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_96;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd29.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_95)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_94;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd36.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_93)
  if ((Wrd36.Obj) == (current_block [OBJECT_13_3]))
    goto label_86;
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_85;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_84)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_83;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_82)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_81;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd60.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_80)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_79;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd67.Obj) = ((Wrd68.pObj) [0]);

DEFLABEL (label_78)
  if ((Wrd67.Obj) == (current_block [OBJECT_13_4]))
    goto label_70;
  (Wrd75.Obj) = (current_block [OBJECT_13_5]);
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd79.Obj) = (Rsp [3]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_69;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd76.Obj) = ((Wrd78.pObj) [1]);

DEFLABEL (label_68)
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_67;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd85.Obj) = ((Wrd86.pObj) [1]);

DEFLABEL (label_66)
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_64;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (* (--Rsp)) = (Wrd93.Obj);

DEFLABEL (label_63)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_30]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_62)
  (Wrd152.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd152.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_18]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (Wrd8.Obj) = (current_block [OBJECT_13_3]);
  (Wrd9.Obj) = (current_block [OBJECT_13_6]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_61;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_60)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_59;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_58)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_13_7]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_32]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_51)
  (Wrd23.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_31]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_50)
  (Wrd14.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_64)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_29]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_42)
DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_67)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_28]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_41)
  (Wrd85.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_27]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_40)
  (Wrd76.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_70)
  (Wrd100.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd103.Obj) = ((Wrd100.pObj) [0]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if ((Wrd104.uLng) == 50)
    goto label_77;
  Wrd99 = Wrd103;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd108.Obj) = (Rsp [3]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 1))
    goto label_75;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd105.Obj) = ((Wrd107.pObj) [1]);

DEFLABEL (label_74)
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd116.uLng) == 1))
    goto label_73;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd114.Obj) = ((Wrd115.pObj) [1]);

DEFLABEL (label_72)
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd123.uLng) == 1))
    goto label_71;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (* (--Rsp)) = (Wrd122.Obj);
  goto label_63;

DEFLABEL (label_71)
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_26]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_46)
  goto label_65;

DEFLABEL (label_73)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_25]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_45)
  (Wrd114.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_44)
  (Wrd105.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_23])), (Wrd100.pObj));

DEFLABEL (label_43)
  (Wrd99.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_39)
  (Wrd67.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_38)
  (Wrd60.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_37)
  (Wrd53.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_36)
  (Wrd44.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_86)
  (Wrd131.Obj) = (Rsp [2]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd132.uLng) == 1))
    goto label_92;
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd128.Obj) = ((Wrd130.pObj) [1]);

DEFLABEL (label_91)
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd139.uLng) == 1))
    goto label_90;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd137.Obj) = ((Wrd138.pObj) [1]);

DEFLABEL (label_89)
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if (! ((Wrd147.uLng) == 1))
    goto label_88;
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd145.Obj) = ((Wrd146.pObj) [0]);

DEFLABEL (label_87)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd145.Obj);
  goto label_62;

DEFLABEL (label_88)
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_49)
  (Wrd145.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_48)
  (Wrd137.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_47)
  (Wrd128.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_35)
  (Wrd36.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_34)
  (Wrd29.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_33)
  (Wrd22.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_32)
  (Wrd13.Obj) = Rvl;
  goto label_99;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_8 9
#define LABEL_14_9 11
#define LABEL_14_10 13
#define LABEL_14_12 15
#define LABEL_14_13 17
#define LABEL_14_14 19
#define LABEL_14_16 21
#define LABEL_14_11 23
#define LABEL_14_17 25
#define LABEL_14_18 27
#define ENVIRONMENT_LABEL_14_3 39
#define DEBUGGING_LABEL_14_2 38
#define OBJECT_14_4 37
#define OBJECT_14_3 36
#define OBJECT_14_2 35
#define OBJECT_14_1 34
#define OBJECT_14_0 33
#define EXECUTE_CACHE_14_15 29
#define EXECUTE_CACHE_14_6 31
#define FREE_REFERENCES_LABEL_14_0 28
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_14_4);
      goto rtl_locative_float_offset_20;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_14_12);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_14_13);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_14_14);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_14_16);
      goto lambda_3;

    case 10:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_14_17);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_14_18);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_float_offset_32)
DEFLABEL (rtl_locative_float_offset_20)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;

DEFLABEL (label_34)
  goto lambda_3;

DEFLABEL (label_35)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_53;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_52)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_51;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_50)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_49;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_48)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_47;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_46)
  if (! ((Wrd30.Obj) == (current_block [OBJECT_14_2])))
    goto label_34;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_45;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_44)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_43;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd51.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_42)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_41;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_14_11);
  (Wrd8.Obj) = (current_block [OBJECT_14_2]);
  (Wrd9.Obj) = (current_block [OBJECT_14_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_39;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_38)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_37;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_36)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_30)
  (Wrd23.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_29)
  (Wrd14.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_27)
  (Wrd51.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_26)
  (Wrd42.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_25)
  (Wrd30.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_24)
  (Wrd23.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_23)
  (Wrd16.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_33)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_14_16);
  (Wrd8.Obj) = (current_block [OBJECT_14_2]);
  (Wrd9.Obj) = (current_block [OBJECT_14_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_9 9
#define LABEL_15_10 11
#define LABEL_15_11 13
#define LABEL_15_12 15
#define LABEL_15_14 17
#define LABEL_15_15 19
#define LABEL_15_16 21
#define LABEL_15_13 23
#define LABEL_15_19 25
#define LABEL_15_20 27
#define ENVIRONMENT_LABEL_15_3 45
#define DEBUGGING_LABEL_15_2 44
#define OBJECT_15_6 43
#define OBJECT_15_5 42
#define OBJECT_15_4 41
#define OBJECT_15_3 40
#define OBJECT_15_2 39
#define OBJECT_15_1 38
#define OBJECT_15_0 37
#define EXECUTE_CACHE_15_18 29
#define EXECUTE_CACHE_15_17 31
#define EXECUTE_CACHE_15_8 33
#define EXECUTE_CACHE_15_6 35
#define FREE_REFERENCES_LABEL_15_0 28
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd38;
  machine_word Wrd65;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_15_4);
      goto rtl_locative_object_offset_19;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_15_12);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_15_14);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_15_15);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_15_16);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_15_13);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_15_19);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_15_20);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_object_offset_31)
DEFLABEL (rtl_locative_object_offset_19)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd69.Obj) = (current_block [OBJECT_15_1]);
  (Wrd70.Obj) = (current_block [OBJECT_15_2]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd74.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd74.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Wrd78.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (Wrd83.Obj) = (current_block [OBJECT_15_3]);
  (* (Rhp++)) = (Wrd83.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_52;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_51)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_50;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_49)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_48;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_47)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_46;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_45)
  if ((Wrd30.Obj) == (current_block [OBJECT_15_1]))
    goto label_34;
  (Wrd38.Obj) = (current_block [OBJECT_15_6]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_18]));

DEFLABEL (label_34)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_44;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_43)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_42;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd52.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_41)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_40;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_17]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_15_13);
  (Wrd8.Obj) = (current_block [OBJECT_15_1]);
  (Wrd9.Obj) = (current_block [OBJECT_15_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_38;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_37)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_36;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_35)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_15_3]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_20]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_29)
  (Wrd23.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_28)
  (Wrd14.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_26)
  (Wrd52.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_25)
  (Wrd43.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_22)
  (Wrd16.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 10
#define DEBUGGING_LABEL_16_2 9
#define OBJECT_16_2 8
#define OBJECT_16_1 7
#define OBJECT_16_0 6
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_16_4);
      goto rtl_locative_indexP_2;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_indexP_6)
DEFLABEL (rtl_locative_indexP_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if (! ((Wrd6.uLng) == 1))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_10)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_16_1])))
    goto label_8;
  Rvl = (current_block [OBJECT_16_2]);
  goto label_7;

DEFLABEL (label_11)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define LABEL_17_8 11
#define ENVIRONMENT_LABEL_17_3 17
#define DEBUGGING_LABEL_17_2 16
#define OBJECT_17_3 15
#define OBJECT_17_2 14
#define OBJECT_17_1 13
#define OBJECT_17_0 12
#define FREE_REFERENCES_LABEL_17_0 12
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_17_4);
      goto rtl_locative_byte_indexP_4;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_17_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_byte_indexP_11)
DEFLABEL (rtl_locative_byte_indexP_4)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_21)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_19)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_18;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_17)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_16;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_15)
  if ((Wrd28.Obj) == (current_block [OBJECT_17_2]))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_17_3]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_9)
  (Wrd28.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define LABEL_18_8 11
#define ENVIRONMENT_LABEL_18_3 17
#define DEBUGGING_LABEL_18_2 16
#define OBJECT_18_3 15
#define OBJECT_18_2 14
#define OBJECT_18_1 13
#define OBJECT_18_0 12
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_18_4);
      goto rtl_locative_float_indexP_4;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_float_indexP_11)
DEFLABEL (rtl_locative_float_indexP_4)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_21)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_19)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_18;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_17)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_16;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_15)
  if ((Wrd28.Obj) == (current_block [OBJECT_18_2]))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_18_3]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_9)
  (Wrd28.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define LABEL_19_8 11
#define ENVIRONMENT_LABEL_19_3 17
#define DEBUGGING_LABEL_19_2 16
#define OBJECT_19_3 15
#define OBJECT_19_2 14
#define OBJECT_19_1 13
#define OBJECT_19_0 12
#define FREE_REFERENCES_LABEL_19_0 12
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_19_4);
      goto rtl_locative_object_indexP_4;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_object_indexP_11)
DEFLABEL (rtl_locative_object_indexP_4)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_21)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_19)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_18;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_17)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_16;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_15)
  if ((Wrd28.Obj) == (current_block [OBJECT_19_2]))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_19_3]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_9)
  (Wrd28.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define OBJECT_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_20_4);
      goto rtl_locative_byte_index_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_byte_index_6)
DEFLABEL (rtl_locative_byte_index_3)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (Wrd9.Obj) = (current_block [OBJECT_20_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_20_2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 8
#define DEBUGGING_LABEL_21_2 7
#define OBJECT_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_21_4);
      goto rtl_locative_float_index_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_float_index_6)
DEFLABEL (rtl_locative_float_index_3)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (Wrd9.Obj) = (current_block [OBJECT_21_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_21_2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 8
#define DEBUGGING_LABEL_22_2 7
#define OBJECT_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_22_4);
      goto rtl_locative_object_index_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_locative_object_index_6)
DEFLABEL (rtl_locative_object_index_3)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (Wrd9.Obj) = (current_block [OBJECT_22_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_22_2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 7
#define DEBUGGING_LABEL_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_23_4);
      goto rtl_make_address_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_address_4)
DEFLABEL (rtl_make_address_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_23_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 7
#define DEBUGGING_LABEL_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_24_4);
      goto rtl_make_environment_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_environment_4)
DEFLABEL (rtl_make_environment_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_24_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 7
#define DEBUGGING_LABEL_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_25_4);
      goto rtl_make_cell_cons_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_cell_cons_4)
DEFLABEL (rtl_make_cell_cons_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_25_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
rtlty2_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_26_4);
      goto rtl_make_fetch_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_fetch_4)
DEFLABEL (rtl_make_fetch_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_26_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_26_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
rtlty2_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_27_4);
      goto rtl_make_typed_cons_pair_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_typed_cons_pair_6)
DEFLABEL (rtl_make_typed_cons_pair_3)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_27_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 6
#define DEBUGGING_LABEL_28_2 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_28_4);
      goto rtl_make_typed_cons_vector_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_typed_cons_vector_4)
DEFLABEL (rtl_make_typed_cons_vector_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_28_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 7
#define DEBUGGING_LABEL_29_2 6
#define OBJECT_29_1 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_29_4);
      goto rtl_make_typed_cons_procedure_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_typed_cons_procedure_4)
DEFLABEL (rtl_make_typed_cons_procedure_1)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 7
#define DEBUGGING_LABEL_30_2 6
#define OBJECT_30_1 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_30_4);
      goto rtl_make_jump_statement_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_jump_statement_4)
DEFLABEL (rtl_make_jump_statement_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_30_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_30_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 7
#define DEBUGGING_LABEL_31_2 6
#define OBJECT_31_1 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_31_4);
      goto rtl_make_jumpc_statement_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_jumpc_statement_5)
DEFLABEL (rtl_make_jumpc_statement_2)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_31_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_31_1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 7
#define DEBUGGING_LABEL_32_2 6
#define OBJECT_32_1 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_32_4);
      goto rtl_make_label_statement_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_label_statement_4)
DEFLABEL (rtl_make_label_statement_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_32_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_32_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 7
#define DEBUGGING_LABEL_33_2 6
#define OBJECT_33_1 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_33_4);
      goto rtl_negate_predicate_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_negate_predicate_4)
DEFLABEL (rtl_negate_predicate_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_33_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_33_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 8
#define DEBUGGING_LABEL_34_2 7
#define EXECUTE_CACHE_34_5 5
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto stack_locative_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_locative_offset_3)
DEFLABEL (stack_locative_offset_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define ENVIRONMENT_LABEL_35_3 16
#define DEBUGGING_LABEL_35_2 15
#define OBJECT_35_4 14
#define OBJECT_35_3 13
#define OBJECT_35_2 12
#define OBJECT_35_1 11
#define OBJECT_35_0 10
#define FREE_REFERENCE_35_0 9
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_35_4);
      goto stack_push_address_3;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_push_address_8)
DEFLABEL (stack_push_address_3)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_9)
  (Wrd28.Obj) = (current_block [OBJECT_35_2]);
  (Wrd29.Obj) = (current_block [OBJECT_35_3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_35_4]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_35_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_5])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define ENVIRONMENT_LABEL_36_3 15
#define DEBUGGING_LABEL_36_2 14
#define OBJECT_36_3 13
#define OBJECT_36_2 12
#define OBJECT_36_1 11
#define OBJECT_36_0 10
#define FREE_REFERENCE_36_0 9
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlty2_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_36_4);
      goto stack_pop_address_3;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_pop_address_8)
DEFLABEL (stack_pop_address_3)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_9)
  (Wrd28.Obj) = (current_block [OBJECT_36_0]);
  (Wrd29.Obj) = (current_block [OBJECT_36_2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_36_3]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_36_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_5])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5 3
#define LABEL_4 5
#define LABEL_7 7
#define LABEL_6 9
#define LABEL_9 11
#define LABEL_8 13
#define LABEL_11 15
#define LABEL_10 17
#define LABEL_13 19
#define LABEL_12 21
#define LABEL_15 23
#define LABEL_14 25
#define LABEL_17 27
#define LABEL_16 29
#define LABEL_18 31
#define LABEL_21 33
#define LABEL_20 35
#define LABEL_23 37
#define LABEL_22 39
#define LABEL_25 41
#define LABEL_24 43
#define LABEL_26 45
#define LABEL_28 47
#define LABEL_27 49
#define LABEL_30 51
#define LABEL_29 53
#define LABEL_32 55
#define LABEL_31 57
#define LABEL_33 59
#define LABEL_34 61
#define LABEL_35 63
#define ENVIRONMENT_LABEL_3 96
#define DEBUGGING_LABEL_2 95
#define PURIFICATION_ROOT 94
#define OBJECT_20 93
#define OBJECT_19 92
#define OBJECT_18 91
#define OBJECT_17 90
#define OBJECT_16 89
#define OBJECT_15 88
#define OBJECT_14 87
#define OBJECT_13 86
#define OBJECT_12 85
#define OBJECT_11 84
#define OBJECT_10 83
#define OBJECT_9 82
#define OBJECT_8 81
#define OBJECT_7 80
#define OBJECT_6 79
#define OBJECT_5 78
#define OBJECT_4 77
#define OBJECT_3 76
#define OBJECT_2 75
#define OBJECT_1 74
#define OBJECT_0 73
#define FREE_REFERENCE_4 65
#define FREE_REFERENCE_3 66
#define FREE_REFERENCE_2 67
#define FREE_REFERENCE_1 68
#define FREE_REFERENCE_0 69
#define GLOBAL_EXECUTE_CACHE_19 71
#define FREE_REFERENCES_LABEL_0 64
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rtlty2_so_ea3751b47fcaf0c9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5);
      goto label_17;

    case 1:
      current_block = (Rpc - LABEL_4);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_12);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_14);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_16);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_18);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto label_24;

    case 16:
      current_block = (Rpc - LABEL_20);
      goto continuation_8;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto label_25;

    case 18:
      current_block = (Rpc - LABEL_22);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto label_26;

    case 20:
      current_block = (Rpc - LABEL_24);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_11;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto label_27;

    case 23:
      current_block = (Rpc - LABEL_27);
      goto continuation_12;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto label_28;

    case 25:
      current_block = (Rpc - LABEL_29);
      goto continuation_13;

    case 26:
      current_block = (Rpc - LABEL_32);
      goto label_29;

    case 27:
      current_block = (Rpc - LABEL_31);
      goto continuation_14;

    case 28:
      current_block = (Rpc - LABEL_33);
      goto label_32;

    case 29:
      current_block = (Rpc - LABEL_34);
      goto label_33;

    case 30:
      current_block = (Rpc - LABEL_35);
      goto expression_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_16)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_34])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	2,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 36)
      goto label_31;
    blocks = (current_block [OBJECT_20]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_33])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_31)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_59;
  Wrd9 = Wrd13;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_57;
  Wrd8 = Wrd12;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_55;
  Wrd8 = Wrd12;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_53;
  Wrd8 = Wrd12;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_51;
  Wrd8 = Wrd12;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_49;
  Wrd8 = Wrd12;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_47;
  Wrd8 = Wrd12;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_45;
  Wrd8 = Wrd12;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_43;
  Wrd8 = Wrd12;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_41;
  Wrd8 = Wrd12;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_39;
  Wrd8 = Wrd12;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_37;
  Wrd8 = Wrd12;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_35;
  Wrd8 = Wrd12;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_19]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_19]));

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd9.pObj));

DEFLABEL (label_29)
  (Wrd8.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd9.pObj));

DEFLABEL (label_28)
  (Wrd8.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd9.pObj));

DEFLABEL (label_27)
  (Wrd8.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd9.pObj));

DEFLABEL (label_26)
  (Wrd8.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd9.pObj));

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd9.pObj));

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd9.pObj));

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5])), (Wrd10.pObj));

DEFLABEL (label_17)
  (Wrd9.Obj) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rtlty2_so_ea3751b47fcaf0c9 [36] =
  {
    { "rtlty2_so_code_1", 3, rtlty2_so_code_1 },
    { "rtlty2_so_code_2", 1, rtlty2_so_code_2 },
    { "rtlty2_so_code_3", 1, rtlty2_so_code_3 },
    { "rtlty2_so_code_4", 1, rtlty2_so_code_4 },
    { "rtlty2_so_code_5", 1, rtlty2_so_code_5 },
    { "rtlty2_so_code_6", 1, rtlty2_so_code_6 },
    { "rtlty2_so_code_7", 1, rtlty2_so_code_7 },
    { "rtlty2_so_code_8", 2, rtlty2_so_code_8 },
    { "rtlty2_so_code_9", 5, rtlty2_so_code_9 },
    { "rtlty2_so_code_10", 5, rtlty2_so_code_10 },
    { "rtlty2_so_code_11", 5, rtlty2_so_code_11 },
    { "rtlty2_so_code_12", 1, rtlty2_so_code_12 },
    { "rtlty2_so_code_13", 25, rtlty2_so_code_13 },
    { "rtlty2_so_code_14", 13, rtlty2_so_code_14 },
    { "rtlty2_so_code_15", 13, rtlty2_so_code_15 },
    { "rtlty2_so_code_16", 2, rtlty2_so_code_16 },
    { "rtlty2_so_code_17", 5, rtlty2_so_code_17 },
    { "rtlty2_so_code_18", 5, rtlty2_so_code_18 },
    { "rtlty2_so_code_19", 5, rtlty2_so_code_19 },
    { "rtlty2_so_code_20", 1, rtlty2_so_code_20 },
    { "rtlty2_so_code_21", 1, rtlty2_so_code_21 },
    { "rtlty2_so_code_22", 1, rtlty2_so_code_22 },
    { "rtlty2_so_code_23", 1, rtlty2_so_code_23 },
    { "rtlty2_so_code_24", 1, rtlty2_so_code_24 },
    { "rtlty2_so_code_25", 1, rtlty2_so_code_25 },
    { "rtlty2_so_code_26", 1, rtlty2_so_code_26 },
    { "rtlty2_so_code_27", 1, rtlty2_so_code_27 },
    { "rtlty2_so_code_28", 1, rtlty2_so_code_28 },
    { "rtlty2_so_code_29", 1, rtlty2_so_code_29 },
    { "rtlty2_so_code_30", 1, rtlty2_so_code_30 },
    { "rtlty2_so_code_31", 1, rtlty2_so_code_31 },
    { "rtlty2_so_code_32", 1, rtlty2_so_code_32 },
    { "rtlty2_so_code_33", 1, rtlty2_so_code_33 },
    { "rtlty2_so_code_34", 1, rtlty2_so_code_34 },
    { "rtlty2_so_code_35", 3, rtlty2_so_code_35 },
    { "rtlty2_so_code_36", 3, rtlty2_so_code_36 }
  };

int
decl_rtlty2_so_ea3751b47fcaf0c9 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rtlty2_so_ea3751b47fcaf0c9);
  return (0);
}

DECLARE_COMPILED_CODE ("rtlty2.so", 31, decl_rtlty2_so_ea3751b47fcaf0c9, rtlty2_so_ea3751b47fcaf0c9)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rtlty2_so_data_ea3751b47fcaf0c9 [4116] =
  "\x61\x2a\x88\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\x1d\xc1\xb9"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x0d\xbb"
  "\x08\x0d\x22\x29\x21\x9f\x2b\xbc\x1d\xb0\x83\x88\xb3\x08\x0d\x22"
  "\x29\x21\x9f\x2b\xbd\x1d\xb0\x84\x88\xb3\x08\x0d\x22\x29\x21\x9f"
  "\x2b\xbe\x1d\xb0\x85\x88\xb3\x08\x0d\x22\x29\x21\x9f\x2b\xbf\x1d"
  "\xb0\x86\x88\xb3\x08\x0d\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x08\x0d\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c"
  "\xc1\x1c\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d"
  "\x1c\x1b\xb1\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x1b\xb1\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x1b"
  "\xb1\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x08\x0c\x1b\x1b\x1b\xb1\x80\x0d\x24\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x08\x1b\x1b\xb1\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\xb1"
  "\x1b\x08\x1b\x80\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x0d\x1c\x1b\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x1b\x1b\xb1\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\xb1\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\xb1\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x08\x1b\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x08"
  "\x1b\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\xb9\x08\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x08\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x08\x22"
  "\x29\x21\x9e\x2b\xbb\x1d\xb0\x02\x88\x0d\x08\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x08\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x08\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x08\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x87\xc2\x1c\x81\x0d"
  "\x1c\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x08\x1b\x81\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb3\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x17\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x9f\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9f\x0d"
  "\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb5\x2a\xb4\x2a"
  "\x0d\x0d\x0d\x0d\x0d\x0d\xb1\xb2\x2a\x17\x0d\x0d\x0d\x0d\x0d\x0d"
  "\xc3\x0d\x28\x0d\x26\x0d\x0d\x0d\x0d\x0d\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5c\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x62\x61\x73\x65\x2f\x72\x74"
  "\x6c\x74\x79\x32\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x09\x73"
  "\x65\x74\x2d\x63\x61\x72\x21\x02\x04\x63\x64\x72\x22\x08\x81\x85"
  "\x02\x21\x06\x81\x85\x02\x20\x04\x84\x06\x07\x0d\x02\x06\x66\x65"
  "\x74\x63\x68\x1f\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d"
  "\x63\x61\x6c\x6c\x2d\x72\x65\x73\x75\x6c\x74\x3a\x61\x63\x63\x65"
  "\x73\x73\x23\x04\x82\x02\x03\x02\x28\x69\x6e\x74\x65\x72\x70\x72"
  "\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73\x75\x6c\x74"
  "\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x24\x04\x82\x02\x03\x02\x2a\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73\x75\x6c\x74\x3a\x63"
  "\x61\x63\x68\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f"
  "\x25\x04\x82\x02\x03\x02\x1f\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73\x75\x6c\x74\x3a\x6c"
  "\x6f\x6f\x6b\x75\x70\x26\x04\x82\x02\x03\x02\x24\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73"
  "\x75\x6c\x74\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x27"
  "\x04\x82\x02\x03\x09\x02\x08\x21\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73\x75\x6c\x74\x3a"
  "\x75\x6e\x62\x6f\x75\x6e\x64\x3f\x28\x04\x82\x02\x03\x0a\x02\x09"
  "\x07\x6f\x66\x66\x73\x65\x74\x0b\x04\x63\x61\x72\x0c\x2a\x06\x81"
  "\x83\x02\x29\x04\x83\x04\x05\x0b\x0d\x02\x0a\x05\x62\x79\x74\x65"
  "\x0e\x0c\x2f\x0c\x81\x83\x02\x2e\x0a\x81\x83\x02\x2d\x08\x81\x83"
  "\x02\x2c\x06\x81\x83\x02\x2b\x04\x83\x04\x0b\x12\x0f\x02\x0b\x06"
  "\x66\x6c\x6f\x61\x74\x10\x0c\x34\x0c\x81\x83\x02\x33\x0a\x81\x83"
  "\x02\x32\x08\x81\x83\x02\x31\x06\x81\x83\x02\x30\x04\x83\x04\x0b"
  "\x12\x11\x02\x0c\x07\x6f\x62\x6a\x65\x63\x74\x12\x0c\x39\x0c\x81"
  "\x83\x02\x38\x0a\x81\x83\x02\x37\x08\x81\x83\x02\x36\x06\x81\x83"
  "\x02\x35\x04\x83\x04\x0b\x12\x13\x02\x0d\x04\x1b\x72\x74\x6c\x3a"
  "\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x6f\x66\x66\x73\x65\x74\x14\x02\x3a\x04\x84\x06\x03\x15\x02\x0e"
  "\x0b\x18\x41\x44\x44\x52\x45\x53\x53\x5f\x55\x4e\x49\x54\x53\x5f"
  "\x50\x45\x52\x5f\x46\x4c\x4f\x41\x54\x12\x0e\x0c\x19\x61\x64\x64"
  "\x72\x65\x73\x73\x2d\x75\x6e\x69\x74\x73\x2d\x70\x65\x72\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x02\x03\x15\x72\x74\x6c\x3a\x6c\x6f\x63\x61"
  "\x74\x69\x76\x65\x2d\x6f\x66\x66\x73\x65\x74\x3f\x16\x04\x0b\x62"
  "\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x3d\x17\x04\x0b\x62\x61\x63\x6b"
  "\x2d\x65\x6e\x64\x3a\x2b\x18\x04\x0b\x62\x61\x63\x6b\x2d\x65\x6e"
  "\x64\x3a\x2a\x05\x53\x34\x81\x85\x02\x52\x32\x81\x87\x02\x51\x30"
  "\x81\x87\x02\x50\x2e\x81\x85\x02\x4f\x2c\x81\x8b\x02\x4e\x2a\x81"
  "\x8b\x02\x4d\x28\x81\x8b\x02\x4c\x26\x81\x8b\x02\x4b\x24\x81\x8b"
  "\x02\x4a\x22\x81\x8b\x02\x49\x20\x81\x89\x02\x48\x1e\x81\x89\x02"
  "\x47\x1c\x81\x89\x02\x46\x1a\x81\x89\x02\x45\x18\x81\x89\x02\x44"
  "\x16\x81\x89\x02\x43\x14\x81\x89\x02\x42\x12\x81\x89\x02\x41\x10"
  "\x81\x89\x02\x40\x0e\x81\x89\x02\x3f\x0c\x81\x89\x02\x3e\x0a\x81"
  "\x89\x02\x3d\x08\x81\x85\x02\x3c\x06\x81\x87\x02\x3b\x04\x84\x06"
  "\x33\x49\x19\x02\x0f\x0b\x10\x0c\x03\x16\x04\x18\x03\x60\x1c\x81"
  "\x87\x02\x5f\x1a\x81\x87\x02\x5e\x18\x81\x85\x02\x5d\x16\x81\x85"
  "\x02\x5c\x14\x81\x89\x02\x5b\x12\x81\x89\x02\x5a\x10\x81\x89\x02"
  "\x59\x0e\x81\x85\x02\x58\x0c\x81\x85\x02\x57\x0a\x81\x85\x02\x56"
  "\x08\x81\x85\x02\x55\x06\x81\x85\x02\x54\x04\x84\x06\x1b\x28\x1a"
  "\x02\x10\x2d\x43\x61\x6e\x27\x74\x20\x61\x64\x64\x20\x6f\x62\x6a"
  "\x65\x63\x74\x20\x6f\x66\x66\x73\x65\x74\x20\x74\x6f\x20\x6e\x6f"
  "\x6e\x2d\x6f\x62\x6a\x65\x63\x74\x20\x6f\x66\x66\x73\x65\x74\x0c"
  "\x0b\x12\x04\x17\x03\x16\x04\x18\x05\x06\x65\x72\x72\x6f\x72\x05"
  "\x6d\x1c\x81\x87\x02\x6c\x1a\x81\x87\x02\x6b\x18\x81\x85\x02\x6a"
  "\x16\x81\x89\x02\x69\x14\x81\x89\x02\x68\x12\x81\x89\x02\x67\x10"
  "\x81\x85\x02\x66\x0e\x81\x85\x02\x65\x0c\x81\x85\x02\x64\x0a\x81"
  "\x85\x02\x63\x08\x81\x85\x02\x62\x06\x81\x85\x02\x61\x04\x84\x06"
  "\x1b\x2e\x18\x02\x11\x06\x69\x6e\x64\x65\x78\x17\x0c\x6f\x06\x81"
  "\x83\x02\x6e\x04\x83\x04\x05\x0b\x0b\x02\x12\x0e\x0c\x74\x0c\x81"
  "\x83\x02\x73\x0a\x81\x83\x02\x72\x08\x81\x83\x02\x71\x06\x81\x83"
  "\x02\x70\x04\x83\x04\x0b\x12\x1b\x02\x13\x10\x0c\x79\x0c\x81\x83"
  "\x02\x78\x0a\x81\x83\x02\x77\x08\x81\x83\x02\x76\x06\x81\x83\x02"
  "\x75\x04\x83\x04\x0b\x12\x1c\x02\x14\x12\x0c\x7e\x0c\x81\x83\x02"
  "\x7d\x0a\x81\x83\x02\x7c\x08\x81\x83\x02\x7b\x06\x81\x83\x02\x7a"
  "\x04\x83\x04\x0b\x12\x0c\x02\x15\x17\x0e\x7f\x04\x84\x06\x03\x0e"
  "\x02\x16\x17\x10\x80\x01\x04\x84\x06\x03\x10\x02\x17\x17\x12\x81"
  "\x01\x04\x84\x06\x03\x17\x02\x18\x08\x61\x64\x64\x72\x65\x73\x73"
  "\x82\x01\x04\x83\x04\x03\x12\x02\x19\x0c\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x83\x01\x04\x83\x04\x03\x1d\x02\x1a\x0a\x63"
  "\x65\x6c\x6c\x2d\x63\x6f\x6e\x73\x84\x01\x04\x83\x04\x03\x1e\x02"
  "\x1b\x85\x01\x04\x83\x04\x03\x02\x1c\x10\x74\x79\x70\x65\x64\x2d"
  "\x63\x6f\x6e\x73\x3a\x70\x61\x69\x72\x86\x01\x04\x85\x08\x03\x1f"
  "\x02\x1d\x12\x74\x79\x70\x65\x64\x2d\x63\x6f\x6e\x73\x3a\x76\x65"
  "\x63\x74\x6f\x72\x87\x01\x04\x84\x06\x03\x20\x02\x1e\x15\x74\x79"
  "\x70\x65\x64\x2d\x63\x6f\x6e\x73\x3a\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x88\x01\x04\x83\x04\x03\x21\x02\x1f\x05\x6a\x75\x6d\x70"
  "\x89\x01\x04\x83\x04\x03\x22\x02\x20\x06\x6a\x75\x6d\x70\x63\x8a"
  "\x01\x04\x84\x06\x03\x23\x02\x21\x06\x6c\x61\x62\x65\x6c\x8b\x01"
  "\x04\x83\x04\x03\x24\x02\x22\x04\x6e\x6f\x74\x8c\x01\x04\x83\x04"
  "\x03\x25\x02\x23\x04\x14\x02\x8d\x01\x04\x84\x06\x03\x26\x02\x24"
  "\x0e\x70\x72\x65\x2d\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x0b\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x27\x17\x2a\x6d\x61\x63\x68"
  "\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70"
  "\x2a\x28\x02\x90\x01\x08\x81\x81\x02\x8f\x01\x06\x81\x81\x02\x8e"
  "\x01\x04\x82\x02\x07\x11\x29\x02\x25\x0f\x70\x6f\x73\x74\x2d\x69"
  "\x6e\x63\x72\x65\x6d\x65\x6e\x74\x27\x28\x02\x93\x01\x08\x81\x81"
  "\x02\x92\x01\x06\x81\x81\x02\x91\x01\x04\x82\x02\x07\x10\x28\x25"
  "\x27\x27\x28\x04\x29\x04\x26\x04\x25\x04\x24\x04\x23\x04\x22\x04"
  "\x21\x04\x20\x04\x1f\x04\x04\x1e\x04\x1d\x04\x12\x04\x17\x04\x10"
  "\x04\x0e\x04\x0c\x04\x1c\x04\x1b\x04\x15\x12\x73\x74\x61\x63\x6b"
  "\x2d\x70\x6f\x70\x2d\x61\x64\x64\x72\x65\x73\x73\x13\x73\x74\x61"
  "\x63\x6b\x2d\x70\x75\x73\x68\x2d\x61\x64\x64\x72\x65\x73\x73\x16"
  "\x73\x74\x61\x63\x6b\x2d\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x6f"
  "\x66\x66\x73\x65\x74\x15\x72\x74\x6c\x3a\x6e\x65\x67\x61\x74\x65"
  "\x2d\x70\x72\x65\x64\x69\x63\x61\x74\x65\x19\x72\x74\x6c\x3a\x6d"
  "\x61\x6b\x65\x2d\x6c\x61\x62\x65\x6c\x2d\x73\x74\x61\x74\x65\x6d"
  "\x65\x6e\x74\x19\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x6a\x75\x6d"
  "\x70\x63\x2d\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x18\x72\x74\x6c"
  "\x3a\x6d\x61\x6b\x65\x2d\x6a\x75\x6d\x70\x2d\x73\x74\x61\x74\x65"
  "\x6d\x65\x6e\x74\x1e\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x74\x79"
  "\x70\x65\x64\x2d\x63\x6f\x6e\x73\x3a\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x1b\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x74\x79\x70\x65"
  "\x64\x2d\x63\x6f\x6e\x73\x3a\x76\x65\x63\x74\x6f\x72\x19\x72\x74"
  "\x6c\x3a\x6d\x61\x6b\x65\x2d\x74\x79\x70\x65\x64\x2d\x63\x6f\x6e"
  "\x73\x3a\x70\x61\x69\x72\x0f\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d"
  "\x66\x65\x74\x63\x68\x13\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x63"
  "\x65\x6c\x6c\x2d\x63\x6f\x6e\x73\x15\x72\x74\x6c\x3a\x6d\x61\x6b"
  "\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x11\x72\x74"
  "\x6c\x3a\x6d\x61\x6b\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x1a\x72"
  "\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x69\x6e\x64\x65\x78\x19\x72\x74\x6c\x3a\x6c\x6f\x63"
  "\x61\x74\x69\x76\x65\x2d\x66\x6c\x6f\x61\x74\x2d\x69\x6e\x64\x65"
  "\x78\x18\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x62"
  "\x79\x74\x65\x2d\x69\x6e\x64\x65\x78\x1b\x72\x74\x6c\x3a\x6c\x6f"
  "\x63\x61\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x69\x6e"
  "\x64\x65\x78\x3f\x1a\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76"
  "\x65\x2d\x66\x6c\x6f\x61\x74\x2d\x69\x6e\x64\x65\x78\x3f\x19\x72"
  "\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x62\x79\x74\x65"
  "\x2d\x69\x6e\x64\x65\x78\x3f\x15\x1f\x72\x74\x6c\x3a\x6c\x6f\x63"
  "\x61\x74\x69\x76\x65\x2d\x69\x6e\x64\x65\x78\x2d\x67\x72\x61\x6e"
  "\x75\x6c\x61\x72\x69\x74\x79\x1a\x72\x74\x6c\x3a\x6c\x6f\x63\x61"
  "\x74\x69\x76\x65\x2d\x69\x6e\x64\x65\x78\x2d\x6f\x66\x66\x73\x65"
  "\x74\x18\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x69"
  "\x6e\x64\x65\x78\x2d\x62\x61\x73\x65\x14\x72\x74\x6c\x3a\x6c\x6f"
  "\x63\x61\x74\x69\x76\x65\x2d\x69\x6e\x64\x65\x78\x3f\x14\x1a\x72"
  "\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x66\x6c\x6f\x61"
  "\x74\x2d\x6f\x66\x66\x73\x65\x74\x19\x72\x74\x6c\x3a\x6c\x6f\x63"
  "\x61\x74\x69\x76\x65\x2d\x62\x79\x74\x65\x2d\x6f\x66\x66\x73\x65"
  "\x74\x14\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x6f"
  "\x66\x66\x73\x65\x74\x1c\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69"
  "\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x6f\x66\x66\x73\x65\x74"
  "\x3f\x1b\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x66"
  "\x6c\x6f\x61\x74\x2d\x6f\x66\x66\x73\x65\x74\x3f\x1a\x72\x74\x6c"
  "\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x62\x79\x74\x65\x2d\x6f"
  "\x66\x66\x73\x65\x74\x3f\x0b\x04\x18\x04\x1a\x04\x19\x04\x15\x04"
  "\x13\x04\x11\x04\x0f\x04\x20\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74"
  "\x69\x76\x65\x2d\x6f\x66\x66\x73\x65\x74\x2d\x67\x72\x61\x6e\x75"
  "\x6c\x61\x72\x69\x74\x79\x1b\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74"
  "\x69\x76\x65\x2d\x6f\x66\x66\x73\x65\x74\x2d\x6f\x66\x66\x73\x65"
  "\x74\x19\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x6f"
  "\x66\x66\x73\x65\x74\x2d\x62\x61\x73\x65\x16\x25\x72\x74\x6c\x3a"
  "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c"
  "\x2d\x72\x65\x73\x75\x6c\x74\x3a\x75\x6e\x62\x6f\x75\x6e\x64\x3f"
  "\x28\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72"
  "\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73\x75\x6c\x74\x3a\x75\x6e\x61"
  "\x73\x73\x69\x67\x6e\x65\x64\x3f\x23\x72\x74\x6c\x3a\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65"
  "\x73\x75\x6c\x74\x3a\x6c\x6f\x6f\x6b\x75\x70\x2e\x72\x74\x6c\x3a"
  "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c"
  "\x2d\x72\x65\x73\x75\x6c\x74\x3a\x63\x61\x63\x68\x65\x2d\x75\x6e"
  "\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x2c\x72\x74\x6c\x3a\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72"
  "\x65\x73\x75\x6c\x74\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x23\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70"
  "\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73\x75\x6c"
  "\x74\x3a\x61\x63\x63\x65\x73\x73\x0e\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x3a\x66\x72\x65\x65\x14\x72\x65\x67\x69\x73\x74\x65\x72\x3a"
  "\x6d\x65\x6d\x6f\x72\x79\x2d\x74\x6f\x70\x12\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x3a\x69\x6e\x74\x2d\x6d\x61\x73\x6b\x0f\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x3a\x76\x61\x6c\x75\x65\x16\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x3a\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e"
  "\x6b\x17\x72\x65\x67\x69\x73\x74\x65\x72\x3a\x73\x74\x61\x63\x6b"
  "\x2d\x70\x6f\x69\x6e\x74\x65\x72\x15\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x3a\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x72\x74"
  "\x6c\x3a\x73\x65\x74\x2d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x21\x10\x0d"
  "\x04\x0a\x04\x09\x04\x04\x04\x04\x04\x05\x66\x72\x65\x65\x0b\x6d"
  "\x65\x6d\x6f\x72\x79\x2d\x74\x6f\x70\x09\x69\x6e\x74\x2d\x6d\x61"
  "\x73\x6b\x06\x76\x61\x6c\x75\x65\x0d\x64\x79\x6e\x61\x6d\x69\x63"
  "\x2d\x6c\x69\x6e\x6b\x0e\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x04\x10\x1c\x72\x74\x6c\x3a\x69\x6e\x76\x6f\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x16\x72\x74\x6c\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x70\x75\x73\x68\x65\x64\x14\x72\x74\x6c\x3a\x74\x65\x73\x74"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x13\x72\x74\x6c\x3a"
  "\x61\x64\x64\x72\x65\x73\x73\x2d\x6e\x75\x6d\x62\x65\x72\x15\x72"
  "\x74\x6c\x3a\x61\x64\x64\x72\x65\x73\x73\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x14\x72\x74\x6c\x3a\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x10\x72\x74\x6c\x3a\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x3f\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x06\x70\x61\x69\x72\x3f"
  "\x04\x63\x61\x72\x05\x63\x61\x64\x72\x06\x63\x61\x64\x64\x72\x07"
  "\x63\x61\x64\x64\x64\x72\x06\x1f\x40\x80\x80\x04\x1e\x3e\x81\x81"
  "\x02\x1d\x3c\x81\x81\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x85\x02"
  "\x1a\x36\x81\x83\x02\x19\x34\x81\x85\x02\x18\x32\x81\x83\x02\x17"
  "\x30\x81\x85\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14\x2a"
  "\x81\x85\x02\x13\x28\x81\x83\x02\x12\x26\x81\x85\x02\x11\x24\x81"
  "\x83\x02\x10\x22\x81\x85\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83"
  "\x02\x0d\x1c\x81\x85\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x85\x02"
  "\x0a\x16\x81\x83\x02\x09\x14\x81\x85\x02\x08\x12\x81\x83\x02\x07"
  "\x10\x81\x85\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a"
  "\x81\x83\x02\x03\x08\x81\x85\x02\x02\x06\x81\x83\x02\x01\x04\x81"
  "\x85\x02\x3f\x61";

SCHEME_OBJECT *
rtlty2_so_data_ea3751b47fcaf0c9 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rtlty2_so_data_ea3751b47fcaf0c9 [0]))), (sizeof (prog_rtlty2_so_data_ea3751b47fcaf0c9)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_35]));
}

DECLARE_COMPILED_DATA_NS ("rtlty2.so", rtlty2_so_data_ea3751b47fcaf0c9)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rtlty2.so", "73c86fcb55fe0eb8")
