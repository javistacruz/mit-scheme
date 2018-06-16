/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:40-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_9 9
#define LABEL_1_10 11
#define LABEL_1_8 13
#define LABEL_1_13 15
#define LABEL_1_12 17
#define LABEL_1_14 19
#define LABEL_1_15 21
#define ENVIRONMENT_LABEL_1_3 32
#define DEBUGGING_LABEL_1_2 31
#define OBJECT_1_3 30
#define OBJECT_1_2 29
#define OBJECT_1_1 28
#define OBJECT_1_0 27
#define EXECUTE_CACHE_1_11 23
#define EXECUTE_CACHE_1_7 25
#define FREE_REFERENCES_LABEL_1_0 22
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambda_list_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      goto r4rs_lambda_listP_14;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto loop_12;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_1_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_1_15);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (r4rs_lambda_listP_21)
DEFLABEL (r4rs_lambda_listP_14)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_12;

DEFLABEL (loop_22)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_1_0])))
    goto label_23;
  Rvl = (current_block [OBJECT_1_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_24;

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_1_1]);

DEFLABEL (label_24)
DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_28;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  if (! ((Wrd13.uLng) == 1))
    goto label_38;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_36;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_33)
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [1]) = (Wrd18.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_32;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd22.Obj);
  goto loop_12;

DEFLABEL (label_32)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 1);

DEFLABEL (label_19)
  (Wrd22.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_18)
  (Wrd9.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
lambda_list_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_r4rs_lambda_list_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_r4rs_lambda_list_4)
DEFLABEL (guarantee_r4rs_lambda_list_1)
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
lambda_list_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto error_not_r4rs_lambda_list_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_r4rs_lambda_list_5)
DEFLABEL (error_not_r4rs_lambda_list_2)
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
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_8 11
#define LABEL_4_9 13
#define LABEL_4_12 15
#define LABEL_4_10 17
#define LABEL_4_15 19
#define LABEL_4_16 21
#define TAG_4_17 9
#define LABEL_4_18 23
#define TAG_4_19 10
#define ENVIRONMENT_LABEL_4_3 35
#define DEBUGGING_LABEL_4_2 34
#define OBJECT_4_2 33
#define OBJECT_4_1 32
#define OBJECT_4_0 31
#define EXECUTE_CACHE_4_14 25
#define EXECUTE_CACHE_4_13 27
#define EXECUTE_CACHE_4_11 29
#define FREE_REFERENCES_LABEL_4_0 24
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambda_list_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
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
      goto parse_r4rs_lambda_list_17;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto loop_15;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_4_16);
      goto lambda_25;

    case 10:
      current_block = (Rpc - LABEL_4_18);
      goto lambda_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_r4rs_lambda_list_23)
DEFLABEL (parse_r4rs_lambda_list_17)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_15;

DEFLABEL (loop_24)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_4_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_30;

DEFLABEL (label_29)
  (Wrd7.Obj) = (Rsp [0]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_4_0])))
    goto label_27;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_16])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (label_30)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_31;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_28;

DEFLABEL (label_31)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_18])));
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

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_36;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_35)
  (Wrd43.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Rsp [1]) = (Wrd40.Obj);
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_34;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_33)
  (Rsp [0]) = (Wrd44.Obj);
  goto loop_15;

DEFLABEL (label_34)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_21)
  (Wrd44.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_20)
  (Wrd31.Obj) = Rvl;
  goto label_35;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_4_16);

DEFLABEL (lambda_10)
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

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_4_18);

DEFLABEL (lambda_7)
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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_10 13
#define LABEL_5_6 15
#define LABEL_5_14 17
#define LABEL_5_13 19
#define ENVIRONMENT_LABEL_5_3 29
#define DEBUGGING_LABEL_5_2 28
#define OBJECT_5_2 27
#define OBJECT_5_1 26
#define OBJECT_5_0 25
#define EXECUTE_CACHE_5_12 21
#define EXECUTE_CACHE_5_11 23
#define FREE_REFERENCES_LABEL_5_0 20
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambda_list_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd52;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_5_4);
      goto map_r4rs_lambda_list_12;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto loop_10;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_5_14);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_r4rs_lambda_list_18)
DEFLABEL (map_r4rs_lambda_list_12)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_10;

DEFLABEL (loop_19)
DEFLABEL (loop_10)
  DLINK_INTERRUPT_CHECK (25, LABEL_5_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_23;

DEFLABEL (label_22)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (current_block [OBJECT_5_2]);
  if (! ((Wrd7.Obj) == (Wrd8.Obj)))
    goto label_20;
  Rvl = (Wrd8.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_20)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (label_23)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_24;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);
  goto label_21;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_14)
  (Wrd26.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd26.Obj));
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_25)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd34.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd34.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_29;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [1]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_28)
  Rdl = (& (Rsp [2]));
  goto loop_10;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_27;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_26)
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_16)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_15)
  (Wrd52.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd52.Obj));
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_12 7
#define LABEL_6_7 9
#define TAG_6_8 3
#define LABEL_6_9 11
#define TAG_6_10 4
#define LABEL_6_11 13
#define LABEL_6_13 15
#define TAG_6_14 6
#define LABEL_6_19 17
#define LABEL_6_15 19
#define LABEL_6_20 21
#define LABEL_6_21 23
#define LABEL_6_22 25
#define LABEL_6_23 27
#define LABEL_6_24 29
#define LABEL_6_27 31
#define LABEL_6_17 33
#define LABEL_6_30 35
#define LABEL_6_31 37
#define LABEL_6_32 39
#define LABEL_6_35 41
#define LABEL_6_36 43
#define LABEL_6_37 45
#define LABEL_6_38 47
#define LABEL_6_39 49
#define LABEL_6_42 51
#define LABEL_6_18 53
#define LABEL_6_45 55
#define LABEL_6_28 57
#define LABEL_6_25 59
#define TAG_6_26 28
#define LABEL_6_47 61
#define LABEL_6_43 63
#define LABEL_6_40 65
#define TAG_6_41 31
#define LABEL_6_48 67
#define LABEL_6_33 69
#define TAG_6_34 33
#define LABEL_6_49 71
#define LABEL_6_50 73
#define LABEL_6_46 75
#define LABEL_6_44 77
#define LABEL_6_52 79
#define LABEL_6_51 81
#define LABEL_6_55 83
#define LABEL_6_54 85
#define LABEL_6_56 87
#define ENVIRONMENT_LABEL_6_3 103
#define DEBUGGING_LABEL_6_2 102
#define OBJECT_6_3 101
#define OBJECT_6_2 100
#define OBJECT_6_1 99
#define OBJECT_6_0 98
#define EXECUTE_CACHE_6_53 89
#define EXECUTE_CACHE_6_29 91
#define EXECUTE_CACHE_6_16 93
#define FREE_REFERENCE_6_1 96
#define FREE_REFERENCE_6_0 97
#define FREE_REFERENCES_LABEL_6_0 88
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambda_list_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd120;
  machine_word Wrd121;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd106;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd103;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_6_4);
      goto mit_lambda_listP_54;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_83;

    case 2:
      current_block = (Rpc - LABEL_6_12);
      goto label_56;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto lambda_84;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto lambda_85;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto lambda_50;

    case 6:
      current_block = (Rpc - LABEL_6_13);
      goto lambda_86;

    case 7:
      current_block = (Rpc - LABEL_6_19);
      goto label_57;

    case 8:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_21;

    case 9:
      current_block = (Rpc - LABEL_6_20);
      goto label_58;

    case 10:
      current_block = (Rpc - LABEL_6_21);
      goto label_59;

    case 11:
      current_block = (Rpc - LABEL_6_22);
      goto label_60;

    case 12:
      current_block = (Rpc - LABEL_6_23);
      goto label_61;

    case 13:
      current_block = (Rpc - LABEL_6_24);
      goto label_63;

    case 14:
      current_block = (Rpc - LABEL_6_27);
      goto label_62;

    case 15:
      current_block = (Rpc - LABEL_6_17);
      goto continuation_1;

    case 16:
      current_block = (Rpc - LABEL_6_30);
      goto label_64;

    case 17:
      current_block = (Rpc - LABEL_6_31);
      goto label_65;

    case 18:
      current_block = (Rpc - LABEL_6_32);
      goto label_70;

    case 19:
      current_block = (Rpc - LABEL_6_35);
      goto label_71;

    case 20:
      current_block = (Rpc - LABEL_6_36);
      goto label_72;

    case 21:
      current_block = (Rpc - LABEL_6_37);
      goto label_66;

    case 22:
      current_block = (Rpc - LABEL_6_38);
      goto label_67;

    case 23:
      current_block = (Rpc - LABEL_6_39);
      goto label_69;

    case 24:
      current_block = (Rpc - LABEL_6_42);
      goto label_68;

    case 25:
      current_block = (Rpc - LABEL_6_18);
      goto continuation_38;

    case 26:
      current_block = (Rpc - LABEL_6_45);
      goto label_73;

    case 27:
      current_block = (Rpc - LABEL_6_28);
      goto continuation_31;

    case 28:
      current_block = (Rpc - LABEL_6_25);
      goto lambda_88;

    case 29:
      current_block = (Rpc - LABEL_6_47);
      goto label_74;

    case 30:
      current_block = (Rpc - LABEL_6_43);
      goto continuation_18;

    case 31:
      current_block = (Rpc - LABEL_6_40);
      goto lambda_90;

    case 32:
      current_block = (Rpc - LABEL_6_48);
      goto label_75;

    case 33:
      current_block = (Rpc - LABEL_6_33);
      goto lambda_89;

    case 34:
      current_block = (Rpc - LABEL_6_49);
      goto label_76;

    case 35:
      current_block = (Rpc - LABEL_6_50);
      goto label_77;

    case 36:
      current_block = (Rpc - LABEL_6_46);
      goto continuation_48;

    case 37:
      current_block = (Rpc - LABEL_6_44);
      goto continuation_41;

    case 38:
      current_block = (Rpc - LABEL_6_52);
      goto label_78;

    case 39:
      current_block = (Rpc - LABEL_6_51);
      goto continuation_43;

    case 40:
      current_block = (Rpc - LABEL_6_55);
      goto label_79;

    case 41:
      current_block = (Rpc - LABEL_6_54);
      goto continuation_45;

    case 42:
      current_block = (Rpc - LABEL_6_56);
      goto label_80;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mit_lambda_listP_82)
DEFLABEL (mit_lambda_listP_54)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd24.pObj) = (& (Rhp [-1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  ((Wrd30.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_7])));
  Rhp += 3;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd39 = Wrd34;
  ((Wrd39.pObj) [2]) = (Wrd7.Obj);
  ((Wrd39.pObj) [3]) = (Wrd13.Obj);
  ((Wrd39.pObj) [4]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_9])));
  Rhp += 4;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  Wrd49 = Wrd42;
  ((Wrd49.pObj) [2]) = (Wrd7.Obj);
  ((Wrd49.pObj) [3]) = (Wrd13.Obj);
  ((Wrd49.pObj) [4]) = (Wrd19.Obj);
  ((Wrd49.pObj) [5]) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  ((Wrd24.pObj) [0]) = (Wrd41.Obj);
  ((Wrd18.pObj) [0]) = (Wrd33.Obj);
  ((Wrd12.pObj) [0]) = (Wrd29.Obj);
  Wrd61 = Wrd6;
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  ((Wrd61.pObj) [0]) = (Wrd63.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd65.Obj) = ((Wrd67.pObj) [0]);
  (Rsp [2]) = (Wrd65.Obj);
  (Wrd68.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd68.Obj);
  (Wrd69.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [4]) = (Wrd69.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_91;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_93;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_92)
  (Rsp [1]) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_13])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd28.Obj);
  (Rsp [3]) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_93)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_56)
  (Wrd14.Obj) = Rvl;
  goto label_92;

DEFLABEL (lambda_84)
  CLOSURE_HEADER (LABEL_6_7);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_6_0])))
    goto label_94;
  Rvl = (current_block [OBJECT_6_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_94)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_6_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_29]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_6_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_95;

DEFLABEL (label_96)
  Rvl = (current_block [OBJECT_6_2]);

DEFLABEL (label_95)
DEFLABEL (label_97)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_98)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_100;

DEFLABEL (label_99)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_100)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_113;
  Wrd16 = Wrd20;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_111;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_110)
  (Wrd31.Obj) = (* (Rsp++));
  if ((Wrd22.Obj) == (Wrd31.Obj))
    goto label_99;
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_109;
  Wrd32 = Wrd36;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_107;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_106)
  (Wrd47.Obj) = (* (Rsp++));
  if ((Wrd38.Obj) == (Wrd47.Obj))
    goto label_103;
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [2]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd54.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_25])));
  Rhp += 2;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd54.pObj)));
  Wrd57 = Wrd54;
  (Wrd60.Obj) = ((Wrd49.pObj) [4]);
  ((Wrd57.pObj) [2]) = (Wrd60.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  ((Wrd57.pObj) [3]) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_102;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [0]);

DEFLABEL (label_101)
  (Rsp [2]) = (Wrd61.Obj);
  (Wrd70.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd70.Obj);
  (Wrd71.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd71.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_102)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_62)
  (Wrd61.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_103)
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [3]);
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd72.Obj) = ((Wrd76.pObj) [0]);
  (Rsp [0]) = (Wrd72.Obj);
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_105;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd77.Obj) = ((Wrd79.pObj) [1]);

DEFLABEL (label_104)
  (Rsp [1]) = (Wrd77.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_105)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_63)
  (Wrd77.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_61)
  (Wrd38.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_22])), (Wrd33.pObj));

DEFLABEL (label_60)
  (Wrd32.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_59)
  (Wrd22.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_20])), (Wrd17.pObj));

DEFLABEL (label_58)
  (Wrd16.Obj) = Rvl;
  goto label_112;

DEFLABEL (lambda_85)
  CLOSURE_HEADER (LABEL_6_9);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_6_0])))
    goto label_114;
  Rvl = (current_block [OBJECT_6_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_114)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_118;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_43]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_29]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_6_43);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_115;

DEFLABEL (label_116)
  Rvl = (current_block [OBJECT_6_2]);

DEFLABEL (label_115)
DEFLABEL (label_117)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_118)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_120;

DEFLABEL (label_119)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_120)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_141;
  Wrd16 = Wrd20;

DEFLABEL (label_140)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_139;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_138)
  (Wrd31.Obj) = (* (Rsp++));
  if ((Wrd22.Obj) == (Wrd31.Obj))
    goto label_131;
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_130;
  Wrd32 = Wrd36;

DEFLABEL (label_129)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_128;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_127)
  (Wrd47.Obj) = (* (Rsp++));
  if ((Wrd38.Obj) == (Wrd47.Obj))
    goto label_124;
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [2]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd54.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_41);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_40])));
  Rhp += 2;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd54.pObj)));
  Wrd57 = Wrd54;
  (Wrd60.Obj) = ((Wrd49.pObj) [5]);
  ((Wrd57.pObj) [2]) = (Wrd60.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  ((Wrd57.pObj) [3]) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_123;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [0]);

DEFLABEL (label_122)
  (Rsp [2]) = (Wrd61.Obj);

DEFLABEL (label_121)
  (Wrd127.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd127.Obj);
  (Wrd128.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd128.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_123)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_42]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_68)
  (Wrd61.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_124)
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [3]);
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd72.Obj) = ((Wrd76.pObj) [0]);
  (Rsp [0]) = (Wrd72.Obj);
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_126;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd77.Obj) = ((Wrd79.pObj) [1]);

DEFLABEL (label_125)
  (Rsp [1]) = (Wrd77.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_126)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_39]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_69)
  (Wrd77.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_38]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_67)
  (Wrd38.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_37])), (Wrd33.pObj));

DEFLABEL (label_66)
  (Wrd32.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_131)
  (Wrd89.Obj) = (Rsp [1]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_137;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd86.Obj) = ((Wrd88.pObj) [1]);

DEFLABEL (label_136)
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_119;
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [2]);
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd104.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_33])));
  Rhp += 2;
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd104.pObj)));
  Wrd107 = Wrd104;
  (Wrd110.Obj) = ((Wrd99.pObj) [4]);
  ((Wrd107.pObj) [2]) = (Wrd110.Obj);
  (Wrd106.Obj) = (Rsp [2]);
  ((Wrd107.pObj) [3]) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_135;
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd111.Obj) = ((Wrd113.pObj) [1]);

DEFLABEL (label_134)
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd122.uLng) == 1))
    goto label_133;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd120.Obj) = ((Wrd121.pObj) [0]);

DEFLABEL (label_132)
  (Rsp [2]) = (Wrd120.Obj);
  goto label_121;

DEFLABEL (label_133)
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_36]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_72)
  (Wrd120.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_35]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_71)
  (Wrd111.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_32]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_70)
  (Wrd86.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_65)
  (Wrd22.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_30])), (Wrd17.pObj));

DEFLABEL (label_64)
  (Wrd16.Obj) = Rvl;
  goto label_140;

DEFLABEL (lambda_87)
DEFLABEL (lambda_50)
  INTERRUPT_CHECK (26, LABEL_6_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_6_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_143;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_46]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_29]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_6_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_142;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_142)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_143)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_144;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_144)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_44]))));
  (* (--Rsp)) = (Wrd18.Obj);
  if (! ((Wrd13.uLng) == 1))
    goto label_155;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_154)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_6_44);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_145;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_145)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_51]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_153;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_152)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_53]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_6_51);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_146;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_146)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_54]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_151;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_150)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_29]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_6_54);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_147;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_147)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_149;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_148)
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd22.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd22.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_149)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_56]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_80)
  (Wrd9.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_55]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_52]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_45]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_154;

DEFLABEL (lambda_86)
  CLOSURE_HEADER (LABEL_6_13);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_160;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_159)
  if ((Wrd5.Obj) == (current_block [OBJECT_6_0]))
    goto label_157;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_156;

DEFLABEL (label_157)
  Rvl = (current_block [OBJECT_6_2]);

DEFLABEL (label_156)
DEFLABEL (label_158)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_160)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_57)
  (Wrd5.Obj) = Rvl;
  goto label_159;

DEFLABEL (lambda_88)
  CLOSURE_HEADER (LABEL_6_25);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_162;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_161)
  (Rsp [1]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_162)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_47]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_74)
  (Wrd10.Obj) = Rvl;
  goto label_161;

DEFLABEL (lambda_90)
  CLOSURE_HEADER (LABEL_6_40);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_164;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_163)
  (Rsp [1]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_164)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_48]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_75)
  (Wrd10.Obj) = Rvl;
  goto label_163;

DEFLABEL (lambda_89)
  CLOSURE_HEADER (LABEL_6_33);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_168;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_167)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_166;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_165)
  (Rsp [1]) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_166)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_50]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_77)
  (Wrd25.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_49]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_76)
  (Wrd10.Obj) = Rvl;
  goto label_167;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 13
#define DEBUGGING_LABEL_7_2 12
#define OBJECT_7_0 11
#define EXECUTE_CACHE_7_7 7
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambda_list_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto guarantee_mit_lambda_list_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_mit_lambda_list_4)
DEFLABEL (guarantee_mit_lambda_list_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 11
#define DEBUGGING_LABEL_8_2 10
#define OBJECT_8_2 9
#define OBJECT_8_1 8
#define OBJECT_8_0 7
#define EXECUTE_CACHE_8_5 5
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambda_list_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto error_not_mit_lambda_list_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_mit_lambda_list_5)
DEFLABEL (error_not_mit_lambda_list_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_8_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_8_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define LABEL_9_8 11
#define LABEL_9_9 13
#define LABEL_9_10 15
#define LABEL_9_11 17
#define LABEL_9_12 19
#define ENVIRONMENT_LABEL_9_3 32
#define DEBUGGING_LABEL_9_2 31
#define OBJECT_9_1 30
#define OBJECT_9_0 29
#define FREE_REFERENCE_9_7 21
#define FREE_REFERENCE_9_6 22
#define FREE_REFERENCE_9_5 23
#define FREE_REFERENCE_9_4 24
#define FREE_REFERENCE_9_3 25
#define FREE_REFERENCE_9_2 26
#define FREE_REFERENCE_9_1 27
#define FREE_REFERENCE_9_0 28
#define FREE_REFERENCES_LABEL_9_0 20
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambda_list_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_tagP_8;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_9_9);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_9_10);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_9_11);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_9_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_tagP_19)
DEFLABEL (lambda_tagP_8)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_38;
  Wrd6 = Wrd10;

DEFLABEL (label_37)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_21;
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_36;
  Wrd14 = Wrd18;

DEFLABEL (label_35)
  (Wrd20.Obj) = (Rsp [0]);
  if ((Wrd20.Obj) == (Wrd14.Obj))
    goto label_21;
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_34;
  Wrd22 = Wrd26;

DEFLABEL (label_33)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_21;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_3]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_32;
  Wrd30 = Wrd34;

DEFLABEL (label_31)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_21;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_4]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_30;
  Wrd38 = Wrd42;

DEFLABEL (label_29)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_21;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_5]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_28;
  Wrd46 = Wrd50;

DEFLABEL (label_27)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == (Wrd46.Obj))
    goto label_21;
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_6]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_26;
  Wrd54 = Wrd58;

DEFLABEL (label_25)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == (Wrd54.Obj))
    goto label_21;
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_7]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_24;
  Wrd62 = Wrd66;

DEFLABEL (label_23)
  (Wrd68.Obj) = (Rsp [0]);
  if ((Wrd68.Obj) == (Wrd62.Obj))
    goto label_21;
  if ((Wrd68.Obj) == (current_block [OBJECT_9_0]))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_20;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_9_1]);

DEFLABEL (label_20)
DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_12])), (Wrd63.pObj));

DEFLABEL (label_17)
  (Wrd62.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_11])), (Wrd55.pObj));

DEFLABEL (label_16)
  (Wrd54.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_10])), (Wrd47.pObj));

DEFLABEL (label_15)
  (Wrd46.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_9])), (Wrd39.pObj));

DEFLABEL (label_14)
  (Wrd38.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_8])), (Wrd31.pObj));

DEFLABEL (label_13)
  (Wrd30.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_7])), (Wrd23.pObj));

DEFLABEL (label_12)
  (Wrd22.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_6])), (Wrd15.pObj));

DEFLABEL (label_11)
  (Wrd14.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_5])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_9 11
#define LABEL_10_10 13
#define LABEL_10_11 15
#define LABEL_10_12 17
#define LABEL_10_13 19
#define LABEL_10_15 21
#define LABEL_10_16 23
#define LABEL_10_17 25
#define LABEL_10_18 27
#define LABEL_10_19 29
#define LABEL_10_20 31
#define LABEL_10_22 33
#define LABEL_10_23 35
#define LABEL_10_25 37
#define LABEL_10_27 39
#define LABEL_10_29 41
#define LABEL_10_30 43
#define LABEL_10_31 45
#define LABEL_10_32 47
#define LABEL_10_33 49
#define LABEL_10_34 51
#define LABEL_10_21 53
#define LABEL_10_35 55
#define LABEL_10_36 57
#define LABEL_10_37 59
#define LABEL_10_38 61
#define LABEL_10_39 63
#define LABEL_10_40 65
#define LABEL_10_41 67
#define LABEL_10_42 69
#define LABEL_10_43 71
#define LABEL_10_44 73
#define LABEL_10_45 75
#define LABEL_10_14 77
#define LABEL_10_46 79
#define LABEL_10_47 81
#define LABEL_10_48 83
#define LABEL_10_49 85
#define LABEL_10_50 87
#define LABEL_10_51 89
#define LABEL_10_52 91
#define LABEL_10_53 93
#define LABEL_10_24 95
#define LABEL_10_55 97
#define LABEL_10_54 99
#define LABEL_10_56 101
#define LABEL_10_58 103
#define LABEL_10_62 105
#define LABEL_10_63 107
#define LABEL_10_65 109
#define LABEL_10_61 111
#define LABEL_10_66 113
#define LABEL_10_59 115
#define TAG_10_60 56
#define LABEL_10_67 117
#define LABEL_10_69 119
#define ENVIRONMENT_LABEL_10_3 146
#define DEBUGGING_LABEL_10_2 145
#define OBJECT_10_6 144
#define OBJECT_10_5 143
#define OBJECT_10_4 142
#define OBJECT_10_3 141
#define OBJECT_10_2 140
#define OBJECT_10_1 139
#define OBJECT_10_0 138
#define EXECUTE_CACHE_10_70 121
#define EXECUTE_CACHE_10_68 123
#define EXECUTE_CACHE_10_64 125
#define EXECUTE_CACHE_10_57 127
#define EXECUTE_CACHE_10_28 129
#define EXECUTE_CACHE_10_26 131
#define EXECUTE_CACHE_10_8 133
#define FREE_REFERENCE_10_1 136
#define FREE_REFERENCE_10_0 137
#define FREE_REFERENCES_LABEL_10_0 120
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambda_list_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd45;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd87;
  machine_word Wrd79;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd55;
  machine_word Wrd117;
  machine_word Wrd109;
  machine_word Wrd113;
  machine_word Wrd126;
  machine_word Wrd119;
  machine_word Wrd106;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd88;
  machine_word Wrd83;
  machine_word Wrd16;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd59;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd90;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd127;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd112;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd101;
  machine_word Wrd102;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_10_4);
      goto parse_mit_lambda_list_79;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto parse_parameters_54;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto loop_52;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto label_81;

    case 5:
      current_block = (Rpc - LABEL_10_10);
      goto label_82;

    case 6:
      current_block = (Rpc - LABEL_10_11);
      goto label_87;

    case 7:
      current_block = (Rpc - LABEL_10_12);
      goto label_89;

    case 8:
      current_block = (Rpc - LABEL_10_13);
      goto label_90;

    case 9:
      current_block = (Rpc - LABEL_10_15);
      goto label_91;

    case 10:
      current_block = (Rpc - LABEL_10_16);
      goto label_92;

    case 11:
      current_block = (Rpc - LABEL_10_17);
      goto label_88;

    case 12:
      current_block = (Rpc - LABEL_10_18);
      goto label_83;

    case 13:
      current_block = (Rpc - LABEL_10_19);
      goto label_84;

    case 14:
      current_block = (Rpc - LABEL_10_20);
      goto label_86;

    case 15:
      current_block = (Rpc - LABEL_10_22);
      goto label_85;

    case 16:
      current_block = (Rpc - LABEL_10_23);
      goto finish_76;

    case 17:
      current_block = (Rpc - LABEL_10_25);
      goto label_93;

    case 18:
      current_block = (Rpc - LABEL_10_27);
      goto bad_lambda_list_77;

    case 19:
      current_block = (Rpc - LABEL_10_29);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_10_30);
      goto label_110;

    case 21:
      current_block = (Rpc - LABEL_10_31);
      goto label_111;

    case 22:
      current_block = (Rpc - LABEL_10_32);
      goto label_112;

    case 23:
      current_block = (Rpc - LABEL_10_33);
      goto label_114;

    case 24:
      current_block = (Rpc - LABEL_10_34);
      goto label_113;

    case 25:
      current_block = (Rpc - LABEL_10_21);
      goto continuation_11;

    case 26:
      current_block = (Rpc - LABEL_10_35);
      goto label_98;

    case 27:
      current_block = (Rpc - LABEL_10_36);
      goto label_99;

    case 28:
      current_block = (Rpc - LABEL_10_37);
      goto label_100;

    case 29:
      current_block = (Rpc - LABEL_10_38);
      goto label_94;

    case 30:
      current_block = (Rpc - LABEL_10_39);
      goto label_95;

    case 31:
      current_block = (Rpc - LABEL_10_40);
      goto label_97;

    case 32:
      current_block = (Rpc - LABEL_10_41);
      goto label_96;

    case 33:
      current_block = (Rpc - LABEL_10_42);
      goto continuation_45;

    case 34:
      current_block = (Rpc - LABEL_10_43);
      goto label_115;

    case 35:
      current_block = (Rpc - LABEL_10_44);
      goto label_116;

    case 36:
      current_block = (Rpc - LABEL_10_45);
      goto label_117;

    case 37:
      current_block = (Rpc - LABEL_10_14);
      goto continuation_38;

    case 38:
      current_block = (Rpc - LABEL_10_46);
      goto label_103;

    case 39:
      current_block = (Rpc - LABEL_10_47);
      goto label_104;

    case 40:
      current_block = (Rpc - LABEL_10_48);
      goto label_106;

    case 41:
      current_block = (Rpc - LABEL_10_49);
      goto label_107;

    case 42:
      current_block = (Rpc - LABEL_10_50);
      goto label_108;

    case 43:
      current_block = (Rpc - LABEL_10_51);
      goto label_105;

    case 44:
      current_block = (Rpc - LABEL_10_52);
      goto label_101;

    case 45:
      current_block = (Rpc - LABEL_10_53);
      goto label_102;

    case 46:
      current_block = (Rpc - LABEL_10_24);
      goto continuation_58;

    case 47:
      current_block = (Rpc - LABEL_10_55);
      goto label_109;

    case 48:
      current_block = (Rpc - LABEL_10_54);
      goto continuation_56;

    case 49:
      current_block = (Rpc - LABEL_10_56);
      goto continuation_60;

    case 50:
      current_block = (Rpc - LABEL_10_58);
      goto do_loop_71;

    case 51:
      current_block = (Rpc - LABEL_10_62);
      goto label_118;

    case 52:
      current_block = (Rpc - LABEL_10_63);
      goto label_119;

    case 53:
      current_block = (Rpc - LABEL_10_65);
      goto continuation_69;

    case 54:
      current_block = (Rpc - LABEL_10_61);
      goto continuation_66;

    case 55:
      current_block = (Rpc - LABEL_10_66);
      goto label_120;

    case 56:
      current_block = (Rpc - LABEL_10_59);
      goto lambda_129;

    case 57:
      current_block = (Rpc - LABEL_10_67);
      goto continuation_68;

    case 58:
      current_block = (Rpc - LABEL_10_69);
      goto label_121;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_mit_lambda_list_123)
DEFLABEL (parse_mit_lambda_list_79)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  goto parse_parameters_54;

DEFLABEL (parse_parameters_124)
DEFLABEL (parse_parameters_54)
  INTERRUPT_CHECK (26, LABEL_10_5);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_52;

DEFLABEL (loop_125)
DEFLABEL (loop_52)
  INTERRUPT_CHECK (26, LABEL_10_6);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_10_0])))
    goto label_130;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto finish_76;

DEFLABEL (label_130)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_131;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto finish_76;

DEFLABEL (label_131)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_133;
  (Rsp [5]) = (Wrd9.Obj);

DEFLABEL (label_132)
  Rsp = (& (Rsp [5]));
  goto bad_lambda_list_77;

DEFLABEL (label_133)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_162;
  Wrd13 = Wrd17;

DEFLABEL (label_161)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_160;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_159)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd19.Obj) == (Wrd28.Obj))
    goto label_145;
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_144;
  Wrd29 = Wrd33;

DEFLABEL (label_143)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_142;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_141)
  (Wrd44.Obj) = (* (Rsp++));
  if ((Wrd35.Obj) == (Wrd44.Obj))
    goto label_137;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_135;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_134)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (label_135)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_22]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_85)
DEFLABEL (label_136)
  (* (--Rsp)) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (Rsp [3]);
  if ((Wrd57.Obj) == (Wrd58.Obj))
    goto label_138;
  (Wrd59.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd59.Obj);
  goto label_132;

DEFLABEL (label_138)
  (Wrd61.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd61.Obj);
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_140;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd62.Obj) = ((Wrd64.pObj) [1]);

DEFLABEL (label_139)
  (Rsp [2]) = (Wrd62.Obj);
  Rsp = (& (Rsp [1]));
  goto parse_parameters_54;

DEFLABEL (label_140)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_86)
  (Wrd62.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_84)
  (Wrd35.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_18])), (Wrd30.pObj));

DEFLABEL (label_83)
  (Wrd29.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_145)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_158;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd72.Obj) = ((Wrd74.pObj) [1]);

DEFLABEL (label_157)
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd81.uLng) == 1)
    goto label_149;

DEFLABEL (label_148)
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 1))
    goto label_147;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd82.Obj) = ((Wrd84.pObj) [1]);

DEFLABEL (label_146)
  (Rsp [5]) = (Wrd82.Obj);
  goto label_132;

DEFLABEL (label_147)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_88)
  (Wrd82.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd95.Obj) = (Rsp [0]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd96.uLng) == 1))
    goto label_156;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd92.Obj) = ((Wrd94.pObj) [1]);

DEFLABEL (label_155)
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd103.uLng) == 1))
    goto label_154;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd101.Obj) = ((Wrd102.pObj) [1]);

DEFLABEL (label_153)
  if (! ((Wrd101.Obj) == (current_block [OBJECT_10_0])))
    goto label_148;
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (Wrd115.Obj) = (Rsp [1]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd116.uLng) == 1))
    goto label_152;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd112.Obj) = ((Wrd114.pObj) [1]);

DEFLABEL (label_151)
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd123.uLng) == 1))
    goto label_150;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (* (--Rsp)) = (Wrd122.Obj);
  goto label_134;

DEFLABEL (label_150)
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_92)
  goto label_136;

DEFLABEL (label_152)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_91)
  (Wrd112.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_90)
  (Wrd101.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_89)
  (Wrd92.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_87)
  (Wrd72.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_82)
  (Wrd19.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_9])), (Wrd14.pObj));

DEFLABEL (label_81)
  (Wrd13.Obj) = Rvl;
  goto label_161;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_10_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_171;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_170;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_169)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_168;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_167)
  (Wrd25.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_166;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  ((Wrd39.pObj) [0]) = (Wrd26.Obj);

DEFLABEL (label_165)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_164;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_163)
  (Rsp [0]) = (Wrd29.Obj);
  goto loop_52;

DEFLABEL (label_164)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_41]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_96)
  (Wrd29.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_40]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (label_97)
  goto label_165;

DEFLABEL (label_168)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_39]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_95)
  (Wrd16.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_38]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_169;

DEFLABEL (label_171)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_189;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [0]);

DEFLABEL (label_188)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_173;

DEFLABEL (label_172)
  (Wrd57.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd57.Obj);
  Rsp = (& (Rsp [5]));
  goto bad_lambda_list_77;

DEFLABEL (label_173)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_29]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_187;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd62.Obj) = ((Wrd64.pObj) [0]);

DEFLABEL (label_186)
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_185;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (* (--Rsp)) = (Wrd72.Obj);

DEFLABEL (label_184)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_10_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_172;
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_183;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_182)
  (Wrd92.Obj) = (Rsp [1]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_181;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd89.Obj) = ((Wrd91.pObj) [0]);

DEFLABEL (label_180)
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd100.uLng) == 1))
    goto label_179;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd98.Obj) = ((Wrd99.pObj) [0]);

DEFLABEL (label_178)
  (Wrd105.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (Wrd108.pObj) = (& (Rhp [-2]));
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd108.pObj)));
  (Wrd120.Obj) = (Rsp [1]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if (! ((Wrd121.uLng) == 1))
    goto label_177;
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd120.Obj));
  ((Wrd119.pObj) [0]) = (Wrd106.Obj);

DEFLABEL (label_176)
  (Wrd112.Obj) = (Rsp [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 1))
    goto label_175;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd109.Obj) = ((Wrd111.pObj) [1]);

DEFLABEL (label_174)
  (Rsp [0]) = (Wrd109.Obj);
  goto loop_52;

DEFLABEL (label_175)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_34]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_113)
  (Wrd109.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_33]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (label_114)
  goto label_176;

DEFLABEL (label_179)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_32]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_112)
  (Wrd98.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_181)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_31]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_111)
  (Wrd89.Obj) = Rvl;
  goto label_180;

DEFLABEL (label_183)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_30]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_110)
  (* (--Rsp)) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_37]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_100)
  (* (--Rsp)) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_36]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_99)
  (Wrd62.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_35]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_98)
  (Wrd47.Obj) = Rvl;
  goto label_188;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_10_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_195;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_194;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_193)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_192;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_191)
  (Rsp [2]) = (Wrd16.Obj);

DEFLABEL (label_190)
  Rsp = (& (Rsp [2]));
  goto finish_76;

DEFLABEL (label_192)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_53]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_102)
  (Wrd16.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_52]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_101)
  (Wrd7.Obj) = Rvl;
  goto label_193;

DEFLABEL (label_195)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_215;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_214)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_213;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd33.Obj) = ((Wrd34.pObj) [0]);

DEFLABEL (label_212)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_199;

DEFLABEL (label_198)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_197;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_196)
  (Rsp [5]) = (Wrd41.Obj);
  Rsp = (& (Rsp [5]));
  goto bad_lambda_list_77;

DEFLABEL (label_197)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_51]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_105)
  (Wrd41.Obj) = Rvl;
  goto label_196;

DEFLABEL (label_199)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_42]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_211;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd54.Obj) = ((Wrd56.pObj) [1]);

DEFLABEL (label_210)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_209;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd63.Obj) = ((Wrd64.pObj) [0]);

DEFLABEL (label_208)
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_207;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_206)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_10_42);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_198;
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_205;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [1]);

DEFLABEL (label_204)
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_203;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd88.Obj) = ((Wrd89.pObj) [0]);

DEFLABEL (label_202)
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_201;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd95.Obj) = ((Wrd96.pObj) [0]);

DEFLABEL (label_200)
  (Rsp [2]) = (Wrd95.Obj);
  goto label_190;

DEFLABEL (label_201)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_45]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_117)
  (Wrd95.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_44]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_116)
  (Wrd88.Obj) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_43]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_115)
  (Wrd79.Obj) = Rvl;
  goto label_204;

DEFLABEL (label_207)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_50]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_108)
  (* (--Rsp)) = Rvl;
  goto label_206;

DEFLABEL (label_209)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_49]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_107)
  (Wrd63.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_48]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_106)
  (Wrd54.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_47]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_104)
  (Wrd33.Obj) = Rvl;
  goto label_212;

DEFLABEL (label_215)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_46]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_103)
  (Wrd24.Obj) = Rvl;
  goto label_214;

DEFLABEL (finish_126)
DEFLABEL (finish_76)
  INTERRUPT_CHECK (26, LABEL_10_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_222;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_221)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_26]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_10_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_220;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_219)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_26]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_10_54);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_217;
  (Wrd14.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_216;

DEFLABEL (label_217)
  (Wrd17.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_216)
DEFLABEL (label_218)
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_57]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_10_56);
  (* (--Rsp)) = Rvl;
  goto do_loop_71;

DEFLABEL (label_220)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_55]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_109)
  (* (--Rsp)) = Rvl;
  goto label_219;

DEFLABEL (label_222)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_221;

DEFLABEL (bad_lambda_list_127)
DEFLABEL (bad_lambda_list_77)
  INTERRUPT_CHECK (26, LABEL_10_27);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_28]));

DEFLABEL (do_loop_128)
DEFLABEL (do_loop_71)
  INTERRUPT_CHECK (26, LABEL_10_58);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_10_0])))
    goto label_223;
  Rsp = (& (Rsp [1]));
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd31.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_60);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_59])));
  Rhp += 3;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd39 = Wrd34;
  (Wrd40.Obj) = (Rsp [2]);
  ((Wrd39.pObj) [2]) = (Wrd40.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  ((Wrd39.pObj) [3]) = (Wrd38.Obj);
  (Wrd36.Obj) = (Rsp [0]);
  ((Wrd39.pObj) [4]) = (Wrd36.Obj);
  Rvl = (Wrd33.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_223)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_61]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_232;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_231)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_230;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_229)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_64]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_10_61);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_226;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_65]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_67]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_10_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_68]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_10_67);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_228;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_227)
  (Wrd14.Obj) = (current_block [OBJECT_10_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_70]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_10_65);

DEFLABEL (label_226)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_225;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_224)
  (Rsp [0]) = (Wrd15.Obj);
  goto do_loop_71;

DEFLABEL (label_225)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_66]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_120)
  (Wrd15.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_228)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_69]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_121)
  (* (--Rsp)) = Rvl;
  goto label_227;

DEFLABEL (label_230)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_63]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_119)
  (* (--Rsp)) = Rvl;
  goto label_229;

DEFLABEL (label_232)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_62]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_118)
  (* (--Rsp)) = Rvl;
  goto label_231;

DEFLABEL (lambda_129)
  CLOSURE_HEADER (LABEL_10_59);

DEFLABEL (lambda_73)
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

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_8 9
#define LABEL_11_10 11
#define LABEL_11_6 13
#define LABEL_11_11 15
#define LABEL_11_12 17
#define LABEL_11_13 19
#define LABEL_11_14 21
#define LABEL_11_15 23
#define LABEL_11_16 25
#define ENVIRONMENT_LABEL_11_3 36
#define DEBUGGING_LABEL_11_2 35
#define OBJECT_11_2 34
#define OBJECT_11_1 33
#define OBJECT_11_0 32
#define EXECUTE_CACHE_11_9 27
#define FREE_REFERENCE_11_1 30
#define FREE_REFERENCE_11_0 31
#define FREE_REFERENCES_LABEL_11_0 26
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambda_list_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd65;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd94;
  machine_word Wrd92;
  machine_word Wrd76;
  machine_word Wrd84;
  machine_word Wrd91;
  machine_word Wrd87;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd79;
  machine_word Wrd96;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_11_4);
      goto map_mit_lambda_list_13;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto loop_11;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_11_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_11_12);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_11_13);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_11_14);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_11_15);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_11_16);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_mit_lambda_list_23)
DEFLABEL (map_mit_lambda_list_13)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_11;

DEFLABEL (loop_24)
DEFLABEL (loop_11)
  DLINK_INTERRUPT_CHECK (25, LABEL_11_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_26;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_26)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_42;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_41)
  Rdl = (& (Rsp [2]));
  goto loop_11;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd20.Obj) = ((Wrd13.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_40;
  Wrd12 = Wrd20;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_38;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_37)
  (Wrd35.Obj) = (* (Rsp++));
  if ((Wrd22.Obj) == (Wrd35.Obj))
    goto label_30;
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd44.Obj) = ((Wrd37.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_36;
  Wrd36 = Wrd44;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_34;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [0]);

DEFLABEL (label_33)
  (Wrd59.Obj) = (* (Rsp++));
  if ((Wrd46.Obj) == (Wrd59.Obj))
    goto label_30;
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_29;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_28)
  (Wrd73.Obj) = (Rsp [5]);
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (* (--Rsp)) = (Wrd75.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (Wrd96.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd79.Obj) = Rvl;

DEFLABEL (label_27)
  (Wrd92.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_29)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_20)
  (Wrd65.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd65.Obj));
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd82.Obj) = (Rsp [3]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_32;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [0]);

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  (Wrd76.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd76.Obj));
  goto label_27;

DEFLABEL (label_32)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_21)
  (Wrd84.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd79.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_19)
  (Wrd51.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd46.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_13])), (Wrd37.pObj));

DEFLABEL (label_18)
  (Wrd38.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_17)
  (Wrd27.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd22.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_11])), (Wrd13.pObj));

DEFLABEL (label_16)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_15)
  (Wrd27.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd27.Obj));
  (* (--Rsp)) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_8 7
#define LABEL_12_7 9
#define LABEL_12_11 11
#define LABEL_12_12 13
#define LABEL_12_9 15
#define LABEL_12_13 17
#define LABEL_12_14 19
#define LABEL_12_15 21
#define ENVIRONMENT_LABEL_12_3 35
#define DEBUGGING_LABEL_12_2 34
#define OBJECT_12_0 33
#define EXECUTE_CACHE_12_16 23
#define EXECUTE_CACHE_12_10 25
#define EXECUTE_CACHE_12_6 27
#define FREE_REFERENCE_12_2 30
#define FREE_REFERENCE_12_1 31
#define FREE_REFERENCE_12_0 32
#define FREE_REFERENCES_LABEL_12_0 22
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lambda_list_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_12_4);
      goto make_lambda_list_13;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_12_12);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_12_13);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_12_14);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_12_15);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_lambda_list_20)
DEFLABEL (make_lambda_list_13)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_8);

DEFLABEL (label_36)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == (current_block [OBJECT_12_0]))
    goto label_31;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_30;
  Wrd10 = Wrd14;

DEFLABEL (label_29)
  (Wrd19.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_2]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_28;
  Wrd25 = Wrd29;

DEFLABEL (label_27)
  (Wrd31.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd31.Obj);

DEFLABEL (label_26)
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_25)
  (Wrd35.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  if ((Wrd36.Obj) == (current_block [OBJECT_12_0]))
    goto label_24;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (* (--Rsp)) = Rvl;
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_23;
  Wrd61 = Wrd65;

DEFLABEL (label_22)
  (Wrd67.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd67.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));

DEFLABEL (label_21)
  (Rsp [4]) = (Wrd43.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_12])), (Wrd62.pObj));

DEFLABEL (label_18)
  (Wrd61.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd43.Obj) = (Rsp [0]);
  goto label_21;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_15])), (Wrd26.pObj));

DEFLABEL (label_16)
  (Wrd25.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_14])), (Wrd11.pObj));

DEFLABEL (label_15)
  (Wrd10.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_25;

DEFLABEL (label_32)
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.Obj) = (current_block [OBJECT_12_0]);
  if ((Wrd46.Obj) == (Wrd47.Obj))
    goto label_35;
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd53.Obj) = ((Wrd50.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_34;
  Wrd49 = Wrd53;

DEFLABEL (label_33)
  (Wrd58.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  goto label_26;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_13])), (Wrd50.pObj));

DEFLABEL (label_17)
  (Wrd49.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd47.Obj);
  goto label_25;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_7 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_12 17
#define ENVIRONMENT_LABEL_3 32
#define DEBUGGING_LABEL_2 31
#define PURIFICATION_ROOT 30
#define OBJECT_8 29
#define OBJECT_7 28
#define OBJECT_6 27
#define OBJECT_5 26
#define OBJECT_4 25
#define OBJECT_3 24
#define OBJECT_2 23
#define OBJECT_1 22
#define OBJECT_0 21
#define GLOBAL_EXECUTE_CACHE_6 19
#define FREE_REFERENCES_LABEL_0 18
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
lambda_list_so_f4e45e250f4387a3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd6;
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
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto expression_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_7)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_11])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_11)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_10)
  {
    static const short sections [] =
      {
	0,
	2,
	2,
	2,
	1,
	1,
	1,
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
    if (counter > 12)
      goto label_9;
    blocks = (current_block [OBJECT_8]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_10])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_9)
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd6.Obj) = (* (Rsp++));
  (Wrd7.Obj) = (* (Rsp++));
  (Wrd14.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-5]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_4]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_lambda_list_so_f4e45e250f4387a3 [12] =
  {
    { "lambda_list_so_code_1", 10, lambda_list_so_code_1 },
    { "lambda_list_so_code_2", 2, lambda_list_so_code_2 },
    { "lambda_list_so_code_3", 1, lambda_list_so_code_3 },
    { "lambda_list_so_code_4", 11, lambda_list_so_code_4 },
    { "lambda_list_so_code_5", 9, lambda_list_so_code_5 },
    { "lambda_list_so_code_6", 43, lambda_list_so_code_6 },
    { "lambda_list_so_code_7", 2, lambda_list_so_code_7 },
    { "lambda_list_so_code_8", 1, lambda_list_so_code_8 },
    { "lambda_list_so_code_9", 9, lambda_list_so_code_9 },
    { "lambda_list_so_code_10", 59, lambda_list_so_code_10 },
    { "lambda_list_so_code_11", 12, lambda_list_so_code_11 },
    { "lambda_list_so_code_12", 10, lambda_list_so_code_12 }
  };

int
decl_lambda_list_so_f4e45e250f4387a3 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_lambda_list_so_f4e45e250f4387a3);
  return (0);
}

DECLARE_COMPILED_CODE ("lambda-list.so", 8, decl_lambda_list_so_f4e45e250f4387a3, lambda_list_so_f4e45e250f4387a3)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_lambda_list_so_data_f4e45e250f4387a3 [2554] =
  "\x9f\x01\x19\x8a\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\xc1"
  "\xba\x07\x08\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbd\x1d\xb0\x82\x88\x1d\x28\x0d\xbe\x28\x0d\xbf\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x06\x1d\x0c\x28\x0d\x1c"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xb1\xb2\x08\x28\x0d"
  "\x1c\x28\xb3\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\x08\xb2\xb1\x28\xb3\x28\xb7\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x86\x88\xb1\x07\xb2\x08\x0d\x1c\x0d\x1c\x24\x28"
  "\xb3\x28\xb4\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x0d\x1c\x0d\x1c\x1b\x1b"
  "\x0d\x0d\x0d\x0d\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0c\xc2\x0d\x1c\xb1\xb2\x08\x1b\x1b\x24\x28\xb3\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\xb4\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbc\x1d\xb0\x02\x88\xb2\x08\xb1\x1b\x1b\x24\x28\xb3"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x02"
  "\x88\x08\x1b\x1b\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x17\xba\x88\xb2\x1b\x1b\x1b\x1b\x9b\x83\x85"
  "\x1b\x2a\xb3\x2a\xb4\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a\x17\x0d\x0d\x1b\x0d\x1b\x0d\x1b"
  "\x0d\x0d\xb7\x0d\xb6\x17\xc2\x02\x84\x28\x0d\x26\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5a"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x6c\x61\x6d\x62\x64\x61"
  "\x2d\x6c\x69\x73\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04"
  "\x63\x64\x72\x04\x63\x61\x72\x03\x0c\x69\x64\x65\x6e\x74\x69\x66"
  "\x69\x65\x72\x3f\x04\x05\x6d\x65\x6d\x71\x03\x12\x16\x81\x85\x02"
  "\x11\x14\x81\x85\x02\x10\x12\x81\x85\x02\x0f\x10\x81\x89\x02\x0e"
  "\x0e\x81\x85\x02\x0d\x0c\x81\x85\x02\x0c\x0a\x81\x87\x02\x0b\x08"
  "\x81\x85\x02\x0a\x06\x81\x85\x02\x09\x04\x83\x04\x15\x21\x02\x02"
  "\x03\x12\x72\x34\x72\x73\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x6c\x69"
  "\x73\x74\x3f\x04\x1b\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x72"
  "\x34\x72\x73\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x6c\x69\x73\x74\x03"
  "\x14\x06\x81\x85\x02\x13\x04\x84\x04\x05\x0e\x09\x02\x08\x11\x52"
  "\x34\x52\x53\x20\x6c\x61\x6d\x62\x64\x61\x20\x6c\x69\x73\x74\x05"
  "\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x0a\x02\x15\x04\x84\x04"
  "\x03\x0c\x0b\x02\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x0c\x03"
  "\x03\x04\x20\x18\x81\x85\x02\x1f\x16\x81\x85\x02\x1e\x14\x81\x87"
  "\x02\x1d\x12\x81\x87\x02\x1c\x10\x81\x87\x02\x1b\x0e\x81\x89\x02"
  "\x1a\x0c\x81\x87\x02\x19\x0a\x81\x87\x02\x18\x08\x81\x87\x02\x17"
  "\x06\x81\x87\x02\x16\x04\x83\x04\x17\x24\x0d\x02\x03\x03\x03\x29"
  "\x14\xfd\xff\x03\x28\x12\xfd\xff\x03\x27\x10\xfd\xff\x03\x26\x0e"
  "\xfd\xff\x03\x25\x0c\xfd\xff\x03\x24\x0a\xff\xff\x03\x23\x08\xfd"
  "\xff\x03\x22\x06\xfd\xff\x03\x21\x04\x84\x06\x13\x1e\x0e\x02\x14"
  "\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x6f\x70\x74\x69\x6f"
  "\x6e\x61\x6c\x0f\x10\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a"
  "\x72\x65\x73\x74\x10\x03\x03\x04\x03\x06\x6c\x69\x73\x74\x3f\x04"
  "\x54\x58\x81\x87\x02\x53\x56\x81\x87\x02\x52\x54\x81\x8b\x02\x51"
  "\x52\x81\x87\x02\x50\x50\x81\x89\x02\x4f\x4e\x81\x87\x02\x4e\x4c"
  "\x81\x87\x02\x4d\x4a\x81\x87\x02\x4c\x48\x81\x87\x02\x4b\x46\x81"
  "\x85\x02\x4a\x44\x81\x87\x02\x49\x42\x81\x85\x02\x48\x40\x81\x87"
  "\x02\x47\x3e\x81\x87\x02\x46\x3c\x81\x85\x02\x45\x3a\x81\x87\x02"
  "\x44\x38\x81\x89\x02\x43\x36\x81\x87\x02\x42\x34\x81\x8b\x02\x41"
  "\x32\x81\x87\x02\x40\x30\x81\x89\x02\x3f\x2e\x81\x87\x02\x3e\x2c"
  "\x81\x8b\x02\x3d\x2a\x81\x8b\x02\x3c\x28\x81\x87\x02\x3b\x26\x81"
  "\x89\x02\x3a\x24\x81\x87\x02\x39\x22\x81\x87\x02\x38\x20\x81\x8b"
  "\x02\x37\x1e\x81\x87\x02\x36\x1c\x81\x89\x02\x35\x1a\x81\x87\x02"
  "\x34\x18\x81\x89\x02\x33\x16\x81\x87\x02\x32\x14\x81\x87\x02\x31"
  "\x12\x81\x85\x02\x30\x10\x81\x85\x02\x2f\x0e\x85\x08\x2e\x0c\x81"
  "\x87\x02\x2d\x0a\x81\x87\x02\x2c\x08\x81\x89\x02\x2b\x06\x81\x87"
  "\x02\x2a\x04\x83\x04\x57\x68\x11\x02\x08\x02\x03\x11\x6d\x69\x74"
  "\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x6c\x69\x73\x74\x3f\x12\x04\x1a"
  "\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x6d\x69\x74\x2d\x6c\x61"
  "\x6d\x62\x64\x61\x2d\x6c\x69\x73\x74\x13\x03\x56\x06\x81\x85\x02"
  "\x55\x04\x84\x04\x05\x0e\x14\x02\x09\x08\x1b\x4d\x49\x54\x2f\x47"
  "\x4e\x55\x20\x53\x63\x68\x65\x6d\x65\x20\x6c\x61\x6d\x62\x64\x61"
  "\x20\x6c\x69\x73\x74\x05\x0a\x02\x57\x04\x84\x04\x03\x0c\x0a\x02"
  "\x0a\x15\x23\x5b\x75\x6e\x6e\x61\x6d\x65\x64\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x5d\x0f\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61"
  "\x67\x3a\x61\x75\x78\x15\x0f\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61"
  "\x67\x3a\x6b\x65\x79\x16\x0f\x10\x1b\x6c\x61\x6d\x62\x64\x61\x2d"
  "\x74\x61\x67\x3a\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x6c\x61\x6d"
  "\x62\x64\x61\x1a\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x69"
  "\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x6c\x65\x78\x70\x72\x15\x6c\x61"
  "\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x66\x6c\x75\x69\x64\x2d\x6c"
  "\x65\x74\x0f\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x6c\x65"
  "\x74\x09\x60\x14\x81\x83\x02\x5f\x12\x81\x83\x02\x5e\x10\x81\x83"
  "\x02\x5d\x0e\x81\x83\x02\x5c\x0c\x81\x83\x02\x5b\x0a\x81\x83\x02"
  "\x5a\x08\x81\x83\x02\x59\x06\x81\x83\x02\x58\x04\x83\x04\x13\x21"
  "\x17\x02\x0b\x25\x6c\x61\x6d\x62\x64\x61\x20\x6c\x69\x73\x74\x20"
  "\x68\x61\x73\x20\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x70\x61"
  "\x72\x61\x6d\x65\x74\x65\x72\x3a\x04\x20\x69\x6e\x09\x73\x65\x74"
  "\x2d\x63\x61\x72\x21\x16\x70\x61\x72\x73\x65\x2d\x6d\x69\x74\x2d"
  "\x6c\x61\x6d\x62\x64\x61\x2d\x6c\x69\x73\x74\x18\x10\x0f\x03\x03"
  "\x03\x0c\x04\x13\x05\x07\x61\x70\x70\x65\x6e\x64\x0c\x04\x03\x15"
  "\x65\x72\x72\x6f\x72\x2d\x69\x72\x72\x69\x74\x61\x6e\x74\x2f\x6e"
  "\x6f\x69\x73\x65\x06\x06\x65\x72\x72\x6f\x72\x08\x9b\x01\x78\x81"
  "\x95\x02\x9a\x01\x76\x81\x93\x02\x99\x01\x74\x81\x85\x02\x98\x01"
  "\x72\x81\x8f\x02\x97\x01\x70\x81\x8f\x02\x96\x01\x6e\x81\x8f\x02"
  "\x95\x01\x6c\x81\x93\x02\x94\x01\x6a\x81\x91\x02\x93\x01\x68\x81"
  "\x8f\x02\x92\x01\x66\x81\x8d\x02\x91\x01\x64\x81\x8b\x02\x90\x01"
  "\x62\x81\x8d\x02\x8f\x01\x60\x81\x89\x02\x8e\x01\x5e\x81\x8d\x02"
  "\x8d\x01\x5c\x81\x8d\x02\x8c\x01\x5a\x81\x8d\x02\x8b\x01\x58\x81"
  "\x8f\x02\x8a\x01\x56\x81\x8f\x02\x89\x01\x54\x81\x8f\x02\x88\x01"
  "\x52\x81\x8d\x02\x87\x01\x50\x81\x8d\x02\x86\x01\x4e\x81\x8d\x02"
  "\x85\x01\x4c\x81\x8d\x02\x84\x01\x4a\x81\x8d\x02\x83\x01\x48\x81"
  "\x8d\x02\x82\x01\x46\x81\x8d\x02\x81\x01\x44\x81\x8d\x02\x80\x01"
  "\x42\x81\x8d\x02\x7f\x40\x81\x8f\x02\x7e\x3e\x81\x8d\x02\x7d\x3c"
  "\x81\x8f\x02\x7c\x3a\x81\x8f\x02\x7b\x38\x81\x8d\x02\x7a\x36\x81"
  "\x8d\x02\x79\x34\x81\x8d\x02\x78\x32\x81\x8d\x02\x77\x30\x81\x8f"
  "\x02\x76\x2e\x81\x8f\x02\x75\x2c\x81\x8d\x02\x74\x2a\x81\x8d\x02"
  "\x73\x28\x81\x83\x02\x72\x26\x81\x8b\x02\x71\x24\x81\x89\x02\x70"
  "\x22\x81\x8f\x02\x6f\x20\x81\x8d\x02\x6e\x1e\x81\x8f\x02\x6d\x1c"
  "\x81\x8d\x02\x6c\x1a\x81\x8d\x02\x6b\x18\x81\x8f\x02\x6a\x16\x81"
  "\x8f\x02\x69\x14\x81\x8d\x02\x68\x12\x81\x8d\x02\x67\x10\x81\x8d"
  "\x02\x66\x0e\x81\x8f\x02\x65\x0c\x81\x8d\x02\x64\x0a\x81\x8d\x02"
  "\x63\x08\x81\x8d\x02\x62\x06\x81\x8b\x02\x61\x04\x83\x04\x77\x93"
  "\x01\x02\x0c\x0f\x10\x03\x03\x02\xa7\x01\x1a\xfd\xff\x03\xa6\x01"
  "\x18\xfd\xff\x03\xa5\x01\x16\xfd\xff\x03\xa4\x01\x14\xfd\xff\x03"
  "\xa3\x01\x12\xfd\xff\x03\xa2\x01\x10\xfd\xff\x03\xa1\x01\x0e\xfd"
  "\xff\x03\xa0\x01\x0c\xfd\xff\x03\x9f\x01\x0a\xfd\xff\x03\x9e\x01"
  "\x08\xfd\xff\x03\x9d\x01\x06\xff\xff\x03\x9c\x01\x04\x84\x06\x19"
  "\x25\x02\x0d\x0f\x15\x10\x04\x03\x21\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x6c\x69\x73\x74\x2d\x6f\x66\x2d\x75\x6e\x69\x71\x75"
  "\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x03\x11\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x04\x0c\x04\xb1\x01"
  "\x16\x81\x8b\x02\xb0\x01\x14\x81\x89\x02\xaf\x01\x12\x81\x89\x02"
  "\xae\x01\x10\x81\x89\x02\xad\x01\x0e\x81\x8d\x02\xac\x01\x0c\x81"
  "\x8b\x02\xab\x01\x0a\x81\x89\x02\xaa\x01\x08\x81\x89\x02\xa9\x01"
  "\x06\x81\x89\x02\xa8\x01\x04\x86\x0a\x15\x24\x0c\x0d\x15\x16\x10"
  "\x0f\x0c\x04\x04\x04\x17\x04\x0a\x04\x14\x04\x11\x04\x0e\x04\x0d"
  "\x04\x0b\x04\x09\x04\x04\x0d\x11\x6d\x61\x6b\x65\x2d\x6c\x61\x6d"
  "\x62\x64\x61\x2d\x6c\x69\x73\x74\x14\x6d\x61\x70\x2d\x6d\x69\x74"
  "\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x6c\x69\x73\x74\x18\x0c\x6c\x61"
  "\x6d\x62\x64\x61\x2d\x74\x61\x67\x3f\x13\x1a\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x6d\x69\x74\x2d\x6c\x61\x6d\x62\x64\x61\x2d"
  "\x6c\x69\x73\x74\x12\x15\x6d\x61\x70\x2d\x72\x34\x72\x73\x2d\x6c"
  "\x61\x6d\x62\x64\x61\x2d\x6c\x69\x73\x74\x17\x70\x61\x72\x73\x65"
  "\x2d\x72\x34\x72\x73\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x6c\x69\x73"
  "\x74\x1b\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x72\x34\x72\x73"
  "\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x6c\x69\x73\x74\x0d\x10\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x09\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\x08\x12\x80\x80\x04\x07\x10\x81\x81\x02\x06\x0e\x81\x81\x02\x05"
  "\x0c\x81\x8b\x02\x04\x0a\x81\x89\x02\x03\x08\x81\x87\x02\x02\x06"
  "\x81\x85\x02\x01\x04\x81\x83\x02\x11\x21";

SCHEME_OBJECT *
lambda_list_so_data_f4e45e250f4387a3 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_lambda_list_so_data_f4e45e250f4387a3 [0]))), (sizeof (prog_lambda_list_so_data_f4e45e250f4387a3)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_12]));
}

DECLARE_COMPILED_DATA_NS ("lambda-list.so", lambda_list_so_data_f4e45e250f4387a3)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("lambda-list.so", "9811840d1ef96437")
