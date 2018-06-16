/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:15-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define EXECUTE_CACHE_1_7 7
#define EXECUTE_CACHE_1_6 9
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_1_4);
      goto subproblem_ordering_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subproblem_ordering_4)
DEFLABEL (subproblem_ordering_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (lambda_5)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_9 11
#define LABEL_2_11 13
#define LABEL_2_14 15
#define LABEL_2_15 17
#define LABEL_2_13 19
#define LABEL_2_17 21
#define TAG_2_18 9
#define LABEL_2_19 23
#define ENVIRONMENT_LABEL_2_3 42
#define DEBUGGING_LABEL_2_2 41
#define OBJECT_2_5 40
#define OBJECT_2_4 39
#define OBJECT_2_3 38
#define OBJECT_2_2 37
#define OBJECT_2_1 36
#define OBJECT_2_0 35
#define EXECUTE_CACHE_2_20 25
#define EXECUTE_CACHE_2_16 27
#define EXECUTE_CACHE_2_12 29
#define EXECUTE_CACHE_2_10 31
#define EXECUTE_CACHE_2_8 33
#define FREE_REFERENCES_LABEL_2_0 24
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd40;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_2_4);
      goto order_parallelB_12;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_2_15);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_2_17);
      goto lambda_20;

    case 10:
      current_block = (Rpc - LABEL_2_19);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (order_parallelB_19)
DEFLABEL (order_parallelB_12)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_28)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_27;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_27;
  (Wrd23.Obj) = ((Wrd27.pObj) [6]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_26)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_25;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_25;
  (Wrd11.Obj) = ((Wrd15.pObj) [9]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_24)
  (Wrd34.Obj) = (Rsp [6]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_23;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd33.Lng))))
    goto label_23;
  (Wrd27.Obj) = ((Wrd31.pObj) [8]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_17])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_23)
  (Wrd36.Obj) = (Rsp [6]);
  (Wrd37.Obj) = (current_block [OBJECT_2_5]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.Obj) = (current_block [OBJECT_2_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_2_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_2_17);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_19);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_5 3
#define LABEL_3_6 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_4 13
#define LABEL_3_11 15
#define LABEL_3_12 17
#define LABEL_3_16 19
#define LABEL_3_15 21
#define LABEL_3_19 23
#define TAG_3_20 10
#define ENVIRONMENT_LABEL_3_3 49
#define DEBUGGING_LABEL_3_2 48
#define OBJECT_3_9 47
#define OBJECT_3_8 46
#define OBJECT_3_7 45
#define OBJECT_3_6 44
#define OBJECT_3_5 43
#define OBJECT_3_4 42
#define OBJECT_3_3 41
#define OBJECT_3_2 40
#define OBJECT_3_1 39
#define OBJECT_3_0 38
#define EXECUTE_CACHE_3_18 25
#define EXECUTE_CACHE_3_17 27
#define EXECUTE_CACHE_3_14 29
#define EXECUTE_CACHE_3_13 31
#define EXECUTE_CACHE_3_10 33
#define FREE_REFERENCE_3_1 36
#define FREE_REFERENCE_3_0 37
#define FREE_REFERENCES_LABEL_3_0 24
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd43;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd96;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd103;
  machine_word Wrd95;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd73;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd67;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
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
      current_block = (Rpc - LABEL_3_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_3_4);
      goto order_subproblems_application_13;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_3_16);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto lambda_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (order_subproblems_application_23)
DEFLABEL (order_subproblems_application_13)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_43;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_43;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_42)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == (current_block [OBJECT_3_5]))
    goto label_28;
  if ((Wrd21.Obj) == (current_block [OBJECT_3_7]))
    goto label_25;
  (Wrd25.Obj) = (current_block [OBJECT_3_9]);
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd26.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (label_25)
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_3_8]);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_27;
  Wrd35 = Wrd39;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_19])));
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

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_16])), (Wrd36.pObj));

DEFLABEL (label_16)
  (Wrd35.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_41;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd55.Lng))))
    goto label_41;
  (Wrd43.Obj) = ((Wrd53.pObj) [13]);
  if (! ((Wrd43.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_30;

DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (label_30)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (label_32)
  (Wrd68.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd71.Obj) = ((Wrd68.pObj) [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd72.uLng) == 50)
    goto label_40;
  Wrd67 = Wrd71;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 10))
    goto label_38;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd81.Lng))))
    goto label_38;
  (Wrd73.Obj) = ((Wrd79.pObj) [11]);

DEFLABEL (label_37)
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_36;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd89.Obj) = ((Wrd90.pObj) [0]);

DEFLABEL (label_35)
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd103.uLng) == 10))
    goto label_34;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd102.Lng))))
    goto label_34;
  (Wrd96.Obj) = ((Wrd100.pObj) [1]);

DEFLABEL (label_33)
  (Wrd109.Obj) = (* (Rsp++));
  if ((Wrd96.Obj) == (Wrd109.Obj))
    goto label_29;
  goto label_31;

DEFLABEL (label_34)
  (Wrd105.Obj) = (current_block [OBJECT_3_3]);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_21)
  (Wrd96.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_20)
  (Wrd89.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd84.Obj) = (Rsp [2]);
  (Wrd85.Obj) = (current_block [OBJECT_3_0]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_19)
  (Wrd73.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd68.pObj));

DEFLABEL (label_18)
  (Wrd67.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.Obj) = (current_block [OBJECT_3_6]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (label_43)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_3_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_3_19);

DEFLABEL (lambda_4)
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
order_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto linearize_subproblemsB_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (linearize_subproblemsB_4)
DEFLABEL (linearize_subproblemsB_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define ENVIRONMENT_LABEL_5_3 16
#define DEBUGGING_LABEL_5_2 15
#define OBJECT_5_1 14
#define OBJECT_5_0 13
#define EXECUTE_CACHE_5_8 9
#define EXECUTE_CACHE_5_7 11
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      goto linearize_subproblemB_2;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (linearize_subproblemB_6)
DEFLABEL (linearize_subproblemB_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_8;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_8;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_8)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_5_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_6 9
#define LABEL_6_10 11
#define LABEL_6_9 13
#define LABEL_6_8 15
#define LABEL_6_12 17
#define ENVIRONMENT_LABEL_6_3 27
#define DEBUGGING_LABEL_6_2 26
#define OBJECT_6_2 25
#define OBJECT_6_1 24
#define OBJECT_6_0 23
#define EXECUTE_CACHE_6_13 19
#define EXECUTE_CACHE_6_11 21
#define FREE_REFERENCES_LABEL_6_0 18
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_6_4);
      goto linearize_subproblems_11;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto loop_9;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_6_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (linearize_subproblems_17)
DEFLABEL (linearize_subproblems_11)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [5]));
  goto loop_9;

DEFLABEL (loop_18)
DEFLABEL (loop_9)
  DLINK_INTERRUPT_CHECK (25, LABEL_6_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_6_0])))
    goto label_19;
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  Rvl = ((Wrd31.pObj) [2]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_19)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_28;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_27)
  Rdl = (& (Rsp [2]));
  goto loop_9;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_26;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd31.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd31.uLng) == 1)
    goto label_20;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_20)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (Wrd24.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd24.Obj));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_23)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_22;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_21)
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (label_22)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_15)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  Rsp = (& (Rsp [2]));
  (Wrd32.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd32.Obj));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_23;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_14)
  (Wrd25.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd25.Obj));
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_13)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_8 9
#define LABEL_7_10 11
#define LABEL_7_11 13
#define LABEL_7_12 15
#define LABEL_7_13 17
#define LABEL_7_14 19
#define LABEL_7_7 21
#define LABEL_7_17 23
#define LABEL_7_18 25
#define LABEL_7_20 27
#define LABEL_7_21 29
#define LABEL_7_25 31
#define LABEL_7_23 33
#define LABEL_7_24 35
#define LABEL_7_28 37
#define LABEL_7_29 39
#define LABEL_7_30 41
#define LABEL_7_31 43
#define LABEL_7_16 45
#define ENVIRONMENT_LABEL_7_3 80
#define DEBUGGING_LABEL_7_2 79
#define OBJECT_7_11 78
#define OBJECT_7_10 77
#define OBJECT_7_9 76
#define OBJECT_7_8 75
#define OBJECT_7_7 74
#define OBJECT_7_6 73
#define OBJECT_7_5 72
#define OBJECT_7_4 71
#define OBJECT_7_3 70
#define OBJECT_7_2 69
#define OBJECT_7_1 68
#define OBJECT_7_0 67
#define EXECUTE_CACHE_7_33 47
#define EXECUTE_CACHE_7_32 49
#define EXECUTE_CACHE_7_27 51
#define EXECUTE_CACHE_7_26 53
#define EXECUTE_CACHE_7_22 55
#define EXECUTE_CACHE_7_19 57
#define EXECUTE_CACHE_7_15 59
#define EXECUTE_CACHE_7_9 61
#define FREE_REFERENCE_7_2 64
#define FREE_REFERENCE_7_1 65
#define FREE_REFERENCE_7_0 66
#define FREE_REFERENCES_LABEL_7_0 46
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd79;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd115;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd139;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd125;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd101;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd98;
  machine_word Wrd141;
  machine_word Wrd94;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_7_4);
      goto linearize_subproblem_24;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_7_12);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_7_13);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_7_14);
      goto label_39;

    case 9:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_7_17);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_7_18);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_7_20);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_7_21);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_7_25);
      goto label_29;

    case 15:
      current_block = (Rpc - LABEL_7_23);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_7_24);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_7_28);
      goto label_34;

    case 18:
      current_block = (Rpc - LABEL_7_29);
      goto label_37;

    case 19:
      current_block = (Rpc - LABEL_7_30);
      goto label_36;

    case 20:
      current_block = (Rpc - LABEL_7_31);
      goto label_35;

    case 21:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (linearize_subproblem_42)
DEFLABEL (linearize_subproblem_24)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_78;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_78;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_77)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_76;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_76;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_75)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_74;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd48.Lng))))
    goto label_74;
  (Wrd42.Obj) = ((Wrd46.pObj) [3]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_73)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_24]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_54;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd21.Lng))))
    goto label_54;
  (Wrd15.Obj) = ((Wrd19.pObj) [11]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_7_24);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;
  (Wrd66.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [7]);
  (Rsp [1]) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_27]));

DEFLABEL (label_43)
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 10))
    goto label_52;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_52;
  (Wrd7.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_51)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd59.uLng) == 62))
    goto label_50;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd58.Lng))))
    goto label_50;
  (Wrd24.Obj) = ((Wrd56.pObj) [8]);
  if (! ((Wrd24.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_45;

DEFLABEL (label_44)
  (Wrd26.Obj) = (current_block [OBJECT_7_11]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_33]));

DEFLABEL (label_45)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_49;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd45.Lng))))
    goto label_49;
  (Wrd30.Obj) = ((Wrd43.pObj) [7]);
  if (! ((Wrd30.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_48)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_47;
  Wrd32 = Wrd36;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [8]);
  (Rsp [2]) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_32]));

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_31])), (Wrd33.pObj));

DEFLABEL (label_35)
  (Wrd32.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (current_block [OBJECT_7_10]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_30]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_44;

DEFLABEL (label_50)
  (Wrd61.Obj) = (current_block [OBJECT_7_9]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_29]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_45;

DEFLABEL (label_52)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_7_8]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_28]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_34)
  (Wrd7.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_7_7]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_72;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd41.Lng))))
    goto label_72;
  (Wrd35.Obj) = ((Wrd39.pObj) [4]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_71)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_70;
  Wrd50 = Wrd54;

DEFLABEL (label_69)
  (Wrd56.Obj) = (* (Rsp++));
  if ((Wrd50.Obj) == (Wrd56.Obj))
    goto label_68;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd69.Obj) = (Rsp [5]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 62))
    goto label_67;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd68.Lng))))
    goto label_67;
  (Wrd62.Obj) = ((Wrd66.pObj) [4]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_66)
  (Wrd76.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd87.uLng) == 62))
    goto label_65;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd85.Lng))))
    goto label_65;
  (Wrd79.Obj) = ((Wrd83.pObj) [2]);
  (* (--Rsp)) = (Wrd79.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (* (--Rsp)) = Rvl;
  (Wrd94.Obj) = (Rsp [6]);
  if ((Wrd94.Obj) == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd109.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd109.uLng) == 10))
    goto label_61;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd107.Lng))))
    goto label_61;
  (Wrd101.Obj) = ((Wrd105.pObj) [2]);
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_60)
  (Wrd132.Obj) = (Rsp [8]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd133.uLng) == 10))
    goto label_59;
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd132.Obj));
  (Wrd130.Obj) = ((Wrd129.pObj) [0]);
  (Wrd131.Lng) = (FIXNUM_TO_LONG (Wrd130.Obj));
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd131.Lng))))
    goto label_59;
  (Wrd125.Obj) = (Rsp [0]);
  ((Wrd129.pObj) [25]) = (Wrd125.Obj);

DEFLABEL (label_58)
  (Wrd116.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd119.Obj) = ((Wrd116.pObj) [0]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if ((Wrd120.uLng) == 50)
    goto label_57;
  Wrd115 = Wrd119;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd121.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd122.Obj) = (Rsp [10]);
  (Rsp [2]) = (Wrd122.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_14])), (Wrd116.pObj));

DEFLABEL (label_39)
  (Wrd115.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd134.Obj) = (Rsp [8]);
  (Wrd135.Obj) = (current_block [OBJECT_7_4]);
  (Wrd136.Obj) = (Rsp [0]);
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_5]), 3);

DEFLABEL (label_40)
  goto label_58;

DEFLABEL (label_61)
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.Obj) = (current_block [OBJECT_7_0]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd141.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd141.Obj);

DEFLABEL (label_63)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_16);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (label_65)
  (Wrd88.Obj) = (Rsp [5]);
  (Wrd89.Obj) = (current_block [OBJECT_7_0]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd71.Obj) = (Rsp [5]);
  (Wrd72.Obj) = (current_block [OBJECT_7_6]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_68)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_63;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_18])), (Wrd51.pObj));

DEFLABEL (label_31)
  (Wrd50.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (current_block [OBJECT_7_6]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.Obj) = (current_block [OBJECT_7_2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_7_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_7_23);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_80;

DEFLABEL (label_79)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_80)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_79;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7_10);
  goto label_62;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_8 9
#define LABEL_8_9 11
#define LABEL_8_7 13
#define LABEL_8_11 15
#define LABEL_8_12 17
#define LABEL_8_14 19
#define LABEL_8_13 21
#define LABEL_8_16 23
#define TAG_8_17 10
#define LABEL_8_19 25
#define LABEL_8_21 27
#define LABEL_8_22 29
#define LABEL_8_24 31
#define LABEL_8_23 33
#define LABEL_8_26 35
#define LABEL_8_18 37
#define LABEL_8_25 39
#define LABEL_8_27 41
#define LABEL_8_28 43
#define LABEL_8_41 45
#define LABEL_8_30 47
#define LABEL_8_31 49
#define LABEL_8_45 51
#define LABEL_8_32 53
#define LABEL_8_33 55
#define LABEL_8_34 57
#define LABEL_8_35 59
#define LABEL_8_36 61
#define LABEL_8_37 63
#define LABEL_8_49 65
#define LABEL_8_50 67
#define LABEL_8_39 69
#define TAG_8_40 33
#define LABEL_8_43 71
#define LABEL_8_51 73
#define LABEL_8_53 75
#define TAG_8_54 36
#define ENVIRONMENT_LABEL_8_3 116
#define DEBUGGING_LABEL_8_2 115
#define OBJECT_8_8 114
#define OBJECT_8_7 113
#define OBJECT_8_6 112
#define OBJECT_8_5 111
#define OBJECT_8_4 110
#define OBJECT_8_3 109
#define OBJECT_8_2 108
#define OBJECT_8_1 107
#define OBJECT_8_0 106
#define EXECUTE_CACHE_8_55 77
#define EXECUTE_CACHE_8_52 79
#define EXECUTE_CACHE_8_48 81
#define EXECUTE_CACHE_8_47 83
#define EXECUTE_CACHE_8_46 85
#define EXECUTE_CACHE_8_44 87
#define EXECUTE_CACHE_8_42 89
#define EXECUTE_CACHE_8_38 91
#define EXECUTE_CACHE_8_29 93
#define EXECUTE_CACHE_8_20 95
#define EXECUTE_CACHE_8_15 97
#define EXECUTE_CACHE_8_10 99
#define FREE_REFERENCE_8_3 102
#define FREE_REFERENCE_8_2 103
#define FREE_REFERENCE_8_1 104
#define FREE_REFERENCE_8_0 105
#define FREE_REFERENCES_LABEL_8_0 76
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_8_4);
      goto order_subproblems_inline_40;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_42;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_43;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_44;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto label_45;

    case 5:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_8_11);
      goto label_46;

    case 7:
      current_block = (Rpc - LABEL_8_12);
      goto label_48;

    case 8:
      current_block = (Rpc - LABEL_8_14);
      goto label_47;

    case 9:
      current_block = (Rpc - LABEL_8_13);
      goto continuation_37;

    case 10:
      current_block = (Rpc - LABEL_8_16);
      goto lambda_60;

    case 11:
      current_block = (Rpc - LABEL_8_19);
      goto label_52;

    case 12:
      current_block = (Rpc - LABEL_8_21);
      goto label_49;

    case 13:
      current_block = (Rpc - LABEL_8_22);
      goto label_50;

    case 14:
      current_block = (Rpc - LABEL_8_24);
      goto label_51;

    case 15:
      current_block = (Rpc - LABEL_8_23);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_8_26);
      goto label_53;

    case 17:
      current_block = (Rpc - LABEL_8_18);
      goto continuation_30;

    case 18:
      current_block = (Rpc - LABEL_8_25);
      goto continuation_12;

    case 19:
      current_block = (Rpc - LABEL_8_27);
      goto continuation_32;

    case 20:
      current_block = (Rpc - LABEL_8_28);
      goto continuation_31;

    case 21:
      current_block = (Rpc - LABEL_8_41);
      goto label_54;

    case 22:
      current_block = (Rpc - LABEL_8_30);
      goto continuation_24;

    case 23:
      current_block = (Rpc - LABEL_8_31);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_8_45);
      goto label_55;

    case 25:
      current_block = (Rpc - LABEL_8_32);
      goto continuation_22;

    case 26:
      current_block = (Rpc - LABEL_8_33);
      goto continuation_21;

    case 27:
      current_block = (Rpc - LABEL_8_34);
      goto continuation_20;

    case 28:
      current_block = (Rpc - LABEL_8_35);
      goto continuation_19;

    case 29:
      current_block = (Rpc - LABEL_8_36);
      goto continuation_18;

    case 30:
      current_block = (Rpc - LABEL_8_37);
      goto lambda_17;

    case 31:
      current_block = (Rpc - LABEL_8_49);
      goto label_56;

    case 32:
      current_block = (Rpc - LABEL_8_50);
      goto label_57;

    case 33:
      current_block = (Rpc - LABEL_8_39);
      goto lambda_61;

    case 34:
      current_block = (Rpc - LABEL_8_43);
      goto continuation_25;

    case 35:
      current_block = (Rpc - LABEL_8_51);
      goto continuation_14;

    case 36:
      current_block = (Rpc - LABEL_8_53);
      goto lambda_63;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (order_subproblems_inline_59)
DEFLABEL (order_subproblems_inline_40)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_77;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_77;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_76)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_75;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd29.Lng))))
    goto label_75;
  (Wrd23.Obj) = ((Wrd27.pObj) [13]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_74)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_73;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd48.Lng))))
    goto label_73;
  (Wrd42.Obj) = ((Wrd46.pObj) [3]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_72)
  (Wrd59.Obj) = (Rsp [5]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_71;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [1]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_70)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_69;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_68)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_67;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_67;
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [3]) = (Wrd26.Obj);

DEFLABEL (label_66)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_65;
  Wrd17 = Wrd21;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_8_13);
  (Rsp [5]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_16])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [6]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [6]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_14])), (Wrd18.pObj));

DEFLABEL (label_47)
  (Wrd17.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_8_3]);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 3);

DEFLABEL (label_48)
  goto label_66;

DEFLABEL (label_69)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (current_block [OBJECT_8_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_8_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_8_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_8_16);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_8_7]))
    goto label_88;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_87;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_86)
  (Wrd19.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_85;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_84)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_23]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_2]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_83;
  Wrd32 = Wrd36;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [5]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_81;
  Wrd8 = Wrd12;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_32]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_33]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_34]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_35]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_36]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_37]))));
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_38]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_8_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_48]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_8_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_47]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_8_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_46]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_8_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_29]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_8_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_29]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_8_31);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [5]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_79;
  Wrd9 = Wrd13;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_42]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_8_30);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_43]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_44]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_8_43);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_54);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_53])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_45])), (Wrd10.pObj));

DEFLABEL (label_55)
  (Wrd9.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_26])), (Wrd9.pObj));

DEFLABEL (label_53)
  (Wrd8.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_24])), (Wrd33.pObj));

DEFLABEL (label_51)
  (Wrd32.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 1);

DEFLABEL (label_49)
  (Wrd7.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_88)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_92;
  Wrd45 = Wrd49;

DEFLABEL (label_91)
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [3]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [3]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_8_18);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_27]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_8_7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_29]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_8_28);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_90;
  Wrd9 = Wrd13;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_42]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_8_27);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_39])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_41])), (Wrd10.pObj));

DEFLABEL (label_54)
  (Wrd9.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_19])), (Wrd46.pObj));

DEFLABEL (label_52)
  (Wrd45.Obj) = Rvl;
  goto label_91;

DEFLABEL (lambda_62)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_8_37);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_97;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_97;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_96)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_3]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_95;
  Wrd21 = Wrd25;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_51]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_52]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_8_51);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_93;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_55]));

DEFLABEL (label_93)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_50])), (Wrd22.pObj));

DEFLABEL (label_57)
  (Wrd21.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_8_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_49]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_8]), 2);

DEFLABEL (label_56)
  (Wrd5.Obj) = Rvl;
  goto label_96;

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_8_39);

DEFLABEL (lambda_34)
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

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_8_53);

DEFLABEL (lambda_27)
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

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_9 7
#define LABEL_9_12 9
#define LABEL_9_13 11
#define LABEL_9_10 13
#define LABEL_9_14 15
#define LABEL_9_15 17
#define LABEL_9_16 19
#define LABEL_9_17 21
#define LABEL_9_8 23
#define LABEL_9_19 25
#define ENVIRONMENT_LABEL_9_3 48
#define DEBUGGING_LABEL_9_2 47
#define OBJECT_9_6 46
#define OBJECT_9_5 45
#define OBJECT_9_4 44
#define OBJECT_9_3 43
#define OBJECT_9_2 42
#define OBJECT_9_1 41
#define OBJECT_9_0 40
#define EXECUTE_CACHE_9_21 27
#define EXECUTE_CACHE_9_20 29
#define EXECUTE_CACHE_9_18 31
#define EXECUTE_CACHE_9_11 33
#define EXECUTE_CACHE_9_7 35
#define FREE_REFERENCE_9_1 38
#define FREE_REFERENCE_9_0 39
#define FREE_REFERENCES_LABEL_9_0 26
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd79;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd63;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd94;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_9_4);
      goto inline_subproblem_typesB_14;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_25;

    case 2:
      current_block = (Rpc - LABEL_9_9);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_9_13);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_9_14);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_9_15);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_9_16);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_9_17);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_9_19);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inline_subproblem_typesB_24)
DEFLABEL (inline_subproblem_typesB_14)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_45;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_45;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_44)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rsp = (& (Rsp [3]));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_31)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (Wrd95.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd98.Obj) = ((Wrd95.pObj) [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd99.uLng) == 50)
    goto label_30;
  Wrd94 = Wrd98;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_28)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_27;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd25.Lng))))
    goto label_27;
  (Wrd17.Obj) = ((Wrd23.pObj) [3]);

DEFLABEL (label_26)
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd33.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (label_27)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.Obj) = (current_block [OBJECT_9_6]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_17)
  (Wrd17.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_13])), (Wrd95.pObj));

DEFLABEL (label_22)
  (Wrd94.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_28;

DEFLABEL (label_33)
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_43;
  Wrd39 = Wrd43;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_41;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd53.Lng))))
    goto label_41;
  (Wrd45.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_40)
  (Wrd61.Obj) = (* (Rsp++));
  if ((Wrd45.Obj) == (Wrd61.Obj))
    goto label_35;

DEFLABEL (label_34)
  Rsp = (& (Rsp [3]));
  goto label_32;

DEFLABEL (label_35)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_39;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd71.Lng))))
    goto label_39;
  (Wrd63.Obj) = ((Wrd69.pObj) [4]);

DEFLABEL (label_38)
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd86.uLng) == 10))
    goto label_37;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd85.Lng))))
    goto label_37;
  (Wrd79.Obj) = ((Wrd83.pObj) [16]);

DEFLABEL (label_36)
  if ((Wrd79.Obj) == (current_block [OBJECT_9_5]))
    goto label_34;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (label_37)
  (Wrd88.Obj) = (current_block [OBJECT_9_4]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_21)
  (Wrd79.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (current_block [OBJECT_9_0]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_20)
  (Wrd63.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd56.Obj) = (Rsp [2]);
  (Wrd57.Obj) = (current_block [OBJECT_9_2]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (label_19)
  (Wrd45.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_14])), (Wrd40.pObj));

DEFLABEL (label_18)
  (Wrd39.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_9_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_9 7
#define LABEL_10_10 9
#define LABEL_10_11 11
#define LABEL_10_12 13
#define LABEL_10_7 15
#define LABEL_10_8 17
#define LABEL_10_14 19
#define TAG_10_15 8
#define LABEL_10_16 21
#define LABEL_10_18 23
#define LABEL_10_19 25
#define TAG_10_20 11
#define LABEL_10_26 27
#define LABEL_10_21 29
#define LABEL_10_22 31
#define TAG_10_23 14
#define LABEL_10_29 33
#define LABEL_10_25 35
#define LABEL_10_28 37
#define LABEL_10_30 39
#define LABEL_10_32 41
#define TAG_10_33 19
#define LABEL_10_34 43
#define TAG_10_35 20
#define ENVIRONMENT_LABEL_10_3 68
#define DEBUGGING_LABEL_10_2 67
#define OBJECT_10_6 66
#define OBJECT_10_5 65
#define OBJECT_10_4 64
#define OBJECT_10_3 63
#define OBJECT_10_2 62
#define OBJECT_10_1 61
#define OBJECT_10_0 60
#define EXECUTE_CACHE_10_31 45
#define EXECUTE_CACHE_10_27 47
#define EXECUTE_CACHE_10_24 49
#define EXECUTE_CACHE_10_17 51
#define EXECUTE_CACHE_10_13 53
#define EXECUTE_CACHE_10_6 55
#define FREE_REFERENCE_10_1 58
#define FREE_REFERENCE_10_0 59
#define FREE_REFERENCES_LABEL_10_0 44
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_10_4);
      goto order_subproblems_out_of_line_21;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_9);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_19;

    case 8:
      current_block = (Rpc - LABEL_10_14);
      goto lambda_32;

    case 9:
      current_block = (Rpc - LABEL_10_16);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_10_18);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_10_19);
      goto lambda_33;

    case 12:
      current_block = (Rpc - LABEL_10_26);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_10_21);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_10_22);
      goto lambda_34;

    case 15:
      current_block = (Rpc - LABEL_10_29);
      goto label_29;

    case 16:
      current_block = (Rpc - LABEL_10_25);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_10_28);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_10_30);
      goto continuation_4;

    case 19:
      current_block = (Rpc - LABEL_10_32);
      goto lambda_35;

    case 20:
      current_block = (Rpc - LABEL_10_34);
      goto lambda_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (order_subproblems_out_of_line_31)
DEFLABEL (order_subproblems_out_of_line_21)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_44;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd19.Lng))))
    goto label_44;
  (Wrd13.Obj) = ((Wrd17.pObj) [16]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_43)
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_42;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_41)
  (Wrd39.Obj) = (Rsp [6]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_40;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_39)
  (Wrd54.Obj) = (Rsp [6]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_38;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd53.Lng))))
    goto label_38;
  (Wrd47.Obj) = ((Wrd51.pObj) [9]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_14])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_38)
  (Wrd56.Obj) = (Rsp [6]);
  (Wrd57.Obj) = (current_block [OBJECT_10_4]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_10_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_10_14);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_16);
  (Wrd5.Obj) = Rvl;
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [3]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_46;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd50.Lng))))
    goto label_46;
  ((Wrd48.pObj) [14]) = Rvl;

DEFLABEL (label_45)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_19])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_22])));
  Rhp += 3;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd25 = Wrd18;
  (Wrd28.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd25.pObj) [2]) = (Wrd28.Obj);
  ((Wrd25.pObj) [3]) = (Wrd13.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  ((Wrd25.pObj) [4]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd38.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_10_21);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_46)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [3]);
  (Wrd58.Obj) = (current_block [OBJECT_10_5]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_6]), 3);

DEFLABEL (label_27)
  goto label_45;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_10_19);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_48;
  Wrd15 = Wrd19;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_27]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_25);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_31]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_30);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_34])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_26])), (Wrd16.pObj));

DEFLABEL (label_28)
  (Wrd15.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_10_22);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_50;
  Wrd17 = Wrd21;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_28);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_32])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  ((Wrd13.pObj) [2]) = (Wrd5.Obj);
  ((Wrd13.pObj) [3]) = Rvl;
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_29])), (Wrd18.pObj));

DEFLABEL (label_29)
  (Wrd17.Obj) = Rvl;
  goto label_49;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_10_32);

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

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_10_34);

DEFLABEL (lambda_5)
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

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_8 11
#define LABEL_11_9 13
#define LABEL_11_10 15
#define LABEL_11_11 17
#define LABEL_11_12 19
#define LABEL_11_13 21
#define LABEL_11_16 23
#define LABEL_11_17 25
#define LABEL_11_19 27
#define LABEL_11_20 29
#define LABEL_11_21 31
#define LABEL_11_22 33
#define LABEL_11_23 35
#define LABEL_11_24 37
#define LABEL_11_27 39
#define LABEL_11_28 41
#define LABEL_11_14 43
#define LABEL_11_29 45
#define LABEL_11_31 47
#define LABEL_11_32 49
#define LABEL_11_33 51
#define LABEL_11_36 53
#define LABEL_11_15 55
#define LABEL_11_39 57
#define LABEL_11_30 59
#define LABEL_11_40 61
#define LABEL_11_41 63
#define LABEL_11_35 65
#define LABEL_11_38 67
#define LABEL_11_46 69
#define LABEL_11_42 71
#define LABEL_11_47 73
#define LABEL_11_48 75
#define LABEL_11_43 77
#define LABEL_11_44 79
#define LABEL_11_25 81
#define LABEL_11_51 83
#define LABEL_11_52 85
#define LABEL_11_53 87
#define LABEL_11_54 89
#define ENVIRONMENT_LABEL_11_3 130
#define DEBUGGING_LABEL_11_2 129
#define OBJECT_11_18 128
#define OBJECT_11_17 127
#define OBJECT_11_16 126
#define OBJECT_11_15 125
#define OBJECT_11_14 124
#define OBJECT_11_13 123
#define OBJECT_11_12 122
#define OBJECT_11_11 121
#define OBJECT_11_10 120
#define OBJECT_11_9 119
#define OBJECT_11_8 118
#define OBJECT_11_7 117
#define OBJECT_11_6 116
#define OBJECT_11_5 115
#define OBJECT_11_4 114
#define OBJECT_11_3 113
#define OBJECT_11_2 112
#define OBJECT_11_1 111
#define OBJECT_11_0 110
#define EXECUTE_CACHE_11_55 91
#define EXECUTE_CACHE_11_50 93
#define EXECUTE_CACHE_11_49 95
#define EXECUTE_CACHE_11_45 97
#define EXECUTE_CACHE_11_37 99
#define EXECUTE_CACHE_11_34 101
#define EXECUTE_CACHE_11_26 103
#define EXECUTE_CACHE_11_18 105
#define FREE_REFERENCE_11_1 108
#define FREE_REFERENCE_11_0 109
#define FREE_REFERENCES_LABEL_11_0 90
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd33;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd73;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd80;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd134;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd135;
  machine_word Wrd170;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd147;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd175;
  machine_word Wrd173;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd179;
  machine_word Wrd177;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd106;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd136;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd114;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd94;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd90;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd163;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd86;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd77;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_11_4);
      goto add_defaulted_subproblemsB_49;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_51;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_52;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto label_53;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto label_54;

    case 5:
      current_block = (Rpc - LABEL_11_9);
      goto label_55;

    case 6:
      current_block = (Rpc - LABEL_11_10);
      goto label_56;

    case 7:
      current_block = (Rpc - LABEL_11_11);
      goto label_61;

    case 8:
      current_block = (Rpc - LABEL_11_12);
      goto label_60;

    case 9:
      current_block = (Rpc - LABEL_11_13);
      goto label_57;

    case 10:
      current_block = (Rpc - LABEL_11_16);
      goto label_58;

    case 11:
      current_block = (Rpc - LABEL_11_17);
      goto label_59;

    case 12:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_25;

    case 13:
      current_block = (Rpc - LABEL_11_20);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_11_21);
      goto label_72;

    case 15:
      current_block = (Rpc - LABEL_11_22);
      goto label_73;

    case 16:
      current_block = (Rpc - LABEL_11_23);
      goto label_74;

    case 17:
      current_block = (Rpc - LABEL_11_24);
      goto label_75;

    case 18:
      current_block = (Rpc - LABEL_11_27);
      goto continuation_32;

    case 19:
      current_block = (Rpc - LABEL_11_28);
      goto label_70;

    case 20:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_13;

    case 21:
      current_block = (Rpc - LABEL_11_29);
      goto label_62;

    case 22:
      current_block = (Rpc - LABEL_11_31);
      goto label_63;

    case 23:
      current_block = (Rpc - LABEL_11_32);
      goto label_64;

    case 24:
      current_block = (Rpc - LABEL_11_33);
      goto label_65;

    case 25:
      current_block = (Rpc - LABEL_11_36);
      goto label_66;

    case 26:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_12;

    case 27:
      current_block = (Rpc - LABEL_11_39);
      goto label_67;

    case 28:
      current_block = (Rpc - LABEL_11_30);
      goto continuation_37;

    case 29:
      current_block = (Rpc - LABEL_11_40);
      goto label_68;

    case 30:
      current_block = (Rpc - LABEL_11_41);
      goto label_69;

    case 31:
      current_block = (Rpc - LABEL_11_35);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_11_38);
      goto continuation_9;

    case 33:
      current_block = (Rpc - LABEL_11_46);
      goto label_71;

    case 34:
      current_block = (Rpc - LABEL_11_42);
      goto lambda_40;

    case 35:
      current_block = (Rpc - LABEL_11_47);
      goto continuation_43;

    case 36:
      current_block = (Rpc - LABEL_11_48);
      goto label_76;

    case 37:
      current_block = (Rpc - LABEL_11_43);
      goto continuation_42;

    case 38:
      current_block = (Rpc - LABEL_11_44);
      goto continuation_41;

    case 39:
      current_block = (Rpc - LABEL_11_25);
      goto continuation_24;

    case 40:
      current_block = (Rpc - LABEL_11_51);
      goto continuation_23;

    case 41:
      current_block = (Rpc - LABEL_11_52);
      goto label_77;

    case 42:
      current_block = (Rpc - LABEL_11_53);
      goto continuation_21;

    case 43:
      current_block = (Rpc - LABEL_11_54);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_defaulted_subproblemsB_79)
DEFLABEL (add_defaulted_subproblemsB_49)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_142;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd13.Lng))))
    goto label_142;
  (Wrd7.Obj) = ((Wrd11.pObj) [16]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_141)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_82;

DEFLABEL (label_81)
  Rvl = (current_block [OBJECT_11_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_140;
  Wrd23 = Wrd27;

DEFLABEL (label_139)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_138;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_138;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_137)
  (Wrd45.Obj) = (* (Rsp++));
  if (! ((Wrd29.Obj) == (Wrd45.Obj)))
    goto label_81;
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_136;
  Wrd48 = Wrd52;

DEFLABEL (label_135)
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_134;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd62.Lng))))
    goto label_134;
  (Wrd54.Obj) = ((Wrd60.pObj) [4]);

DEFLABEL (label_133)
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd77.uLng) == 10))
    goto label_132;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd76.Lng))))
    goto label_132;
  (Wrd70.Obj) = ((Wrd74.pObj) [3]);

DEFLABEL (label_131)
  (Wrd83.Obj) = (* (Rsp++));
  if (! ((Wrd70.Obj) == (Wrd83.Obj)))
    goto label_81;
  (Wrd157.Obj) = (Rsp [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if (! ((Wrd158.uLng) == 10))
    goto label_130;
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd155.Obj) = ((Wrd154.pObj) [0]);
  (Wrd156.Lng) = (FIXNUM_TO_LONG (Wrd155.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd156.Lng))))
    goto label_130;
  (Wrd86.Obj) = ((Wrd154.pObj) [17]);
  if ((Wrd86.Obj) == ((SCHEME_OBJECT) 0))
    goto label_128;

DEFLABEL (label_127)
  (Wrd101.Obj) = (Rsp [1]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 10))
    goto label_126;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd100.Lng))))
    goto label_126;
  (Wrd94.Obj) = ((Wrd98.pObj) [12]);
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_125)
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd123.Obj) = (Rsp [3]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd124.uLng) == 10))
    goto label_124;
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd121.Obj) = ((Wrd120.pObj) [0]);
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd121.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd122.Lng))))
    goto label_124;
  (Wrd114.Obj) = ((Wrd120.pObj) [12]);

DEFLABEL (label_123)
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd132.uLng) == 1))
    goto label_122;
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd131.Obj) = ((Wrd130.pObj) [1]);
  (* (--Rsp)) = (Wrd131.Obj);

DEFLABEL (label_121)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_120;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_119)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_38);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_118;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_118;
  (Wrd10.Obj) = ((Wrd14.pObj) [13]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_117)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11_20);
  (Wrd97.Obj) = Rvl;
  (Wrd103.Obj) = (Rsp [1]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 26))
    goto label_116;
  (Wrd105.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd105.uLng) == 26))
    goto label_116;
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd106.Lng) = ((Wrd108.Lng) + (Wrd109.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd106.Lng)))
    goto label_116;
  (Wrd110.Obj) = (LONG_TO_FIXNUM (Wrd106.Lng));
  (* (--Rsp)) = (Wrd110.Obj);

DEFLABEL (label_115)
  (Wrd111.Obj) = (Rsp [1]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 26))
    goto label_114;
  (Wrd113.Obj) = (Rsp [2]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 26))
    goto label_114;
  (Wrd177.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  (Wrd179.Lng) = (FIXNUM_TO_LONG (Wrd113.Obj));
  if (! ((Wrd177.Lng) < (Wrd179.Lng)))
    goto label_110;

DEFLABEL (label_109)
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd151.Obj);
  (Wrd152.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd152.Obj);
  (Wrd153.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_25]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (Wrd157.Obj) = (current_block [OBJECT_11_11]);
  (* (--Rsp)) = (Wrd157.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_26]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_11_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_26]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_11_51);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [10]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_108;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_108;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_107)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_53]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_11_17]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_26]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_11_53);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_26]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_11_54);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_18]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_55]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_11_19);

DEFLABEL (label_106)
  (Wrd131.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd131.Obj);
  (Wrd132.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd132.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd135.Obj) = (Rsp [0]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if ((Wrd136.uLng) == 26)
    goto label_84;

DEFLABEL (label_83)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_84)
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if (! ((Wrd138.uLng) == 26))
    goto label_83;
  (Wrd141.Lng) = (FIXNUM_TO_LONG (Wrd135.Obj));
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd137.Obj));
  (Wrd139.Lng) = ((Wrd141.Lng) - (Wrd143.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd139.Lng)))
    goto label_83;
  (Wrd134.Obj) = (LONG_TO_FIXNUM (Wrd139.Lng));
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd134.Obj);

DEFLABEL (label_105)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_104;
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd79.Lng) > 0)
    goto label_100;

DEFLABEL (label_99)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_30]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_98;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd23.Lng))))
    goto label_98;
  (Wrd17.Obj) = ((Wrd21.pObj) [13]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_97)
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_96;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd39.Lng))))
    goto label_96;
  (Wrd31.Obj) = ((Wrd37.pObj) [12]);

DEFLABEL (label_95)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_94;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_93)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_34]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_11_30);
  (Rsp [3]) = Rvl;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_92;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd14.Lng))))
    goto label_92;
  (Wrd6.Obj) = ((Wrd12.pObj) [9]);

DEFLABEL (label_91)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_90;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_89)
  (Rsp [4]) = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_42]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_43]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_44]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_11_44);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_11_47);
  (Wrd6.Obj) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_88;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_88;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if (! ((Wrd18.Lng) > (Wrd20.Lng)))
    goto label_86;

DEFLABEL (label_85)
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_49]));

DEFLABEL (label_86)
  (Wrd5.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_87)
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_50]));

DEFLABEL (label_88)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_48]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_76)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_86;
  goto label_85;

DEFLABEL (label_90)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_41]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 1);

DEFLABEL (label_69)
  (Wrd22.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_11_12]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_40]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_68)
  (Wrd6.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_33]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 1);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd43.Obj) = (current_block [OBJECT_11_7]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_32]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_64)
  (Wrd31.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (current_block [OBJECT_11_14]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_31]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_27]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_35]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_11_9]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd71.Obj) = (Rsp [7]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 10))
    goto label_103;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd70.Lng))))
    goto label_103;
  (Wrd64.Obj) = ((Wrd68.pObj) [9]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_102)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_37]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_11_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_45]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_11_27);
  (Wrd80.Obj) = Rvl;
  (Wrd89.Obj) = (Rsp [1]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 10))
    goto label_101;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd88.Lng))))
    goto label_101;
  ((Wrd86.pObj) [9]) = Rvl;
  goto label_99;

DEFLABEL (label_101)
  (Wrd91.Obj) = (Rsp [1]);
  (Wrd92.Obj) = (current_block [OBJECT_11_12]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_28]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_13]), 3);

DEFLABEL (label_70)
  goto label_99;

DEFLABEL (label_103)
  (Wrd73.Obj) = (Rsp [7]);
  (Wrd74.Obj) = (current_block [OBJECT_11_12]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_36]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (label_104)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_62)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_99;
  goto label_100;

DEFLABEL (label_108)
  (Wrd16.Obj) = (Rsp [10]);
  (Wrd17.Obj) = (current_block [OBJECT_11_16]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_52]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd121.Obj) = (Rsp [1]);
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd122.uLng) == 26))
    goto label_113;
  (Wrd123.Obj) = (Rsp [0]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd124.uLng) == 26))
    goto label_113;
  (Wrd173.Lng) = (FIXNUM_TO_LONG (Wrd121.Obj));
  (Wrd175.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  if (! ((Wrd173.Lng) > (Wrd175.Lng)))
    goto label_106;

DEFLABEL (label_112)
  (Wrd164.Obj) = (Rsp [5]);
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd164.Obj));
  if (! ((Wrd165.uLng) == 10))
    goto label_111;
  (Wrd161.pObj) = (OBJECT_ADDRESS (Wrd164.Obj));
  (Wrd162.Obj) = ((Wrd161.pObj) [0]);
  (Wrd163.Lng) = (FIXNUM_TO_LONG (Wrd162.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd163.Lng))))
    goto label_111;
  (Wrd147.Obj) = ((Wrd161.pObj) [14]);
  if ((Wrd147.Obj) == ((SCHEME_OBJECT) 0))
    goto label_109;
  goto label_106;

DEFLABEL (label_111)
  (Wrd166.Obj) = (Rsp [5]);
  (Wrd167.Obj) = (current_block [OBJECT_11_10]);
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd166.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_75)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_109;
  goto label_106;

DEFLABEL (label_113)
  (Wrd125.Obj) = (Rsp [1]);
  (Wrd126.Obj) = (Rsp [0]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_74)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_106;
  goto label_112;

DEFLABEL (label_114)
  (Wrd115.Obj) = (Rsp [1]);
  (Wrd116.Obj) = (Rsp [2]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_73)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_110;
  goto label_109;

DEFLABEL (label_116)
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_11_14]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_46]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_39]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 1);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd125.Obj) = (Rsp [3]);
  (Wrd126.Obj) = (current_block [OBJECT_11_7]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_58)
  (Wrd114.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd103.Obj) = (Rsp [1]);
  (Wrd104.Obj) = (current_block [OBJECT_11_7]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd143.Obj) = (Rsp [0]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if (! ((Wrd144.uLng) == 10))
    goto label_129;
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd143.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (Wrd142.Lng) = (FIXNUM_TO_LONG (Wrd141.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd142.Lng))))
    goto label_129;
  (Wrd90.Obj) = ((Wrd140.pObj) [8]);
  if ((Wrd90.Obj) == ((SCHEME_OBJECT) 0))
    goto label_127;
  goto label_81;

DEFLABEL (label_129)
  (Wrd145.Obj) = (Rsp [0]);
  (Wrd146.Obj) = (current_block [OBJECT_11_6]);
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_60)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_127;
  goto label_81;

DEFLABEL (label_130)
  (Wrd159.Obj) = (Rsp [0]);
  (Wrd160.Obj) = (current_block [OBJECT_11_5]);
  (Wrd163.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd163.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_61)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_128;
  goto label_127;

DEFLABEL (label_132)
  (Wrd79.Obj) = (current_block [OBJECT_11_4]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_56)
  (Wrd70.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.Obj) = (current_block [OBJECT_11_3]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_55)
  (Wrd54.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_8])), (Wrd49.pObj));

DEFLABEL (label_54)
  (Wrd48.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_11_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_53)
  (Wrd29.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_6])), (Wrd24.pObj));

DEFLABEL (label_52)
  (Wrd23.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_11_43);
  (Wrd5.Obj) = Rvl;
  goto label_87;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (lambda_80)
DEFLABEL (lambda_40)
  INTERRUPT_CHECK (26, LABEL_11_42);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_11 5
#define LABEL_12_12 7
#define LABEL_12_13 9
#define LABEL_12_14 11
#define LABEL_12_15 13
#define LABEL_12_16 15
#define LABEL_12_17 17
#define LABEL_12_18 19
#define LABEL_12_19 21
#define LABEL_12_5 23
#define TAG_12_6 10
#define LABEL_12_7 25
#define TAG_12_8 11
#define LABEL_12_9 27
#define TAG_12_10 12
#define LABEL_12_25 29
#define LABEL_12_20 31
#define TAG_12_21 14
#define LABEL_12_24 33
#define LABEL_12_27 35
#define LABEL_12_28 37
#define LABEL_12_30 39
#define TAG_12_31 18
#define LABEL_12_34 41
#define LABEL_12_33 43
#define LABEL_12_36 45
#define TAG_12_37 21
#define ENVIRONMENT_LABEL_12_3 73
#define DEBUGGING_LABEL_12_2 72
#define OBJECT_12_9 71
#define OBJECT_12_8 70
#define OBJECT_12_7 69
#define OBJECT_12_6 68
#define OBJECT_12_5 67
#define OBJECT_12_4 66
#define OBJECT_12_3 65
#define OBJECT_12_2 64
#define OBJECT_12_1 63
#define OBJECT_12_0 62
#define EXECUTE_CACHE_12_35 47
#define EXECUTE_CACHE_12_32 49
#define EXECUTE_CACHE_12_29 51
#define EXECUTE_CACHE_12_26 53
#define EXECUTE_CACHE_12_23 55
#define EXECUTE_CACHE_12_22 57
#define FREE_REFERENCE_12_1 60
#define FREE_REFERENCE_12_0 61
#define FREE_REFERENCES_LABEL_12_0 46
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd7;
  machine_word Wrd124;
  machine_word Wrd126;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd121;
  machine_word Wrd122;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd116;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd112;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd172;
  machine_word Wrd157;
  machine_word Wrd109;
  machine_word Wrd170;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd107;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd185;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd103;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd82;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd76;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd41;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_12_4);
      goto combination_ordering_27;

    case 1:
      current_block = (Rpc - LABEL_12_11);
      goto label_29;

    case 2:
      current_block = (Rpc - LABEL_12_12);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_12_13);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_12_14);
      goto label_32;

    case 5:
      current_block = (Rpc - LABEL_12_15);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_12_16);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_12_17);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_12_18);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_12_19);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_42;

    case 11:
      current_block = (Rpc - LABEL_12_7);
      goto lambda_43;

    case 12:
      current_block = (Rpc - LABEL_12_9);
      goto lambda_44;

    case 13:
      current_block = (Rpc - LABEL_12_25);
      goto label_38;

    case 14:
      current_block = (Rpc - LABEL_12_20);
      goto lambda_45;

    case 15:
      current_block = (Rpc - LABEL_12_24);
      goto continuation_1;

    case 16:
      current_block = (Rpc - LABEL_12_27);
      goto continuation_22;

    case 17:
      current_block = (Rpc - LABEL_12_28);
      goto continuation_2;

    case 18:
      current_block = (Rpc - LABEL_12_30);
      goto lambda_46;

    case 19:
      current_block = (Rpc - LABEL_12_34);
      goto label_39;

    case 20:
      current_block = (Rpc - LABEL_12_33);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_12_36);
      goto lambda_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (combination_ordering_41)
DEFLABEL (combination_ordering_27)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd13 = Wrd6;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [5]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_7])));
  Rhp += 4;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd23 = Wrd16;
  ((Wrd23.pObj) [2]) = (Wrd14.Obj);
  ((Wrd23.pObj) [3]) = (Wrd12.Obj);
  ((Wrd23.pObj) [4]) = (Wrd10.Obj);
  ((Wrd23.pObj) [5]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_9])));
  Rhp += 3;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd31 = Wrd26;
  ((Wrd31.pObj) [2]) = (Wrd12.Obj);
  ((Wrd31.pObj) [3]) = (Wrd10.Obj);
  ((Wrd31.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  if (! ((Wrd14.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_49;

DEFLABEL (label_48)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_74;
  Wrd35 = Wrd39;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd50.Obj) = (Rsp [7]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_72;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd49.Lng))))
    goto label_72;
  (Wrd41.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_71)
  (Wrd57.Obj) = (* (Rsp++));
  if (! ((Wrd41.Obj) == (Wrd57.Obj)))
    goto label_48;
  (Wrd69.Obj) = (Rsp [6]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_70;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd68.Lng))))
    goto label_70;
  (Wrd62.Obj) = ((Wrd66.pObj) [4]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_69)
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd80.Obj) = ((Wrd77.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_68;
  Wrd76 = Wrd80;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd91.Obj) = (Rsp [1]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 10))
    goto label_66;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd90.Lng))))
    goto label_66;
  (Wrd82.Obj) = ((Wrd88.pObj) [3]);

DEFLABEL (label_65)
  (Wrd98.Obj) = (* (Rsp++));
  if ((Wrd82.Obj) == (Wrd98.Obj))
    goto label_50;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd179.Obj) = (Rsp [7]);
  (Wrd180.uLng) = (OBJECT_TYPE (Wrd179.Obj));
  if (! ((Wrd180.uLng) == 10))
    goto label_64;
  (Wrd176.pObj) = (OBJECT_ADDRESS (Wrd179.Obj));
  (Wrd177.Obj) = ((Wrd176.pObj) [0]);
  (Wrd178.Lng) = (FIXNUM_TO_LONG (Wrd177.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd178.Lng))))
    goto label_64;
  (Wrd103.Obj) = ((Wrd176.pObj) [17]);
  if ((Wrd103.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;

DEFLABEL (label_58)
  (Wrd172.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd172.Obj);

DEFLABEL (label_57)
  (Wrd149.Obj) = (Rsp [8]);
  (Wrd150.uLng) = (OBJECT_TYPE (Wrd149.Obj));
  if (! ((Wrd150.uLng) == 10))
    goto label_56;
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd149.Obj));
  (Wrd147.Obj) = ((Wrd146.pObj) [0]);
  (Wrd148.Lng) = (FIXNUM_TO_LONG (Wrd147.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd148.Lng))))
    goto label_56;
  (Wrd112.Obj) = ((Wrd146.pObj) [19]);
  if ((Wrd112.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;

DEFLABEL (label_52)
  Rvl = (Rsp [0]);

DEFLABEL (label_51)
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd135.Obj) = (Rsp [1]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd136.uLng) == 10))
    goto label_55;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd134.Lng))))
    goto label_55;
  (Wrd116.Obj) = ((Wrd132.pObj) [18]);
  if ((Wrd116.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;

DEFLABEL (label_54)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd122.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_20])));
  Rhp += 3;
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd122.pObj)));
  Wrd127 = Wrd122;
  (Wrd128.Obj) = (Rsp [5]);
  ((Wrd127.pObj) [2]) = (Wrd128.Obj);
  (Wrd126.Obj) = (Rsp [1]);
  ((Wrd127.pObj) [3]) = (Wrd126.Obj);
  (Wrd124.Obj) = (Rsp [0]);
  ((Wrd127.pObj) [4]) = (Wrd124.Obj);
  Rvl = (Wrd121.Obj);
  goto label_51;

DEFLABEL (label_55)
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.Obj) = (current_block [OBJECT_12_7]);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_54;

DEFLABEL (label_56)
  (Wrd151.Obj) = (Rsp [8]);
  (Wrd152.Obj) = (current_block [OBJECT_12_6]);
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_52;

DEFLABEL (label_59)
  (Wrd164.Obj) = (Rsp [7]);
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd164.Obj));
  if (! ((Wrd165.uLng) == 10))
    goto label_63;
  (Wrd161.pObj) = (OBJECT_ADDRESS (Wrd164.Obj));
  (Wrd162.Obj) = ((Wrd161.pObj) [0]);
  (Wrd163.Lng) = (FIXNUM_TO_LONG (Wrd162.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd163.Lng))))
    goto label_63;
  (Wrd107.Obj) = ((Wrd161.pObj) [8]);
  if ((Wrd107.Obj) == ((SCHEME_OBJECT) 0))
    goto label_61;

DEFLABEL (label_62)
  (Wrd157.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd157.Obj);
  goto label_60;

DEFLABEL (label_61)
  (Wrd109.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd109.Obj);

DEFLABEL (label_60)
  goto label_57;

DEFLABEL (label_63)
  (Wrd166.Obj) = (Rsp [7]);
  (Wrd167.Obj) = (current_block [OBJECT_12_5]);
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd166.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_62;

DEFLABEL (label_64)
  (Wrd181.Obj) = (Rsp [7]);
  (Wrd182.Obj) = (current_block [OBJECT_12_4]);
  (Wrd185.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd185.Obj);
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd181.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_58;

DEFLABEL (label_66)
  (Wrd93.Obj) = (Rsp [1]);
  (Wrd94.Obj) = (current_block [OBJECT_12_3]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_33)
  (Wrd82.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_14])), (Wrd77.pObj));

DEFLABEL (label_32)
  (Wrd76.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd71.Obj) = (Rsp [6]);
  (Wrd72.Obj) = (current_block [OBJECT_12_2]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd52.Obj) = (Rsp [7]);
  (Wrd53.Obj) = (current_block [OBJECT_12_0]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_30)
  (Wrd41.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_11])), (Wrd36.pObj));

DEFLABEL (label_29)
  (Wrd35.Obj) = Rvl;
  goto label_73;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_22]));

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_12_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_23]));

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_12_9);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_12_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_24]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_76;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_76;
  (Wrd13.Obj) = ((Wrd19.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_75)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_26]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_28]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_29]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_28);
  (Rsp [4]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_32]));

DEFLABEL (label_76)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [3]);
  (Wrd29.Obj) = (current_block [OBJECT_12_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_25]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_9]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_12_20);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto pop_return;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_12_27);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_30])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_12_30);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_78;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_78;
  (Wrd12.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_77)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_35]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_12_33);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_36])));
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

DEFLABEL (label_78)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Wrd28.Obj) = (current_block [OBJECT_12_2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_34]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_12_36);

DEFLABEL (lambda_19)
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

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define TAG_13_8 2
#define LABEL_13_10 9
#define LABEL_13_9 11
#define ENVIRONMENT_LABEL_13_3 22
#define DEBUGGING_LABEL_13_2 21
#define OBJECT_13_1 20
#define OBJECT_13_0 19
#define EXECUTE_CACHE_13_12 13
#define EXECUTE_CACHE_13_11 15
#define EXECUTE_CACHE_13_6 17
#define FREE_REFERENCES_LABEL_13_0 12
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_13_4);
      goto optimized_combination_ordering_4;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_13_10);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimized_combination_ordering_8)
DEFLABEL (optimized_combination_ordering_4)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_7])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_13_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_11;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd26.Lng))))
    goto label_11;
  (Wrd18.Obj) = ((Wrd24.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (label_11)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [2]);
  (Wrd34.Obj) = (current_block [OBJECT_13_0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_7 5
#define LABEL_14_5 7
#define LABEL_14_8 9
#define LABEL_14_11 11
#define LABEL_14_13 13
#define LABEL_14_14 15
#define LABEL_14_10 17
#define LABEL_14_16 19
#define ENVIRONMENT_LABEL_14_3 42
#define DEBUGGING_LABEL_14_2 41
#define OBJECT_14_7 40
#define OBJECT_14_6 39
#define OBJECT_14_5 38
#define OBJECT_14_4 37
#define OBJECT_14_3 36
#define OBJECT_14_2 35
#define OBJECT_14_1 34
#define OBJECT_14_0 33
#define EXECUTE_CACHE_14_18 21
#define EXECUTE_CACHE_14_17 23
#define EXECUTE_CACHE_14_15 25
#define EXECUTE_CACHE_14_12 27
#define EXECUTE_CACHE_14_9 29
#define EXECUTE_CACHE_14_6 31
#define FREE_REFERENCES_LABEL_14_0 20
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd30;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
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
      goto known_combination_ordering_11;

    case 1:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_14_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_14_16);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (known_combination_ordering_16)
DEFLABEL (known_combination_ordering_11)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;

DEFLABEL (label_27)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_26;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_26;
  (Wrd14.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_18)
  (Wrd20.Obj) = (current_block [OBJECT_14_5]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_17)
DEFLABEL (label_24)
  (Wrd8.Obj) = (Rsp [0]);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;

DEFLABEL (label_21)
  (Wrd11.Obj) = (current_block [OBJECT_14_6]);
  goto label_19;

DEFLABEL (label_20)
  (Wrd11.Obj) = (current_block [OBJECT_14_5]);

DEFLABEL (label_19)
DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_16);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_14_7]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_18]));

DEFLABEL (label_23)
  Wrd11 = Wrd8;
  goto label_22;

DEFLABEL (label_26)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_14_3]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_30;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd42.Lng))))
    goto label_30;
  (Wrd30.Obj) = ((Wrd40.pObj) [27]);
  if (! ((Wrd30.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_27;

DEFLABEL (label_29)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_7);
  goto label_27;

DEFLABEL (label_30)
  (Wrd45.Obj) = (Rsp [3]);
  (Wrd46.Obj) = (current_block [OBJECT_14_0]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_7 5
#define LABEL_15_5 7
#define LABEL_15_9 9
#define TAG_15_10 3
#define LABEL_15_11 11
#define TAG_15_12 4
#define ENVIRONMENT_LABEL_15_3 19
#define DEBUGGING_LABEL_15_2 18
#define OBJECT_15_0 17
#define EXECUTE_CACHE_15_8 13
#define EXECUTE_CACHE_15_6 15
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      goto handle_operator_8;

    case 1:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto lambda_12;

    case 4:
      current_block = (Rpc - LABEL_15_11);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_operator_11)
DEFLABEL (handle_operator_8)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_9])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_11])));
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

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_15_9);

DEFLABEL (lambda_6)
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

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_15_11);

DEFLABEL (lambda_2)
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

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define LABEL_16_11 13
#define LABEL_16_12 15
#define ENVIRONMENT_LABEL_16_3 24
#define DEBUGGING_LABEL_16_2 23
#define EXECUTE_CACHE_16_13 17
#define EXECUTE_CACHE_16_8 19
#define EXECUTE_CACHE_16_7 21
#define FREE_REFERENCES_LABEL_16_0 16
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_16_4);
      goto make_defaulted_subproblems_10;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto loop_7;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_16_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_defaulted_subproblems_15)
DEFLABEL (make_defaulted_subproblems_10)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_7;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_16_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_21;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd30.Lng) == 0))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_20;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd21.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_20;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd16.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_12);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_7;

DEFLABEL (label_20)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_13)
  (Wrd16.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_7 5
#define LABEL_17_5 7
#define LABEL_17_6 9
#define LABEL_17_8 11
#define LABEL_17_9 13
#define LABEL_17_11 15
#define LABEL_17_16 17
#define ENVIRONMENT_LABEL_17_3 34
#define DEBUGGING_LABEL_17_2 33
#define EXECUTE_CACHE_17_17 19
#define EXECUTE_CACHE_17_15 21
#define EXECUTE_CACHE_17_14 23
#define EXECUTE_CACHE_17_13 25
#define EXECUTE_CACHE_17_12 27
#define EXECUTE_CACHE_17_10 29
#define FREE_REFERENCE_17_0 32
#define FREE_REFERENCES_LABEL_17_0 18
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      goto new_subproblem_7;

    case 1:
      current_block = (Rpc - LABEL_17_7);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_17_16);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_subproblem_11)
DEFLABEL (new_subproblem_7)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_13;
  Wrd13 = Wrd17;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_16);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_7])), (Wrd14.pObj));

DEFLABEL (label_9)
  (Wrd13.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define LABEL_18_8 7
#define ENVIRONMENT_LABEL_18_3 16
#define DEBUGGING_LABEL_18_2 15
#define OBJECT_18_1 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_9 9
#define EXECUTE_CACHE_18_7 11
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_18_4);
      goto set_subproblem_typesB_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_18_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_subproblem_typesB_6)
DEFLABEL (set_subproblem_typesB_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_9;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_9;
  (Wrd8.Obj) = ((Wrd14.pObj) [3]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd24.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (label_9)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_18_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_6 5
#define LABEL_19_7 7
#define LABEL_19_5 9
#define LABEL_19_9 11
#define TAG_19_10 4
#define LABEL_19_12 13
#define LABEL_19_11 15
#define LABEL_19_15 17
#define LABEL_19_13 19
#define TAG_19_14 8
#define LABEL_19_18 21
#define LABEL_19_21 23
#define LABEL_19_22 25
#define LABEL_19_19 27
#define TAG_19_20 12
#define LABEL_19_16 29
#define LABEL_19_17 31
#define LABEL_19_25 33
#define TAG_19_26 15
#define LABEL_19_28 35
#define TAG_19_29 16
#define ENVIRONMENT_LABEL_19_3 52
#define DEBUGGING_LABEL_19_2 51
#define OBJECT_19_5 50
#define OBJECT_19_4 49
#define OBJECT_19_3 48
#define OBJECT_19_2 47
#define OBJECT_19_1 46
#define OBJECT_19_0 45
#define EXECUTE_CACHE_19_27 37
#define EXECUTE_CACHE_19_24 39
#define EXECUTE_CACHE_19_23 41
#define EXECUTE_CACHE_19_8 43
#define FREE_REFERENCES_LABEL_19_0 36
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd37;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd16;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd12;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_19_4);
      goto sort_subproblems_out_of_line_21;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_20;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto lambda_29;

    case 5:
      current_block = (Rpc - LABEL_19_12);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_16;

    case 7:
      current_block = (Rpc - LABEL_19_15);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_19_13);
      goto lambda_30;

    case 9:
      current_block = (Rpc - LABEL_19_18);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_19_21);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_19_22);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_19_19);
      goto lambda_31;

    case 13:
      current_block = (Rpc - LABEL_19_16);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_19_17);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_19_25);
      goto lambda_32;

    case 16:
      current_block = (Rpc - LABEL_19_28);
      goto lambda_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sort_subproblems_out_of_line_28)
DEFLABEL (sort_subproblems_out_of_line_21)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_37;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd19.Lng))))
    goto label_37;
  (Wrd11.Obj) = ((Wrd17.pObj) [12]);

DEFLABEL (label_36)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_35;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_9])));
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

DEFLABEL (label_35)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.Obj) = (current_block [OBJECT_19_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_23)
  (Wrd11.Obj) = Rvl;
  goto label_36;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_19_9);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_39;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd23.Lng))))
    goto label_39;
  (Wrd15.Obj) = ((Wrd21.pObj) [13]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_19_11);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_39)
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd31.Obj) = (current_block [OBJECT_19_4]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_19_13);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_45;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd17.Lng))))
    goto label_45;
  (Wrd9.Obj) = ((Wrd15.pObj) [14]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_44)
  (Wrd29.Obj) = (Rsp [2]);
  if ((Wrd29.Obj) == (current_block [OBJECT_19_0]))
    goto label_40;
  (Wrd31.Obj) = (Rsp [0]);
  if (! ((Wrd31.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_40;
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd49.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_19])));
  Rhp += 2;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd49.pObj)));
  Wrd52 = Wrd49;
  (Wrd53.Obj) = (Rsp [1]);
  ((Wrd52.pObj) [2]) = (Wrd53.Obj);
  (Wrd51.Obj) = (Rsp [0]);
  ((Wrd52.pObj) [3]) = (Wrd51.Obj);
  Rvl = (Wrd48.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd33.Obj) = (Rsp [0]);
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_24]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd63.Obj);
  goto label_41;

DEFLABEL (label_42)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_22]))));
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_41)
DEFLABEL (label_43)
  (Wrd46.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_23]));

DEFLABEL (label_45)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_19_5]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19_16);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_28])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_27]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_21);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_25])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_19_19);

DEFLABEL (lambda_11)
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

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_19_25);

DEFLABEL (lambda_5)
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

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_19_28);

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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_9 5
#define LABEL_20_8 7
#define LABEL_20_11 9
#define LABEL_20_12 11
#define LABEL_20_13 13
#define LABEL_20_15 15
#define LABEL_20_16 17
#define LABEL_20_17 19
#define LABEL_20_5 21
#define TAG_20_6 9
#define ENVIRONMENT_LABEL_20_3 34
#define DEBUGGING_LABEL_20_2 33
#define OBJECT_20_3 32
#define OBJECT_20_2 31
#define OBJECT_20_1 30
#define OBJECT_20_0 29
#define EXECUTE_CACHE_20_14 23
#define EXECUTE_CACHE_20_10 25
#define EXECUTE_CACHE_20_7 27
#define FREE_REFERENCES_LABEL_20_0 22
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_20_4);
      goto sort_integrated_14;

    case 1:
      current_block = (Rpc - LABEL_20_9);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_20_11);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_20_12);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_20_13);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_20_15);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_20_16);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_20_17);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_20_5);
      goto lambda_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sort_integrated_24)
DEFLABEL (sort_integrated_14)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_26;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_5])));
  Rhp += 3;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd31 = Wrd26;
  (Wrd32.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [4]) = (Wrd28.Obj);
  Rvl = (Wrd25.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd7.Obj) = (Rsp [1]);
  if (! ((Wrd7.Obj) == (Wrd6.Obj)))
    goto label_27;
  (Wrd21.Obj) = (current_block [OBJECT_20_1]);
  (Rsp [2]) = (Wrd21.Obj);
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (label_27)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_42;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_33;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_32)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_31;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_30)
  (Wrd28.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_29;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (label_29)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 1);

DEFLABEL (label_19)
  (Wrd29.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_18)
  (Wrd16.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 1);

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_40;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd38.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_38;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [0]);

DEFLABEL (label_37)
  (Wrd59.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Rsp [3]) = (Wrd56.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_36;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (label_36)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 1);

DEFLABEL (label_22)
  (Wrd60.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_21)
  (Wrd47.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 1);

DEFLABEL (label_20)
  (Wrd38.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_20_5);

DEFLABEL (lambda_12)
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

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_9 7
#define LABEL_21_10 9
#define LABEL_21_12 11
#define LABEL_21_14 13
#define LABEL_21_15 15
#define LABEL_21_16 17
#define LABEL_21_11 19
#define LABEL_21_7 21
#define ENVIRONMENT_LABEL_21_3 50
#define DEBUGGING_LABEL_21_2 49
#define OBJECT_21_10 48
#define OBJECT_21_9 47
#define OBJECT_21_8 46
#define OBJECT_21_7 45
#define OBJECT_21_6 44
#define OBJECT_21_5 43
#define OBJECT_21_4 42
#define OBJECT_21_3 41
#define OBJECT_21_2 40
#define OBJECT_21_1 39
#define OBJECT_21_0 38
#define EXECUTE_CACHE_21_19 23
#define EXECUTE_CACHE_21_18 25
#define EXECUTE_CACHE_21_17 27
#define EXECUTE_CACHE_21_13 29
#define EXECUTE_CACHE_21_8 31
#define EXECUTE_CACHE_21_6 33
#define FREE_REFERENCE_21_1 36
#define FREE_REFERENCE_21_0 37
#define FREE_REFERENCES_LABEL_21_0 22
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd32;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd64;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd61;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd81;
  machine_word Wrd80;
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
      goto operator_neededP_18;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_9);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_21_10);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_21_12);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_21_14);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_21_15);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_21_16);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operator_neededP_26)
DEFLABEL (operator_neededP_18)
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
    goto label_31;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd81.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_21_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd7.Obj) = ((SCHEME_OBJECT) 0);
  goto label_27;

DEFLABEL (label_28)
  (Wrd7.Obj) = (current_block [OBJECT_21_3]);

DEFLABEL (label_27)
DEFLABEL (label_30)
  (Rsp [0]) = (Wrd7.Obj);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_19]));

DEFLABEL (label_31)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_52;
  Wrd7 = Wrd11;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_50;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_50;
  (Wrd13.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_49)
  (Wrd29.Obj) = (* (Rsp++));
  if ((Wrd13.Obj) == (Wrd29.Obj))
    goto label_43;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_42;
  Wrd30 = Wrd34;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_40;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd44.Lng))))
    goto label_40;
  (Wrd36.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_39)
  (Wrd52.Obj) = (* (Rsp++));
  if ((Wrd36.Obj) == (Wrd52.Obj))
    goto label_32;
  Rvl = (current_block [OBJECT_21_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_16);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_21_4]))
    goto label_38;
  if (Rvl == (current_block [OBJECT_21_5]))
    goto label_38;
  if (Rvl == (current_block [OBJECT_21_6]))
    goto label_35;
  if (Rvl == (current_block [OBJECT_21_8]))
    goto label_33;
  if (Rvl == (current_block [OBJECT_21_9]))
    goto label_33;
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_21_10]);
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_18]));

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_21_3]);

DEFLABEL (label_34)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd20.Obj) = (current_block [OBJECT_21_7]);
  (Rsp [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 10)
    goto label_37;

DEFLABEL (label_36)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_37)
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd30.Lng))))
    goto label_36;
  Rvl = ((Wrd28.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_34;

DEFLABEL (label_40)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_21_0]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_23)
  (Wrd36.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_14])), (Wrd31.pObj));

DEFLABEL (label_22)
  (Wrd30.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 10))
    goto label_48;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd70.Lng))))
    goto label_48;
  (Wrd64.Obj) = ((Wrd68.pObj) [3]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_21_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_44;

DEFLABEL (label_45)
  Rvl = (current_block [OBJECT_21_3]);

DEFLABEL (label_44)
DEFLABEL (label_46)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.Obj) = (current_block [OBJECT_21_2]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_21_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_21)
  (Wrd13.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_9])), (Wrd8.pObj));

DEFLABEL (label_20)
  (Wrd7.Obj) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_6 5
#define LABEL_22_5 7
#define LABEL_22_8 9
#define ENVIRONMENT_LABEL_22_3 20
#define DEBUGGING_LABEL_22_2 19
#define OBJECT_22_3 18
#define OBJECT_22_2 17
#define OBJECT_22_1 16
#define OBJECT_22_0 15
#define EXECUTE_CACHE_22_9 11
#define EXECUTE_CACHE_22_7 13
#define FREE_REFERENCES_LABEL_22_0 10
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd9;
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
      goto update_subproblem_contextsB_3;

    case 1:
      current_block = (Rpc - LABEL_22_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_subproblem_contextsB_8)
DEFLABEL (update_subproblem_contextsB_3)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = (current_block [OBJECT_22_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_11;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_11;
  (Wrd9.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (label_11)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_22_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_22_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define LABEL_23_9 11
#define LABEL_23_10 13
#define LABEL_23_12 15
#define LABEL_23_13 17
#define LABEL_23_15 19
#define LABEL_23_16 21
#define LABEL_23_14 23
#define LABEL_23_11 25
#define LABEL_23_18 27
#define LABEL_23_8 29
#define LABEL_23_19 31
#define LABEL_23_22 33
#define LABEL_23_21 35
#define ENVIRONMENT_LABEL_23_3 58
#define DEBUGGING_LABEL_23_2 57
#define OBJECT_23_9 56
#define OBJECT_23_8 55
#define OBJECT_23_7 54
#define OBJECT_23_6 53
#define OBJECT_23_5 52
#define OBJECT_23_4 51
#define OBJECT_23_3 50
#define OBJECT_23_2 49
#define OBJECT_23_1 48
#define OBJECT_23_0 47
#define EXECUTE_CACHE_23_23 37
#define EXECUTE_CACHE_23_20 39
#define EXECUTE_CACHE_23_17 41
#define FREE_REFERENCE_23_2 44
#define FREE_REFERENCE_23_1 45
#define FREE_REFERENCE_23_0 46
#define FREE_REFERENCES_LABEL_23_0 36
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
order_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd62;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd91;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd113;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd110;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_23_4);
      goto update_rvalue_contextsB_21;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_23_9);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_23_10);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_23_12);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_23_13);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_23_15);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_23_16);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_23_14);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_23_11);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_23_18);
      goto lambda_5;

    case 13:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_23_19);
      goto continuation_1;

    case 15:
      current_block = (Rpc - LABEL_23_22);
      goto continuation_3;

    case 16:
      current_block = (Rpc - LABEL_23_21);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_rvalue_contextsB_32)
DEFLABEL (update_rvalue_contextsB_21)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_54;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_54;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_53)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_52;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_52;
  (Wrd22.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_51)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_50;
  Wrd35 = Wrd39;

DEFLABEL (label_49)
  (Wrd41.Obj) = (Rsp [0]);
  if ((Wrd41.Obj) == (Wrd35.Obj))
    goto label_47;
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_1]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_46;
  Wrd43 = Wrd47;

DEFLABEL (label_45)
  (Wrd49.Obj) = (Rsp [0]);
  if ((Wrd49.Obj) == (Wrd43.Obj))
    goto label_41;
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_2]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_40;
  Wrd51 = Wrd55;

DEFLABEL (label_39)
  (Wrd57.Obj) = (Rsp [0]);
  if ((Wrd57.Obj) == (Wrd51.Obj))
    goto label_34;
  Rvl = (current_block [OBJECT_23_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd72.Obj) = (Rsp [3]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_38;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd71.Lng))))
    goto label_38;
  (Wrd65.Obj) = ((Wrd69.pObj) [19]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_37)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_16]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_23_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd27.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = (& (Rsp [4]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd29.pObj)));
  (Rsp [1]) = (Wrd31.Obj);
  goto lambda_5;

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_36)
  Rvl = (current_block [OBJECT_23_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd74.Obj) = (Rsp [3]);
  (Wrd75.Obj) = (current_block [OBJECT_23_5]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_13])), (Wrd52.pObj));

DEFLABEL (label_27)
  (Wrd51.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd86.pObj) = (& (Rsp [2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd86.pObj)));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd98.Obj) = (Rsp [4]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 10))
    goto label_43;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd97.Lng))))
    goto label_43;
  (Wrd91.Obj) = ((Wrd95.pObj) [3]);
  (* (--Rsp)) = (Wrd91.Obj);

DEFLABEL (label_42)
  goto lambda_5;

DEFLABEL (label_43)
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.Obj) = (current_block [OBJECT_23_4]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_29)
DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_10])), (Wrd44.pObj));

DEFLABEL (label_26)
  (Wrd43.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd108.pObj) = (& (Rsp [2]));
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd108.pObj)));
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd120.Obj) = (Rsp [4]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if (! ((Wrd121.uLng) == 10))
    goto label_48;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd120.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd119.Lng))))
    goto label_48;
  (Wrd113.Obj) = ((Wrd117.pObj) [3]);
  (* (--Rsp)) = (Wrd113.Obj);
  goto label_42;

DEFLABEL (label_48)
  (Wrd122.Obj) = (Rsp [4]);
  (Wrd123.Obj) = (current_block [OBJECT_23_4]);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_30)
  goto label_44;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_7])), (Wrd36.pObj));

DEFLABEL (label_25)
  (Wrd35.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd30.Obj) = (current_block [OBJECT_23_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_23_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_23_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23_5]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_56;

DEFLABEL (label_55)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_7]), 3);

DEFLABEL (label_56)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd20.Lng))))
    goto label_55;
  ((Wrd18.pObj) [19]) = (Wrd8.Obj);
  goto label_36;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_23_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_58;

DEFLABEL (label_57)
  Rvl = (current_block [OBJECT_23_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23_4]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_60;

DEFLABEL (label_59)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_7]), 3);

DEFLABEL (label_60)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_59;
  ((Wrd18.pObj) [3]) = (Wrd8.Obj);
  goto label_57;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_23_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_62;

DEFLABEL (label_61)
  Rvl = (current_block [OBJECT_23_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23_4]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_64;

DEFLABEL (label_63)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_7]), 3);

DEFLABEL (label_64)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_63;
  ((Wrd18.pObj) [3]) = (Wrd8.Obj);
  goto label_61;

DEFLABEL (lambda_33)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_23_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_21);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_68;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_23_9]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_23]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_22);

DEFLABEL (label_68)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd17.Obj) == (Wrd18.Obj))
    goto label_66;
  Rvl = (current_block [OBJECT_23_8]);
  goto label_65;

DEFLABEL (label_66)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_65)
DEFLABEL (label_67)
  Rsp = (& (Rsp [2]));
  goto pop_return;

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
order_so_77abd8c13fd3afe3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	1,
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	2,
	1,
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
    if (counter > 23)
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

static const struct liarc_code_S arr_decl_order_so_77abd8c13fd3afe3 [23] =
  {
    { "order_so_code_1", 2, order_so_code_1 },
    { "order_so_code_2", 11, order_so_code_2 },
    { "order_so_code_3", 11, order_so_code_3 },
    { "order_so_code_4", 2, order_so_code_4 },
    { "order_so_code_5", 3, order_so_code_5 },
    { "order_so_code_6", 8, order_so_code_6 },
    { "order_so_code_7", 22, order_so_code_7 },
    { "order_so_code_8", 37, order_so_code_8 },
    { "order_so_code_9", 12, order_so_code_9 },
    { "order_so_code_10", 21, order_so_code_10 },
    { "order_so_code_11", 44, order_so_code_11 },
    { "order_so_code_12", 22, order_so_code_12 },
    { "order_so_code_13", 5, order_so_code_13 },
    { "order_so_code_14", 9, order_so_code_14 },
    { "order_so_code_15", 5, order_so_code_15 },
    { "order_so_code_16", 7, order_so_code_16 },
    { "order_so_code_17", 8, order_so_code_17 },
    { "order_so_code_18", 3, order_so_code_18 },
    { "order_so_code_19", 17, order_so_code_19 },
    { "order_so_code_20", 10, order_so_code_20 },
    { "order_so_code_21", 10, order_so_code_21 },
    { "order_so_code_22", 4, order_so_code_22 },
    { "order_so_code_23", 17, order_so_code_23 }
  };

int
decl_order_so_77abd8c13fd3afe3 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_order_so_77abd8c13fd3afe3);
  return (0);
}

DECLARE_COMPILED_CODE ("order.so", 3, decl_order_so_77abd8c13fd3afe3, order_so_77abd8c13fd3afe3)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_order_so_data_77abd8c13fd3afe3 [5573] =
  "\x90\x01\x36\x91\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9"
  "\x28\x0d\xba\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88"
  "\x02\x02\x1d\x85\xc2\xbc\x86\x28\x0d\xbd\x28\x0d\x28\x0d\x28\x0d"
  "\xbe\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0"
  "\x83\x88\x0c\x08\x0d\x02\x0d\x02\x80\xc1\x1c\xb4\x02\x0d\x1c\x0d"
  "\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x85\x88\xc2\x1c\x82\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\xc1\x1c\x08\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x86\x02\x80\x02"
  "\x83\xc3\x1c\x02\xb4\x82\x1b\x81\x0d\x1b\x0d\x24\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x28\xb5\x28\x0d\x28\x0d\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d"
  "\xb0\x02\x88\x1b\x08\x1b\x1b\x1b\x82\x02\xb4\x02\x0d\x0d\x0d\x1c"
  "\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x82\x0d\x02\xb4\x80\x1b\x83\x1b\x1b\x24\x28\xb1\x28\x0d\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x02\x1b\x1b\xb4\x02\x1b"
  "\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0c\x84\x0f\x02\x1b\x02\x0c\x02\x08\x1b\x02"
  "\x02\x02\x82\x83\x80\xb4\x02\x0d\x1c\x0d\x1c\x24\x28\x1b\x28\x0d"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x08\x02\x02\x02\x02\x82\x83\xb4\x80\x1b\x1b\x24\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x83\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\x06\x07\x1b\x83\x0c\xb4\x02\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x28\xb1"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x02\x1b\xb4\x02\x08\x28\x0d\xb9\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0c\x08"
  "\x28\x1b\x28\x1b\x28\xb1\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0d\x0d\x02\x0d\x0d\x0d\x07\x82\xb4\x80\x0d\x1b"
  "\x24\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x83\x1b\x82\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x07\x1b\x1d\x02\x82\x1b\x83\xb4\x80\x0d\x0d"
  "\x0d\x24\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17"
  "\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\xb5\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb3"
  "\x2a\x17\x1b\x1b\x1b\xb1\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\xb6\xb2\x0d\x17\x28\x0d\x26\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f"
  "\x66\x67\x6f\x70\x74\x2f\x6f\x72\x64\x65\x72\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x04"
  "\x10\x6f\x72\x64\x65\x72\x2d\x70\x61\x72\x61\x6c\x6c\x65\x6c\x21"
  "\x03\x05\x06\x83\x04\x04\x04\x83\x04\x05\x0d\x02\x08\x09\x02\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x03\x0f\x65\x64\x67\x65"
  "\x2d\x6e\x65\x78\x74\x2d\x6e\x6f\x64\x65\x03\x18\x65\x64\x67\x65"
  "\x73\x2d\x64\x69\x73\x63\x6f\x6e\x6e\x65\x63\x74\x2d\x72\x69\x67"
  "\x68\x74\x21\x03\x11\x65\x64\x67\x65\x2d\x64\x69\x73\x63\x6f\x6e"
  "\x6e\x65\x63\x74\x21\x05\x1e\x6f\x72\x64\x65\x72\x2d\x73\x75\x62"
  "\x70\x72\x6f\x62\x6c\x65\x6d\x73\x2f\x61\x70\x70\x6c\x69\x63\x61"
  "\x74\x69\x6f\x6e\x04\x15\x65\x64\x67\x65\x73\x2d\x63\x6f\x6e\x6e"
  "\x65\x63\x74\x2d\x72\x69\x67\x68\x74\x21\x06\x10\x18\x81\x87\x02"
  "\x0f\x16\x81\x87\x02\x0e\x14\x81\x8b\x02\x0d\x12\x81\x91\x02\x0c"
  "\x10\x81\x8f\x02\x0b\x0e\x81\x8b\x02\x0a\x0c\x81\x8b\x02\x09\x0a"
  "\x81\x89\x02\x08\x08\x81\x87\x02\x07\x06\x81\x85\x02\x06\x04\x84"
  "\x06\x17\x2b\x02\x19\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x61\x70\x70"
  "\x6c\x69\x63\x61\x74\x69\x6f\x6e\x20\x74\x79\x70\x65\x07\x72\x65"
  "\x74\x75\x72\x6e\x0d\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x08\x04\x63\x61\x72\x09\x0b\x0e\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x74\x61\x67\x0a\x19\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x65\x66\x66\x65\x63\x74"
  "\x0b\x03\x05\x19\x6f\x72\x64\x65\x72\x2d\x73\x75\x62\x70\x72\x6f"
  "\x62\x6c\x65\x6d\x73\x2f\x69\x6e\x6c\x69\x6e\x65\x0c\x05\x1e\x6f"
  "\x72\x64\x65\x72\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73"
  "\x2f\x6f\x75\x74\x2d\x6f\x66\x2d\x6c\x69\x6e\x65\x0d\x03\x1b\x63"
  "\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2f\x73\x69\x6d\x70\x6c"
  "\x65\x2d\x69\x6e\x6c\x69\x6e\x65\x3f\x06\x17\x6c\x69\x6e\x65\x61"
  "\x72\x69\x7a\x65\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73"
  "\x21\x0e\x04\x06\x65\x72\x72\x6f\x72\x0f\x06\x1b\x18\x81\x85\x02"
  "\x1a\x16\x81\x8b\x02\x19\x14\x81\x93\x02\x18\x12\x81\x89\x02\x17"
  "\x10\x81\x87\x02\x16\x0e\x85\x08\x15\x0c\x81\x8b\x02\x14\x0a\x81"
  "\x8b\x02\x13\x08\x81\x8b\x02\x12\x06\x81\x89\x02\x11\x04\x81\x89"
  "\x02\x17\x32\x10\x02\x04\x16\x73\x65\x74\x2d\x73\x75\x62\x70\x72"
  "\x6f\x62\x6c\x65\x6d\x2d\x74\x79\x70\x65\x73\x21\x11\x05\x16\x6c"
  "\x69\x6e\x65\x61\x72\x69\x7a\x65\x2d\x73\x75\x62\x70\x72\x6f\x62"
  "\x6c\x65\x6d\x73\x12\x03\x1d\x06\x81\x89\x02\x1c\x04\x86\x0a\x05"
  "\x0d\x13\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x14"
  "\x04\x18\x73\x65\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2a\x2f\x74\x79\x70\x65\x21\x15\x05\x15\x6c\x69\x6e\x65"
  "\x61\x72\x69\x7a\x65\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x16\x03\x20\x08\x81\x89\x02\x1f\x06\x81\x8d\x02\x1e\x04\x86\x0a"
  "\x07\x11\x17\x02\x09\x04\x63\x64\x72\x18\x04\x05\x61\x73\x73\x71"
  "\x05\x16\x03\x28\x12\xfd\xff\x03\x27\x10\xfd\xff\x03\x26\x0e\xfd"
  "\xff\x03\x25\x0c\xfd\xff\x03\x24\x0a\xfd\xff\x03\x23\x08\xfd\xff"
  "\x03\x22\x06\xff\xff\x03\x21\x04\x85\x08\x11\x1c\x19\x02\x08\x26"
  "\x41\x74\x74\x65\x6d\x70\x74\x20\x74\x6f\x20\x72\x65\x61\x74\x74"
  "\x61\x63\x68\x20\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x20\x62\x6f\x64\x79\x08\x0b\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73"
  "\x65\x74\x21\x1a\x19\x14\x21\x76\x69\x72\x74\x75\x61\x6c\x2d\x72"
  "\x65\x74\x75\x72\x6e\x2f\x74\x61\x72\x67\x65\x74\x2d\x6c\x76\x61"
  "\x6c\x75\x65\x2f\x74\x61\x67\x0b\x15\x73\x65\x74\x2d\x73\x6e\x6f"
  "\x64\x65\x2d\x6e\x65\x78\x74\x2d\x65\x64\x67\x65\x21\x04\x03\x0b"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x1b\x05\x0e\x63\x66\x67"
  "\x2d\x6e\x6f\x64\x65\x2d\x70\x75\x74\x21\x04\x11\x73\x63\x66\x67"
  "\x2a\x6e\x6f\x64\x65\x2d\x3e\x6e\x6f\x64\x65\x21\x1c\x05\x14\x6d"
  "\x61\x6b\x65\x2d\x76\x69\x72\x74\x75\x61\x6c\x2d\x72\x65\x74\x75"
  "\x72\x6e\x03\x04\x1a\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64\x65\x21\x05\x0d"
  "\x63\x72\x65\x61\x74\x65\x2d\x65\x64\x67\x65\x21\x04\x0f\x09\x3e"
  "\x2e\x81\x8b\x02\x3d\x2c\x81\x83\x02\x3c\x2a\x81\x83\x02\x3b\x28"
  "\x81\x83\x02\x3a\x26\x81\x83\x02\x39\x24\x81\x8d\x02\x38\x22\x81"
  "\x8b\x02\x37\x20\x81\x8f\x02\x36\x1e\x81\x95\x02\x35\x1c\x81\x91"
  "\x02\x34\x1a\x81\x91\x02\x33\x18\x81\x8f\x02\x32\x16\x81\x8b\x02"
  "\x31\x14\x81\x83\x02\x30\x12\x81\x83\x02\x2f\x10\x81\x93\x02\x2e"
  "\x0e\x81\x8f\x02\x2d\x0c\x81\x91\x02\x2c\x0a\x81\x8d\x02\x2b\x08"
  "\x81\x89\x02\x2a\x06\x81\x87\x02\x29\x04\x85\x08\x2d\x51\x02\x09"
  "\x14\x1a\x09\x18\x0d\x09\x13\x73\x75\x62\x70\x72\x6f\x62\x6c\x65"
  "\x6d\x2d\x73\x69\x6d\x70\x6c\x65\x3f\x1b\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x17\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x2f\x70\x75\x73\x68\x1d\x0b\x05\x04\x14"
  "\x6c\x69\x73\x74\x2d\x66\x69\x6c\x74\x65\x72\x2d\x69\x6e\x64\x69"
  "\x63\x65\x73\x04\x13\x64\x69\x73\x63\x72\x69\x6d\x69\x6e\x61\x74"
  "\x65\x2d\x69\x74\x65\x6d\x73\x05\x19\x69\x6e\x6c\x69\x6e\x65\x2d"
  "\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x74\x79\x70\x65\x73"
  "\x21\x1e\x05\x12\x04\x04\x6d\x61\x70\x1f\x06\x16\x6c\x69\x6e\x65"
  "\x61\x72\x69\x7a\x65\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x21\x20\x04\x07\x61\x70\x70\x65\x6e\x64\x21\x04\x1c\x03\x0d\x73"
  "\x63\x66\x67\x2a\x2d\x3e\x73\x63\x66\x67\x21\x03\x09\x72\x65\x76"
  "\x65\x72\x73\x65\x21\x03\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2a\x2f\x74\x79\x70\x65\x03\x09\x6d\x61\x6b\x65\x2d"
  "\x70\x6f\x70\x0d\x63\x4c\x81\x85\x02\x62\x4a\x81\x85\x02\x61\x48"
  "\x81\x8b\x02\x60\x46\x81\x85\x02\x5f\x44\x81\x83\x02\x5e\x42\x81"
  "\x83\x02\x5d\x40\x83\x04\x5c\x3e\x81\x99\x02\x5b\x3c\x81\x97\x02"
  "\x5a\x3a\x81\x95\x02\x59\x38\x81\x91\x02\x58\x36\x81\x8f\x02\x57"
  "\x34\x81\x93\x02\x56\x32\x81\x8d\x02\x55\x30\x81\x8b\x02\x54\x2e"
  "\x81\x8f\x02\x53\x2c\x81\x89\x02\x52\x2a\x81\x87\x02\x51\x28\x81"
  "\x8b\x02\x50\x26\x81\x87\x02\x4f\x24\x81\x8d\x02\x4e\x22\x81\x8b"
  "\x02\x4d\x20\x81\x8d\x02\x4c\x1e\x81\x89\x02\x4b\x1c\x81\x87\x02"
  "\x4a\x1a\x81\x89\x02\x49\x18\x81\x87\x02\x48\x16\x81\x8f\x02\x47"
  "\x14\x81\x91\x02\x46\x12\x81\x8f\x02\x45\x10\x81\x8d\x02\x44\x0e"
  "\x81\x8b\x02\x43\x0c\x81\x8f\x02\x42\x0a\x81\x8d\x02\x41\x08\x81"
  "\x89\x02\x40\x06\x81\x87\x02\x3f\x04\x85\x08\x4b\x75\x1c\x02\x0a"
  "\x09\x23\x5b\x76\x61\x6c\x75\x65\x5d\x10\x14\x0b\x0a\x03\x04\x03"
  "\x17\x72\x76\x61\x6c\x75\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x3f\x03\x1d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x74\x6f\x2d\x6b\x6e\x6f\x77\x6e\x2d\x6c\x6f\x63\x61"
  "\x74\x69\x6f\x6e\x3f\x0a\x04\x15\x04\x1c\x75\x70\x64\x61\x74\x65"
  "\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x63\x6f\x6e\x74"
  "\x65\x78\x74\x73\x21\x22\x06\x6f\x1a\x81\x87\x02\x6e\x18\x81\x85"
  "\x02\x6d\x16\x81\x85\x02\x6c\x14\x81\x85\x02\x6b\x12\x81\x87\x02"
  "\x6a\x10\x81\x85\x02\x69\x0e\x81\x83\x02\x68\x0c\x81\x85\x02\x67"
  "\x0a\x81\x85\x02\x66\x08\x81\x87\x02\x65\x06\x81\x85\x02\x64\x04"
  "\x85\x08\x19\x31\x23\x02\x0b\x1a\x0e\x09\x09\x18\x10\x0b\x1d\x03"
  "\x04\x1b\x61\x64\x64\x2d\x64\x65\x66\x61\x75\x6c\x74\x65\x64\x2d"
  "\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73\x21\x1d\x06\x15\x63"
  "\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x6f\x72\x64\x65\x72"
  "\x69\x6e\x67\x0b\x03\x07\x6c\x65\x6e\x67\x74\x68\x24\x07\x28\x6f"
  "\x72\x64\x65\x72\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73"
  "\x2f\x6d\x61\x79\x62\x65\x2d\x6f\x76\x65\x72\x77\x72\x69\x74\x65"
  "\x2d\x62\x6c\x6f\x63\x6b\x06\x0e\x04\x21\x07\x84\x01\x2c\x81\x85"
  "\x02\x83\x01\x2a\x81\x85\x02\x82\x01\x28\x81\x87\x02\x81\x01\x26"
  "\x81\x83\x02\x80\x01\x24\x81\x87\x02\x7f\x22\x81\x8b\x02\x7e\x20"
  "\x81\x83\x02\x7d\x1e\x81\x89\x02\x7c\x1c\x81\x8f\x02\x7b\x1a\x81"
  "\x87\x02\x7a\x18\x81\x87\x02\x79\x16\x81\x87\x02\x78\x14\x81\x87"
  "\x02\x77\x12\x81\x8b\x02\x76\x10\x81\x89\x02\x75\x0e\x81\x93\x02"
  "\x74\x0c\x81\x91\x02\x73\x0a\x81\x8f\x02\x72\x08\x81\x8d\x02\x71"
  "\x06\x81\x87\x02\x70\x04\x85\x08\x2b\x45\x25\x02\x0c\x1a\x77\x72"
  "\x6f\x6e\x67\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\x73\x15\x69\x6e\x20\x63\x61\x6c\x6c\x20"
  "\x74\x6f\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x01\x0b\x0d\x1a"
  "\x09\x25\x6d\x69\x6e\x69\x6d\x75\x6d\x2f\x6d\x61\x78\x69\x6d\x75"
  "\x6d\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x73\x3a\x0e\x18\x0c\x08\x11\x10\x0e\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x26\x11\x62\x6c\x6f\x63"
  "\x6b\x2d\x74\x79\x70\x65\x2f\x73\x74\x61\x63\x6b\x27\x03\x03\x24"
  "\x03\x15\x65\x72\x72\x6f\x72\x2d\x69\x72\x72\x69\x74\x61\x6e\x74"
  "\x2f\x6e\x6f\x69\x73\x65\x04\x21\x05\x1b\x6d\x61\x6b\x65\x2d\x64"
  "\x65\x66\x61\x75\x6c\x74\x65\x64\x2d\x73\x75\x62\x70\x72\x6f\x62"
  "\x6c\x65\x6d\x73\x24\x04\x08\x61\x70\x70\x65\x6e\x64\x21\x21\x04"
  "\x0a\x6c\x69\x73\x74\x2d\x68\x65\x61\x64\x05\x1f\x0b\x05\x77\x61"
  "\x72\x6e\x09\xb0\x01\x5a\x81\x95\x02\xaf\x01\x58\x81\x93\x02\xae"
  "\x01\x56\x81\x91\x02\xad\x01\x54\x81\x8f\x02\xac\x01\x52\x81\x8d"
  "\x02\xab\x01\x50\x81\x89\x02\xaa\x01\x4e\x81\x87\x02\xa9\x01\x4c"
  "\x81\x83\x02\xa8\x01\x4a\x81\x83\x02\xa7\x01\x48\x84\x06\xa6\x01"
  "\x46\x81\x87\x02\xa5\x01\x44\x81\x8d\x02\xa4\x01\x42\x81\x8d\x02"
  "\xa3\x01\x40\x81\x8b\x02\xa2\x01\x3e\x81\x8b\x02\xa1\x01\x3c\x81"
  "\x8b\x02\xa0\x01\x3a\x81\x8f\x02\x9f\x01\x38\x81\x8b\x02\x9e\x01"
  "\x36\x81\x93\x02\x9d\x01\x34\x81\x8f\x02\x9c\x01\x32\x81\x8f\x02"
  "\x9b\x01\x30\x81\x8d\x02\x9a\x01\x2e\x81\x8b\x02\x99\x01\x2c\x81"
  "\x89\x02\x98\x01\x2a\x81\x8b\x02\x97\x01\x28\x81\x8b\x02\x96\x01"
  "\x26\x81\x87\x02\x95\x01\x24\x81\x87\x02\x94\x01\x22\x81\x87\x02"
  "\x93\x01\x20\x81\x85\x02\x92\x01\x1e\x81\x85\x02\x91\x01\x1c\x81"
  "\x87\x02\x90\x01\x1a\x81\x8d\x02\x8f\x01\x18\x81\x8d\x02\x8e\x01"
  "\x16\x81\x87\x02\x8d\x01\x14\x81\x87\x02\x8c\x01\x12\x81\x87\x02"
  "\x8b\x01\x10\x81\x89\x02\x8a\x01\x0e\x81\x89\x02\x89\x01\x0c\x81"
  "\x87\x02\x88\x01\x0a\x81\x89\x02\x87\x01\x08\x81\x87\x02\x86\x01"
  "\x06\x81\x85\x02\x85\x01\x04\x84\x06\x59\x83\x01\x1f\x02\x0d\x14"
  "\x12\x13\x08\x11\x26\x27\x03\x06\x1b\x6b\x6e\x6f\x77\x6e\x2d\x63"
  "\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x6f\x72\x64\x65\x72"
  "\x69\x6e\x67\x27\x06\x1f\x6f\x70\x74\x69\x6d\x69\x7a\x65\x64\x2d"
  "\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x6f\x72\x64\x65"
  "\x72\x69\x6e\x67\x28\x03\x11\x6f\x70\x65\x72\x61\x74\x6f\x72\x2d"
  "\x6e\x65\x65\x64\x65\x64\x3f\x29\x03\x08\x72\x65\x76\x65\x72\x73"
  "\x65\x2a\x07\x10\x68\x61\x6e\x64\x6c\x65\x2d\x6f\x70\x65\x72\x61"
  "\x74\x6f\x72\x2b\x04\x0f\x6e\x65\x77\x2d\x73\x75\x62\x70\x72\x6f"
  "\x62\x6c\x65\x6d\x2c\x07\xc6\x01\x2e\x81\x85\x02\xc5\x01\x2c\x81"
  "\x87\x02\xc4\x01\x2a\x81\x89\x02\xc3\x01\x28\x81\x87\x02\xc2\x01"
  "\x26\x81\x8b\x02\xc1\x01\x24\x81\x83\x02\xc0\x01\x22\x81\x85\x02"
  "\xbf\x01\x20\x81\x83\x02\xbe\x01\x1e\x81\x87\x02\xbd\x01\x1c\x81"
  "\x83\x02\xbc\x01\x1a\x81\x83\x02\xbb\x01\x18\x81\x83\x02\xba\x01"
  "\x16\x81\x93\x02\xb9\x01\x14\x81\x93\x02\xb8\x01\x12\x81\x91\x02"
  "\xb7\x01\x10\x81\x91\x02\xb6\x01\x0e\x81\x93\x02\xb5\x01\x0c\x81"
  "\x91\x02\xb4\x01\x0a\x81\x8f\x02\xb3\x01\x08\x81\x91\x02\xb2\x01"
  "\x06\x81\x8f\x02\xb1\x01\x04\x86\x0a\x2d\x4a\x2d\x02\x0e\x14\x04"
  "\x1d\x73\x6f\x72\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x73\x2f\x6f\x75\x74\x2d\x6f\x66\x2d\x6c\x69\x6e\x65\x2e\x03\x29"
  "\x07\x2b\x04\xcb\x01\x0c\x81\x8b\x02\xca\x01\x0a\x81\x8d\x02\xc9"
  "\x01\x08\x81\x87\x02\xc8\x01\x06\x81\x89\x02\xc7\x01\x04\x86\x0a"
  "\x0b\x17\x2f\x02\x0f\x14\x2e\x6b\x6e\x6f\x77\x6e\x2d\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x6f\x72\x64\x65\x72\x69\x6e"
  "\x67\x3a\x20\x6b\x6e\x6f\x77\x6e\x20\x6e\x6f\x6e\x2d\x63\x6c\x6f"
  "\x73\x75\x72\x65\x1b\x03\x13\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2f\x63\x6c\x6f\x73\x75\x72\x65\x3f\x04\x0f\x03\x13\x72\x76\x61"
  "\x6c\x75\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x30"
  "\x03\x1b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x72\x69\x76"
  "\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f\x03\x2a\x07\x2b"
  "\x07\xd4\x01\x14\x81\x8b\x02\xd3\x01\x12\x81\x8b\x02\xd2\x01\x10"
  "\x81\x8d\x02\xd1\x01\x0e\x81\x8d\x02\xd0\x01\x0c\x81\x8d\x02\xcf"
  "\x01\x0a\x81\x89\x02\xce\x01\x08\x81\x89\x02\xcd\x01\x06\x81\x89"
  "\x02\xcc\x01\x04\x86\x0a\x13\x2b\x31\x02\x10\x04\x22\x04\x21\x03"
  "\xd9\x01\x0c\x81\x85\x02\xd8\x01\x0a\x81\x85\x02\xd7\x01\x08\x81"
  "\x8b\x02\xd6\x01\x06\x81\x8b\x02\xd5\x01\x04\x87\x0c\x0b\x14\x32"
  "\x02\x11\x02\x0f\x64\x65\x66\x61\x75\x6c\x74\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x03\x0e\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e"
  "\x74\x04\x2c\x04\xe0\x01\x10\x81\x8d\x02\xdf\x01\x0e\x81\x8d\x02"
  "\xde\x01\x0c\x81\x8d\x02\xdd\x01\x0a\x81\x8d\x02\xdc\x01\x08\x81"
  "\x89\x02\xdb\x01\x06\x81\x87\x02\xda\x01\x04\x85\x08\x0f\x19\x33"
  "\x02\x12\x18\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x2f\x76\x61\x6c\x75\x65\x02\x03\x18\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x62"
  "\x6c\x6f\x63\x6b\x34\x03\x23\x6e\x65\x77\x2d\x73\x75\x62\x70\x72"
  "\x6f\x62\x6c\x65\x6d\x2f\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x69"
  "\x6d\x70\x6c\x69\x63\x69\x74\x79\x21\x05\x10\x6d\x61\x6b\x65\x2d"
  "\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x06\x1b\x76\x69\x72\x74"
  "\x75\x61\x6c\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x2f\x25\x6d\x61\x6b\x65\x03\x17\x6d\x61\x6b\x65\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x03\x27"
  "\x6e\x65\x77\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2f\x63"
  "\x6f\x6d\x70\x75\x74\x65\x2d\x66\x72\x65\x65\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x73\x21\x07\xe8\x01\x12\x81\x83\x02\xe7\x01\x10"
  "\x81\x83\x02\xe6\x01\x0e\x81\x93\x02\xe5\x01\x0c\x81\x91\x02\xe4"
  "\x01\x0a\x81\x89\x02\xe3\x01\x08\x81\x85\x02\xe2\x01\x06\x81\x8d"
  "\x02\xe1\x01\x04\x84\x06\x11\x23\x35\x02\x13\x14\x04\x04\x15\x03"
  "\xeb\x01\x08\x81\x87\x02\xea\x01\x06\x81\x85\x02\xe9\x01\x04\x84"
  "\x06\x07\x11\x15\x02\x14\x0e\x0d\x18\x0c\x06\x10\x73\x6f\x72\x74"
  "\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x03\x2a\x03\x11\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x2d\x75\x6e\x75\x73\x65\x64\x3f\x2a"
  "\x04\x21\x05\xfc\x01\x24\x81\x85\x02\xfb\x01\x22\x81\x85\x02\xfa"
  "\x01\x20\x81\x8f\x02\xf9\x01\x1e\x81\x8b\x02\xf8\x01\x1c\x81\x85"
  "\x02\xf7\x01\x1a\x81\x8f\x02\xf6\x01\x18\x81\x8b\x02\xf5\x01\x16"
  "\x81\x89\x02\xf4\x01\x14\x81\x89\x02\xf3\x01\x12\x81\x8b\x02\xf2"
  "\x01\x10\x81\x89\x02\xf1\x01\x0e\x81\x91\x02\xf0\x01\x0c\x81\x89"
  "\x02\xef\x01\x0a\x81\x85\x02\xee\x01\x08\x81\x8d\x02\xed\x01\x06"
  "\x81\x8d\x02\xec\x01\x04\x84\x06\x23\x35\x21\x02\x15\x18\x09\x28"
  "\x73\x6f\x72\x74\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x3a"
  "\x20\x6e\x6f\x74\x20\x65\x6e\x6f\x75\x67\x68\x20\x73\x75\x62\x70"
  "\x72\x6f\x62\x6c\x65\x6d\x73\x04\x0f\x03\x2a\x06\x04\x86\x02\x16"
  "\x81\x85\x02\x85\x02\x14\x81\x89\x02\x84\x02\x12\x81\x89\x02\x83"
  "\x02\x10\x81\x89\x02\x82\x02\x0e\x81\x89\x02\x81\x02\x0c\x81\x89"
  "\x02\x80\x02\x0a\x81\x89\x02\xff\x01\x08\x81\x89\x02\xfe\x01\x06"
  "\x81\x8b\x02\xfd\x01\x04\x86\x0a\x15\x23\x2a\x02\x16\x17\x55\x6e"
  "\x6b\x6e\x6f\x77\x6e\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20"
  "\x74\x79\x70\x65\x03\x69\x63\x08\x63\x6c\x6f\x73\x75\x72\x65\x08"
  "\x10\x74\x72\x69\x76\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65"
  "\x0e\x6f\x70\x65\x6e\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x0e\x6f"
  "\x70\x65\x6e\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x0d\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x2d\x74\x61\x67\x26\x03\x03\x30\x03\x0b\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x3f\x03\x15\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03"
  "\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x79\x70\x65\x04"
  "\x0f\x03\x0a\x07\x90\x02\x16\x81\x85\x02\x8f\x02\x14\x81\x85\x02"
  "\x8e\x02\x12\x81\x85\x02\x8d\x02\x10\x81\x87\x02\x8c\x02\x0e\x81"
  "\x85\x02\x8b\x02\x0c\x81\x87\x02\x8a\x02\x0a\x81\x87\x02\x89\x02"
  "\x08\x81\x85\x02\x88\x02\x06\x81\x83\x02\x87\x02\x04\x83\x04\x15"
  "\x33\x30\x02\x17\x02\x14\x03\x1b\x04\x18\x75\x70\x64\x61\x74\x65"
  "\x2d\x72\x76\x61\x6c\x75\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x73"
  "\x21\x26\x03\x94\x02\x0a\x81\x85\x02\x93\x02\x08\x81\x85\x02\x92"
  "\x02\x06\x81\x87\x02\x91\x02\x04\x84\x06\x09\x15\x1b\x02\x18\x1e"
  "\x6d\x69\x73\x6d\x61\x74\x63\x68\x65\x64\x20\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x20\x63\x6f\x6e\x74\x65\x78\x74\x73\x1a\x02\x13"
  "\x14\x16\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70\x65\x2f\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x1c\x72\x76\x61\x6c\x75\x65\x2d\x74"
  "\x79\x70\x65\x2f\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x74"
  "\x65\x73\x74\x16\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70\x65\x2f"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x04\x03\x13\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x3f\x03\x34"
  "\x05\x0f\x04\xa5\x02\x24\x81\x87\x02\xa4\x02\x22\x81\x85\x02\xa3"
  "\x02\x20\x81\x85\x02\xa2\x02\x1e\x81\x87\x02\xa1\x02\x1c\x81\x85"
  "\x02\xa0\x02\x1a\x81\x87\x02\x9f\x02\x18\x81\x87\x02\x9e\x02\x16"
  "\x81\x83\x02\x9d\x02\x14\x81\x89\x02\x9c\x02\x12\x81\x87\x02\x9b"
  "\x02\x10\x81\x8b\x02\x9a\x02\x0e\x81\x87\x02\x99\x02\x0c\x81\x8b"
  "\x02\x98\x02\x0a\x81\x87\x02\x97\x02\x08\x81\x85\x02\x96\x02\x06"
  "\x81\x85\x02\x95\x02\x04\x84\x06\x23\x3b\x34\x18\x1a\x1a\x34\x04"
  "\x1b\x04\x30\x04\x2a\x04\x21\x04\x15\x04\x35\x04\x33\x04\x32\x04"
  "\x31\x04\x2f\x04\x2d\x04\x1f\x04\x25\x04\x23\x04\x1c\x04\x04\x19"
  "\x04\x17\x04\x13\x04\x10\x0e\x04\x04\x18\x26\x22\x29\x2e\x11\x2c"
  "\x24\x2b\x27\x28\x0b\x1d\x0d\x1e\x0c\x16\x12\x20\x0e\x14\x73\x75"
  "\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x6f\x72\x64\x65\x72\x69\x6e"
  "\x67\x18\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04"
  "\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
order_so_data_77abd8c13fd3afe3 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_order_so_data_77abd8c13fd3afe3 [0]))), (sizeof (prog_order_so_data_77abd8c13fd3afe3)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("order.so", order_so_data_77abd8c13fd3afe3)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("order.so", "46c7a745f25b059b")
