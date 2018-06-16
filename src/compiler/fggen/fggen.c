/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:14-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 7
#define DEBUGGING_LABEL_1_2 6
#define OBJECT_1_1 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto context_unconditionalP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (context_unconditionalP_3)
DEFLABEL (context_unconditionalP_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

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

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 7
#define DEBUGGING_LABEL_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto context_staticP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (context_staticP_3)
DEFLABEL (context_staticP_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

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

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define ENVIRONMENT_LABEL_3_3 17
#define DEBUGGING_LABEL_3_2 16
#define OBJECT_3_3 15
#define OBJECT_3_2 14
#define OBJECT_3_1 13
#define OBJECT_3_0 12
#define FREE_REFERENCE_3_0 11
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto contextP_4;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (contextP_10)
DEFLABEL (contextP_4)
  INTERRUPT_CHECK (26, LABEL_3_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
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
  Rvl = (current_block [OBJECT_3_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_3_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 9
#define DEBUGGING_LABEL_4_2 8
#define OBJECT_4_0 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto context_make_initial_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (context_make_initial_3)
DEFLABEL (context_make_initial_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 9
#define DEBUGGING_LABEL_5_2 8
#define OBJECT_5_0 7
#define EXECUTE_CACHE_5_5 5
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto context_make_internal_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (context_make_internal_3)
DEFLABEL (context_make_internal_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 12
#define DEBUGGING_LABEL_6_2 11
#define OBJECT_6_1 10
#define OBJECT_6_0 9
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto context_conditional_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (context_conditional_5)
DEFLABEL (context_conditional_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_7;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_7;
  (Wrd6.Obj) = ((Wrd12.pObj) [3]);

DEFLABEL (label_6)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (label_7)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_6_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 13
#define DEBUGGING_LABEL_7_2 12
#define OBJECT_7_2 11
#define OBJECT_7_1 10
#define OBJECT_7_0 9
#define EXECUTE_CACHE_7_6 7
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto context_unconditional_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (context_unconditional_5)
DEFLABEL (context_unconditional_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_7;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_7;
  (Wrd6.Obj) = ((Wrd12.pObj) [3]);

DEFLABEL (label_6)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (label_7)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_7_1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_7 5
#define TAG_8_8 1
#define LABEL_8_5 7
#define TAG_8_6 2
#define LABEL_8_12 9
#define LABEL_8_13 11
#define LABEL_8_14 13
#define LABEL_8_15 15
#define LABEL_8_16 17
#define LABEL_8_17 19
#define LABEL_8_10 21
#define LABEL_8_18 23
#define LABEL_8_20 25
#define LABEL_8_30 27
#define LABEL_8_21 29
#define LABEL_8_22 31
#define TAG_8_23 14
#define LABEL_8_34 33
#define LABEL_8_24 35
#define LABEL_8_25 37
#define TAG_8_26 17
#define LABEL_8_27 39
#define LABEL_8_29 41
#define LABEL_8_42 43
#define LABEL_8_31 45
#define LABEL_8_44 47
#define LABEL_8_45 49
#define LABEL_8_48 51
#define LABEL_8_35 53
#define LABEL_8_37 55
#define LABEL_8_41 57
#define LABEL_8_54 59
#define LABEL_8_43 61
#define LABEL_8_46 63
#define LABEL_8_47 65
#define LABEL_8_57 67
#define LABEL_8_51 69
#define LABEL_8_53 71
#define LABEL_8_58 73
#define TAG_8_59 35
#define ENVIRONMENT_LABEL_8_3 126
#define DEBUGGING_LABEL_8_2 125
#define OBJECT_8_11 124
#define OBJECT_8_10 123
#define OBJECT_8_9 122
#define OBJECT_8_8 121
#define OBJECT_8_7 120
#define OBJECT_8_6 119
#define OBJECT_8_5 118
#define OBJECT_8_4 117
#define OBJECT_8_3 116
#define OBJECT_8_2 115
#define OBJECT_8_1 114
#define OBJECT_8_0 113
#define EXECUTE_CACHE_8_56 75
#define EXECUTE_CACHE_8_55 77
#define EXECUTE_CACHE_8_52 79
#define EXECUTE_CACHE_8_50 81
#define EXECUTE_CACHE_8_49 83
#define EXECUTE_CACHE_8_40 85
#define EXECUTE_CACHE_8_39 87
#define EXECUTE_CACHE_8_38 89
#define EXECUTE_CACHE_8_36 91
#define EXECUTE_CACHE_8_33 93
#define EXECUTE_CACHE_8_32 95
#define EXECUTE_CACHE_8_28 97
#define EXECUTE_CACHE_8_19 99
#define EXECUTE_CACHE_8_11 101
#define EXECUTE_CACHE_8_9 103
#define FREE_REFERENCE_8_3 106
#define FREE_REFERENCE_8_2 107
#define FREE_REFERENCE_8_1 108
#define FREE_REFERENCE_8_0 109
#define FREE_ASSIGNMENT_8_1 111
#define FREE_ASSIGNMENT_8_0 112
#define FREE_REFERENCES_LABEL_8_0 74
#define NUMBER_OF_LINKER_SECTIONS_8_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd12;
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
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_8_4);
      goto construct_graph_45;

    case 1:
      current_block = (Rpc - LABEL_8_7);
      goto lambda_64;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto swapB_63;

    case 3:
      current_block = (Rpc - LABEL_8_12);
      goto label_47;

    case 4:
      current_block = (Rpc - LABEL_8_13);
      goto label_48;

    case 5:
      current_block = (Rpc - LABEL_8_14);
      goto label_49;

    case 6:
      current_block = (Rpc - LABEL_8_15);
      goto label_50;

    case 7:
      current_block = (Rpc - LABEL_8_16);
      goto label_51;

    case 8:
      current_block = (Rpc - LABEL_8_17);
      goto label_52;

    case 9:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_8_18);
      goto continuation_1;

    case 11:
      current_block = (Rpc - LABEL_8_20);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_8_30);
      goto label_53;

    case 13:
      current_block = (Rpc - LABEL_8_21);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_8_22);
      goto lambda_65;

    case 15:
      current_block = (Rpc - LABEL_8_34);
      goto label_54;

    case 16:
      current_block = (Rpc - LABEL_8_24);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_8_25);
      goto lambda_66;

    case 18:
      current_block = (Rpc - LABEL_8_27);
      goto continuation_12;

    case 19:
      current_block = (Rpc - LABEL_8_29);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_8_42);
      goto label_55;

    case 21:
      current_block = (Rpc - LABEL_8_31);
      goto lambda_22;

    case 22:
      current_block = (Rpc - LABEL_8_44);
      goto label_56;

    case 23:
      current_block = (Rpc - LABEL_8_45);
      goto label_57;

    case 24:
      current_block = (Rpc - LABEL_8_48);
      goto label_58;

    case 25:
      current_block = (Rpc - LABEL_8_35);
      goto continuation_3;

    case 26:
      current_block = (Rpc - LABEL_8_37);
      goto continuation_7;

    case 27:
      current_block = (Rpc - LABEL_8_41);
      goto continuation_25;

    case 28:
      current_block = (Rpc - LABEL_8_54);
      goto label_59;

    case 29:
      current_block = (Rpc - LABEL_8_43);
      goto lambda_24;

    case 30:
      current_block = (Rpc - LABEL_8_46);
      goto continuation_20;

    case 31:
      current_block = (Rpc - LABEL_8_47);
      goto continuation_18;

    case 32:
      current_block = (Rpc - LABEL_8_57);
      goto label_60;

    case 33:
      current_block = (Rpc - LABEL_8_51);
      goto continuation_6;

    case 34:
      current_block = (Rpc - LABEL_8_53);
      goto continuation_26;

    case 35:
      current_block = (Rpc - LABEL_8_58);
      goto lambda_69;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (construct_graph_62)
DEFLABEL (construct_graph_45)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_5])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  Wrd25 = Wrd27;
  ((Wrd25.pObj) [2]) = (Wrd7.Obj);
  ((Wrd25.pObj) [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_7])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Rsp [3]) = (Wrd28.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_8_7);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_22])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  ((Wrd15.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_25])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  ((Wrd21.pObj) [2]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_27]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [8]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_28]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  (Wrd7.Obj) = (Rsp [7]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_40]));

DEFLABEL (label_70)
  (Wrd10.Obj) = (Rsp [7]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_39]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8_24);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_33]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_8_20);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_29]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_76;
  Wrd9 = Wrd13;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_31]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_32]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_8_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_74;
  Wrd8 = Wrd12;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_43]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_32]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_8_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_72;
  Wrd8 = Wrd12;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_55]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_8_53);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_54])), (Wrd9.pObj));

DEFLABEL (label_59)
  (Wrd8.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_42])), (Wrd9.pObj));

DEFLABEL (label_55)
  (Wrd8.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_30])), (Wrd10.pObj));

DEFLABEL (label_53)
  (Wrd9.Obj) = Rvl;
  goto label_75;

DEFLABEL (swapB_63)
  CLOSURE_HEADER (LABEL_8_5);

DEFLABEL (swapB_43)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_94;

DEFLABEL (label_93)
  Wrd5 = Wrd9;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_91;

DEFLABEL (label_90)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_89)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_86)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_85;

DEFLABEL (label_84)
  Wrd57 = Wrd61;

DEFLABEL (label_83)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_80)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_77)
  Rvl = (current_block [OBJECT_8_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_79)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_17])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_52)
  goto label_77;

DEFLABEL (label_82)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_16])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_51)
  goto label_80;

DEFLABEL (label_85)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_84;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_8_15])), (Wrd58.pObj));

DEFLABEL (label_50)
  (Wrd57.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_88)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_87;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_49)
  goto label_86;

DEFLABEL (label_91)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_90;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_48)
  goto label_89;

DEFLABEL (label_94)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_93;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_8_12])), (Wrd6.pObj));

DEFLABEL (label_47)
  (Wrd5.Obj) = Rvl;
  goto label_92;

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_8_22);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_96;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd25.Lng))))
    goto label_96;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [9]) = (Wrd17.Obj);

DEFLABEL (label_95)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_36]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_35);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_50]));

DEFLABEL (label_96)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [2]);
  (Wrd33.Obj) = (current_block [OBJECT_8_4]);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_34]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 3);

DEFLABEL (label_54)
  goto label_95;

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_8_25);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_38]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_37);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_51]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_52]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_51);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_59);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_58])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_67)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_8_31);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_106;
  Wrd5 = Wrd9;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_104;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_104;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_103)
  (Wrd27.Obj) = (* (Rsp++));
  if (! ((Wrd11.Obj) == (Wrd27.Obj)))
    goto label_97;
  Rvl = (current_block [OBJECT_8_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_46]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_47]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_102;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd42.Lng))))
    goto label_102;
  (Wrd36.Obj) = ((Wrd40.pObj) [11]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_101)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_49]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_8_47);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_100;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd12.Lng))))
    goto label_100;
  (Wrd7.Obj) = ((Wrd10.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_99)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_49]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_8_46);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_56]));

DEFLABEL (label_98)
  Rvl = (current_block [OBJECT_8_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_100)
  (Wrd15.Obj) = (current_block [OBJECT_8_11]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_57]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_8]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Obj) = (current_block [OBJECT_8_9]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_48]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_8]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_8_7]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_45]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_8]), 2);

DEFLABEL (label_57)
  (Wrd11.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_44])), (Wrd6.pObj));

DEFLABEL (label_56)
  (Wrd5.Obj) = Rvl;
  goto label_105;

DEFLABEL (lambda_68)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_8_43);
  (Wrd5.Obj) = (current_block [OBJECT_8_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_108;

DEFLABEL (label_107)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_10]), 3);

DEFLABEL (label_108)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_107;
  ((Wrd16.pObj) [3]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_8_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_8_58);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define ENVIRONMENT_LABEL_9_3 12
#define DEBUGGING_LABEL_9_2 11
#define EXECUTE_CACHE_9_8 7
#define EXECUTE_CACHE_9_7 9
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto make_variables_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_variables_4)
DEFLABEL (make_variables_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_9 9
#define ENVIRONMENT_LABEL_10_3 18
#define DEBUGGING_LABEL_10_2 17
#define EXECUTE_CACHE_10_10 11
#define EXECUTE_CACHE_10_8 13
#define EXECUTE_CACHE_10_6 15
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto generate_body_4;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_body_7)
DEFLABEL (generate_body_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_9 7
#define LABEL_11_11 9
#define LABEL_11_12 11
#define LABEL_11_13 13
#define LABEL_11_7 15
#define LABEL_11_17 17
#define LABEL_11_18 19
#define LABEL_11_20 21
#define LABEL_11_21 23
#define LABEL_11_22 25
#define LABEL_11_23 27
#define LABEL_11_15 29
#define LABEL_11_24 31
#define LABEL_11_25 33
#define LABEL_11_26 35
#define LABEL_11_27 37
#define ENVIRONMENT_LABEL_11_3 64
#define DEBUGGING_LABEL_11_2 63
#define OBJECT_11_7 62
#define OBJECT_11_6 61
#define OBJECT_11_5 60
#define OBJECT_11_4 59
#define OBJECT_11_3 58
#define OBJECT_11_2 57
#define OBJECT_11_1 56
#define OBJECT_11_0 55
#define EXECUTE_CACHE_11_19 39
#define EXECUTE_CACHE_11_16 41
#define EXECUTE_CACHE_11_14 43
#define EXECUTE_CACHE_11_10 45
#define EXECUTE_CACHE_11_8 47
#define EXECUTE_CACHE_11_6 49
#define FREE_REFERENCE_11_2 52
#define FREE_REFERENCE_11_1 53
#define FREE_REFERENCE_11_0 54
#define FREE_REFERENCES_LABEL_11_0 38
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd15;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_11_4);
      goto continuation_case_20;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_15;

    case 3:
      current_block = (Rpc - LABEL_11_11);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_11_12);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_11_13);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_11_17);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_11_18);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_11_20);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_11_21);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_11_22);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_11_23);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_2;

    case 14:
      current_block = (Rpc - LABEL_11_24);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_11_25);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_11_26);
      goto label_33;

    case 17:
      current_block = (Rpc - LABEL_11_27);
      goto label_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_case_36)
DEFLABEL (continuation_case_20)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_45;
  Wrd8 = Wrd12;

DEFLABEL (label_44)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (Wrd8.Obj))
    goto label_43;
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_42;
  Wrd16 = Wrd20;

DEFLABEL (label_41)
  (Wrd22.Obj) = (Rsp [0]);
  if ((Wrd22.Obj) == (Wrd16.Obj))
    goto label_37;
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_40;
  Wrd24 = Wrd28;

DEFLABEL (label_39)
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (Wrd24.Obj))
    goto label_37;
  (Wrd31.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [4]) = (Wrd31.Obj);
  (Rsp [5]) = (Wrd30.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (label_37)
  Rvl = (Rsp [2]);

DEFLABEL (label_38)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_13])), (Wrd25.pObj));

DEFLABEL (label_24)
  (Wrd24.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_12])), (Wrd17.pObj));

DEFLABEL (label_23)
  (Wrd16.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  Rvl = (Rsp [3]);
  goto label_38;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_11])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_60;
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd93.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd93.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_47;
  (Wrd56.Obj) = (current_block [OBJECT_11_5]);
  (Rsp [3]) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd57.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_59;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_59;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_58)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_57;
  Wrd24 = Wrd28;

DEFLABEL (label_56)
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (Wrd24.Obj))
    goto label_55;
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_54;
  Wrd32 = Wrd36;

DEFLABEL (label_53)
  (Wrd38.Obj) = (Rsp [0]);
  if ((Wrd38.Obj) == (Wrd32.Obj))
    goto label_52;
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_51;
  Wrd40 = Wrd44;

DEFLABEL (label_50)
  (Wrd46.Obj) = (Rsp [0]);
  if ((Wrd46.Obj) == (Wrd40.Obj))
    goto label_48;
  (Wrd47.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [4]) = (Wrd47.Obj);
  (Rsp [5]) = (Wrd46.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (label_48)
  Rvl = (Rsp [5]);

DEFLABEL (label_49)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_27])), (Wrd41.pObj));

DEFLABEL (label_34)
  (Wrd40.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  Rvl = (Rsp [4]);
  goto label_49;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_26])), (Wrd33.pObj));

DEFLABEL (label_33)
  (Wrd32.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  Rvl = (Rsp [3]);
  goto label_49;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_25])), (Wrd25.pObj));

DEFLABEL (label_32)
  (Wrd24.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_11_6]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_7]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 62))
    goto label_77;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd81.Lng))))
    goto label_77;
  (Wrd9.Obj) = ((Wrd79.pObj) [4]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;

DEFLABEL (label_73)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_72;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd35.Lng))))
    goto label_72;
  (Wrd29.Obj) = ((Wrd33.pObj) [4]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_71)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_70;
  Wrd44 = Wrd48;

DEFLABEL (label_69)
  (Wrd50.Obj) = (Rsp [0]);
  if ((Wrd50.Obj) == (Wrd44.Obj))
    goto label_68;
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_67;
  Wrd52 = Wrd56;

DEFLABEL (label_66)
  (Wrd58.Obj) = (Rsp [0]);
  if ((Wrd58.Obj) == (Wrd52.Obj))
    goto label_65;
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_64;
  Wrd60 = Wrd64;

DEFLABEL (label_63)
  (Wrd66.Obj) = (Rsp [0]);
  if ((Wrd66.Obj) == (Wrd60.Obj))
    goto label_61;
  (Wrd67.Obj) = (current_block [OBJECT_11_4]);
  (Rsp [4]) = (Wrd67.Obj);
  (Rsp [5]) = (Wrd66.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (label_61)
  Rvl = (Rsp [5]);

DEFLABEL (label_62)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_23])), (Wrd61.pObj));

DEFLABEL (label_29)
  (Wrd60.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  Rvl = (Rsp [4]);
  goto label_62;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_22])), (Wrd53.pObj));

DEFLABEL (label_28)
  (Wrd52.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_68)
  Rvl = (Rsp [3]);
  goto label_62;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_21])), (Wrd45.pObj));

DEFLABEL (label_27)
  (Wrd44.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_11_1]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_76;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_76;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_75)
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_19]));

DEFLABEL (label_76)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_11_3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_25)
  (Wrd11.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.Obj) = (current_block [OBJECT_11_1]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  goto label_73;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_10 9
#define ENVIRONMENT_LABEL_12_3 27
#define DEBUGGING_LABEL_12_2 26
#define OBJECT_12_4 25
#define OBJECT_12_3 24
#define OBJECT_12_2 23
#define OBJECT_12_1 22
#define OBJECT_12_0 21
#define EXECUTE_CACHE_12_12 11
#define EXECUTE_CACHE_12_11 13
#define EXECUTE_CACHE_12_9 15
#define EXECUTE_CACHE_12_8 17
#define EXECUTE_CACHE_12_6 19
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_12_4);
      goto continuation_known_type_3;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_known_type_6)
DEFLABEL (continuation_known_type_3)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd21.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_3]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 2);

DEFLABEL (label_10)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_9;
  Rvl = ((Wrd16.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_13)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_12;
  Rvl = ((Wrd16.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_9 7
#define LABEL_13_7 9
#define LABEL_13_13 11
#define LABEL_13_11 13
#define LABEL_13_15 15
#define ENVIRONMENT_LABEL_13_3 34
#define DEBUGGING_LABEL_13_2 33
#define OBJECT_13_5 32
#define OBJECT_13_4 31
#define OBJECT_13_3 30
#define OBJECT_13_2 29
#define OBJECT_13_1 28
#define OBJECT_13_0 27
#define EXECUTE_CACHE_13_14 17
#define EXECUTE_CACHE_13_12 19
#define EXECUTE_CACHE_13_10 21
#define EXECUTE_CACHE_13_8 23
#define EXECUTE_CACHE_13_6 25
#define FREE_REFERENCES_LABEL_13_0 16
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_13_4);
      goto continuation_typeP_6;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_13_13);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_13_15);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_typeP_11)
DEFLABEL (continuation_typeP_6)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (Wrd7.Obj) = (Rsp [1]);
  if (Rvl == (Wrd7.Obj))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_13_0]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  (Wrd27.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_13_3]);
  (Rsp [0]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_21;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_20)
  (Wrd24.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd24.Obj))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_13_0]);

DEFLABEL (label_17)
DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_13_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 2);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_27;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_27;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_26)
  (Wrd24.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd24.Obj))
    goto label_24;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_23;

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_13_0]);

DEFLABEL (label_23)
DEFLABEL (label_25)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_13_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 12
#define DEBUGGING_LABEL_14_2 11
#define EXECUTE_CACHE_14_6 7
#define FREE_REFERENCE_14_0 10
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto continuation_effectP_0;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_effectP_4)
DEFLABEL (continuation_effectP_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define EXECUTE_CACHE_15_6 7
#define FREE_REFERENCE_15_0 10
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto continuation_predicateP_0;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_predicateP_4)
DEFLABEL (continuation_predicateP_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define ENVIRONMENT_LABEL_16_3 19
#define DEBUGGING_LABEL_16_2 18
#define OBJECT_16_4 17
#define OBJECT_16_3 16
#define OBJECT_16_2 15
#define OBJECT_16_1 14
#define OBJECT_16_0 13
#define EXECUTE_CACHE_16_8 11
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto continuation_rvalue_3;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_rvalue_9)
DEFLABEL (continuation_rvalue_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd5.Obj) = ((Wrd11.pObj) [12]);

DEFLABEL (label_14)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_13;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_12)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_11;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd36.Lng))))
    goto label_11;
  (Wrd30.Obj) = ((Wrd34.pObj) [4]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_10)
  (Wrd44.Obj) = (current_block [OBJECT_16_4]);
  (Rsp [2]) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (label_11)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_16_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_16_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define LABEL_17_6 9
#define ENVIRONMENT_LABEL_17_3 19
#define DEBUGGING_LABEL_17_2 18
#define OBJECT_17_2 17
#define OBJECT_17_1 16
#define OBJECT_17_0 15
#define EXECUTE_CACHE_17_8 11
#define FREE_REFERENCE_17_0 14
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_17_4);
      goto continuation_next_hooks_3;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_next_hooks_8)
DEFLABEL (continuation_next_hooks_3)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_10;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd22.Lng))))
    goto label_10;
  (Wrd16.Obj) = ((Wrd20.pObj) [11]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_17_2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_17_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define ENVIRONMENT_LABEL_18_3 20
#define DEBUGGING_LABEL_18_2 19
#define OBJECT_18_1 18
#define OBJECT_18_0 17
#define EXECUTE_CACHE_18_10 9
#define EXECUTE_CACHE_18_9 11
#define EXECUTE_CACHE_18_8 13
#define EXECUTE_CACHE_18_6 15
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_18_4);
      goto continuation_reference_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_reference_5)
DEFLABEL (continuation_reference_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (label_6)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_18_1]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define LABEL_19_8 11
#define ENVIRONMENT_LABEL_19_3 20
#define DEBUGGING_LABEL_19_2 19
#define EXECUTE_CACHE_19_9 13
#define FREE_REFERENCE_19_2 16
#define FREE_REFERENCE_19_1 17
#define FREE_REFERENCE_19_0 18
#define FREE_REFERENCES_LABEL_19_0 12
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_19_4);
      goto scfg_ctype__ctypeB_0;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scfg_ctype__ctypeB_7)
DEFLABEL (scfg_ctype__ctypeB_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;
  Wrd5 = Wrd9;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_13;
  Wrd11 = Wrd15;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_11;
  Wrd17 = Wrd21;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_2]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_9;
  Wrd25 = Wrd29;

DEFLABEL (label_8)
  (Rsp [4]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_8])), (Wrd26.pObj));

DEFLABEL (label_5)
  (Wrd25.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_7])), (Wrd18.pObj));

DEFLABEL (label_4)
  (Wrd17.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_9 9
#define LABEL_20_12 11
#define LABEL_20_11 13
#define ENVIRONMENT_LABEL_20_3 24
#define DEBUGGING_LABEL_20_2 23
#define OBJECT_20_1 22
#define OBJECT_20_0 21
#define EXECUTE_CACHE_20_10 15
#define EXECUTE_CACHE_20_8 17
#define EXECUTE_CACHE_20_6 19
#define FREE_REFERENCES_LABEL_20_0 14
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_20_4);
      goto with_reified_continuation_7;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_20_12);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_20_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_reified_continuation_11)
DEFLABEL (with_reified_continuation_7)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 10))
    goto label_14;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_14;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_13)
  (Wrd26.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_11);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_14)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_20_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 12
#define DEBUGGING_LABEL_21_2 11
#define EXECUTE_CACHE_21_7 7
#define EXECUTE_CACHE_21_6 9
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto make_subproblem_canonical_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_subproblem_canonical_4)
DEFLABEL (make_subproblem_canonical_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_6 5
#define LABEL_22_5 7
#define LABEL_22_8 9
#define LABEL_22_9 11
#define ENVIRONMENT_LABEL_22_3 22
#define DEBUGGING_LABEL_22_2 21
#define OBJECT_22_3 20
#define OBJECT_22_2 19
#define OBJECT_22_1 18
#define OBJECT_22_0 17
#define EXECUTE_CACHE_22_10 13
#define EXECUTE_CACHE_22_7 15
#define FREE_REFERENCES_LABEL_22_0 12
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto scfg_subproblem__subproblemB_4;

    case 1:
      current_block = (Rpc - LABEL_22_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scfg_subproblem__subproblemB_10)
DEFLABEL (scfg_subproblem__subproblemB_4)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_16;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_12;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_12;
  (Wrd21.Obj) = ((Wrd27.pObj) [4]);

DEFLABEL (label_11)
  (Rsp [2]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (label_12)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_22_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_22_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_22_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_6 5
#define LABEL_23_7 7
#define LABEL_23_5 9
#define LABEL_23_9 11
#define LABEL_23_10 13
#define ENVIRONMENT_LABEL_23_3 24
#define DEBUGGING_LABEL_23_2 23
#define OBJECT_23_3 22
#define OBJECT_23_2 21
#define OBJECT_23_1 20
#define OBJECT_23_0 19
#define EXECUTE_CACHE_23_11 15
#define EXECUTE_CACHE_23_8 17
#define FREE_REFERENCES_LABEL_23_0 14
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd22;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_23_4);
      goto pcfg_subproblem__subproblemB_5;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_23_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_23_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_subproblem__subproblemB_12)
DEFLABEL (pcfg_subproblem__subproblemB_5)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_20;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_20;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_19)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_18;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_18;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_17)
  (Wrd40.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [0]) = Rvl;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_16;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_16;
  (Wrd6.Obj) = ((Wrd12.pObj) [3]);

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_14;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd30.Lng))))
    goto label_14;
  (Wrd22.Obj) = ((Wrd28.pObj) [4]);

DEFLABEL (label_13)
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (label_14)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (current_block [OBJECT_23_3]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_10)
  (Wrd22.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_23_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_23_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_23_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define ENVIRONMENT_LABEL_24_3 18
#define DEBUGGING_LABEL_24_2 17
#define EXECUTE_CACHE_24_6 11
#define FREE_REFERENCE_24_0 14
#define FREE_ASSIGNMENT_24_0 16
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_24_4);
      goto virtual_continuation_make_3;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (virtual_continuation_make_8)
DEFLABEL (virtual_continuation_make_3)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_13;
  Wrd7 = Wrd11;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_24_0]));
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_11;

DEFLABEL (label_10)
  ((Wrd17.pObj) [0]) = (Wrd13.Obj);

DEFLABEL (label_9)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_10;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_24_8])), (Wrd17.pObj), (Wrd13.Obj));

DEFLABEL (label_6)
  goto label_9;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_7])), (Wrd8.pObj));

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_7 7
#define ENVIRONMENT_LABEL_25_3 12
#define DEBUGGING_LABEL_25_2 11
#define EXECUTE_CACHE_25_8 9
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_25_4);
      goto wrapper_subproblem_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wrapper_subproblem_5)
DEFLABEL (wrapper_subproblem_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (Wrd5.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd5.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
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
fggen_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_26_4);
      goto make_continuation_debugging_info_3;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_continuation_debugging_info_6)
DEFLABEL (make_continuation_debugging_info_3)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_7 5
#define LABEL_27_5 7
#define TAG_27_6 2
#define LABEL_27_10 9
#define LABEL_27_8 11
#define TAG_27_9 4
#define ENVIRONMENT_LABEL_27_3 19
#define DEBUGGING_LABEL_27_2 18
#define OBJECT_27_0 17
#define EXECUTE_CACHE_27_11 13
#define FREE_REFERENCE_27_0 16
#define FREE_REFERENCES_LABEL_27_0 12
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_27_4);
      goto generator_subproblem_4;

    case 1:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_5);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_27_10);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_27_8);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generator_subproblem_8)
DEFLABEL (generator_subproblem_4)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x6f9, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_27_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd14.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_13;
  Wrd15 = Wrd19;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (Wrd22.Obj) = Rvl;

DEFLABEL (label_11)
  (Rsp [5]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_8])));
  Rhp += 3;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd30 = Wrd25;
  (Wrd31.Obj) = (Rsp [4]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [4]) = (Wrd27.Obj);
  (Rsp [6]) = (Wrd24.Obj);
  (Rsp [3]) = (Wrd27.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd33.Obj);
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [2]);
  (Rsp [2]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_10])), (Wrd16.pObj));

DEFLABEL (label_6)
  (Wrd15.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_14)
  (Wrd22.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_11;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_27_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
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
fggen_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_28_4);
      goto generate_constant_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_constant_4)
DEFLABEL (generate_constant_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 8
#define DEBUGGING_LABEL_29_2 7
#define EXECUTE_CACHE_29_5 5
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto generate_the_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_the_environment_3)
DEFLABEL (generate_the_environment_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_6 5
#define LABEL_30_7 7
#define LABEL_30_8 9
#define LABEL_30_9 11
#define LABEL_30_5 13
#define ENVIRONMENT_LABEL_30_3 23
#define DEBUGGING_LABEL_30_2 22
#define EXECUTE_CACHE_30_10 15
#define FREE_REFERENCE_30_3 18
#define FREE_REFERENCE_30_2 19
#define FREE_REFERENCE_30_1 20
#define FREE_REFERENCE_30_0 21
#define FREE_REFERENCES_LABEL_30_0 14
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_30_4);
      goto continue_rvalue_constant_1;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continue_rvalue_constant_8)
DEFLABEL (continue_rvalue_constant_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_14;
  Wrd14 = Wrd18;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_2]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_12;
  Wrd20 = Wrd24;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_3]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_10;
  Wrd26 = Wrd30;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_9])), (Wrd27.pObj));

DEFLABEL (label_6)
  (Wrd26.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_8])), (Wrd21.pObj));

DEFLABEL (label_5)
  (Wrd20.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_7])), (Wrd15.pObj));

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_7 9
#define LABEL_31_10 11
#define LABEL_31_8 13
#define ENVIRONMENT_LABEL_31_3 27
#define DEBUGGING_LABEL_31_2 26
#define OBJECT_31_2 25
#define OBJECT_31_1 24
#define OBJECT_31_0 23
#define EXECUTE_CACHE_31_12 15
#define EXECUTE_CACHE_31_11 17
#define EXECUTE_CACHE_31_9 19
#define FREE_REFERENCE_31_0 22
#define FREE_REFERENCES_LABEL_31_0 14
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd37;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd33;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_31_4);
      goto continue_predicate_constant_5;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_31_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continue_predicate_constant_11)
DEFLABEL (continue_predicate_constant_5)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_17;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_17;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_16)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_13;

DEFLABEL (label_12)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_10);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (label_13)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_15;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd43.Lng))))
    goto label_15;
  (Wrd33.Obj) = ((Wrd41.pObj) [3]);
  if (! ((Wrd33.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_14)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_8);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (label_15)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.Obj) = (current_block [OBJECT_31_2]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_12;

DEFLABEL (label_17)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_31_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_6 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_9 11
#define LABEL_32_5 13
#define ENVIRONMENT_LABEL_32_3 23
#define DEBUGGING_LABEL_32_2 22
#define EXECUTE_CACHE_32_10 15
#define FREE_REFERENCE_32_3 18
#define FREE_REFERENCE_32_2 19
#define FREE_REFERENCE_32_1 20
#define FREE_REFERENCE_32_0 21
#define FREE_REFERENCES_LABEL_32_0 14
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_32_4);
      goto continue_rvalue_1;

    case 1:
      current_block = (Rpc - LABEL_32_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continue_rvalue_8)
DEFLABEL (continue_rvalue_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_14;
  Wrd14 = Wrd18;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_2]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_12;
  Wrd20 = Wrd24;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_3]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_10;
  Wrd26 = Wrd30;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_9])), (Wrd27.pObj));

DEFLABEL (label_6)
  (Wrd26.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_8])), (Wrd21.pObj));

DEFLABEL (label_5)
  (Wrd20.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_7])), (Wrd15.pObj));

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define ENVIRONMENT_LABEL_33_3 15
#define DEBUGGING_LABEL_33_2 14
#define OBJECT_33_2 13
#define OBJECT_33_1 12
#define OBJECT_33_0 11
#define EXECUTE_CACHE_33_7 7
#define EXECUTE_CACHE_33_6 9
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_33_4);
      goto continue_unknown_2;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continue_unknown_5)
DEFLABEL (continue_unknown_2)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.Obj) = (current_block [OBJECT_33_2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define ENVIRONMENT_LABEL_34_3 16
#define DEBUGGING_LABEL_34_2 15
#define EXECUTE_CACHE_34_9 9
#define EXECUTE_CACHE_34_8 11
#define EXECUTE_CACHE_34_6 13
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto continue_effect_2;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continue_effect_5)
DEFLABEL (continue_effect_2)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 8
#define DEBUGGING_LABEL_35_2 7
#define EXECUTE_CACHE_35_5 5
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto continue_predicate_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continue_predicate_3)
DEFLABEL (continue_predicate_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define ENVIRONMENT_LABEL_36_3 20
#define DEBUGGING_LABEL_36_2 19
#define OBJECT_36_1 18
#define OBJECT_36_0 17
#define EXECUTE_CACHE_36_10 9
#define EXECUTE_CACHE_36_9 11
#define EXECUTE_CACHE_36_8 13
#define EXECUTE_CACHE_36_6 15
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_36_4);
      goto continue_value_3;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continue_value_6)
DEFLABEL (continue_value_3)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (label_7)
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.Obj) = (current_block [OBJECT_36_0]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 9
#define DEBUGGING_LABEL_37_2 8
#define FREE_REFERENCE_37_0 7
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_37_4);
      goto scode_make_safe_variable_0;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_safe_variable_4)
DEFLABEL (scode_make_safe_variable_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd16.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 6
#define DEBUGGING_LABEL_38_2 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto scode_safe_variable_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_safe_variable_name_3)
DEFLABEL (scode_safe_variable_name_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_8 7
#define LABEL_39_7 9
#define LABEL_39_10 11
#define LABEL_39_11 13
#define ENVIRONMENT_LABEL_39_3 25
#define DEBUGGING_LABEL_39_2 24
#define OBJECT_39_0 23
#define EXECUTE_CACHE_39_9 15
#define EXECUTE_CACHE_39_6 17
#define FREE_REFERENCE_39_0 20
#define FREE_ASSIGNMENT_39_0 22
#define FREE_REFERENCES_LABEL_39_0 14
#define NUMBER_OF_LINKER_SECTIONS_39_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_39_4);
      goto scode_global_variable_name_7;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_39_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_39_11);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_global_variable_name_13)
DEFLABEL (scode_global_variable_name_7)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_21;
  Wrd9 = Wrd13;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (current_block [OBJECT_39_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_19;
  Wrd15 = Wrd19;

DEFLABEL (label_18)
  (Wrd24.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_0]));
  (Wrd33.Obj) = ((Wrd25.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd25.pObj) [0]) = (Wrd21.Obj);

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  if ((Wrd33.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_11])), (Wrd25.pObj), (Wrd21.Obj));

DEFLABEL (label_11)
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_10])), (Wrd16.pObj));

DEFLABEL (label_10)
  (Wrd15.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_8])), (Wrd10.pObj));

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_6 5
#define LABEL_40_5 7
#define LABEL_40_10 9
#define LABEL_40_11 11
#define LABEL_40_12 13
#define LABEL_40_8 15
#define ENVIRONMENT_LABEL_40_3 35
#define DEBUGGING_LABEL_40_2 34
#define OBJECT_40_0 33
#define EXECUTE_CACHE_40_17 17
#define EXECUTE_CACHE_40_16 19
#define EXECUTE_CACHE_40_15 21
#define EXECUTE_CACHE_40_14 23
#define EXECUTE_CACHE_40_13 25
#define EXECUTE_CACHE_40_9 27
#define EXECUTE_CACHE_40_7 29
#define FREE_REFERENCE_40_0 32
#define FREE_REFERENCES_LABEL_40_0 16
#define NUMBER_OF_LINKER_SECTIONS_40_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_40_4);
      goto generate_unassignedP_5;

    case 1:
      current_block = (Rpc - LABEL_40_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_40_10);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_40_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_40_12);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_40_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_unassignedP_9)
DEFLABEL (generate_unassignedP_5)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_12;
  Wrd8 = Wrd12;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_10);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_14]));

DEFLABEL (label_10)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_8);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_17]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_6 5
#define LABEL_41_7 7
#define LABEL_41_5 9
#define LABEL_41_8 11
#define LABEL_41_9 13
#define LABEL_41_11 15
#define LABEL_41_10 17
#define LABEL_41_14 19
#define LABEL_41_13 21
#define LABEL_41_16 23
#define LABEL_41_18 25
#define LABEL_41_15 27
#define LABEL_41_19 29
#define LABEL_41_20 31
#define ENVIRONMENT_LABEL_41_3 44
#define DEBUGGING_LABEL_41_2 43
#define OBJECT_41_5 42
#define OBJECT_41_4 41
#define OBJECT_41_3 40
#define OBJECT_41_2 39
#define OBJECT_41_1 38
#define OBJECT_41_0 37
#define EXECUTE_CACHE_41_17 33
#define EXECUTE_CACHE_41_12 35
#define FREE_REFERENCES_LABEL_41_0 32
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd28;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd59;
  machine_word Wrd67;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd15;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_41_4);
      goto find_name_19;

    case 1:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_14;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_41_5);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_41_8);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_41_9);
      goto search_18;

    case 6:
      current_block = (Rpc - LABEL_41_11);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_41_14);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_41_13);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_41_16);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_41_18);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_41_15);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_41_19);
      goto label_26;

    case 14:
      current_block = (Rpc - LABEL_41_20);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_name_29)
DEFLABEL (find_name_19)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  Rdl = (& (Rsp [5]));
  goto search_18;

DEFLABEL (lambda_31)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_41_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_37;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd14.Lng))))
    goto label_37;
  (Wrd6.Obj) = ((Wrd12.pObj) [11]);

DEFLABEL (label_36)
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 10)
    goto label_34;

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 3);

DEFLABEL (label_34)
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd39.Lng))))
    goto label_33;
  ((Wrd37.pObj) [11]) = (Wrd22.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_35)
  (Wrd27.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd27.Obj));
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_37)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_41_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_21)
  (Wrd6.Obj) = Rvl;
  goto label_36;

DEFLABEL (search_32)
DEFLABEL (search_18)
  DLINK_INTERRUPT_CHECK (25, LABEL_41_9);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_52;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd18.Lng))))
    goto label_52;
  (Wrd12.Obj) = ((Wrd16.pObj) [9]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_51)
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_41_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  Rvl = Rvl;
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_38)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_50;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd23.Lng))))
    goto label_50;
  (Wrd17.Obj) = ((Wrd21.pObj) [10]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_49)
  (Wrd35.Obj) = (Rsp [6]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_41_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  Rvl = Rvl;
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_39)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_48;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd56.Lng))))
    goto label_48;
  (Wrd18.Obj) = ((Wrd54.pObj) [4]);
  if (! ((Wrd18.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_45;

DEFLABEL (label_44)
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_41_15);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [0]) = Rvl;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_43;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_43;
  (Wrd8.Obj) = ((Wrd14.pObj) [10]);

DEFLABEL (label_42)
  (Wrd31.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_41;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd47.Lng))))
    goto label_41;
  ((Wrd45.pObj) [10]) = (Wrd28.Obj);

DEFLABEL (label_40)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd39.Obj);
  goto pop_return;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_41_6);
  goto label_35;

DEFLABEL (label_41)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.Obj) = (current_block [OBJECT_41_4]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_20]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 3);

DEFLABEL (label_27)
  (Wrd50.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd50.Obj));
  goto label_40;

DEFLABEL (label_43)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_41_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_19]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_26)
  (Wrd19.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd8.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [5]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_47;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd38.Lng))))
    goto label_47;
  (Wrd32.Obj) = ((Wrd36.pObj) [4]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_46)
  Rdl = (& (Rsp [3]));
  goto search_18;

DEFLABEL (label_47)
  (Wrd45.Obj) = (Rsp [5]);
  (Wrd46.Obj) = (current_block [OBJECT_41_5]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_18]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_24)
  (Wrd41.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd41.Obj));
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_48)
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.Obj) = (current_block [OBJECT_41_5]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_16]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_25)
  (Wrd59.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd59.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_45;

DEFLABEL (label_50)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.Obj) = (current_block [OBJECT_41_4]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_23)
  (Wrd26.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd26.Obj));
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_41_3]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_22)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (lambda_30)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_41_7);
  Rsp = (& (Rsp [3]));
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define TAG_42_6 1
#define LABEL_42_7 7
#define LABEL_42_8 9
#define LABEL_42_9 11
#define ENVIRONMENT_LABEL_42_3 20
#define DEBUGGING_LABEL_42_2 19
#define EXECUTE_CACHE_42_12 13
#define EXECUTE_CACHE_42_11 15
#define EXECUTE_CACHE_42_10 17
#define FREE_REFERENCES_LABEL_42_0 12
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_42_4);
      goto make_variable_generator_4;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_42_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_variable_generator_7)
DEFLABEL (make_variable_generator_4)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_5])));
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
  CLOSURE_HEADER (LABEL_42_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define LABEL_43_7 9
#define ENVIRONMENT_LABEL_43_3 20
#define DEBUGGING_LABEL_43_2 19
#define EXECUTE_CACHE_43_11 11
#define EXECUTE_CACHE_43_10 13
#define EXECUTE_CACHE_43_9 15
#define EXECUTE_CACHE_43_8 17
#define FREE_REFERENCES_LABEL_43_0 10
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_43_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_7 5
#define LABEL_44_5 7
#define LABEL_44_6 9
#define ENVIRONMENT_LABEL_44_3 20
#define DEBUGGING_LABEL_44_2 19
#define OBJECT_44_1 18
#define OBJECT_44_0 17
#define EXECUTE_CACHE_44_10 11
#define EXECUTE_CACHE_44_9 13
#define EXECUTE_CACHE_44_8 15
#define FREE_REFERENCES_LABEL_44_0 10
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_44_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_44_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_44_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_9;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_8)
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_9]));

DEFLABEL (label_9)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_6 7
#define LABEL_45_7 9
#define ENVIRONMENT_LABEL_45_3 20
#define DEBUGGING_LABEL_45_2 19
#define EXECUTE_CACHE_45_11 11
#define EXECUTE_CACHE_45_10 13
#define EXECUTE_CACHE_45_9 15
#define EXECUTE_CACHE_45_8 17
#define FREE_REFERENCES_LABEL_45_0 10
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_45_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define ENVIRONMENT_LABEL_46_3 13
#define DEBUGGING_LABEL_46_2 12
#define OBJECT_46_0 11
#define EXECUTE_CACHE_46_7 7
#define EXECUTE_CACHE_46_6 9
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_46_4);
      goto generate_lambda_1;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_lambda_4)
DEFLABEL (generate_lambda_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd6.Obj);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  (Rsp [6]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_6 7
#define TAG_47_7 2
#define LABEL_47_10 9
#define TAG_47_11 3
#define LABEL_47_12 11
#define LABEL_47_14 13
#define LABEL_47_19 15
#define LABEL_47_17 17
#define LABEL_47_20 19
#define LABEL_47_22 21
#define LABEL_47_23 23
#define LABEL_47_29 25
#define LABEL_47_30 27
#define LABEL_47_31 29
#define LABEL_47_24 31
#define LABEL_47_25 33
#define LABEL_47_26 35
#define LABEL_47_27 37
#define LABEL_47_38 39
#define LABEL_47_34 41
#define LABEL_47_39 43
#define LABEL_47_40 45
#define LABEL_47_35 47
#define LABEL_47_49 49
#define LABEL_47_42 51
#define LABEL_47_41 53
#define LABEL_47_53 55
#define LABEL_47_45 57
#define LABEL_47_54 59
#define LABEL_47_46 61
#define TAG_47_47 29
#define LABEL_47_32 63
#define LABEL_47_52 65
#define LABEL_47_56 67
#define LABEL_47_50 69
#define LABEL_47_60 71
#define LABEL_47_61 73
#define LABEL_47_62 75
#define ENVIRONMENT_LABEL_47_3 136
#define DEBUGGING_LABEL_47_2 135
#define OBJECT_47_15 134
#define OBJECT_47_14 133
#define OBJECT_47_13 132
#define OBJECT_47_12 131
#define OBJECT_47_11 130
#define OBJECT_47_10 129
#define OBJECT_47_9 128
#define OBJECT_47_8 127
#define OBJECT_47_7 126
#define OBJECT_47_6 125
#define OBJECT_47_5 124
#define OBJECT_47_4 123
#define OBJECT_47_3 122
#define OBJECT_47_2 121
#define OBJECT_47_1 120
#define OBJECT_47_0 119
#define EXECUTE_CACHE_47_63 77
#define EXECUTE_CACHE_47_59 79
#define EXECUTE_CACHE_47_58 81
#define EXECUTE_CACHE_47_57 83
#define EXECUTE_CACHE_47_55 85
#define EXECUTE_CACHE_47_51 87
#define EXECUTE_CACHE_47_48 89
#define EXECUTE_CACHE_47_44 91
#define EXECUTE_CACHE_47_43 93
#define EXECUTE_CACHE_47_37 95
#define EXECUTE_CACHE_47_36 97
#define EXECUTE_CACHE_47_33 99
#define EXECUTE_CACHE_47_28 101
#define EXECUTE_CACHE_47_21 103
#define EXECUTE_CACHE_47_18 105
#define EXECUTE_CACHE_47_16 107
#define EXECUTE_CACHE_47_15 109
#define EXECUTE_CACHE_47_13 111
#define EXECUTE_CACHE_47_9 113
#define EXECUTE_CACHE_47_8 115
#define FREE_REFERENCE_47_0 118
#define FREE_REFERENCES_LABEL_47_0 76
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd33;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd29;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd47;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_47_4);
      goto generate_lambda__42;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_41;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto lambda_55;

    case 3:
      current_block = (Rpc - LABEL_47_10);
      goto lambda_56;

    case 4:
      current_block = (Rpc - LABEL_47_12);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_47_14);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_47_19);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_47_17);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_47_20);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_47_22);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_47_23);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_47_29);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_47_30);
      goto label_47;

    case 13:
      current_block = (Rpc - LABEL_47_31);
      goto label_46;

    case 14:
      current_block = (Rpc - LABEL_47_24);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_47_25);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_47_26);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_47_27);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_47_38);
      goto continuation_26;

    case 19:
      current_block = (Rpc - LABEL_47_34);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_47_39);
      goto label_45;

    case 21:
      current_block = (Rpc - LABEL_47_40);
      goto label_44;

    case 22:
      current_block = (Rpc - LABEL_47_35);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_47_49);
      goto continuation_29;

    case 24:
      current_block = (Rpc - LABEL_47_42);
      goto continuation_27;

    case 25:
      current_block = (Rpc - LABEL_47_41);
      goto continuation_30;

    case 26:
      current_block = (Rpc - LABEL_47_53);
      goto label_48;

    case 27:
      current_block = (Rpc - LABEL_47_45);
      goto continuation_21;

    case 28:
      current_block = (Rpc - LABEL_47_54);
      goto label_49;

    case 29:
      current_block = (Rpc - LABEL_47_46);
      goto lambda_57;

    case 30:
      current_block = (Rpc - LABEL_47_32);
      goto lambda_16;

    case 31:
      current_block = (Rpc - LABEL_47_52);
      goto continuation_28;

    case 32:
      current_block = (Rpc - LABEL_47_56);
      goto continuation_19;

    case 33:
      current_block = (Rpc - LABEL_47_50);
      goto continuation_31;

    case 34:
      current_block = (Rpc - LABEL_47_60);
      goto label_50;

    case 35:
      current_block = (Rpc - LABEL_47_61);
      goto label_51;

    case 36:
      current_block = (Rpc - LABEL_47_62);
      goto label_52;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_lambda__54)
DEFLABEL (generate_lambda__42)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x808, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_6])));
  Rhp += 6;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd20 = Wrd9;
  (Wrd21.Obj) = (Rsp [7]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd20.pObj) [5]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [6]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [7]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_47_6);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 16));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_10])));
  Rhp += 13;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd41 = Wrd6;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  ((Wrd41.pObj) [2]) = (Wrd44.Obj);
  (Wrd40.Obj) = ((Wrd43.pObj) [3]);
  ((Wrd41.pObj) [3]) = (Wrd40.Obj);
  (Wrd36.Obj) = ((Wrd43.pObj) [4]);
  ((Wrd41.pObj) [4]) = (Wrd36.Obj);
  (Wrd32.Obj) = ((Wrd43.pObj) [5]);
  ((Wrd41.pObj) [5]) = (Wrd32.Obj);
  (Wrd28.Obj) = ((Wrd43.pObj) [6]);
  ((Wrd41.pObj) [6]) = (Wrd28.Obj);
  (Wrd24.Obj) = ((Wrd43.pObj) [7]);
  ((Wrd41.pObj) [7]) = (Wrd24.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  ((Wrd41.pObj) [8]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  ((Wrd41.pObj) [9]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  ((Wrd41.pObj) [10]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd41.pObj) [11]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd41.pObj) [12]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd41.pObj) [13]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd41.pObj) [14]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_12]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_12);
  (Rsp [7]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [7]) = (Wrd6.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_16]));

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_47_10);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_47_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [11]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_86;
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_47_19);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_85)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [12]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_47_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [13]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_21]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_27]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [8]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd24.Obj) = (current_block [OBJECT_47_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_59;

DEFLABEL (label_60)
  (Wrd25.Obj) = (current_block [OBJECT_47_2]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_59)
DEFLABEL (label_84)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_28]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_47_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_28]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_47_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_28]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_47_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_37]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_47_29);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd62.Obj) = (Rsp [7]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_83;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd61.Lng))))
    goto label_83;
  ((Wrd59.pObj) [9]) = (Wrd20.Obj);

DEFLABEL (label_82)
  (Wrd42.Obj) = (Rsp [8]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [5]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_81;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd41.Lng))))
    goto label_81;
  (Wrd29.Obj) = ((Wrd39.pObj) [3]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_62;

DEFLABEL (label_61)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_32]))));
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_33]));

DEFLABEL (label_62)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_80)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [9]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd13.pObj) [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_36]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_47_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_47);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_46])));
  Rhp += 3;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd16.Obj) = (Rsp [10]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [5]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = (Rsp [9]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_48]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_47_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (Wrd12.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (Rsp [13]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [14]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_79;
  Wrd17 = Wrd21;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_55]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_47_34);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [5]));
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_77;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd61.Lng))))
    goto label_77;
  ((Wrd59.pObj) [19]) = (Wrd8.Obj);

DEFLABEL (label_76)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [6]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_75;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd38.Lng))))
    goto label_75;
  (Wrd14.Obj) = ((Wrd36.pObj) [2]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_73;

DEFLABEL (label_74)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_38]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_47_9]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_47_10]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_44]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_47_38);

DEFLABEL (label_73)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_41]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_42]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [8]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_43]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_47_42);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_49]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_52]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [8]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_51]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_47_52);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_59]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_47_49);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_50]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [8]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_51]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_47_50);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_71;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_70)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_69;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_68)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_67;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_66)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [9]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = ((Wrd28.pObj) [10]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd28.pObj) [11]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = ((Wrd28.pObj) [12]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = ((Wrd28.pObj) [13]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = ((Wrd28.pObj) [14]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_63]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_47_41);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_65)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_64;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 30L) < ((unsigned long) (Wrd15.Lng))))
    goto label_64;
  ((Wrd13.pObj) [31]) = (Wrd5.Obj);

DEFLABEL (label_63)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_47_11]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_53]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_4]), 3);

DEFLABEL (label_48)
  goto label_63;

DEFLABEL (label_67)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_62]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_15]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_61]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_14]), 1);

DEFLABEL (label_51)
  (Wrd13.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_60]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_14]), 1);

DEFLABEL (label_50)
  (Wrd6.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd5.Obj) = ((Wrd37.pObj) [4]);
  Rsp = (& (Rsp [1]));
  goto label_65;

DEFLABEL (label_75)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [6]);
  (Wrd46.Obj) = (current_block [OBJECT_47_8]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_40]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_6]), 2);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  goto label_74;

DEFLABEL (label_77)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.Obj) = (current_block [OBJECT_47_7]);
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd66.Obj) = ((Wrd68.pObj) [2]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_39]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_4]), 3);

DEFLABEL (label_45)
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_54])), (Wrd18.pObj));

DEFLABEL (label_49)
  (Wrd17.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd47.Obj) = (Rsp [8]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [5]);
  (Wrd49.Obj) = (current_block [OBJECT_47_5]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_31]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_6]), 2);

DEFLABEL (label_46)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_61;

DEFLABEL (label_83)
  (Wrd64.Obj) = (Rsp [7]);
  (Wrd65.Obj) = (current_block [OBJECT_47_3]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_30]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_4]), 3);

DEFLABEL (label_47)
  goto label_82;

DEFLABEL (label_86)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_85;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_47_24);
  goto label_80;

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_47_46);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_57]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_47_56);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_47_13]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd18.uLng) == 62)
    goto label_88;

DEFLABEL (label_87)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_6]), 2);

DEFLABEL (label_88)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_87;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_58)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_47_32);
  (Wrd5.Obj) = (current_block [OBJECT_47_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_47_9]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_58]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_8 9
#define LABEL_48_13 11
#define LABEL_48_14 13
#define LABEL_48_21 15
#define LABEL_48_15 17
#define LABEL_48_11 19
#define LABEL_48_18 21
#define LABEL_48_19 23
#define LABEL_48_25 25
#define LABEL_48_20 27
#define ENVIRONMENT_LABEL_48_3 54
#define DEBUGGING_LABEL_48_2 53
#define OBJECT_48_0 52
#define EXECUTE_CACHE_48_26 29
#define EXECUTE_CACHE_48_24 31
#define EXECUTE_CACHE_48_23 33
#define EXECUTE_CACHE_48_22 35
#define EXECUTE_CACHE_48_17 37
#define EXECUTE_CACHE_48_16 39
#define EXECUTE_CACHE_48_12 41
#define EXECUTE_CACHE_48_10 43
#define EXECUTE_CACHE_48_9 45
#define EXECUTE_CACHE_48_7 47
#define FREE_REFERENCE_48_1 50
#define FREE_REFERENCE_48_0 51
#define FREE_REFERENCES_LABEL_48_0 28
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_48_4);
      goto parse_procedure_body_11;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_48_13);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_48_14);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_48_21);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_48_15);
      goto lambda_6;

    case 8:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_48_18);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_48_19);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_48_25);
      goto label_14;

    case 12:
      current_block = (Rpc - LABEL_48_20);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_procedure_body_16)
DEFLABEL (parse_procedure_body_11)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (lambda_17)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_48_8);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_48_0]))
    goto label_23;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_48_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_22;
  Wrd16 = Wrd20;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd22.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_22]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_48_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_20;
  Wrd10 = Wrd14;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_48_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_48_13);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_48_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_17]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_25])), (Wrd11.pObj));

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_21])), (Wrd17.pObj));

DEFLABEL (label_13)
  (Wrd16.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_48_11);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_17]));

DEFLABEL (lambda_18)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_48_15);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_23]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_8 5
#define LABEL_49_10 7
#define LABEL_49_12 9
#define LABEL_49_7 11
#define LABEL_49_15 13
#define LABEL_49_17 15
#define LABEL_49_18 17
#define LABEL_49_14 19
#define LABEL_49_11 21
#define LABEL_49_20 23
#define TAG_49_21 10
#define LABEL_49_25 25
#define LABEL_49_26 27
#define LABEL_49_29 29
#define LABEL_49_23 31
#define LABEL_49_35 33
#define LABEL_49_36 35
#define LABEL_49_32 37
#define TAG_49_33 17
#define LABEL_49_37 39
#define LABEL_49_34 41
#define LABEL_49_27 43
#define TAG_49_28 20
#define LABEL_49_38 45
#define LABEL_49_39 47
#define ENVIRONMENT_LABEL_49_3 75
#define DEBUGGING_LABEL_49_2 74
#define OBJECT_49_4 73
#define OBJECT_49_3 72
#define OBJECT_49_2 71
#define OBJECT_49_1 70
#define OBJECT_49_0 69
#define EXECUTE_CACHE_49_31 49
#define EXECUTE_CACHE_49_30 51
#define EXECUTE_CACHE_49_24 53
#define EXECUTE_CACHE_49_22 55
#define EXECUTE_CACHE_49_19 57
#define EXECUTE_CACHE_49_16 59
#define EXECUTE_CACHE_49_13 61
#define EXECUTE_CACHE_49_9 63
#define EXECUTE_CACHE_49_6 65
#define EXECUTE_CACHE_49_5 67
#define FREE_REFERENCES_LABEL_49_0 48
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd7;
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
      goto parse_procedure_body__34;

    case 1:
      current_block = (Rpc - LABEL_49_8);
      goto label_36;

    case 2:
      current_block = (Rpc - LABEL_49_10);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_49_12);
      goto label_40;

    case 4:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_49_15);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_49_17);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_49_18);
      goto label_38;

    case 8:
      current_block = (Rpc - LABEL_49_14);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_49_11);
      goto continuation_17;

    case 10:
      current_block = (Rpc - LABEL_49_20);
      goto lambda_49;

    case 11:
      current_block = (Rpc - LABEL_49_25);
      goto label_41;

    case 12:
      current_block = (Rpc - LABEL_49_26);
      goto continuation_21;

    case 13:
      current_block = (Rpc - LABEL_49_29);
      goto continuation_20;

    case 14:
      current_block = (Rpc - LABEL_49_23);
      goto continuation_19;

    case 15:
      current_block = (Rpc - LABEL_49_35);
      goto label_42;

    case 16:
      current_block = (Rpc - LABEL_49_36);
      goto label_43;

    case 17:
      current_block = (Rpc - LABEL_49_32);
      goto lambda_51;

    case 18:
      current_block = (Rpc - LABEL_49_37);
      goto label_44;

    case 19:
      current_block = (Rpc - LABEL_49_34);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_49_27);
      goto lambda_50;

    case 21:
      current_block = (Rpc - LABEL_49_38);
      goto label_45;

    case 22:
      current_block = (Rpc - LABEL_49_39);
      goto label_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_procedure_body__48)
DEFLABEL (parse_procedure_body__34)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_49_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_52;
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_5]));

DEFLABEL (label_52)
  (Wrd7.Obj) = (Rsp [1]);
  if (! ((Wrd7.Obj) == (Wrd6.Obj)))
    goto label_53;
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_49_1]);
  (Rsp [0]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (label_53)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_73;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_72)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_49_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_71;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_70)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_69;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_68)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_49_10);
  (Wrd41.Obj) = (* (Rsp++));
  if (Rvl == (Wrd41.Obj))
    goto label_57;

DEFLABEL (label_56)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_14]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_55;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_54)
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_49_14);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_20])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_22]));

DEFLABEL (label_55)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_15]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_67;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_66)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_13]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_49_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_24]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_49_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_60;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_29]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_31]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_49_29);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_60;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_26]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_30]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_49_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;

DEFLABEL (label_60)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_32])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_58;

DEFLABEL (label_59)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd51.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_27])));
  Rhp += 2;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd51.pObj)));
  Wrd54 = Wrd51;
  (Wrd55.Obj) = (Rsp [2]);
  ((Wrd54.pObj) [2]) = (Wrd55.Obj);
  (Wrd53.Obj) = (Rsp [1]);
  ((Wrd54.pObj) [3]) = (Wrd53.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_58)
DEFLABEL (label_65)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_34]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_64;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_63)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_62;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_16]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_49_34);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_22]));

DEFLABEL (label_62)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_36]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_35]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_67)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_49_20);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_75;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_74)
  (Wrd23.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [4]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_5]));

DEFLABEL (label_75)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_25]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 1);

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_74;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_49_32);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_80;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_79)
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [3]);
  (Wrd30.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.Obj) = (current_block [OBJECT_49_0]);
  if ((Wrd31.Obj) == (Wrd32.Obj))
    goto label_77;
  Wrd33 = Wrd31;
  goto label_76;

DEFLABEL (label_77)
  (Wrd37.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));

DEFLABEL (label_76)
DEFLABEL (label_78)
  (Rsp [4]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_5]));

DEFLABEL (label_80)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_37]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 1);

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_79;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_49_27);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_84;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_83)
  (Wrd23.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [3]) = (Wrd20.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_82;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd24.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_81)
  (Wrd42.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Rsp [4]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_5]));

DEFLABEL (label_82)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_39]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 1);

DEFLABEL (label_46)
  (Wrd24.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_38]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 1);

DEFLABEL (label_45)
  (Wrd5.Obj) = Rvl;
  goto label_83;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_8 7
#define LABEL_50_9 9
#define LABEL_50_14 11
#define LABEL_50_11 13
#define LABEL_50_12 15
#define LABEL_50_13 17
#define LABEL_50_19 19
#define LABEL_50_16 21
#define ENVIRONMENT_LABEL_50_3 42
#define DEBUGGING_LABEL_50_2 41
#define OBJECT_50_3 40
#define OBJECT_50_2 39
#define OBJECT_50_1 38
#define OBJECT_50_0 37
#define EXECUTE_CACHE_50_20 23
#define EXECUTE_CACHE_50_18 25
#define EXECUTE_CACHE_50_17 27
#define EXECUTE_CACHE_50_15 29
#define EXECUTE_CACHE_50_10 31
#define EXECUTE_CACHE_50_7 33
#define EXECUTE_CACHE_50_6 35
#define FREE_REFERENCES_LABEL_50_0 22
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
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
      goto generate_sequence_10;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_50_14);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_50_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_50_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_50_19);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_50_16);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_sequence_15)
DEFLABEL (generate_sequence_10)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  (Wrd16.Obj) = (current_block [OBJECT_50_0]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_9);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_20;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_50_13);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_18;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_50_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_50_11);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_50_16);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_18)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define TAG_51_6 1
#define LABEL_51_8 7
#define LABEL_51_10 9
#define LABEL_51_11 11
#define LABEL_51_12 13
#define LABEL_51_13 15
#define LABEL_51_14 17
#define TAG_51_15 7
#define LABEL_51_28 19
#define LABEL_51_16 21
#define LABEL_51_17 23
#define TAG_51_18 10
#define LABEL_51_30 25
#define LABEL_51_19 27
#define TAG_51_20 12
#define LABEL_51_34 29
#define LABEL_51_21 31
#define TAG_51_22 14
#define LABEL_51_35 33
#define LABEL_51_23 35
#define TAG_51_24 16
#define LABEL_51_36 37
#define LABEL_51_37 39
#define LABEL_51_26 41
#define LABEL_51_42 43
#define LABEL_51_27 45
#define LABEL_51_31 47
#define TAG_51_32 22
#define LABEL_51_38 49
#define LABEL_51_46 51
#define LABEL_51_40 53
#define LABEL_51_41 55
#define LABEL_51_44 57
#define TAG_51_45 27
#define LABEL_51_49 59
#define LABEL_51_50 61
#define LABEL_51_47 63
#define LABEL_51_48 65
#define ENVIRONMENT_LABEL_51_3 98
#define DEBUGGING_LABEL_51_2 97
#define OBJECT_51_7 96
#define OBJECT_51_6 95
#define OBJECT_51_5 94
#define OBJECT_51_4 93
#define OBJECT_51_3 92
#define OBJECT_51_2 91
#define OBJECT_51_1 90
#define OBJECT_51_0 89
#define EXECUTE_CACHE_51_52 67
#define EXECUTE_CACHE_51_51 69
#define EXECUTE_CACHE_51_43 71
#define EXECUTE_CACHE_51_39 73
#define EXECUTE_CACHE_51_33 75
#define EXECUTE_CACHE_51_29 77
#define EXECUTE_CACHE_51_25 79
#define EXECUTE_CACHE_51_9 81
#define EXECUTE_CACHE_51_7 83
#define FREE_REFERENCE_51_2 86
#define FREE_REFERENCE_51_1 87
#define FREE_REFERENCE_51_0 88
#define FREE_REFERENCES_LABEL_51_0 66
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd91;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd101;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd98;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd118;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd115;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_51_4);
      goto generate_conditional_33;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto lambda_50;

    case 2:
      current_block = (Rpc - LABEL_51_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_51_10);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_51_11);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_51_12);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_51_13);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_51_14);
      goto lambda_16;

    case 8:
      current_block = (Rpc - LABEL_51_28);
      goto label_39;

    case 9:
      current_block = (Rpc - LABEL_51_16);
      goto continuation_26;

    case 10:
      current_block = (Rpc - LABEL_51_17);
      goto lambda_52;

    case 11:
      current_block = (Rpc - LABEL_51_30);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_51_19);
      goto lambda_53;

    case 13:
      current_block = (Rpc - LABEL_51_34);
      goto label_41;

    case 14:
      current_block = (Rpc - LABEL_51_21);
      goto lambda_54;

    case 15:
      current_block = (Rpc - LABEL_51_35);
      goto label_42;

    case 16:
      current_block = (Rpc - LABEL_51_23);
      goto lambda_55;

    case 17:
      current_block = (Rpc - LABEL_51_36);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_51_37);
      goto lambda_5;

    case 19:
      current_block = (Rpc - LABEL_51_26);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_51_42);
      goto label_44;

    case 21:
      current_block = (Rpc - LABEL_51_27);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_51_31);
      goto lambda_56;

    case 23:
      current_block = (Rpc - LABEL_51_38);
      goto continuation_4;

    case 24:
      current_block = (Rpc - LABEL_51_46);
      goto label_45;

    case 25:
      current_block = (Rpc - LABEL_51_40);
      goto continuation_12;

    case 26:
      current_block = (Rpc - LABEL_51_41);
      goto continuation_11;

    case 27:
      current_block = (Rpc - LABEL_51_44);
      goto lambda_58;

    case 28:
      current_block = (Rpc - LABEL_51_49);
      goto label_46;

    case 29:
      current_block = (Rpc - LABEL_51_50);
      goto label_47;

    case 30:
      current_block = (Rpc - LABEL_51_47);
      goto continuation_3;

    case 31:
      current_block = (Rpc - LABEL_51_48);
      goto continuation_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_conditional_49)
DEFLABEL (generate_conditional_33)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_5])));
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
  (Rsp [2]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_51_5);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_8);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_68;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_68;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_67)
  if ((Wrd5.Obj) == (current_block [OBJECT_51_3]))
    goto label_65;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_64;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd30.Lng))))
    goto label_64;
  (Wrd22.Obj) = ((Wrd28.pObj) [4]);

DEFLABEL (label_63)
  if ((Wrd22.Obj) == (current_block [OBJECT_51_3]))
    goto label_59;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_14])));
  Rhp += 5;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  Wrd52 = Wrd41;
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [3]);
  ((Wrd52.pObj) [2]) = (Wrd55.Obj);
  (Wrd51.Obj) = ((Wrd54.pObj) [5]);
  ((Wrd52.pObj) [3]) = (Wrd51.Obj);
  (Wrd47.Obj) = (Rsp [4]);
  ((Wrd52.pObj) [4]) = (Wrd47.Obj);
  (Wrd45.Obj) = (Rsp [3]);
  ((Wrd52.pObj) [5]) = (Wrd45.Obj);
  (Wrd43.Obj) = (Rsp [0]);
  ((Wrd52.pObj) [6]) = (Wrd43.Obj);
  (Rsp [0]) = (Wrd40.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_16]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd60.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_17])));
  Rhp += 3;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd60.pObj)));
  Wrd67 = Wrd60;
  (Wrd70.Obj) = ((Wrd54.pObj) [4]);
  ((Wrd67.pObj) [2]) = (Wrd70.Obj);
  ((Wrd67.pObj) [3]) = (Wrd51.Obj);
  ((Wrd67.pObj) [4]) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd72.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_19])));
  Rhp += 2;
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd72.pObj)));
  Wrd75 = Wrd72;
  ((Wrd75.pObj) [2]) = (Wrd70.Obj);
  ((Wrd75.pObj) [3]) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd80.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_21])));
  Rhp += 2;
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd80.pObj)));
  Wrd83 = Wrd80;
  ((Wrd83.pObj) [2]) = (Wrd70.Obj);
  ((Wrd83.pObj) [3]) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd88.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_23])));
  Rhp += 2;
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd88.pObj)));
  Wrd91 = Wrd88;
  ((Wrd91.pObj) [2]) = (Wrd70.Obj);
  ((Wrd91.pObj) [3]) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_25]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_51_16);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_59)
  (Wrd98.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 10))
    goto label_61;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd107.Lng))))
    goto label_61;
  (Wrd101.Obj) = ((Wrd105.pObj) [3]);
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_60)
  goto lambda_5;

DEFLABEL (label_61)
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.Obj) = (current_block [OBJECT_51_1]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_13]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_37)
DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_64)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (current_block [OBJECT_51_4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_36)
  (Wrd22.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd115.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd125.Obj) = (Rsp [1]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd126.uLng) == 10))
    goto label_66;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [0]);
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd124.Lng))))
    goto label_66;
  (Wrd118.Obj) = ((Wrd122.pObj) [4]);
  (* (--Rsp)) = (Wrd118.Obj);
  goto label_60;

DEFLABEL (label_66)
  (Wrd127.Obj) = (Rsp [1]);
  (Wrd128.Obj) = (current_block [OBJECT_51_4]);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_11]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_38)
  goto label_62;

DEFLABEL (label_68)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_51_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_35)
  (Wrd5.Obj) = Rvl;
  goto label_67;

DEFLABEL (lambda_51)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_51_14);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_27]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd30.Obj) = ((Wrd10.pObj) [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_72;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_72;
  (Wrd19.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_71)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_29]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_51_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_43]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_51_26);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_40]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_41]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd30.Obj) = ((Wrd10.pObj) [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_70;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_70;
  (Wrd19.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_69)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_29]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_51_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_43]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_51_40);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [6]);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_70)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [2]);
  (Wrd35.Obj) = (current_block [OBJECT_51_1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_42]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_5]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [2]);
  (Wrd35.Obj) = (current_block [OBJECT_51_1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_28]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_5]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_51_17);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_74;
  Wrd5 = Wrd9;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_31])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd20 = Wrd19;
  (Wrd23.Obj) = ((Wrd12.pObj) [4]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Rsp [3]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_33]));

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_30])), (Wrd6.pObj));

DEFLABEL (label_40)
  (Wrd5.Obj) = Rvl;
  goto label_73;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_51_19);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_76;
  Wrd12 = Wrd16;

DEFLABEL (label_75)
  (Rsp [2]) = (Wrd12.Obj);
  goto lambda_16;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_34])), (Wrd13.pObj));

DEFLABEL (label_41)
  (Wrd12.Obj) = Rvl;
  goto label_75;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_51_21);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_78;
  Wrd12 = Wrd16;

DEFLABEL (label_77)
  (Rsp [2]) = (Wrd12.Obj);
  goto lambda_16;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_35])), (Wrd13.pObj));

DEFLABEL (label_42)
  (Wrd12.Obj) = Rvl;
  goto label_77;

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_51_23);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_80;
  Wrd12 = Wrd16;

DEFLABEL (label_79)
  (Rsp [2]) = (Wrd12.Obj);
  goto lambda_16;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_36])), (Wrd13.pObj));

DEFLABEL (label_43)
  (Wrd12.Obj) = Rvl;
  goto label_79;

DEFLABEL (lambda_57)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_51_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_39]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_51_38);
  (Rsp [4]) = Rvl;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_82;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_82;
  (Wrd6.Obj) = ((Wrd12.pObj) [2]);

DEFLABEL (label_81)
  (Wrd27.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd28.Obj) = (current_block [OBJECT_51_7]);
  (Wrd29.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd24.pObj) = (& (Rhp [-4]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd24.pObj)));
  (Rsp [5]) = (Wrd22.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_47]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = ((Wrd35.pObj) [4]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = ((Wrd35.pObj) [5]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_43]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_51_47);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_82)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_51_6]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_46]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_45)
  (Wrd6.Obj) = Rvl;
  goto label_81;

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_51_31);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_44])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [0]) = (Wrd11.Obj);
  goto lambda_16;

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_51_44);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_86;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_86;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_85)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_84;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_84;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_83)
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_51]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_51_48);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_52]));

DEFLABEL (label_84)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_51_6]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_50]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_5]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_51_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_49]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_5]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_85;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_8 5
#define LABEL_52_9 7
#define LABEL_52_5 9
#define TAG_52_6 3
#define LABEL_52_11 11
#define LABEL_52_13 13
#define LABEL_52_14 15
#define LABEL_52_15 17
#define LABEL_52_16 19
#define LABEL_52_17 21
#define LABEL_52_18 23
#define LABEL_52_19 25
#define LABEL_52_22 27
#define LABEL_52_23 29
#define LABEL_52_10 31
#define LABEL_52_24 33
#define LABEL_52_25 35
#define LABEL_52_29 37
#define LABEL_52_28 39
#define ENVIRONMENT_LABEL_52_3 68
#define DEBUGGING_LABEL_52_2 67
#define OBJECT_52_11 66
#define OBJECT_52_10 65
#define OBJECT_52_9 64
#define OBJECT_52_8 63
#define OBJECT_52_7 62
#define OBJECT_52_6 61
#define OBJECT_52_5 60
#define OBJECT_52_4 59
#define OBJECT_52_3 58
#define OBJECT_52_2 57
#define OBJECT_52_1 56
#define OBJECT_52_0 55
#define EXECUTE_CACHE_52_30 41
#define EXECUTE_CACHE_52_27 43
#define EXECUTE_CACHE_52_26 45
#define EXECUTE_CACHE_52_21 47
#define EXECUTE_CACHE_52_20 49
#define EXECUTE_CACHE_52_12 51
#define EXECUTE_CACHE_52_7 53
#define FREE_REFERENCES_LABEL_52_0 40
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd112;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd103;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd72;
  machine_word Wrd62;
  machine_word Wrd122;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_52_4);
      goto generate_combination_27;

    case 1:
      current_block = (Rpc - LABEL_52_8);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_52_9);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_52_5);
      goto lambda_40;

    case 4:
      current_block = (Rpc - LABEL_52_11);
      goto label_35;

    case 5:
      current_block = (Rpc - LABEL_52_13);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_52_14);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_52_15);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_52_16);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_52_17);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_52_18);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_52_19);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_52_22);
      goto loop_22;

    case 13:
      current_block = (Rpc - LABEL_52_23);
      goto label_36;

    case 14:
      current_block = (Rpc - LABEL_52_10);
      goto continuation_25;

    case 15:
      current_block = (Rpc - LABEL_52_24);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_52_25);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_52_29);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_52_28);
      goto continuation_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_combination_39)
DEFLABEL (generate_combination_27)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_52_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_52_5])));
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
  (Rsp [2]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_7]));

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_52_5);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == (current_block [OBJECT_52_0]))
    goto label_68;
  if ((Wrd6.Obj) == (current_block [OBJECT_52_3]))
    goto label_43;

DEFLABEL (label_42)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_52_9]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd31.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_52_19);
  (Rsp [5]) = Rvl;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_21]));

DEFLABEL (label_43)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_67;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_66)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_65;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_64)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd114.Obj) = (current_block [OBJECT_52_5]);
  (Wrd117.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd117.Lng))))
    goto label_63;
  (Wrd59.uLng) = (OBJECT_DATUM (Wrd114.Obj));
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd59.Obj) == (Wrd61.Obj))
    goto label_62;

DEFLABEL (label_61)
  (Wrd62.Obj) = (current_block [OBJECT_52_7]);
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd72.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd72.Lng)))
    goto label_44;
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_6]), 2);

DEFLABEL (label_44)
  (Wrd66.uLng) = (OBJECT_DATUM (Wrd62.Obj));
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd66.Obj) == (Wrd68.Obj))
    goto label_46;
  (Wrd64.Obj) = (current_block [OBJECT_52_8]);
  goto label_45;

DEFLABEL (label_46)
  (Wrd64.Obj) = (current_block [OBJECT_52_1]);

DEFLABEL (label_45)
DEFLABEL (label_60)
  Rsp = (& (Rsp [3]));
  if ((Wrd64.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;

DEFLABEL (label_58)
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd78.uLng) == 26)
    goto label_47;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_47)
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if ((Wrd80.Lng) > 0)
    goto label_49;
  (Wrd76.Obj) = (current_block [OBJECT_52_8]);
  goto label_48;

DEFLABEL (label_49)
  (Wrd76.Obj) = (current_block [OBJECT_52_1]);

DEFLABEL (label_48)
DEFLABEL (label_57)
  Rsp = (& (Rsp [2]));
  if ((Wrd76.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;

DEFLABEL (label_56)
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [5]);
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = ((Wrd83.pObj) [3]);
  (Rsp [2]) = (Wrd85.Obj);
  (Wrd91.Obj) = (Rsp [3]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 1))
    goto label_55;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd88.Obj) = ((Wrd90.pObj) [1]);

DEFLABEL (label_54)
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_53;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (* (--Rsp)) = (Wrd98.Obj);

DEFLABEL (label_52)
  (Wrd107.Obj) = (Rsp [4]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd108.uLng) == 1))
    goto label_51;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (* (--Rsp)) = (Wrd106.Obj);

DEFLABEL (label_50)
  goto loop_22;

DEFLABEL (label_51)
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_18]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_17]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_16]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 1);

DEFLABEL (label_31)
  (Wrd88.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_59)
  Rsp = (& (Rsp [2]));
  goto label_42;

DEFLABEL (label_62)
  Rsp = (& (Rsp [2]));
  goto label_58;

DEFLABEL (label_63)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_15]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_6]), 2);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_62;

DEFLABEL (label_65)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_14]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_13]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 1);

DEFLABEL (label_29)
  (Wrd38.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_68)
  (Wrd124.Obj) = (Rsp [0]);
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd126.Obj) = ((Wrd125.pObj) [5]);
  (* (--Rsp)) = (Wrd126.Obj);
  (Wrd127.Obj) = ((Wrd125.pObj) [3]);
  (Rsp [2]) = (Wrd127.Obj);
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (Wrd133.Obj) = (current_block [OBJECT_52_1]);
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd138.Obj) = (Rsp [6]);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd139.uLng) == 1))
    goto label_70;
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd138.Obj));
  (Wrd137.Obj) = ((Wrd136.pObj) [0]);
  (* (--Rsp)) = (Wrd137.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_52_10);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_27]));

DEFLABEL (label_70)
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_11]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_52_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_58;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_52_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_56;

DEFLABEL (loop_41)
DEFLABEL (loop_22)
  INTERRUPT_CHECK (26, LABEL_52_22);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_78;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_52_9])))
    goto label_72;

DEFLABEL (label_71)
  (Wrd23.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (Rsp [3]) = (Wrd23.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [4]);
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_26]));

DEFLABEL (label_72)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (current_block [OBJECT_52_10]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_25]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_52_11]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_16)
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_77;
  if (Rvl == (current_block [OBJECT_52_9]))
    goto label_74;

DEFLABEL (label_75)
  (Wrd8.Obj) = (current_block [OBJECT_52_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_73;

DEFLABEL (label_74)
  (Wrd9.Obj) = (current_block [OBJECT_52_2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_73)
DEFLABEL (label_76)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_30]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_52_24);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_21)
  (Rsp [1]) = Rvl;
  goto loop_22;

DEFLABEL (label_77)
  (Wrd11.Obj) = (current_block [OBJECT_52_9]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_29]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  goto label_74;

DEFLABEL (label_78)
  (Wrd28.Obj) = (current_block [OBJECT_52_9]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_23]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  goto label_71;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define LABEL_53_7 7
#define LABEL_53_6 9
#define LABEL_53_10 11
#define LABEL_53_11 13
#define LABEL_53_9 15
#define ENVIRONMENT_LABEL_53_3 24
#define DEBUGGING_LABEL_53_2 23
#define OBJECT_53_3 22
#define OBJECT_53_2 21
#define OBJECT_53_1 20
#define OBJECT_53_0 19
#define EXECUTE_CACHE_53_8 17
#define FREE_REFERENCES_LABEL_53_0 16
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_53_4);
      goto generate_operands_10;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto walk_8;

    case 2:
      current_block = (Rpc - LABEL_53_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_53_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_53_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_53_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_operands_16)
DEFLABEL (generate_operands_10)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  Rdl = (& (Rsp [9]));
  goto walk_8;

DEFLABEL (walk_17)
DEFLABEL (walk_8)
  DLINK_INTERRUPT_CHECK (25, LABEL_53_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_18;
  Rvl = (current_block [OBJECT_53_2]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_24;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_23)
  (Wrd31.Obj) = (Rsp [8]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = ((Wrd32.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_22;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = ((Wrd28.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_22;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_21)
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_20;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_19)
  Rdl = (& (Rsp [3]));
  goto walk_8;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_53_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_20)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_3]), 1);

DEFLABEL (label_14)
  (Wrd35.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd35.Obj));
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_13)
  (Wrd16.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd16.Obj));
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 1);

DEFLABEL (label_12)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define TAG_54_6 1
#define LABEL_54_7 7
#define LABEL_54_8 9
#define TAG_54_9 3
#define LABEL_54_20 11
#define LABEL_54_10 13
#define TAG_54_11 5
#define LABEL_54_24 15
#define LABEL_54_12 17
#define TAG_54_13 7
#define LABEL_54_14 19
#define TAG_54_15 8
#define LABEL_54_28 21
#define LABEL_54_17 23
#define LABEL_54_18 25
#define LABEL_54_21 27
#define TAG_54_22 12
#define LABEL_54_25 29
#define TAG_54_26 13
#define LABEL_54_38 31
#define LABEL_54_40 33
#define LABEL_54_27 35
#define LABEL_54_42 37
#define LABEL_54_30 39
#define LABEL_54_31 41
#define TAG_54_32 19
#define LABEL_54_33 43
#define LABEL_54_37 45
#define LABEL_54_39 47
#define LABEL_54_43 49
#define TAG_54_44 23
#define LABEL_54_51 51
#define LABEL_54_53 53
#define LABEL_54_46 55
#define LABEL_54_57 57
#define LABEL_54_50 59
#define LABEL_54_59 61
#define LABEL_54_52 63
#define LABEL_54_56 65
#define LABEL_54_54 67
#define LABEL_54_60 69
#define LABEL_54_61 71
#define LABEL_54_63 73
#define LABEL_54_70 75
#define LABEL_54_64 77
#define ENVIRONMENT_LABEL_54_3 138
#define DEBUGGING_LABEL_54_2 137
#define OBJECT_54_10 136
#define OBJECT_54_9 135
#define OBJECT_54_8 134
#define OBJECT_54_7 133
#define OBJECT_54_6 132
#define OBJECT_54_5 131
#define OBJECT_54_4 130
#define OBJECT_54_3 129
#define OBJECT_54_2 128
#define OBJECT_54_1 127
#define OBJECT_54_0 126
#define EXECUTE_CACHE_54_71 79
#define EXECUTE_CACHE_54_69 81
#define EXECUTE_CACHE_54_68 83
#define EXECUTE_CACHE_54_67 85
#define EXECUTE_CACHE_54_66 87
#define EXECUTE_CACHE_54_65 89
#define EXECUTE_CACHE_54_62 91
#define EXECUTE_CACHE_54_58 93
#define EXECUTE_CACHE_54_55 95
#define EXECUTE_CACHE_54_49 97
#define EXECUTE_CACHE_54_48 99
#define EXECUTE_CACHE_54_47 101
#define EXECUTE_CACHE_54_45 103
#define EXECUTE_CACHE_54_41 105
#define EXECUTE_CACHE_54_36 107
#define EXECUTE_CACHE_54_35 109
#define EXECUTE_CACHE_54_34 111
#define EXECUTE_CACHE_54_29 113
#define EXECUTE_CACHE_54_23 115
#define EXECUTE_CACHE_54_19 117
#define EXECUTE_CACHE_54_16 119
#define FREE_REFERENCE_54_3 122
#define FREE_REFERENCE_54_2 123
#define FREE_REFERENCE_54_1 124
#define FREE_REFERENCE_54_0 125
#define FREE_REFERENCES_LABEL_54_0 78
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd17;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
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
      goto generate_operator_38;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_36;

    case 3:
      current_block = (Rpc - LABEL_54_8);
      goto lambda_53;

    case 4:
      current_block = (Rpc - LABEL_54_20);
      goto label_40;

    case 5:
      current_block = (Rpc - LABEL_54_10);
      goto lambda_54;

    case 6:
      current_block = (Rpc - LABEL_54_24);
      goto label_41;

    case 7:
      current_block = (Rpc - LABEL_54_12);
      goto lambda_55;

    case 8:
      current_block = (Rpc - LABEL_54_14);
      goto lambda_56;

    case 9:
      current_block = (Rpc - LABEL_54_28);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_54_17);
      goto continuation_1;

    case 11:
      current_block = (Rpc - LABEL_54_18);
      goto continuation_0;

    case 12:
      current_block = (Rpc - LABEL_54_21);
      goto lambda_57;

    case 13:
      current_block = (Rpc - LABEL_54_25);
      goto lambda_58;

    case 14:
      current_block = (Rpc - LABEL_54_38);
      goto label_42;

    case 15:
      current_block = (Rpc - LABEL_54_40);
      goto label_43;

    case 16:
      current_block = (Rpc - LABEL_54_27);
      goto continuation_13;

    case 17:
      current_block = (Rpc - LABEL_54_42);
      goto label_44;

    case 18:
      current_block = (Rpc - LABEL_54_30);
      goto continuation_10;

    case 19:
      current_block = (Rpc - LABEL_54_31);
      goto lambda_59;

    case 20:
      current_block = (Rpc - LABEL_54_33);
      goto continuation_3;

    case 21:
      current_block = (Rpc - LABEL_54_37);
      goto continuation_33;

    case 22:
      current_block = (Rpc - LABEL_54_39);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_54_43);
      goto lambda_60;

    case 24:
      current_block = (Rpc - LABEL_54_51);
      goto label_45;

    case 25:
      current_block = (Rpc - LABEL_54_53);
      goto label_46;

    case 26:
      current_block = (Rpc - LABEL_54_46);
      goto continuation_4;

    case 27:
      current_block = (Rpc - LABEL_54_57);
      goto label_47;

    case 28:
      current_block = (Rpc - LABEL_54_50);
      goto continuation_22;

    case 29:
      current_block = (Rpc - LABEL_54_59);
      goto label_48;

    case 30:
      current_block = (Rpc - LABEL_54_52);
      goto continuation_17;

    case 31:
      current_block = (Rpc - LABEL_54_56);
      goto continuation_7;

    case 32:
      current_block = (Rpc - LABEL_54_54);
      goto continuation_5;

    case 33:
      current_block = (Rpc - LABEL_54_60);
      goto continuation_30;

    case 34:
      current_block = (Rpc - LABEL_54_61);
      goto continuation_29;

    case 35:
      current_block = (Rpc - LABEL_54_63);
      goto continuation_14;

    case 36:
      current_block = (Rpc - LABEL_54_70);
      goto label_49;

    case 37:
      current_block = (Rpc - LABEL_54_64);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_operator_51)
DEFLABEL (generate_operator_38)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_5])));
  Rhp += 5;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd15 = Wrd6;
  (Wrd16.Obj) = (Rsp [5]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [6]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_8])));
  Rhp += 3;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd26 = Wrd21;
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  ((Wrd26.pObj) [3]) = (Wrd8.Obj);
  ((Wrd26.pObj) [4]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_10])));
  Rhp += 3;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd34 = Wrd29;
  ((Wrd34.pObj) [2]) = (Wrd27.Obj);
  ((Wrd34.pObj) [3]) = (Wrd8.Obj);
  ((Wrd34.pObj) [4]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_12])));
  Rhp += 3;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  Wrd42 = Wrd37;
  ((Wrd42.pObj) [2]) = (Wrd27.Obj);
  ((Wrd42.pObj) [3]) = (Wrd8.Obj);
  ((Wrd42.pObj) [4]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd45.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_14])));
  Rhp += 2;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd45.pObj)));
  Wrd48 = Wrd45;
  ((Wrd48.pObj) [2]) = (Wrd27.Obj);
  ((Wrd48.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_16]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_54_7);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (lambda_52)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_54_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_19]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd7.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_36]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_17);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_61)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_31])));
  Rhp += 4;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd23 = Wrd12;
  (Wrd26.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd23.pObj) [2]) = (Wrd26.Obj);
  (Wrd22.Obj) = ((Wrd6.pObj) [5]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  ((Wrd23.pObj) [4]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  ((Wrd23.pObj) [5]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_33]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_54_1]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_54_2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_34]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_54_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_48]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_54_30);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_45]));

DEFLABEL (label_62)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_28]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_35]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_28);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_63;
  (Wrd39.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_29]));

DEFLABEL (label_63)
  (Wrd38.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd38.Obj);
  goto label_61;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_54_8);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_65;
  Wrd5 = Wrd9;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_21])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd20 = Wrd19;
  (Wrd23.Obj) = ((Wrd12.pObj) [4]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Rsp [3]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_23]));

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_20])), (Wrd6.pObj));

DEFLABEL (label_40)
  (Wrd5.Obj) = Rvl;
  goto label_64;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_54_10);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_67;
  Wrd5 = Wrd9;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_25])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd24 = Wrd19;
  ((Wrd24.pObj) [2]) = (Wrd16.Obj);
  (Wrd23.Obj) = ((Wrd12.pObj) [4]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Rsp [3]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_23]));

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_24])), (Wrd6.pObj));

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_66;

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_54_12);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_54_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [2]) = (Wrd11.Obj);
  goto lambda_11;

DEFLABEL (label_68)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_3]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_70;
  Wrd14 = Wrd18;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_43])));
  Rhp += 1;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd29 = Wrd28;
  (Wrd32.Obj) = ((Wrd21.pObj) [4]);
  ((Wrd29.pObj) [2]) = (Wrd32.Obj);
  (Rsp [3]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_23]));

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_42])), (Wrd15.pObj));

DEFLABEL (label_44)
  (Wrd14.Obj) = Rvl;
  goto label_69;

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_54_14);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd9.Obj);
  goto lambda_11;

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_54_21);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_11;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_54_37);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_49]));

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_54_25);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_76;
  Wrd5 = Wrd9;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_74;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd22.Lng))))
    goto label_74;
  (Wrd16.Obj) = ((Wrd20.pObj) [11]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_73)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_41]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_54_39);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_54_6]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_50]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto lambda_11;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_54_50);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_72;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd12.Lng))))
    goto label_72;
  (Wrd6.Obj) = ((Wrd10.pObj) [2]);

DEFLABEL (label_71)
  (Wrd19.Obj) = (* (Rsp++));
  (Wrd25.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd26.Obj) = (current_block [OBJECT_54_10]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-4]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_60]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_61]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_62]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_54_61);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_69]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_54_60);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_68]));

DEFLABEL (label_72)
  (Wrd15.Obj) = (current_block [OBJECT_54_9]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_59]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_5]), 2);

DEFLABEL (label_48)
  (Wrd6.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.Obj) = (current_block [OBJECT_54_4]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_40]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_5]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_38])), (Wrd6.pObj));

DEFLABEL (label_42)
  (Wrd5.Obj) = Rvl;
  goto label_75;

DEFLABEL (lambda_59)
  CLOSURE_HEADER (LABEL_54_31);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_47]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_54_46);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_78;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_54]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_55]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_54_54);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_67]));

DEFLABEL (label_77)
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = ((Wrd19.pObj) [2]);
  (Rsp [3]) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd19.pObj) [3]);
  (Rsp [2]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_66]));

DEFLABEL (label_78)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_56]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd28.Obj) = ((Wrd8.pObj) [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 62))
    goto label_80;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd25.Lng))))
    goto label_80;
  (Wrd17.Obj) = ((Wrd23.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_79)
  (Wrd37.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_58]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_54_56);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_64]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_65]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_54_64);
  (Rsp [5]) = Rvl;
  (Rsp [6]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_71]));

DEFLABEL (label_80)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [3]);
  (Wrd33.Obj) = (current_block [OBJECT_54_7]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_57]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_8]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_54_43);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_86;
  Wrd5 = Wrd9;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_52]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_84;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd22.Lng))))
    goto label_84;
  (Wrd16.Obj) = ((Wrd20.pObj) [11]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_83)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_41]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_54_52);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_54_6]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_63]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto lambda_11;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_54_63);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_82;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd12.Lng))))
    goto label_82;
  (Wrd6.Obj) = ((Wrd10.pObj) [2]);

DEFLABEL (label_81)
  (Wrd19.Obj) = (* (Rsp++));
  (Wrd26.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd27.Obj) = (current_block [OBJECT_54_10]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd22.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd15.Obj) = (current_block [OBJECT_54_9]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_70]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_5]), 2);

DEFLABEL (label_49)
  (Wrd6.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.Obj) = (current_block [OBJECT_54_4]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_53]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_5]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_51])), (Wrd6.pObj));

DEFLABEL (label_45)
  (Wrd5.Obj) = Rvl;
  goto label_85;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_9 7
#define LABEL_55_11 9
#define LABEL_55_12 11
#define LABEL_55_13 13
#define LABEL_55_8 15
#define LABEL_55_14 17
#define LABEL_55_15 19
#define LABEL_55_16 21
#define LABEL_55_17 23
#define LABEL_55_7 25
#define LABEL_55_20 27
#define LABEL_55_19 29
#define LABEL_55_21 31
#define LABEL_55_22 33
#define ENVIRONMENT_LABEL_55_3 56
#define DEBUGGING_LABEL_55_2 55
#define OBJECT_55_7 54
#define OBJECT_55_6 53
#define OBJECT_55_5 52
#define OBJECT_55_4 51
#define OBJECT_55_3 50
#define OBJECT_55_2 49
#define OBJECT_55_1 48
#define OBJECT_55_0 47
#define EXECUTE_CACHE_55_24 35
#define EXECUTE_CACHE_55_23 37
#define EXECUTE_CACHE_55_18 39
#define EXECUTE_CACHE_55_10 41
#define EXECUTE_CACHE_55_6 43
#define FREE_REFERENCE_55_0 46
#define FREE_REFERENCES_LABEL_55_0 34
#define NUMBER_OF_LINKER_SECTIONS_55_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd5;
  machine_word Wrd128;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd112;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd119;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd96;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd87;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_55_4);
      goto generate_assignment__16;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_55_9);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_55_11);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_55_12);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_55_13);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_55_8);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_55_14);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_55_15);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_55_16);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_55_17);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_55_20);
      goto label_19;

    case 13:
      current_block = (Rpc - LABEL_55_19);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_55_21);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_55_22);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_assignment__27)
DEFLABEL (generate_assignment__16)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 62))
    goto label_45;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_45;
  (Wrd13.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_55_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_41;
  Wrd33 = Wrd37;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_39;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd50.Lng))))
    goto label_39;
  (Wrd42.Obj) = ((Wrd48.pObj) [3]);

DEFLABEL (label_38)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd65.uLng) == 10))
    goto label_37;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd64.Lng))))
    goto label_37;
  (Wrd59.Obj) = ((Wrd62.pObj) [11]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_55_11);
  (Wrd87.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd87.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (Wrd95.Obj) = (current_block [OBJECT_55_2]);
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd95.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd105.Obj) = (Rsp [2]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd106.uLng) == 62))
    goto label_35;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd104.Lng))))
    goto label_35;
  (Wrd96.Obj) = ((Wrd102.pObj) [2]);

DEFLABEL (label_34)
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd119.uLng) == 10))
    goto label_33;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd117.Obj) = ((Wrd116.pObj) [0]);
  (Wrd118.Lng) = (FIXNUM_TO_LONG (Wrd117.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd118.Lng))))
    goto label_33;
  (Wrd112.Obj) = ((Wrd116.pObj) [2]);

DEFLABEL (label_32)
  (Wrd125.Obj) = (* (Rsp++));
  (Wrd131.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd132.Obj) = (current_block [OBJECT_55_5]);
  (* (Rhp++)) = (Wrd131.Obj);
  (* (Rhp++)) = (Wrd132.Obj);
  (* (Rhp++)) = (Wrd112.Obj);
  (* (Rhp++)) = (Wrd125.Obj);
  (Wrd128.pObj) = (& (Rhp [-4]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd128.pObj)));

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_30)
  (Rsp [7]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_29;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_29;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_28)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_21]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd30.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_55_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_55_19);
  (Rsp [8]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_23]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_55_22);
  (Rsp [9]) = Rvl;
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_24]));

DEFLABEL (label_29)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_55_7]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_20]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_33)
  (Wrd121.Obj) = (current_block [OBJECT_55_3]);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_13]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_4]), 2);

DEFLABEL (label_25)
  (Wrd112.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd107.Obj) = (Rsp [2]);
  (Wrd108.Obj) = (current_block [OBJECT_55_3]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_12]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_24)
  (Wrd96.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd67.Obj) = (current_block [OBJECT_55_6]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_17]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_4]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.Obj) = (current_block [OBJECT_55_0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_16]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_21)
  (Wrd42.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_15])), (Wrd34.pObj));

DEFLABEL (label_20)
  (Wrd33.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 62))
    goto label_43;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd79.Lng))))
    goto label_43;
  (Wrd5.Obj) = ((Wrd77.pObj) [2]);
  goto label_31;

DEFLABEL (label_43)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.Obj) = (current_block [OBJECT_55_3]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_14]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_45)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_55_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_55_7);
  (Wrd5.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define TAG_56_6 1
#define LABEL_56_9 7
#define LABEL_56_8 9
#define LABEL_56_14 11
#define LABEL_56_15 13
#define LABEL_56_11 15
#define LABEL_56_12 17
#define LABEL_56_18 19
#define LABEL_56_19 21
#define LABEL_56_20 23
#define LABEL_56_23 25
#define LABEL_56_25 27
#define LABEL_56_24 29
#define ENVIRONMENT_LABEL_56_3 59
#define DEBUGGING_LABEL_56_2 58
#define OBJECT_56_3 57
#define OBJECT_56_2 56
#define OBJECT_56_1 55
#define OBJECT_56_0 54
#define EXECUTE_CACHE_56_27 31
#define EXECUTE_CACHE_56_26 33
#define EXECUTE_CACHE_56_22 35
#define EXECUTE_CACHE_56_21 37
#define EXECUTE_CACHE_56_17 39
#define EXECUTE_CACHE_56_16 41
#define EXECUTE_CACHE_56_13 43
#define EXECUTE_CACHE_56_10 45
#define EXECUTE_CACHE_56_7 47
#define FREE_REFERENCE_56_3 50
#define FREE_REFERENCE_56_2 51
#define FREE_REFERENCE_56_1 52
#define FREE_REFERENCE_56_0 53
#define FREE_REFERENCES_LABEL_56_0 30
#define NUMBER_OF_LINKER_SECTIONS_56_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_56_4);
      goto generate_assignment_15;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto lambda_23;

    case 2:
      current_block = (Rpc - LABEL_56_9);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_56_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_56_14);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_56_15);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_56_11);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_56_12);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_56_18);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_56_19);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_56_20);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_56_23);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_56_25);
      goto label_20;

    case 13:
      current_block = (Rpc - LABEL_56_24);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_assignment_22)
DEFLABEL (generate_assignment_15)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_56_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_56_5])));
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
  (Rsp [2]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_7]));

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_56_5);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_32;
  Wrd8 = Wrd12;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [5]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_11]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_56_0]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_56_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_56_18);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_56_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_20]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_56_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_56_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_27]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_56_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_3]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_25;
  Wrd6 = Wrd10;

DEFLABEL (label_24)
  (Wrd15.Obj) = (Rsp [9]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_56_3]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_26]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_56_19);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [7]);
  (Wrd10.Obj) = (current_block [OBJECT_56_3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_22]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_25])), (Wrd7.pObj));

DEFLABEL (label_20)
  (Wrd6.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd8.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_56_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_30;
  Wrd17 = Wrd21;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_28;
  Wrd23 = Wrd27;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd30.Obj) = (Rsp [6]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Rsp [6]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_16]));

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_15])), (Wrd24.pObj));

DEFLABEL (label_19)
  (Wrd23.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_14])), (Wrd18.pObj));

DEFLABEL (label_18)
  (Wrd17.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_9])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_31;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_56_11);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_17]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define TAG_57_6 1
#define LABEL_57_9 7
#define LABEL_57_8 9
#define LABEL_57_13 11
#define LABEL_57_14 13
#define LABEL_57_15 15
#define LABEL_57_11 17
#define ENVIRONMENT_LABEL_57_3 38
#define DEBUGGING_LABEL_57_2 37
#define OBJECT_57_1 36
#define OBJECT_57_0 35
#define EXECUTE_CACHE_57_18 19
#define EXECUTE_CACHE_57_17 21
#define EXECUTE_CACHE_57_16 23
#define EXECUTE_CACHE_57_12 25
#define EXECUTE_CACHE_57_10 27
#define EXECUTE_CACHE_57_7 29
#define FREE_REFERENCE_57_2 32
#define FREE_REFERENCE_57_1 33
#define FREE_REFERENCE_57_0 34
#define FREE_REFERENCES_LABEL_57_0 18
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_57_4);
      goto generate_definition_6;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_57_9);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_57_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_57_13);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_57_14);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_57_15);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_57_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_definition_12)
DEFLABEL (generate_definition_6)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_5])));
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
  (Rsp [2]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_57_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_20;
  Wrd8 = Wrd12;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [5]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.Obj) = (current_block [OBJECT_57_0]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd50.Obj) = ((Wrd35.pObj) [2]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_57_11);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_18]));

DEFLABEL (label_14)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd8.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_57_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_18;
  Wrd17 = Wrd21;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_16;
  Wrd23 = Wrd27;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_57_15);
  (Rsp [8]) = Rvl;
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [6]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_17]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_14])), (Wrd24.pObj));

DEFLABEL (label_10)
  (Wrd23.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_13])), (Wrd18.pObj));

DEFLABEL (label_9)
  (Wrd17.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_9])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define LABEL_58_8 9
#define LABEL_58_10 11
#define ENVIRONMENT_LABEL_58_3 21
#define DEBUGGING_LABEL_58_2 20
#define OBJECT_58_2 19
#define OBJECT_58_1 18
#define OBJECT_58_0 17
#define EXECUTE_CACHE_58_9 13
#define EXECUTE_CACHE_58_7 15
#define FREE_REFERENCES_LABEL_58_0 12
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_58_4);
      goto make_definition_variable_8;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_58_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_58_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_definition_variable_13)
DEFLABEL (make_definition_variable_8)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_58_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_58_8);
  (Rsp [0]) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_16;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd20.Lng))))
    goto label_16;
  ((Wrd18.pObj) [9]) = (Wrd6.Obj);

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_58_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 3);

DEFLABEL (label_11)
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_58_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_5 3
#define LABEL_59_4 5
#define LABEL_59_8 7
#define LABEL_59_6 9
#define LABEL_59_10 11
#define ENVIRONMENT_LABEL_59_3 25
#define DEBUGGING_LABEL_59_2 24
#define OBJECT_59_0 23
#define EXECUTE_CACHE_59_12 13
#define EXECUTE_CACHE_59_11 15
#define EXECUTE_CACHE_59_9 17
#define EXECUTE_CACHE_59_7 19
#define FREE_REFERENCE_59_0 22
#define FREE_REFERENCES_LABEL_59_0 12
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_59_4);
      goto insert_letrec_3;

    case 2:
      current_block = (Rpc - LABEL_59_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_59_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_59_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insert_letrec_7)
DEFLABEL (insert_letrec_3)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd20.Obj) = (current_block [OBJECT_59_0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_59_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_59_10);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_8])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_6 5
#define LABEL_60_7 7
#define LABEL_60_8 9
#define LABEL_60_9 11
#define LABEL_60_5 13
#define ENVIRONMENT_LABEL_60_3 21
#define DEBUGGING_LABEL_60_2 20
#define EXECUTE_CACHE_60_10 15
#define FREE_REFERENCE_60_1 18
#define FREE_REFERENCE_60_0 19
#define FREE_REFERENCES_LABEL_60_0 14
#define NUMBER_OF_LINKER_SECTIONS_60_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_60_4);
      goto generate_disjunction_1;

    case 1:
      current_block = (Rpc - LABEL_60_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_60_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_60_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_60_9);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_disjunction_8)
DEFLABEL (generate_disjunction_1)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_14;
  Wrd14 = Wrd18;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_12;
  Wrd20 = Wrd24;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_10;
  Wrd26 = Wrd30;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_9])), (Wrd27.pObj));

DEFLABEL (label_6)
  (Wrd26.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_8])), (Wrd21.pObj));

DEFLABEL (label_5)
  (Wrd20.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_7])), (Wrd15.pObj));

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define TAG_61_6 1
#define LABEL_61_8 7
#define ENVIRONMENT_LABEL_61_3 17
#define DEBUGGING_LABEL_61_2 16
#define OBJECT_61_0 15
#define EXECUTE_CACHE_61_10 9
#define EXECUTE_CACHE_61_9 11
#define EXECUTE_CACHE_61_7 13
#define FREE_REFERENCES_LABEL_61_0 8
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_61_4);
      goto generate_disjunction_control_2;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_61_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_disjunction_control_5)
DEFLABEL (generate_disjunction_control_2)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_61_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_8);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define TAG_62_6 1
#define LABEL_62_10 7
#define LABEL_62_8 9
#define LABEL_62_16 11
#define LABEL_62_13 13
#define LABEL_62_14 15
#define LABEL_62_11 17
#define LABEL_62_20 19
#define LABEL_62_21 21
#define ENVIRONMENT_LABEL_62_3 47
#define DEBUGGING_LABEL_62_2 46
#define OBJECT_62_2 45
#define OBJECT_62_1 44
#define OBJECT_62_0 43
#define EXECUTE_CACHE_62_24 23
#define EXECUTE_CACHE_62_23 25
#define EXECUTE_CACHE_62_22 27
#define EXECUTE_CACHE_62_19 29
#define EXECUTE_CACHE_62_18 31
#define EXECUTE_CACHE_62_17 33
#define EXECUTE_CACHE_62_15 35
#define EXECUTE_CACHE_62_12 37
#define EXECUTE_CACHE_62_9 39
#define EXECUTE_CACHE_62_7 41
#define FREE_REFERENCES_LABEL_62_0 22
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd8;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_62_4);
      goto generate_disjunction_value_13;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_62_10);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_62_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_62_16);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_62_13);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_62_14);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_62_11);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_62_20);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_62_21);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_disjunction_value_16)
DEFLABEL (generate_disjunction_value_13)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_62_5);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_62_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_62_0]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_62_11);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_23]));

DEFLABEL (label_18)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_62_1]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_62_14);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (current_block [OBJECT_62_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_20]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_62_21);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [11]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_62_20);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_24]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_62_13);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_19]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_9 7
#define LABEL_63_7 9
#define LABEL_63_11 11
#define LABEL_63_13 13
#define ENVIRONMENT_LABEL_63_3 29
#define DEBUGGING_LABEL_63_2 28
#define EXECUTE_CACHE_63_14 15
#define EXECUTE_CACHE_63_12 17
#define EXECUTE_CACHE_63_10 19
#define EXECUTE_CACHE_63_8 21
#define EXECUTE_CACHE_63_6 23
#define FREE_REFERENCE_63_1 26
#define FREE_REFERENCE_63_0 27
#define FREE_REFERENCES_LABEL_63_0 14
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_63_4);
      goto boolean_valued_operatorP_3;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_63_9);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_63_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_63_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_63_13);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (boolean_valued_operatorP_8)
DEFLABEL (boolean_valued_operatorP_3)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_63_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_14]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_13])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_12)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_10]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_9])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define TAG_64_6 1
#define LABEL_64_8 7
#define ENVIRONMENT_LABEL_64_3 18
#define DEBUGGING_LABEL_64_2 17
#define OBJECT_64_1 16
#define OBJECT_64_0 15
#define EXECUTE_CACHE_64_10 9
#define EXECUTE_CACHE_64_9 11
#define EXECUTE_CACHE_64_7 13
#define FREE_REFERENCES_LABEL_64_0 8
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_64_4);
      goto generate_access_4;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_64_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_access_7)
DEFLABEL (generate_access_4)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_64_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_64_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_64_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.Obj) = (current_block [OBJECT_64_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_64_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_64_8);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define TAG_65_6 1
#define LABEL_65_8 7
#define LABEL_65_11 9
#define LABEL_65_12 11
#define LABEL_65_13 13
#define LABEL_65_25 15
#define LABEL_65_26 17
#define LABEL_65_24 19
#define LABEL_65_16 21
#define TAG_65_17 9
#define LABEL_65_28 23
#define LABEL_65_18 25
#define TAG_65_19 11
#define LABEL_65_20 27
#define LABEL_65_37 29
#define LABEL_65_14 31
#define LABEL_65_29 33
#define LABEL_65_30 35
#define LABEL_65_35 37
#define LABEL_65_33 39
#define LABEL_65_38 41
#define LABEL_65_39 43
#define LABEL_65_40 45
#define LABEL_65_47 47
#define LABEL_65_44 49
#define TAG_65_45 23
#define LABEL_65_48 51
#define ENVIRONMENT_LABEL_65_3 100
#define DEBUGGING_LABEL_65_2 99
#define OBJECT_65_11 98
#define OBJECT_65_10 97
#define OBJECT_65_9 96
#define OBJECT_65_8 95
#define OBJECT_65_7 94
#define OBJECT_65_6 93
#define OBJECT_65_5 92
#define OBJECT_65_4 91
#define OBJECT_65_3 90
#define OBJECT_65_2 89
#define OBJECT_65_1 88
#define OBJECT_65_0 87
#define EXECUTE_CACHE_65_46 53
#define EXECUTE_CACHE_65_43 55
#define EXECUTE_CACHE_65_42 57
#define EXECUTE_CACHE_65_41 59
#define EXECUTE_CACHE_65_36 61
#define EXECUTE_CACHE_65_34 63
#define EXECUTE_CACHE_65_32 65
#define EXECUTE_CACHE_65_31 67
#define EXECUTE_CACHE_65_27 69
#define EXECUTE_CACHE_65_23 71
#define EXECUTE_CACHE_65_22 73
#define EXECUTE_CACHE_65_21 75
#define EXECUTE_CACHE_65_15 77
#define EXECUTE_CACHE_65_10 79
#define EXECUTE_CACHE_65_9 81
#define EXECUTE_CACHE_65_7 83
#define FREE_REFERENCE_65_0 86
#define FREE_REFERENCES_LABEL_65_0 52
#define NUMBER_OF_LINKER_SECTIONS_65_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd5;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd101;
  machine_word Wrd102;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_65_4);
      goto generate_comment_31;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto lambda_41;

    case 2:
      current_block = (Rpc - LABEL_65_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_65_11);
      goto label_33;

    case 4:
      current_block = (Rpc - LABEL_65_12);
      goto label_34;

    case 5:
      current_block = (Rpc - LABEL_65_13);
      goto label_35;

    case 6:
      current_block = (Rpc - LABEL_65_25);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_65_26);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_65_24);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_65_16);
      goto lambda_14;

    case 10:
      current_block = (Rpc - LABEL_65_28);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_65_18);
      goto lambda_15;

    case 12:
      current_block = (Rpc - LABEL_65_20);
      goto continuation_16;

    case 13:
      current_block = (Rpc - LABEL_65_37);
      goto continuation_25;

    case 14:
      current_block = (Rpc - LABEL_65_14);
      goto continuation_24;

    case 15:
      current_block = (Rpc - LABEL_65_29);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_65_30);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_65_35);
      goto continuation_22;

    case 18:
      current_block = (Rpc - LABEL_65_33);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_65_38);
      goto continuation_28;

    case 20:
      current_block = (Rpc - LABEL_65_39);
      goto continuation_27;

    case 21:
      current_block = (Rpc - LABEL_65_40);
      goto continuation_26;

    case 22:
      current_block = (Rpc - LABEL_65_47);
      goto continuation_19;

    case 23:
      current_block = (Rpc - LABEL_65_44);
      goto lambda_44;

    case 24:
      current_block = (Rpc - LABEL_65_48);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_comment_40)
DEFLABEL (generate_comment_31)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_5])));
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
  (Rsp [2]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_7]));

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_65_5);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_45;
  (Wrd124.Obj) = (Rsp [0]);
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd126.Obj) = ((Wrd125.pObj) [5]);
  (* (--Rsp)) = (Wrd126.Obj);
  (Wrd127.Obj) = ((Wrd125.pObj) [3]);
  (Rsp [2]) = (Wrd127.Obj);
  (Wrd130.Obj) = ((Wrd125.pObj) [4]);
  (Rsp [1]) = (Wrd130.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (label_45)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_64;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_63)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_62;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_61)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_60;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_59)
  (Wrd30.Obj) = (Rsp [0]);
  if (! ((Wrd30.Obj) == (current_block [OBJECT_65_2])))
    goto label_46;
  (Wrd116.Obj) = (Rsp [1]);
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd115.Obj) = ((Wrd117.pObj) [5]);
  (Rsp [0]) = (Wrd115.Obj);
  (Wrd118.Obj) = ((Wrd117.pObj) [3]);
  (Rsp [2]) = (Wrd118.Obj);
  (Wrd121.Obj) = ((Wrd117.pObj) [4]);
  (Rsp [1]) = (Wrd121.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (label_46)
  if (! ((Wrd30.Obj) == (current_block [OBJECT_65_3])))
    goto label_49;
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_14]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd114.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd114.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_15]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_65_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;

DEFLABEL (label_47)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_38]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_39]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_40]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_41]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_65_40);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_31]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_65_39);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_43]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_65_38);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [5]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_42]));

DEFLABEL (label_48)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_37]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_65_10]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_32]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_65_37);
  goto label_47;

DEFLABEL (label_49)
  if (! ((Wrd30.Obj) == (current_block [OBJECT_65_4])))
    goto label_52;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd85.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_16])));
  Rhp += 4;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd85.pObj)));
  Wrd96 = Wrd85;
  (Wrd97.Obj) = (Rsp [1]);
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [3]);
  ((Wrd96.pObj) [2]) = (Wrd99.Obj);
  (Wrd95.Obj) = ((Wrd98.pObj) [4]);
  ((Wrd96.pObj) [3]) = (Wrd95.Obj);
  (Wrd91.Obj) = ((Wrd98.pObj) [5]);
  ((Wrd96.pObj) [4]) = (Wrd91.Obj);
  (Wrd87.Obj) = (Rsp [3]);
  ((Wrd96.pObj) [5]) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd102.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_18])));
  Rhp += 1;
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd102.pObj)));
  Wrd103 = Wrd102;
  (Wrd106.Obj) = ((Wrd98.pObj) [2]);
  ((Wrd103.pObj) [2]) = (Wrd106.Obj);
  (Rsp [1]) = (Wrd101.Obj);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_20]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_21]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_65_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_36]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_65_35);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto lambda_14;

DEFLABEL (label_50)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_33]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_34]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_65_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_44])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [4]) = (Wrd9.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_46]));

DEFLABEL (label_51)
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd16.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_15;

DEFLABEL (label_52)
  if (! ((Wrd30.Obj) == (current_block [OBJECT_65_5])))
    goto label_53;
  (Wrd76.Obj) = (Rsp [1]);
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [5]);
  (Rsp [0]) = (Wrd75.Obj);
  (Wrd78.Obj) = ((Wrd77.pObj) [3]);
  (Rsp [2]) = (Wrd78.Obj);
  (Wrd81.Obj) = ((Wrd77.pObj) [4]);
  (Rsp [1]) = (Wrd81.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_22]));

DEFLABEL (label_53)
  if (! ((Wrd30.Obj) == (current_block [OBJECT_65_6])))
    goto label_54;
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [5]);
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = ((Wrd64.pObj) [4]);
  (Rsp [1]) = (Wrd66.Obj);
  (Wrd69.Obj) = ((Wrd64.pObj) [2]);
  (Rsp [3]) = (Wrd69.Obj);
  (Wrd72.Obj) = ((Wrd64.pObj) [3]);
  (Rsp [2]) = (Wrd72.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_23]));

DEFLABEL (label_54)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_24]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_58;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_57)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_56;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_55)
  (Wrd62.Obj) = (current_block [OBJECT_65_7]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_65_24);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [5]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (label_56)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_26]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_25]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_0]), 1);

DEFLABEL (label_36)
  (Wrd46.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 1);

DEFLABEL (label_34)
  (Wrd16.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_0]), 1);

DEFLABEL (label_33)
  (Wrd7.Obj) = Rvl;
  goto label_63;

DEFLABEL (lambda_42)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_65_16);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_67;
  Wrd5 = Wrd9;

DEFLABEL (label_66)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_65;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = ((Wrd27.pObj) [5]);
  (Rsp [3]) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd27.pObj) [2]);
  (Rsp [2]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (label_65)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_29]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_30]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_65_8]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd13.pObj) [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_31]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_65_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_43]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_65_29);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_42]));

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_28])), (Wrd6.pObj));

DEFLABEL (label_38)
  (Wrd5.Obj) = Rvl;
  goto label_66;

DEFLABEL (lambda_43)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_65_18);
  (Wrd5.Obj) = (current_block [OBJECT_65_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_32]));

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_65_44);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_65_11]))
    goto label_69;

DEFLABEL (label_68)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_15;

DEFLABEL (label_69)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_47]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_21]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_65_47);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [3]);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_48]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_36]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_65_48);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto lambda_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_7 5
#define LABEL_66_8 7
#define LABEL_66_5 9
#define LABEL_66_9 11
#define LABEL_66_10 13
#define LABEL_66_14 15
#define LABEL_66_15 17
#define LABEL_66_23 19
#define LABEL_66_24 21
#define LABEL_66_25 23
#define LABEL_66_19 25
#define LABEL_66_20 27
#define LABEL_66_21 29
#define LABEL_66_28 31
#define LABEL_66_29 33
#define LABEL_66_30 35
#define ENVIRONMENT_LABEL_66_3 72
#define DEBUGGING_LABEL_66_2 71
#define OBJECT_66_8 70
#define OBJECT_66_7 69
#define OBJECT_66_6 68
#define OBJECT_66_5 67
#define OBJECT_66_4 66
#define OBJECT_66_3 65
#define OBJECT_66_2 64
#define OBJECT_66_1 63
#define OBJECT_66_0 62
#define EXECUTE_CACHE_66_31 37
#define EXECUTE_CACHE_66_27 39
#define EXECUTE_CACHE_66_26 41
#define EXECUTE_CACHE_66_22 43
#define EXECUTE_CACHE_66_18 45
#define EXECUTE_CACHE_66_17 47
#define EXECUTE_CACHE_66_16 49
#define EXECUTE_CACHE_66_13 51
#define EXECUTE_CACHE_66_12 53
#define EXECUTE_CACHE_66_11 55
#define EXECUTE_CACHE_66_6 57
#define FREE_REFERENCE_66_1 60
#define FREE_REFERENCE_66_0 61
#define FREE_REFERENCES_LABEL_66_0 36
#define NUMBER_OF_LINKER_SECTIONS_66_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_66_4);
      goto generate_constantify_17;

    case 1:
      current_block = (Rpc - LABEL_66_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_66_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_66_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_66_14);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_66_15);
      goto lambda_8;

    case 8:
      current_block = (Rpc - LABEL_66_23);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_66_24);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_66_25);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_66_19);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_66_20);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_66_21);
      goto lambda_13;

    case 14:
      current_block = (Rpc - LABEL_66_28);
      goto label_22;

    case 15:
      current_block = (Rpc - LABEL_66_29);
      goto label_23;

    case 16:
      current_block = (Rpc - LABEL_66_30);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_constantify_26)
DEFLABEL (generate_constantify_17)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_66_8);
  if (Rvl == (current_block [OBJECT_66_0]))
    goto label_30;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_66_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_66_7);

DEFLABEL (label_30)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_66_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_66_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_66_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_66_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd17.Obj) = (current_block [OBJECT_66_0]);
  (Rsp [4]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd22.Obj);
  (Rsp [0]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_18]));

DEFLABEL (label_29)
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_21]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_66_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_27]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_66_19);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_26]));

DEFLABEL (lambda_27)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_66_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_40;
  Wrd5 = Wrd9;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_38;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_38;
  (Wrd11.Obj) = ((Wrd17.pObj) [4]);

DEFLABEL (label_37)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_36;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd33.Lng))))
    goto label_36;
  (Wrd27.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_35)
  (Wrd40.Obj) = (* (Rsp++));
  if ((Wrd27.Obj) == (Wrd40.Obj))
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_32;

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_66_7]);

DEFLABEL (label_32)
DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd36.Obj) = (current_block [OBJECT_66_5]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_25]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_6]), 2);

DEFLABEL (label_21)
  (Wrd27.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_66_3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_24]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_4]), 2);

DEFLABEL (label_20)
  (Wrd11.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_23])), (Wrd6.pObj));

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_39;

DEFLABEL (lambda_28)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_66_21);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_47;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_46)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_45;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_45;
  (Wrd21.Obj) = ((Wrd25.pObj) [3]);

DEFLABEL (label_44)
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_43;
  Wrd34 = Wrd38;

DEFLABEL (label_42)
  if ((Wrd34.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_31]));

DEFLABEL (label_41)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_30])), (Wrd35.pObj));

DEFLABEL (label_24)
  (Wrd34.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd30.Obj) = (current_block [OBJECT_66_8]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_29]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_6]), 2);

DEFLABEL (label_23)
  (Wrd21.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_66_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_28]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_4]), 2);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define TAG_67_6 1
#define LABEL_67_8 7
#define LABEL_67_10 9
#define LABEL_67_14 11
#define LABEL_67_15 13
#define LABEL_67_11 15
#define LABEL_67_18 17
#define LABEL_67_12 19
#define LABEL_67_13 21
#define LABEL_67_17 23
#define ENVIRONMENT_LABEL_67_3 45
#define DEBUGGING_LABEL_67_2 44
#define OBJECT_67_4 43
#define OBJECT_67_3 42
#define OBJECT_67_2 41
#define OBJECT_67_1 40
#define OBJECT_67_0 39
#define EXECUTE_CACHE_67_22 25
#define EXECUTE_CACHE_67_21 27
#define EXECUTE_CACHE_67_20 29
#define EXECUTE_CACHE_67_19 31
#define EXECUTE_CACHE_67_16 33
#define EXECUTE_CACHE_67_9 35
#define EXECUTE_CACHE_67_7 37
#define FREE_REFERENCES_LABEL_67_0 24
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_67_4);
      goto generate_enclose_10;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_67_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_67_10);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_67_14);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_67_15);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_67_11);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_67_18);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_67_12);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_67_13);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_67_17);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_enclose_17)
DEFLABEL (generate_enclose_10)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_67_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_67_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_67_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd26.Obj) = ((Wrd6.pObj) [4]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_26;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_26;
  (Wrd15.Obj) = ((Wrd21.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_25)
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_11]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_12]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [10]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_24;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_23)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_22;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_67_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_67_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_67_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_20;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_67_17);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [6]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_22]));

DEFLABEL (label_20)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_18]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_4]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_15]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_4]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_14]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_3]), 1);

DEFLABEL (label_13)
  (Wrd46.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [4]);
  (Wrd31.Obj) = (current_block [OBJECT_67_1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_6 7
#define LABEL_68_7 9
#define ENVIRONMENT_LABEL_68_3 25
#define DEBUGGING_LABEL_68_2 24
#define OBJECT_68_4 23
#define OBJECT_68_3 22
#define OBJECT_68_2 21
#define OBJECT_68_1 20
#define OBJECT_68_0 19
#define EXECUTE_CACHE_68_11 11
#define EXECUTE_CACHE_68_10 13
#define EXECUTE_CACHE_68_9 15
#define EXECUTE_CACHE_68_8 17
#define FREE_REFERENCES_LABEL_68_0 10
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_68_4);
      goto generate_delay_6;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_68_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_delay_9)
DEFLABEL (generate_delay_6)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_68_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_68_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_68_6);
  (Wrd9.Obj) = (current_block [OBJECT_68_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_68_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_68_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_68_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define TAG_69_6 1
#define LABEL_69_9 7
#define LABEL_69_8 9
#define ENVIRONMENT_LABEL_69_3 20
#define DEBUGGING_LABEL_69_2 19
#define EXECUTE_CACHE_69_11 11
#define EXECUTE_CACHE_69_10 13
#define EXECUTE_CACHE_69_7 15
#define FREE_REFERENCE_69_0 18
#define FREE_REFERENCES_LABEL_69_0 10
#define NUMBER_OF_LINKER_SECTIONS_69_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_69_4);
      goto generate_error_combination_3;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_69_9);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_69_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_error_combination_7)
DEFLABEL (generate_error_combination_3)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_69_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_69_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_69_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_10;
  Wrd16 = Wrd20;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_69_8);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_11]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_9])), (Wrd17.pObj));

DEFLABEL (label_5)
  (Wrd16.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_6 5
#define LABEL_70_5 7
#define ENVIRONMENT_LABEL_70_3 18
#define DEBUGGING_LABEL_70_2 17
#define OBJECT_70_1 16
#define OBJECT_70_0 15
#define EXECUTE_CACHE_70_8 9
#define EXECUTE_CACHE_70_7 11
#define FREE_REFERENCE_70_0 14
#define FREE_REFERENCES_LABEL_70_0 8
#define NUMBER_OF_LINKER_SECTIONS_70_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_70_4);
      goto generate_quotation_3;

    case 1:
      current_block = (Rpc - LABEL_70_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_quotation_7)
DEFLABEL (generate_quotation_3)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Wrd18.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_70_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_70_1]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_6])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_6 5
#define LABEL_71_5 7
#define ENVIRONMENT_LABEL_71_3 15
#define DEBUGGING_LABEL_71_2 14
#define OBJECT_71_0 13
#define EXECUTE_CACHE_71_8 9
#define EXECUTE_CACHE_71_7 11
#define FREE_REFERENCES_LABEL_71_0 8
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fggen_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_71_4);
      goto generate_constant_quotation_2;

    case 1:
      current_block = (Rpc - LABEL_71_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_constant_quotation_6)
DEFLABEL (generate_constant_quotation_2)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_8]));

DEFLABEL (label_8)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_12 13
#define LABEL_17 15
#define LABEL_13 17
#define TAG_14 7
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_18 23
#define LABEL_21 25
#define LABEL_19 27
#define LABEL_25 29
#define LABEL_20 31
#define LABEL_23 33
#define LABEL_28 35
#define LABEL_24 37
#define LABEL_26 39
#define LABEL_27 41
#define LABEL_29 43
#define LABEL_32 45
#define LABEL_30 47
#define LABEL_36 49
#define LABEL_31 51
#define LABEL_34 53
#define LABEL_39 55
#define LABEL_35 57
#define LABEL_37 59
#define LABEL_38 61
#define LABEL_40 63
#define LABEL_42 65
#define LABEL_41 67
#define LABEL_45 69
#define LABEL_43 71
#define LABEL_46 73
#define LABEL_49 75
#define LABEL_50 77
#define LABEL_51 79
#define LABEL_52 81
#define LABEL_53 83
#define LABEL_54 85
#define LABEL_55 87
#define LABEL_56 89
#define LABEL_57 91
#define LABEL_58 93
#define LABEL_59 95
#define LABEL_60 97
#define LABEL_61 99
#define LABEL_62 101
#define LABEL_63 103
#define LABEL_64 105
#define LABEL_65 107
#define LABEL_67 109
#define LABEL_68 111
#define LABEL_66 113
#define LABEL_70 115
#define LABEL_71 117
#define LABEL_73 119
#define LABEL_74 121
#define LABEL_69 123
#define LABEL_77 125
#define LABEL_78 127
#define LABEL_79 129
#define LABEL_80 131
#define LABEL_81 133
#define LABEL_82 135
#define LABEL_83 137
#define LABEL_84 139
#define LABEL_85 141
#define LABEL_86 143
#define LABEL_87 145
#define LABEL_88 147
#define LABEL_89 149
#define LABEL_90 151
#define LABEL_91 153
#define LABEL_92 155
#define LABEL_93 157
#define LABEL_94 159
#define LABEL_95 161
#define LABEL_96 163
#define LABEL_98 165
#define LABEL_99 167
#define LABEL_97 169
#define LABEL_100 171
#define LABEL_103 173
#define LABEL_101 175
#define LABEL_104 177
#define TAG_105 87
#define LABEL_108 179
#define LABEL_109 181
#define LABEL_110 183
#define LABEL_112 185
#define LABEL_113 187
#define LABEL_114 189
#define LABEL_115 191
#define LABEL_116 193
#define LABEL_117 195
#define LABEL_119 197
#define LABEL_122 199
#define LABEL_106 201
#define LABEL_125 203
#define LABEL_127 205
#define LABEL_128 207
#define LABEL_132 209
#define LABEL_133 211
#define LABEL_134 213
#define ENVIRONMENT_LABEL_3 337
#define DEBUGGING_LABEL_2 336
#define PURIFICATION_ROOT 335
#define OBJECT_49 334
#define OBJECT_48 333
#define OBJECT_47 332
#define OBJECT_46 331
#define OBJECT_45 330
#define OBJECT_44 329
#define OBJECT_43 328
#define OBJECT_42 327
#define OBJECT_41 326
#define OBJECT_40 325
#define OBJECT_39 324
#define OBJECT_38 323
#define OBJECT_37 322
#define OBJECT_36 321
#define OBJECT_35 320
#define OBJECT_34 319
#define OBJECT_33 318
#define OBJECT_32 317
#define OBJECT_31 316
#define OBJECT_30 315
#define OBJECT_29 314
#define OBJECT_28 313
#define OBJECT_27 312
#define OBJECT_26 311
#define OBJECT_25 310
#define OBJECT_24 309
#define OBJECT_23 308
#define OBJECT_22 307
#define OBJECT_21 306
#define OBJECT_20 305
#define OBJECT_19 304
#define OBJECT_18 303
#define OBJECT_17 302
#define OBJECT_16 301
#define OBJECT_15 300
#define OBJECT_14 299
#define OBJECT_13 298
#define OBJECT_12 297
#define OBJECT_11 296
#define OBJECT_10 295
#define OBJECT_9 294
#define OBJECT_8 293
#define OBJECT_7 292
#define OBJECT_6 291
#define OBJECT_5 290
#define OBJECT_4 289
#define OBJECT_3 288
#define OBJECT_2 287
#define OBJECT_1 286
#define OBJECT_0 285
#define EXECUTE_CACHE_131 215
#define EXECUTE_CACHE_130 217
#define EXECUTE_CACHE_129 219
#define EXECUTE_CACHE_126 221
#define EXECUTE_CACHE_124 223
#define EXECUTE_CACHE_123 225
#define EXECUTE_CACHE_121 227
#define EXECUTE_CACHE_120 229
#define EXECUTE_CACHE_118 231
#define EXECUTE_CACHE_111 233
#define EXECUTE_CACHE_107 235
#define EXECUTE_CACHE_102 237
#define EXECUTE_CACHE_76 239
#define EXECUTE_CACHE_75 241
#define EXECUTE_CACHE_72 243
#define EXECUTE_CACHE_48 245
#define EXECUTE_CACHE_47 247
#define EXECUTE_CACHE_44 249
#define EXECUTE_CACHE_33 251
#define EXECUTE_CACHE_22 253
#define FREE_REFERENCE_21 256
#define FREE_REFERENCE_20 257
#define FREE_REFERENCE_19 258
#define FREE_REFERENCE_18 259
#define FREE_REFERENCE_17 260
#define FREE_REFERENCE_16 261
#define FREE_REFERENCE_15 262
#define FREE_REFERENCE_14 263
#define FREE_REFERENCE_13 264
#define FREE_REFERENCE_12 265
#define FREE_REFERENCE_11 266
#define FREE_REFERENCE_10 267
#define FREE_REFERENCE_9 268
#define FREE_REFERENCE_8 269
#define FREE_REFERENCE_7 270
#define FREE_REFERENCE_6 271
#define FREE_REFERENCE_5 272
#define FREE_REFERENCE_4 273
#define FREE_REFERENCE_3 274
#define FREE_REFERENCE_2 275
#define FREE_REFERENCE_1 276
#define FREE_REFERENCE_0 277
#define GLOBAL_EXECUTE_CACHE_11 279
#define GLOBAL_EXECUTE_CACHE_10 281
#define GLOBAL_EXECUTE_CACHE_6 283
#define FREE_REFERENCES_LABEL_0 214
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
fggen_so_43b03a7fd6a781cd (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd63;
  machine_word Wrd92;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd98;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd111;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
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
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_99;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_12);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_100;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto context_make_149;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_21);
      goto label_101;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_25);
      goto label_102;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_28);
      goto label_103;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_29);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_32);
      goto label_104;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_36);
      goto label_105;

    case 24:
      current_block = (Rpc - LABEL_31);
      goto continuation_21;

    case 25:
      current_block = (Rpc - LABEL_34);
      goto continuation_24;

    case 26:
      current_block = (Rpc - LABEL_39);
      goto label_106;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto continuation_23;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_26;

    case 29:
      current_block = (Rpc - LABEL_38);
      goto continuation_25;

    case 30:
      current_block = (Rpc - LABEL_40);
      goto continuation_27;

    case 31:
      current_block = (Rpc - LABEL_42);
      goto label_107;

    case 32:
      current_block = (Rpc - LABEL_41);
      goto continuation_29;

    case 33:
      current_block = (Rpc - LABEL_45);
      goto label_108;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_28;

    case 35:
      current_block = (Rpc - LABEL_46);
      goto continuation_61;

    case 36:
      current_block = (Rpc - LABEL_49);
      goto label_110;

    case 37:
      current_block = (Rpc - LABEL_50);
      goto label_109;

    case 38:
      current_block = (Rpc - LABEL_51);
      goto continuation_63;

    case 39:
      current_block = (Rpc - LABEL_52);
      goto label_112;

    case 40:
      current_block = (Rpc - LABEL_53);
      goto label_111;

    case 41:
      current_block = (Rpc - LABEL_54);
      goto continuation_65;

    case 42:
      current_block = (Rpc - LABEL_55);
      goto label_114;

    case 43:
      current_block = (Rpc - LABEL_56);
      goto label_113;

    case 44:
      current_block = (Rpc - LABEL_57);
      goto continuation_67;

    case 45:
      current_block = (Rpc - LABEL_58);
      goto label_116;

    case 46:
      current_block = (Rpc - LABEL_59);
      goto label_115;

    case 47:
      current_block = (Rpc - LABEL_60);
      goto continuation_69;

    case 48:
      current_block = (Rpc - LABEL_61);
      goto label_118;

    case 49:
      current_block = (Rpc - LABEL_62);
      goto label_117;

    case 50:
      current_block = (Rpc - LABEL_63);
      goto continuation_71;

    case 51:
      current_block = (Rpc - LABEL_64);
      goto label_119;

    case 52:
      current_block = (Rpc - LABEL_65);
      goto continuation_73;

    case 53:
      current_block = (Rpc - LABEL_67);
      goto label_121;

    case 54:
      current_block = (Rpc - LABEL_68);
      goto label_120;

    case 55:
      current_block = (Rpc - LABEL_66);
      goto lambda_59;

    case 56:
      current_block = (Rpc - LABEL_70);
      goto label_122;

    case 57:
      current_block = (Rpc - LABEL_71);
      goto label_123;

    case 58:
      current_block = (Rpc - LABEL_73);
      goto label_124;

    case 59:
      current_block = (Rpc - LABEL_74);
      goto label_125;

    case 60:
      current_block = (Rpc - LABEL_69);
      goto continuation_75;

    case 61:
      current_block = (Rpc - LABEL_77);
      goto label_127;

    case 62:
      current_block = (Rpc - LABEL_78);
      goto label_126;

    case 63:
      current_block = (Rpc - LABEL_79);
      goto continuation_77;

    case 64:
      current_block = (Rpc - LABEL_80);
      goto label_129;

    case 65:
      current_block = (Rpc - LABEL_81);
      goto label_128;

    case 66:
      current_block = (Rpc - LABEL_82);
      goto continuation_79;

    case 67:
      current_block = (Rpc - LABEL_83);
      goto label_131;

    case 68:
      current_block = (Rpc - LABEL_84);
      goto label_130;

    case 69:
      current_block = (Rpc - LABEL_85);
      goto continuation_81;

    case 70:
      current_block = (Rpc - LABEL_86);
      goto label_133;

    case 71:
      current_block = (Rpc - LABEL_87);
      goto label_132;

    case 72:
      current_block = (Rpc - LABEL_88);
      goto continuation_83;

    case 73:
      current_block = (Rpc - LABEL_89);
      goto label_135;

    case 74:
      current_block = (Rpc - LABEL_90);
      goto label_134;

    case 75:
      current_block = (Rpc - LABEL_91);
      goto continuation_85;

    case 76:
      current_block = (Rpc - LABEL_92);
      goto label_137;

    case 77:
      current_block = (Rpc - LABEL_93);
      goto label_136;

    case 78:
      current_block = (Rpc - LABEL_94);
      goto continuation_87;

    case 79:
      current_block = (Rpc - LABEL_95);
      goto label_138;

    case 80:
      current_block = (Rpc - LABEL_96);
      goto continuation_89;

    case 81:
      current_block = (Rpc - LABEL_98);
      goto label_140;

    case 82:
      current_block = (Rpc - LABEL_99);
      goto label_139;

    case 83:
      current_block = (Rpc - LABEL_97);
      goto lambda_54;

    case 84:
      current_block = (Rpc - LABEL_100);
      goto continuation_91;

    case 85:
      current_block = (Rpc - LABEL_103);
      goto label_141;

    case 86:
      current_block = (Rpc - LABEL_101);
      goto continuation_31;

    case 87:
      current_block = (Rpc - LABEL_104);
      goto generate_expression_152;

    case 88:
      current_block = (Rpc - LABEL_108);
      goto label_142;

    case 89:
      current_block = (Rpc - LABEL_109);
      goto continuation_50;

    case 90:
      current_block = (Rpc - LABEL_110);
      goto continuation_37;

    case 91:
      current_block = (Rpc - LABEL_112);
      goto continuation_49;

    case 92:
      current_block = (Rpc - LABEL_113);
      goto continuation_48;

    case 93:
      current_block = (Rpc - LABEL_114);
      goto continuation_40;

    case 94:
      current_block = (Rpc - LABEL_115);
      goto continuation_34;

    case 95:
      current_block = (Rpc - LABEL_116);
      goto label_146;

    case 96:
      current_block = (Rpc - LABEL_117);
      goto label_147;

    case 97:
      current_block = (Rpc - LABEL_119);
      goto continuation_46;

    case 98:
      current_block = (Rpc - LABEL_122);
      goto continuation_39;

    case 99:
      current_block = (Rpc - LABEL_106);
      goto continuation_30;

    case 100:
      current_block = (Rpc - LABEL_125);
      goto label_145;

    case 101:
      current_block = (Rpc - LABEL_127);
      goto label_143;

    case 102:
      current_block = (Rpc - LABEL_128);
      goto label_144;

    case 103:
      current_block = (Rpc - LABEL_132);
      goto label_154;

    case 104:
      current_block = (Rpc - LABEL_133);
      goto label_155;

    case 105:
      current_block = (Rpc - LABEL_134);
      goto expression_98;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_98)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_133])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_155)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_154)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	2,
	1,
	1,
	2,
	2,
	1,
	2,
	1,
	1,
	2,
	2,
	1,
	2,
	2,
	2,
	2,
	1,
	1,
	2,
	1,
	1,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	3,
	0,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	1,
	1,
	2,
	1,
	1,
	3,
	1,
	1,
	1,
	1,
	2,
	1,
	2,
	1,
	2,
	2,
	1,
	1,
	2,
	1,
	1,
	3,
	1,
	1,
	1,
	1,
	1,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 71)
      goto label_153;
    blocks = (current_block [OBJECT_49]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_132])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_153)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_233;
  Wrd11 = Wrd15;

DEFLABEL (label_232)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_231;
  Wrd11 = Wrd15;

DEFLABEL (label_230)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_229;
  Wrd11 = Wrd15;

DEFLABEL (label_228)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_227;
  Wrd11 = Wrd15;

DEFLABEL (label_226)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_225;
  Wrd11 = Wrd15;

DEFLABEL (label_224)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_223;
  Wrd11 = Wrd15;

DEFLABEL (label_222)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_221;
  Wrd11 = Wrd15;

DEFLABEL (label_220)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_219;
  Wrd11 = Wrd15;

DEFLABEL (label_218)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_217;
  Wrd10 = Wrd14;

DEFLABEL (label_216)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_215;
  Wrd5 = Wrd9;

DEFLABEL (label_214)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_213;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_213;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_213;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_212)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_211;
  Wrd7 = Wrd11;

DEFLABEL (label_210)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_209;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_209;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_209;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_208)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_207;
  Wrd7 = Wrd11;

DEFLABEL (label_206)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_205;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_205;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_205;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_204)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_203;
  Wrd7 = Wrd11;

DEFLABEL (label_202)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_201;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_201;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_201;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_200)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_199;
  Wrd7 = Wrd11;

DEFLABEL (label_198)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_197;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_197;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_197;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_196)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_195;
  Wrd7 = Wrd11;

DEFLABEL (label_194)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_193;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 26))
    goto label_193;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_193;
  (Wrd11.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd14.pObj) = (& ((Wrd18.pObj) [(Wrd11.Lng)]));
  ((Wrd14.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_192)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd5.Obj) = Rvl;
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_191;
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd22.uLng) == 26))
    goto label_191;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd23.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_191;
  (Wrd16.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd19.pObj) = (& ((Wrd25.pObj) [(Wrd16.Lng)]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  ((Wrd19.pObj) [1]) = (Wrd21.Obj);

DEFLABEL (label_190)
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_189;
  Wrd6 = Wrd10;

DEFLABEL (label_188)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_187;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_187;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_187;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_186)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_185;
  Wrd7 = Wrd11;

DEFLABEL (label_184)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_183;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_183;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_183;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_182)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_181;
  Wrd7 = Wrd11;

DEFLABEL (label_180)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_179;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_179;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_179;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_178)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_177;
  Wrd7 = Wrd11;

DEFLABEL (label_176)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_175;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_175;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_175;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_174)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_173;
  Wrd7 = Wrd11;

DEFLABEL (label_172)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_171;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_171;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_171;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_170)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_169;
  Wrd7 = Wrd11;

DEFLABEL (label_168)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_167;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 26))
    goto label_167;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_167;
  (Wrd17.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd20.pObj) = (& ((Wrd24.pObj) [(Wrd17.Lng)]));
  ((Wrd20.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_166)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_165;
  Wrd7 = Wrd11;

DEFLABEL (label_164)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_163;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 26))
    goto label_163;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_163;
  (Wrd11.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd14.pObj) = (& ((Wrd18.pObj) [(Wrd11.Lng)]));
  ((Wrd14.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_162)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd5.Obj) = Rvl;
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_161;
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd22.uLng) == 26))
    goto label_161;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd23.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_161;
  (Wrd16.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd19.pObj) = (& ((Wrd25.pObj) [(Wrd16.Lng)]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  ((Wrd19.pObj) [1]) = (Wrd21.Obj);

DEFLABEL (label_160)
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_159;
  Wrd6 = Wrd10;

DEFLABEL (label_158)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_157;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 26))
    goto label_157;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_157;
  (Wrd13.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd16.pObj) = (& ((Wrd20.pObj) [(Wrd13.Lng)]));
  ((Wrd16.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_156)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_105);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (label_157)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_141)
  goto label_156;

DEFLABEL (label_159)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99])), (Wrd7.pObj));

DEFLABEL (label_139)
  (Wrd6.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_140)
  goto label_160;

DEFLABEL (label_163)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_138)
  goto label_162;

DEFLABEL (label_165)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93])), (Wrd8.pObj));

DEFLABEL (label_136)
  (Wrd7.Obj) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_137)
  goto label_166;

DEFLABEL (label_169)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd8.pObj));

DEFLABEL (label_134)
  (Wrd7.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_135)
  goto label_170;

DEFLABEL (label_173)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd8.pObj));

DEFLABEL (label_132)
  (Wrd7.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_133)
  goto label_174;

DEFLABEL (label_177)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84])), (Wrd8.pObj));

DEFLABEL (label_130)
  (Wrd7.Obj) = Rvl;
  goto label_176;

DEFLABEL (label_179)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_131)
  goto label_178;

DEFLABEL (label_181)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd8.pObj));

DEFLABEL (label_128)
  (Wrd7.Obj) = Rvl;
  goto label_180;

DEFLABEL (label_183)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_129)
  goto label_182;

DEFLABEL (label_185)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78])), (Wrd8.pObj));

DEFLABEL (label_126)
  (Wrd7.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_127)
  goto label_186;

DEFLABEL (label_189)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68])), (Wrd7.pObj));

DEFLABEL (label_120)
  (Wrd6.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_121)
  goto label_190;

DEFLABEL (label_193)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_119)
  goto label_192;

DEFLABEL (label_195)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62])), (Wrd8.pObj));

DEFLABEL (label_117)
  (Wrd7.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_118)
  goto label_196;

DEFLABEL (label_199)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59])), (Wrd8.pObj));

DEFLABEL (label_115)
  (Wrd7.Obj) = Rvl;
  goto label_198;

DEFLABEL (label_201)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_116)
  goto label_200;

DEFLABEL (label_203)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56])), (Wrd8.pObj));

DEFLABEL (label_113)
  (Wrd7.Obj) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_114)
  goto label_204;

DEFLABEL (label_207)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53])), (Wrd8.pObj));

DEFLABEL (label_111)
  (Wrd7.Obj) = Rvl;
  goto label_206;

DEFLABEL (label_209)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_112)
  goto label_208;

DEFLABEL (label_211)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd8.pObj));

DEFLABEL (label_109)
  (Wrd7.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 3);

DEFLABEL (label_110)
  goto label_212;

DEFLABEL (label_215)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45])), (Wrd6.pObj));

DEFLABEL (label_108)
  (Wrd5.Obj) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd11.pObj));

DEFLABEL (label_107)
  (Wrd10.Obj) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39])), (Wrd12.pObj));

DEFLABEL (label_106)
  (Wrd11.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd12.pObj));

DEFLABEL (label_105)
  (Wrd11.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_223)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd12.pObj));

DEFLABEL (label_104)
  (Wrd11.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_225)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd12.pObj));

DEFLABEL (label_103)
  (Wrd11.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd12.pObj));

DEFLABEL (label_102)
  (Wrd11.Obj) = Rvl;
  goto label_226;

DEFLABEL (label_229)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd12.pObj));

DEFLABEL (label_101)
  (Wrd11.Obj) = Rvl;
  goto label_228;

DEFLABEL (label_231)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_100)
  (Wrd11.Obj) = Rvl;
  goto label_230;

DEFLABEL (label_233)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_99)
  (Wrd11.Obj) = Rvl;
  goto label_232;

DEFLABEL (context_make_149)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (context_make_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_150)
DEFLABEL (lambda_59)
  INTERRUPT_CHECK (26, LABEL_66);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_243;
  Wrd5 = Wrd9;

DEFLABEL (label_242)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_241;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_240)
  (Wrd20.Obj) = (* (Rsp++));
  if (! ((Wrd11.Obj) == (Wrd20.Obj)))
    goto label_234;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72]));

DEFLABEL (label_234)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_239;
  Wrd21 = Wrd25;

DEFLABEL (label_238)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_237;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_236)
  (Wrd36.Obj) = (* (Rsp++));
  if ((Wrd27.Obj) == (Wrd36.Obj))
    goto label_235;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76]));

DEFLABEL (label_235)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75]));

DEFLABEL (label_237)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32]), 1);

DEFLABEL (label_125)
  (Wrd27.Obj) = Rvl;
  goto label_236;

DEFLABEL (label_239)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73])), (Wrd22.pObj));

DEFLABEL (label_124)
  (Wrd21.Obj) = Rvl;
  goto label_238;

DEFLABEL (label_241)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32]), 1);

DEFLABEL (label_123)
  (Wrd11.Obj) = Rvl;
  goto label_240;

DEFLABEL (label_243)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70])), (Wrd6.pObj));

DEFLABEL (label_122)
  (Wrd5.Obj) = Rvl;
  goto label_242;

DEFLABEL (lambda_151)
DEFLABEL (lambda_54)
  INTERRUPT_CHECK (26, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_101);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_106);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_47]))
    goto label_263;

DEFLABEL (label_262)
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == (current_block [OBJECT_48]))
    goto label_261;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_131]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_122);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_245;

DEFLABEL (label_244)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123]));

DEFLABEL (label_245)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_124]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_114);
  if (! (Rvl == (current_block [OBJECT_45])))
    goto label_244;

DEFLABEL (label_261)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_260;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_259)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_258;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_257)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == (current_block [OBJECT_0]))
    goto label_256;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_130]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_119);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_248;
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_121]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_113);
  if (Rvl == (current_block [OBJECT_44]))
    goto label_247;

DEFLABEL (label_248)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_246;

DEFLABEL (label_247)
  (Wrd98.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd98.Obj);

DEFLABEL (label_246)
DEFLABEL (label_255)
  (Wrd63.Obj) = (Rsp [0]);
  if (! ((Wrd63.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_254;
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_112);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_253;
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd104.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd104.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_109);
  if (Rvl == (current_block [OBJECT_42]))
    goto label_250;
  (Wrd111.Obj) = (current_block [OBJECT_43]);
  goto label_249;

DEFLABEL (label_250)
  (Wrd111.Obj) = (current_block [OBJECT_3]);

DEFLABEL (label_249)
DEFLABEL (label_252)
  Rsp = (& (Rsp [2]));
  if ((Wrd111.Obj) == ((SCHEME_OBJECT) 0))
    goto label_244;

DEFLABEL (label_251)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129]));

DEFLABEL (label_253)
  Rsp = (& (Rsp [2]));
  goto label_244;

DEFLABEL (label_254)
  Rsp = (& (Rsp [2]));
  if ((Wrd63.Obj) == ((SCHEME_OBJECT) 0))
    goto label_244;
  goto label_251;

DEFLABEL (label_256)
  Rsp = (& (Rsp [1]));
  goto label_251;

DEFLABEL (label_258)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32]), 1);

DEFLABEL (label_144)
  (* (--Rsp)) = Rvl;
  goto label_257;

DEFLABEL (label_260)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46]), 1);

DEFLABEL (label_143)
  (Wrd13.Obj) = Rvl;
  goto label_259;

DEFLABEL (label_263)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_269;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_268)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_126]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_115);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_262;
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_267;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd77.Obj) = ((Wrd79.pObj) [1]);

DEFLABEL (label_266)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_265;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_264)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_118]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_110);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_262;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111]));

DEFLABEL (label_265)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32]), 1);

DEFLABEL (label_147)
  (* (--Rsp)) = Rvl;
  goto label_264;

DEFLABEL (label_267)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46]), 1);

DEFLABEL (label_146)
  (Wrd77.Obj) = Rvl;
  goto label_266;

DEFLABEL (label_269)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32]), 1);

DEFLABEL (label_145)
  (* (--Rsp)) = Rvl;
  goto label_268;

DEFLABEL (generate_expression_152)
  CLOSURE_HEADER (LABEL_104);

DEFLABEL (generate_expression_95)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_271;
  if (! ((Wrd6.uLng) == 26))
    goto label_271;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd17.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_271;
  (Wrd15.pObj) = (& ((Wrd21.pObj) [(Wrd8.Lng)]));
  (Wrd9.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_270)
  (Rsp [0]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_271)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41]), 2);

DEFLABEL (label_142)
  (Wrd9.Obj) = Rvl;
  goto label_270;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_fggen_so_43b03a7fd6a781cd [71] =
  {
    { "fggen_so_code_1", 1, fggen_so_code_1 },
    { "fggen_so_code_2", 1, fggen_so_code_2 },
    { "fggen_so_code_3", 4, fggen_so_code_3 },
    { "fggen_so_code_4", 1, fggen_so_code_4 },
    { "fggen_so_code_5", 1, fggen_so_code_5 },
    { "fggen_so_code_6", 2, fggen_so_code_6 },
    { "fggen_so_code_7", 2, fggen_so_code_7 },
    { "fggen_so_code_8", 36, fggen_so_code_8 },
    { "fggen_so_code_9", 2, fggen_so_code_9 },
    { "fggen_so_code_10", 4, fggen_so_code_10 },
    { "fggen_so_code_11", 18, fggen_so_code_11 },
    { "fggen_so_code_12", 4, fggen_so_code_12 },
    { "fggen_so_code_13", 7, fggen_so_code_13 },
    { "fggen_so_code_14", 2, fggen_so_code_14 },
    { "fggen_so_code_15", 2, fggen_so_code_15 },
    { "fggen_so_code_16", 4, fggen_so_code_16 },
    { "fggen_so_code_17", 4, fggen_so_code_17 },
    { "fggen_so_code_18", 3, fggen_so_code_18 },
    { "fggen_so_code_19", 5, fggen_so_code_19 },
    { "fggen_so_code_20", 6, fggen_so_code_20 },
    { "fggen_so_code_21", 2, fggen_so_code_21 },
    { "fggen_so_code_22", 5, fggen_so_code_22 },
    { "fggen_so_code_23", 6, fggen_so_code_23 },
    { "fggen_so_code_24", 4, fggen_so_code_24 },
    { "fggen_so_code_25", 3, fggen_so_code_25 },
    { "fggen_so_code_26", 2, fggen_so_code_26 },
    { "fggen_so_code_27", 5, fggen_so_code_27 },
    { "fggen_so_code_28", 2, fggen_so_code_28 },
    { "fggen_so_code_29", 1, fggen_so_code_29 },
    { "fggen_so_code_30", 6, fggen_so_code_30 },
    { "fggen_so_code_31", 6, fggen_so_code_31 },
    { "fggen_so_code_32", 6, fggen_so_code_32 },
    { "fggen_so_code_33", 2, fggen_so_code_33 },
    { "fggen_so_code_34", 3, fggen_so_code_34 },
    { "fggen_so_code_35", 1, fggen_so_code_35 },
    { "fggen_so_code_36", 3, fggen_so_code_36 },
    { "fggen_so_code_37", 2, fggen_so_code_37 },
    { "fggen_so_code_38", 1, fggen_so_code_38 },
    { "fggen_so_code_39", 6, fggen_so_code_39 },
    { "fggen_so_code_40", 7, fggen_so_code_40 },
    { "fggen_so_code_41", 15, fggen_so_code_41 },
    { "fggen_so_code_42", 5, fggen_so_code_42 },
    { "fggen_so_code_43", 4, fggen_so_code_43 },
    { "fggen_so_code_44", 4, fggen_so_code_44 },
    { "fggen_so_code_45", 4, fggen_so_code_45 },
    { "fggen_so_code_46", 2, fggen_so_code_46 },
    { "fggen_so_code_47", 37, fggen_so_code_47 },
    { "fggen_so_code_48", 13, fggen_so_code_48 },
    { "fggen_so_code_49", 23, fggen_so_code_49 },
    { "fggen_so_code_50", 10, fggen_so_code_50 },
    { "fggen_so_code_51", 32, fggen_so_code_51 },
    { "fggen_so_code_52", 19, fggen_so_code_52 },
    { "fggen_so_code_53", 7, fggen_so_code_53 },
    { "fggen_so_code_54", 38, fggen_so_code_54 },
    { "fggen_so_code_55", 16, fggen_so_code_55 },
    { "fggen_so_code_56", 14, fggen_so_code_56 },
    { "fggen_so_code_57", 8, fggen_so_code_57 },
    { "fggen_so_code_58", 5, fggen_so_code_58 },
    { "fggen_so_code_59", 5, fggen_so_code_59 },
    { "fggen_so_code_60", 6, fggen_so_code_60 },
    { "fggen_so_code_61", 3, fggen_so_code_61 },
    { "fggen_so_code_62", 10, fggen_so_code_62 },
    { "fggen_so_code_63", 6, fggen_so_code_63 },
    { "fggen_so_code_64", 3, fggen_so_code_64 },
    { "fggen_so_code_65", 25, fggen_so_code_65 },
    { "fggen_so_code_66", 17, fggen_so_code_66 },
    { "fggen_so_code_67", 11, fggen_so_code_67 },
    { "fggen_so_code_68", 4, fggen_so_code_68 },
    { "fggen_so_code_69", 4, fggen_so_code_69 },
    { "fggen_so_code_70", 3, fggen_so_code_70 },
    { "fggen_so_code_71", 3, fggen_so_code_71 }
  };

int
decl_fggen_so_43b03a7fd6a781cd (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_fggen_so_43b03a7fd6a781cd);
  return (0);
}

DECLARE_COMPILED_CODE ("fggen.so", 106, decl_fggen_so_43b03a7fd6a781cd, fggen_so_43b03a7fd6a781cd)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_fggen_so_data_43b03a7fd6a781cd [13796] =
  "\xd2\x02\x89\x01\xcf\x19\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9"
  "\x81\x22\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xb1\x82\x22\x29\x21"
  "\x9e\x2b\xbb\x1d\xb0\x83\x88\x07\xb1\x80\xc1\x0e\xbc\x24\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x84\x88\x07\x28"
  "\x0d\xbe\x23\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x85\x88\x07\x28\xb6"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xb1\x82\x28\xb6\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x07\x28"
  "\xb6\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\xc3"
  "\x02\xc2\x1c\x82\x07\xc3\x1c\x02\x0d\x1c\x1d\x0d\x08\x0d\x1c\x0d"
  "\x1c\x25\x1b\x1b\x0d\x0d\x1c\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\xb6\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x0c\x0c\x81\xb1\x83"
  "\x0c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x0c\xb1\x83\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x0c\xb1\x83\x07\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x83\xc1\x1c\x1b\x02\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x02\x0d\x1c"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x1c\x07\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x28\x1b\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x82\xb1\x81\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x83\x82\xb1\x81\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x25\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x0d"
  "\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x1b\x80\x0d\x1c\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x08\x07\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x08"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1b\x25\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83"
  "\x02\x02\x1b\x1b\x02\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x07\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\xb6\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x83\x0d\x02\x0d"
  "\x07\x81\x02\xb1\x82\x1b\x02\x08\x1b\x0d\x1b\x24\x28\x0d\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x0d"
  "\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x0c"
  "\x08\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0d"
  "\x0c\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x81\xb1\x83\x08\x1b\x82\x0d\x1b\x0d\x1b\x24\x28\x0d\x28\x0d\x1c"
  "\x28\x1b\x28\xb6\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x08\x81\x06\x02\xc2\x02\x1b"
  "\xc2\x1b\x07\xc1\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x08\x1b\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x81\xb1\x82\x08\x1b\x02\x07\x1b\x80\x1b\x1b\x1b\x1b"
  "\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\xb6"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x83\x02\x1b\x1b\x81\x08\xb1\x82\x1b\x24\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x0c\x0d\x0c\x1b\x1b\x0d\x1b\x24\x28\x0d\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x1b\x0d\x1c\x0d\x24\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x02\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d"
  "\x24\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\x0c\x07\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x24\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x08\x28\x0d\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\x0c\x0c\x07\x0c\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x0d\x24\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x07\x1b\x80\xb1"
  "\x83\x0c\x81\x20\x1b\x0d\x1c\x24\x28\x1b\x28\x0d\xb9\x28\x1b\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x83\x07"
  "\x28\x1b\x28\xb6\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\xc3\x02"
  "\x80\x08\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28\x0d\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x08\x0d\x1c\x24\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b"
  "\xc3\xc2\x1b\x0d\x0d\x06\xc2\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x1b\x1b\x1b\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x0d\x1c"
  "\x1b\x1b\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x1b\x1b\x0d\x1c\x1b\x1b\x1b"
  "\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x0d\x1b\x0d\x1c\x1b\x1b\x1b\x0d\x0d"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1c\x1b\x17\x0c\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x0c"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x0d\x1c\x1b\x99\x1b\x2a"
  "\x1b\x2a\x99\x0d\x1c\x0d\x1c\xb4\x0d\x1c\x1b\x1b\x0d\x1b\x1b\x1b"
  "\x1b\x0d\x0d\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x17\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb5"
  "\x2a\x17\xc3\xb6\x0d\x0d\x99\xb3\x2a\xb2\x2a\x99\x0d\x1c\x1b\x99"
  "\x07\x0c\x0d\x0d\x08\x89\x08\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x1b\x28\xb1\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66"
  "\x67\x67\x65\x6e\x2f\x66\x67\x67\x65\x6e\x2e\x69\x6e\x66\x15\x23"
  "\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f"
  "\x6f\x74\x5d\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66"
  "\x6b\x04\x83\x04\x03\x02\x6c\x04\x83\x04\x03\x02\x0f\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67"
  "\x2e\x31\x02\x70\x0a\x81\x85\x02\x6f\x08\x81\x83\x02\x6e\x06\x81"
  "\x83\x02\x6d\x04\x83\x04\x09\x12\x02\x04\x0d\x63\x6f\x6e\x74\x65"
  "\x78\x74\x2f\x6d\x61\x6b\x65\x02\x71\x04\x82\x02\x03\x0a\x02\x04"
  "\x02\x72\x04\x82\x02\x03\x0a\x09\x02\x04\x02\x74\x06\x81\x85\x02"
  "\x73\x04\x83\x04\x05\x0d\x0a\x02\x08\x04\x02\x76\x06\x81\x85\x02"
  "\x75\x04\x83\x04\x05\x0e\x0b\x02\x09\x0d\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x73\x65\x74\x21\x0b\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72"
  "\x65\x66\x0c\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x0d"
  "\x09\x10\x23\x5b\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x5d\x0e\x02\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x18\x2a"
  "\x76\x69\x72\x74\x75\x61\x6c\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x73\x2a\x0f\x13\x2a\x67\x6c\x6f\x62\x61\x6c\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x2a\x10\x03\x0f\x10\x0d\x2a"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x2a\x1c\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x11\x05\x05\x13\x73\x68\x61\x6c\x6c"
  "\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x04\x0b\x6d"
  "\x61\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x12\x04\x0e\x6d\x61\x6b\x65"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x13\x03\x12\x73\x63\x6f\x64"
  "\x65\x2f\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x3f\x14\x04\x09"
  "\x66\x6f\x72\x2d\x65\x61\x63\x68\x15\x05\x10\x6d\x61\x6b\x65\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x04\x05\x0f\x75\x6e\x73"
  "\x63\x61\x6e\x2d\x64\x65\x66\x69\x6e\x65\x73\x04\x0d\x73\x63\x61"
  "\x6e\x2d\x64\x65\x66\x69\x6e\x65\x73\x04\x1c\x73\x63\x6f\x64\x65"
  "\x2f\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x63\x6f\x6d\x70"
  "\x6f\x6e\x65\x6e\x74\x73\x16\x03\x0f\x65\x64\x67\x65\x2d\x6e\x65"
  "\x78\x74\x2d\x6e\x6f\x64\x65\x17\x07\x0e\x67\x65\x6e\x65\x72\x61"
  "\x74\x65\x2f\x62\x6f\x64\x79\x18\x04\x0f\x6d\x61\x6b\x65\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x73\x19\x04\x1f\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x63\x6f\x6e\x74\x65\x78\x74\x73\x21\x04\x1a\x73\x65\x74\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x65\x6e\x74\x72\x79\x2d\x6e"
  "\x6f\x64\x65\x21\x10\x9a\x01\x4a\x81\x85\x02\x99\x01\x48\x81\x83"
  "\x02\x98\x01\x46\x81\x89\x02\x97\x01\x44\x81\x85\x02\x96\x01\x42"
  "\x81\x85\x02\x95\x01\x40\x81\x83\x02\x94\x01\x3e\x83\x04\x93\x01"
  "\x3c\x81\x85\x02\x92\x01\x3a\x81\x83\x02\x91\x01\x38\x81\x89\x02"
  "\x90\x01\x36\x81\x8b\x02\x8f\x01\x34\x81\x87\x02\x8e\x01\x32\x81"
  "\x85\x02\x8d\x01\x30\x81\x83\x02\x8c\x01\x2e\x83\x04\x8b\x01\x2c"
  "\x81\x85\x02\x8a\x01\x2a\x81\x83\x02\x89\x01\x28\x81\x83\x02\x88"
  "\x01\x26\x81\x89\x02\x87\x01\x24\x81\x8d\x02\x86\x01\x22\x81\x89"
  "\x02\x85\x01\x20\x81\x89\x02\x84\x01\x1e\x81\x89\x02\x83\x01\x1c"
  "\x81\x85\x02\x82\x01\x1a\x81\x87\x02\x81\x01\x18\x81\x85\x02\x80"
  "\x01\x16\x81\x83\x02\x7f\x14\x81\x83\x02\x7e\x12\x81\x85\x02\x7d"
  "\x10\x81\x83\x02\x7c\x0e\x81\x83\x02\x7b\x0c\x81\x85\x02\x7a\x0a"
  "\x81\x83\x02\x79\x08\x81\x83\x02\x78\x06\x81\x83\x02\x77\x04\x83"
  "\x04\x49\x7f\x1a\x02\x0a\x04\x04\x6d\x61\x70\x1b\x04\x13\x03\x9c"
  "\x01\x06\x81\x85\x02\x9b\x01\x04\x84\x06\x05\x0d\x1c\x02\x0b\x04"
  "\x1a\x70\x72\x6f\x63\x65\x73\x73\x2d\x70\x72\x65\x2d\x64\x65\x63"
  "\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x21\x06\x14\x67\x65\x6e\x65"
  "\x72\x61\x74\x65\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x1d"
  "\x04\x1b\x70\x72\x6f\x63\x65\x73\x73\x2d\x70\x6f\x73\x74\x2d\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x21\x04\xa0\x01\x0a"
  "\x81\x8d\x02\x9f\x01\x08\x81\x8b\x02\x9e\x01\x06\x81\x8b\x02\x9d"
  "\x01\x04\x87\x0c\x09\x13\x1e\x02\x0c\x0c\x15\x49\x6c\x6c\x65\x67"
  "\x61\x6c\x20\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x22"
  "\x49\x6c\x6c\x65\x67\x61\x6c\x20\x76\x69\x72\x74\x75\x61\x6c\x20"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x20\x74\x79\x70"
  "\x65\x1a\x49\x6c\x6c\x65\x67\x61\x6c\x20\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x20\x74\x79\x70\x65\x19\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x65\x66"
  "\x66\x65\x63\x74\x1f\x1c\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70\x72\x65\x64\x69\x63\x61\x74"
  "\x65\x20\x18\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x2f\x76\x61\x6c\x75\x65\x21\x04\x03\x0a\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x3f\x22\x03\x16\x76\x69\x72\x74\x75\x61"
  "\x6c\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x3f\x23"
  "\x03\x1b\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x2f\x74\x79\x70\x65\x24\x04\x06\x65"
  "\x72\x72\x6f\x72\x25\x03\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x3f\x26\x07\x12\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x2f\x63\x61\x73\x65\x27\x07\xb2\x01\x26\x81\x8d\x02\xb1\x01\x24"
  "\x81\x8d\x02\xb0\x01\x22\x81\x8d\x02\xaf\x01\x20\x81\x8b\x02\xae"
  "\x01\x1e\x81\x8b\x02\xad\x01\x1c\x81\x8d\x02\xac\x01\x1a\x81\x8d"
  "\x02\xab\x01\x18\x81\x8d\x02\xaa\x01\x16\x81\x8b\x02\xa9\x01\x14"
  "\x81\x8b\x02\xa8\x01\x12\x81\x8b\x02\xa7\x01\x10\x81\x8b\x02\xa6"
  "\x01\x0e\x81\x8d\x02\xa5\x01\x0c\x81\x8d\x02\xa4\x01\x0a\x81\x8d"
  "\x02\xa3\x01\x08\x81\x8b\x02\xa2\x01\x06\x81\x8b\x02\xa1\x01\x04"
  "\x87\x0c\x25\x41\x28\x02\x0d\x0c\x15\x49\x6c\x6c\x65\x67\x61\x6c"
  "\x20\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x03\x22\x03"
  "\x23\x03\x24\x03\x26\x04\x25\x06\xb6\x01\x0a\x81\x83\x02\xb5\x01"
  "\x08\x81\x83\x02\xb4\x01\x06\x81\x83\x02\xb3\x01\x04\x83\x04\x09"
  "\x1c\x29\x02\x0e\x0c\x15\x49\x6c\x6c\x65\x67\x61\x6c\x20\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x03\x22\x03\x23\x03\x24"
  "\x03\x26\x04\x25\x06\xbd\x01\x10\x81\x85\x02\xbc\x01\x0e\x81\x85"
  "\x02\xbb\x01\x0c\x81\x85\x02\xba\x01\x0a\x81\x85\x02\xb9\x01\x08"
  "\x81\x85\x02\xb8\x01\x06\x81\x85\x02\xb7\x01\x04\x84\x06\x0f\x23"
  "\x24\x02\x0f\x1f\x02\x04\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2f\x74\x79\x70\x65\x3f\x2a\x02\xbf\x01\x06\x81\x85"
  "\x02\xbe\x01\x04\x83\x04\x05\x0d\x2b\x02\x10\x20\x02\x04\x2a\x02"
  "\xc1\x01\x06\x81\x85\x02\xc0\x01\x04\x83\x04\x05\x0d\x2c\x02\x11"
  "\x04\x63\x61\x72\x2d\x0c\x0c\x05\x0f\x6d\x61\x6b\x65\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2e\x02\xc5\x01\x0a\x81\x85\x02\xc4"
  "\x01\x08\x81\x83\x02\xc3\x01\x06\x81\x83\x02\xc2\x01\x04\x83\x04"
  "\x09\x14\x2f\x02\x12\x0c\x0b\x15\x73\x65\x74\x2d\x73\x6e\x6f\x64"
  "\x65\x2d\x6e\x65\x78\x74\x2d\x65\x64\x67\x65\x21\x30\x02\x03\x17"
  "\x02\xc9\x01\x0a\x81\x85\x02\xc8\x01\x08\x81\x87\x02\xc7\x01\x06"
  "\x81\x83\x02\xc6\x01\x04\x83\x04\x09\x14\x31\x02\x13\x15\x49\x6c"
  "\x6c\x65\x67\x61\x6c\x20\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x32\x03\x22\x03\x26\x05\x2e\x04\x25\x05\xcc\x01\x08\x81"
  "\x85\x02\xcb\x01\x06\x81\x85\x02\xca\x01\x04\x84\x06\x07\x15\x33"
  "\x02\x14\x11\x73\x63\x66\x67\x2a\x70\x63\x66\x67\x2d\x3e\x70\x63"
  "\x66\x67\x21\x34\x11\x73\x63\x66\x67\x2a\x73\x63\x66\x67\x2d\x3e"
  "\x73\x63\x66\x67\x21\x35\x1d\x73\x63\x66\x67\x2a\x73\x75\x62\x70"
  "\x72\x6f\x62\x6c\x65\x6d\x2d\x3e\x73\x75\x62\x70\x72\x6f\x62\x6c"
  "\x65\x6d\x21\x36\x04\x07\x27\x02\xd1\x01\x0c\x81\x8b\x02\xd0\x01"
  "\x0a\x81\x87\x02\xcf\x01\x08\x81\x85\x02\xce\x01\x06\x81\x83\x02"
  "\xcd\x01\x04\x83\x04\x0b\x15\x37\x02\x15\x0c\x03\x23\x03\x1c\x76"
  "\x69\x72\x74\x75\x61\x6c\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2f\x72\x65\x69\x66\x79\x21\x04\x0a\x6d\x61\x6b\x65"
  "\x2d\x70\x75\x73\x68\x04\xd7\x01\x0e\x81\x8d\x02\xd6\x01\x0c\x81"
  "\x91\x02\xd5\x01\x0a\x81\x8b\x02\xd4\x01\x08\x81\x89\x02\xd3\x01"
  "\x06\x81\x89\x02\xd2\x01\x04\x86\x0a\x0d\x19\x38\x02\x16\x03\x14"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x72\x76\x61"
  "\x6c\x75\x65\x39\x05\x10\x6d\x61\x6b\x65\x2d\x73\x75\x62\x70\x72"
  "\x6f\x62\x6c\x65\x6d\x3a\x03\xd9\x01\x06\x81\x87\x02\xd8\x01\x04"
  "\x84\x06\x05\x0d\x3b\x02\x17\x04\x35\x05\x3a\x03\xde\x01\x0c\x81"
  "\x87\x02\xdd\x01\x0a\x81\x87\x02\xdc\x01\x08\x81\x85\x02\xdb\x01"
  "\x06\x81\x87\x02\xda\x01\x04\x84\x06\x0b\x17\x3c\x02\x18\x05\x11"
  "\x70\x63\x66\x67\x2a\x73\x63\x66\x67\x2d\x3e\x73\x63\x66\x67\x21"
  "\x3d\x05\x3a\x03\xe4\x01\x0e\x81\x87\x02\xe3\x01\x0c\x81\x87\x02"
  "\xe2\x01\x0a\x81\x87\x02\xe1\x01\x08\x81\x8b\x02\xe0\x01\x06\x81"
  "\x89\x02\xdf\x01\x04\x85\x08\x0d\x19\x3e\x02\x19\x0f\x02\x0f\x02"
  "\x06\x1b\x76\x69\x72\x74\x75\x61\x6c\x2d\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2f\x25\x6d\x61\x6b\x65\x02\xe8\x01\x0a"
  "\x81\x83\x02\xe7\x01\x08\x81\x83\x02\xe6\x01\x06\x81\x89\x02\xe5"
  "\x01\x04\x86\x0a\x09\x13\x3f\x02\x1a\x06\x1a\x76\x69\x72\x74\x75"
  "\x61\x6c\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f"
  "\x6d\x61\x6b\x65\x40\x02\xeb\x01\x08\x81\x8b\x02\xea\x01\x06\x81"
  "\x8b\x02\xe9\x01\x04\x83\x04\x07\x0d\x41\x02\x1b\x03\x1a\x73\x63"
  "\x6f\x64\x65\x2f\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76"
  "\x65\x63\x74\x6f\x72\x42\x03\xed\x01\x06\x81\x87\x02\xec\x01\x04"
  "\xfd\x07\x05\x0d\x43\x02\x1c\x06\x61\x70\x70\x6c\x79\x21\x6d\x61"
  "\x6b\x65\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d"
  "\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x44\x02"
  "\x06\x1d\x02\xf2\x01\x0c\x81\x85\x02\xf1\x01\x0a\x81\x93\x02\xf0"
  "\x01\x08\x81\x8f\x02\xef\x01\x06\x81\x8f\x02\xee\x01\x04\x83\x04"
  "\x0b\x14\x45\x02\x1d\x03\x0e\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73"
  "\x74\x61\x6e\x74\x46\x05\x19\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2f"
  "\x72\x76\x61\x6c\x75\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x47"
  "\x03\xf4\x01\x06\x81\x89\x02\xf3\x01\x04\x86\x0a\x05\x0d\x48\x02"
  "\x1e\x05\x47\x02\xf5\x01\x04\x86\x0a\x03\x49\x02\x1f\x0f\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x65\x2f\x76\x61\x6c\x75\x65\x4a\x1c\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x65\x2f\x70\x72\x65\x64\x69\x63\x61\x74\x65"
  "\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x4b\x10\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x65\x2f\x65\x66\x66\x65\x63\x74\x4c\x11\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x65\x2f\x75\x6e\x6b\x6e\x6f\x77\x6e\x4d\x05\x07\x27"
  "\x02\xfb\x01\x0e\x81\x87\x02\xfa\x01\x0c\x81\x8f\x02\xf9\x01\x0a"
  "\x81\x8d\x02\xf8\x01\x08\x81\x8b\x02\xf7\x01\x06\x81\x89\x02\xf6"
  "\x01\x04\x85\x08\x0d\x18\x4e\x02\x20\x0c\x0d\x63\x6f\x6e\x73\x74"
  "\x61\x6e\x74\x2d\x74\x61\x67\x4f\x02\x02\x0d\x6d\x61\x6b\x65\x2d"
  "\x66\x67\x2d\x6e\x6f\x6f\x70\x03\x11\x73\x6e\x6f\x64\x65\x2d\x3e"
  "\x70\x63\x66\x67\x2d\x74\x72\x75\x65\x03\x12\x73\x6e\x6f\x64\x65"
  "\x2d\x3e\x70\x63\x66\x67\x2d\x66\x61\x6c\x73\x65\x04\x81\x02\x0e"
  "\x81\x87\x02\x80\x02\x0c\x81\x87\x02\xff\x01\x0a\x81\x87\x02\xfe"
  "\x01\x08\x81\x89\x02\xfd\x01\x06\x81\x87\x02\xfc\x01\x04\x85\x08"
  "\x0d\x1c\x50\x02\x21\x4a\x13\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2f"
  "\x70\x72\x65\x64\x69\x63\x61\x74\x65\x51\x4c\x4d\x05\x07\x27\x02"
  "\x87\x02\x0e\x81\x87\x02\x86\x02\x0c\x81\x8f\x02\x85\x02\x0a\x81"
  "\x8d\x02\x84\x02\x08\x81\x8b\x02\x83\x02\x06\x81\x89\x02\x82\x02"
  "\x04\x85\x08\x0d\x18\x52\x02\x22\x07\x72\x65\x74\x75\x72\x6e\x53"
  "\x05\x2e\x07\x11\x6d\x61\x6b\x65\x2d\x61\x70\x70\x6c\x69\x63\x61"
  "\x74\x69\x6f\x6e\x54\x03\x89\x02\x06\x81\x8b\x02\x88\x02\x04\x85"
  "\x08\x05\x10\x55\x02\x23\x03\x22\x03\x46\x05\x4d\x04\x8c\x02\x08"
  "\x81\x87\x02\x8b\x02\x06\x81\x87\x02\x8a\x02\x04\x85\x08\x07\x11"
  "\x56\x02\x24\x04\x0f\x6d\x61\x6b\x65\x2d\x74\x72\x75\x65\x2d\x74"
  "\x65\x73\x74\x57\x02\x8d\x02\x04\x85\x08\x03\x58\x02\x25\x53\x03"
  "\x23\x07\x54\x05\x3a\x04\x1a\x6d\x61\x6b\x65\x2d\x73\x75\x62\x70"
  "\x72\x6f\x62\x6c\x65\x6d\x2f\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c"
  "\x54\x05\x90\x02\x08\x81\x89\x02\x8f\x02\x06\x81\x87\x02\x8e\x02"
  "\x04\x85\x08\x07\x15\x53\x02\x26\x12\x73\x61\x66\x65\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x2d\x74\x61\x67\x3a\x02\x92\x02\x06\x81"
  "\x83\x02\x91\x02\x04\x83\x04\x05\x0a\x23\x02\x27\x04\x63\x64\x72"
  "\x59\x93\x02\x04\x83\x04\x03\x5a\x02\x28\x09\x2a\x67\x6c\x6f\x62"
  "\x61\x6c\x2a\x10\x02\x10\x02\x03\x1e\x73\x63\x6f\x64\x65\x2f\x61"
  "\x62\x73\x6f\x6c\x75\x74\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x2d\x6e\x61\x6d\x65\x5b\x04\x05\x61\x73\x73\x71\x5c\x03\x99"
  "\x02\x0e\x81\x83\x02\x98\x02\x0c\x81\x83\x02\x97\x02\x0a\x81\x83"
  "\x02\x96\x02\x08\x81\x85\x02\x95\x02\x06\x81\x83\x02\x94\x02\x04"
  "\x83\x04\x0d\x1a\x5d\x02\x29\x20\x02\x04\x2a\x05\x17\x73\x63\x6f"
  "\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x61\x6c\x5e\x03\x17\x73\x63\x6f\x64\x65\x2f\x75\x6e\x61\x73"
  "\x73\x69\x67\x6e\x65\x64\x3f\x2d\x6e\x61\x6d\x65\x05\x10\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x65\x2f\x72\x76\x61\x6c\x75\x65\x5f\x04\x15"
  "\x6d\x61\x6b\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d"
  "\x74\x65\x73\x74\x04\x0a\x66\x69\x6e\x64\x2d\x6e\x61\x6d\x65\x60"
  "\x06\x15\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x61\x6c\x61\x08\xa0\x02\x10\x81\x89\x02\x9f\x02"
  "\x0e\x81\x8d\x02\x9e\x02\x0c\x81\x8b\x02\x9d\x02\x0a\x81\x89\x02"
  "\x9c\x02\x08\x81\x89\x02\x9b\x02\x06\x81\x8b\x02\x9a\x02\x04\x86"
  "\x0a\x0f\x24\x62\x02\x2a\x0a\x09\x0d\x0c\x0b\x04\x0f\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x2d\x61\x73\x73\x6f\x63\x63\x04\x13\x03\xaf"
  "\x02\x20\xfd\xff\x03\xae\x02\x1e\xfd\xff\x03\xad\x02\x1c\xfd\xff"
  "\x03\xac\x02\x1a\xfd\xff\x03\xab\x02\x18\xfd\xff\x03\xaa\x02\x16"
  "\xfd\xff\x03\xa9\x02\x14\xfd\xff\x03\xa8\x02\x12\xfd\xff\x03\xa7"
  "\x02\x10\xfd\xff\x03\xa6\x02\x0e\xff\xff\x03\xa5\x02\x0c\x81\x87"
  "\x02\xa4\x02\x0a\x84\x06\xa3\x02\x08\x84\x06\xa2\x02\x06\xfd\xff"
  "\x03\xa1\x02\x04\x84\x06\x1f\x2d\x64\x02\x2b\x05\x5f\x05\x2e\x04"
  "\x60\x04\xb4\x02\x0c\x81\x91\x02\xb3\x02\x0a\x81\x8f\x02\xb2\x02"
  "\x08\x81\x8b\x02\xb1\x02\x06\x81\x8b\x02\xb0\x02\x04\x84\x06\x0b"
  "\x15\x65\x02\x2c\x03\x14\x73\x63\x6f\x64\x65\x2f\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x2d\x6e\x61\x6d\x65\x66\x05\x5f\x05\x2e\x04\x60"
  "\x05\xb8\x02\x0a\x81\x8f\x02\xb7\x02\x08\x81\x8d\x02\xb6\x02\x06"
  "\x81\x89\x02\xb5\x02\x04\x86\x0a\x09\x15\x67\x02\x2d\x59\x04\x60"
  "\x05\x5f\x05\x2e\x04\xbc\x02\x0a\x81\x8d\x02\xbb\x02\x08\x81\x89"
  "\x02\xba\x02\x06\x81\x8f\x02\xb9\x02\x04\x86\x0a\x09\x15\x68\x02"
  "\x2e\x03\x1b\x73\x63\x6f\x64\x65\x2f\x67\x6c\x6f\x62\x61\x6c\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x6e\x61\x6d\x65\x69\x05\x5f"
  "\x05\x2e\x04\x60\x05\xc0\x02\x0a\x81\x8f\x02\xbf\x02\x08\x81\x8d"
  "\x02\xbe\x02\x06\x81\x89\x02\xbd\x02\x04\x86\x0a\x09\x15\x6a\x02"
  "\x2f\x04\x09\x11\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x6c\x61\x6d"
  "\x62\x64\x61\x2a\x6b\x03\xc2\x02\x06\x81\x8f\x02\xc1\x02\x04\x86"
  "\x0a\x05\x0e\x6c\x02\x30\x2d\x59\x07\x73\x74\x61\x74\x69\x63\x1f"
  "\x0e\x75\x6e\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x13\x0d"
  "\x09\x0e\x0a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x11\x02\x04\x18"
  "\x73\x63\x6f\x64\x65\x2f\x6c\x61\x6d\x62\x64\x61\x2d\x63\x6f\x6d"
  "\x70\x6f\x6e\x65\x6e\x74\x73\x05\x47\x04\x15\x70\x61\x72\x73\x65"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x62\x6f\x64\x79\x11"
  "\x04\x12\x04\x10\x74\x72\x61\x6e\x73\x6d\x69\x74\x2d\x76\x61\x6c"
  "\x75\x65\x73\x12\x04\x19\x04\x13\x04\x07\x61\x70\x70\x65\x6e\x64"
  "\x04\x15\x07\x18\x04\x20\x73\x65\x74\x2d\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2f"
  "\x74\x79\x70\x65\x21\x03\x0f\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6d"
  "\x6d\x65\x6e\x74\x3f\x05\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x70\x75\x74\x21\x04\x1b\x03\x13\x73\x63\x6f\x64\x65\x2f\x63"
  "\x6f\x6d\x6d\x65\x6e\x74\x2d\x74\x65\x78\x74\x0b\x0f\x6d\x61\x6b"
  "\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x07\x1a\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2f\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x2f\x76\x61\x6c\x75\x65\x15\x05\x0c\x6c\x76\x61\x6c\x75\x65\x2d"
  "\x70\x75\x74\x21\x03\x19\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x6d"
  "\x65\x6e\x74\x2d\x64\x69\x72\x65\x63\x74\x69\x76\x65\x3f\x0e\x09"
  "\x12\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x6c\x61\x6d\x62"
  "\x64\x61\x6d\x15\xe7\x02\x4c\x81\x8d\x02\xe6\x02\x4a\x81\x8d\x02"
  "\xe5\x02\x48\x81\x8d\x02\xe4\x02\x46\x81\x8d\x02\xe3\x02\x44\x81"
  "\x85\x02\xe2\x02\x42\x81\x8f\x02\xe1\x02\x40\x83\x04\xe0\x02\x3e"
  "\x81\x85\x02\xdf\x02\x3c\x81\xa7\x02\xde\x02\x3a\x81\x99\x02\xdd"
  "\x02\x38\x81\x8b\x02\xdc\x02\x36\x81\x8b\x02\xdb\x02\x34\x81\x8d"
  "\x02\xda\x02\x32\x81\x8d\x02\xd9\x02\x30\x81\x97\x02\xd8\x02\x2e"
  "\x81\x8b\x02\xd7\x02\x2c\x81\x8b\x02\xd6\x02\x2a\x81\x95\x02\xd5"
  "\x02\x28\x81\x8b\x02\xd4\x02\x26\x81\x9b\x02\xd3\x02\x24\x81\x99"
  "\x02\xd2\x02\x22\x81\x97\x02\xd1\x02\x20\x81\x95\x02\xd0\x02\x1e"
  "\x81\x83\x02\xcf\x02\x1c\x81\x83\x02\xce\x02\x1a\x81\x83\x02\xcd"
  "\x02\x18\x81\x93\x02\xcc\x02\x16\x81\x91\x02\xcb\x02\x14\x81\x8f"
  "\x02\xca\x02\x12\x81\x8b\x02\xc9\x02\x10\x81\x8d\x02\xc8\x02\x0e"
  "\x81\x89\x02\xc7\x02\x0c\x81\x93\x02\xc6\x02\x0a\x81\x89\x02\xc5"
  "\x02\x08\x81\x91\x02\xc4\x02\x06\x81\x8f\x02\xc3\x02\x04\x89\x10"
  "\x4b\x89\x01\x6e\x02\x31\x16\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b"
  "\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x6f\x0f\x6c\x61"
  "\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x6c\x65\x74\x03\x03\x17\x73"
  "\x63\x6f\x64\x65\x2f\x73\x65\x71\x75\x65\x6e\x63\x65\x2d\x61\x63"
  "\x74\x69\x6f\x6e\x73\x70\x04\x12\x04\x16\x70\x61\x72\x73\x65\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x62\x6f\x64\x79\x2a\x71"
  "\x03\x14\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x73\x65\x71"
  "\x75\x65\x6e\x63\x65\x72\x04\x1b\x05\x09\x72\x65\x74\x75\x72\x6e"
  "\x2d\x33\x06\x05\x6d\x61\x70\x2a\x02\x1f\x6d\x61\x6b\x65\x2d\x75"
  "\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x2d\x74\x72\x61\x70\x04\x17\x73\x63\x6f\x64\x65\x2f"
  "\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x73\x09\x6d\x0b\xf4\x02\x1c\x81\x91\x02\xf3\x02\x1a\x81\x9b\x02"
  "\xf2\x02\x18\x81\x8f\x02\xf1\x02\x16\x81\x8d\x02\xf0\x02\x14\x81"
  "\x89\x02\xef\x02\x12\x83\x04\xee\x02\x10\x81\x97\x02\xed\x02\x0e"
  "\x81\x8b\x02\xec\x02\x0c\x81\x89\x02\xeb\x02\x0a\x86\x0a\xea\x02"
  "\x08\x81\x87\x02\xe9\x02\x06\x81\x85\x02\xe8\x02\x04\x84\x06\x1b"
  "\x37\x74\x02\x32\x02\x59\x2d\x17\x45\x78\x74\x72\x61\x6e\x65\x6f"
  "\x75\x73\x20\x61\x75\x78\x69\x6c\x69\x61\x72\x69\x65\x73\x06\x09"
  "\x72\x65\x74\x75\x72\x6e\x2d\x34\x04\x25\x03\x12\x73\x63\x6f\x64"
  "\x65\x2f\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x3f\x03\x17\x73"
  "\x63\x6f\x64\x65\x2f\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d"
  "\x76\x61\x6c\x75\x65\x04\x71\x03\x16\x73\x63\x6f\x64\x65\x2f\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x6e\x61\x6d\x65\x04\x12"
  "\x03\x0e\x73\x63\x6f\x64\x65\x2f\x6c\x61\x6d\x62\x64\x61\x3f\x12"
  "\x03\x10\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x3f\x03\x0d\x73\x63\x6f\x64\x65\x2f\x64\x65\x6c\x61\x79\x3f\x0b"
  "\x8b\x03\x30\x81\x8b\x02\x8a\x03\x2e\x81\x8b\x02\x89\x03\x2c\x81"
  "\x8b\x02\x88\x03\x2a\x81\x87\x02\x87\x03\x28\x81\x8b\x02\x86\x03"
  "\x26\x81\x8b\x02\x85\x03\x24\x81\x8b\x02\x84\x03\x22\x81\x89\x02"
  "\x83\x03\x20\x81\x87\x02\x82\x03\x1e\x81\x87\x02\x81\x03\x1c\x81"
  "\x87\x02\x80\x03\x1a\x81\x8b\x02\xff\x02\x18\x81\x8b\x02\xfe\x02"
  "\x16\x81\x85\x02\xfd\x02\x14\x81\x85\x02\xfc\x02\x12\x81\x89\x02"
  "\xfb\x02\x10\x81\x85\x02\xfa\x02\x0e\x81\x87\x02\xf9\x02\x0c\x81"
  "\x85\x02\xf8\x02\x0a\x81\x87\x02\xf7\x02\x08\x81\x87\x02\xf6\x02"
  "\x06\x81\x87\x02\xf5\x02\x04\x84\x06\x2f\x4c\x75\x02\x33\x59\x2d"
  "\x12\x73\x65\x71\x75\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x65\x0f\x4e\x6f\x74\x20\x61\x20\x73\x65\x71\x75\x65\x6e\x63"
  "\x65\x03\x10\x73\x63\x6f\x64\x65\x2f\x73\x65\x71\x75\x65\x6e\x63"
  "\x65\x3f\x04\x25\x03\x70\x08\x1b\x67\x65\x6e\x65\x72\x61\x74\x65"
  "\x2f\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2f\x65\x66\x66\x65"
  "\x63\x74\x70\x03\x13\x73\x63\x66\x67\x2a\x63\x74\x79\x70\x65\x2d"
  "\x3e\x63\x74\x79\x70\x65\x21\x76\x06\x1d\x03\x0e\x6d\x61\x6b\x65"
  "\x2d\x73\x65\x71\x75\x65\x6e\x63\x65\x08\x95\x03\x16\x81\x8b\x02"
  "\x94\x03\x14\x81\x8f\x02\x93\x03\x12\x81\x8f\x02\x92\x03\x10\x81"
  "\x8d\x02\x91\x03\x0e\x81\x8b\x02\x90\x03\x0c\x81\x8f\x02\x8f\x03"
  "\x0a\x81\x8f\x02\x8e\x03\x08\x81\x89\x02\x8d\x03\x06\x81\x89\x02"
  "\x8c\x03\x04\x86\x0a\x15\x2b\x77\x02\x34\x0a\x73\x6e\x6f\x64\x65"
  "\x2d\x63\x66\x67\x78\x0c\x13\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x61\x6c\x2d\x64\x65\x63\x69\x64\x65\x36\x11\x70\x63\x66\x67\x2a"
  "\x70\x63\x66\x67\x2d\x3e\x70\x63\x66\x67\x21\x3d\x04\x04\x1d\x73"
  "\x63\x6f\x64\x65\x2f\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c"
  "\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x08\x1e\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2f\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x2f\x70\x72\x65\x64\x69\x63\x61\x74\x65\x79\x07\x27\x04\x06\x1a"
  "\x77\x69\x74\x68\x2d\x72\x65\x69\x66\x69\x65\x64\x2d\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x7a\x03\x76\x06\x1d\x05\x3d"
  "\x04\x54\x0a\xb5\x03\x42\x81\x89\x02\xb4\x03\x40\x81\x8f\x02\xb3"
  "\x03\x3e\x81\x8d\x02\xb2\x03\x3c\x81\x8b\x02\xb1\x03\x3a\x81\x89"
  "\x02\xb0\x03\x38\x81\x8d\x02\xaf\x03\x36\x81\x89\x02\xae\x03\x34"
  "\x81\x8f\x02\xad\x03\x32\x81\x8f\x02\xac\x03\x30\x81\x87\x02\xab"
  "\x03\x2e\x81\x8d\x02\xaa\x03\x2c\x81\x8f\x02\xa9\x03\x2a\x81\x89"
  "\x02\xa8\x03\x28\x81\x8f\x02\xa7\x03\x26\x81\x87\x02\xa6\x03\x24"
  "\x81\x83\x02\xa5\x03\x22\x81\x87\x02\xa4\x03\x20\x81\x83\x02\xa3"
  "\x03\x1e\x81\x87\x02\xa2\x03\x1c\x81\x83\x02\xa1\x03\x1a\x81\x83"
  "\x02\xa0\x03\x18\x81\x83\x02\x9f\x03\x16\x81\x8b\x02\x9e\x03\x14"
  "\x81\x8f\x02\x9d\x03\x12\x81\x87\x02\x9c\x03\x10\x81\x8d\x02\x9b"
  "\x03\x0e\x81\x8b\x02\x9a\x03\x0c\x81\x8d\x02\x99\x03\x0a\x81\x8b"
  "\x02\x98\x03\x08\x81\x89\x02\x97\x03\x06\x81\x89\x02\x96\x03\x04"
  "\x86\x0a\x41\x63\x3d\x02\x35\x0f\x0d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x74\x79\x70\x65\x3f\x1b\x59\x10\x67\x65\x6e\x65\x72\x61\x6c\x2d"
  "\x63\x61\x72\x2d\x63\x64\x72\x2d\x04\x6e\x6f\x74\x04\x1d\x73\x63"
  "\x6f\x64\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d"
  "\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x7b\x05\x5e\x08\x12\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2f\x6f\x70\x65\x72\x61\x6e\x64\x73"
  "\x7c\x08\x12\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x6f\x70\x65\x72"
  "\x61\x74\x6f\x72\x7d\x06\x1d\x06\x61\x04\x73\x08\xc8\x03\x28\x81"
  "\x8d\x02\xc7\x03\x26\x81\x91\x02\xc6\x03\x24\x81\x91\x02\xc5\x03"
  "\x22\x81\x8d\x02\xc4\x03\x20\x81\x89\x02\xc3\x03\x1e\x81\x8d\x02"
  "\xc2\x03\x1c\x81\x8d\x02\xc1\x03\x1a\x81\x8d\x02\xc0\x03\x18\x81"
  "\x8b\x02\xbf\x03\x16\x81\x89\x02\xbe\x03\x14\x81\x89\x02\xbd\x03"
  "\x12\x81\x83\x02\xbc\x03\x10\x81\x89\x02\xbb\x03\x0e\x81\x89\x02"
  "\xba\x03\x0c\x81\x8f\x02\xb9\x03\x0a\x81\x87\x02\xb8\x03\x08\x81"
  "\x87\x02\xb7\x03\x06\x81\x83\x02\xb6\x03\x04\x86\x0a\x27\x45\x7e"
  "\x02\x36\x59\x2d\x14\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x2d\x6f\x70\x65\x72\x61\x6e\x64\x7f\x09\x15\x02\xcf\x03\x10\xfd"
  "\xff\x03\xce\x03\x0e\xfd\xff\x03\xcd\x03\x0c\xfd\xff\x03\xcc\x03"
  "\x0a\xfd\xff\x03\xcb\x03\x08\xfd\xff\x03\xca\x03\x06\xff\xff\x03"
  "\xc9\x03\x04\x88\x0e\x0f\x19\x80\x01\x02\x37\x78\x0c\x0b\x7f\x32"
  "\x36\x34\x30\x35\x05\x07\x27\x03\x22\x06\x7a\x04\x25\x05\x44\x03"
  "\x26\x05\x2e\x03\x17\x07\x11\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x62"
  "\x69\x6e\x61\x74\x69\x6f\x6e\x03\x12\x06\x19\x77\x72\x61\x70\x70"
  "\x65\x72\x2f\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2f\x76\x61"
  "\x6c\x75\x65\x7f\x04\x54\x03\x1a\x73\x63\x6f\x64\x65\x2f\x61\x62"
  "\x73\x6f\x6c\x75\x74\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x3f\x35\x04\x03\x39\x03\x18\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2f\x6b\x6e\x6f\x77\x6e\x2d\x74\x79\x70\x65\x32\x06"
  "\x1d\x06\x19\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x67\x6c\x6f\x62"
  "\x61\x6c\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x22\x04\x34\x04\x57"
  "\x09\x6b\x16\xf5\x03\x4e\x81\x8f\x02\xf4\x03\x4c\x81\x89\x02\xf3"
  "\x03\x4a\x81\x89\x02\xf2\x03\x48\x81\x89\x02\xf1\x03\x46\x81\x87"
  "\x02\xf0\x03\x44\x81\x85\x02\xef\x03\x42\x81\x87\x02\xee\x03\x40"
  "\x81\x89\x02\xed\x03\x3e\x81\x89\x02\xec\x03\x3c\x81\x89\x02\xeb"
  "\x03\x3a\x81\x89\x02\xea\x03\x38\x81\x85\x02\xe9\x03\x36\x81\x8b"
  "\x02\xe8\x03\x34\x81\x87\x02\xe7\x03\x32\x81\x87\x02\xe6\x03\x30"
  "\x81\x89\x02\xe5\x03\x2e\x81\x87\x02\xe4\x03\x2c\x81\x8f\x02\xe3"
  "\x03\x2a\x81\x85\x02\xe2\x03\x28\x81\x8b\x02\xe1\x03\x26\x81\x83"
  "\x02\xe0\x03\x24\x81\x83\x02\xdf\x03\x22\x81\x8b\x02\xde\x03\x20"
  "\x81\x87\x02\xdd\x03\x1e\x81\x87\x02\xdc\x03\x1c\x81\x87\x02\xdb"
  "\x03\x1a\x81\x89\x02\xda\x03\x18\x81\x87\x02\xd9\x03\x16\x81\x89"
  "\x02\xd8\x03\x14\x81\x83\x02\xd7\x03\x12\x81\x83\x02\xd6\x03\x10"
  "\x81\x83\x02\xd5\x03\x0e\x81\x83\x02\xd4\x03\x0c\x81\x83\x02\xd3"
  "\x03\x0a\x81\x83\x02\xd2\x03\x08\x81\x8f\x02\xd1\x03\x06\x81\x87"
  "\x02\xd0\x03\x04\x88\x0e\x4d\x8b\x01\x57\x02\x38\x0b\x78\x0c\x30"
  "\x02\x08\x15\x03\x26\x03\x17\x05\x4c\x05\x0d\x73\x63\x66\x67\x2d"
  "\x61\x70\x70\x65\x6e\x64\x21\x06\x85\x04\x22\x81\x95\x02\x84\x04"
  "\x20\x81\x99\x02\x83\x04\x1e\x81\x95\x02\x82\x04\x1c\x81\x97\x02"
  "\x81\x04\x1a\x81\x95\x02\x80\x04\x18\x81\x9b\x02\xff\x03\x16\x81"
  "\x9b\x02\xfe\x03\x14\x81\x97\x02\xfd\x03\x12\x81\x97\x02\xfc\x03"
  "\x10\x81\x97\x02\xfb\x03\x0e\x81\x99\x02\xfa\x03\x0c\x81\x99\x02"
  "\xf9\x03\x0a\x81\x99\x02\xf8\x03\x08\x81\x99\x02\xf7\x03\x06\x81"
  "\x93\x02\xf6\x03\x04\x8b\x14\x21\x39\x78\x02\x39\x09\x73\x65\x74"
  "\x2d\x6f\x6c\x64\x2d\x14\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65\x09\x73\x65\x74\x2d\x6e\x65"
  "\x77\x2d\x1f\x60\x10\x6d\x61\x6b\x65\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x3a\x05\x04\x1c\x73\x63\x6f\x64\x65\x2f\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x63\x6f\x6d\x70\x6f\x6e\x65"
  "\x6e\x74\x73\x04\x2a\x03\x1b\x67\x65\x6e\x65\x72\x61\x74\x65\x2d"
  "\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f"
  "\x6c\x34\x0b\x15\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x2a\x30\x06\x15\x67\x65\x6e\x65\x72"
  "\x61\x74\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x26"
  "\x03\x14\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x17\x05\x0f\x73\x63\x6f\x64\x65\x2f\x6d\x61"
  "\x6b\x65\x2d\x6c\x65\x74\x81\x01\x06\x81\x01\x04\x6f\x0a\x93\x04"
  "\x1e\x81\x8d\x02\x92\x04\x1c\x81\x8d\x02\x91\x04\x1a\x81\x8b\x02"
  "\x90\x04\x18\x81\x89\x02\x8f\x04\x16\x81\x87\x02\x8e\x04\x14\x81"
  "\x8d\x02\x8d\x04\x12\x81\x8b\x02\x8c\x04\x10\x81\x89\x02\x8b\x04"
  "\x0e\x81\x91\x02\x8a\x04\x0c\x81\x8f\x02\x89\x04\x0a\x81\x87\x02"
  "\x88\x04\x08\x81\x89\x02\x87\x04\x06\x81\x87\x02\x86\x04\x04\x86"
  "\x0a\x1d\x3c\x6f\x02\x3a\x14\x64\x65\x66\x69\x6e\x69\x74\x69\x6f"
  "\x6e\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65\x1f\x19\x6d\x61\x6b\x65"
  "\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x82\x01\x10\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69"
  "\x6e\x69\x74\x69\x6f\x6e\x04\x04\x1c\x73\x63\x6f\x64\x65\x2f\x64"
  "\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e"
  "\x65\x6e\x74\x73\x04\x2a\x03\x72\x04\x0e\x69\x6e\x73\x65\x72\x74"
  "\x2d\x6c\x65\x74\x72\x65\x63\x72\x0b\x30\x06\x1d\x07\x9b\x04\x12"
  "\x81\x89\x02\x9a\x04\x10\x81\x93\x02\x99\x04\x0e\x81\x91\x02\x98"
  "\x04\x0c\x81\x8f\x02\x97\x04\x0a\x81\x87\x02\x96\x04\x08\x81\x89"
  "\x02\x95\x04\x06\x81\x87\x02\x94\x04\x04\x86\x0a\x11\x27\x83\x01"
  "\x02\x3b\x0d\x0c\x09\x04\x63\x04\x13\x03\xa0\x04\x0c\x81\x89\x02"
  "\x9f\x04\x0a\x81\x89\x02\x9e\x04\x08\x81\x87\x02\x9d\x04\x06\x81"
  "\x85\x02\x9c\x04\x04\x84\x06\x0b\x16\x63\x02\x3c\x1f\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x3a\x69\x6d\x70\x6c\x69\x63\x69\x74\x2d\x73"
  "\x65\x6c\x66\x2d\x73\x74\x61\x74\x69\x63\x3f\x02\x03\x17\x03\x12"
  "\x04\x16\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x64\x65\x66"
  "\x69\x6e\x69\x74\x69\x6f\x6e\x06\x81\x01\x05\xa5\x04\x0c\x81\x8b"
  "\x02\xa4\x04\x0a\x81\x89\x02\xa3\x04\x08\x81\x85\x02\xa2\x04\x06"
  "\x84\x06\xa1\x04\x04\x81\x85\x02\x0b\x1a\x13\x02\x3d\x1b\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2f\x64\x69\x73\x6a\x75\x6e\x63\x74\x69"
  "\x6f\x6e\x2f\x76\x61\x6c\x75\x65\x84\x01\x1d\x67\x65\x6e\x65\x72"
  "\x61\x74\x65\x2f\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x2f"
  "\x63\x6f\x6e\x74\x72\x6f\x6c\x85\x01\x03\x07\x27\x02\xab\x04\x0e"
  "\x81\x89\x02\xaa\x04\x0c\x81\x91\x02\xa9\x04\x0a\x81\x8f\x02\xa8"
  "\x04\x08\x81\x8d\x02\xa7\x04\x06\x81\x8b\x02\xa6\x04\x04\x86\x0a"
  "\x0d\x16\x86\x01\x02\x3e\x04\x1d\x73\x63\x6f\x64\x65\x2f\x64\x69"
  "\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e"
  "\x65\x6e\x74\x73\x87\x01\x05\x5e\x06\x61\x04\xae\x04\x08\x81\x89"
  "\x02\xad\x04\x06\x81\x87\x02\xac\x04\x04\x86\x0a\x07\x12\x88\x01"
  "\x02\x3f\x0e\x6f\x72\x2d\x70\x72\x65\x64\x69\x63\x61\x74\x65\x2d"
  "\x04\x87\x01\x03\x13\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x62\x69"
  "\x6e\x61\x74\x69\x6f\x6e\x3f\x87\x01\x05\x5e\x03\x34\x03\x1b\x73"
  "\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x5e\x03\x19\x62\x6f\x6f\x6c"
  "\x65\x61\x6e\x2d\x76\x61\x6c\x75\x65\x64\x2d\x6f\x70\x65\x72\x61"
  "\x74\x6f\x72\x3f\x34\x06\x26\x03\x17\x06\x61\x05\x81\x01\x0b\xb8"
  "\x04\x16\x81\x89\x02\xb7\x04\x14\x81\x87\x02\xb6\x04\x12\x81\x89"
  "\x02\xb5\x04\x10\x81\x8b\x02\xb4\x04\x0e\x81\x89\x02\xb3\x04\x0c"
  "\x81\x89\x02\xb2\x04\x0a\x81\x87\x02\xb1\x04\x08\x81\x87\x02\xb0"
  "\x04\x06\x81\x87\x02\xaf\x04\x04\x86\x0a\x15\x30\x81\x01\x02\x40"
  "\x23\x62\x6f\x6f\x6c\x65\x61\x6e\x2d\x76\x61\x6c\x75\x65\x64\x2d"
  "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x73\x22\x62\x6f\x6f\x6c\x65\x61\x6e\x2d\x76\x61\x6c\x75"
  "\x65\x64\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x73\x03\x03\x1b\x73\x63\x6f\x64\x65\x2f\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x3f\x03\x35\x04\x05\x6d\x65\x6d\x71\x03\x5b\x04\x5c\x06\xbe"
  "\x04\x0e\x81\x85\x02\xbd\x04\x0c\x81\x83\x02\xbc\x04\x0a\x81\x83"
  "\x02\xbb\x04\x08\x81\x85\x02\xba\x04\x06\x81\x83\x02\xb9\x04\x04"
  "\x83\x04\x0d\x1e\x5c\x02\x41\x12\x6c\x65\x78\x69\x63\x61\x6c\x2d"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x04\x18\x73\x63\x6f\x64\x65"
  "\x2f\x61\x63\x63\x65\x73\x73\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e"
  "\x74\x73\x04\x73\x06\x26\x04\xc1\x04\x08\x81\x89\x02\xc0\x04\x06"
  "\x81\x87\x02\xbf\x04\x04\x86\x0a\x07\x13\x17\x02\x42\x16\x42\x61"
  "\x64\x20\x43\x4f\x4d\x50\x49\x4c\x45\x20\x64\x69\x72\x65\x63\x74"
  "\x69\x76\x65\x20\x42\x61\x64\x20\x43\x4f\x4d\x50\x49\x4c\x45\x2d"
  "\x50\x52\x4f\x43\x45\x44\x55\x52\x45\x20\x64\x69\x72\x65\x63\x74"
  "\x69\x76\x65\x24\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x63\x6f\x6d"
  "\x6d\x65\x6e\x74\x3a\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x64\x69"
  "\x72\x65\x63\x74\x69\x76\x65\x0c\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x69\x66\x79\x08\x65\x6e\x63\x6c\x6f\x73\x65\x12\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x08\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x0a\x70\x72\x6f\x63\x65\x73\x73\x65\x64\x2d"
  "\x59\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x2d\x62\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73"
  "\x3f\x02\x04\x19\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x6d\x65\x6e"
  "\x74\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x03\x0e\x06\x1d"
  "\x03\x11\x73\x63\x6f\x64\x65\x2f\x71\x75\x6f\x74\x61\x74\x69\x6f"
  "\x6e\x3f\x03\x12\x06\x11\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x65"
  "\x6e\x63\x6c\x6f\x73\x65\x12\x07\x15\x67\x65\x6e\x65\x72\x61\x74"
  "\x65\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x69\x66\x79\x0e\x05\x05"
  "\x77\x61\x72\x6e\x05\x14\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x72\x65"
  "\x63\x75\x72\x73\x69\x76\x65\x6c\x79\x04\x25\x03\x14\x03\x0c\x6c"
  "\x61\x6d\x62\x64\x61\x2d\x6e\x61\x6d\x65\x03\x1b\x73\x63\x6f\x64"
  "\x65\x2f\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x14\x05\x47\x03\x46\x04\x16\x11\xda\x04"
  "\x34\x81\x89\x02\xd9\x04\x32\x81\x89\x02\xd8\x04\x30\x81\x89\x02"
  "\xd7\x04\x2e\x81\x91\x02\xd6\x04\x2c\x81\x8b\x02\xd5\x04\x2a\x81"
  "\x89\x02\xd4\x04\x28\x81\x8b\x02\xd3\x04\x26\x81\x8b\x02\xd2\x04"
  "\x24\x81\x89\x02\xd1\x04\x22\x81\x87\x02\xd0\x04\x20\x81\x89\x02"
  "\xcf\x04\x1e\x81\x89\x02\xce\x04\x1c\x81\x8b\x02\xcd\x04\x1a\x81"
  "\x83\x02\xcc\x04\x18\x81\x85\x02\xcb\x04\x16\x81\x85\x02\xca\x04"
  "\x14\x81\x89\x02\xc9\x04\x12\x81\x8d\x02\xc8\x04\x10\x81\x8d\x02"
  "\xc7\x04\x0e\x81\x87\x02\xc6\x04\x0c\x81\x87\x02\xc5\x04\x0a\x81"
  "\x87\x02\xc4\x04\x08\x81\x87\x02\xc3\x04\x06\x81\x87\x02\xc2\x04"
  "\x04\x86\x0a\x33\x65\x16\x02\x43\x0c\x1a\x42\x61\x64\x20\x43\x4f"
  "\x4e\x53\x54\x41\x4e\x54\x49\x46\x59\x20\x64\x69\x72\x65\x63\x74"
  "\x69\x76\x65\x07\x76\x65\x63\x74\x6f\x72\x4f\x2c\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x3a\x66\x67\x67\x65\x6e\x2d\x75\x6e\x6d\x61\x70"
  "\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x73"
  "\x2d\x65\x61\x72\x6c\x79\x3f\x4f\x03\x03\x87\x01\x03\x1b\x73\x63"
  "\x6f\x64\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d"
  "\x6f\x70\x65\x72\x61\x6e\x64\x73\x04\x25\x03\x5e\x04\x09\x66\x6f"
  "\x72\x2d\x61\x6c\x6c\x3f\x08\x7c\x08\x7d\x04\x1b\x06\x12\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x25"
  "\x03\x42\x03\x15\x75\x6e\x6d\x61\x70\x2d\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x2d\x74\x72\x61\x70\x0c\xeb\x04\x24\x81\x83\x02\xea"
  "\x04\x22\x81\x83\x02\xe9\x04\x20\x81\x83\x02\xe8\x04\x1e\x83\x04"
  "\xe7\x04\x1c\x81\x8f\x02\xe6\x04\x1a\x81\x8d\x02\xe5\x04\x18\x81"
  "\x85\x02\xe4\x04\x16\x81\x85\x02\xe3\x04\x14\x81\x83\x02\xe2\x04"
  "\x12\x83\x04\xe1\x04\x10\x81\x8d\x02\xe0\x04\x0e\x81\x95\x02\xdf"
  "\x04\x0c\x81\x8b\x02\xde\x04\x0a\x81\x8b\x02\xdd\x04\x08\x81\x8b"
  "\x02\xdc\x04\x06\x81\x8b\x02\xdb\x04\x04\x87\x0c\x23\x49\x42\x02"
  "\x44\x2d\x59\x0c\x04\x7b\x04\x03\x66\x03\x14\x05\x2e\x04\x60\x09"
  "\x6b\x08\xf6\x04\x18\x81\x91\x02\xf5\x04\x16\x81\x95\x02\xf4\x04"
  "\x14\x81\x93\x02\xf3\x04\x12\x81\x93\x02\xf2\x04\x10\x81\x8f\x02"
  "\xf1\x04\x0e\x81\x97\x02\xf0\x04\x0c\x81\x97\x02\xef\x04\x0a\x81"
  "\x8d\x02\xee\x04\x08\x81\x87\x02\xed\x04\x06\x81\x87\x02\xec\x04"
  "\x04\x86\x0a\x17\x2e\x7b\x02\x45\x15\x23\x5b\x75\x6e\x6e\x61\x6d"
  "\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x5d\x11\x73\x79"
  "\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x14\x03"
  "\x17\x73\x63\x6f\x64\x65\x2f\x64\x65\x6c\x61\x79\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x06\x26\x04\x73\x09\x6d\x05\xfa\x04"
  "\x0a\x81\x8d\x02\xf9\x04\x08\x81\x8b\x02\xf8\x04\x06\x81\x89\x02"
  "\xf7\x04\x04\x86\x0a\x09\x1a\x6d\x02\x46\x19\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x65\x72\x72\x6f\x72\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x02\x04\x23\x73\x63\x6f\x64\x65\x2f\x65\x72\x72\x6f"
  "\x72\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x63\x6f"
  "\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x04\x73\x06\x26\x04\xfe\x04\x0a"
  "\x81\x89\x02\xfd\x04\x08\x81\x8d\x02\xfc\x04\x06\x81\x87\x02\xfb"
  "\x04\x04\x86\x0a\x09\x15\x66\x02\x47\x10\x73\x79\x73\x74\x65\x6d"
  "\x2d\x70\x61\x69\x72\x2d\x63\x61\x72\x17\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x2d\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x2d\x74\x61\x67"
  "\x2e\x02\x04\x73\x06\x26\x03\x81\x05\x08\x81\x89\x02\x80\x05\x06"
  "\x81\x8b\x02\xff\x04\x04\x86\x0a\x07\x13\x73\x02\x48\x59\x03\x46"
  "\x05\x47\x03\x84\x05\x08\x81\x89\x02\x83\x05\x06\x81\x8b\x02\x82"
  "\x05\x04\x86\x0a\x07\x10\x46\x48\x1b\x1b\x10\x65\x72\x72\x6f\x72"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x14\x6c\x65\x78\x69\x63"
  "\x61\x6c\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x59\x10"
  "\x65\x72\x72\x6f\x72\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x05"
  "\x6c\x69\x73\x74\x05\x63\x6f\x6e\x73\x0c\x08\x63\x6f\x6d\x6d\x65"
  "\x6e\x74\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x09\x73"
  "\x65\x71\x75\x65\x6e\x63\x65\x10\x65\x78\x74\x65\x6e\x64\x65\x64"
  "\x2d\x6c\x61\x6d\x62\x64\x61\x06\x6c\x65\x78\x70\x72\x07\x6c\x61"
  "\x6d\x62\x64\x61\x09\x76\x61\x72\x69\x61\x62\x6c\x65\x10\x74\x68"
  "\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x0a\x71"
  "\x75\x6f\x74\x61\x74\x69\x6f\x6e\x05\x70\x61\x69\x72\x0c\x64\x69"
  "\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x06\x64\x65\x6c\x61\x79\x0b"
  "\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x0c\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x61\x6c\x0b\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x0d\x07\x61\x63\x63\x65\x73\x73\x1d\x15\x2e\x1c\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x71"
  "\x75\x6f\x74\x61\x74\x69\x6f\x6e\x59\x13\x67\x65\x6e\x65\x72\x61"
  "\x74\x65\x2f\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x2d\x1b\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2f\x65\x72\x72\x6f\x72\x2d\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x1d\x0f\x67\x65\x6e\x65\x72\x61"
  "\x74\x65\x2f\x64\x65\x6c\x61\x79\x1b\x12\x0e\x11\x67\x65\x6e\x65"
  "\x72\x61\x74\x65\x2f\x63\x6f\x6d\x6d\x65\x6e\x74\x15\x10\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2f\x61\x63\x63\x65\x73\x73\x14\x34\x84"
  "\x01\x85\x01\x15\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x64\x69\x73"
  "\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x85\x01\x72\x82\x01\x14\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2f\x64\x65\x66\x69\x6e\x69\x74\x69\x6f"
  "\x6e\x84\x01\x14\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x82\x01\x30\x7d\x7c\x26\x61\x12\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2f\x73\x65\x71\x75\x65\x6e\x63\x65"
  "\x7d\x71\x11\x6b\x10\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x6c\x61"
  "\x6d\x62\x64\x61\x7c\x22\x17\x67\x65\x6e\x65\x72\x61\x74\x65\x2f"
  "\x73\x61\x66\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x72\x12\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2f\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x71\x18\x6d\x61\x6b\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2d"
  "\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x60\x15\x67\x65\x6e\x65\x72"
  "\x61\x74\x65\x2f\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x6b"
  "\x69\x10\x3a\x19\x73\x63\x6f\x64\x65\x2f\x73\x61\x66\x65\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x2d\x6e\x61\x6d\x65\x19\x73\x63\x6f"
  "\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x73\x61\x66\x65\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x4a\x51\x4c\x4d\x5f\x4b\x47\x19\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2f\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x69\x25\x30\x13\x63\x6f\x6e\x73\x74\x61\x6e"
  "\x74\x2d\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x46\x04\x73\x04\x66"
  "\x04\x6d\x04\x7b\x04\x42\x04\x16\x04\x17\x04\x5c\x04\x81\x01\x04"
  "\x88\x01\x04\x86\x01\x04\x13\x06\x63\x04\x83\x01\x04\x6f\x04\x78"
  "\x04\x57\x04\x80\x01\x04\x7e\x04\x3d\x04\x77\x04\x75\x04\x74\x04"
  "\x6e\x04\x6c\x04\x6a\x04\x68\x04\x67\x04\x65\x04\x64\x04\x62\x04"
  "\x5d\x04\x0e\x73\x61\x66\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x5a\x04\x23\x04\x53\x04\x58\x04\x56\x04\x55\x04\x52\x04\x50\x04"
  "\x4e\x04\x49\x04\x48\x04\x30\x79\x70\x7f\x15\x67\x65\x6e\x65\x72"
  "\x61\x74\x6f\x72\x2f\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x88"
  "\x01\x44\x45\x04\x43\x04\x1d\x77\x72\x61\x70\x70\x65\x72\x2f\x73"
  "\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2f\x70\x72\x65\x64\x69\x63"
  "\x61\x74\x65\x86\x01\x1a\x77\x72\x61\x70\x70\x65\x72\x2f\x73\x75"
  "\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2f\x65\x66\x66\x65\x63\x74\x83"
  "\x01\x13\x77\x72\x61\x70\x70\x65\x72\x2f\x73\x75\x62\x70\x72\x6f"
  "\x62\x6c\x65\x6d\x81\x01\x40\x0f\x1d\x70\x63\x66\x67\x2a\x73\x75"
  "\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x3e\x73\x75\x62\x70\x72\x6f"
  "\x62\x6c\x65\x6d\x21\x36\x54\x7a\x76\x17\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x18\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x6e\x65"
  "\x78\x74\x2d\x68\x6f\x6f\x6b\x73\x39\x18\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2f\x70\x72\x65\x64\x69\x63\x61\x74\x65"
  "\x3f\x15\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x65"
  "\x66\x66\x65\x63\x74\x3f\x2a\x32\x27\x18\x19\x10\x63\x6f\x6e\x73"
  "\x74\x72\x75\x63\x74\x2d\x67\x72\x61\x70\x68\x16\x63\x6f\x6e\x74"
  "\x65\x78\x74\x2f\x75\x6e\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61"
  "\x6c\x14\x63\x6f\x6e\x74\x65\x78\x74\x2f\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x61\x6c\x16\x63\x6f\x6e\x74\x65\x78\x74\x2f\x6d\x61"
  "\x6b\x65\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x15\x63\x6f\x6e\x74"
  "\x65\x78\x74\x2f\x6d\x61\x6b\x65\x2d\x69\x6e\x69\x74\x69\x61\x6c"
  "\x09\x63\x6f\x6e\x74\x65\x78\x74\x3f\x19\x41\x04\x3f\x04\x3e\x04"
  "\x3c\x04\x3b\x04\x38\x04\x37\x04\x33\x04\x31\x04\x2f\x04\x2c\x04"
  "\x2b\x04\x24\x04\x29\x04\x28\x04\x1e\x04\x1c\x04\x1a\x04\x0b\x04"
  "\x0a\x04\x09\x04\x04\x04\x19\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x10\x63\x6f\x6e\x74\x65\x78\x74"
  "\x2f\x73\x74\x61\x74\x69\x63\x3f\x17\x63\x6f\x6e\x74\x65\x78\x74"
  "\x2f\x75\x6e\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x3f\x04"
  "\x04\x0c\x72\x74\x64\x3a\x63\x6f\x6e\x74\x65\x78\x74\x80\x01\x4f"
  "\x08\x63\x6f\x6e\x74\x65\x78\x74\x0f\x75\x6e\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x61\x6c\x3f\x08\x73\x74\x61\x74\x69\x63\x3f\x06"
  "\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64"
  "\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x80\x01\x1f"
  "\x20\x21\x83\x01\x86\x01\x7f\x25\x14\x82\x01\x61\x84\x01\x1b\x85"
  "\x01\x2d\x3a\x2e\x69\x71\x7c\x7d\x15\x17\x03\x81\x01\x03\x88\x01"
  "\x02\x1a\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65"
  "\x2f\x63\x6f\x64\x65\x2d\x6c\x69\x6d\x69\x74\x03\x0f\x6d\x69\x63"
  "\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x04\x0c\x6d\x61\x6b"
  "\x65\x2d\x76\x65\x63\x74\x6f\x72\x06\x72\x06\x59\x06\x25\x03\x03"
  "\x5e\x06\x6b\x03\x0e\x73\x63\x6f\x64\x65\x2f\x73\x79\x6d\x62\x6f"
  "\x6c\x3f\x03\x87\x01\x03\x20\x73\x63\x6f\x64\x65\x2f\x61\x62\x73"
  "\x6f\x6c\x75\x74\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x2d\x6e\x61\x6d\x65\x06\x26\x03\x5b\x03\x17\x73\x63\x6f\x64"
  "\x65\x2f\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x3f\x06\x1d\x03\x1c\x73\x63\x6f\x64\x65\x2f\x61\x62\x73\x6f"
  "\x6c\x75\x74\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x3f\x03\x35\x15\x6a\xd6\x01\x80\x80\x04\x69\xd4\x01\x81\x81\x02"
  "\x68\xd2\x01\x81\x81\x02\x67\xd0\x01\x81\x8d\x02\x66\xce\x01\x81"
  "\x8d\x02\x65\xcc\x01\x81\x8f\x02\x64\xca\x01\x81\x8b\x02\x63\xc8"
  "\x01\x81\x8d\x02\x62\xc6\x01\x81\x8f\x02\x61\xc4\x01\x81\x8f\x02"
  "\x60\xc2\x01\x81\x8f\x02\x5f\xc0\x01\x81\x8d\x02\x5e\xbe\x01\x81"
  "\x8d\x02\x5d\xbc\x01\x81\x8f\x02\x5c\xba\x01\x81\x91\x02\x5b\xb8"
  "\x01\x81\x8d\x02\x5a\xb6\x01\x81\x91\x02\x59\xb4\x01\x81\x8b\x02"
  "\x58\xb2\x01\x81\x8b\x02\x57\xb0\x01\x81\x89\x02\x56\xae\x01\x81"
  "\x89\x02\x55\xac\x01\x81\x8b\x02\x54\xaa\x01\x86\x0a\x53\xa8\x01"
  "\x81\x89\x02\x52\xa6\x01\x81\x89\x02\x51\xa4\x01\x81\x89\x02\x50"
  "\xa2\x01\x81\x89\x02\x4f\xa0\x01\x81\x8b\x02\x4e\x9e\x01\x81\x89"
  "\x02\x4d\x9c\x01\x81\x89\x02\x4c\x9a\x01\x81\x8b\x02\x4b\x98\x01"
  "\x81\x89\x02\x4a\x96\x01\x81\x89\x02\x49\x94\x01\x81\x8b\x02\x48"
  "\x92\x01\x81\x89\x02\x47\x90\x01\x81\x89\x02\x46\x8e\x01\x81\x8b"
  "\x02\x45\x8c\x01\x81\x89\x02\x44\x8a\x01\x81\x89\x02\x43\x88\x01"
  "\x81\x8b\x02\x42\x86\x01\x81\x89\x02\x41\x84\x01\x81\x89\x02\x40"
  "\x82\x01\x81\x8b\x02\x3f\x80\x01\x81\x89\x02\x3e\x7e\x81\x89\x02"
  "\x3d\x7c\x81\x8b\x02\x3c\x7a\x81\x8b\x02\x3b\x78\x81\x89\x02\x3a"
  "\x76\x81\x8b\x02\x39\x74\x81\x89\x02\x38\x72\x86\x0a\x37\x70\x81"
  "\x89\x02\x36\x6e\x81\x89\x02\x35\x6c\x81\x89\x02\x34\x6a\x81\x89"
  "\x02\x33\x68\x81\x8b\x02\x32\x66\x81\x89\x02\x31\x64\x81\x89\x02"
  "\x30\x62\x81\x8b\x02\x2f\x60\x81\x89\x02\x2e\x5e\x81\x89\x02\x2d"
  "\x5c\x81\x8b\x02\x2c\x5a\x81\x89\x02\x2b\x58\x81\x89\x02\x2a\x56"
  "\x81\x8b\x02\x29\x54\x81\x89\x02\x28\x52\x81\x89\x02\x27\x50\x81"
  "\x8b\x02\x26\x4e\x81\x89\x02\x25\x4c\x81\x89\x02\x24\x4a\x81\x8b"
  "\x02\x23\x48\x81\x8b\x02\x22\x46\x81\x89\x02\x21\x44\x81\x87\x02"
  "\x20\x42\x81\x89\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x85\x02\x1d"
  "\x3c\x81\x83\x02\x1c\x3a\x81\x85\x02\x1b\x38\x81\x87\x02\x1a\x36"
  "\x81\x83\x02\x19\x34\x81\x85\x02\x18\x32\x81\x87\x02\x17\x30\x81"
  "\x83\x02\x16\x2e\x81\x87\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x85"
  "\x02\x13\x28\x81\x83\x02\x12\x26\x81\x85\x02\x11\x24\x81\x87\x02"
  "\x10\x22\x81\x83\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x87\x02\x0d"
  "\x1c\x81\x83\x02\x0c\x1a\x81\x87\x02\x0b\x18\x81\x83\x02\x0a\x16"
  "\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12\x81\x87\x02\x07\x10\x81"
  "\x87\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83"
  "\x02\x03\x08\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02"
  "\xd5\x01\xd2\x02";

SCHEME_OBJECT *
fggen_so_data_43b03a7fd6a781cd (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_fggen_so_data_43b03a7fd6a781cd [0]))), (sizeof (prog_fggen_so_data_43b03a7fd6a781cd)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_134]));
}

DECLARE_COMPILED_DATA_NS ("fggen.so", fggen_so_data_43b03a7fd6a781cd)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("fggen.so", "3fc412b5317f7682")
