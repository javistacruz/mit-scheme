/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:16-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_10 9
#define LABEL_1_8 11
#define LABEL_1_11 13
#define LABEL_1_12 15
#define LABEL_1_9 17
#define ENVIRONMENT_LABEL_1_3 30
#define DEBUGGING_LABEL_1_2 29
#define OBJECT_1_5 28
#define OBJECT_1_4 27
#define OBJECT_1_3 26
#define OBJECT_1_2 25
#define OBJECT_1_1 24
#define OBJECT_1_0 23
#define EXECUTE_CACHE_1_7 19
#define FREE_REFERENCE_1_0 22
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simple_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto simplicity_analysis_6;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto lambda_2;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto lambda_5;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simplicity_analysis_12)
DEFLABEL (simplicity_analysis_6)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_13)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_1_6);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_17;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd15.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd13.pObj) [9]);

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_17)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_1_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_14)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_1_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_19;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_19;
  (Wrd11.Obj) = ((Wrd17.pObj) [9]);

DEFLABEL (label_18)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_19)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_1_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_10)
  (Wrd11.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (lambda_15)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_1_9);
  (Wrd5.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_1_3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_23;

DEFLABEL (label_22)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 3);

DEFLABEL (label_23)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_22;
  ((Wrd16.pObj) [5]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_1_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_4 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 15
#define DEBUGGING_LABEL_2_2 14
#define OBJECT_2_2 13
#define OBJECT_2_1 12
#define OBJECT_2_0 11
#define EXECUTE_CACHE_2_7 9
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simple_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_2_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_2_4);
      goto walk_subproblem_3;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_subproblem_7)
DEFLABEL (walk_subproblem_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_11)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_2_2])))
    goto label_10;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_5);

DEFLABEL (label_10)
  (Wrd22.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd35.uLng) == 62)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_9)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd33.Lng))))
    goto label_8;
  Rvl = ((Wrd31.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 8
#define DEBUGGING_LABEL_3_2 7
#define EXECUTE_CACHE_3_5 5
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simple_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto new_subproblem_compute_simplicityB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_subproblem_compute_simplicityB_3)
DEFLABEL (new_subproblem_compute_simplicityB_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define LABEL_4_9 7
#define LABEL_4_10 9
#define LABEL_4_11 11
#define LABEL_4_5 13
#define LABEL_4_13 15
#define LABEL_4_6 17
#define LABEL_4_14 19
#define LABEL_4_16 21
#define LABEL_4_17 23
#define LABEL_4_18 25
#define ENVIRONMENT_LABEL_4_3 43
#define DEBUGGING_LABEL_4_2 42
#define OBJECT_4_8 41
#define OBJECT_4_7 40
#define OBJECT_4_6 39
#define OBJECT_4_5 38
#define OBJECT_4_4 37
#define OBJECT_4_3 36
#define OBJECT_4_2 35
#define OBJECT_4_1 34
#define OBJECT_4_0 33
#define EXECUTE_CACHE_4_15 27
#define EXECUTE_CACHE_4_12 29
#define EXECUTE_CACHE_4_8 31
#define FREE_REFERENCES_LABEL_4_0 26
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simple_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd9;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd57;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd5;
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
      goto update_subproblemB_12;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_4_10);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_4_11);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_4_13);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_4_14);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_4_16);
      goto label_16;

    case 10:
      current_block = (Rpc - LABEL_4_17);
      goto label_17;

    case 11:
      current_block = (Rpc - LABEL_4_18);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_subproblemB_23)
DEFLABEL (update_subproblemB_12)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_43;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_43;
  (Wrd13.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_32;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_32;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_31)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_30;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_30;
  (Wrd23.Obj) = ((Wrd29.pObj) [2]);

DEFLABEL (label_29)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_28;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_28;
  (Wrd40.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_25;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_25;
  ((Wrd13.pObj) [5]) = (Wrd5.Obj);

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_4_7]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_4_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 3);

DEFLABEL (label_15)
  goto label_24;

DEFLABEL (label_28)
  (Wrd48.Obj) = (current_block [OBJECT_4_2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.Obj) = (current_block [OBJECT_4_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_17)
  (Wrd23.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_4_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 62))
    goto label_41;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd63.Lng))))
    goto label_41;
  (Wrd57.Obj) = ((Wrd61.pObj) [4]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_38;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_38;
  (Wrd28.Obj) = ((Wrd32.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_37)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_35;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd52.Lng))))
    goto label_35;
  (Wrd46.Obj) = ((Wrd50.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_34)
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (label_35)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.Obj) = (current_block [OBJECT_4_2]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd5.Obj) = (current_block [OBJECT_4_3]);
  Rsp = (& (Rsp [2]));
  goto label_26;

DEFLABEL (label_38)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_4_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_26;

DEFLABEL (label_41)
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd67.Obj) = (current_block [OBJECT_4_8]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_4_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_11 13
#define LABEL_5_12 15
#define LABEL_5_15 17
#define LABEL_5_17 19
#define LABEL_5_19 21
#define LABEL_5_20 23
#define LABEL_5_22 25
#define LABEL_5_24 27
#define LABEL_5_26 29
#define LABEL_5_28 31
#define LABEL_5_29 33
#define LABEL_5_31 35
#define LABEL_5_30 37
#define LABEL_5_25 39
#define LABEL_5_37 41
#define LABEL_5_21 43
#define LABEL_5_39 45
#define LABEL_5_18 47
#define LABEL_5_41 49
#define LABEL_5_13 51
#define LABEL_5_43 53
#define LABEL_5_45 55
#define LABEL_5_46 57
#define LABEL_5_7 59
#define LABEL_5_48 61
#define LABEL_5_35 63
#define LABEL_5_50 65
#define LABEL_5_36 67
#define LABEL_5_38 69
#define LABEL_5_52 71
#define LABEL_5_40 73
#define LABEL_5_54 75
#define LABEL_5_42 77
#define LABEL_5_55 79
#define LABEL_5_56 81
#define LABEL_5_47 83
#define LABEL_5_49 85
#define LABEL_5_51 87
#define LABEL_5_53 89
#define LABEL_5_57 91
#define LABEL_5_60 93
#define LABEL_5_59 95
#define ENVIRONMENT_LABEL_5_3 140
#define DEBUGGING_LABEL_5_2 139
#define OBJECT_5_11 138
#define OBJECT_5_10 137
#define OBJECT_5_9 136
#define OBJECT_5_8 135
#define OBJECT_5_7 134
#define OBJECT_5_6 133
#define OBJECT_5_5 132
#define OBJECT_5_4 131
#define OBJECT_5_3 130
#define OBJECT_5_2 129
#define OBJECT_5_1 128
#define OBJECT_5_0 127
#define EXECUTE_CACHE_5_58 97
#define EXECUTE_CACHE_5_44 99
#define EXECUTE_CACHE_5_34 101
#define EXECUTE_CACHE_5_33 103
#define EXECUTE_CACHE_5_32 105
#define EXECUTE_CACHE_5_27 107
#define EXECUTE_CACHE_5_23 109
#define EXECUTE_CACHE_5_16 111
#define EXECUTE_CACHE_5_14 113
#define EXECUTE_CACHE_5_10 115
#define FREE_REFERENCE_5_8 118
#define FREE_REFERENCE_5_7 119
#define FREE_REFERENCE_5_6 120
#define FREE_REFERENCE_5_5 121
#define FREE_REFERENCE_5_4 122
#define FREE_REFERENCE_5_3 123
#define FREE_REFERENCE_5_2 124
#define FREE_REFERENCE_5_1 125
#define FREE_REFERENCE_5_0 126
#define FREE_REFERENCES_LABEL_5_0 96
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simple_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd77;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd85;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd104;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd101;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd123;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd120;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd142;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd139;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd194;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd179;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd199;
  machine_word Wrd198;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd156;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd224;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd211;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd203;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd204;
  machine_word Wrd202;
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
      current_block = (Rpc - LABEL_5_4);
      goto walk_node_50;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_52;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_53;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_66;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_67;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto label_54;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto label_64;

    case 7:
      current_block = (Rpc - LABEL_5_15);
      goto label_65;

    case 8:
      current_block = (Rpc - LABEL_5_17);
      goto label_55;

    case 9:
      current_block = (Rpc - LABEL_5_19);
      goto label_63;

    case 10:
      current_block = (Rpc - LABEL_5_20);
      goto label_56;

    case 11:
      current_block = (Rpc - LABEL_5_22);
      goto label_62;

    case 12:
      current_block = (Rpc - LABEL_5_24);
      goto label_57;

    case 13:
      current_block = (Rpc - LABEL_5_26);
      goto label_61;

    case 14:
      current_block = (Rpc - LABEL_5_28);
      goto label_58;

    case 15:
      current_block = (Rpc - LABEL_5_29);
      goto label_59;

    case 16:
      current_block = (Rpc - LABEL_5_31);
      goto label_60;

    case 17:
      current_block = (Rpc - LABEL_5_30);
      goto continuation_9;

    case 18:
      current_block = (Rpc - LABEL_5_25);
      goto continuation_11;

    case 19:
      current_block = (Rpc - LABEL_5_37);
      goto label_68;

    case 20:
      current_block = (Rpc - LABEL_5_21);
      goto continuation_18;

    case 21:
      current_block = (Rpc - LABEL_5_39);
      goto label_69;

    case 22:
      current_block = (Rpc - LABEL_5_18);
      goto continuation_24;

    case 23:
      current_block = (Rpc - LABEL_5_41);
      goto label_70;

    case 24:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_33;

    case 25:
      current_block = (Rpc - LABEL_5_43);
      goto label_73;

    case 26:
      current_block = (Rpc - LABEL_5_45);
      goto label_71;

    case 27:
      current_block = (Rpc - LABEL_5_46);
      goto label_72;

    case 28:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_46;

    case 29:
      current_block = (Rpc - LABEL_5_48);
      goto label_74;

    case 30:
      current_block = (Rpc - LABEL_5_35);
      goto continuation_14;

    case 31:
      current_block = (Rpc - LABEL_5_50);
      goto label_75;

    case 32:
      current_block = (Rpc - LABEL_5_36);
      goto continuation_13;

    case 33:
      current_block = (Rpc - LABEL_5_38);
      goto continuation_20;

    case 34:
      current_block = (Rpc - LABEL_5_52);
      goto label_76;

    case 35:
      current_block = (Rpc - LABEL_5_40);
      goto continuation_26;

    case 36:
      current_block = (Rpc - LABEL_5_54);
      goto label_77;

    case 37:
      current_block = (Rpc - LABEL_5_42);
      goto continuation_35;

    case 38:
      current_block = (Rpc - LABEL_5_55);
      goto label_78;

    case 39:
      current_block = (Rpc - LABEL_5_56);
      goto label_79;

    case 40:
      current_block = (Rpc - LABEL_5_47);
      goto continuation_48;

    case 41:
      current_block = (Rpc - LABEL_5_49);
      goto continuation_16;

    case 42:
      current_block = (Rpc - LABEL_5_51);
      goto continuation_22;

    case 43:
      current_block = (Rpc - LABEL_5_53);
      goto continuation_28;

    case 44:
      current_block = (Rpc - LABEL_5_57);
      goto continuation_38;

    case 45:
      current_block = (Rpc - LABEL_5_60);
      goto label_80;

    case 46:
      current_block = (Rpc - LABEL_5_59);
      goto continuation_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_node_82)
DEFLABEL (walk_node_50)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_148;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_148;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_147)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_146;
  Wrd22 = Wrd26;

DEFLABEL (label_145)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_137;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_136;
  Wrd30 = Wrd34;

DEFLABEL (label_135)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_112;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_3]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_111;
  Wrd38 = Wrd42;

DEFLABEL (label_110)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_108;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_4]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_107;
  Wrd46 = Wrd50;

DEFLABEL (label_106)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == (Wrd46.Obj))
    goto label_102;
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_5]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_101;
  Wrd54 = Wrd58;

DEFLABEL (label_100)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == (Wrd54.Obj))
    goto label_91;
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_6]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_90;
  Wrd62 = Wrd66;

DEFLABEL (label_89)
  (Wrd68.Obj) = (Rsp [0]);
  if ((Wrd68.Obj) == (Wrd62.Obj))
    goto label_84;
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_7]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_88;
  Wrd70 = Wrd74;

DEFLABEL (label_87)
  (Wrd76.Obj) = (Rsp [0]);
  if ((Wrd76.Obj) == (Wrd70.Obj))
    goto label_84;
  (Wrd77.Obj) = (current_block [OBJECT_5_9]);
  (Rsp [1]) = (Wrd77.Obj);
  (Rsp [2]) = (Wrd76.Obj);

DEFLABEL (label_83)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_33]));

DEFLABEL (label_84)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd92.Obj) = (Rsp [2]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 10))
    goto label_86;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd91.Lng))))
    goto label_86;
  (Wrd85.Obj) = ((Wrd89.pObj) [7]);
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_85)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_30);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (label_86)
  (Wrd94.Obj) = (Rsp [2]);
  (Wrd95.Obj) = (current_block [OBJECT_5_8]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_29])), (Wrd71.pObj));

DEFLABEL (label_59)
  (Wrd70.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_28])), (Wrd63.pObj));

DEFLABEL (label_58)
  (Wrd62.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_91)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd111.Obj) = (Rsp [2]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 10))
    goto label_99;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd109.Obj) = ((Wrd108.pObj) [0]);
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd110.Lng))))
    goto label_99;
  (Wrd104.Obj) = ((Wrd108.pObj) [10]);
  (* (--Rsp)) = (Wrd104.Obj);

DEFLABEL (label_98)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_5_25);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_92;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_35]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_36]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_97;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd22.Lng))))
    goto label_97;
  (Wrd16.Obj) = ((Wrd20.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_96)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_5_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_5_35);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_93;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_49]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_95;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd18.Lng))))
    goto label_95;
  (Wrd12.Obj) = ((Wrd16.pObj) [8]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_94)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_5_49);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (label_95)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_5_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_50]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.Obj) = (current_block [OBJECT_5_8]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_37]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd113.Obj) = (Rsp [2]);
  (Wrd114.Obj) = (current_block [OBJECT_5_6]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_24])), (Wrd55.pObj));

DEFLABEL (label_57)
  (Wrd54.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_102)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd130.Obj) = (Rsp [2]);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if (! ((Wrd131.uLng) == 10))
    goto label_104;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd130.Obj));
  (Wrd128.Obj) = ((Wrd127.pObj) [0]);
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd128.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd129.Lng))))
    goto label_104;
  (Wrd123.Obj) = ((Wrd127.pObj) [9]);
  (* (--Rsp)) = (Wrd123.Obj);

DEFLABEL (label_103)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_104)
  (Wrd132.Obj) = (Rsp [2]);
  (Wrd133.Obj) = (current_block [OBJECT_5_2]);
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_62)
DEFLABEL (label_105)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_20])), (Wrd47.pObj));

DEFLABEL (label_56)
  (Wrd46.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_108)
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (Wrd149.Obj) = (Rsp [2]);
  (Wrd150.uLng) = (OBJECT_TYPE (Wrd149.Obj));
  if (! ((Wrd150.uLng) == 10))
    goto label_109;
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd149.Obj));
  (Wrd147.Obj) = ((Wrd146.pObj) [0]);
  (Wrd148.Lng) = (FIXNUM_TO_LONG (Wrd147.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd148.Lng))))
    goto label_109;
  (Wrd142.Obj) = ((Wrd146.pObj) [9]);
  (* (--Rsp)) = (Wrd142.Obj);
  goto label_103;

DEFLABEL (label_109)
  (Wrd151.Obj) = (Rsp [2]);
  (Wrd152.Obj) = (current_block [OBJECT_5_2]);
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_63)
  goto label_105;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_17])), (Wrd39.pObj));

DEFLABEL (label_55)
  (Wrd38.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_112)
  (Wrd165.Obj) = (Rsp [1]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd166.uLng) == 10))
    goto label_134;
  (Wrd162.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd163.Obj) = ((Wrd162.pObj) [0]);
  (Wrd164.Lng) = (FIXNUM_TO_LONG (Wrd163.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd164.Lng))))
    goto label_134;
  (Wrd156.Obj) = ((Wrd162.pObj) [8]);

DEFLABEL (label_133)
  (Rsp [0]) = (Wrd156.Obj);
  if (! ((Wrd156.Obj) == (current_block [OBJECT_5_4])))
    goto label_129;
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd198.Obj);
  (Wrd199.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd199.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_5_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_117;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_116;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd15.Lng))))
    goto label_116;
  (Wrd7.Obj) = ((Wrd13.pObj) [11]);

DEFLABEL (label_115)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_114;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_113)
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (label_114)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_46]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_11]), 1);

DEFLABEL (label_72)
  (Wrd23.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_5_10]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_45]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_71)
  (Wrd7.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_117)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_42]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_128;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd42.Lng))))
    goto label_128;
  (Wrd36.Obj) = ((Wrd40.pObj) [10]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_127)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_44]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_5_42);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_119;

DEFLABEL (label_118)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_119)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_126;
  Wrd8 = Wrd12;

DEFLABEL (label_125)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_124;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_124;
  (Wrd14.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_123)
  (Wrd30.Obj) = (* (Rsp++));
  if (! ((Wrd14.Obj) == (Wrd30.Obj)))
    goto label_118;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_57]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_58]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_5_57);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_120;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_120)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_59]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_122;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd18.Lng))))
    goto label_122;
  (Wrd12.Obj) = ((Wrd16.pObj) [11]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_121)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_5_59);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (label_122)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_5_10]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_60]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_80)
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_5_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_56]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_79)
  (Wrd14.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_55])), (Wrd9.pObj));

DEFLABEL (label_78)
  (Wrd8.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Obj) = (current_block [OBJECT_5_6]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_43]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (label_129)
  if ((Wrd156.Obj) == (current_block [OBJECT_5_5]))
    goto label_130;
  (Wrd176.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd176.Obj);
  (Wrd177.Obj) = (current_block [OBJECT_5_7]);
  (Rsp [1]) = (Wrd177.Obj);
  goto label_83;

DEFLABEL (label_130)
  (Wrd188.Obj) = (Rsp [1]);
  (Wrd189.uLng) = (OBJECT_TYPE (Wrd188.Obj));
  if (! ((Wrd189.uLng) == 10))
    goto label_132;
  (Wrd185.pObj) = (OBJECT_ADDRESS (Wrd188.Obj));
  (Wrd186.Obj) = ((Wrd185.pObj) [0]);
  (Wrd187.Lng) = (FIXNUM_TO_LONG (Wrd186.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd187.Lng))))
    goto label_132;
  (Wrd179.Obj) = ((Wrd185.pObj) [10]);

DEFLABEL (label_131)
  (Rsp [1]) = (Wrd179.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (label_132)
  (Wrd190.Obj) = (Rsp [1]);
  (Wrd191.Obj) = (current_block [OBJECT_5_6]);
  (Wrd194.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd194.Obj);
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd190.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_65)
  (Wrd179.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd167.Obj) = (Rsp [1]);
  (Wrd168.Obj) = (current_block [OBJECT_5_3]);
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_64)
  (Wrd156.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_11])), (Wrd31.pObj));

DEFLABEL (label_54)
  (Wrd30.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_137)
  (Wrd202.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd202.Obj);
  (Wrd204.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd207.Obj) = ((Wrd204.pObj) [0]);
  (Wrd208.uLng) = (OBJECT_TYPE (Wrd207.Obj));
  if ((Wrd208.uLng) == 50)
    goto label_144;
  Wrd203 = Wrd207;

DEFLABEL (label_143)
  (* (--Rsp)) = (Wrd203.Obj);
  (Wrd218.Obj) = (Rsp [3]);
  (Wrd219.uLng) = (OBJECT_TYPE (Wrd218.Obj));
  if (! ((Wrd219.uLng) == 10))
    goto label_142;
  (Wrd215.pObj) = (OBJECT_ADDRESS (Wrd218.Obj));
  (Wrd216.Obj) = ((Wrd215.pObj) [0]);
  (Wrd217.Lng) = (FIXNUM_TO_LONG (Wrd216.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd217.Lng))))
    goto label_142;
  (Wrd211.Obj) = ((Wrd215.pObj) [9]);
  (* (--Rsp)) = (Wrd211.Obj);

DEFLABEL (label_141)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_5_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_138;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_138)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_47]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_140;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_140;
  (Wrd12.Obj) = ((Wrd16.pObj) [7]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_139)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_5_47);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (label_140)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_5_8]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_48]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_74)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd220.Obj) = (Rsp [3]);
  (Wrd221.Obj) = (current_block [OBJECT_5_2]);
  (Wrd224.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd224.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  (* (--Rsp)) = (Wrd220.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_8])), (Wrd204.pObj));

DEFLABEL (label_66)
  (Wrd203.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_6])), (Wrd23.pObj));

DEFLABEL (label_53)
  (Wrd22.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_147;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_5_21);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_149;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_149)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_38]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_154;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd18.Lng))))
    goto label_154;
  (Wrd12.Obj) = ((Wrd16.pObj) [10]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_153)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_27]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_5_38);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_150;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_150)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_51]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_152;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_152;
  (Wrd12.Obj) = ((Wrd16.pObj) [7]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_151)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_5_51);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (label_152)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_5_8]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_52]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_76)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_5_6]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_39]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_153;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_5_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_155;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_155)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_40]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_160;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd18.Lng))))
    goto label_160;
  (Wrd12.Obj) = ((Wrd16.pObj) [10]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_159)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_27]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_5_40);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_156;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_156)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_53]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_158;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_158;
  (Wrd12.Obj) = ((Wrd16.pObj) [7]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_157)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_5_53);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (label_158)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_5_8]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_54]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_5_6]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_41]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_159;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 9
#define DEBUGGING_LABEL_6_2 8
#define OBJECT_6_0 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simple_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto walk_next_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_next_3)
DEFLABEL (walk_next_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_4;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

DEFLABEL (label_4)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_6_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_8 9
#define LABEL_7_7 11
#define ENVIRONMENT_LABEL_7_3 24
#define DEBUGGING_LABEL_7_2 23
#define OBJECT_7_3 22
#define OBJECT_7_2 21
#define OBJECT_7_1 20
#define OBJECT_7_0 19
#define EXECUTE_CACHE_7_10 13
#define EXECUTE_CACHE_7_9 15
#define FREE_REFERENCE_7_0 18
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simple_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_7_4);
      goto walk_return_operator_5;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_return_operator_11)
DEFLABEL (walk_return_operator_5)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_20;
  Wrd5 = Wrd9;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_18;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_18;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_17)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (Rsp [1]);
  if ((Wrd30.Obj) == (Wrd31.Obj))
    goto label_16;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_15;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd43.Lng))))
    goto label_15;
  (Wrd37.Obj) = ((Wrd41.pObj) [11]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (label_15)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_7_3]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_7_2]);
  goto label_12;

DEFLABEL (label_18)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_7_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_8 11
#define LABEL_8_9 13
#define ENVIRONMENT_LABEL_8_3 27
#define DEBUGGING_LABEL_8_2 26
#define OBJECT_8_6 25
#define OBJECT_8_5 24
#define OBJECT_8_4 23
#define OBJECT_8_3 22
#define OBJECT_8_2 21
#define OBJECT_8_1 20
#define OBJECT_8_0 19
#define EXECUTE_CACHE_8_10 15
#define FREE_REFERENCE_8_0 18
#define FREE_REFERENCES_LABEL_8_0 14
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simple_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd65;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd46;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_8_4);
      goto walk_rvalue_7;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_8_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_rvalue_15)
DEFLABEL (walk_rvalue_7)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;
  Wrd5 = Wrd9;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_25;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_25;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_24)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_17;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_8_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_23;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd38.Lng))))
    goto label_23;
  (Wrd30.Obj) = ((Wrd36.pObj) [4]);

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd56.uLng) == 10))
    goto label_21;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd54.Lng))))
    goto label_21;
  (Wrd46.Obj) = ((Wrd52.pObj) [16]);

DEFLABEL (label_20)
  if ((Wrd46.Obj) == (current_block [OBJECT_8_4]))
    goto label_16;
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 10))
    goto label_19;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd74.Lng))))
    goto label_19;
  (Wrd65.Obj) = ((Wrd72.pObj) [10]);
  if (! ((Wrd65.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_16;

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (label_19)
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.Obj) = (current_block [OBJECT_8_5]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_16;

DEFLABEL (label_21)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.Obj) = (current_block [OBJECT_8_3]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_12)
  (Wrd46.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_8_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_11)
  (Wrd30.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_8_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_10)
  (Wrd11.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_6 5
#define LABEL_9_5 7
#define ENVIRONMENT_LABEL_9_3 15
#define DEBUGGING_LABEL_9_2 14
#define OBJECT_9_2 13
#define OBJECT_9_1 12
#define OBJECT_9_0 11
#define EXECUTE_CACHE_9_7 9
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simple_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_9_4);
      goto walk_lvalue_2;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_lvalue_6)
DEFLABEL (walk_lvalue_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_11;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd16.Lng))))
    goto label_11;
  (Wrd10.Obj) = ((Wrd14.pObj) [15]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_9_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_9_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

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
simple_so_1f41df1ac829af29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	1,
	2,
	1,
	1,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 9)
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

static const struct liarc_code_S arr_decl_simple_so_1f41df1ac829af29 [9] =
  {
    { "simple_so_code_1", 8, simple_so_code_1 },
    { "simple_so_code_2", 3, simple_so_code_2 },
    { "simple_so_code_3", 1, simple_so_code_3 },
    { "simple_so_code_4", 12, simple_so_code_4 },
    { "simple_so_code_5", 47, simple_so_code_5 },
    { "simple_so_code_6", 1, simple_so_code_6 },
    { "simple_so_code_7", 5, simple_so_code_7 },
    { "simple_so_code_8", 6, simple_so_code_8 },
    { "simple_so_code_9", 3, simple_so_code_9 }
  };

int
decl_simple_so_1f41df1ac829af29 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_simple_so_1f41df1ac829af29);
  return (0);
}

DECLARE_COMPILED_CODE ("simple.so", 3, decl_simple_so_1f41df1ac829af29, simple_so_1f41df1ac829af29)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_simple_so_data_1f41df1ac829af29 [1642] =
  "\x94\x01\x12\xa2\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\xb9\x1d"
  "\x0d\xba\x84\xc2\xbb\x02\x0d\xbc\x24\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd"
  "\x1d\xb0\x82\x88\xb2\xc2\xba\x84\x28\x0d\xbe\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x83\x88\x28\xb6\x23\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x84\x88\x83\x1d\xb1\x84\xb3\x07\x81\xb2\x82"
  "\x28\x0d\x28\x0d\xba\x28\x0d\xb9\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xc1\x02\x0c\x86\x0c\x02\x0d"
  "\x0d\x02\x02\xb3\x80\x0d\xb4\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1c\x24"
  "\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\xb1\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x07"
  "\x28\xb2\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x07\xb3"
  "\x80\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x0d\x02\x83\xb3"
  "\x80\x0d\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x02\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x17\xb8\x88\xb0\xb3\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb5\x2a"
  "\x17\x1b\xb1\x1b\x1b\xb2\xb6\x0d\xb4\x0d\x17\x28\x0d\x26\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x5a\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x2f\x66\x67\x6f\x70\x74\x2f\x73\x69\x6d\x70\x6c\x65\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d"
  "\x73\x65\x74\x21\x02\x08\x75\x6e\x6b\x6e\x6f\x77\x6e\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x09\x10\x77\x61\x6c\x6b\x2f\x73"
  "\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x02\x04\x09\x66\x6f\x72\x2d"
  "\x65\x61\x63\x68\x02\x0b\x12\x83\x04\x0a\x10\x81\x85\x02\x09\x0e"
  "\x81\x83\x02\x08\x0c\x83\x04\x07\x0a\x81\x85\x02\x06\x08\x83\x04"
  "\x05\x06\x81\x83\x02\x04\x04\x83\x04\x11\x1f\x02\x0c\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x72\x65\x66\x03\x13\x75\x70\x64\x61\x74\x65"
  "\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x21\x02\x0e\x08\x81"
  "\x83\x02\x0d\x06\x83\x04\x0c\x04\x81\x83\x02\x07\x10\x02\x03\x02"
  "\x0f\x04\x83\x04\x03\x09\x02\x02\x03\x0b\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x3f\x04\x0a\x77\x61\x6c\x6b\x2f\x6e\x6f\x64\x65\x03"
  "\x0c\x77\x61\x6c\x6b\x2f\x72\x76\x61\x6c\x75\x65\x04\x1b\x1a\x81"
  "\x87\x02\x1a\x18\x81\x87\x02\x19\x16\x81\x85\x02\x18\x14\x81\x87"
  "\x02\x17\x12\x81\x85\x02\x16\x10\x81\x83\x02\x15\x0e\x81\x83\x02"
  "\x14\x0c\x81\x83\x02\x13\x0a\x81\x85\x02\x12\x08\x81\x85\x02\x11"
  "\x06\x81\x87\x02\x10\x04\x83\x04\x19\x2c\x0a\x02\x04\x63\x61\x72"
  "\x0b\x13\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6e\x6f\x64\x65\x20\x74"
  "\x79\x70\x65\x3a\x19\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x61\x70\x70"
  "\x6c\x69\x63\x61\x74\x69\x6f\x6e\x20\x74\x79\x70\x65\x0a\x07\x72"
  "\x65\x74\x75\x72\x6e\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x08\x09\x0d\x70\x61\x72\x61\x6c\x6c\x65\x6c\x2d\x74\x61\x67"
  "\x10\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x61\x67"
  "\x0f\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x74\x61\x67\x0f"
  "\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x74\x61\x67\x0e\x74"
  "\x72\x75\x65\x2d\x74\x65\x73\x74\x2d\x74\x61\x67\x13\x76\x69\x72"
  "\x74\x75\x61\x6c\x2d\x72\x65\x74\x75\x72\x6e\x2d\x74\x61\x67\x0c"
  "\x66\x67\x2d\x6e\x6f\x6f\x70\x2d\x74\x61\x67\x0e\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x0b\x0a\x04\x09\x66\x6f\x72"
  "\x2d\x61\x6c\x6c\x3f\x03\x1b\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69"
  "\x6f\x6e\x2f\x73\x69\x6d\x70\x6c\x65\x2d\x69\x6e\x6c\x69\x6e\x65"
  "\x3f\x04\x15\x77\x61\x6c\x6b\x2f\x72\x65\x74\x75\x72\x6e\x2d\x6f"
  "\x70\x65\x72\x61\x74\x6f\x72\x0c\x03\x0c\x77\x61\x6c\x6b\x2f\x6c"
  "\x76\x61\x6c\x75\x65\x0d\x03\x03\x0f\x65\x64\x67\x65\x2d\x6e\x65"
  "\x78\x74\x2d\x6e\x6f\x64\x65\x0e\x04\x06\x65\x72\x72\x6f\x72\x04"
  "\x0a\x77\x61\x6c\x6b\x2f\x6e\x65\x78\x74\x0f\x03\x13\x72\x76\x61"
  "\x6c\x75\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x03"
  "\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x69\x6e\x6c\x69\x6e"
  "\x65\x2d\x63\x6f\x64\x65\x3f\x0b\x4a\x60\x81\x87\x02\x49\x5e\x81"
  "\x89\x02\x48\x5c\x81\x87\x02\x47\x5a\x81\x87\x02\x46\x58\x81\x87"
  "\x02\x45\x56\x81\x87\x02\x44\x54\x81\x87\x02\x43\x52\x81\x89\x02"
  "\x42\x50\x81\x87\x02\x41\x4e\x81\x87\x02\x40\x4c\x81\x89\x02\x3f"
  "\x4a\x81\x87\x02\x3e\x48\x81\x89\x02\x3d\x46\x81\x87\x02\x3c\x44"
  "\x81\x8b\x02\x3b\x42\x81\x89\x02\x3a\x40\x81\x87\x02\x39\x3e\x81"
  "\x89\x02\x38\x3c\x81\x87\x02\x37\x3a\x81\x87\x02\x36\x38\x81\x87"
  "\x02\x35\x36\x81\x89\x02\x34\x34\x81\x87\x02\x33\x32\x81\x89\x02"
  "\x32\x30\x81\x87\x02\x31\x2e\x81\x89\x02\x30\x2c\x81\x87\x02\x2f"
  "\x2a\x81\x8d\x02\x2e\x28\x81\x87\x02\x2d\x26\x81\x87\x02\x2c\x24"
  "\x81\x89\x02\x2b\x22\x81\x87\x02\x2a\x20\x81\x87\x02\x29\x1e\x81"
  "\x89\x02\x28\x1c\x81\x87\x02\x27\x1a\x81\x89\x02\x26\x18\x81\x87"
  "\x02\x25\x16\x81\x89\x02\x24\x14\x81\x87\x02\x23\x12\x81\x87\x02"
  "\x22\x10\x81\x87\x02\x21\x0e\x81\x87\x02\x20\x0c\x81\x8b\x02\x1f"
  "\x0a\x81\x89\x02\x1e\x08\x81\x87\x02\x1d\x06\x81\x85\x02\x1c\x04"
  "\x84\x06\x5f\x8d\x01\x10\x02\x04\x02\x4b\x04\x84\x06\x03\x0a\x11"
  "\x02\x08\x0b\x0b\x02\x03\x0e\x04\x0f\x03\x50\x0c\x81\x85\x02\x4f"
  "\x0a\x81\x87\x02\x4e\x08\x81\x87\x02\x4d\x06\x81\x85\x02\x4c\x04"
  "\x84\x06\x0b\x19\x0e\x02\x09\x0a\x09\x23\x5b\x76\x61\x6c\x75\x65"
  "\x5d\x10\x0e\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x61\x67"
  "\x02\x03\x0d\x02\x56\x0e\x81\x83\x02\x55\x0c\x81\x83\x02\x54\x0a"
  "\x81\x83\x02\x53\x08\x81\x85\x02\x52\x06\x81\x83\x02\x51\x04\x83"
  "\x04\x0d\x1c\x0b\x02\x0a\x0f\x03\x12\x62\x6c\x6f\x63\x6b\x2d\x70"
  "\x61\x73\x73\x65\x64\x2d\x6f\x75\x74\x3f\x02\x59\x08\x81\x83\x02"
  "\x58\x06\x81\x85\x02\x57\x04\x83\x04\x07\x10\x0a\x04\x0b\x04\x0e"
  "\x04\x11\x04\x10\x04\x0a\x04\x09\x04\x06\x04\x0a\x0d\x0c\x0f\x23"
  "\x6e\x65\x77\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2f\x63"
  "\x6f\x6d\x70\x75\x74\x65\x2d\x73\x69\x6d\x70\x6c\x69\x63\x69\x74"
  "\x79\x21\x14\x73\x69\x6d\x70\x6c\x69\x63\x69\x74\x79\x2d\x61\x6e"
  "\x61\x6c\x79\x73\x69\x73\x0a\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06"
  "\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
simple_so_data_1f41df1ac829af29 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_simple_so_data_1f41df1ac829af29 [0]))), (sizeof (prog_simple_so_data_1f41df1ac829af29)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("simple.so", simple_so_data_1f41df1ac829af29)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("simple.so", "c10f7b51cc75e610")
