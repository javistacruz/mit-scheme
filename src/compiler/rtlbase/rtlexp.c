/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:21-07 by Liar version 4.118. */

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
rtlexp_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto rtl_invocationP_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_invocationP_4)
DEFLABEL (rtl_invocationP_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

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
rtlexp_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto rtl_invocation_prefixP_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_invocation_prefixP_4)
DEFLABEL (rtl_invocation_prefixP_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_9 7
#define LABEL_3_12 9
#define LABEL_3_7 11
#define LABEL_3_11 13
#define LABEL_3_14 15
#define LABEL_3_15 17
#define LABEL_3_16 19
#define LABEL_3_18 21
#define LABEL_3_17 23
#define LABEL_3_19 25
#define LABEL_3_20 27
#define LABEL_3_22 29
#define ENVIRONMENT_LABEL_3_3 66
#define DEBUGGING_LABEL_3_2 65
#define OBJECT_3_14 64
#define OBJECT_3_13 63
#define OBJECT_3_12 62
#define OBJECT_3_11 61
#define OBJECT_3_10 60
#define OBJECT_3_9 59
#define OBJECT_3_8 58
#define OBJECT_3_7 57
#define OBJECT_3_6 56
#define OBJECT_3_5 55
#define OBJECT_3_4 54
#define OBJECT_3_3 53
#define OBJECT_3_2 52
#define OBJECT_3_1 51
#define OBJECT_3_0 50
#define EXECUTE_CACHE_3_21 31
#define EXECUTE_CACHE_3_13 33
#define EXECUTE_CACHE_3_10 35
#define EXECUTE_CACHE_3_8 37
#define EXECUTE_CACHE_3_6 39
#define FREE_REFERENCE_3_7 42
#define FREE_REFERENCE_3_6 43
#define FREE_REFERENCE_3_5 44
#define FREE_REFERENCE_3_4 45
#define FREE_REFERENCE_3_3 46
#define FREE_REFERENCE_3_2 47
#define FREE_REFERENCE_3_1 48
#define FREE_REFERENCE_3_0 49
#define FREE_REFERENCES_LABEL_3_0 30
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto rtl_expression_value_class_16;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_3_12);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_3_14);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_3_15);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_3_16);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_3_18);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_3_19);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_3_20);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_3_22);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_expression_value_class_27)
DEFLABEL (rtl_expression_value_class_16)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_3_0]))
    goto label_54;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_51;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_30;
  Wrd8 = Wrd12;

DEFLABEL (label_29)
  Rvl = (Wrd8.Obj);

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_18])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (current_block [OBJECT_3_4]))
    goto label_48;
  if ((Wrd14.Obj) == (current_block [OBJECT_3_5]))
    goto label_45;
  if ((Wrd14.Obj) == (current_block [OBJECT_3_6]))
    goto label_45;
  if ((Wrd14.Obj) == (current_block [OBJECT_3_7]))
    goto label_42;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_3_8]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_34;
  Wrd8 = Wrd12;

DEFLABEL (label_33)
  Rvl = (Wrd8.Obj);

DEFLABEL (label_32)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_22])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (current_block [OBJECT_3_9]))
    goto label_39;
  if ((Wrd14.Obj) == (current_block [OBJECT_3_10]))
    goto label_36;
  if ((Wrd14.Obj) == (current_block [OBJECT_3_11]))
    goto label_36;
  if ((Wrd14.Obj) == (current_block [OBJECT_3_12]))
    goto label_36;
  if ((Wrd14.Obj) == (current_block [OBJECT_3_13]))
    goto label_36;
  (Wrd24.Obj) = (current_block [OBJECT_3_14]);
  (Rsp [0]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (label_36)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_6]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_38;
  Wrd26 = Wrd30;

DEFLABEL (label_37)
  Rvl = (Wrd26.Obj);
  goto label_32;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_20])), (Wrd27.pObj));

DEFLABEL (label_24)
  (Wrd26.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_5]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_41;
  Wrd33 = Wrd37;

DEFLABEL (label_40)
  Rvl = (Wrd33.Obj);
  goto label_32;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_19])), (Wrd34.pObj));

DEFLABEL (label_25)
  (Wrd33.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_3]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_44;
  Wrd28 = Wrd32;

DEFLABEL (label_43)
  Rvl = (Wrd28.Obj);
  goto label_28;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_16])), (Wrd29.pObj));

DEFLABEL (label_20)
  (Wrd28.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_47;
  Wrd35 = Wrd39;

DEFLABEL (label_46)
  Rvl = (Wrd35.Obj);
  goto label_28;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_15])), (Wrd36.pObj));

DEFLABEL (label_21)
  (Wrd35.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_48)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_50;
  Wrd42 = Wrd46;

DEFLABEL (label_49)
  Rvl = (Wrd42.Obj);
  goto label_28;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_14])), (Wrd43.pObj));

DEFLABEL (label_22)
  (Wrd42.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_53;
  Wrd8 = Wrd12;

DEFLABEL (label_52)
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_12])), (Wrd9.pObj));

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_54)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define EXECUTE_CACHE_4_7 7
#define EXECUTE_CACHE_4_6 9
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto rtl_object_valued_expressionP_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_object_valued_expressionP_4)
DEFLABEL (rtl_object_valued_expressionP_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

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
rtlexp_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto rtl_volatile_expressionP_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_volatile_expressionP_4)
DEFLABEL (rtl_volatile_expressionP_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_8 9
#define ENVIRONMENT_LABEL_6_3 20
#define DEBUGGING_LABEL_6_2 19
#define OBJECT_6_3 18
#define OBJECT_6_2 17
#define OBJECT_6_1 16
#define OBJECT_6_0 15
#define EXECUTE_CACHE_6_7 11
#define FREE_REFERENCE_6_0 14
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_6_4);
      goto rtl_machine_register_expressionP_3;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_machine_register_expressionP_8)
DEFLABEL (rtl_machine_register_expressionP_3)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_17)
  if ((Wrd5.Obj) == (current_block [OBJECT_6_1]))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_16;
  Wrd6 = Wrd10;

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 26)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_11)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_10;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd18.Lng) < (Wrd20.Lng))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_6_3]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_8])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_9 11
#define ENVIRONMENT_LABEL_7_3 22
#define DEBUGGING_LABEL_7_2 21
#define OBJECT_7_3 20
#define OBJECT_7_2 19
#define OBJECT_7_1 18
#define OBJECT_7_0 17
#define EXECUTE_CACHE_7_8 13
#define FREE_REFERENCE_7_0 16
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_7_4);
      goto rtl_pseudo_register_expressionP_4;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_pseudo_register_expressionP_10)
DEFLABEL (rtl_pseudo_register_expressionP_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_20;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_19)
  if ((Wrd5.Obj) == (current_block [OBJECT_7_1]))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_18;
  Wrd17 = Wrd21;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_16;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_16;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd19.Lng) < (Wrd20.Lng))
    goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_7_3]);
  goto label_12;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_13;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_6])), (Wrd18.pObj));

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define ENVIRONMENT_LABEL_8_3 17
#define DEBUGGING_LABEL_8_2 16
#define OBJECT_8_2 15
#define OBJECT_8_1 14
#define OBJECT_8_0 13
#define EXECUTE_CACHE_8_8 9
#define EXECUTE_CACHE_8_7 11
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_8_4);
      goto rtl_stack_reference_expressionP_3;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_stack_reference_expressionP_7)
DEFLABEL (rtl_stack_reference_expressionP_3)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_9)
  if ((Wrd5.Obj) == (current_block [OBJECT_8_1]))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_8 9
#define ENVIRONMENT_LABEL_9_3 19
#define DEBUGGING_LABEL_9_2 18
#define OBJECT_9_4 17
#define OBJECT_9_3 16
#define OBJECT_9_2 15
#define OBJECT_9_1 14
#define OBJECT_9_0 13
#define EXECUTE_CACHE_9_7 11
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
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
      goto rtl_register_assignmentP_4;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_register_assignmentP_9)
DEFLABEL (rtl_register_assignmentP_4)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_16)
  if ((Wrd5.Obj) == (current_block [OBJECT_9_1]))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_15;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_14)
  if ((Wrd6.Obj) == (current_block [OBJECT_9_3]))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_9_4]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_8 9
#define LABEL_10_9 11
#define LABEL_10_10 13
#define LABEL_10_11 15
#define LABEL_10_12 17
#define LABEL_10_13 19
#define LABEL_10_14 21
#define LABEL_10_16 23
#define ENVIRONMENT_LABEL_10_3 36
#define DEBUGGING_LABEL_10_2 35
#define OBJECT_10_5 34
#define OBJECT_10_4 33
#define OBJECT_10_3 32
#define OBJECT_10_2 31
#define OBJECT_10_1 30
#define OBJECT_10_0 29
#define EXECUTE_CACHE_10_15 25
#define EXECUTE_CACHE_10_7 27
#define FREE_REFERENCES_LABEL_10_0 24
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd21;
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd45;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto rtl_expression_cost_15;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_10_10);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_10_12);
      goto loop_12;

    case 8:
      current_block = (Rpc - LABEL_10_13);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_10_14);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_10_16);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_expression_cost_24)
DEFLABEL (rtl_expression_cost_15)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_31;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_30)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_10_1])))
    goto label_26;
  Rvl = (current_block [OBJECT_10_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_10_4]);
  (Rsp [1]) = (Wrd18.Obj);
  goto loop_12;

DEFLABEL (label_29)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 1);

DEFLABEL (label_18)
  (Wrd9.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_30;

DEFLABEL (loop_25)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_10_12);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_10_5])))
    goto label_32;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_42;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_41)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_37;
  (Wrd21.Obj) = (Rsp [2]);

DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_34;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_33)
  (Rsp [0]) = (Wrd22.Obj);
  goto loop_12;

DEFLABEL (label_34)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 1);

DEFLABEL (label_20)
  (Wrd22.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_37)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_40;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (Wrd45.Obj) = Rvl;
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 26))
    goto label_38;
  (Wrd54.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd54.uLng) == 26))
    goto label_38;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd55.Lng) = ((Wrd57.Lng) + (Wrd58.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd55.Lng)))
    goto label_38;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd55.Lng));
  goto label_36;

DEFLABEL (label_38)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_40)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_19)
  (Wrd10.Obj) = Rvl;
  goto label_41;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (Wrd21.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_6 9
#define LABEL_11_11 11
#define LABEL_11_8 13
#define TAG_11_9 5
#define ENVIRONMENT_LABEL_11_3 21
#define DEBUGGING_LABEL_11_2 20
#define OBJECT_11_2 19
#define OBJECT_11_1 18
#define OBJECT_11_0 17
#define EXECUTE_CACHE_11_10 15
#define FREE_REFERENCES_LABEL_11_0 14
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
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
      goto rtl_map_subexpressions_7;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_11_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_11_8);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_map_subexpressions_13)
DEFLABEL (rtl_map_subexpressions_7)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_20)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_11_1])))
    goto label_15;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_19;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_18)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_8])));
  Rhp += 1;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd29 = Wrd28;
  (Wrd30.Obj) = (Rsp [3]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_16)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_11_8);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_22;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define TAG_12_8 3
#define ENVIRONMENT_LABEL_12_3 18
#define DEBUGGING_LABEL_12_2 17
#define OBJECT_12_3 16
#define OBJECT_12_2 15
#define OBJECT_12_1 14
#define OBJECT_12_0 13
#define EXECUTE_CACHE_12_9 11
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_12_4);
      goto rtl_for_each_subexpression_5;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto lambda_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_for_each_subexpression_10)
DEFLABEL (rtl_for_each_subexpression_5)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_16;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_15)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_12_1])))
    goto label_12;
  Rvl = (current_block [OBJECT_12_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_14;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_13)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_7])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd27 = Wrd26;
  (Wrd28.Obj) = (Rsp [1]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  (Rsp [0]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (label_14)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_8)
  (Wrd15.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_12_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_17;
  Rvl = (current_block [OBJECT_12_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define TAG_13_8 3
#define ENVIRONMENT_LABEL_13_3 17
#define DEBUGGING_LABEL_13_2 16
#define OBJECT_13_2 15
#define OBJECT_13_1 14
#define OBJECT_13_0 13
#define EXECUTE_CACHE_13_9 11
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_13_4);
      goto rtl_any_subexpressionP_5;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto lambda_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_any_subexpressionP_10)
DEFLABEL (rtl_any_subexpressionP_5)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_16;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_15)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_13_1])))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_14;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_7])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd27 = Wrd26;
  (Wrd28.Obj) = (Rsp [1]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  (Rsp [1]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (label_14)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_8)
  (Wrd15.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_13_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define LABEL_14_7 7
#define ENVIRONMENT_LABEL_14_3 12
#define DEBUGGING_LABEL_14_2 11
#define EXECUTE_CACHE_14_8 9
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto rtl_expression_containsP_5;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto loop_9;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_expression_containsP_8)
DEFLABEL (rtl_expression_containsP_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  Wrd10 = Wrd12;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd8.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_3;

DEFLABEL (loop_9)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (loop_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
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
  INTERRUPT_CHECK (27, LABEL_14_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define TAG_15_8 3
#define ENVIRONMENT_LABEL_15_3 18
#define DEBUGGING_LABEL_15_2 17
#define OBJECT_15_3 16
#define OBJECT_15_2 15
#define OBJECT_15_1 14
#define OBJECT_15_0 13
#define EXECUTE_CACHE_15_9 11
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_15_4);
      goto rtl_all_subexpressionsP_7;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_all_subexpressionsP_12)
DEFLABEL (rtl_all_subexpressionsP_7)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_17)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_15_1])))
    goto label_14;
  Rvl = (current_block [OBJECT_15_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_16;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_7])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd27 = Wrd26;
  (Wrd28.Obj) = (Rsp [1]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  (Rsp [1]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (label_16)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_10)
  (Wrd15.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_15_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_20;
  (Wrd7.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_19;

DEFLABEL (label_20)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_19)
DEFLABEL (label_22)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_8 7
#define LABEL_16_6 9
#define TAG_16_7 3
#define LABEL_16_9 11
#define LABEL_16_12 13
#define LABEL_16_10 15
#define LABEL_16_13 17
#define LABEL_16_11 19
#define ENVIRONMENT_LABEL_16_3 25
#define DEBUGGING_LABEL_16_2 24
#define OBJECT_16_3 23
#define OBJECT_16_2 22
#define OBJECT_16_1 21
#define OBJECT_16_0 20
#define FREE_REFERENCES_LABEL_16_0 20
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_16_4);
      goto rtl_reduce_subparts_15;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_16_8);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_16_6);
      goto lambda_23;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto loop_12;

    case 5:
      current_block = (Rpc - LABEL_16_12);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_16_13);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_reduce_subparts_22)
DEFLABEL (rtl_reduce_subparts_15)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_31;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_30)
  if ((Wrd5.Obj) == (current_block [OBJECT_16_1]))
    goto label_26;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_6])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [4]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_25;

DEFLABEL (label_26)
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_25)
DEFLABEL (label_29)
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_28;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_27)
  goto loop_12;

DEFLABEL (label_28)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_30;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_16_6);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_32;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_32)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [3]);
  (Rsp [0]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (loop_24)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_16_9);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_16_3])))
    goto label_33;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_37;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_36)
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_35;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_12;

DEFLABEL (label_35)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_20)
  (Wrd6.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define LABEL_17_8 11
#define LABEL_17_9 13
#define LABEL_17_10 15
#define LABEL_17_12 17
#define LABEL_17_13 19
#define LABEL_17_14 21
#define LABEL_17_15 23
#define LABEL_17_17 25
#define LABEL_17_18 27
#define LABEL_17_20 29
#define LABEL_17_21 31
#define LABEL_17_16 33
#define LABEL_17_22 35
#define LABEL_17_23 37
#define ENVIRONMENT_LABEL_17_3 49
#define DEBUGGING_LABEL_17_2 48
#define OBJECT_17_4 47
#define OBJECT_17_3 46
#define OBJECT_17_2 45
#define OBJECT_17_1 44
#define OBJECT_17_0 43
#define EXECUTE_CACHE_17_19 39
#define EXECUTE_CACHE_17_11 41
#define FREE_REFERENCES_LABEL_17_0 38
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      goto rtl_expression_P_24;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_17_8);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_17_10);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_17_12);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_17_13);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_17_14);
      goto loop_17;

    case 10:
      current_block = (Rpc - LABEL_17_15);
      goto label_34;

    case 11:
      current_block = (Rpc - LABEL_17_17);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_17_18);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_17_20);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_17_21);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_17_16);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_17_22);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_17_23);
      goto label_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_expression_P_42)
DEFLABEL (rtl_expression_P_24)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_61;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_60)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_59;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_58)
  (Wrd23.Obj) = (Rsp [0]);
  if ((Wrd23.Obj) == (Wrd14.Obj))
    goto label_44;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_44)
  if ((Wrd23.Obj) == (current_block [OBJECT_17_1]))
    goto label_49;
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_48;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_47)
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_46;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_45)
  (Rsp [2]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_17;

DEFLABEL (label_46)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_29)
  (Wrd37.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_28)
  (Wrd28.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_57;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_56)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_55;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd57.pObj) [0]);

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd56.Obj);
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_53;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_52)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_51;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd72.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_50)
  (Rsp [2]) = (Wrd72.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (label_51)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_33)
  (Wrd72.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_32)
  (Wrd63.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_31)
  (Wrd56.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_30)
  (Wrd47.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_27)
  (Wrd14.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (loop_43)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_17_14);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_17_3])))
    goto label_62;
  Rvl = (current_block [OBJECT_17_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_78;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_77)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd16.uLng) == 1)
    goto label_72;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_71;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_70)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_69;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_68)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_63;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_67;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_66)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_65;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_64)
  (Rsp [1]) = (Wrd16.Obj);
  goto loop_17;

DEFLABEL (label_65)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_23]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_40)
  (Wrd16.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_39)
  (Wrd7.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_20]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_76;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_75)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_74;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_73)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_19]));

DEFLABEL (label_74)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_34)
  (Wrd7.Obj) = Rvl;
  goto label_77;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define LABEL_18_8 11
#define LABEL_18_9 13
#define LABEL_18_10 15
#define LABEL_18_12 17
#define LABEL_18_13 19
#define LABEL_18_14 21
#define LABEL_18_15 23
#define LABEL_18_17 25
#define LABEL_18_18 27
#define LABEL_18_19 29
#define LABEL_18_20 31
#define LABEL_18_16 33
#define LABEL_18_21 35
#define LABEL_18_22 37
#define ENVIRONMENT_LABEL_18_3 47
#define DEBUGGING_LABEL_18_2 46
#define OBJECT_18_4 45
#define OBJECT_18_3 44
#define OBJECT_18_2 43
#define OBJECT_18_1 42
#define OBJECT_18_0 41
#define EXECUTE_CACHE_18_11 39
#define FREE_REFERENCES_LABEL_18_0 38
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      goto rtl_match_subexpressions_24;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_18_9);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_18_10);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_18_12);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_18_13);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_18_14);
      goto loop_17;

    case 10:
      current_block = (Rpc - LABEL_18_15);
      goto label_34;

    case 11:
      current_block = (Rpc - LABEL_18_17);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_18_18);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_18_19);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_18_20);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_18_16);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_18_21);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_18_22);
      goto label_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_match_subexpressions_42)
DEFLABEL (rtl_match_subexpressions_24)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_61;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_60)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_59;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_58)
  (Wrd23.Obj) = (Rsp [0]);
  if ((Wrd23.Obj) == (Wrd14.Obj))
    goto label_44;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_44)
  if ((Wrd23.Obj) == (current_block [OBJECT_18_1]))
    goto label_49;
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_48;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_47)
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_46;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_45)
  (Rsp [1]) = (Wrd37.Obj);
  goto loop_17;

DEFLABEL (label_46)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_29)
  (Wrd37.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_57;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_56)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_55;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_54)
  (Rsp [3]) = (Wrd55.Obj);
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_53;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd62.Obj) = ((Wrd64.pObj) [1]);

DEFLABEL (label_52)
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_51;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd71.Obj) = ((Wrd72.pObj) [0]);

DEFLABEL (label_50)
  (Rsp [2]) = (Wrd71.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (label_51)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_33)
  (Wrd71.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_32)
  (Wrd62.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_31)
  (Wrd55.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_30)
  (Wrd46.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_27)
  (Wrd14.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (loop_43)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_18_14);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_18_3])))
    goto label_62;
  Rvl = (current_block [OBJECT_18_4]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_78;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_77)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd16.uLng) == 1)
    goto label_72;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_71;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_70)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_69;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_68)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_18_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_63;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_67;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_66)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_65;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_64)
  (Rsp [1]) = (Wrd16.Obj);
  goto loop_17;

DEFLABEL (label_65)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_40)
  (Wrd16.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_39)
  (Wrd7.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_20]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_76;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_75)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_74;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_73)
  (Wrd59.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd59.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_74)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_34)
  (Wrd7.Obj) = Rvl;
  goto label_77;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_6 5
#define LABEL_19_5 7
#define LABEL_19_9 9
#define TAG_19_10 3
#define LABEL_19_11 11
#define LABEL_19_13 13
#define LABEL_19_15 15
#define LABEL_19_12 17
#define ENVIRONMENT_LABEL_19_3 34
#define DEBUGGING_LABEL_19_2 33
#define OBJECT_19_5 32
#define OBJECT_19_4 31
#define OBJECT_19_3 30
#define OBJECT_19_2 29
#define OBJECT_19_1 28
#define OBJECT_19_0 27
#define EXECUTE_CACHE_19_16 19
#define EXECUTE_CACHE_19_14 21
#define EXECUTE_CACHE_19_8 23
#define EXECUTE_CACHE_19_7 25
#define FREE_REFERENCES_LABEL_19_0 18
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_19_4);
      goto rtl_refers_to_registerP_11;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_19_9);
      goto loop_17;

    case 4:
      current_block = (Rpc - LABEL_19_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_19_15);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_refers_to_registerP_16)
DEFLABEL (rtl_refers_to_registerP_11)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd15.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_18)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_9])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  Wrd9 = Wrd11;
  (Wrd10.Obj) = (Rsp [3]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd7.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd7.Obj);
  goto loop_9;

DEFLABEL (label_19)
  (Wrd18.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_18;

DEFLABEL (loop_17)
  CLOSURE_HEADER (LABEL_19_9);

DEFLABEL (loop_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  if (! ((Wrd6.uLng) == 1))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_30)
  if ((Wrd9.Obj) == (current_block [OBJECT_19_2]))
    goto label_24;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_23;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd19.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_16]));

DEFLABEL (label_23)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 1);

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_19_3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 26)
    goto label_26;

DEFLABEL (label_25)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_26)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_25;
  if (Rvl == (Wrd6.Obj))
    goto label_28;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_27;

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_19_5]);

DEFLABEL (label_27)
DEFLABEL (label_29)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_13)
  (Wrd9.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define TAG_20_6 1
#define LABEL_20_9 7
#define LABEL_20_7 9
#define LABEL_20_12 11
#define LABEL_20_17 13
#define LABEL_20_10 15
#define LABEL_20_19 17
#define LABEL_20_14 19
#define LABEL_20_15 21
#define LABEL_20_16 23
#define LABEL_20_21 25
#define LABEL_20_20 27
#define LABEL_20_22 29
#define ENVIRONMENT_LABEL_20_3 48
#define DEBUGGING_LABEL_20_2 47
#define OBJECT_20_5 46
#define OBJECT_20_4 45
#define OBJECT_20_3 44
#define OBJECT_20_2 43
#define OBJECT_20_1 42
#define OBJECT_20_0 41
#define EXECUTE_CACHE_20_23 31
#define EXECUTE_CACHE_20_18 33
#define EXECUTE_CACHE_20_13 35
#define EXECUTE_CACHE_20_11 37
#define EXECUTE_CACHE_20_8 39
#define FREE_REFERENCES_LABEL_20_0 30
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_20_4);
      goto rtl_subst_register_20;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto lambda_28;

    case 2:
      current_block = (Rpc - LABEL_20_9);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_20_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_20_17);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_20_19);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_20_14);
      goto continuation_16;

    case 9:
      current_block = (Rpc - LABEL_20_15);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_20_16);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_20_21);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_20_20);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_20_22);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_subst_register_27)
DEFLABEL (rtl_subst_register_20)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_5])));
  Rhp += 3;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd17 = Wrd12;
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  ((Wrd17.pObj) [4]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  ((Wrd6.pObj) [0]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_20_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_20_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_20_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20_14);
  (Wrd9.Obj) = (current_block [OBJECT_20_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_20_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_20_22);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_20_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_30;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  if (! ((Wrd6.uLng) == 1))
    goto label_43;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_42)
  if ((Wrd9.Obj) == (current_block [OBJECT_20_1]))
    goto label_36;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_35;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_34)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [4]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_16);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_33;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_32)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (Wrd5.Obj) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_41;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_41;
  if (Rvl == (Wrd9.Obj))
    goto label_38;

DEFLABEL (label_39)
  Rvl = (Rsp [1]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  Rvl = ((Wrd23.pObj) [2]);

DEFLABEL (label_37)
DEFLABEL (label_40)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [3]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_38;

DEFLABEL (label_43)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_22)
  (Wrd9.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_10 9
#define LABEL_21_11 11
#define LABEL_21_13 13
#define LABEL_21_15 15
#define LABEL_21_12 17
#define LABEL_21_18 19
#define LABEL_21_20 21
#define LABEL_21_16 23
#define LABEL_21_19 25
#define LABEL_21_21 27
#define ENVIRONMENT_LABEL_21_3 46
#define DEBUGGING_LABEL_21_2 45
#define OBJECT_21_5 44
#define OBJECT_21_4 43
#define OBJECT_21_3 42
#define OBJECT_21_2 41
#define OBJECT_21_1 40
#define OBJECT_21_0 39
#define EXECUTE_CACHE_21_17 29
#define EXECUTE_CACHE_21_14 31
#define EXECUTE_CACHE_21_9 33
#define EXECUTE_CACHE_21_8 35
#define EXECUTE_CACHE_21_6 37
#define FREE_REFERENCES_LABEL_21_0 28
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_21_4);
      goto rtl_substitutable_registers_20;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_19;

    case 3:
      current_block = (Rpc - LABEL_21_10);
      goto outer_17;

    case 4:
      current_block = (Rpc - LABEL_21_11);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_21_13);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_21_15);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_21_12);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_21_18);
      goto inner_12;

    case 9:
      current_block = (Rpc - LABEL_21_20);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_21_16);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_21_19);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_21_21);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_substitutable_registers_27)
DEFLABEL (rtl_substitutable_registers_20)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;
  (Wrd12.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd13.Obj);
  goto outer_17;

DEFLABEL (label_30)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (outer_28)
DEFLABEL (outer_17)
  INTERRUPT_CHECK (26, LABEL_21_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_31;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  if (! ((Wrd6.uLng) == 1))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_39)
  if ((Wrd9.Obj) == (current_block [OBJECT_21_3]))
    goto label_35;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_33)
  (Rsp [0]) = (Wrd9.Obj);
  goto inner_12;

DEFLABEL (label_34)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 1);

DEFLABEL (label_23)
  (Wrd9.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_21_4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_21_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_17]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_21_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  Rvl = (Rsp [2]);
  goto label_36;

DEFLABEL (label_37)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_36)
DEFLABEL (label_38)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_22)
  (Wrd9.Obj) = Rvl;
  goto label_39;

DEFLABEL (inner_29)
DEFLABEL (inner_12)
  INTERRUPT_CHECK (26, LABEL_21_18);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_21_0])))
    goto label_41;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_45;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_44)
  goto outer_17;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_21_19);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_43;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [0]) = (Wrd6.Obj);
  goto inner_12;

DEFLABEL (label_43)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_21]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 1);

DEFLABEL (label_25)
  (Wrd6.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 13
#define DEBUGGING_LABEL_22_2 12
#define OBJECT_22_0 11
#define EXECUTE_CACHE_22_7 7
#define EXECUTE_CACHE_22_6 9
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto rtl_contains_no_substitutable_registersP_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_contains_no_substitutable_registersP_4)
DEFLABEL (rtl_contains_no_substitutable_registersP_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_9 9
#define LABEL_23_10 11
#define LABEL_23_11 13
#define LABEL_23_12 15
#define LABEL_23_13 17
#define LABEL_23_15 19
#define ENVIRONMENT_LABEL_23_3 34
#define DEBUGGING_LABEL_23_2 33
#define OBJECT_23_5 32
#define OBJECT_23_4 31
#define OBJECT_23_3 30
#define OBJECT_23_2 29
#define OBJECT_23_1 28
#define OBJECT_23_0 27
#define EXECUTE_CACHE_23_14 21
#define EXECUTE_CACHE_23_8 23
#define EXECUTE_CACHE_23_6 25
#define FREE_REFERENCES_LABEL_23_0 20
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_23_4);
      goto rtl_constant_expressionP_16;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_23_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_23_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_23_12);
      goto loop_13;

    case 7:
      current_block = (Rpc - LABEL_23_13);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_23_15);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_constant_expressionP_22)
DEFLABEL (rtl_constant_expressionP_16)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = (current_block [OBJECT_23_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_27;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_13;

DEFLABEL (label_27)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_18)
  (Wrd7.Obj) = Rvl;
  goto label_26;

DEFLABEL (loop_23)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_23_12);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_23_4]))
    goto label_39;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_37)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 1)
    goto label_29;
  (Wrd21.Obj) = (current_block [OBJECT_23_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_28;

DEFLABEL (label_29)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_28)
DEFLABEL (label_36)
  (Wrd22.Obj) = (Rsp [0]);
  if (! ((Wrd22.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_30;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_14]));

DEFLABEL (label_30)
  Rsp = (& (Rsp [3]));
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_33)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_32;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd29.Obj);
  goto loop_13;

DEFLABEL (label_32)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_20)
  (Wrd29.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_35)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_5]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  Rvl = (current_block [OBJECT_23_2]);
  goto label_35;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_23_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define ENVIRONMENT_LABEL_24_3 19
#define DEBUGGING_LABEL_24_2 18
#define OBJECT_24_2 17
#define OBJECT_24_1 16
#define OBJECT_24_0 15
#define EXECUTE_CACHE_24_7 13
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_24_4);
      goto rtx_set_union__8;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtx_set_union__13)
DEFLABEL (rtx_set_union__8)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [2]) = (Wrd7.Obj);
  goto loop_6;

DEFLABEL (loop_14)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_24_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_24_0])))
    goto label_15;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_19;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_18)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_17;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_11)
  (Wrd17.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define LABEL_25_11 11
#define LABEL_25_8 13
#define TAG_25_9 5
#define ENVIRONMENT_LABEL_25_3 23
#define DEBUGGING_LABEL_25_2 22
#define OBJECT_25_2 21
#define OBJECT_25_1 20
#define OBJECT_25_0 19
#define EXECUTE_CACHE_25_12 15
#define EXECUTE_CACHE_25_10 17
#define FREE_REFERENCES_LABEL_25_0 14
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlexp_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_25_4);
      goto rtx_set_union_11;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto loop_9;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_25_11);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_25_8);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtx_set_union_16)
DEFLABEL (rtx_set_union_11)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_25_0]))
    goto label_19;
  goto loop_9;

DEFLABEL (label_19)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (loop_17)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_25_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_25_0])))
    goto label_20;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_27;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_26)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_8])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd21 = Wrd20;
  (Wrd22.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd8.Obj) = (Rsp [2]);
  goto label_21;

DEFLABEL (label_22)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));

DEFLABEL (label_21)
DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_9;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_27)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_25_8);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_12]));

INVOKE_INTERFACE_TARGET_0
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
rtlexp_so_432af2e9cd46a0d8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	1,
	1,
	1,
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
	2,
	2,
	1,
	1,
	2,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 25)
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

static const struct liarc_code_S arr_decl_rtlexp_so_432af2e9cd46a0d8 [25] =
  {
    { "rtlexp_so_code_1", 2, rtlexp_so_code_1 },
    { "rtlexp_so_code_2", 2, rtlexp_so_code_2 },
    { "rtlexp_so_code_3", 14, rtlexp_so_code_3 },
    { "rtlexp_so_code_4", 2, rtlexp_so_code_4 },
    { "rtlexp_so_code_5", 2, rtlexp_so_code_5 },
    { "rtlexp_so_code_6", 4, rtlexp_so_code_6 },
    { "rtlexp_so_code_7", 5, rtlexp_so_code_7 },
    { "rtlexp_so_code_8", 3, rtlexp_so_code_8 },
    { "rtlexp_so_code_9", 4, rtlexp_so_code_9 },
    { "rtlexp_so_code_10", 11, rtlexp_so_code_10 },
    { "rtlexp_so_code_11", 6, rtlexp_so_code_11 },
    { "rtlexp_so_code_12", 4, rtlexp_so_code_12 },
    { "rtlexp_so_code_13", 4, rtlexp_so_code_13 },
    { "rtlexp_so_code_14", 3, rtlexp_so_code_14 },
    { "rtlexp_so_code_15", 4, rtlexp_so_code_15 },
    { "rtlexp_so_code_16", 9, rtlexp_so_code_16 },
    { "rtlexp_so_code_17", 18, rtlexp_so_code_17 },
    { "rtlexp_so_code_18", 18, rtlexp_so_code_18 },
    { "rtlexp_so_code_19", 8, rtlexp_so_code_19 },
    { "rtlexp_so_code_20", 14, rtlexp_so_code_20 },
    { "rtlexp_so_code_21", 13, rtlexp_so_code_21 },
    { "rtlexp_so_code_22", 2, rtlexp_so_code_22 },
    { "rtlexp_so_code_23", 9, rtlexp_so_code_23 },
    { "rtlexp_so_code_24", 5, rtlexp_so_code_24 },
    { "rtlexp_so_code_25", 6, rtlexp_so_code_25 }
  };

int
decl_rtlexp_so_432af2e9cd46a0d8 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rtlexp_so_432af2e9cd46a0d8);
  return (0);
}

DECLARE_COMPILED_CODE ("rtlexp.so", 3, decl_rtlexp_so_432af2e9cd46a0d8, rtlexp_so_432af2e9cd46a0d8)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rtlexp_so_data_432af2e9cd46a0d8 [4294] =
  "\x48\x40\xf3\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x14\x28\x0d\xb9\x28\x0d\xba\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88\x0d\x0d\x08\x89"
  "\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83"
  "\x88\x0c\x0d\x0d\xbd\x0d\xbe\x0d\x0d\xbf\x0d\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x08\x8c\x0d\x1c\x0d\x1c\x0d\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x08\x14\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x08\x14\x86\x0d\x1c\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x24\x28\xb1\x28\x0d\x1c\x28\xb2\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x85\x88\x1b\x1b\x08\x89\x28\xb1\x28\xb2\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x07\x86\x1b\xc1"
  "\x1c\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x86\x1b\x1b\x1b\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x86\x1b\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x86\x0d\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x82\xc1\x1c\x81\x1b\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x07\x1b\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x1b"
  "\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x1b\x1b\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x08\x1b\x1b\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x86\x1b\x1b\x02\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x1b\x02\x86\x1b\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb1"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x86\x1b\x1b\x02\x08\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x08\x14\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\x07\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\xb6\xb5\x1b\x1b\x1b\x1b\x1b\xb7\x1b\x1b\x08\x14\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x08\x8d\x28\xb1\x28\xb2\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x08\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb4\x2a\xb3\x2a"
  "\x17\x1b\x0d\x1b\x1b\x1b\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x1b\x0d\x0d"
  "\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x17\x28\x0d\x26\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x5c\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x2f\x72\x74\x6c\x62\x61\x73\x65\x2f\x72\x74\x6c\x65\x78\x70\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x11\x69\x6e\x76\x6f\x63\x61"
  "\x74\x69\x6f\x6e\x3a\x61\x70\x70\x6c\x79\x10\x69\x6e\x76\x6f\x63"
  "\x61\x74\x69\x6f\x6e\x3a\x6a\x75\x6d\x70\x19\x69\x6e\x76\x6f\x63"
  "\x61\x74\x69\x6f\x6e\x3a\x63\x6f\x6d\x70\x75\x74\x65\x64\x2d\x6a"
  "\x75\x6d\x70\x11\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x6c"
  "\x65\x78\x70\x72\x1a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a"
  "\x63\x6f\x6d\x70\x75\x74\x65\x64\x2d\x6c\x65\x78\x70\x72\x15\x69"
  "\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x1d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x73"
  "\x70\x65\x63\x69\x61\x6c\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x14\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x75\x75\x6f\x2d"
  "\x6c\x69\x6e\x6b\x17\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a"
  "\x67\x6c\x6f\x62\x61\x6c\x2d\x6c\x69\x6e\x6b\x1b\x69\x6e\x76\x6f"
  "\x63\x61\x74\x69\x6f\x6e\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x12\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f"
  "\x6e\x3a\x6c\x6f\x6f\x6b\x75\x70\x0b\x03\x14\x72\x74\x6c\x3a\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x74\x79\x70\x65\x04\x05"
  "\x6d\x65\x6d\x71\x03\x05\x06\x81\x83\x02\x04\x04\x83\x04\x05\x0e"
  "\x02\x1f\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65"
  "\x66\x69\x78\x3a\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b"
  "\x20\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65\x66"
  "\x69\x78\x3a\x6d\x6f\x76\x65\x2d\x66\x72\x61\x6d\x65\x2d\x75\x70"
  "\x03\x04\x03\x07\x06\x81\x83\x02\x06\x04\x83\x04\x05\x0e\x02\x1c"
  "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x52\x54\x4c\x20\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x20\x74\x79\x70\x65\x0d\x66\x6c\x6f\x61"
  "\x74\x2d\x6f\x66\x66\x73\x65\x74\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x32\x2d\x61\x72\x67\x73\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x31\x2d"
  "\x61\x72\x67\x0e\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x66\x6c\x6f\x61"
  "\x74\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x74\x79\x70\x65\x10\x61"
  "\x64\x64\x72\x65\x73\x73\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x0d\x66"
  "\x69\x78\x6e\x75\x6d\x2d\x31\x2d\x61\x72\x67\x09\x0e\x66\x69\x78"
  "\x6e\x75\x6d\x2d\x32\x2d\x61\x72\x67\x73\x0a\x0f\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x0b\x18\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x3e\x75\x6e\x73\x69\x67\x6e\x65\x64\x2d\x66\x69\x78"
  "\x6e\x75\x6d\x0c\x0e\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x64\x61\x74"
  "\x75\x6d\x0d\x0c\x63\x68\x61\x72\x2d\x3e\x61\x73\x63\x69\x69\x0e"
  "\x0c\x62\x79\x74\x65\x2d\x6f\x66\x66\x73\x65\x74\x11\x6d\x61\x63"
  "\x68\x69\x6e\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x0f\x10\x66"
  "\x69\x78\x6e\x75\x6d\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x10\x10"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x11"
  "\x11\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x63\x61\x63\x68"
  "\x65\x12\x0f\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x63\x61\x63\x68"
  "\x65\x13\x0d\x63\x6f\x6e\x73\x2d\x63\x6c\x6f\x73\x75\x72\x65\x14"
  "\x12\x63\x6f\x6e\x73\x2d\x6d\x75\x6c\x74\x69\x63\x6c\x6f\x73\x75"
  "\x72\x65\x15\x13\x65\x6e\x74\x72\x79\x3a\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x16\x10\x65\x6e\x74\x72\x79\x3a\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x17\x0f\x6f\x66\x66\x73\x65\x74\x2d"
  "\x61\x64\x64\x72\x65\x73\x73\x18\x15\x66\x6c\x6f\x61\x74\x2d\x6f"
  "\x66\x66\x73\x65\x74\x2d\x61\x64\x64\x72\x65\x73\x73\x19\x14\x62"
  "\x79\x74\x65\x2d\x6f\x66\x66\x73\x65\x74\x2d\x61\x64\x64\x72\x65"
  "\x73\x73\x1a\x0b\x11\x63\x6f\x6e\x73\x2d\x6e\x6f\x6e\x2d\x70\x6f"
  "\x69\x6e\x74\x65\x72\x1b\x0d\x63\x6f\x6e\x73\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x1c\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x1d\x0f\x66"
  "\x69\x78\x6e\x75\x6d\x2d\x3e\x6f\x62\x6a\x65\x63\x74\x1e\x0e\x66"
  "\x6c\x6f\x61\x74\x2d\x3e\x6f\x62\x6a\x65\x63\x74\x0f\x67\x65\x6e"
  "\x65\x72\x69\x63\x2d\x62\x69\x6e\x61\x72\x79\x1f\x0e\x67\x65\x6e"
  "\x65\x72\x69\x63\x2d\x75\x6e\x61\x72\x79\x20\x07\x6f\x66\x66\x73"
  "\x65\x74\x21\x0f\x70\x6f\x73\x74\x2d\x69\x6e\x63\x72\x65\x6d\x65"
  "\x6e\x74\x22\x0e\x70\x72\x65\x2d\x69\x6e\x63\x72\x65\x6d\x65\x6e"
  "\x74\x23\x0a\x09\x72\x65\x67\x69\x73\x74\x65\x72\x24\x13\x76\x61"
  "\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x3d\x6f\x62\x6a\x65\x63\x74"
  "\x16\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x3d\x69\x6d\x6d"
  "\x65\x64\x69\x61\x74\x65\x12\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61"
  "\x73\x73\x3d\x61\x73\x63\x69\x69\x12\x76\x61\x6c\x75\x65\x2d\x63"
  "\x6c\x61\x73\x73\x3d\x64\x61\x74\x75\x6d\x14\x76\x61\x6c\x75\x65"
  "\x2d\x63\x6c\x61\x73\x73\x3d\x61\x64\x64\x72\x65\x73\x73\x11\x76"
  "\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x3d\x74\x79\x70\x65\x12"
  "\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x3d\x66\x6c\x6f\x61"
  "\x74\x13\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x3d\x66\x69"
  "\x78\x6e\x75\x6d\x09\x03\x04\x10\x67\x65\x6e\x65\x72\x61\x6c\x2d"
  "\x63\x61\x72\x2d\x63\x64\x72\x25\x04\x03\x15\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x2d\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x04"
  "\x06\x65\x72\x72\x6f\x72\x06\x15\x1e\x81\x85\x02\x14\x1c\x81\x85"
  "\x02\x13\x1a\x81\x85\x02\x12\x18\x81\x85\x02\x11\x16\x81\x85\x02"
  "\x10\x14\x81\x85\x02\x0f\x12\x81\x85\x02\x0e\x10\x81\x85\x02\x0d"
  "\x0e\x81\x85\x02\x0c\x0c\x81\x85\x02\x0b\x0a\x81\x85\x02\x0a\x08"
  "\x81\x85\x02\x09\x06\x81\x83\x02\x08\x04\x83\x04\x1d\x43\x26\x02"
  "\x03\x1b\x72\x74\x6c\x3a\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x2d\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x27\x03\x14\x76"
  "\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x3d\x6f\x62\x6a\x65\x63"
  "\x74\x3f\x03\x17\x06\x81\x83\x02\x16\x04\x83\x04\x05\x0d\x28\x02"
  "\x22\x23\x03\x04\x03\x19\x06\x81\x83\x02\x18\x04\x83\x04\x05\x0e"
  "\x29\x02\x24\x04\x63\x61\x72\x2a\x1c\x6e\x75\x6d\x62\x65\x72\x2d"
  "\x6f\x66\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x73\x2b\x02\x04\x25\x02\x1d\x0a\x81\x85\x02\x1c\x08"
  "\x81\x83\x02\x1b\x06\x81\x83\x02\x1a\x04\x83\x04\x09\x15\x2c\x02"
  "\x08\x24\x2a\x2b\x02\x04\x25\x02\x22\x0c\x81\x83\x02\x21\x0a\x81"
  "\x85\x02\x20\x08\x81\x83\x02\x1f\x06\x81\x83\x02\x1e\x04\x83\x04"
  "\x0b\x17\x2b\x02\x09\x21\x2a\x04\x25\x03\x1b\x69\x6e\x74\x65\x72"
  "\x70\x72\x65\x74\x65\x72\x2d\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69"
  "\x6e\x74\x65\x72\x3f\x03\x25\x08\x81\x83\x02\x24\x06\x81\x83\x02"
  "\x23\x04\x83\x04\x07\x12\x21\x02\x0a\x24\x07\x61\x73\x73\x69\x67"
  "\x6e\x2a\x04\x25\x02\x29\x0a\x81\x83\x02\x28\x08\x81\x83\x02\x27"
  "\x06\x81\x83\x02\x26\x04\x83\x04\x09\x14\x2d\x02\x0b\x04\x63\x64"
  "\x72\x2e\x24\x2a\x03\x12\x72\x74\x6c\x3a\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x2d\x63\x6f\x73\x74\x03\x14\x72\x74\x6c\x3a\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2d\x63\x6f\x73\x74\x2f\x03\x34\x18"
  "\x81\x85\x02\x33\x16\x81\x89\x02\x32\x14\x81\x87\x02\x31\x12\x81"
  "\x85\x02\x30\x10\x81\x85\x02\x2f\x0e\x81\x87\x02\x2e\x0c\x81\x87"
  "\x02\x2d\x0a\x81\x85\x02\x2c\x08\x81\x83\x02\x2b\x06\x81\x83\x02"
  "\x2a\x04\x83\x04\x17\x25\x30\x02\x0c\x2e\x1d\x2a\x04\x04\x6d\x61"
  "\x70\x31\x02\x3a\x0e\x81\x85\x02\x39\x0c\x81\x87\x02\x38\x0a\x81"
  "\x85\x02\x37\x08\x81\x87\x02\x36\x06\x81\x85\x02\x35\x04\x84\x06"
  "\x0d\x16\x32\x02\x0d\x2e\x02\x1d\x2a\x04\x09\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x02\x3e\x0a\x81\x85\x02\x3d\x08\x81\x85\x02\x3c\x06"
  "\x81\x85\x02\x3b\x04\x84\x06\x09\x13\x33\x02\x0e\x2e\x1d\x2a\x04"
  "\x0e\x74\x68\x65\x72\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x34\x02"
  "\x42\x0a\x81\x85\x02\x41\x08\x81\x85\x02\x40\x06\x81\x85\x02\x3f"
  "\x04\x84\x06\x09\x12\x35\x02\x0f\x04\x17\x72\x74\x6c\x3a\x61\x6e"
  "\x79\x2d\x73\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f"
  "\x36\x02\x45\x08\x81\x85\x02\x44\x06\x81\x85\x02\x43\x04\x84\x06"
  "\x07\x0d\x37\x02\x10\x2e\x1d\x2a\x04\x09\x66\x6f\x72\x2d\x61\x6c"
  "\x6c\x3f\x02\x49\x0a\x81\x85\x02\x48\x08\x81\x85\x02\x47\x06\x81"
  "\x85\x02\x46\x04\x84\x06\x09\x13\x38\x02\x11\x2e\x1d\x2a\x52\x14"
  "\x81\x93\x02\x51\x12\x81\x91\x02\x50\x10\x81\x91\x02\x4f\x0e\x81"
  "\x95\x02\x4e\x0c\x81\x91\x02\x4d\x0a\x81\x85\x02\x4c\x08\x81\x8f"
  "\x02\x4b\x06\x81\x8b\x02\x4a\x04\x87\x0c\x13\x1a\x39\x02\x12\x2e"
  "\x1d\x2a\x04\x05\x65\x71\x76\x3f\x3a\x04\x11\x72\x74\x6c\x3a\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3d\x3f\x3b\x03\x64\x26\x81"
  "\x85\x02\x63\x24\x81\x85\x02\x62\x22\x81\x85\x02\x61\x20\x81\x89"
  "\x02\x60\x1e\x81\x87\x02\x5f\x1c\x81\x89\x02\x5e\x1a\x81\x87\x02"
  "\x5d\x18\x81\x85\x02\x5c\x16\x81\x85\x02\x5b\x14\x81\x87\x02\x5a"
  "\x12\x81\x87\x02\x59\x10\x81\x87\x02\x58\x0e\x81\x87\x02\x57\x0c"
  "\x81\x87\x02\x56\x0a\x81\x87\x02\x55\x08\x81\x87\x02\x54\x06\x81"
  "\x85\x02\x53\x04\x84\x06\x25\x32\x3c\x02\x13\x2e\x1d\x2a\x04\x3a"
  "\x02\x76\x26\x81\x8b\x02\x75\x24\x81\x8b\x02\x74\x22\x81\x8b\x02"
  "\x73\x20\x81\x8f\x02\x72\x1e\x81\x8d\x02\x71\x1c\x81\x8f\x02\x70"
  "\x1a\x81\x8d\x02\x6f\x18\x81\x8b\x02\x6e\x16\x81\x8b\x02\x6d\x14"
  "\x81\x8b\x02\x6c\x12\x81\x89\x02\x6b\x10\x81\x89\x02\x6a\x0e\x81"
  "\x89\x02\x69\x0c\x81\x89\x02\x68\x0a\x81\x89\x02\x67\x08\x81\x89"
  "\x02\x66\x06\x81\x87\x02\x65\x04\x85\x08\x25\x30\x3a\x02\x14\x2e"
  "\x24\x2a\x0d\x03\x19\x72\x74\x6c\x3a\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x3f\x3d\x04\x25"
  "\x03\x29\x72\x74\x6c\x3a\x63\x6f\x6e\x74\x61\x69\x6e\x73\x2d\x6e"
  "\x6f\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x61\x62\x6c\x65\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x73\x3f\x3e\x04\x34\x05\x7e\x12"
  "\x81\x87\x02\x7d\x10\x81\x87\x02\x7c\x0e\x81\x85\x02\x7b\x0c\x81"
  "\x85\x02\x7a\x0a\x81\x85\x02\x79\x08\x81\x85\x02\x78\x06\x81\x87"
  "\x02\x77\x04\x84\x06\x11\x23\x3f\x02\x15\x2e\x0d\x24\x2a\x03\x3d"
  "\x04\x25\x03\x3e\x04\x31\x03\x06\x8c\x01\x1e\x81\x8b\x02\x8b\x01"
  "\x1c\x81\x8b\x02\x8a\x01\x1a\x81\x87\x02\x89\x01\x18\x81\x85\x02"
  "\x88\x01\x16\x81\x8b\x02\x87\x01\x14\x81\x89\x02\x86\x01\x12\x81"
  "\x85\x02\x85\x01\x10\x81\x85\x02\x84\x01\x0e\x81\x87\x02\x83\x01"
  "\x0c\x81\x85\x02\x82\x01\x0a\x81\x89\x02\x81\x01\x08\x81\x85\x02"
  "\x80\x01\x06\x81\x85\x02\x7f\x04\x85\x08\x1d\x31\x31\x02\x16\x2e"
  "\x24\x2a\x0d\x03\x3d\x04\x25\x03\x1c\x72\x74\x6c\x3a\x73\x75\x62"
  "\x73\x74\x69\x74\x75\x74\x61\x62\x6c\x65\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x73\x25\x03\x3e\x04\x06\x99\x01\x1c\x81\x85\x02\x98"
  "\x01\x1a\x81\x85\x02\x97\x01\x18\x81\x87\x02\x96\x01\x16\x81\x89"
  "\x02\x95\x01\x14\x81\x85\x02\x94\x01\x12\x81\x85\x02\x93\x01\x10"
  "\x81\x85\x02\x92\x01\x0e\x81\x85\x02\x91\x01\x0c\x81\x85\x02\x90"
  "\x01\x0a\x81\x85\x02\x8f\x01\x08\x81\x83\x02\x8e\x01\x06\x81\x83"
  "\x02\x8d\x01\x04\x83\x04\x1b\x2f\x24\x02\x17\x12\x14\x15\x1d\x16"
  "\x17\x0f\x22\x23\x13\x0a\x03\x04\x03\x9b\x01\x06\x81\x83\x02\x9a"
  "\x01\x04\x83\x04\x05\x0e\x23\x02\x18\x2a\x2e\x1a\x0e\x1b\x1c\x09"
  "\x0a\x10\x1e\x19\x1f\x20\x11\x0d\x0b\x0c\x18\x13\x12\x1d\x16\x17"
  "\x0f\x13\x03\x04\x03\x19\x72\x74\x6c\x3a\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x22\x04"
  "\xa4\x01\x14\x81\x83\x02\xa3\x01\x12\x81\x85\x02\xa2\x01\x10\x81"
  "\x83\x02\xa1\x01\x0e\x81\x83\x02\xa0\x01\x0c\x81\x85\x02\x9f\x01"
  "\x0a\x81\x85\x02\x9e\x01\x08\x81\x85\x02\x9d\x01\x06\x81\x83\x02"
  "\x9c\x01\x04\x83\x04\x13\x23\x20\x02\x19\x2e\x2a\x04\x0e\x72\x74"
  "\x78\x2d\x73\x65\x74\x2f\x75\x6e\x69\x6f\x6e\x1f\x02\xa9\x01\x0c"
  "\x81\x89\x02\xa8\x01\x0a\x81\x89\x02\xa7\x01\x08\x81\x87\x02\xa6"
  "\x01\x06\x81\x87\x02\xa5\x01\x04\x84\x06\x0b\x14\x1e\x02\x1a\x2e"
  "\x2a\x04\x34\x04\x3b\x03\xaf\x01\x0e\x81\x85\x02\xae\x01\x0c\x81"
  "\x85\x02\xad\x01\x0a\x81\x87\x02\xac\x01\x08\x81\x85\x02\xab\x01"
  "\x06\x81\x85\x02\xaa\x01\x04\x84\x06\x0d\x18\x34\x1a\x2e\x2e\x34"
  "\x04\x1e\x04\x20\x04\x23\x04\x24\x04\x31\x04\x3f\x04\x3a\x04\x3c"
  "\x04\x39\x04\x38\x04\x37\x04\x35\x04\x33\x04\x32\x04\x30\x04\x2d"
  "\x04\x21\x04\x2b\x04\x2c\x04\x29\x04\x28\x04\x26\x04\x04\x04\x1a"
  "\x1f\x0f\x72\x74\x78\x2d\x73\x65\x74\x2f\x75\x6e\x69\x6f\x6e\x2a"
  "\x22\x3e\x25\x13\x72\x74\x6c\x3a\x73\x75\x62\x73\x74\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x18\x72\x74\x6c\x3a\x72\x65\x66\x65\x72"
  "\x73\x2d\x74\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3f\x19\x72"
  "\x74\x6c\x3a\x6d\x61\x74\x63\x68\x2d\x73\x75\x62\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x73\x3b\x14\x72\x74\x6c\x3a\x72\x65\x64"
  "\x75\x63\x65\x2d\x73\x75\x62\x70\x61\x72\x74\x73\x18\x72\x74\x6c"
  "\x3a\x61\x6c\x6c\x2d\x73\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x73\x3f\x19\x72\x74\x6c\x3a\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x2d\x63\x6f\x6e\x74\x61\x69\x6e\x73\x3f\x36\x1b\x72"
  "\x74\x6c\x3a\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x73\x75\x62\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x17\x72\x74\x6c\x3a\x6d\x61"
  "\x70\x2d\x73\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73"
  "\x2f\x3d\x20\x72\x74\x6c\x3a\x73\x74\x61\x63\x6b\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x3f\x20\x72\x74\x6c\x3a\x70\x73\x65\x75\x64\x6f\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x3f\x21\x72\x74\x6c\x3a\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x3f\x19\x72\x74\x6c\x3a\x76\x6f\x6c\x61\x74\x69\x6c\x65"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x1e\x72\x74\x6c"
  "\x3a\x6f\x62\x6a\x65\x63\x74\x2d\x76\x61\x6c\x75\x65\x64\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x27\x17\x72\x74\x6c\x3a"
  "\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x70\x72\x65\x66\x69"
  "\x78\x3f\x10\x72\x74\x6c\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f"
  "\x6e\x3f\x1a\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01"
  "\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
rtlexp_so_data_432af2e9cd46a0d8 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rtlexp_so_data_432af2e9cd46a0d8 [0]))), (sizeof (prog_rtlexp_so_data_432af2e9cd46a0d8)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("rtlexp.so", rtlexp_so_data_432af2e9cd46a0d8)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rtlexp.so", "d4f2ae8db6140bf7")
