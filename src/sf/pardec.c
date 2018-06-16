/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:06-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define TAG_1_9 3
#define ENVIRONMENT_LABEL_1_3 20
#define DEBUGGING_LABEL_1_2 19
#define EXECUTE_CACHE_1_12 11
#define EXECUTE_CACHE_1_11 13
#define EXECUTE_CACHE_1_10 15
#define EXECUTE_CACHE_1_6 17
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_1_4);
      goto declarations_parse_4;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declarations_parse_7)
DEFLABEL (declarations_parse_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_8])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_1_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_8 11
#define LABEL_2_9 13
#define LABEL_2_10 15
#define LABEL_2_11 17
#define LABEL_2_12 19
#define LABEL_2_13 21
#define LABEL_2_15 23
#define LABEL_2_16 25
#define LABEL_2_18 27
#define ENVIRONMENT_LABEL_2_3 39
#define DEBUGGING_LABEL_2_2 38
#define OBJECT_2_4 37
#define OBJECT_2_3 36
#define OBJECT_2_2 35
#define OBJECT_2_1 34
#define OBJECT_2_0 33
#define EXECUTE_CACHE_2_17 29
#define EXECUTE_CACHE_2_14 31
#define FREE_REFERENCES_LABEL_2_0 28
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd100;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd85;
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
      current_block = (Rpc - LABEL_2_4);
      goto merge_usual_integrations_19;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_13;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto loop_17;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_2_10);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_2_11);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_2_12);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_2_13);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_2_15);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_2_16);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_usual_integrations_31)
DEFLABEL (merge_usual_integrations_19)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_2_1]);
  (Rsp [2]) = (Wrd7.Obj);
  goto loop_17;

DEFLABEL (loop_32)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_2_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_34;
  (Wrd7.Obj) = (Rsp [1]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_2_0])))
    goto label_33;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (label_33)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (Wrd8.Obj) = (current_block [OBJECT_2_3]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  if (! ((Wrd6.uLng) == 1))
    goto label_55;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_54)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_53;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_52)
  if ((Wrd23.Obj) == (current_block [OBJECT_2_3]))
    goto label_39;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_38;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_37)
  (Wrd43.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Rsp [2]) = (Wrd40.Obj);
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_36;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [0]) = (Wrd44.Obj);
  goto loop_17;

DEFLABEL (label_36)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 1);

DEFLABEL (label_24)
  (Wrd44.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_23)
  (Wrd31.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  if ((Wrd56.Obj) == (current_block [OBJECT_2_0]))
    goto label_47;
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_46;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [0]);

DEFLABEL (label_45)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_44;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [1]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_43)
  (Wrd74.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd85.Obj) = Rvl;

DEFLABEL (label_42)
  (Rsp [1]) = (Wrd85.Obj);
  (Wrd95.Obj) = (Rsp [0]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd96.uLng) == 1))
    goto label_41;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd92.Obj) = ((Wrd94.pObj) [1]);

DEFLABEL (label_40)
  (Rsp [0]) = (Wrd92.Obj);
  goto loop_17;

DEFLABEL (label_41)
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 1);

DEFLABEL (label_29)
  (Wrd92.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_44)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_25)
  (Wrd58.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd78.Obj) = (Rsp [1]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 1))
    goto label_51;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);

DEFLABEL (label_50)
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_49;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd85.Obj) = ((Wrd86.pObj) [1]);

DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  goto label_42;

DEFLABEL (label_49)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 1);

DEFLABEL (label_28)
  (Wrd85.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_27)
  (Wrd75.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_22)
  (Wrd23.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_21)
  (Wrd14.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
pardec_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto declarations_make_null_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declarations_make_null_3)
DEFLABEL (declarations_make_null_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

INVOKE_INTERFACE_TARGET_1
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
pardec_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto declarations_original_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declarations_original_3)
DEFLABEL (declarations_original_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
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
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_9 11
#define LABEL_5_10 13
#define LABEL_5_11 15
#define LABEL_5_12 17
#define LABEL_5_13 19
#define LABEL_5_14 21
#define LABEL_5_15 23
#define LABEL_5_16 25
#define LABEL_5_17 27
#define LABEL_5_8 29
#define LABEL_5_19 31
#define ENVIRONMENT_LABEL_5_3 52
#define DEBUGGING_LABEL_5_2 51
#define OBJECT_5_11 50
#define OBJECT_5_10 49
#define OBJECT_5_9 48
#define OBJECT_5_8 47
#define OBJECT_5_7 46
#define OBJECT_5_6 45
#define OBJECT_5_5 44
#define OBJECT_5_4 43
#define OBJECT_5_3 42
#define OBJECT_5_2 41
#define OBJECT_5_1 40
#define OBJECT_5_0 39
#define EXECUTE_CACHE_5_18 33
#define FREE_REFERENCE_5_2 36
#define FREE_REFERENCE_5_1 37
#define FREE_REFERENCE_5_0 38
#define FREE_REFERENCES_LABEL_5_0 32
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd78;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd77;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd102;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd96;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd120;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd128;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd57;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_5_4);
      goto declarations_bind_19;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto loop_17;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_5_12);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_5_13);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_5_14);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_5_15);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_5_16);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_5_17);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_5_19);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declarations_bind_33)
DEFLABEL (declarations_bind_19)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_36;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_36;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_17;

DEFLABEL (label_36)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (loop_34)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_5_7);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_5_2])))
    goto label_37;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_59;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_58)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_57;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_57;
  (Wrd21.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_56)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_55;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd43.Lng))))
    goto label_55;
  (Wrd37.Obj) = ((Wrd41.pObj) [2]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_54)
  (Wrd51.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd64.Obj) = (Rsp [4]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 10))
    goto label_53;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd63.Lng))))
    goto label_53;
  (Wrd57.Obj) = ((Wrd61.pObj) [5]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_52)
  (Wrd71.Obj) = (Rsp [0]);
  if ((Wrd71.Obj) == (current_block [OBJECT_5_6]))
    goto label_49;
  if ((Wrd71.Obj) == (current_block [OBJECT_5_7]))
    goto label_46;
  if ((Wrd71.Obj) == (current_block [OBJECT_5_8]))
    goto label_40;
  (Wrd77.Obj) = (current_block [OBJECT_5_10]);
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd87.Obj) = (Rsp [6]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 10))
    goto label_39;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd86.Lng))))
    goto label_39;
  (Wrd78.Obj) = ((Wrd84.pObj) [5]);

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (label_39)
  (Wrd89.Obj) = (Rsp [6]);
  (Wrd90.Obj) = (current_block [OBJECT_5_5]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_26)
  (Wrd78.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd100.Obj) = ((Wrd97.pObj) [0]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if ((Wrd101.uLng) == 50)
    goto label_45;
  Wrd96 = Wrd100;

DEFLABEL (label_44)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd96.Obj);

DEFLABEL (label_43)
  (Wrd111.Obj) = (Rsp [4]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 10))
    goto label_42;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd109.Obj) = ((Wrd108.pObj) [0]);
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd110.Lng))))
    goto label_42;
  (Wrd102.Obj) = ((Wrd108.pObj) [4]);

DEFLABEL (label_41)
  (Rsp [4]) = (Wrd102.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_42)
  (Wrd113.Obj) = (Rsp [4]);
  (Wrd114.Obj) = (current_block [OBJECT_5_9]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_28)
  (Wrd102.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_15])), (Wrd97.pObj));

DEFLABEL (label_27)
  (Wrd96.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd124.Obj) = ((Wrd121.pObj) [0]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if ((Wrd125.uLng) == 50)
    goto label_48;
  Wrd120 = Wrd124;

DEFLABEL (label_47)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd120.Obj);
  goto label_43;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_14])), (Wrd121.pObj));

DEFLABEL (label_29)
  (Wrd120.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd129.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd132.Obj) = ((Wrd129.pObj) [0]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if ((Wrd133.uLng) == 50)
    goto label_51;
  Wrd128 = Wrd132;

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd128.Obj);
  goto label_43;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_13])), (Wrd129.pObj));

DEFLABEL (label_30)
  (Wrd128.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd66.Obj) = (Rsp [4]);
  (Wrd67.Obj) = (current_block [OBJECT_5_5]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_5_4]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (current_block [OBJECT_5_0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_61;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_60)
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_17;

DEFLABEL (label_61)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_11]), 1);

DEFLABEL (label_31)
  (Wrd6.Obj) = Rvl;
  goto label_60;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_5 7
#define LABEL_6_10 9
#define LABEL_6_7 11
#define TAG_6_8 4
#define LABEL_6_13 13
#define LABEL_6_14 15
#define LABEL_6_12 17
#define LABEL_6_15 19
#define LABEL_6_16 21
#define LABEL_6_17 23
#define ENVIRONMENT_LABEL_6_3 37
#define DEBUGGING_LABEL_6_2 36
#define OBJECT_6_4 35
#define OBJECT_6_3 34
#define OBJECT_6_2 33
#define OBJECT_6_1 32
#define OBJECT_6_0 31
#define EXECUTE_CACHE_6_18 25
#define EXECUTE_CACHE_6_11 27
#define EXECUTE_CACHE_6_9 29
#define FREE_REFERENCES_LABEL_6_0 24
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd47;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd11;
  machine_word Wrd46;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_6_4);
      goto declarations_map_11;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_6_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_6_7);
      goto lambda_21;

    case 5:
      current_block = (Rpc - LABEL_6_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_6_15);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_6_16);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_6_17);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declarations_map_20)
DEFLABEL (declarations_map_11)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_25;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_25;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_24)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_7])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  (Wrd29.Obj) = (Rsp [4]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [2]) = Rvl;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_23;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_23;
  (Wrd6.Obj) = ((Wrd12.pObj) [2]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (label_23)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_6_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_14)
  (Wrd6.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_6_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_6_7);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_35;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_35;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_34)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_33;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_32)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_31;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_31;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_30)
  (Wrd40.Obj) = (Rsp [0]);
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_26)
  (Wrd46.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_29)
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd56.Obj) = (Rsp [3]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_28;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd55.Lng))))
    goto label_28;
  (Wrd47.Obj) = ((Wrd53.pObj) [5]);

DEFLABEL (label_27)
  (Rsp [3]) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (label_28)
  (Wrd58.Obj) = (Rsp [3]);
  (Wrd59.Obj) = (current_block [OBJECT_6_4]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_18)
  (Wrd47.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_6_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_6_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_6_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (Wrd46.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define ENVIRONMENT_LABEL_7_3 15
#define DEBUGGING_LABEL_7_2 14
#define OBJECT_7_0 13
#define EXECUTE_CACHE_7_7 9
#define FREE_REFERENCE_7_0 12
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_7_4);
      goto declarations_knownP_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declarations_knownP_6)
DEFLABEL (declarations_knownP_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_8;
  Wrd15 = Wrd19;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_6])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 6
#define DEBUGGING_LABEL_8_2 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8_4);
      goto make_declaration_set_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_declaration_set_3)
DEFLABEL (make_declaration_set_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (current_block [OBJECT_8_0]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto declaration_set_original_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declaration_set_original_3)
DEFLABEL (declaration_set_original_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto declaration_set_declarations_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declaration_set_declarations_3)
DEFLABEL (declaration_set_declarations_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

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

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define ENVIRONMENT_LABEL_11_3 16
#define DEBUGGING_LABEL_11_2 15
#define OBJECT_11_4 14
#define OBJECT_11_3 13
#define OBJECT_11_2 12
#define OBJECT_11_1 11
#define OBJECT_11_0 10
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd46;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_11_4);
      goto declaration_setP_4;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declaration_setP_10)
DEFLABEL (declaration_setP_4)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_11_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_11_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_11_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 6
#define DEBUGGING_LABEL_12_2 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto make_declaration_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_declaration_3)
DEFLABEL (make_declaration_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (current_block [OBJECT_12_0]);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto declaration_operation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declaration_operation_3)
DEFLABEL (declaration_operation_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

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

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto declaration_variable_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declaration_variable_3)
DEFLABEL (declaration_variable_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

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

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 7
#define DEBUGGING_LABEL_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto declaration_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declaration_value_3)
DEFLABEL (declaration_value_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

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

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 7
#define DEBUGGING_LABEL_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto declaration_binding_level_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declaration_binding_level_3)
DEFLABEL (declaration_binding_level_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

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

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define ENVIRONMENT_LABEL_17_3 16
#define DEBUGGING_LABEL_17_2 15
#define OBJECT_17_4 14
#define OBJECT_17_3 13
#define OBJECT_17_2 12
#define OBJECT_17_1 11
#define OBJECT_17_0 10
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd46;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_17_4);
      goto declarationP_4;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declarationP_10)
DEFLABEL (declarationP_4)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_17_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_17_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_17_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_8 5
#define TAG_18_9 1
#define LABEL_18_5 7
#define TAG_18_6 2
#define ENVIRONMENT_LABEL_18_3 17
#define DEBUGGING_LABEL_18_2 16
#define OBJECT_18_0 15
#define EXECUTE_CACHE_18_11 9
#define EXECUTE_CACHE_18_10 11
#define EXECUTE_CACHE_18_7 13
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd19;
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
      goto make_declarations_3;

    case 1:
      current_block = (Rpc - LABEL_18_8);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_declarations_6)
DEFLABEL (make_declarations_3)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_18_0]))
    goto label_9;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_8])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (label_9)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_18_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_6 5
#define LABEL_19_7 7
#define LABEL_19_5 9
#define LABEL_19_9 11
#define LABEL_19_10 13
#define ENVIRONMENT_LABEL_19_3 23
#define DEBUGGING_LABEL_19_2 22
#define OBJECT_19_2 21
#define OBJECT_19_1 20
#define OBJECT_19_0 19
#define EXECUTE_CACHE_19_8 15
#define FREE_REFERENCE_19_0 18
#define FREE_REFERENCES_LABEL_19_0 14
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_19_4);
      goto parse_declaration_5;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_19_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_declaration_12)
DEFLABEL (parse_declaration_5)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_21;
  Wrd8 = Wrd12;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_19;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = (current_block [OBJECT_19_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_15;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_15)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_10)
  (Wrd16.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_7 5
#define LABEL_20_6 7
#define LABEL_20_9 9
#define LABEL_20_10 11
#define LABEL_20_5 13
#define ENVIRONMENT_LABEL_20_3 23
#define DEBUGGING_LABEL_20_2 22
#define OBJECT_20_0 21
#define EXECUTE_CACHE_20_8 15
#define FREE_REFERENCE_20_0 18
#define FREE_ASSIGNMENT_20_0 20
#define FREE_REFERENCES_LABEL_20_0 14
#define NUMBER_OF_LINKER_SECTIONS_20_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_20_4);
      goto define_declaration_5;

    case 1:
      current_block = (Rpc - LABEL_20_7);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_declaration_11)
DEFLABEL (define_declaration_5)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_21;
  Wrd11 = Wrd15;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd16.uLng) == 1)
    goto label_12;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 2);

DEFLABEL (label_12)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  ((Wrd13.pObj) [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_13)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_19;
  Wrd18 = Wrd22;

DEFLABEL (label_18)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_0]));
  (Wrd40.Obj) = ((Wrd32.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd32.pObj) [0]) = (Wrd29.Obj);

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto label_13;

DEFLABEL (label_17)
  if ((Wrd40.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_10])), (Wrd32.pObj), (Wrd29.Obj));

DEFLABEL (label_9)
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_9])), (Wrd19.pObj));

DEFLABEL (label_8)
  (Wrd18.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_7])), (Wrd12.pObj));

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_20;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 14
#define DEBUGGING_LABEL_21_2 13
#define OBJECT_21_1 12
#define OBJECT_21_0 11
#define EXECUTE_CACHE_21_6 7
#define FREE_REFERENCE_21_0 10
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      goto known_declarationP_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (known_declarationP_5)
DEFLABEL (known_declarationP_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_21_0])))
    goto label_6;
  Rvl = (current_block [OBJECT_21_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_8;
  Wrd9 = Wrd13;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
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
pardec_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto guarantee_known_declaration_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_known_declaration_4)
DEFLABEL (guarantee_known_declaration_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_22_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 11
#define DEBUGGING_LABEL_23_2 10
#define OBJECT_23_2 9
#define OBJECT_23_1 8
#define OBJECT_23_0 7
#define EXECUTE_CACHE_23_5 5
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto error_not_known_declaration_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_known_declaration_5)
DEFLABEL (error_not_known_declaration_2)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_23_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_23_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_5 7
#define LABEL_24_15 9
#define LABEL_24_16 11
#define LABEL_24_8 13
#define LABEL_24_9 15
#define TAG_24_10 6
#define LABEL_24_11 17
#define LABEL_24_20 19
#define LABEL_24_21 21
#define LABEL_24_12 23
#define TAG_24_13 10
#define LABEL_24_14 25
#define LABEL_24_23 27
#define LABEL_24_26 29
#define LABEL_24_27 31
#define LABEL_24_31 33
#define LABEL_24_17 35
#define TAG_24_18 16
#define LABEL_24_19 37
#define LABEL_24_22 39
#define LABEL_24_37 41
#define LABEL_24_41 43
#define LABEL_24_24 45
#define TAG_24_25 21
#define LABEL_24_28 47
#define TAG_24_29 22
#define LABEL_24_44 49
#define LABEL_24_46 51
#define LABEL_24_32 53
#define LABEL_24_34 55
#define TAG_24_35 26
#define LABEL_24_40 57
#define LABEL_24_49 59
#define LABEL_24_50 61
#define LABEL_24_51 63
#define LABEL_24_52 65
#define LABEL_24_53 67
#define LABEL_24_54 69
#define LABEL_24_38 71
#define TAG_24_39 34
#define LABEL_24_43 73
#define LABEL_24_55 75
#define LABEL_24_56 77
#define LABEL_24_48 79
#define ENVIRONMENT_LABEL_24_3 113
#define DEBUGGING_LABEL_24_2 112
#define OBJECT_24_10 111
#define OBJECT_24_9 110
#define OBJECT_24_8 109
#define OBJECT_24_7 108
#define OBJECT_24_6 107
#define OBJECT_24_5 106
#define OBJECT_24_4 105
#define OBJECT_24_3 104
#define OBJECT_24_2 103
#define OBJECT_24_1 102
#define OBJECT_24_0 101
#define EXECUTE_CACHE_24_47 81
#define EXECUTE_CACHE_24_45 83
#define EXECUTE_CACHE_24_42 85
#define EXECUTE_CACHE_24_36 87
#define EXECUTE_CACHE_24_33 89
#define EXECUTE_CACHE_24_30 91
#define EXECUTE_CACHE_24_7 93
#define FREE_REFERENCE_24_4 96
#define FREE_REFERENCE_24_3 97
#define FREE_REFERENCE_24_2 98
#define FREE_REFERENCE_24_1 99
#define FREE_REFERENCE_24_0 100
#define FREE_REFERENCES_LABEL_24_0 80
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd50;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_24_4);
      goto lambda_53;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_55;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_15);
      goto label_56;

    case 4:
      current_block = (Rpc - LABEL_24_16);
      goto label_57;

    case 5:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_30;

    case 6:
      current_block = (Rpc - LABEL_24_9);
      goto lambda_29;

    case 7:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_33;

    case 8:
      current_block = (Rpc - LABEL_24_20);
      goto label_58;

    case 9:
      current_block = (Rpc - LABEL_24_21);
      goto label_59;

    case 10:
      current_block = (Rpc - LABEL_24_12);
      goto lambda_75;

    case 11:
      current_block = (Rpc - LABEL_24_14);
      goto continuation_34;

    case 12:
      current_block = (Rpc - LABEL_24_23);
      goto lambda_20;

    case 13:
      current_block = (Rpc - LABEL_24_26);
      goto loop_43;

    case 14:
      current_block = (Rpc - LABEL_24_27);
      goto label_61;

    case 15:
      current_block = (Rpc - LABEL_24_31);
      goto label_60;

    case 16:
      current_block = (Rpc - LABEL_24_17);
      goto lambda_76;

    case 17:
      current_block = (Rpc - LABEL_24_19);
      goto continuation_37;

    case 18:
      current_block = (Rpc - LABEL_24_22);
      goto continuation_31;

    case 19:
      current_block = (Rpc - LABEL_24_37);
      goto deletion_loop_16;

    case 20:
      current_block = (Rpc - LABEL_24_41);
      goto label_62;

    case 21:
      current_block = (Rpc - LABEL_24_24);
      goto lambda_78;

    case 22:
      current_block = (Rpc - LABEL_24_28);
      goto lambda_80;

    case 23:
      current_block = (Rpc - LABEL_24_44);
      goto label_63;

    case 24:
      current_block = (Rpc - LABEL_24_46);
      goto continuation_25;

    case 25:
      current_block = (Rpc - LABEL_24_32);
      goto continuation_21;

    case 26:
      current_block = (Rpc - LABEL_24_34);
      goto lambda_81;

    case 27:
      current_block = (Rpc - LABEL_24_40);
      goto continuation_5;

    case 28:
      current_block = (Rpc - LABEL_24_49);
      goto label_66;

    case 29:
      current_block = (Rpc - LABEL_24_50);
      goto label_67;

    case 30:
      current_block = (Rpc - LABEL_24_51);
      goto label_68;

    case 31:
      current_block = (Rpc - LABEL_24_52);
      goto label_69;

    case 32:
      current_block = (Rpc - LABEL_24_53);
      goto label_64;

    case 33:
      current_block = (Rpc - LABEL_24_54);
      goto label_65;

    case 34:
      current_block = (Rpc - LABEL_24_38);
      goto lambda_83;

    case 35:
      current_block = (Rpc - LABEL_24_43);
      goto continuation_48;

    case 36:
      current_block = (Rpc - LABEL_24_55);
      goto label_70;

    case 37:
      current_block = (Rpc - LABEL_24_56);
      goto label_71;

    case 38:
      current_block = (Rpc - LABEL_24_48);
      goto continuation_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_73)
DEFLABEL (lambda_53)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_93;
  Wrd17 = Wrd21;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_9])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_12])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  ((Wrd20.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.pObj) = (& (Rsp [5]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_91;
  Wrd29 = Wrd33;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_2]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_89;
  Wrd35 = Wrd39;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd35.Obj);
  goto lambda_20;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_24_14);
  (* (--Rsp)) = Rvl;
  goto pop_return;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_24_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [3]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_87;
  Wrd11 = Wrd15;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_4]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_85;
  Wrd17 = Wrd21;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd17.Obj);
  goto lambda_20;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_24_19);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_34])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  goto pop_return;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_21])), (Wrd18.pObj));

DEFLABEL (label_59)
  (Wrd17.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_20])), (Wrd12.pObj));

DEFLABEL (label_58)
  (Wrd11.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_16])), (Wrd36.pObj));

DEFLABEL (label_57)
  (Wrd35.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_15])), (Wrd30.pObj));

DEFLABEL (label_56)
  (Wrd29.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_6])), (Wrd18.pObj));

DEFLABEL (label_55)
  (Wrd17.Obj) = Rvl;
  goto label_92;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_43;

DEFLABEL (lambda_74)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_24_9);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_17])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd20.pObj) [4]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [5]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_75)
  CLOSURE_HEADER (LABEL_24_12);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_29;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_24_22);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_36]));

DEFLABEL (lambda_77)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_24_23);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  if ((Wrd7.Obj) == (Wrd8.Obj))
    goto label_94;
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  goto deletion_loop_16;

DEFLABEL (label_94)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_24])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (loop_79)
DEFLABEL (loop_43)
  INTERRUPT_CHECK (26, LABEL_24_26);
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_99;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_99;
  (Wrd7.Obj) = ((Wrd43.pObj) [2]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_96;

DEFLABEL (label_95)
  (Wrd10.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_28])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);
  (Rsp [4]) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);
  (Rsp [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_30]));

DEFLABEL (label_96)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_98;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_98;
  (Wrd24.Obj) = ((Wrd30.pObj) [2]);

DEFLABEL (label_97)
  (Rsp [0]) = (Wrd24.Obj);
  goto loop_43;

DEFLABEL (label_98)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_24_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_31]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_60)
  (Wrd24.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_99)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (current_block [OBJECT_24_2]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_27]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_61)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  goto label_96;

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_24_17);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_33]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_24_32);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_46]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_24_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_47]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_24_46);
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [4]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  ((Wrd49.pObj) [0]) = (Wrd43.Obj);

DEFLABEL (label_100)
  Rsp = (& (Rsp [1]));
  Rvl = (current_block [OBJECT_24_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd21.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [5]);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd18.pObj) = (& (Rhp [-4]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd18.pObj)));
  (Wrd32.Obj) = ((Wrd23.pObj) [3]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  ((Wrd33.pObj) [0]) = (Wrd27.Obj);
  goto label_100;

DEFLABEL (deletion_loop_82)
DEFLABEL (deletion_loop_16)
  INTERRUPT_CHECK (26, LABEL_24_37);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_24_0])))
    goto label_102;
  (Wrd22.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd23.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_38])));
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

DEFLABEL (label_102)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_40]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_117;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_116)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_42]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_24_40);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_107;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_106;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_105)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_104;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_103)
  (Rsp [1]) = (Wrd16.Obj);
  goto deletion_loop_16;

DEFLABEL (label_104)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_54]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_8]), 1);

DEFLABEL (label_65)
  (Wrd16.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_53]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_8]), 1);

DEFLABEL (label_64)
  (Wrd7.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_107)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_115;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_114)
  (Wrd37.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_113;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_112)
  (Wrd50.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Rsp [3]) = (Wrd47.Obj);
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_111;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_110)
  (Rsp [0]) = (Wrd51.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_109;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_108)
  (Rsp [1]) = (Wrd60.Obj);
  goto deletion_loop_16;

DEFLABEL (label_109)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_52]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_8]), 1);

DEFLABEL (label_69)
  (Wrd60.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_51]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_8]), 1);

DEFLABEL (label_68)
  (Wrd51.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_50]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_4]), 1);

DEFLABEL (label_67)
  (Wrd38.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_49]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_4]), 1);

DEFLABEL (label_66)
  (Wrd25.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_41]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_4]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_116;

DEFLABEL (lambda_78)
  CLOSURE_HEADER (LABEL_24_24);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto pop_return;

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_24_28);

DEFLABEL (lambda_50)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_123;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_123;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_122)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_45]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_24_43);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_121;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_121;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_120)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_119;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_119;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_118)
  (Rsp [2]) = (Wrd21.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_24_6]);
  (Rsp [3]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_47]));

DEFLABEL (label_119)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_24_10]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_56]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_71)
  (Wrd21.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_24_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_55]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_24_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_44]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_122;

DEFLABEL (lambda_81)
  CLOSURE_HEADER (LABEL_24_34);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_29;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_24_48);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_36]));

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_24_38);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_8 7
#define ENVIRONMENT_LABEL_25_3 19
#define DEBUGGING_LABEL_25_2 18
#define OBJECT_25_2 17
#define OBJECT_25_1 16
#define OBJECT_25_0 15
#define EXECUTE_CACHE_25_10 9
#define EXECUTE_CACHE_25_9 11
#define EXECUTE_CACHE_25_7 13
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_25_4);
      goto define_integration_declaration_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_integration_declaration_5)
DEFLABEL (define_integration_declaration_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_8);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_25_1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_25_2]);
  (Rsp [3]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define TAG_26_6 1
#define LABEL_26_7 7
#define LABEL_26_8 9
#define LABEL_26_16 11
#define LABEL_26_10 13
#define TAG_26_11 5
#define LABEL_26_12 15
#define LABEL_26_14 17
#define LABEL_26_20 19
#define LABEL_26_24 21
#define LABEL_26_17 23
#define TAG_26_18 10
#define LABEL_26_27 25
#define LABEL_26_28 27
#define LABEL_26_29 29
#define LABEL_26_22 31
#define LABEL_26_31 33
#define LABEL_26_33 35
#define LABEL_26_36 37
#define LABEL_26_37 39
#define LABEL_26_34 41
#define LABEL_26_38 43
#define LABEL_26_39 45
#define LABEL_26_25 47
#define ENVIRONMENT_LABEL_26_3 91
#define DEBUGGING_LABEL_26_2 90
#define OBJECT_26_11 89
#define OBJECT_26_10 88
#define OBJECT_26_9 87
#define OBJECT_26_8 86
#define OBJECT_26_7 85
#define OBJECT_26_6 84
#define OBJECT_26_5 83
#define OBJECT_26_4 82
#define OBJECT_26_3 81
#define OBJECT_26_2 80
#define OBJECT_26_1 79
#define OBJECT_26_0 78
#define EXECUTE_CACHE_26_42 49
#define EXECUTE_CACHE_26_41 51
#define EXECUTE_CACHE_26_40 53
#define EXECUTE_CACHE_26_35 55
#define EXECUTE_CACHE_26_32 57
#define EXECUTE_CACHE_26_30 59
#define EXECUTE_CACHE_26_26 61
#define EXECUTE_CACHE_26_23 63
#define EXECUTE_CACHE_26_21 65
#define EXECUTE_CACHE_26_19 67
#define EXECUTE_CACHE_26_15 69
#define EXECUTE_CACHE_26_13 71
#define EXECUTE_CACHE_26_9 73
#define FREE_REFERENCE_26_1 76
#define FREE_REFERENCE_26_0 77
#define FREE_REFERENCES_LABEL_26_0 48
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd56;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd51;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_26_4);
      goto lambda_26;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto lambda_36;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_25;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto lambda_24;

    case 4:
      current_block = (Rpc - LABEL_26_16);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_26_10);
      goto lambda_37;

    case 6:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_18;

    case 7:
      current_block = (Rpc - LABEL_26_14);
      goto continuation_20;

    case 8:
      current_block = (Rpc - LABEL_26_20);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_26_24);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_26_17);
      goto lambda_39;

    case 11:
      current_block = (Rpc - LABEL_26_27);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_26_28);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_26_29);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_26_22);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_26_31);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_26_33);
      goto continuation_13;

    case 17:
      current_block = (Rpc - LABEL_26_36);
      goto continuation_7;

    case 18:
      current_block = (Rpc - LABEL_26_37);
      goto continuation_10;

    case 19:
      current_block = (Rpc - LABEL_26_34);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_26_38);
      goto label_32;

    case 21:
      current_block = (Rpc - LABEL_26_39);
      goto label_33;

    case 22:
      current_block = (Rpc - LABEL_26_25);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_35)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_26_5);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_10])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_38)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_26_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_15]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_26_14);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_40;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_23]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26_22);
  (Wrd10.Obj) = (current_block [OBJECT_26_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_42;
  Wrd12 = Wrd16;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_21]));

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_20])), (Wrd13.pObj));

DEFLABEL (label_28)
  (Wrd12.Obj) = Rvl;
  goto label_41;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_26_10);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_43)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_17])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_19]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_16);
  goto label_43;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_26_17);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_64;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_64;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_63)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_62;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_62;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_61)
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_60;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd45.Lng))))
    goto label_60;
  (Wrd39.Obj) = ((Wrd43.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_59)
  (Wrd54.Obj) = (Rsp [0]);
  if ((Wrd54.Obj) == (current_block [OBJECT_26_4]))
    goto label_58;

DEFLABEL (label_57)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_31]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_32]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_26_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_35]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_26_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_56;
  Wrd6 = Wrd10;

DEFLABEL (label_55)
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_37]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_36]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_26_7]);
  (Wrd51.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd51.Lng))))
    goto label_54;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd48.Obj));
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.Obj) == (Wrd26.Obj))
    goto label_53;

DEFLABEL (label_52)
  (Wrd27.Obj) = (current_block [OBJECT_26_9]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd37.Lng)))
    goto label_45;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_8]), 2);

DEFLABEL (label_45)
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd27.Obj));
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd31.Obj) == (Wrd33.Obj))
    goto label_47;
  (Wrd29.Obj) = (current_block [OBJECT_26_11]);
  goto label_46;

DEFLABEL (label_47)
  (Wrd29.Obj) = (current_block [OBJECT_26_10]);

DEFLABEL (label_46)
DEFLABEL (label_51)
  Rsp = (& (Rsp [3]));
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;

DEFLABEL (label_49)
  (Wrd42.Obj) = (current_block [OBJECT_26_10]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [9]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_41]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_26_37);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_48)
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_40]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_26_33);
  (Wrd10.Obj) = (current_block [OBJECT_26_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd40.Obj) = (Rsp [5]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd40.Obj);
  goto label_48;

DEFLABEL (label_53)
  Rsp = (& (Rsp [2]));
  goto label_49;

DEFLABEL (label_54)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_39]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_8]), 2);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_38])), (Wrd7.pObj));

DEFLABEL (label_32)
  (Wrd6.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_24]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_30]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_25]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_26]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_26_25);
  (Rsp [4]) = Rvl;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_42]));

DEFLABEL (label_60)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.Obj) = (current_block [OBJECT_26_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_29]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_26_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_28]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_26_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_27]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_26_36);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  goto label_49;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define LABEL_27_8 9
#define LABEL_27_9 11
#define TAG_27_10 4
#define LABEL_27_19 13
#define LABEL_27_20 15
#define LABEL_27_12 17
#define TAG_27_13 7
#define LABEL_27_15 19
#define TAG_27_16 8
#define LABEL_27_23 21
#define LABEL_27_21 23
#define LABEL_27_17 25
#define LABEL_27_25 27
#define LABEL_27_30 29
#define LABEL_27_28 31
#define LABEL_27_32 33
#define LABEL_27_34 35
#define LABEL_27_31 37
#define ENVIRONMENT_LABEL_27_3 67
#define DEBUGGING_LABEL_27_2 66
#define OBJECT_27_4 65
#define OBJECT_27_3 64
#define OBJECT_27_2 63
#define OBJECT_27_1 62
#define OBJECT_27_0 61
#define EXECUTE_CACHE_27_33 39
#define EXECUTE_CACHE_27_29 41
#define EXECUTE_CACHE_27_27 43
#define EXECUTE_CACHE_27_26 45
#define EXECUTE_CACHE_27_24 47
#define EXECUTE_CACHE_27_22 49
#define EXECUTE_CACHE_27_18 51
#define EXECUTE_CACHE_27_14 53
#define EXECUTE_CACHE_27_11 55
#define EXECUTE_CACHE_27_6 57
#define FREE_REFERENCE_27_0 60
#define FREE_REFERENCES_LABEL_27_0 38
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_27_4);
      goto operations__external_20;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_16;

    case 3:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_15;

    case 4:
      current_block = (Rpc - LABEL_27_9);
      goto lambda_28;

    case 5:
      current_block = (Rpc - LABEL_27_19);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_27_20);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_27_12);
      goto lambda_29;

    case 8:
      current_block = (Rpc - LABEL_27_15);
      goto lambda_30;

    case 9:
      current_block = (Rpc - LABEL_27_23);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_27_21);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_27_17);
      goto lambda_12;

    case 12:
      current_block = (Rpc - LABEL_27_25);
      goto continuation_2;

    case 13:
      current_block = (Rpc - LABEL_27_30);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_27_28);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_27_32);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_27_34);
      goto label_25;

    case 17:
      current_block = (Rpc - LABEL_27_31);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operations__external_27)
DEFLABEL (operations__external_20)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_9])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  ((Wrd15.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_27_8);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_14]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_12])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_27_9);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_15])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (Rsp [4]) = (Wrd45.Obj);
  (Wrd48.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [2]) = (Wrd48.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_18]));

DEFLABEL (label_32)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd18.uLng) == 1)
    goto label_39;

DEFLABEL (label_38)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_23]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_27_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd11.Obj) = (current_block [OBJECT_27_2]);
  (Rsp [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_27]));

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_29]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_27_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_33]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_27_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_36;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd25.Lng))))
    goto label_36;
  (Wrd6.Obj) = ((Wrd23.pObj) [3]);

DEFLABEL (label_35)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_34)
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd28.Obj) = (Rsp [5]);
  (Wrd29.Obj) = (current_block [OBJECT_27_3]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_34]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 2);

DEFLABEL (label_25)
  (Wrd6.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd6.Obj) = (Rsp [5]);
  goto label_35;

DEFLABEL (label_39)
  if (! ((Wrd18.uLng) == 1))
    goto label_43;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_42)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_41;
  Wrd33 = Wrd37;

DEFLABEL (label_40)
  (Wrd39.Obj) = (* (Rsp++));
  if (! ((Wrd33.Obj) == (Wrd39.Obj)))
    goto label_38;
  (Wrd40.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_27_21);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto lambda_3;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_20])), (Wrd34.pObj));

DEFLABEL (label_23)
  (Wrd33.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_27_31);
  (Wrd6.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_27_12);

DEFLABEL (lambda_17)
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

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_27_15);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_26]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_25);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_45;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_45;
  (Wrd5.Obj) = ((Wrd15.pObj) [3]);

DEFLABEL (label_44)
  (Wrd29.Obj) = (* (Rsp++));
  (Wrd36.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [4]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd32.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd32.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_27_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_30]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 2);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_44;

DEFLABEL (lambda_31)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_27_17);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define TAG_28_7 2
#define LABEL_28_9 9
#define ENVIRONMENT_LABEL_28_3 22
#define DEBUGGING_LABEL_28_2 21
#define OBJECT_28_1 20
#define OBJECT_28_0 19
#define EXECUTE_CACHE_28_12 11
#define EXECUTE_CACHE_28_11 13
#define EXECUTE_CACHE_28_10 15
#define EXECUTE_CACHE_28_8 17
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_28_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_28_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_6])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_5);
  Rvl = (current_block [OBJECT_28_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_28_6);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

DEFLABEL (label_9)
  (Wrd9.Obj) = (current_block [OBJECT_28_1]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define LABEL_29_7 9
#define LABEL_29_12 11
#define LABEL_29_14 13
#define LABEL_29_10 15
#define LABEL_29_15 17
#define ENVIRONMENT_LABEL_29_3 35
#define DEBUGGING_LABEL_29_2 34
#define OBJECT_29_6 33
#define OBJECT_29_5 32
#define OBJECT_29_4 31
#define OBJECT_29_3 30
#define OBJECT_29_2 29
#define OBJECT_29_1 28
#define OBJECT_29_0 27
#define EXECUTE_CACHE_29_13 19
#define EXECUTE_CACHE_29_11 21
#define EXECUTE_CACHE_29_9 23
#define EXECUTE_CACHE_29_8 25
#define FREE_REFERENCES_LABEL_29_0 18
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_29_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto loop_12;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_29_12);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_29_14);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_29_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_29_15);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_21)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_12;

DEFLABEL (loop_22)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_29_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_23;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd9.Obj) = (current_block [OBJECT_29_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_29_4]);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (label_23)
  if (! ((Wrd6.uLng) == 1))
    goto label_30;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_29)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_29_12);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_25;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_24)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [3]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_12;

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_6]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_29_5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_29_10);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_28;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_12;

DEFLABEL (label_28)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_6]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_7 7
#define TAG_30_8 2
#define LABEL_30_11 9
#define LABEL_30_10 11
#define LABEL_30_13 13
#define LABEL_30_14 15
#define ENVIRONMENT_LABEL_30_3 36
#define DEBUGGING_LABEL_30_2 35
#define OBJECT_30_5 34
#define OBJECT_30_4 33
#define OBJECT_30_3 32
#define OBJECT_30_2 31
#define OBJECT_30_1 30
#define OBJECT_30_0 29
#define EXECUTE_CACHE_30_17 17
#define EXECUTE_CACHE_30_16 19
#define EXECUTE_CACHE_30_15 21
#define EXECUTE_CACHE_30_12 23
#define EXECUTE_CACHE_30_9 25
#define EXECUTE_CACHE_30_6 27
#define FREE_REFERENCES_LABEL_30_0 16
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_30_4);
      goto lambda_8;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto lambda_13;

    case 3:
      current_block = (Rpc - LABEL_30_11);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_30_14);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_12)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_30_7);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_15;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (current_block [OBJECT_30_4]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_30_0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_13);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_30_5]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (label_15)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_7 5
#define LABEL_31_5 7
#define LABEL_31_11 9
#define LABEL_31_9 11
#define LABEL_31_12 13
#define LABEL_31_13 15
#define LABEL_31_14 17
#define ENVIRONMENT_LABEL_31_3 35
#define DEBUGGING_LABEL_31_2 34
#define OBJECT_31_8 33
#define OBJECT_31_7 32
#define OBJECT_31_6 31
#define OBJECT_31_5 30
#define OBJECT_31_4 29
#define OBJECT_31_3 28
#define OBJECT_31_2 27
#define OBJECT_31_1 26
#define OBJECT_31_0 25
#define EXECUTE_CACHE_31_10 19
#define EXECUTE_CACHE_31_8 21
#define EXECUTE_CACHE_31_6 23
#define FREE_REFERENCES_LABEL_31_0 18
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_31_4);
      goto check_declaration_syntax_9;

    case 1:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_31_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_31_9);
      goto lambda_7;

    case 5:
      current_block = (Rpc - LABEL_31_12);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_31_13);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_31_14);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_declaration_syntax_15)
DEFLABEL (check_declaration_syntax_9)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  (Wrd13.Obj) = (current_block [OBJECT_31_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_31_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = (current_block [OBJECT_31_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_16)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_31_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_20;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_32;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_31)
  (Wrd47.Obj) = (current_block [OBJECT_31_3]);
  (Wrd50.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd50.Lng))))
    goto label_30;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_29;

DEFLABEL (label_28)
  (Wrd25.Obj) = (current_block [OBJECT_31_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng)))
    goto label_21;
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_21)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_23;
  (Wrd27.Obj) = (current_block [OBJECT_31_7]);
  goto label_22;

DEFLABEL (label_23)
  (Wrd27.Obj) = (current_block [OBJECT_31_6]);

DEFLABEL (label_22)
DEFLABEL (label_27)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_26)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_25;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_24)
  (Rsp [0]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (label_25)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_8]), 1);

DEFLABEL (label_12)
  (Wrd37.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_29)
  Rsp = (& (Rsp [2]));
  goto label_26;

DEFLABEL (label_30)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_4]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

DEFLABEL (label_32)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_7 5
#define LABEL_32_8 7
#define LABEL_32_5 9
#define LABEL_32_15 11
#define LABEL_32_16 13
#define LABEL_32_13 15
#define LABEL_32_17 17
#define LABEL_32_18 19
#define LABEL_32_19 21
#define LABEL_32_20 23
#define LABEL_32_21 25
#define LABEL_32_22 27
#define LABEL_32_23 29
#define LABEL_32_24 31
#define LABEL_32_25 33
#define LABEL_32_26 35
#define LABEL_32_27 37
#define LABEL_32_28 39
#define LABEL_32_29 41
#define LABEL_32_30 43
#define LABEL_32_31 45
#define LABEL_32_32 47
#define LABEL_32_33 49
#define LABEL_32_34 51
#define LABEL_32_35 53
#define LABEL_32_36 55
#define LABEL_32_37 57
#define LABEL_32_38 59
#define LABEL_32_39 61
#define LABEL_32_40 63
#define LABEL_32_9 65
#define TAG_32_10 31
#define LABEL_32_42 67
#define LABEL_32_43 69
#define LABEL_32_44 71
#define LABEL_32_45 73
#define LABEL_32_46 75
#define LABEL_32_47 77
#define LABEL_32_48 79
#define LABEL_32_49 81
#define LABEL_32_50 83
#define LABEL_32_51 85
#define LABEL_32_41 87
#define LABEL_32_55 89
#define LABEL_32_56 91
#define ENVIRONMENT_LABEL_32_3 128
#define DEBUGGING_LABEL_32_2 127
#define OBJECT_32_13 126
#define OBJECT_32_12 125
#define OBJECT_32_11 124
#define OBJECT_32_10 123
#define OBJECT_32_9 122
#define OBJECT_32_8 121
#define OBJECT_32_7 120
#define OBJECT_32_6 119
#define OBJECT_32_5 118
#define OBJECT_32_4 117
#define OBJECT_32_3 116
#define OBJECT_32_2 115
#define OBJECT_32_1 114
#define OBJECT_32_0 113
#define EXECUTE_CACHE_32_59 93
#define EXECUTE_CACHE_32_58 95
#define EXECUTE_CACHE_32_57 97
#define EXECUTE_CACHE_32_54 99
#define EXECUTE_CACHE_32_52 101
#define EXECUTE_CACHE_32_14 103
#define EXECUTE_CACHE_32_53 105
#define EXECUTE_CACHE_32_12 107
#define EXECUTE_CACHE_32_11 109
#define EXECUTE_CACHE_32_6 111
#define FREE_REFERENCES_LABEL_32_0 92
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd114;
  machine_word Wrd112;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd120;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd103;
  machine_word Wrd210;
  machine_word Wrd202;
  machine_word Wrd204;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd200;
  machine_word Wrd194;
  machine_word Wrd195;
  machine_word Wrd196;
  machine_word Wrd193;
  machine_word Wrd187;
  machine_word Wrd188;
  machine_word Wrd189;
  machine_word Wrd186;
  machine_word Wrd180;
  machine_word Wrd181;
  machine_word Wrd182;
  machine_word Wrd179;
  machine_word Wrd171;
  machine_word Wrd173;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd163;
  machine_word Wrd164;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd156;
  machine_word Wrd157;
  machine_word Wrd158;
  machine_word Wrd155;
  machine_word Wrd147;
  machine_word Wrd149;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd145;
  machine_word Wrd139;
  machine_word Wrd140;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd132;
  machine_word Wrd133;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd113;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd121;
  machine_word Wrd111;
  machine_word Wrd220;
  machine_word Wrd217;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd215;
  machine_word Wrd212;
  machine_word Wrd106;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd231;
  machine_word Wrd228;
  machine_word Wrd226;
  machine_word Wrd223;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_32_4);
      goto lambda_59;

    case 1:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_36;

    case 2:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_35;

    case 3:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_32_15);
      goto continuation_17;

    case 5:
      current_block = (Rpc - LABEL_32_16);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_32_13);
      goto lambda_34;

    case 7:
      current_block = (Rpc - LABEL_32_17);
      goto label_61;

    case 8:
      current_block = (Rpc - LABEL_32_18);
      goto label_82;

    case 9:
      current_block = (Rpc - LABEL_32_19);
      goto label_62;

    case 10:
      current_block = (Rpc - LABEL_32_20);
      goto label_63;

    case 11:
      current_block = (Rpc - LABEL_32_21);
      goto label_64;

    case 12:
      current_block = (Rpc - LABEL_32_22);
      goto label_65;

    case 13:
      current_block = (Rpc - LABEL_32_23);
      goto label_66;

    case 14:
      current_block = (Rpc - LABEL_32_24);
      goto label_67;

    case 15:
      current_block = (Rpc - LABEL_32_25);
      goto label_68;

    case 16:
      current_block = (Rpc - LABEL_32_26);
      goto label_69;

    case 17:
      current_block = (Rpc - LABEL_32_27);
      goto label_81;

    case 18:
      current_block = (Rpc - LABEL_32_28);
      goto label_70;

    case 19:
      current_block = (Rpc - LABEL_32_29);
      goto label_71;

    case 20:
      current_block = (Rpc - LABEL_32_30);
      goto label_72;

    case 21:
      current_block = (Rpc - LABEL_32_31);
      goto label_73;

    case 22:
      current_block = (Rpc - LABEL_32_32);
      goto label_74;

    case 23:
      current_block = (Rpc - LABEL_32_33);
      goto label_75;

    case 24:
      current_block = (Rpc - LABEL_32_34);
      goto label_76;

    case 25:
      current_block = (Rpc - LABEL_32_35);
      goto label_77;

    case 26:
      current_block = (Rpc - LABEL_32_36);
      goto label_78;

    case 27:
      current_block = (Rpc - LABEL_32_37);
      goto label_79;

    case 28:
      current_block = (Rpc - LABEL_32_38);
      goto label_80;

    case 29:
      current_block = (Rpc - LABEL_32_39);
      goto continuation_50;

    case 30:
      current_block = (Rpc - LABEL_32_40);
      goto continuation_39;

    case 31:
      current_block = (Rpc - LABEL_32_9);
      goto lambda_95;

    case 32:
      current_block = (Rpc - LABEL_32_42);
      goto label_83;

    case 33:
      current_block = (Rpc - LABEL_32_43);
      goto label_92;

    case 34:
      current_block = (Rpc - LABEL_32_44);
      goto label_84;

    case 35:
      current_block = (Rpc - LABEL_32_45);
      goto label_85;

    case 36:
      current_block = (Rpc - LABEL_32_46);
      goto label_86;

    case 37:
      current_block = (Rpc - LABEL_32_47);
      goto label_87;

    case 38:
      current_block = (Rpc - LABEL_32_48);
      goto label_88;

    case 39:
      current_block = (Rpc - LABEL_32_49);
      goto label_89;

    case 40:
      current_block = (Rpc - LABEL_32_50);
      goto label_90;

    case 41:
      current_block = (Rpc - LABEL_32_51);
      goto label_91;

    case 42:
      current_block = (Rpc - LABEL_32_41);
      goto continuation_38;

    case 43:
      current_block = (Rpc - LABEL_32_55);
      goto continuation_57;

    case 44:
      current_block = (Rpc - LABEL_32_56);
      goto continuation_54;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_94)
DEFLABEL (lambda_59)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_14]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_32_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;

DEFLABEL (label_97)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_9])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Rsp [0]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (label_98)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_32_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_32_7);
  goto label_97;

DEFLABEL (lambda_96)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_32_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_100;

DEFLABEL (label_99)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_100)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_157;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_156)
  (Wrd223.Obj) = (current_block [OBJECT_32_3]);
  (Wrd226.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd226.Lng))))
    goto label_155;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd223.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_154;

DEFLABEL (label_153)
  (Wrd25.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng)))
    goto label_102;

DEFLABEL (label_101)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_102)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_104;
  (Wrd27.Obj) = (current_block [OBJECT_32_7]);
  goto label_103;

DEFLABEL (label_104)
  (Wrd27.Obj) = (current_block [OBJECT_32_6]);

DEFLABEL (label_103)
DEFLABEL (label_152)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_108;

DEFLABEL (label_107)
  (Wrd205.Obj) = (Rsp [0]);
  (Wrd206.uLng) = (OBJECT_TYPE (Wrd205.Obj));
  if (! ((Wrd206.uLng) == 1))
    goto label_106;
  (Wrd204.pObj) = (OBJECT_ADDRESS (Wrd205.Obj));
  (Wrd202.Obj) = ((Wrd204.pObj) [1]);

DEFLABEL (label_105)
  (Rsp [0]) = (Wrd202.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (label_106)
  (Wrd210.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_38]))));
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_80)
  (Wrd202.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_151;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);

DEFLABEL (label_150)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_99;
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_149;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [0]);

DEFLABEL (label_148)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_147;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd57.pObj) [0]);

DEFLABEL (label_146)
  if (! ((Wrd56.Obj) == (current_block [OBJECT_32_8])))
    goto label_99;
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_145;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd64.Obj) = ((Wrd66.pObj) [0]);

DEFLABEL (label_144)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_143;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd73.Obj) = ((Wrd74.pObj) [1]);

DEFLABEL (label_142)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_99;
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd87.Obj) = (Rsp [1]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_141;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd84.Obj) = ((Wrd86.pObj) [0]);

DEFLABEL (label_140)
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_139;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd93.Obj) = ((Wrd94.pObj) [1]);

DEFLABEL (label_138)
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_137;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_136)
  (Wrd212.Obj) = (current_block [OBJECT_32_3]);
  (Wrd215.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd215.Lng))))
    goto label_135;
  (Wrd108.uLng) = (OBJECT_DATUM (Wrd212.Obj));
  (Wrd109.Obj) = (Rsp [0]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if ((Wrd108.Obj) == (Wrd110.Obj))
    goto label_134;

DEFLABEL (label_133)
  (Wrd111.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd111.Obj);
  (Wrd121.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd121.Lng))))
    goto label_101;
  (Wrd115.uLng) = (OBJECT_DATUM (Wrd111.Obj));
  (Wrd116.Obj) = (Rsp [1]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if ((Wrd115.Obj) == (Wrd117.Obj))
    goto label_110;
  (Wrd113.Obj) = (current_block [OBJECT_32_7]);
  goto label_109;

DEFLABEL (label_110)
  (Wrd113.Obj) = (current_block [OBJECT_32_6]);

DEFLABEL (label_109)
DEFLABEL (label_132)
  Rsp = (& (Rsp [3]));
  if ((Wrd113.Obj) == ((SCHEME_OBJECT) 0))
    goto label_99;

DEFLABEL (label_131)
  (Wrd126.Obj) = (Rsp [0]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 1))
    goto label_130;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd123.Obj) = ((Wrd125.pObj) [0]);

DEFLABEL (label_129)
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd134.uLng) == 1))
    goto label_128;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd132.Obj) = ((Wrd133.pObj) [1]);

DEFLABEL (label_127)
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd141.uLng) == 1))
    goto label_126;
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd132.Obj));
  (Wrd139.Obj) = ((Wrd140.pObj) [1]);

DEFLABEL (label_125)
  if ((Wrd139.Obj) == (current_block [OBJECT_32_10]))
    goto label_107;
  (Wrd150.Obj) = (Rsp [0]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if (! ((Wrd151.uLng) == 1))
    goto label_124;
  (Wrd149.pObj) = (OBJECT_ADDRESS (Wrd150.Obj));
  (Wrd147.Obj) = ((Wrd149.pObj) [0]);

DEFLABEL (label_123)
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd158.uLng) == 1))
    goto label_122;
  (Wrd157.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd156.Obj) = ((Wrd157.pObj) [1]);

DEFLABEL (label_121)
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd156.Obj));
  if (! ((Wrd165.uLng) == 1))
    goto label_120;
  (Wrd164.pObj) = (OBJECT_ADDRESS (Wrd156.Obj));
  (Wrd163.Obj) = ((Wrd164.pObj) [1]);

DEFLABEL (label_119)
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd163.Obj));
  if (! ((Wrd170.uLng) == 1))
    goto label_99;
  (Wrd174.Obj) = (Rsp [0]);
  (Wrd175.uLng) = (OBJECT_TYPE (Wrd174.Obj));
  if (! ((Wrd175.uLng) == 1))
    goto label_118;
  (Wrd173.pObj) = (OBJECT_ADDRESS (Wrd174.Obj));
  (Wrd171.Obj) = ((Wrd173.pObj) [0]);

DEFLABEL (label_117)
  (Wrd182.uLng) = (OBJECT_TYPE (Wrd171.Obj));
  if (! ((Wrd182.uLng) == 1))
    goto label_116;
  (Wrd181.pObj) = (OBJECT_ADDRESS (Wrd171.Obj));
  (Wrd180.Obj) = ((Wrd181.pObj) [1]);

DEFLABEL (label_115)
  (Wrd189.uLng) = (OBJECT_TYPE (Wrd180.Obj));
  if (! ((Wrd189.uLng) == 1))
    goto label_114;
  (Wrd188.pObj) = (OBJECT_ADDRESS (Wrd180.Obj));
  (Wrd187.Obj) = ((Wrd188.pObj) [1]);

DEFLABEL (label_113)
  (Wrd196.uLng) = (OBJECT_TYPE (Wrd187.Obj));
  if (! ((Wrd196.uLng) == 1))
    goto label_112;
  (Wrd195.pObj) = (OBJECT_ADDRESS (Wrd187.Obj));
  (Wrd194.Obj) = ((Wrd195.pObj) [1]);

DEFLABEL (label_111)
  if ((Wrd194.Obj) == (current_block [OBJECT_32_10]))
    goto label_107;
  goto label_99;

DEFLABEL (label_112)
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_37]))));
  (* (--Rsp)) = (Wrd200.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_79)
  (Wrd194.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_36]))));
  (* (--Rsp)) = (Wrd193.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_78)
  (Wrd187.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_35]))));
  (* (--Rsp)) = (Wrd186.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_77)
  (Wrd180.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd179.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_34]))));
  (* (--Rsp)) = (Wrd179.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_76)
  (Wrd171.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_33]))));
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_75)
  (Wrd163.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_32]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_74)
  (Wrd156.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_31]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_73)
  (Wrd147.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_30]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_72)
  (Wrd139.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_29]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_71)
  (Wrd132.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_28]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_70)
  (Wrd123.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_134)
  Rsp = (& (Rsp [2]));
  goto label_131;

DEFLABEL (label_135)
  (Wrd217.Obj) = (Rsp [0]);
  (Wrd220.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_27]))));
  (* (--Rsp)) = (Wrd220.Obj);
  (* (--Rsp)) = (Wrd217.Obj);
  (* (--Rsp)) = (Wrd212.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_81)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_133;
  goto label_134;

DEFLABEL (label_137)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_26]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_25]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_68)
  (Wrd93.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_24]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_67)
  (Wrd84.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_23]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_66)
  (Wrd73.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_22]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_65)
  (Wrd64.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_21]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_64)
  (Wrd56.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_20]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_63)
  (Wrd47.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_19]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_62)
  (Wrd37.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_154)
  Rsp = (& (Rsp [2]));
  goto label_107;

DEFLABEL (label_155)
  (Wrd228.Obj) = (Rsp [0]);
  (Wrd231.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_18]))));
  (* (--Rsp)) = (Wrd231.Obj);
  (* (--Rsp)) = (Wrd228.Obj);
  (* (--Rsp)) = (Wrd223.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_82)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_153;
  goto label_154;

DEFLABEL (label_157)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_156;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_32_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_99;
  goto label_131;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_108;
  goto label_107;

DEFLABEL (lambda_95)
  CLOSURE_HEADER (LABEL_32_9);

DEFLABEL (lambda_58)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_188;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_187)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_40]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd117.Obj) = (current_block [OBJECT_32_3]);
  (Wrd120.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd120.Lng))))
    goto label_186;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd117.Obj));
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_185;

DEFLABEL (label_184)
  (Wrd25.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng)))
    goto label_158;
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_158)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_160;
  (Wrd27.Obj) = (current_block [OBJECT_32_7]);
  goto label_159;

DEFLABEL (label_160)
  (Wrd27.Obj) = (current_block [OBJECT_32_6]);

DEFLABEL (label_159)
DEFLABEL (label_183)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_162;

DEFLABEL (label_161)
  (Wrd111.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd111.Obj);
  (Wrd112.Obj) = (Rsp [3]);
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [2]);
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd115.Obj) = (current_block [OBJECT_32_6]);
  (Rsp [2]) = (Wrd115.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_54]));

DEFLABEL (label_162)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 1)
    goto label_164;

DEFLABEL (label_163)
  (Wrd39.Obj) = (current_block [OBJECT_32_11]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_53]));

DEFLABEL (label_164)
  if (! ((Wrd38.uLng) == 1))
    goto label_182;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_181)
  if (! ((Wrd40.Obj) == (current_block [OBJECT_32_8])))
    goto label_163;
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_180;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_179)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_178;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_177)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_39]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_176;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd69.Obj) = ((Wrd71.pObj) [1]);

DEFLABEL (label_175)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_174;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd78.Obj) = ((Wrd79.pObj) [1]);

DEFLABEL (label_173)
  if ((Wrd78.Obj) == (current_block [OBJECT_32_10]))
    goto label_172;
  (Wrd89.Obj) = (Rsp [2]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_171;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd86.Obj) = ((Wrd88.pObj) [1]);

DEFLABEL (label_170)
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_169;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd95.Obj) = ((Wrd96.pObj) [1]);

DEFLABEL (label_168)
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd105.uLng) == 1))
    goto label_167;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd103.Obj) = ((Wrd104.pObj) [0]);

DEFLABEL (label_166)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_165)
  (Rsp [1]) = (Wrd103.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_52]));

DEFLABEL (label_167)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_51]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_91)
  (Wrd103.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_50]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_90)
  (Wrd95.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_49]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_89)
  (Wrd86.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_172)
  (Wrd103.Obj) = (current_block [OBJECT_32_7]);
  goto label_166;

DEFLABEL (label_174)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_48]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_88)
  (Wrd78.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_47]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_87)
  (Wrd69.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_46]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_45]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 1);

DEFLABEL (label_85)
  (Wrd50.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_44]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_84)
  (Wrd40.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_185)
  Rsp = (& (Rsp [2]));
  goto label_161;

DEFLABEL (label_186)
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_43]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 2);

DEFLABEL (label_92)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_184;
  goto label_185;

DEFLABEL (label_188)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_42]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_187;

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_32_39);
  (Wrd103.Obj) = Rvl;
  goto label_165;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_32_40);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_162;
  goto label_161;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_32_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_55]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (current_block [OBJECT_32_10]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_32_0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_56]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_57]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_32_56);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_59]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_32_55);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_32_13]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_58]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define TAG_33_6 1
#define ENVIRONMENT_LABEL_33_3 11
#define DEBUGGING_LABEL_33_2 10
#define OBJECT_33_0 9
#define EXECUTE_CACHE_33_7 7
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_33_4);
      goto make_dumpable_expander_2;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_dumpable_expander_5)
DEFLABEL (make_dumpable_expander_2)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_33_0]);
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_33_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define LABEL_34_9 9
#define ENVIRONMENT_LABEL_34_3 19
#define DEBUGGING_LABEL_34_2 18
#define OBJECT_34_2 17
#define OBJECT_34_1 16
#define OBJECT_34_0 15
#define EXECUTE_CACHE_34_8 11
#define EXECUTE_CACHE_34_6 13
#define FREE_REFERENCES_LABEL_34_0 10
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_34_4);
      goto dumpable_expanderP_5;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_34_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dumpable_expanderP_9)
DEFLABEL (dumpable_expanderP_5)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd7.uLng) == 1))
    goto label_15;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_14)
  if (! ((Wrd10.Obj) == (current_block [OBJECT_34_1])))
    goto label_12;
  Rvl = (current_block [OBJECT_34_2]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_7)
  (Wrd10.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_8 9
#define ENVIRONMENT_LABEL_35_3 17
#define DEBUGGING_LABEL_35_2 16
#define OBJECT_35_0 15
#define EXECUTE_CACHE_35_6 11
#define FREE_REFERENCE_35_0 14
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_35_4);
      goto dumpable_expander__dumped_expander_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dumpable_expander__dumped_expander_7)
DEFLABEL (dumpable_expander__dumped_expander_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_11;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_9;
  Wrd14 = Wrd18;

DEFLABEL (label_8)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_8])), (Wrd15.pObj));

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define ENVIRONMENT_LABEL_36_3 13
#define DEBUGGING_LABEL_36_2 12
#define OBJECT_36_1 11
#define OBJECT_36_0 10
#define FREE_REFERENCE_36_0 9
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_36_4);
      goto dumped_expanderP_2;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dumped_expanderP_7)
DEFLABEL (dumped_expanderP_2)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_10;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  if (! ((Wrd6.uLng) == 1))
    goto label_14;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_13)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_12;
  Wrd19 = Wrd23;

DEFLABEL (label_11)
  (Wrd25.Obj) = (* (Rsp++));
  if (! ((Wrd19.Obj) == (Wrd25.Obj)))
    goto label_9;
  Rvl = (current_block [OBJECT_36_1]);
  goto label_8;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_6])), (Wrd20.pObj));

DEFLABEL (label_5)
  (Wrd19.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 6
#define DEBUGGING_LABEL_37_2 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto dumped_expander_declaration_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dumped_expander_declaration_3)
DEFLABEL (dumped_expander_declaration_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define TAG_38_6 1
#define LABEL_38_9 7
#define LABEL_38_8 9
#define LABEL_38_12 11
#define LABEL_38_13 13
#define LABEL_38_14 15
#define LABEL_38_11 17
#define ENVIRONMENT_LABEL_38_3 35
#define DEBUGGING_LABEL_38_2 34
#define OBJECT_38_4 33
#define OBJECT_38_3 32
#define OBJECT_38_2 31
#define OBJECT_38_1 30
#define OBJECT_38_0 29
#define EXECUTE_CACHE_38_16 19
#define EXECUTE_CACHE_38_15 21
#define EXECUTE_CACHE_38_10 23
#define EXECUTE_CACHE_38_7 25
#define FREE_REFERENCE_38_0 28
#define FREE_REFERENCES_LABEL_38_0 18
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pardec_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_38_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_38_9);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_38_12);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_38_13);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_38_14);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_38_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_13)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_38_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_22;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_21)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_20;
  Wrd9 = Wrd13;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_18;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_17)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_16;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_38_11);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_38_4]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_16]));

DEFLABEL (label_16)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_14]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 1);

DEFLABEL (label_10)
  (Wrd15.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_12])), (Wrd10.pObj));

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_10 13
#define LABEL_14 15
#define LABEL_15 17
#define LABEL_19 19
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_18 25
#define LABEL_20 27
#define LABEL_21 29
#define LABEL_23 31
#define LABEL_24 33
#define LABEL_26 35
#define LABEL_27 37
#define LABEL_28 39
#define LABEL_29 41
#define LABEL_30 43
#define LABEL_31 45
#define LABEL_32 47
#define LABEL_33 49
#define LABEL_34 51
#define LABEL_35 53
#define LABEL_36 55
#define LABEL_37 57
#define ENVIRONMENT_LABEL_3 124
#define DEBUGGING_LABEL_2 123
#define PURIFICATION_ROOT 122
#define OBJECT_46 121
#define OBJECT_45 120
#define OBJECT_44 119
#define OBJECT_43 118
#define OBJECT_42 117
#define OBJECT_41 116
#define OBJECT_40 115
#define OBJECT_39 114
#define OBJECT_38 113
#define OBJECT_37 112
#define OBJECT_36 111
#define OBJECT_35 110
#define OBJECT_34 109
#define OBJECT_33 108
#define OBJECT_32 107
#define OBJECT_31 106
#define OBJECT_30 105
#define OBJECT_29 104
#define OBJECT_28 103
#define OBJECT_27 102
#define OBJECT_26 101
#define OBJECT_25 100
#define OBJECT_24 99
#define OBJECT_23 98
#define OBJECT_22 97
#define OBJECT_21 96
#define OBJECT_20 95
#define OBJECT_19 94
#define OBJECT_18 93
#define OBJECT_17 92
#define OBJECT_16 91
#define OBJECT_15 90
#define OBJECT_14 89
#define OBJECT_13 88
#define OBJECT_12 87
#define OBJECT_11 86
#define OBJECT_10 85
#define OBJECT_9 84
#define OBJECT_8 83
#define OBJECT_7 82
#define OBJECT_6 81
#define OBJECT_5 80
#define OBJECT_4 79
#define OBJECT_3 78
#define OBJECT_2 77
#define OBJECT_1 76
#define OBJECT_0 75
#define EXECUTE_CACHE_25 59
#define EXECUTE_CACHE_22 61
#define FREE_REFERENCE_1 64
#define FREE_REFERENCE_0 65
#define GLOBAL_EXECUTE_CACHE_13 67
#define GLOBAL_EXECUTE_CACHE_12 69
#define GLOBAL_EXECUTE_CACHE_9 71
#define GLOBAL_EXECUTE_CACHE_5 73
#define FREE_REFERENCES_LABEL_0 58
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
pardec_so_49d1e6ae4576d684 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_14);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_15);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_26);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_27);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_28);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_29);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_30);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_31);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_32);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_33);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto continuation_24;

    case 25:
      current_block = (Rpc - LABEL_35);
      goto label_31;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto label_32;

    case 27:
      current_block = (Rpc - LABEL_37);
      goto expression_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_26)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_36])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_32)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_31)
  {
    static const short sections [] =
      {
	0,
	2,
	0,
	1,
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
	2,
	3,
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
	2,
	1,
	2,
	0,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 38)
      goto label_30;
    blocks = (current_block [OBJECT_46]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_35])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_30)
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
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (0, 2));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-3]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_36;
  Wrd8 = Wrd12;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-5]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_34;
  Wrd8 = Wrd12;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd5.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd9.pObj));

DEFLABEL (label_28)
  (Wrd8.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd9.pObj));

DEFLABEL (label_27)
  (Wrd8.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_pardec_so_49d1e6ae4576d684 [38] =
  {
    { "pardec_so_code_1", 4, pardec_so_code_1 },
    { "pardec_so_code_2", 13, pardec_so_code_2 },
    { "pardec_so_code_3", 1, pardec_so_code_3 },
    { "pardec_so_code_4", 1, pardec_so_code_4 },
    { "pardec_so_code_5", 15, pardec_so_code_5 },
    { "pardec_so_code_6", 11, pardec_so_code_6 },
    { "pardec_so_code_7", 3, pardec_so_code_7 },
    { "pardec_so_code_8", 1, pardec_so_code_8 },
    { "pardec_so_code_9", 1, pardec_so_code_9 },
    { "pardec_so_code_10", 1, pardec_so_code_10 },
    { "pardec_so_code_11", 4, pardec_so_code_11 },
    { "pardec_so_code_12", 1, pardec_so_code_12 },
    { "pardec_so_code_13", 1, pardec_so_code_13 },
    { "pardec_so_code_14", 1, pardec_so_code_14 },
    { "pardec_so_code_15", 1, pardec_so_code_15 },
    { "pardec_so_code_16", 1, pardec_so_code_16 },
    { "pardec_so_code_17", 4, pardec_so_code_17 },
    { "pardec_so_code_18", 3, pardec_so_code_18 },
    { "pardec_so_code_19", 6, pardec_so_code_19 },
    { "pardec_so_code_20", 6, pardec_so_code_20 },
    { "pardec_so_code_21", 2, pardec_so_code_21 },
    { "pardec_so_code_22", 2, pardec_so_code_22 },
    { "pardec_so_code_23", 1, pardec_so_code_23 },
    { "pardec_so_code_24", 39, pardec_so_code_24 },
    { "pardec_so_code_25", 3, pardec_so_code_25 },
    { "pardec_so_code_26", 23, pardec_so_code_26 },
    { "pardec_so_code_27", 18, pardec_so_code_27 },
    { "pardec_so_code_28", 4, pardec_so_code_28 },
    { "pardec_so_code_29", 8, pardec_so_code_29 },
    { "pardec_so_code_30", 7, pardec_so_code_30 },
    { "pardec_so_code_31", 8, pardec_so_code_31 },
    { "pardec_so_code_32", 45, pardec_so_code_32 },
    { "pardec_so_code_33", 2, pardec_so_code_33 },
    { "pardec_so_code_34", 4, pardec_so_code_34 },
    { "pardec_so_code_35", 4, pardec_so_code_35 },
    { "pardec_so_code_36", 3, pardec_so_code_36 },
    { "pardec_so_code_37", 1, pardec_so_code_37 },
    { "pardec_so_code_38", 8, pardec_so_code_38 }
  };

int
decl_pardec_so_49d1e6ae4576d684 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_pardec_so_49d1e6ae4576d684);
  return (0);
}

DECLARE_COMPILED_CODE ("pardec.so", 28, decl_pardec_so_49d1e6ae4576d684, pardec_so_49d1e6ae4576d684)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_pardec_so_data_49d1e6ae4576d684 [6146] =
  "\xa3\x01\x45\xd7\x0b\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9"
  "\x28\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x82\x88\xc1\xbe\x0d\xbf\xc1\x1c"
  "\x08\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x08\x28\xb3\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xc2\x1c\x81\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x85\x88\xb6\x0c\x83\x0d\x1c\x0d\x1c\x0d\x1c\x84\x81"
  "\x1b\x08\x1b\x82\x0d\x0d\x0d\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x86\x88\x84\x83\x81\x1b\x82\x28\x0d\x1c\x28\xb3\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d"
  "\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x80\xc1\x1c\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x80\x1b\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb6\x08\x1b\x1b\x24\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x1b\x25\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d"
  "\x1c\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x0d\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x82\x80\xb6\x0d\x1c\x1b\x1d\x1b\x1b\x81"
  "\x1b\x08\x0d\x0d\x0d\x0d\x0d\x24\x28\x1b\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x07\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x07\x85\xc2\x1c\x02\x1b"
  "\x08\x1b\x80\x81\x1b\x82\x0d\x1c\x0d\x1c\x24\x28\xb2\x28\x0d\x28"
  "\x0d\xba\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\xb4\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x82\x0c\x1b\x08\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x08\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb6\x0c\x1b\x0d\x1c\x1b\x1b\x08\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x08\x1b\x1b\x07\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x06\x07\x85\x1b"
  "\x02\x1b\x0c\x1d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x0c\x08\xb6\x0d\x06\x07\x85\x1b\x02"
  "\x1b\x0c\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x28"
  "\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb6\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\xb6\x1b\x1b\x07\x0d\x24"
  "\x28\x1b\x28\x1b\x28\xb2\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88"
  "\x1b\x1b\x2a\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x9d\x0d\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x0d\x1c"
  "\x1b\x2a\xb7\x1b\x2a\x1b\x0d\x1b\x1b\x1b\xb4\x1b\x0d\x0d\x0d\x0d"
  "\x0d\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x08\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0c\x0d\x0d"
  "\x0d\x0d\x9b\x84\x83\x82\x81\x9b\x0d\x1c\x0d\x1b\x85\x0d\x0d\x0d"
  "\xb3\x9b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9b\x0d\x0c\x0d\x0d\x99"
  "\x82\x81\x99\xc3\x0d\x1c\x0d\x1b\x83\x0d\x0d\x0d\x0d\x0d\xb1\x0d"
  "\x9e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a\x9e"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x24\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x50\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x73\x66\x2f"
  "\x2e\x2f\x70\x61\x72\x64\x65\x63\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x03\x19\x6d\x65\x72\x67\x65\x2d\x75\x73\x75\x61\x6c\x2d"
  "\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x73\x04\x0b\x61\x70"
  "\x70\x65\x6e\x64\x2d\x6d\x61\x70\x04\x15\x6d\x61\x6b\x65\x2d\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x73\x65\x74\x04\x12"
  "\x70\x61\x72\x73\x65\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f"
  "\x6e\x05\x20\x0a\x81\x85\x02\x1f\x08\x81\x87\x02\x1e\x06\x81\x85"
  "\x02\x1d\x04\x84\x06\x09\x15\x02\x04\x63\x64\x72\x13\x75\x73\x75"
  "\x61\x6c\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x73\x04"
  "\x63\x61\x72\x09\x05\x6e\x6f\x6e\x65\x04\x07\x61\x70\x70\x65\x6e"
  "\x64\x0a\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x03\x2d\x1c\x81"
  "\x87\x02\x2c\x1a\x81\x87\x02\x2b\x18\x81\x87\x02\x2a\x16\x81\x89"
  "\x02\x29\x14\x81\x89\x02\x28\x12\x81\x87\x02\x27\x10\x81\x89\x02"
  "\x26\x0e\x81\x89\x02\x25\x0c\x81\x87\x02\x24\x0a\x81\x87\x02\x23"
  "\x08\x81\x87\x02\x22\x06\x81\x87\x02\x21\x04\x83\x04\x1b\x28\x0b"
  "\x02\x04\x02\x2e\x04\x82\x02\x03\x0a\x0c\x02\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x0d\x2f\x04\x83\x04\x03\x0e\x02\x1b\x55"
  "\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x62\x69\x6e\x64"
  "\x69\x6e\x67\x20\x6c\x65\x76\x65\x6c\x07\x67\x6c\x6f\x62\x61\x6c"
  "\x0f\x0a\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x10\x06\x6c\x6f\x63"
  "\x61\x6c\x11\x09\x0d\x10\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73"
  "\x2f\x62\x69\x6e\x64\x1a\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73"
  "\x2f\x62\x69\x6e\x64\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x17"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x2f\x62\x69\x6e\x64\x2d"
  "\x67\x6c\x6f\x62\x61\x6c\x04\x04\x06\x65\x72\x72\x6f\x72\x12\x02"
  "\x3e\x20\x81\x85\x02\x3d\x1e\x81\x85\x02\x3c\x1c\x81\x85\x02\x3b"
  "\x1a\x81\x8b\x02\x3a\x18\x81\x83\x02\x39\x16\x81\x83\x02\x38\x14"
  "\x81\x83\x02\x37\x12\x81\x8b\x02\x36\x10\x81\x85\x02\x35\x0e\x81"
  "\x83\x02\x34\x0c\x81\x87\x02\x33\x0a\x81\x85\x02\x32\x08\x81\x89"
  "\x02\x31\x06\x81\x85\x02\x30\x04\x84\x06\x1f\x35\x13\x02\x0d\x04"
  "\x04\x6d\x61\x70\x14\x04\x06\x11\x6d\x61\x6b\x65\x2d\x64\x65\x63"
  "\x6c\x61\x72\x61\x74\x69\x6f\x6e\x15\x04\x49\x18\x81\x89\x02\x48"
  "\x16\x81\x8b\x02\x47\x14\x81\x87\x02\x46\x12\x81\x85\x02\x45\x10"
  "\x81\x89\x02\x44\x0e\x81\x87\x02\x43\x0c\x81\x85\x02\x42\x0a\x81"
  "\x87\x02\x41\x08\x81\x87\x02\x40\x06\x81\x89\x02\x3f\x04\x85\x08"
  "\x17\x26\x16\x02\x08\x09\x13\x6b\x6e\x6f\x77\x6e\x2d\x64\x65\x63"
  "\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x17\x02\x04\x05\x61\x73\x73"
  "\x71\x18\x02\x4c\x08\x81\x85\x02\x4b\x06\x81\x83\x02\x4a\x04\x83"
  "\x04\x07\x10\x19\x02\x09\x31\x23\x5b\x28\x73\x63\x6f\x64\x65\x2d"
  "\x6f\x70\x74\x69\x6d\x69\x7a\x65\x72\x20\x64\x65\x63\x6c\x61\x72"
  "\x61\x74\x69\x6f\x6e\x73\x29\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x2d\x73\x65\x74\x5d\x1a\x4d\x04\x84\x06\x03\x1b\x02\x0a"
  "\x0d\x4e\x04\x83\x04\x03\x1c\x02\x0b\x0d\x4f\x04\x83\x04\x03\x1d"
  "\x02\x0c\x1a\x0d\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x1e\x53\x0a\x81\x83\x02\x52\x08\x81\x83\x02\x51\x06\x81"
  "\x83\x02\x50\x04\x83\x04\x09\x11\x1f\x02\x0d\x2d\x23\x5b\x28\x73"
  "\x63\x6f\x64\x65\x2d\x6f\x70\x74\x69\x6d\x69\x7a\x65\x72\x20\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x29\x64\x65\x63\x6c"
  "\x61\x72\x61\x74\x69\x6f\x6e\x5d\x20\x54\x04\x86\x0a\x03\x21\x02"
  "\x0e\x0d\x55\x04\x83\x04\x03\x22\x02\x0f\x0d\x56\x04\x83\x04\x03"
  "\x23\x02\x10\x0d\x57\x04\x83\x04\x03\x24\x02\x11\x0d\x58\x04\x83"
  "\x04\x03\x25\x02\x12\x20\x0d\x1e\x5c\x0a\x81\x83\x02\x5b\x08\x81"
  "\x83\x02\x5a\x06\x81\x83\x02\x59\x04\x83\x04\x09\x11\x1e\x02\x13"
  "\x0a\x6e\x6f\x2d\x76\x61\x6c\x75\x65\x73\x26\x04\x14\x05\x14\x06"
  "\x15\x04\x5f\x08\x81\x85\x02\x5e\x06\x81\x87\x02\x5d\x04\x86\x0a"
  "\x07\x12\x27\x02\x14\x09\x17\x02\x04\x18\x02\x65\x0e\x81\x87\x02"
  "\x64\x0c\x81\x87\x02\x63\x0a\x81\x85\x02\x62\x08\x81\x89\x02\x61"
  "\x06\x81\x87\x02\x60\x04\x84\x06\x0d\x18\x28\x02\x15\x09\x73\x65"
  "\x74\x2d\x63\x64\x72\x21\x17\x02\x17\x02\x04\x18\x02\x6b\x0e\x81"
  "\x85\x02\x6a\x0c\x81\x83\x02\x69\x0a\x81\x83\x02\x68\x08\x81\x87"
  "\x02\x67\x06\x81\x89\x02\x66\x04\x84\x06\x0d\x18\x29\x02\x16\x07"
  "\x65\x78\x70\x61\x6e\x64\x2a\x17\x02\x04\x18\x02\x6d\x06\x81\x85"
  "\x02\x6c\x04\x83\x04\x05\x0f\x18\x02\x17\x02\x03\x13\x6b\x6e\x6f"
  "\x77\x6e\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x3f\x2b"
  "\x04\x1c\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x6b\x6e\x6f\x77"
  "\x6e\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x03\x6f"
  "\x06\x81\x85\x02\x6e\x04\x84\x04\x05\x0e\x2d\x02\x18\x08\x12\x6b"
  "\x6e\x6f\x77\x6e\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e"
  "\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79"
  "\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x02\x70\x04\x84\x04"
  "\x03\x0c\x2e\x02\x19\x0a\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f"
  "\x0f\x02\x09\x0d\x2a\x28\x73\x66\x2f\x75\x73\x75\x61\x6c\x2d\x69"
  "\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x73\x2d\x64\x65\x66\x61"
  "\x75\x6c\x74\x2d\x64\x65\x6c\x65\x74\x69\x6f\x6e\x73\x24\x75\x73"
  "\x75\x61\x6c\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x73"
  "\x2f\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x2d\x76\x61\x6c\x75\x65"
  "\x73\x23\x75\x73\x75\x61\x6c\x2d\x69\x6e\x74\x65\x67\x72\x61\x74"
  "\x69\x6f\x6e\x73\x2f\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x2d\x6e"
  "\x61\x6d\x65\x73\x23\x75\x73\x75\x61\x6c\x2d\x69\x6e\x74\x65\x67"
  "\x72\x61\x74\x69\x6f\x6e\x73\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x2d\x76\x61\x6c\x75\x65\x73\x22\x75\x73\x75\x61\x6c\x2d\x69\x6e"
  "\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x73\x2f\x63\x6f\x6e\x73\x74"
  "\x61\x6e\x74\x2d\x6e\x61\x6d\x65\x73\x06\x04\x0a\x05\x05\x6d\x61"
  "\x70\x2a\x05\x12\x62\x6c\x6f\x63\x6b\x2f\x6c\x6f\x6f\x6b\x75\x70"
  "\x2d\x6e\x61\x6d\x65\x0f\x05\x09\x66\x6f\x72\x2d\x65\x61\x63\x68"
  "\x0a\x04\x05\x6d\x65\x6d\x71\x04\x14\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x2f\x6d\x61\x6b\x65\x26\x62\x69\x6e\x64\x21\x06\x15\x08\x97"
  "\x01\x50\x81\x87\x02\x96\x01\x4e\x81\x89\x02\x95\x01\x4c\x81\x87"
  "\x02\x94\x01\x4a\x81\x85\x02\x93\x01\x48\x81\x85\x02\x92\x01\x46"
  "\x81\x8b\x02\x91\x01\x44\x81\x8b\x02\x90\x01\x42\x81\x8b\x02\x8f"
  "\x01\x40\x81\x8b\x02\x8e\x01\x3e\x81\x8b\x02\x8d\x01\x3c\x81\x8b"
  "\x02\x8c\x01\x3a\x81\x8b\x02\x8b\x01\x38\x81\x87\x02\x8a\x01\x36"
  "\x81\x87\x02\x89\x01\x34\x81\x89\x02\x88\x01\x32\x81\x87\x02\x87"
  "\x01\x30\x81\x85\x02\x86\x01\x2e\x81\x85\x02\x85\x01\x2c\x81\x8f"
  "\x02\x84\x01\x2a\x81\x8b\x02\x83\x01\x28\x81\x87\x02\x82\x01\x26"
  "\x81\x83\x02\x81\x01\x24\x81\x87\x02\x80\x01\x22\x81\x8d\x02\x7f"
  "\x20\x81\x8d\x02\x7e\x1e\x81\x8d\x02\x7d\x1c\x81\x87\x02\x7c\x1a"
  "\x81\x87\x02\x7b\x18\x81\x87\x02\x7a\x16\x81\x89\x02\x79\x14\x81"
  "\x87\x02\x78\x12\x81\x83\x02\x77\x10\x81\x85\x02\x76\x0e\x81\x8b"
  "\x02\x75\x0c\x81\x8d\x02\x74\x0a\x81\x8b\x02\x73\x08\x81\x89\x02"
  "\x72\x06\x81\x8d\x02\x71\x04\x84\x06\x4f\x72\x30\x02\x1a\x11\x26"
  "\x04\x13\x64\x65\x66\x69\x6e\x65\x2d\x64\x65\x63\x6c\x61\x72\x61"
  "\x74\x69\x6f\x6e\x31\x05\x13\x62\x6c\x6f\x63\x6b\x2f\x6c\x6f\x6f"
  "\x6b\x75\x70\x2d\x6e\x61\x6d\x65\x73\x06\x12\x6d\x61\x6b\x65\x2d"
  "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x32\x04\x9a\x01"
  "\x08\x81\x89\x02\x99\x01\x06\x81\x87\x02\x98\x01\x04\x83\x04\x07"
  "\x14\x33\x02\x1b\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65"
  "\x3f\x34\x1e\x10\x2a\x0d\x0b\x2d\x3e\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x10\x15\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x2d\x69"
  "\x6e\x66\x6f\x2d\x74\x61\x67\x35\x03\x04\x03\x12\x72\x65\x61\x64"
  "\x2d\x65\x78\x74\x65\x72\x6e\x73\x2d\x66\x69\x6c\x65\x04\x05\x65"
  "\x76\x61\x6c\x03\x12\x63\x68\x61\x6e\x67\x65\x2d\x74\x79\x70\x65"
  "\x2f\x62\x6c\x6f\x63\x6b\x04\x14\x03\x10\x03\x1c\x64\x75\x6d\x70"
  "\x65\x64\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x2f\x64\x65\x63\x6c"
  "\x61\x72\x61\x74\x69\x6f\x6e\x10\x03\x11\x64\x75\x6d\x70\x65\x64"
  "\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x3f\x36\x03\x17\x63\x68\x61"
  "\x6e\x67\x65\x2d\x74\x79\x70\x65\x2f\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x04\x17\x63\x6f\x70\x79\x2f\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x2f\x65\x78\x74\x65\x72\x6e\x37\x06\x15\x05\x0f"
  "\x04\x0e\xb1\x01\x30\x81\x8b\x02\xb0\x01\x2e\x81\x83\x02\xaf\x01"
  "\x2c\x81\x91\x02\xae\x01\x2a\x81\x8f\x02\xad\x01\x28\x81\x91\x02"
  "\xac\x01\x26\x81\x93\x02\xab\x01\x24\x81\x8b\x02\xaa\x01\x22\x81"
  "\x8b\x02\xa9\x01\x20\x81\x83\x02\xa8\x01\x1e\x81\x89\x02\xa7\x01"
  "\x1c\x81\x87\x02\xa6\x01\x1a\x81\x85\x02\xa5\x01\x18\x81\x85\x02"
  "\xa4\x01\x16\x81\x8b\x02\xa3\x01\x14\x81\x83\x02\xa2\x01\x12\x81"
  "\x83\x02\xa1\x01\x10\x81\x87\x02\xa0\x01\x0e\x81\x87\x02\x9f\x01"
  "\x0c\x81\x87\x02\x9e\x01\x0a\x83\x04\x9d\x01\x08\x81\x85\x02\x9c"
  "\x01\x06\x81\x85\x02\x9b\x01\x04\x84\x06\x2f\x5c\x38\x02\x1c\x0d"
  "\x1b\x55\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x65\x78"
  "\x74\x65\x72\x6e\x20\x76\x61\x6c\x75\x65\x3a\x09\x35\x02\x05\x0b"
  "\x62\x6c\x6f\x63\x6b\x2f\x6d\x61\x6b\x65\x04\x18\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x73\x2f\x6d\x61\x70\x2d\x65\x78\x74\x65\x72"
  "\x6e\x61\x6c\x04\x06\x64\x65\x6c\x71\x21\x06\x15\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x2f\x66\x69\x6e\x61\x6c\x2d\x76\x61\x6c\x75\x65"
  "\x03\x1c\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x2d\x69\x6e"
  "\x66\x6f\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x13\x64"
  "\x75\x6d\x70\x61\x62\x6c\x65\x2d\x65\x78\x70\x61\x6e\x64\x65\x72"
  "\x3f\x35\x04\x37\x04\x12\x03\x23\x64\x75\x6d\x70\x61\x62\x6c\x65"
  "\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x2d\x3e\x64\x75\x6d\x70\x65"
  "\x64\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x37\x03\x0a\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x3f\x0b\xc3\x01\x26\x81\x8d\x02\xc2\x01\x24"
  "\x81\x8f\x02\xc1\x01\x22\x81\x8f\x02\xc0\x01\x20\x81\x8b\x02\xbf"
  "\x01\x1e\x81\x87\x02\xbe\x01\x1c\x81\x85\x02\xbd\x01\x1a\x82\x02"
  "\xbc\x01\x18\x81\x8b\x02\xbb\x01\x16\x81\x8b\x02\xba\x01\x14\x81"
  "\x85\x02\xb9\x01\x12\x81\x85\x02\xb8\x01\x10\x81\x8d\x02\xb7\x01"
  "\x0e\x81\x8b\x02\xb6\x01\x0c\x81\x89\x02\xb5\x01\x0a\x81\x89\x02"
  "\xb4\x01\x08\x81\x87\x02\xb3\x01\x06\x81\x85\x02\xb2\x01\x04\x84"
  "\x06\x25\x44\x0d\x02\x1d\x30\x69\x67\x6e\x6f\x72\x69\x6e\x67\x20"
  "\x49\x47\x4e\x4f\x52\x41\x42\x4c\x45\x20\x64\x65\x63\x6c\x61\x72"
  "\x61\x74\x69\x6f\x6e\x20\x6f\x66\x20\x66\x72\x65\x65\x20\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x04\x0a\x05\x0f\x04\x05\x77\x61\x72\x6e"
  "\x0a\x03\x15\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x6d\x61\x79\x2d"
  "\x69\x67\x6e\x6f\x72\x65\x21\x05\xc7\x01\x0a\x81\x85\x02\xc6\x01"
  "\x08\x81\x85\x02\xc5\x01\x06\x81\x85\x02\xc4\x01\x04\x84\x06\x09"
  "\x17\x39\x02\x1e\x2d\x69\x67\x6e\x6f\x72\x69\x6e\x67\x20\x49\x47"
  "\x4e\x4f\x52\x45\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e"
  "\x20\x6f\x66\x20\x66\x72\x65\x65\x20\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x11\x07\x69\x67\x6e\x6f\x72\x65\x3a\x26\x09\x05\x0f\x06\x32"
  "\x04\x0a\x03\x16\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x6d\x75\x73"
  "\x74\x2d\x69\x67\x6e\x6f\x72\x65\x21\x05\xcf\x01\x12\x81\x8d\x02"
  "\xce\x01\x10\x81\x8d\x02\xcd\x01\x0e\x81\x8d\x02\xcc\x01\x0c\x81"
  "\x8d\x02\xcb\x01\x0a\x81\x8b\x02\xca\x01\x08\x81\x89\x02\xc9\x01"
  "\x06\x81\x89\x02\xc8\x01\x04\x84\x06\x11\x24\x26\x02\x1f\x11\x2a"
  "\x09\x10\x72\x65\x64\x75\x63\x65\x2d\x6f\x70\x65\x72\x61\x74\x6f"
  "\x72\x0a\x04\x19\x63\x68\x65\x63\x6b\x2d\x64\x65\x63\x6c\x61\x72"
  "\x61\x74\x69\x6f\x6e\x2d\x73\x79\x6e\x74\x61\x78\x3b\x04\x14\x05"
  "\x0f\x04\x0d\x72\x65\x64\x75\x63\x65\x72\x2f\x6d\x61\x6b\x65\x06"
  "\x15\x04\x17\x6d\x61\x6b\x65\x2d\x64\x75\x6d\x70\x61\x62\x6c\x65"
  "\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x3c\x07\xd6\x01\x10\x81\x8d"
  "\x02\xd5\x01\x0e\x81\x89\x02\xd4\x01\x0c\x81\x85\x02\xd3\x01\x0a"
  "\x81\x89\x02\xd2\x01\x08\x81\x85\x02\xd1\x01\x06\x81\x85\x02\xd0"
  "\x01\x04\x84\x06\x0f\x25\x3d\x02\x20\x34\x1e\x09\x11\x42\x61\x64"
  "\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x3a\x02\x03\x06"
  "\x6c\x69\x73\x74\x3f\x3e\x05\x12\x04\x09\x66\x6f\x72\x2d\x61\x6c"
  "\x6c\x3f\x3f\x04\xde\x01\x12\x81\x83\x02\xdd\x01\x10\x81\x83\x02"
  "\xdc\x01\x0e\x81\x85\x02\xdb\x01\x0c\x83\x04\xda\x01\x0a\x81\x83"
  "\x02\xd9\x01\x08\x81\x85\x02\xd8\x01\x06\x81\x85\x02\xd7\x01\x04"
  "\x84\x06\x11\x24\x40\x02\x21\x11\x2a\x1d\x49\x6c\x6c\x65\x67\x61"
  "\x6c\x20\x6e\x61\x6d\x65\x20\x69\x6e\x20\x72\x65\x70\x6c\x61\x63"
  "\x65\x6d\x65\x6e\x74\x3a\x0a\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x34\x1e\x09\x11\x42\x61\x64\x20\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x3a\x11\x72\x65\x70\x6c\x61\x63\x65\x2d\x6f\x70\x65"
  "\x72\x61\x74\x6f\x72\x34\x03\x3e\x04\x14\x05\x12\x04\x12\x04\x3f"
  "\x04\x19\x6d\x61\x6b\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x05\x0f\x04\x11\x72\x65"
  "\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x2f\x6d\x61\x6b\x65\x06\x15"
  "\x04\x3c\x0b\x8b\x02\x5c\x81\x8d\x02\x8a\x02\x5a\x81\x89\x02\x89"
  "\x02\x58\x81\x85\x02\x88\x02\x56\x81\x87\x02\x87\x02\x54\x81\x87"
  "\x02\x86\x02\x52\x81\x87\x02\x85\x02\x50\x81\x87\x02\x84\x02\x4e"
  "\x81\x87\x02\x83\x02\x4c\x81\x83\x02\x82\x02\x4a\x81\x83\x02\x81"
  "\x02\x48\x81\x83\x02\x80\x02\x46\x81\x83\x02\xff\x01\x44\x81\x87"
  "\x02\xfe\x01\x42\x81\x85\x02\xfd\x01\x40\x81\x83\x02\xfc\x01\x3e"
  "\x81\x85\x02\xfb\x01\x3c\x81\x83\x02\xfa\x01\x3a\x81\x83\x02\xf9"
  "\x01\x38\x81\x83\x02\xf8\x01\x36\x81\x83\x02\xf7\x01\x34\x81\x83"
  "\x02\xf6\x01\x32\x81\x83\x02\xf5\x01\x30\x81\x83\x02\xf4\x01\x2e"
  "\x81\x83\x02\xf3\x01\x2c\x81\x83\x02\xf2\x01\x2a\x81\x83\x02\xf1"
  "\x01\x28\x81\x83\x02\xf0\x01\x26\x81\x83\x02\xef\x01\x24\x81\x85"
  "\x02\xee\x01\x22\x81\x85\x02\xed\x01\x20\x81\x85\x02\xec\x01\x1e"
  "\x81\x83\x02\xeb\x01\x1c\x81\x83\x02\xea\x01\x1a\x81\x83\x02\xe9"
  "\x01\x18\x81\x83\x02\xe8\x01\x16\x81\x83\x02\xe7\x01\x14\x81\x83"
  "\x02\xe6\x01\x12\x81\x85\x02\xe5\x01\x10\x83\x04\xe4\x01\x0e\x81"
  "\x83\x02\xe3\x01\x0c\x81\x83\x02\xe2\x01\x0a\x81\x85\x02\xe1\x01"
  "\x08\x81\x85\x02\xe0\x01\x06\x81\x85\x02\xdf\x01\x04\x84\x06\x5b"
  "\x81\x01\x3f\x02\x22\x14\x2a\x64\x75\x6d\x70\x61\x62\x6c\x65\x2d"
  "\x65\x78\x70\x61\x6e\x64\x65\x72\x2a\x3e\x04\x0c\x6d\x61\x6b\x65"
  "\x2d\x65\x6e\x74\x69\x74\x79\x02\x8d\x02\x06\x81\x8b\x02\x8c\x02"
  "\x04\x84\x06\x05\x0c\x12\x02\x23\x3e\x09\x03\x08\x65\x6e\x74\x69"
  "\x74\x79\x3f\x03\x0d\x65\x6e\x74\x69\x74\x79\x2d\x65\x78\x74\x72"
  "\x61\x3e\x03\x91\x02\x0a\x81\x83\x02\x90\x02\x08\x81\x83\x02\x8f"
  "\x02\x06\x81\x83\x02\x8e\x02\x04\x83\x04\x09\x14\x41\x02\x24\x14"
  "\x64\x75\x6d\x70\x65\x64\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x2d"
  "\x74\x61\x67\x42\x02\x03\x3e\x02\x95\x02\x0a\x81\x85\x02\x94\x02"
  "\x08\x81\x83\x02\x93\x02\x06\x81\x83\x02\x92\x02\x04\x83\x04\x09"
  "\x12\x3e\x02\x25\x09\x42\x02\x98\x02\x08\x81\x85\x02\x97\x02\x06"
  "\x81\x83\x02\x96\x02\x04\x83\x04\x07\x0e\x43\x02\x26\x99\x02\x04"
  "\x83\x04\x03\x44\x02\x27\x11\x2a\x09\x20\x65\x78\x70\x61\x6e\x64"
  "\x65\x72\x2d\x65\x76\x61\x6c\x75\x61\x74\x69\x6f\x6e\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x02\x04\x14\x05\x0f\x04\x06"
  "\x15\x05\xa1\x02\x12\x81\x89\x02\xa0\x02\x10\x81\x8d\x02\x9f\x02"
  "\x0e\x81\x8d\x02\x9e\x02\x0c\x81\x8b\x02\x9d\x02\x0a\x81\x85\x02"
  "\x9c\x02\x08\x81\x89\x02\x9b\x02\x06\x81\x85\x02\x9a\x02\x04\x84"
  "\x06\x11\x24\x2a\x27\x14\x14\x2a\x04\x10\x65\x78\x70\x61\x6e\x64"
  "\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x42\x10\x36\x37\x35\x3c\x31"
  "\x23\x5b\x28\x73\x63\x6f\x64\x65\x2d\x6f\x70\x74\x69\x6d\x69\x7a"
  "\x65\x72\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x29"
  "\x64\x75\x6d\x70\x65\x64\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x5d"
  "\x44\x04\x43\x04\x3e\x04\x41\x04\x12\x04\x34\x3f\x04\x3b\x40\x04"
  "\x0a\x3d\x04\x3a\x26\x04\x0a\x69\x67\x6e\x6f\x72\x61\x62\x6c\x65"
  "\x39\x04\x15\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x2d\x3e\x65"
  "\x78\x74\x65\x72\x6e\x61\x6c\x0d\x04\x13\x69\x6e\x74\x65\x67\x72"
  "\x61\x74\x65\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x38\x04\x13\x69"
  "\x6e\x74\x65\x67\x72\x61\x74\x65\x2d\x6f\x70\x65\x72\x61\x74\x6f"
  "\x72\x2f\x1f\x64\x65\x66\x69\x6e\x65\x2d\x69\x6e\x74\x65\x67\x72"
  "\x61\x74\x69\x6f\x6e\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f"
  "\x6e\x44\x33\x04\x30\x04\x2c\x1c\x67\x75\x61\x72\x61\x6e\x74\x65"
  "\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x2b\x17\x31\x32\x0d\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x3f\x1a\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e"
  "\x2f\x62\x69\x6e\x64\x69\x6e\x67\x2d\x6c\x65\x76\x65\x6c\x12\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2f\x76\x61\x6c\x75\x65"
  "\x15\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2f\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x16\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f"
  "\x6e\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x15\x0e\x2e\x04\x2d"
  "\x04\x18\x04\x29\x04\x28\x04\x27\x04\x1e\x04\x25\x04\x24\x04\x23"
  "\x04\x22\x04\x21\x04\x0e\x0c\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x0e\x62\x69\x6e\x64\x69\x6e\x67\x2d\x6c\x65\x76\x65\x6c"
  "\x06\x76\x61\x6c\x75\x65\x09\x76\x61\x72\x69\x61\x62\x6c\x65\x0a"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x10\x72\x74\x64\x3a\x64\x65"
  "\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x43\x0c\x64\x65\x63\x6c\x61"
  "\x72\x61\x74\x69\x6f\x6e\x20\x11\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x2d\x73\x65\x74\x3f\x1d\x64\x65\x63\x6c\x61\x72\x61"
  "\x74\x69\x6f\x6e\x2d\x73\x65\x74\x2f\x64\x65\x63\x6c\x61\x72\x61"
  "\x74\x69\x6f\x6e\x73\x19\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f"
  "\x6e\x2d\x73\x65\x74\x2f\x6f\x72\x69\x67\x69\x6e\x61\x6c\x1f\x04"
  "\x1d\x04\x1c\x04\x1b\x04\x07\x76\x65\x63\x74\x6f\x72\x10\x64\x65"
  "\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x73\x65\x74\x0d\x64\x65"
  "\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x09\x6f\x72\x69\x67\x69"
  "\x6e\x61\x6c\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x14\x72\x74\x64\x3a\x64\x65\x63\x6c\x61\x72\x61"
  "\x74\x69\x6f\x6e\x2d\x73\x65\x74\x42\x10\x64\x65\x63\x6c\x61\x72"
  "\x61\x74\x69\x6f\x6e\x2d\x73\x65\x74\x1a\x14\x64\x65\x63\x6c\x61"
  "\x72\x61\x74\x69\x6f\x6e\x73\x2f\x6b\x6e\x6f\x77\x6e\x3f\x11\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x2f\x6d\x61\x70\x12"
  "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x2f\x62\x69\x6e"
  "\x64\x16\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x2f\x6f"
  "\x72\x69\x67\x69\x6e\x61\x6c\x17\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x73\x2f\x6d\x61\x6b\x65\x2d\x6e\x75\x6c\x6c\x13\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x2f\x70\x61\x72\x73"
  "\x65\x19\x04\x16\x04\x13\x04\x0e\x04\x0c\x04\x0b\x04\x04\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04"
  "\x19\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x04\x25\x6e\x61\x6d\x65\x64"
  "\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x73\x65\x74\x2d\x74"
  "\x61\x67\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x21\x0a"
  "\x1b\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72"
  "\x75\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x05\x42\x43\x03\x04"
  "\x31\x03\x44\x03\x1c\x3a\x80\x80\x04\x1b\x38\x81\x81\x02\x1a\x36"
  "\x81\x81\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81"
  "\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83"
  "\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02"
  "\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d"
  "\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x8b\x02\x0a\x16"
  "\x81\x85\x02\x09\x14\x81\x85\x02\x08\x12\x81\x83\x02\x07\x10\x81"
  "\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x8b\x02\x04\x0a\x81\x85"
  "\x02\x03\x08\x81\x85\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02"
  "\x39\x7d";

SCHEME_OBJECT *
pardec_so_data_49d1e6ae4576d684 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_pardec_so_data_49d1e6ae4576d684 [0]))), (sizeof (prog_pardec_so_data_49d1e6ae4576d684)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_37]));
}

DECLARE_COMPILED_DATA_NS ("pardec.so", pardec_so_data_49d1e6ae4576d684)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("pardec.so", "bacb0d6c9dfa8efb")
