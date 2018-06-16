/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:16-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_8 7
#define LABEL_1_9 9
#define LABEL_1_13 11
#define LABEL_1_11 13
#define LABEL_1_14 15
#define LABEL_1_15 17
#define LABEL_1_12 19
#define ENVIRONMENT_LABEL_1_3 34
#define DEBUGGING_LABEL_1_2 33
#define OBJECT_1_5 32
#define OBJECT_1_4 31
#define OBJECT_1_3 30
#define OBJECT_1_2 29
#define OBJECT_1_1 28
#define OBJECT_1_0 27
#define EXECUTE_CACHE_1_10 21
#define EXECUTE_CACHE_1_7 23
#define FREE_REFERENCE_1_0 26
#define FREE_REFERENCES_LABEL_1_0 20
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subfre_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_1_4);
      goto compute_subproblem_free_variables_7;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_1_13);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto lambda_5;

    case 6:
      current_block = (Rpc - LABEL_1_14);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_1_15);
      goto label_11;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_subproblem_free_variables_13)
DEFLABEL (compute_subproblem_free_variables_7)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (lambda_15)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_1_9);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_19;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd15.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd13.pObj) [9]);

DEFLABEL (label_18)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (label_19)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_1_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_16)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_1_11);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_23;
  Wrd5 = Wrd9;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_21;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_21;
  (Wrd11.Obj) = ((Wrd17.pObj) [9]);

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (label_21)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_1_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd6.pObj));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_17)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_1_12);
  (Wrd5.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_1_3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_25;

DEFLABEL (label_24)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 3);

DEFLABEL (label_25)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_24;
  ((Wrd16.pObj) [6]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_1_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define ENVIRONMENT_LABEL_2_3 12
#define DEBUGGING_LABEL_2_2 11
#define EXECUTE_CACHE_2_8 7
#define EXECUTE_CACHE_2_7 9
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subfre_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto new_subproblem_compute_free_variablesB_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_subproblem_compute_free_variablesB_4)
DEFLABEL (new_subproblem_compute_free_variablesB_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_9 9
#define LABEL_3_12 11
#define LABEL_3_14 13
#define LABEL_3_15 15
#define LABEL_3_7 17
#define LABEL_3_17 19
#define LABEL_3_8 21
#define LABEL_3_18 23
#define LABEL_3_13 25
#define ENVIRONMENT_LABEL_3_3 48
#define DEBUGGING_LABEL_3_2 47
#define OBJECT_3_9 46
#define OBJECT_3_8 45
#define OBJECT_3_7 44
#define OBJECT_3_6 43
#define OBJECT_3_5 42
#define OBJECT_3_4 41
#define OBJECT_3_3 40
#define OBJECT_3_2 39
#define OBJECT_3_1 38
#define OBJECT_3_0 37
#define EXECUTE_CACHE_3_20 27
#define EXECUTE_CACHE_3_19 29
#define EXECUTE_CACHE_3_16 31
#define EXECUTE_CACHE_3_11 33
#define EXECUTE_CACHE_3_10 35
#define FREE_REFERENCES_LABEL_3_0 26
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subfre_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
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
      current_block = (Rpc - LABEL_3_4);
      goto walk_subproblem_17;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_3_14);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_3_15);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_3_18);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_subproblem_27)
DEFLABEL (walk_subproblem_17)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_45;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_45;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_44)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == (current_block [OBJECT_3_2]))
    goto label_29;
  if ((Wrd21.Obj) == (current_block [OBJECT_3_3]))
    goto label_28;
  Rvl = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd27.Obj) = (current_block [OBJECT_3_6]);
  (Rsp [0]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (label_29)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_43;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd58.Lng))))
    goto label_43;
  (Wrd52.Obj) = (current_block [OBJECT_3_3]);
  ((Wrd56.pObj) [6]) = (Wrd52.Obj);

DEFLABEL (label_42)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 62))
    goto label_41;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd42.Lng))))
    goto label_41;
  (Wrd36.Obj) = ((Wrd40.pObj) [4]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_39;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_39;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd27.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [5]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 62))
    goto label_33;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd39.Lng))))
    goto label_33;
  (Wrd31.Obj) = ((Wrd37.pObj) [2]);

DEFLABEL (label_32)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_31;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd53.Lng))))
    goto label_31;
  (Wrd48.Obj) = ((Wrd51.pObj) [2]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_20]));

DEFLABEL (label_31)
  (Wrd56.Obj) = (current_block [OBJECT_3_7]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_8]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd42.Obj) = (Rsp [5]);
  (Wrd43.Obj) = (current_block [OBJECT_3_7]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_24)
  (Wrd31.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_37)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_36;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_36;
  ((Wrd14.pObj) [6]) = (Wrd5.Obj);

DEFLABEL (label_35)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_3_0]);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 3);

DEFLABEL (label_22)
  goto label_35;

DEFLABEL (label_39)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_3_9]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd45.Obj) = (Rsp [3]);
  (Wrd46.Obj) = (current_block [OBJECT_3_5]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (current_block [OBJECT_3_0]);
  (Wrd63.Obj) = (current_block [OBJECT_3_3]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 3);

DEFLABEL (label_21)
  goto label_42;

DEFLABEL (label_45)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Wrd5.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define LABEL_4_8 7
#define LABEL_4_9 9
#define LABEL_4_10 11
#define LABEL_4_5 13
#define LABEL_4_14 15
#define LABEL_4_15 17
#define LABEL_4_16 19
#define LABEL_4_17 21
#define LABEL_4_11 23
#define LABEL_4_20 25
#define LABEL_4_21 27
#define LABEL_4_22 29
#define LABEL_4_23 31
#define LABEL_4_24 33
#define LABEL_4_25 35
#define ENVIRONMENT_LABEL_4_3 64
#define DEBUGGING_LABEL_4_2 63
#define OBJECT_4_11 62
#define OBJECT_4_10 61
#define OBJECT_4_9 60
#define OBJECT_4_8 59
#define OBJECT_4_7 58
#define OBJECT_4_6 57
#define OBJECT_4_5 56
#define OBJECT_4_4 55
#define OBJECT_4_3 54
#define OBJECT_4_2 53
#define OBJECT_4_1 52
#define OBJECT_4_0 51
#define EXECUTE_CACHE_4_26 37
#define EXECUTE_CACHE_4_19 39
#define EXECUTE_CACHE_4_18 41
#define EXECUTE_CACHE_4_13 43
#define EXECUTE_CACHE_4_12 45
#define EXECUTE_CACHE_4_6 47
#define FREE_REFERENCE_4_0 50
#define FREE_REFERENCES_LABEL_4_0 36
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subfre_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd75;
  machine_word Wrd83;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd68;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd58;
  machine_word Wrd66;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd59;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd32;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd15;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd47;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
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
      goto walk_procedure_20;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_8);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_4_14);
      goto default_13;

    case 7:
      current_block = (Rpc - LABEL_4_15);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_4_16);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_4_17);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_4_20);
      goto closure_19;

    case 12:
      current_block = (Rpc - LABEL_4_21);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_4_22);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_4_23);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_4_24);
      goto label_31;

    case 16:
      current_block = (Rpc - LABEL_4_25);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_procedure_33)
DEFLABEL (walk_procedure_20)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;

DEFLABEL (label_36)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd12.Obj);
  Rdl = (& (Rsp [2]));
  goto default_13;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_46;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd24.Lng))))
    goto label_46;
  (Wrd18.Obj) = ((Wrd22.pObj) [18]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_45)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_44;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_43)
  (Wrd41.Obj) = (Rsp [0]);
  if (! ((Wrd41.Obj) == (current_block [OBJECT_4_3])))
    goto label_39;

DEFLABEL (label_38)
  (Wrd72.pObj) = (& (Rsp [2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd72.pObj)));
  (Rsp [1]) = (Wrd74.Obj);
  Rdl = (& (Rsp [3]));
  Rsp = (& (Rsp [1]));
  goto closure_19;

DEFLABEL (label_39)
  if ((Wrd41.Obj) == (current_block [OBJECT_4_4]))
    goto label_38;
  if ((Wrd41.Obj) == (current_block [OBJECT_4_5]))
    goto label_40;
  (Wrd47.Obj) = (current_block [OBJECT_4_7]);
  (Rsp [1]) = (Wrd47.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (label_40)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_42;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd49.Obj);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.pObj) = (& (Rsp [3]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd61.pObj)));
  (* (--Rsp)) = (Wrd63.Obj);
  Rdl = (& (Rsp [1]));
  goto closure_19;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (label_42)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 1);

DEFLABEL (label_24)
  (Wrd49.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_4_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (default_34)
DEFLABEL (default_13)
  DLINK_INTERRUPT_CHECK (25, LABEL_4_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd13.Obj) = ((Wrd6.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_52;
  Wrd5 = Wrd13;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_50;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_50;
  (Wrd15.Obj) = ((Wrd25.pObj) [4]);

DEFLABEL (label_49)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_48;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd49.Lng))))
    goto label_48;
  (Wrd44.Obj) = ((Wrd47.pObj) [10]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_47)
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (label_48)
  (Wrd56.Obj) = (current_block [OBJECT_4_9]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_27)
  (Wrd51.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd51.Obj));
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);
  (Wrd39.Obj) = (current_block [OBJECT_4_8]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_26)
  (Wrd32.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd15.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_15])), (Wrd6.pObj));

DEFLABEL (label_25)
  (Wrd7.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_51;

DEFLABEL (closure_35)
DEFLABEL (closure_19)
  DLINK_INTERRUPT_CHECK (25, LABEL_4_20);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_60;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_60;
  (Wrd5.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_59)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_58;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd39.Lng))))
    goto label_58;
  (Wrd33.Obj) = ((Wrd37.pObj) [4]);

DEFLABEL (label_57)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_56;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd56.Lng))))
    goto label_56;
  (Wrd50.Obj) = ((Wrd54.pObj) [17]);

DEFLABEL (label_55)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd74.uLng) == 10))
    goto label_54;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd73.Lng))))
    goto label_54;
  (Wrd68.Obj) = ((Wrd71.pObj) [9]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_53)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [3]);
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd90.pObj)));
  (* (--Rsp)) = (Wrd92.Obj);
  Rdl = (& (Rsp [1]));
  goto default_13;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_25);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (label_54)
  (Wrd80.Obj) = (current_block [OBJECT_4_11]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_31)
  (Wrd75.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd75.Obj));
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd63.Obj) = (current_block [OBJECT_4_10]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_30)
  (Wrd58.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd50.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd46.Obj) = (current_block [OBJECT_4_8]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_29)
  (Wrd41.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd33.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);
  (Wrd29.Obj) = (current_block [OBJECT_4_8]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_28)
  (Wrd22.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_9 13
#define LABEL_5_11 15
#define LABEL_5_12 17
#define LABEL_5_13 19
#define LABEL_5_14 21
#define LABEL_5_16 23
#define LABEL_5_19 25
#define LABEL_5_18 27
#define LABEL_5_15 29
#define ENVIRONMENT_LABEL_5_3 56
#define DEBUGGING_LABEL_5_2 55
#define OBJECT_5_7 54
#define OBJECT_5_6 53
#define OBJECT_5_5 52
#define OBJECT_5_4 51
#define OBJECT_5_3 50
#define OBJECT_5_2 49
#define OBJECT_5_1 48
#define OBJECT_5_0 47
#define EXECUTE_CACHE_5_22 31
#define EXECUTE_CACHE_5_21 33
#define EXECUTE_CACHE_5_20 35
#define EXECUTE_CACHE_5_17 37
#define EXECUTE_CACHE_5_10 39
#define FREE_REFERENCE_5_4 42
#define FREE_REFERENCE_5_3 43
#define FREE_REFERENCE_5_2 44
#define FREE_REFERENCE_5_1 45
#define FREE_REFERENCE_5_0 46
#define FREE_REFERENCES_LABEL_5_0 30
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subfre_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd80;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd77;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd106;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd103;
  machine_word Wrd95;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd142;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd125;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd135;
  machine_word Wrd134;
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
      current_block = (Rpc - LABEL_5_4);
      goto walk_operator_13;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_5_12);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_5_13);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_5_14);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_5_16);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_5_19);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_5_18);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_operator_27)
DEFLABEL (walk_operator_13)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_52;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_52;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_51)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_50;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_50;
  (Wrd22.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_49)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_48;
  Wrd35 = Wrd39;

DEFLABEL (label_47)
  (Wrd41.Obj) = (Rsp [0]);
  if ((Wrd41.Obj) == (Wrd35.Obj))
    goto label_42;
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_41;
  Wrd43 = Wrd47;

DEFLABEL (label_40)
  (Wrd49.Obj) = (Rsp [0]);
  if ((Wrd49.Obj) == (Wrd43.Obj))
    goto label_28;
  Rvl = (current_block [OBJECT_5_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_3]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_39;
  Wrd52 = Wrd56;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 10))
    goto label_37;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd66.Lng))))
    goto label_37;
  (Wrd58.Obj) = ((Wrd64.pObj) [3]);

DEFLABEL (label_36)
  (Wrd74.Obj) = (* (Rsp++));
  if ((Wrd58.Obj) == (Wrd74.Obj))
    goto label_31;
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd87.Obj) = (Rsp [2]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 10))
    goto label_30;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd86.Lng))))
    goto label_30;
  (Wrd80.Obj) = ((Wrd84.pObj) [11]);
  (* (--Rsp)) = (Wrd80.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_18);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_5_6]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

DEFLABEL (label_30)
  (Wrd89.Obj) = (Rsp [2]);
  (Wrd90.Obj) = (current_block [OBJECT_5_7]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd96.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_4]));
  (Wrd99.Obj) = ((Wrd96.pObj) [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd100.uLng) == 50)
    goto label_35;
  Wrd95 = Wrd99;

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd95.Obj);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd113.Obj) = (Rsp [2]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 10))
    goto label_33;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd112.Lng))))
    goto label_33;
  (Wrd106.Obj) = ((Wrd110.pObj) [25]);
  (* (--Rsp)) = (Wrd106.Obj);

DEFLABEL (label_32)
  (Wrd123.Obj) = (Rsp [3]);
  (Wrd124.Obj) = (current_block [OBJECT_5_6]);
  (* (Rhp++)) = (Wrd123.Obj);
  (* (Rhp++)) = (Wrd124.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (* (--Rsp)) = (Wrd122.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_22]));

DEFLABEL (label_33)
  (Wrd115.Obj) = (Rsp [2]);
  (Wrd116.Obj) = (current_block [OBJECT_5_5]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_14])), (Wrd96.pObj));

DEFLABEL (label_22)
  (Wrd95.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd70.Obj) = (current_block [OBJECT_5_4]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_20)
  (Wrd58.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_12])), (Wrd53.pObj));

DEFLABEL (label_19)
  (Wrd52.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_11])), (Wrd44.pObj));

DEFLABEL (label_18)
  (Wrd43.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd134.Obj) = (Rsp [1]);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd135.uLng) == 10))
    goto label_46;
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd134.Obj));
  (Wrd132.Obj) = ((Wrd131.pObj) [0]);
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd133.Lng))))
    goto label_46;
  (Wrd125.Obj) = ((Wrd131.pObj) [4]);

DEFLABEL (label_45)
  (Rsp [0]) = (Wrd125.Obj);
  (Wrd143.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd146.Obj) = ((Wrd143.pObj) [0]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if ((Wrd147.uLng) == 50)
    goto label_44;
  Wrd142 = Wrd146;

DEFLABEL (label_43)
  (Rsp [1]) = (Wrd142.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_9])), (Wrd143.pObj));

DEFLABEL (label_25)
  (Wrd142.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd136.Obj) = (Rsp [1]);
  (Wrd137.Obj) = (current_block [OBJECT_5_2]);
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_24)
  (Wrd125.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_7])), (Wrd36.pObj));

DEFLABEL (label_17)
  (Wrd35.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd30.Obj) = (current_block [OBJECT_5_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_7 9
#define LABEL_6_8 11
#define LABEL_6_9 13
#define LABEL_6_11 15
#define LABEL_6_12 17
#define LABEL_6_13 19
#define LABEL_6_16 21
#define LABEL_6_15 23
#define ENVIRONMENT_LABEL_6_3 46
#define DEBUGGING_LABEL_6_2 45
#define OBJECT_6_6 44
#define OBJECT_6_5 43
#define OBJECT_6_4 42
#define OBJECT_6_3 41
#define OBJECT_6_2 40
#define OBJECT_6_1 39
#define OBJECT_6_0 38
#define EXECUTE_CACHE_6_18 25
#define EXECUTE_CACHE_6_17 27
#define EXECUTE_CACHE_6_14 29
#define EXECUTE_CACHE_6_10 31
#define FREE_REFERENCE_6_3 34
#define FREE_REFERENCE_6_2 35
#define FREE_REFERENCE_6_1 36
#define FREE_REFERENCE_6_0 37
#define FREE_REFERENCES_LABEL_6_0 24
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subfre_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd80;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd112;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd95;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd104;
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
      current_block = (Rpc - LABEL_6_4);
      goto walk_rvalue_10;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_6_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_6_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_6_12);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_6_13);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_6_16);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_rvalue_22)
DEFLABEL (walk_rvalue_10)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_43;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_43;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_42)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_41;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_41;
  (Wrd22.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_40)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_39;
  Wrd35 = Wrd39;

DEFLABEL (label_38)
  (Wrd41.Obj) = (Rsp [0]);
  if ((Wrd41.Obj) == (Wrd35.Obj))
    goto label_33;
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_2]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_32;
  Wrd43 = Wrd47;

DEFLABEL (label_31)
  (Wrd49.Obj) = (Rsp [0]);
  if ((Wrd49.Obj) == (Wrd43.Obj))
    goto label_23;
  Rvl = (current_block [OBJECT_6_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_3]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_30;
  Wrd52 = Wrd56;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 10))
    goto label_28;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd66.Lng))))
    goto label_28;
  (Wrd58.Obj) = ((Wrd64.pObj) [3]);

DEFLABEL (label_27)
  (Wrd74.Obj) = (* (Rsp++));
  if (! ((Wrd58.Obj) == (Wrd74.Obj)))
    goto label_24;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (label_24)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd87.Obj) = (Rsp [2]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 10))
    goto label_26;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd86.Lng))))
    goto label_26;
  (Wrd80.Obj) = ((Wrd84.pObj) [11]);
  (* (--Rsp)) = (Wrd80.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_15);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_6_6]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (label_26)
  (Wrd89.Obj) = (Rsp [2]);
  (Wrd90.Obj) = (current_block [OBJECT_6_5]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd70.Obj) = (current_block [OBJECT_6_4]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_17)
  (Wrd58.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_12])), (Wrd53.pObj));

DEFLABEL (label_16)
  (Wrd52.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_11])), (Wrd44.pObj));

DEFLABEL (label_15)
  (Wrd43.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd104.Obj) = (Rsp [1]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 10))
    goto label_37;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd103.Lng))))
    goto label_37;
  (Wrd95.Obj) = ((Wrd101.pObj) [4]);

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd95.Obj);
  (Wrd113.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd116.Obj) = ((Wrd113.pObj) [0]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if ((Wrd117.uLng) == 50)
    goto label_35;
  Wrd112 = Wrd116;

DEFLABEL (label_34)
  (Rsp [1]) = (Wrd112.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_9])), (Wrd113.pObj));

DEFLABEL (label_20)
  (Wrd112.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd106.Obj) = (Rsp [1]);
  (Wrd107.Obj) = (current_block [OBJECT_6_2]);
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_19)
  (Wrd95.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_7])), (Wrd36.pObj));

DEFLABEL (label_14)
  (Wrd35.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd30.Obj) = (current_block [OBJECT_6_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_8 7
#define LABEL_7_6 9
#define LABEL_7_11 11
#define LABEL_7_12 13
#define LABEL_7_13 15
#define LABEL_7_10 17
#define ENVIRONMENT_LABEL_7_3 33
#define DEBUGGING_LABEL_7_2 32
#define OBJECT_7_4 31
#define OBJECT_7_3 30
#define OBJECT_7_2 29
#define OBJECT_7_1 28
#define OBJECT_7_0 27
#define EXECUTE_CACHE_7_15 19
#define EXECUTE_CACHE_7_14 21
#define EXECUTE_CACHE_7_9 23
#define EXECUTE_CACHE_7_7 25
#define FREE_REFERENCES_LABEL_7_0 18
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subfre_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd9;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_7_4);
      goto walk_lvalue_8;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_7_12);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_lvalue_15)
DEFLABEL (walk_lvalue_8)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_27;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_26)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_16)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (label_17)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;

DEFLABEL (label_18)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (current_block [OBJECT_7_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_25;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd46.Lng))))
    goto label_25;
  (Wrd9.Obj) = ((Wrd44.pObj) [24]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_24)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_23;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd25.Lng))))
    goto label_23;
  (Wrd17.Obj) = ((Wrd23.pObj) [24]);

DEFLABEL (label_22)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_21;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd33.Obj) = ((Wrd34.pObj) [0]);

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (label_21)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 1);

DEFLABEL (label_12)
  (Wrd33.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (current_block [OBJECT_7_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_11)
  (Wrd17.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.Obj) = (current_block [OBJECT_7_2]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_24;

DEFLABEL (label_27)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_26;

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
#define LABEL_8_10 15
#define LABEL_8_16 17
#define LABEL_8_15 19
#define LABEL_8_17 21
#define LABEL_8_19 23
#define ENVIRONMENT_LABEL_8_3 41
#define DEBUGGING_LABEL_8_2 40
#define OBJECT_8_1 39
#define OBJECT_8_0 38
#define EXECUTE_CACHE_8_20 25
#define EXECUTE_CACHE_8_18 27
#define EXECUTE_CACHE_8_11 29
#define EXECUTE_CACHE_8_9 31
#define FREE_REFERENCE_8_1 34
#define FREE_REFERENCE_8_0 35
#define FREE_ASSIGNMENT_8_0 37
#define FREE_REFERENCES_LABEL_8_0 24
#define NUMBER_OF_LINKER_SECTIONS_8_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subfre_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_8_4);
      goto with_analysis_state_13;

    case 1:
      current_block = (Rpc - LABEL_8_7);
      goto lambda_23;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto swapB_22;

    case 3:
      current_block = (Rpc - LABEL_8_12);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_8_13);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_8_14);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_8_16);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_8_15);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_8_17);
      goto lambda_1;

    case 10:
      current_block = (Rpc - LABEL_8_19);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_analysis_state_21)
DEFLABEL (with_analysis_state_13)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_5])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_7])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_8_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_26;
  Wrd9 = Wrd13;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_16])), (Wrd10.pObj));

DEFLABEL (label_18)
  (Wrd9.Obj) = Rvl;
  goto label_25;

DEFLABEL (swapB_22)
  CLOSURE_HEADER (LABEL_8_5);

DEFLABEL (swapB_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  Wrd5 = Wrd9;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_30)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_8_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_17)
  goto label_27;

DEFLABEL (label_32)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_16)
  goto label_30;

DEFLABEL (label_35)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_8_12])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_24)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_8_17);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_37;
  Wrd7 = Wrd11;

DEFLABEL (label_36)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_19])), (Wrd8.pObj));

DEFLABEL (label_19)
  (Wrd7.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_10 7
#define LABEL_9_12 9
#define LABEL_9_9 11
#define LABEL_9_7 13
#define LABEL_9_14 15
#define LABEL_9_15 17
#define LABEL_9_17 19
#define LABEL_9_16 21
#define LABEL_9_19 23
#define LABEL_9_22 25
#define LABEL_9_21 27
#define ENVIRONMENT_LABEL_9_3 49
#define DEBUGGING_LABEL_9_2 48
#define OBJECT_9_1 47
#define OBJECT_9_0 46
#define EXECUTE_CACHE_9_20 29
#define EXECUTE_CACHE_9_18 31
#define EXECUTE_CACHE_9_13 33
#define EXECUTE_CACHE_9_11 35
#define EXECUTE_CACHE_9_8 37
#define EXECUTE_CACHE_9_6 39
#define FREE_REFERENCE_9_1 42
#define FREE_REFERENCE_9_0 43
#define FREE_ASSIGNMENT_9_0 45
#define FREE_REFERENCES_LABEL_9_0 28
#define NUMBER_OF_LINKER_SECTIONS_9_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subfre_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
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
      goto walk_node_11;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_10);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_9_14);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_9_15);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_9_17);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_9_19);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_9_22);
      goto label_17;

    case 12:
      current_block = (Rpc - LABEL_9_21);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_node_19)
DEFLABEL (walk_node_11)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_28;
  Wrd6 = Wrd10;

DEFLABEL (label_27)
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
  (Wrd24.Obj) = ((Wrd16.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd16.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_24)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_23;
  Wrd32 = Wrd36;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_21;
  Wrd9 = Wrd13;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_21);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_22])), (Wrd10.pObj));

DEFLABEL (label_17)
  (Wrd9.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_17])), (Wrd33.pObj));

DEFLABEL (label_16)
  (Wrd32.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_26)
  if ((Wrd24.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_15])), (Wrd16.pObj), (Wrd12.Obj));

DEFLABEL (label_15)
  goto label_24;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_14])), (Wrd7.pObj));

DEFLABEL (label_14)
  (Wrd6.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_33;
  Wrd10 = Wrd14;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_9_0]))
    goto label_31;

DEFLABEL (label_30)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_12);
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_10])), (Wrd11.pObj));

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_8 9
#define LABEL_10_9 11
#define LABEL_10_11 13
#define LABEL_10_12 15
#define LABEL_10_14 17
#define LABEL_10_15 19
#define LABEL_10_17 21
#define LABEL_10_18 23
#define LABEL_10_20 25
#define LABEL_10_21 27
#define LABEL_10_23 29
#define LABEL_10_24 31
#define LABEL_10_26 33
#define LABEL_10_25 35
#define LABEL_10_22 37
#define LABEL_10_32 39
#define LABEL_10_19 41
#define LABEL_10_36 43
#define LABEL_10_16 45
#define LABEL_10_39 47
#define LABEL_10_13 49
#define LABEL_10_42 51
#define LABEL_10_10 53
#define LABEL_10_45 55
#define LABEL_10_46 57
#define LABEL_10_7 59
#define LABEL_10_49 61
#define LABEL_10_50 63
#define LABEL_10_30 65
#define LABEL_10_31 67
#define LABEL_10_52 69
#define LABEL_10_34 71
#define LABEL_10_35 73
#define LABEL_10_54 75
#define LABEL_10_55 77
#define LABEL_10_37 79
#define LABEL_10_38 81
#define LABEL_10_58 83
#define LABEL_10_59 85
#define LABEL_10_60 87
#define LABEL_10_62 89
#define LABEL_10_64 91
#define LABEL_10_40 93
#define LABEL_10_41 95
#define LABEL_10_65 97
#define LABEL_10_43 99
#define LABEL_10_44 101
#define LABEL_10_68 103
#define LABEL_10_48 105
#define LABEL_10_51 107
#define LABEL_10_53 109
#define LABEL_10_57 111
#define LABEL_10_67 113
#define LABEL_10_63 115
#define LABEL_10_61 117
#define ENVIRONMENT_LABEL_10_3 160
#define DEBUGGING_LABEL_10_2 159
#define OBJECT_10_11 158
#define OBJECT_10_10 157
#define OBJECT_10_9 156
#define OBJECT_10_8 155
#define OBJECT_10_7 154
#define OBJECT_10_6 153
#define OBJECT_10_5 152
#define OBJECT_10_4 151
#define OBJECT_10_3 150
#define OBJECT_10_2 149
#define OBJECT_10_1 148
#define OBJECT_10_0 147
#define EXECUTE_CACHE_10_70 119
#define EXECUTE_CACHE_10_69 121
#define EXECUTE_CACHE_10_66 123
#define EXECUTE_CACHE_10_56 125
#define EXECUTE_CACHE_10_47 127
#define EXECUTE_CACHE_10_33 129
#define EXECUTE_CACHE_10_29 131
#define EXECUTE_CACHE_10_28 133
#define EXECUTE_CACHE_10_27 135
#define FREE_REFERENCE_10_8 138
#define FREE_REFERENCE_10_7 139
#define FREE_REFERENCE_10_6 140
#define FREE_REFERENCE_10_5 141
#define FREE_REFERENCE_10_4 142
#define FREE_REFERENCE_10_3 143
#define FREE_REFERENCE_10_2 144
#define FREE_REFERENCE_10_1 145
#define FREE_REFERENCE_10_0 146
#define FREE_REFERENCES_LABEL_10_0 118
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subfre_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd78;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd84;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd103;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd100;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd119;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd154;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd141;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd138;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd160;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd157;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd192;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd179;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd176;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd211;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd198;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd195;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_10_4);
      goto walk_node_no_memoize_55;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_57;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_58;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto label_71;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto label_59;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto label_70;

    case 6:
      current_block = (Rpc - LABEL_10_12);
      goto label_60;

    case 7:
      current_block = (Rpc - LABEL_10_14);
      goto label_69;

    case 8:
      current_block = (Rpc - LABEL_10_15);
      goto label_61;

    case 9:
      current_block = (Rpc - LABEL_10_17);
      goto label_68;

    case 10:
      current_block = (Rpc - LABEL_10_18);
      goto label_62;

    case 11:
      current_block = (Rpc - LABEL_10_20);
      goto label_67;

    case 12:
      current_block = (Rpc - LABEL_10_21);
      goto label_63;

    case 13:
      current_block = (Rpc - LABEL_10_23);
      goto label_66;

    case 14:
      current_block = (Rpc - LABEL_10_24);
      goto label_64;

    case 15:
      current_block = (Rpc - LABEL_10_26);
      goto label_65;

    case 16:
      current_block = (Rpc - LABEL_10_25);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_10_22);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_10_32);
      goto label_72;

    case 19:
      current_block = (Rpc - LABEL_10_19);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_10_36);
      goto label_73;

    case 21:
      current_block = (Rpc - LABEL_10_16);
      goto continuation_25;

    case 22:
      current_block = (Rpc - LABEL_10_39);
      goto label_74;

    case 23:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_32;

    case 24:
      current_block = (Rpc - LABEL_10_42);
      goto label_75;

    case 25:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_44;

    case 26:
      current_block = (Rpc - LABEL_10_45);
      goto label_76;

    case 27:
      current_block = (Rpc - LABEL_10_46);
      goto label_77;

    case 28:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_51;

    case 29:
      current_block = (Rpc - LABEL_10_49);
      goto label_78;

    case 30:
      current_block = (Rpc - LABEL_10_50);
      goto label_79;

    case 31:
      current_block = (Rpc - LABEL_10_30);
      goto continuation_16;

    case 32:
      current_block = (Rpc - LABEL_10_31);
      goto continuation_15;

    case 33:
      current_block = (Rpc - LABEL_10_52);
      goto label_80;

    case 34:
      current_block = (Rpc - LABEL_10_34);
      goto continuation_23;

    case 35:
      current_block = (Rpc - LABEL_10_35);
      goto continuation_22;

    case 36:
      current_block = (Rpc - LABEL_10_54);
      goto label_81;

    case 37:
      current_block = (Rpc - LABEL_10_55);
      goto label_82;

    case 38:
      current_block = (Rpc - LABEL_10_37);
      goto continuation_30;

    case 39:
      current_block = (Rpc - LABEL_10_38);
      goto continuation_29;

    case 40:
      current_block = (Rpc - LABEL_10_58);
      goto label_83;

    case 41:
      current_block = (Rpc - LABEL_10_59);
      goto label_84;

    case 42:
      current_block = (Rpc - LABEL_10_60);
      goto continuation_37;

    case 43:
      current_block = (Rpc - LABEL_10_62);
      goto label_88;

    case 44:
      current_block = (Rpc - LABEL_10_64);
      goto label_87;

    case 45:
      current_block = (Rpc - LABEL_10_40);
      goto continuation_36;

    case 46:
      current_block = (Rpc - LABEL_10_41);
      goto continuation_35;

    case 47:
      current_block = (Rpc - LABEL_10_65);
      goto label_85;

    case 48:
      current_block = (Rpc - LABEL_10_43);
      goto continuation_49;

    case 49:
      current_block = (Rpc - LABEL_10_44);
      goto continuation_48;

    case 50:
      current_block = (Rpc - LABEL_10_68);
      goto label_86;

    case 51:
      current_block = (Rpc - LABEL_10_48);
      goto continuation_53;

    case 52:
      current_block = (Rpc - LABEL_10_51);
      goto continuation_13;

    case 53:
      current_block = (Rpc - LABEL_10_53);
      goto continuation_20;

    case 54:
      current_block = (Rpc - LABEL_10_57);
      goto continuation_27;

    case 55:
      current_block = (Rpc - LABEL_10_67);
      goto continuation_46;

    case 56:
      current_block = (Rpc - LABEL_10_63);
      goto continuation_40;

    case 57:
      current_block = (Rpc - LABEL_10_61);
      goto continuation_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_node_no_memoize_90)
DEFLABEL (walk_node_no_memoize_55)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_122;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_122;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_121)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_120;
  Wrd22 = Wrd26;

DEFLABEL (label_119)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_117;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_116;
  Wrd30 = Wrd34;

DEFLABEL (label_115)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_113;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_2]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_112;
  Wrd38 = Wrd42;

DEFLABEL (label_111)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_109;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_3]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_108;
  Wrd46 = Wrd50;

DEFLABEL (label_107)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == (Wrd46.Obj))
    goto label_105;
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_4]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_104;
  Wrd54 = Wrd58;

DEFLABEL (label_103)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == (Wrd54.Obj))
    goto label_101;
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_5]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_100;
  Wrd62 = Wrd66;

DEFLABEL (label_99)
  (Wrd68.Obj) = (Rsp [0]);
  if ((Wrd68.Obj) == (Wrd62.Obj))
    goto label_97;
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_6]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_96;
  Wrd70 = Wrd74;

DEFLABEL (label_95)
  (Wrd76.Obj) = (Rsp [0]);
  if ((Wrd76.Obj) == (Wrd70.Obj))
    goto label_91;
  (Rsp [1]) = (Wrd76.Obj);
  (Wrd78.Obj) = (current_block [OBJECT_10_3]);
  (Rsp [0]) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_28]));

DEFLABEL (label_91)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_25]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd91.Obj) = (Rsp [2]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 10))
    goto label_93;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd90.Lng))))
    goto label_93;
  (Wrd84.Obj) = ((Wrd88.pObj) [7]);
  (* (--Rsp)) = (Wrd84.Obj);

DEFLABEL (label_92)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_27]));

DEFLABEL (label_93)
  (Wrd93.Obj) = (Rsp [2]);
  (Wrd94.Obj) = (current_block [OBJECT_10_2]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_26]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_65)
DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_24])), (Wrd71.pObj));

DEFLABEL (label_64)
  (Wrd70.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_97)
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_22]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd110.Obj) = (Rsp [2]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 10))
    goto label_98;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd109.Lng))))
    goto label_98;
  (Wrd103.Obj) = ((Wrd107.pObj) [7]);
  (* (--Rsp)) = (Wrd103.Obj);
  goto label_92;

DEFLABEL (label_98)
  (Wrd112.Obj) = (Rsp [2]);
  (Wrd113.Obj) = (current_block [OBJECT_10_2]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_23]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_66)
  goto label_94;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_21])), (Wrd63.pObj));

DEFLABEL (label_63)
  (Wrd62.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_101)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd129.Obj) = (Rsp [2]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd130.uLng) == 10))
    goto label_102;
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd127.Obj) = ((Wrd126.pObj) [0]);
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd127.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd128.Lng))))
    goto label_102;
  (Wrd122.Obj) = ((Wrd126.pObj) [7]);
  (* (--Rsp)) = (Wrd122.Obj);
  goto label_92;

DEFLABEL (label_102)
  (Wrd131.Obj) = (Rsp [2]);
  (Wrd132.Obj) = (current_block [OBJECT_10_2]);
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_67)
  goto label_94;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_18])), (Wrd55.pObj));

DEFLABEL (label_62)
  (Wrd54.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_105)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (Wrd148.Obj) = (Rsp [2]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd149.uLng) == 10))
    goto label_106;
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd146.Obj) = ((Wrd145.pObj) [0]);
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Wrd146.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd147.Lng))))
    goto label_106;
  (Wrd141.Obj) = ((Wrd145.pObj) [7]);
  (* (--Rsp)) = (Wrd141.Obj);
  goto label_92;

DEFLABEL (label_106)
  (Wrd150.Obj) = (Rsp [2]);
  (Wrd151.Obj) = (current_block [OBJECT_10_2]);
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_68)
  goto label_94;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_15])), (Wrd47.pObj));

DEFLABEL (label_61)
  (Wrd46.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_109)
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (Wrd167.Obj) = (Rsp [2]);
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if (! ((Wrd168.uLng) == 10))
    goto label_110;
  (Wrd164.pObj) = (OBJECT_ADDRESS (Wrd167.Obj));
  (Wrd165.Obj) = ((Wrd164.pObj) [0]);
  (Wrd166.Lng) = (FIXNUM_TO_LONG (Wrd165.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd166.Lng))))
    goto label_110;
  (Wrd160.Obj) = ((Wrd164.pObj) [7]);
  (* (--Rsp)) = (Wrd160.Obj);
  goto label_92;

DEFLABEL (label_110)
  (Wrd169.Obj) = (Rsp [2]);
  (Wrd170.Obj) = (current_block [OBJECT_10_2]);
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_69)
  goto label_94;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_12])), (Wrd39.pObj));

DEFLABEL (label_60)
  (Wrd38.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_113)
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (Wrd186.Obj) = (Rsp [2]);
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd186.Obj));
  if (! ((Wrd187.uLng) == 10))
    goto label_114;
  (Wrd183.pObj) = (OBJECT_ADDRESS (Wrd186.Obj));
  (Wrd184.Obj) = ((Wrd183.pObj) [0]);
  (Wrd185.Lng) = (FIXNUM_TO_LONG (Wrd184.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd185.Lng))))
    goto label_114;
  (Wrd179.Obj) = ((Wrd183.pObj) [7]);
  (* (--Rsp)) = (Wrd179.Obj);
  goto label_92;

DEFLABEL (label_114)
  (Wrd188.Obj) = (Rsp [2]);
  (Wrd189.Obj) = (current_block [OBJECT_10_2]);
  (Wrd192.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd192.Obj);
  (* (--Rsp)) = (Wrd189.Obj);
  (* (--Rsp)) = (Wrd188.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_70)
  goto label_94;

DEFLABEL (label_116)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_9])), (Wrd31.pObj));

DEFLABEL (label_59)
  (Wrd30.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_117)
  (Wrd195.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd195.Obj);
  (Wrd205.Obj) = (Rsp [2]);
  (Wrd206.uLng) = (OBJECT_TYPE (Wrd205.Obj));
  if (! ((Wrd206.uLng) == 10))
    goto label_118;
  (Wrd202.pObj) = (OBJECT_ADDRESS (Wrd205.Obj));
  (Wrd203.Obj) = ((Wrd202.pObj) [0]);
  (Wrd204.Lng) = (FIXNUM_TO_LONG (Wrd203.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd204.Lng))))
    goto label_118;
  (Wrd198.Obj) = ((Wrd202.pObj) [7]);
  (* (--Rsp)) = (Wrd198.Obj);
  goto label_92;

DEFLABEL (label_118)
  (Wrd207.Obj) = (Rsp [2]);
  (Wrd208.Obj) = (current_block [OBJECT_10_2]);
  (Wrd211.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd211.Obj);
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd207.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_71)
  goto label_94;

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_6])), (Wrd23.pObj));

DEFLABEL (label_58)
  (Wrd22.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_10_25);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_10_4]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_29]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_10_22);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_126;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd20.Lng))))
    goto label_126;
  (Wrd14.Obj) = ((Wrd18.pObj) [10]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_125)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_33]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_10_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_124;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_124;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_123)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_10_51);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_29]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_10_30);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_29]));

DEFLABEL (label_124)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_10_8]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_52]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_80)
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_10_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_32]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_10_19);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_34]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_35]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_132;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd20.Lng))))
    goto label_132;
  (Wrd14.Obj) = ((Wrd18.pObj) [10]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_131)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_33]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_10_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_130;
  Wrd8 = Wrd12;

DEFLABEL (label_129)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_128;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd22.Lng))))
    goto label_128;
  (Wrd16.Obj) = ((Wrd20.pObj) [9]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_127)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_56]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_10_53);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_70]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_10_34);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_29]));

DEFLABEL (label_128)
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.Obj) = (current_block [OBJECT_10_7]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_55]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_54])), (Wrd9.pObj));

DEFLABEL (label_81)
  (Wrd8.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_10_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_36]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_131;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_10_16);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_37]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_38]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_138;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd20.Lng))))
    goto label_138;
  (Wrd14.Obj) = ((Wrd18.pObj) [10]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_137)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_33]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_10_38);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_136;
  Wrd8 = Wrd12;

DEFLABEL (label_135)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_134;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd22.Lng))))
    goto label_134;
  (Wrd16.Obj) = ((Wrd20.pObj) [9]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_133)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_56]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_10_57);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_70]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_10_37);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_29]));

DEFLABEL (label_134)
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.Obj) = (current_block [OBJECT_10_7]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_59]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_58])), (Wrd9.pObj));

DEFLABEL (label_83)
  (Wrd8.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_10_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_39]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_74)
  (* (--Rsp)) = Rvl;
  goto label_137;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_40]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_41]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_149;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd20.Lng))))
    goto label_149;
  (Wrd14.Obj) = ((Wrd18.pObj) [10]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_148)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_33]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_10_41);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_147;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_147;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_146)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_60]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_66]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_10_60);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_145;
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_144;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd37.Lng))))
    goto label_144;
  (Wrd10.Obj) = ((Wrd35.pObj) [4]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_141;

DEFLABEL (label_140)
  (Wrd5.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_139)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_29]));

DEFLABEL (label_141)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_63]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_143;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd23.Lng))))
    goto label_143;
  (Wrd17.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_142)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_33]));

DEFLABEL (label_143)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (current_block [OBJECT_10_11]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_64]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_10]), 2);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_142;

DEFLABEL (label_144)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (current_block [OBJECT_10_9]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_62]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_10]), 2);

DEFLABEL (label_88)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_141;
  goto label_140;

DEFLABEL (label_145)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_61]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd49.Obj);
  goto label_142;

DEFLABEL (label_147)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_10_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_65]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_10_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_42]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_148;

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_43]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_44]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_155;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd20.Lng))))
    goto label_155;
  (Wrd14.Obj) = ((Wrd18.pObj) [11]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_154)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_7]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_153;
  Wrd28 = Wrd32;

DEFLABEL (label_152)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_47]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_10_44);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_151;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_151;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_150)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_69]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_10_67);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_70]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_10_43);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_29]));

DEFLABEL (label_151)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_10_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_68]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_46])), (Wrd29.pObj));

DEFLABEL (label_77)
  (Wrd28.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_10_6]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_45]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_76)
  (* (--Rsp)) = Rvl;
  goto label_154;

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_48]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_159;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_159;
  (Wrd11.Obj) = ((Wrd15.pObj) [9]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_158)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_8]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_157;
  Wrd25 = Wrd29;

DEFLABEL (label_156)
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_47]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_10_48);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_29]));

DEFLABEL (label_157)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_50])), (Wrd26.pObj));

DEFLABEL (label_79)
  (Wrd25.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_10_7]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_49]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_158;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_10_63);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_70]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_10_61);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_70]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_10_40);
  (Wrd5.Obj) = Rvl;
  goto label_139;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 12
#define DEBUGGING_LABEL_11_2 11
#define EXECUTE_CACHE_11_7 7
#define EXECUTE_CACHE_11_6 9
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subfre_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_11_4);
      goto walk_next_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_next_4)
DEFLABEL (walk_next_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_5;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_5 7
#define LABEL_12_7 9
#define LABEL_12_8 11
#define LABEL_12_11 13
#define LABEL_12_9 15
#define LABEL_12_12 17
#define LABEL_12_10 19
#define ENVIRONMENT_LABEL_12_3 27
#define DEBUGGING_LABEL_12_2 26
#define OBJECT_12_2 25
#define OBJECT_12_1 24
#define OBJECT_12_0 23
#define EXECUTE_CACHE_12_13 21
#define FREE_REFERENCES_LABEL_12_0 20
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subfre_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_12_4);
      goto map_union_12;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto loop_10;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_12_12);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_union_19)
DEFLABEL (map_union_12)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_21;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_24)
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_23;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  goto loop_10;

DEFLABEL (label_23)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (loop_20)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_12_8);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_12_0])))
    goto label_26;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_30;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_29)
  (Wrd23.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd23.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_28;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_10;

DEFLABEL (label_28)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_17)
  (Wrd6.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_29;

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
subfre_so_fe6ccdf53827011b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	3,
	3,
	1,
	2,
	2,
	2,
	1,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 12)
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

static const struct liarc_code_S arr_decl_subfre_so_fe6ccdf53827011b [12] =
  {
    { "subfre_so_code_1", 9, subfre_so_code_1 },
    { "subfre_so_code_2", 2, subfre_so_code_2 },
    { "subfre_so_code_3", 12, subfre_so_code_3 },
    { "subfre_so_code_4", 17, subfre_so_code_4 },
    { "subfre_so_code_5", 14, subfre_so_code_5 },
    { "subfre_so_code_6", 11, subfre_so_code_6 },
    { "subfre_so_code_7", 8, subfre_so_code_7 },
    { "subfre_so_code_8", 11, subfre_so_code_8 },
    { "subfre_so_code_9", 13, subfre_so_code_9 },
    { "subfre_so_code_10", 58, subfre_so_code_10 },
    { "subfre_so_code_11", 2, subfre_so_code_11 },
    { "subfre_so_code_12", 9, subfre_so_code_12 }
  };

int
decl_subfre_so_fe6ccdf53827011b (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_subfre_so_fe6ccdf53827011b);
  return (0);
}

DECLARE_COMPILED_CODE ("subfre.so", 3, decl_subfre_so_fe6ccdf53827011b, subfre_so_fe6ccdf53827011b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_subfre_so_data_fe6ccdf53827011b [2931] =
  "\xad\x01\x1e\xdc\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\xb9\x1d"
  "\x0d\xba\x85\xc2\xbb\x02\x0d\xbc\x24\x28\x0d\xbd\x28\x0d\xbe\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x82\x88\x28\xb5\x28\xb4\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x82\xb3\x81\x0c\x83"
  "\xb1\x0d\xb9\xb2\xc2\xba\x85\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x84\x88\x02\x02\x02\x83\x0c\xc1\x1c\x0d\x0d\x0d"
  "\xc1\x1c\xb3\x02\x0d\x1c\x24\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x02"
  "\x08\x02\x82\xb2\x83\xb3\x80\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x86\x88\x08\x02\x82\xb2\x83\xb3\x80\x1b\x1b\x1b\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x02\xb3\x02\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08"
  "\x0d\x1c\x25\x1b\x0d\x1c\x24\x28\x0d\x28\x0d\x28\xb6\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xb1"
  "\x1b\x25\x1b\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x0d\xbe\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xb9\x1d\xb0\x02\x88\x81\xb2\x83\x02\x02\x02\x02\x08\x0c\x86\xb3"
  "\x80\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\xb4\x24\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b"
  "\x2a\xb1\x2a\x1b\x2a\x0c\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\xb7\x2a\x17\x1b\x1b\xb6\x1b\xb5\x1b\x1b\x1b\x1b\x1b"
  "\x1b\xb4\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x5a\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66\x67\x6f\x70\x74"
  "\x2f\x73\x75\x62\x66\x72\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x02\x08"
  "\x75\x6e\x6b\x6e\x6f\x77\x6e\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72"
  "\x65\x66\x09\x10\x77\x61\x6c\x6b\x2d\x73\x75\x62\x70\x72\x6f\x62"
  "\x6c\x65\x6d\x02\x03\x14\x77\x69\x74\x68\x2d\x61\x6e\x61\x6c\x79"
  "\x73\x69\x73\x2d\x73\x74\x61\x74\x65\x04\x09\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x03\x0c\x14\x83\x04\x0b\x12\x81\x85\x02\x0a\x10\x81"
  "\x83\x02\x09\x0e\x83\x04\x08\x0c\x81\x85\x02\x07\x0a\x83\x04\x06"
  "\x08\x81\x83\x02\x05\x06\x81\x83\x02\x04\x04\x83\x04\x13\x23\x02"
  "\x03\x03\x03\x0e\x06\x81\x83\x02\x0d\x04\x83\x04\x05\x0d\x09\x02"
  "\x2a\x6c\x6f\x6f\x70\x20\x69\x6e\x20\x73\x75\x62\x70\x72\x6f\x62"
  "\x6c\x65\x6d\x20\x66\x72\x65\x65\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x20\x61\x6e\x61\x6c\x79\x73\x69\x73\x0f\x62\x65\x69\x6e\x67"
  "\x2d\x63\x6f\x6d\x70\x75\x74\x65\x64\x0c\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x72\x65\x66\x03\x0c\x77\x61\x6c\x6b\x2d\x72\x76\x61\x6c"
  "\x75\x65\x0a\x04\x06\x65\x72\x72\x6f\x72\x0b\x03\x0a\x77\x61\x6c"
  "\x6b\x2d\x6e\x6f\x64\x65\x0c\x03\x0b\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x3f\x04\x0d\x65\x71\x2d\x73\x65\x74\x2d\x75\x6e\x69\x6f"
  "\x6e\x0d\x06\x1a\x1a\x81\x85\x02\x19\x18\x81\x85\x02\x18\x16\x81"
  "\x87\x02\x17\x14\x81\x85\x02\x16\x12\x81\x85\x02\x15\x10\x81\x87"
  "\x02\x14\x0e\x81\x87\x02\x13\x0c\x81\x83\x02\x12\x0a\x81\x89\x02"
  "\x11\x08\x81\x85\x02\x10\x06\x81\x83\x02\x0f\x04\x83\x04\x19\x31"
  "\x0e\x02\x09\x11\x0a\x27\x77\x61\x6c\x6b\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x3a\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x63\x6c"
  "\x6f\x73\x75\x72\x65\x20\x6d\x65\x74\x68\x6f\x64\x04\x63\x64\x72"
  "\x0f\x0b\x69\x6e\x64\x69\x72\x65\x63\x74\x65\x64\x0b\x64\x65\x73"
  "\x63\x65\x6e\x64\x61\x6e\x74\x07\x6e\x6f\x72\x6d\x61\x6c\x04\x63"
  "\x61\x72\x10\x12\x13\x6c\x76\x61\x6c\x75\x65\x2d\x69\x6e\x74\x65"
  "\x67\x72\x61\x74\x65\x64\x3f\x11\x02\x03\x13\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2f\x63\x6c\x6f\x73\x75\x72\x65\x3f\x04\x0b\x03"
  "\x1b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x72\x69\x76\x69"
  "\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f\x04\x18\x6c\x69\x73"
  "\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x6e\x65\x67\x61"
  "\x74\x69\x76\x65\x04\x0e\x65\x71\x2d\x73\x65\x74\x2d\x61\x64\x6a"
  "\x6f\x69\x6e\x12\x04\x0d\x07\x2b\x24\xfd\xff\x03\x2a\x22\xfd\xff"
  "\x03\x29\x20\xfd\xff\x03\x28\x1e\xfd\xff\x03\x27\x1c\xfd\xff\x03"
  "\x26\x1a\xff\xff\x03\x25\x18\x81\x87\x02\x24\x16\xfd\xff\x03\x23"
  "\x14\xfd\xff\x03\x22\x12\xfd\xff\x03\x21\x10\xff\xff\x03\x20\x0e"
  "\x81\x83\x02\x1f\x0c\x81\x87\x02\x1e\x0a\x81\x85\x02\x1d\x08\x81"
  "\x83\x02\x1c\x06\x81\x83\x02\x1b\x04\x83\x04\x23\x41\x13\x02\x0b"
  "\x19\x16\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70\x65\x2f\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x14\x0e\x77\x61\x6c\x6b\x2d\x6f\x70"
  "\x65\x72\x61\x74\x6f\x72\x15\x16\x72\x76\x61\x6c\x75\x65\x2d\x74"
  "\x79\x70\x65\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x16\x1c\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x17\x0f\x77\x61\x6c\x6b"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x18\x06\x04\x0c\x77\x61"
  "\x6c\x6b\x2d\x6c\x76\x61\x6c\x75\x65\x19\x04\x0d\x03\x0f\x65\x64"
  "\x67\x65\x2d\x6e\x65\x78\x74\x2d\x6e\x6f\x64\x65\x1a\x04\x0a\x77"
  "\x61\x6c\x6b\x2d\x6e\x65\x78\x74\x1b\x04\x0a\x6d\x61\x70\x2d\x75"
  "\x6e\x69\x6f\x6e\x1c\x06\x39\x1e\x81\x85\x02\x38\x1c\x81\x85\x02"
  "\x37\x1a\x81\x87\x02\x36\x18\x81\x87\x02\x35\x16\x81\x85\x02\x34"
  "\x14\x81\x87\x02\x33\x12\x81\x85\x02\x32\x10\x81\x85\x02\x31\x0e"
  "\x81\x85\x02\x30\x0c\x81\x85\x02\x2f\x0a\x81\x85\x02\x2e\x08\x81"
  "\x83\x02\x2d\x06\x81\x83\x02\x2c\x04\x83\x04\x1d\x39\x1d\x02\x0b"
  "\x14\x0a\x16\x17\x05\x04\x19\x03\x18\x03\x1a\x04\x1b\x05\x44\x18"
  "\x81\x85\x02\x43\x16\x81\x87\x02\x42\x14\x81\x87\x02\x41\x12\x81"
  "\x85\x02\x40\x10\x81\x85\x02\x3f\x0e\x81\x85\x02\x3e\x0c\x81\x85"
  "\x02\x3d\x0a\x81\x85\x02\x3c\x08\x81\x83\x02\x3b\x06\x81\x83\x02"
  "\x3a\x04\x83\x04\x17\x2f\x17\x02\x08\x10\x18\x0a\x03\x0a\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x3f\x03\x11\x04\x19\x04\x12\x05\x4c\x12"
  "\x81\x87\x02\x4b\x10\x81\x87\x02\x4a\x0e\x81\x87\x02\x49\x0c\x81"
  "\x87\x02\x48\x0a\x81\x87\x02\x47\x08\x81\x87\x02\x46\x06\x81\x85"
  "\x02\x45\x04\x84\x06\x11\x22\x16\x02\x09\x02\x08\x2a\x6e\x6f\x64"
  "\x65\x73\x2a\x14\x02\x14\x13\x66\x72\x65\x65\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x73\x2d\x74\x61\x67\x12\x03\x05\x13\x73\x68\x61"
  "\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x03"
  "\x14\x77\x69\x74\x68\x2d\x6e\x65\x77\x2d\x6e\x6f\x64\x65\x2d\x6d"
  "\x61\x72\x6b\x73\x04\x04\x11\x63\x66\x67\x2d\x6e\x6f\x64\x65\x2d"
  "\x72\x65\x6d\x6f\x76\x65\x21\x05\x57\x18\x81\x85\x02\x56\x16\x83"
  "\x04\x55\x14\x81\x83\x02\x54\x12\x81\x85\x02\x53\x10\x81\x83\x02"
  "\x52\x0e\x81\x83\x02\x51\x0c\x81\x85\x02\x50\x0a\x81\x83\x02\x4f"
  "\x08\x81\x83\x02\x4e\x06\x81\x83\x02\x4d\x04\x83\x04\x17\x2a\x11"
  "\x02\x0a\x24\x6c\x6f\x6f\x70\x20\x69\x6e\x20\x6e\x6f\x64\x65\x20"
  "\x66\x72\x65\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x61\x6e"
  "\x61\x6c\x79\x73\x69\x73\x14\x02\x12\x14\x03\x03\x0d\x6e\x6f\x64"
  "\x65\x2d\x6d\x61\x72\x6b\x65\x64\x3f\x03\x0b\x6e\x6f\x64\x65\x2d"
  "\x6d\x61\x72\x6b\x21\x04\x0d\x63\x66\x67\x2d\x6e\x6f\x64\x65\x2d"
  "\x67\x65\x74\x04\x0b\x05\x0e\x63\x66\x67\x2d\x6e\x6f\x64\x65\x2d"
  "\x70\x75\x74\x21\x03\x15\x77\x61\x6c\x6b\x2d\x6e\x6f\x64\x65\x2d"
  "\x6e\x6f\x2d\x6d\x65\x6d\x6f\x69\x7a\x65\x07\x64\x1c\x81\x85\x02"
  "\x63\x1a\x81\x89\x02\x62\x18\x81\x83\x02\x61\x16\x81\x83\x02\x60"
  "\x14\x81\x87\x02\x5f\x12\x81\x83\x02\x5e\x10\x81\x83\x02\x5d\x0e"
  "\x81\x83\x02\x5c\x0c\x81\x83\x02\x5b\x0a\x81\x85\x02\x5a\x08\x81"
  "\x85\x02\x59\x06\x81\x83\x02\x58\x04\x83\x04\x1b\x32\x02\x0b\x08"
  "\x09\x0b\x0a\x13\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6e\x6f\x64\x65"
  "\x20\x74\x79\x70\x65\x3a\x0d\x70\x61\x72\x61\x6c\x6c\x65\x6c\x2d"
  "\x74\x61\x67\x10\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x74\x61\x67\x13\x76\x69\x72\x74\x75\x61\x6c\x2d\x72\x65\x74\x75"
  "\x72\x6e\x2d\x74\x61\x67\x0f\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x2d\x74\x61\x67\x0f\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x2d\x74\x61\x67\x0e\x74\x72\x75\x65\x2d\x74\x65\x73\x74\x2d\x74"
  "\x61\x67\x0c\x66\x67\x2d\x6e\x6f\x6f\x70\x2d\x74\x61\x67\x0a\x0a"
  "\x03\x1a\x04\x0b\x04\x1b\x03\x0a\x04\x1c\x04\x19\x03\x16\x76\x69"
  "\x72\x74\x75\x61\x6c\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x3f\x03\x15\x04\x0d\x0a\x9e\x01\x76\x81\x85\x02\x9d\x01"
  "\x74\x81\x85\x02\x9c\x01\x72\x81\x89\x02\x9b\x01\x70\x81\x89\x02"
  "\x9a\x01\x6e\x81\x89\x02\x99\x01\x6c\x81\x89\x02\x98\x01\x6a\x81"
  "\x85\x02\x97\x01\x68\x81\x8b\x02\x96\x01\x66\x81\x87\x02\x95\x01"
  "\x64\x81\x85\x02\x94\x01\x62\x81\x89\x02\x93\x01\x60\x81\x87\x02"
  "\x92\x01\x5e\x81\x85\x02\x91\x01\x5c\x81\x87\x02\x90\x01\x5a\x81"
  "\x85\x02\x8f\x01\x58\x81\x85\x02\x8e\x01\x56\x81\x8d\x02\x8d\x01"
  "\x54\x81\x8b\x02\x8c\x01\x52\x81\x87\x02\x8b\x01\x50\x81\x85\x02"
  "\x8a\x01\x4e\x81\x8d\x02\x89\x01\x4c\x81\x8b\x02\x88\x01\x4a\x81"
  "\x87\x02\x87\x01\x48\x81\x85\x02\x86\x01\x46\x81\x8b\x02\x85\x01"
  "\x44\x81\x87\x02\x84\x01\x42\x81\x85\x02\x83\x01\x40\x81\x89\x02"
  "\x82\x01\x3e\x81\x87\x02\x81\x01\x3c\x81\x85\x02\x80\x01\x3a\x81"
  "\x8b\x02\x7f\x38\x81\x89\x02\x7e\x36\x81\x85\x02\x7d\x34\x81\x89"
  "\x02\x7c\x32\x81\x85\x02\x7b\x30\x81\x89\x02\x7a\x2e\x81\x85\x02"
  "\x79\x2c\x81\x89\x02\x78\x2a\x81\x85\x02\x77\x28\x81\x89\x02\x76"
  "\x26\x81\x85\x02\x75\x24\x81\x85\x02\x74\x22\x81\x87\x02\x73\x20"
  "\x81\x85\x02\x72\x1e\x81\x87\x02\x71\x1c\x81\x85\x02\x70\x1a\x81"
  "\x87\x02\x6f\x18\x81\x85\x02\x6e\x16\x81\x87\x02\x6d\x14\x81\x85"
  "\x02\x6c\x12\x81\x87\x02\x6b\x10\x81\x85\x02\x6a\x0e\x81\x87\x02"
  "\x69\x0c\x81\x85\x02\x68\x0a\x81\x87\x02\x67\x08\x81\x85\x02\x66"
  "\x06\x81\x83\x02\x65\x04\x83\x04\x75\xa1\x01\x1a\x02\x0c\x03\x0c"
  "\x04\x0d\x03\xa0\x01\x06\x81\x85\x02\x9f\x01\x04\x84\x06\x05\x0d"
  "\x0b\x02\x0d\x0f\x10\x04\x0d\x02\xa9\x01\x14\x81\x8d\x02\xa8\x01"
  "\x12\x81\x89\x02\xa7\x01\x10\x81\x89\x02\xa6\x01\x0e\x81\x8f\x02"
  "\xa5\x01\x0c\x81\x89\x02\xa4\x01\x0a\x81\x87\x02\xa3\x01\x08\x81"
  "\x85\x02\xa2\x01\x06\x81\x87\x02\xa1\x01\x04\x84\x06\x13\x1c\x10"
  "\x0d\x0f\x0f\x10\x04\x0b\x04\x1a\x04\x04\x11\x04\x13\x66\x72\x65"
  "\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x2d\x74\x61\x67\x16"
  "\x04\x17\x04\x1d\x04\x13\x04\x0e\x04\x09\x04\x04\x0f\x1c\x1b\x0c"
  "\x12\x14\x19\x0a\x15\x18\x27\x6e\x65\x77\x2d\x73\x75\x62\x70\x72"
  "\x6f\x62\x6c\x65\x6d\x2f\x63\x6f\x6d\x70\x75\x74\x65\x2d\x66\x72"
  "\x65\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x21\x22\x63\x6f"
  "\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x2d\x66\x72\x65\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x0f"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81"
  "\x02\x07\x11";

SCHEME_OBJECT *
subfre_so_data_fe6ccdf53827011b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_subfre_so_data_fe6ccdf53827011b [0]))), (sizeof (prog_subfre_so_data_fe6ccdf53827011b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("subfre.so", subfre_so_data_fe6ccdf53827011b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("subfre.so", "ea1b036aec7fcbc7")
