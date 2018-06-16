/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:20-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regset_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto make_regset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_regset_3)
DEFLABEL (make_regset_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_8 11
#define LABEL_2_9 13
#define ENVIRONMENT_LABEL_2_3 19
#define DEBUGGING_LABEL_2_2 18
#define OBJECT_2_3 17
#define OBJECT_2_2 16
#define OBJECT_2_1 15
#define OBJECT_2_0 14
#define FREE_REFERENCES_LABEL_2_0 14
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regset_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto for_each_regset_member_9;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_regset_member_14)
DEFLABEL (for_each_regset_member_9)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 47))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_16)
  (Wrd16.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_6;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (loop_15)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_2_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_20;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_20;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_6;

DEFLABEL (label_20)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define LABEL_3_9 11
#define LABEL_3_8 13
#define ENVIRONMENT_LABEL_3_3 19
#define DEBUGGING_LABEL_3_2 18
#define OBJECT_3_3 17
#define OBJECT_3_2 16
#define OBJECT_3_1 15
#define OBJECT_3_0 14
#define FREE_REFERENCES_LABEL_3_0 14
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regset_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_3_4);
      goto regset__list_9;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (regset__list_14)
DEFLABEL (regset__list_9)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 47))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_16)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_6;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (loop_15)
DEFLABEL (loop_6)
  DLINK_INTERRUPT_CHECK (25, LABEL_3_6);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  Rvl = (current_block [OBJECT_3_3]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_18)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd28.uLng) == 26))
    goto label_20;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd29.Lng) = ((Wrd31.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_20;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_19)
  Rdl = (& (Rsp [2]));
  goto loop_6;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_8);
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
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_12)
  (Wrd19.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd19.Obj));
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 6
#define DEBUGGING_LABEL_4_2 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regset_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto regset_clearB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (regset_clearB_3)
DEFLABEL (regset_clearB_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 11
#define DEBUGGING_LABEL_5_2 10
#define OBJECT_5_0 9
#define EXECUTE_CACHE_5_6 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regset_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto regset_disjointP_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (regset_disjointP_4)
DEFLABEL (regset_disjointP_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_9 9
#define LABEL_8 11
#define LABEL_11 13
#define LABEL_10 15
#define LABEL_13 17
#define LABEL_12 19
#define LABEL_15 21
#define LABEL_14 23
#define LABEL_17 25
#define LABEL_16 27
#define LABEL_19 29
#define LABEL_18 31
#define LABEL_21 33
#define LABEL_20 35
#define LABEL_23 37
#define LABEL_22 39
#define LABEL_25 41
#define LABEL_24 43
#define LABEL_27 45
#define LABEL_26 47
#define LABEL_29 49
#define LABEL_28 51
#define LABEL_31 53
#define LABEL_30 55
#define LABEL_32 57
#define LABEL_33 59
#define LABEL_34 61
#define LABEL_35 63
#define ENVIRONMENT_LABEL_3 102
#define DEBUGGING_LABEL_2 101
#define PURIFICATION_ROOT 100
#define OBJECT_17 99
#define OBJECT_16 98
#define OBJECT_15 97
#define OBJECT_14 96
#define OBJECT_13 95
#define OBJECT_12 94
#define OBJECT_11 93
#define OBJECT_10 92
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
#define FREE_REFERENCE_13 65
#define FREE_REFERENCE_12 66
#define FREE_REFERENCE_11 67
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
#define FREE_REFERENCES_LABEL_0 64
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
regset_so_7e6c64cc658dd2c9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto label_22;

    case 14:
      current_block = (Rpc - LABEL_18);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto label_23;

    case 16:
      current_block = (Rpc - LABEL_20);
      goto continuation_8;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto label_24;

    case 18:
      current_block = (Rpc - LABEL_22);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto label_25;

    case 20:
      current_block = (Rpc - LABEL_24);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto label_26;

    case 22:
      current_block = (Rpc - LABEL_26);
      goto continuation_11;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto label_27;

    case 24:
      current_block = (Rpc - LABEL_28);
      goto continuation_12;

    case 25:
      current_block = (Rpc - LABEL_31);
      goto label_28;

    case 26:
      current_block = (Rpc - LABEL_30);
      goto continuation_13;

    case 27:
      current_block = (Rpc - LABEL_32);
      goto label_29;

    case 28:
      current_block = (Rpc - LABEL_33);
      goto label_32;

    case 29:
      current_block = (Rpc - LABEL_34);
      goto label_33;

    case 30:
      current_block = (Rpc - LABEL_35);
      goto expression_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_15)
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
	0,
	0,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 5)
      goto label_31;
    blocks = (current_block [OBJECT_17]);
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_61;
  Wrd8 = Wrd12;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_59;
  Wrd8 = Wrd12;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_57;
  Wrd8 = Wrd12;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_55;
  Wrd8 = Wrd12;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_53;
  Wrd8 = Wrd12;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_51;
  Wrd8 = Wrd12;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_49;
  Wrd8 = Wrd12;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_47;
  Wrd8 = Wrd12;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_45;
  Wrd8 = Wrd12;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_43;
  Wrd8 = Wrd12;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_41;
  Wrd8 = Wrd12;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_39;
  Wrd8 = Wrd12;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_37;
  Wrd8 = Wrd12;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_35;
  Wrd8 = Wrd12;

DEFLABEL (label_34)
  (Rsp [2]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd9.pObj));

DEFLABEL (label_29)
  (Wrd8.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd9.pObj));

DEFLABEL (label_28)
  (Wrd8.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd9.pObj));

DEFLABEL (label_27)
  (Wrd8.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd9.pObj));

DEFLABEL (label_26)
  (Wrd8.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd9.pObj));

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd9.pObj));

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd9.pObj));

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd9.pObj));

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_60;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_regset_so_7e6c64cc658dd2c9 [5] =
  {
    { "regset_so_code_1", 1, regset_so_code_1 },
    { "regset_so_code_2", 6, regset_so_code_2 },
    { "regset_so_code_3", 6, regset_so_code_3 },
    { "regset_so_code_4", 1, regset_so_code_4 },
    { "regset_so_code_5", 2, regset_so_code_5 }
  };

int
decl_regset_so_7e6c64cc658dd2c9 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_regset_so_7e6c64cc658dd2c9);
  return (0);
}

DECLARE_COMPILED_CODE ("regset.so", 31, decl_regset_so_7e6c64cc658dd2c9, regset_so_7e6c64cc658dd2c9)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_regset_so_data_7e6c64cc658dd2c9 [1235] =
  "\x67\x08\xd4\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\x22\x29\x21"
  "\x9d\x2b\xb9\x1d\xb0\x82\x88\x1d\xc3\xba\x80\xc1\xbb\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83"
  "\x88\x08\xb2\x80\xb3\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbb\x1d\xb0\x84\x88\xc2\x22\x29\x21\x9d\x2b\xba"
  "\x1d\xb0\x85\x88\xc1\x28\x0d\xb8\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\xbd\x9c\xbe\x88\xb6\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\xc3\x0d\x0d\x0d\x0d\x0d\x0d\x9c\xb5\x2a\xb2\x2a\xb3\x2a"
  "\xb4\x2a\xb1\x2a\x9c\x28\x0d\x26\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\xb0\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x5c\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2f\x72\x74\x6c\x62\x61\x73\x65\x2f\x72\x65\x67\x73\x65\x74"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x10\x6d\x61\x6b\x65\x2d"
  "\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x20\x04\x83\x04\x03\x02"
  "\x02\x20\x62\x69\x74\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d"
  "\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x73\x65\x74\x2d\x62\x69"
  "\x74\x12\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x26\x0e\x81\x89\x02\x25\x0c\x81\x89\x02\x24\x0a\x81"
  "\x89\x02\x23\x08\x81\x89\x02\x22\x06\x81\x85\x02\x21\x04\x84\x06"
  "\x0d\x14\x02\x2c\x0e\xfd\xff\x03\x2b\x0c\xfd\xff\x03\x2a\x0a\xfd"
  "\xff\x03\x29\x08\xff\xff\x03\x28\x06\x81\x83\x02\x27\x04\x83\x04"
  "\x0d\x14\x02\x11\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x66"
  "\x69\x6c\x6c\x21\x2d\x04\x83\x04\x03\x02\x11\x62\x69\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x7a\x65\x72\x6f\x3f\x04\x0f\x62\x69\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x2d\x61\x6e\x64\x02\x2f\x06\x81\x85"
  "\x02\x2e\x04\x84\x06\x05\x0c\x14\x72\x65\x67\x73\x65\x74\x2d\x69"
  "\x6e\x74\x65\x72\x73\x65\x63\x74\x69\x6f\x6e\x12\x72\x65\x67\x73"
  "\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x0d\x72\x65"
  "\x67\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x0c\x72\x65\x67\x73\x65"
  "\x74\x2d\x63\x6f\x70\x79\x15\x72\x65\x67\x73\x65\x74\x2d\x69\x6e"
  "\x74\x65\x72\x73\x65\x63\x74\x69\x6f\x6e\x21\x13\x72\x65\x67\x73"
  "\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x21\x0e\x72"
  "\x65\x67\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x21\x0d\x72\x65\x67"
  "\x73\x65\x74\x2d\x63\x6f\x70\x79\x21\x0d\x72\x65\x67\x73\x65\x74"
  "\x2d\x6e\x75\x6c\x6c\x3f\x09\x72\x65\x67\x73\x65\x74\x3d\x3f\x0f"
  "\x72\x65\x67\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x3f\x0f\x72"
  "\x65\x67\x73\x65\x74\x2d\x64\x65\x6c\x65\x74\x65\x21\x0f\x72\x65"
  "\x67\x73\x65\x74\x2d\x61\x64\x6a\x6f\x69\x6e\x21\x11\x6c\x6f\x63"
  "\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x10\x72\x65"
  "\x67\x73\x65\x74\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x11\x72\x65"
  "\x67\x73\x65\x74\x2d\x64\x69\x73\x6a\x6f\x69\x6e\x74\x3f\x0e\x72"
  "\x65\x67\x73\x65\x74\x2d\x63\x6c\x65\x61\x72\x21\x0d\x72\x65\x67"
  "\x73\x65\x74\x2d\x3e\x6c\x69\x73\x74\x17\x66\x6f\x72\x2d\x65\x61"
  "\x63\x68\x2d\x72\x65\x67\x73\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72"
  "\x0c\x6d\x61\x6b\x65\x2d\x72\x65\x67\x73\x65\x74\x04\x04\x04\x04"
  "\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x02\x14\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x61"
  "\x6c\x6c\x6f\x63\x61\x74\x65\x10\x62\x69\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x73\x65\x74\x21\x12\x62\x69\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x63\x6c\x65\x61\x72\x21\x0f\x62\x69\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x72\x65\x66\x0d\x62\x69\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x3d\x3f\x11\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x7a\x65\x72\x6f\x3f\x11\x62\x69\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x6d\x6f\x76\x65\x21\x0f\x62\x69\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x6f\x72\x21\x11\x62\x69\x74\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x61\x6e\x64\x63\x21\x10\x62\x69\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x61\x6e\x64\x21\x10\x62\x69\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x63\x6f\x70\x79\x0e\x62\x69\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x6f\x72\x10\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x61\x6e\x64\x63\x0f\x1f\x40\x80\x80\x04\x1e\x3e\x81\x81\x02"
  "\x1d\x3c\x81\x81\x02\x1c\x3a\x81\x87\x02\x1b\x38\x81\x83\x02\x1a"
  "\x36\x81\x85\x02\x19\x34\x81\x83\x02\x18\x32\x81\x85\x02\x17\x30"
  "\x81\x83\x02\x16\x2e\x81\x85\x02\x15\x2c\x81\x83\x02\x14\x2a\x81"
  "\x85\x02\x13\x28\x81\x83\x02\x12\x26\x81\x85\x02\x11\x24\x81\x83"
  "\x02\x10\x22\x81\x85\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x85\x02"
  "\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x83\x02\x0a"
  "\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12\x81\x85\x02\x07\x10"
  "\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04\x0a\x81"
  "\x85\x02\x03\x08\x81\x83\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83"
  "\x02\x3f\x67";

SCHEME_OBJECT *
regset_so_data_7e6c64cc658dd2c9 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_regset_so_data_7e6c64cc658dd2c9 [0]))), (sizeof (prog_regset_so_data_7e6c64cc658dd2c9)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_35]));
}

DECLARE_COMPILED_DATA_NS ("regset.so", regset_so_data_7e6c64cc658dd2c9)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("regset.so", "0af4529fd18b4e00")
