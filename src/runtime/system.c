/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:56-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_6 5
#define LABEL_1_4 7
#define LABEL_1_7 9
#define LABEL_1_12 11
#define LABEL_1_10 13
#define LABEL_1_16 15
#define LABEL_1_18 17
#define LABEL_1_13 19
#define LABEL_1_15 21
#define LABEL_1_21 23
#define LABEL_1_19 25
#define LABEL_1_23 27
#define LABEL_1_22 29
#define ENVIRONMENT_LABEL_1_3 59
#define DEBUGGING_LABEL_1_2 58
#define OBJECT_1_6 57
#define OBJECT_1_5 56
#define OBJECT_1_4 55
#define OBJECT_1_3 54
#define OBJECT_1_2 53
#define OBJECT_1_1 52
#define OBJECT_1_0 51
#define EXECUTE_CACHE_1_25 31
#define EXECUTE_CACHE_1_24 33
#define EXECUTE_CACHE_1_20 35
#define EXECUTE_CACHE_1_17 37
#define EXECUTE_CACHE_1_14 39
#define EXECUTE_CACHE_1_11 41
#define EXECUTE_CACHE_1_9 43
#define EXECUTE_CACHE_1_8 45
#define FREE_REFERENCE_1_0 48
#define FREE_ASSIGNMENT_1_0 50
#define FREE_REFERENCES_LABEL_1_0 30
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
system_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_1_4);
      goto add_subsystem_identificationB_19;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_1_12);
      goto loop_10;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_1_16);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_1_18);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto lambda_9;

    case 9:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_1_21);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_subsystem_identificationB_25)
DEFLABEL (add_subsystem_identificationB_19)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_39;

DEFLABEL (label_38)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_6);

DEFLABEL (label_37)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto loop_10;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 1))
    goto label_30;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_29)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [1]) = (Wrd12.Obj);
  Rvl = (current_block [OBJECT_1_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_30)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 2);

DEFLABEL (label_21)
  goto label_29;

DEFLABEL (label_31)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_36;
  Wrd39 = Wrd43;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_1_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_34)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_21])), (Wrd6.pObj), Rvl);

DEFLABEL (label_23)
  goto label_32;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_16])), (Wrd40.pObj));

DEFLABEL (label_22)
  (Wrd39.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_39)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (loop_26)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_1_12);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (lambda_27)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_1_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 30)
    goto label_42;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto loop_10;

DEFLABEL (label_41)
  (Wrd7.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (label_42)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  Rvl = (current_block [OBJECT_1_2]);
  goto label_43;

DEFLABEL (label_44)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_43)
DEFLABEL (label_45)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_8 9
#define LABEL_2_7 11
#define LABEL_2_10 13
#define LABEL_2_11 15
#define LABEL_2_12 17
#define LABEL_2_13 19
#define LABEL_2_14 21
#define LABEL_2_15 23
#define ENVIRONMENT_LABEL_2_3 36
#define DEBUGGING_LABEL_2_2 35
#define OBJECT_2_3 34
#define OBJECT_2_2 33
#define OBJECT_2_1 32
#define OBJECT_2_0 31
#define EXECUTE_CACHE_2_9 25
#define FREE_REFERENCE_2_0 28
#define FREE_ASSIGNMENT_2_0 30
#define FREE_REFERENCES_LABEL_2_0 24
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
system_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd7;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd57;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_2_4);
      goto remove_subsystem_identificationB_11;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_2_12);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_2_13);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_2_14);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_2_15);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_subsystem_identificationB_22)
DEFLABEL (remove_subsystem_identificationB_11)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_25;
  Wrd5 = Wrd9;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto loop_9;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (loop_23)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_2_6);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_26;
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_42;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_41)
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_31)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_30;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  ((Wrd28.pObj) [1]) = (Wrd9.Obj);

DEFLABEL (label_29)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_28;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [1]) = (Wrd18.Obj);
  goto loop_9;

DEFLABEL (label_28)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_16)
  (Wrd18.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 2);

DEFLABEL (label_17)
  goto label_29;

DEFLABEL (label_32)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_37;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_36)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd45.pObj) [0]) = (Wrd36.Obj);
  goto label_29;

DEFLABEL (label_35)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_12])), (Wrd45.pObj), (Wrd36.Obj));

DEFLABEL (label_19)
  goto label_29;

DEFLABEL (label_37)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_18)
  (Wrd36.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd57.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd57.Obj);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_40;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [1]) = (Wrd58.Obj);
  goto loop_9;

DEFLABEL (label_40)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_20)
  (Wrd58.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define ENVIRONMENT_LABEL_3_3 24
#define DEBUGGING_LABEL_3_2 23
#define OBJECT_3_1 22
#define OBJECT_3_0 21
#define EXECUTE_CACHE_3_11 13
#define EXECUTE_CACHE_3_10 15
#define EXECUTE_CACHE_3_7 17
#define FREE_REFERENCE_3_0 20
#define FREE_REFERENCES_LABEL_3_0 12
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
system_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_3_4);
      goto get_subsystem_names_5;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto lambda_4;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_subsystem_names_10)
DEFLABEL (get_subsystem_names_5)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (lambda_11)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_3_6);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_16;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (label_14)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define ENVIRONMENT_LABEL_4_3 15
#define DEBUGGING_LABEL_4_2 14
#define OBJECT_4_0 13
#define EXECUTE_CACHE_4_8 9
#define EXECUTE_CACHE_4_6 11
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
system_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto get_subsystem_version_3;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_subsystem_version_7)
DEFLABEL (get_subsystem_version_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define ENVIRONMENT_LABEL_5_3 15
#define DEBUGGING_LABEL_5_2 14
#define OBJECT_5_0 13
#define EXECUTE_CACHE_5_8 9
#define EXECUTE_CACHE_5_6 11
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
system_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5_4);
      goto get_subsystem_version_string_3;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_subsystem_version_string_7)
DEFLABEL (get_subsystem_version_string_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_9 9
#define LABEL_6_8 11
#define LABEL_6_11 13
#define ENVIRONMENT_LABEL_6_3 29
#define DEBUGGING_LABEL_6_2 28
#define OBJECT_6_2 27
#define OBJECT_6_1 26
#define OBJECT_6_0 25
#define EXECUTE_CACHE_6_14 15
#define EXECUTE_CACHE_6_13 17
#define EXECUTE_CACHE_6_12 19
#define EXECUTE_CACHE_6_10 21
#define EXECUTE_CACHE_6_6 23
#define FREE_REFERENCES_LABEL_6_0 14
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
system_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_6_4);
      goto get_subsystem_identification_string_7;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_subsystem_identification_string_12)
DEFLABEL (get_subsystem_identification_string_7)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_19;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_18)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_17;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (Rsp [1]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (label_15)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6_2]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (label_17)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_8 11
#define LABEL_7_9 13
#define LABEL_7_11 15
#define LABEL_7_12 17
#define LABEL_7_10 19
#define ENVIRONMENT_LABEL_7_3 30
#define DEBUGGING_LABEL_7_2 29
#define OBJECT_7_3 28
#define OBJECT_7_2 27
#define OBJECT_7_1 26
#define OBJECT_7_0 25
#define EXECUTE_CACHE_7_14 21
#define EXECUTE_CACHE_7_13 23
#define FREE_REFERENCES_LABEL_7_0 20
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
system_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd62;
  machine_word Wrd69;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd49;
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
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7_4);
      goto version_string_13;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto loop_11;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_7_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (version_string_21)
DEFLABEL (version_string_13)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_23;
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  goto loop_11;

DEFLABEL (loop_22)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_7_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_36;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_35)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd17.uLng) == 30)
    goto label_32;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_31;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_29)
  Rdl = (& (Rsp [2]));
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_28;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_27)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd50.uLng) == 1)
    goto label_24;
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_24)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd60.Obj) = (Rsp [3]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_26;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [1]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_25)
  goto loop_11;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_19)
  (Wrd62.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd62.Obj));
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_18)
  (Wrd42.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd37.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_34;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);

DEFLABEL (label_33)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd28.Obj);
  goto label_29;

DEFLABEL (label_34)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_17)
  (Wrd28.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_15)
  (Wrd8.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define TAG_8_7 2
#define ENVIRONMENT_LABEL_8_3 16
#define DEBUGGING_LABEL_8_2 15
#define EXECUTE_CACHE_8_9 9
#define EXECUTE_CACHE_8_8 11
#define FREE_REFERENCE_8_0 14
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
system_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8_4);
      goto find_entry_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_entry_5)
DEFLABEL (find_entry_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_6])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_8_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_8 9
#define LABEL_9_7 11
#define ENVIRONMENT_LABEL_9_3 22
#define DEBUGGING_LABEL_9_2 21
#define OBJECT_9_3 20
#define OBJECT_9_2 19
#define OBJECT_9_1 18
#define OBJECT_9_0 17
#define EXECUTE_CACHE_9_10 13
#define EXECUTE_CACHE_9_9 15
#define FREE_REFERENCES_LABEL_9_0 12
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
system_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_9_4);
      goto match_entryP_6;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_entryP_11)
DEFLABEL (match_entryP_6)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_19;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 30))
    goto label_17;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_16)
  (Wrd25.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Rsp [4]) = (Wrd25.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_12)
  (Rsp [5]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (label_14)
  (Wrd9.Obj) = (Rsp [5]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd16.uLng) == 30)
    goto label_15;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_15)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  goto label_13;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Wrd5.Obj) = Rvl;
  goto label_12;

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
system_so_9a02e818dbbc507c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	1,
	2,
	3,
	3
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

static const struct liarc_code_S arr_decl_system_so_9a02e818dbbc507c [9] =
  {
    { "system_so_code_1", 14, system_so_code_1 },
    { "system_so_code_2", 11, system_so_code_2 },
    { "system_so_code_3", 5, system_so_code_3 },
    { "system_so_code_4", 3, system_so_code_4 },
    { "system_so_code_5", 3, system_so_code_5 },
    { "system_so_code_6", 6, system_so_code_6 },
    { "system_so_code_7", 9, system_so_code_7 },
    { "system_so_code_8", 3, system_so_code_8 },
    { "system_so_code_9", 5, system_so_code_9 }
  };

int
decl_system_so_9a02e818dbbc507c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_system_so_9a02e818dbbc507c);
  return (0);
}

DECLARE_COMPILED_CODE ("system.so", 3, decl_system_so_9a02e818dbbc507c, system_so_9a02e818dbbc507c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_system_so_data_9a02e818dbbc507c [1435] =
  "\x3f\x11\xe1\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\xc2\xb9\x1d"
  "\xc2\x08\x0c\x0d\xba\x0d\xbb\x25\xb3\x24\x28\x0d\xbc\x28\x0d\x28"
  "\x0d\xbd\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x82"
  "\x88\xb1\xc1\xb9\x1d\xc1\xbf\xb3\x25\xb3\x24\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0f\xb7\xb3"
  "\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xb1\x28\xb5\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb1"
  "\x28\xb5\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x0c\xb1\xb7\x28\xb5\x28\x1b\x28\xb4\x28\x0d\xbc"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xb1\xb7\x0c\x28\x0d\x28\xb4\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88\xb3\x24\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x0f"
  "\x80\xc1\xb7\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x17\xbf\x88\xb7\x08\x1b\x2a\xb1\x2a\xb4"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x17\xb3\x1b"
  "\xb5\x1b\x0d\x0d\x0d\x0d\x0d\xb2\x17\x28\x0d\x26\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x73\x79\x73\x74\x65\x6d\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x1b\x49\x6c\x6c\x65\x67\x61\x6c\x20\x73\x75\x62\x73\x79\x73\x74"
  "\x65\x6d\x20\x76\x65\x72\x73\x69\x6f\x6e\x3a\x09\x73\x65\x74\x2d"
  "\x63\x64\x72\x21\x02\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x10\x6e"
  "\x6f\x6e\x2d\x6e\x75\x6c\x6c\x20\x73\x74\x72\x69\x6e\x67\x1e\x61"
  "\x64\x64\x2d\x73\x75\x62\x73\x79\x73\x74\x65\x6d\x2d\x69\x64\x65"
  "\x6e\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x21\x1a\x73\x75\x62"
  "\x73\x79\x73\x74\x65\x6d\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x73\x02\x02\x03\x0d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x6e\x75\x6c\x6c\x3f\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72"
  "\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e"
  "\x74\x03\x0b\x66\x69\x6e\x64\x2d\x65\x6e\x74\x72\x79\x04\x0b\x61"
  "\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x04\x08\x61\x70\x70\x65\x6e"
  "\x64\x21\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67"
  "\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x03\x06"
  "\x6c\x69\x73\x74\x3f\x04\x06\x65\x72\x72\x6f\x72\x09\x11\x1e\x81"
  "\x83\x02\x10\x1c\x81\x83\x02\x0f\x1a\x81\x83\x02\x0e\x18\x81\x89"
  "\x02\x0d\x16\x81\x89\x02\x0c\x14\x83\x04\x0b\x12\x81\x89\x02\x0a"
  "\x10\x81\x8d\x02\x09\x0e\x81\x87\x02\x08\x0c\x81\x83\x02\x07\x0a"
  "\x81\x85\x02\x06\x08\x84\x06\x05\x06\x81\x85\x02\x04\x04\x81\x85"
  "\x02\x1d\x3c\x02\x04\x63\x64\x72\x02\x04\x63\x61\x72\x02\x02\x04"
  "\x0d\x6d\x61\x74\x63\x68\x2d\x65\x6e\x74\x72\x79\x3f\x09\x02\x1c"
  "\x18\x81\x87\x02\x1b\x16\x81\x87\x02\x1a\x14\x81\x87\x02\x19\x12"
  "\x81\x87\x02\x18\x10\x81\x87\x02\x17\x0e\x81\x87\x02\x16\x0c\x81"
  "\x87\x02\x15\x0a\x81\x89\x02\x14\x08\x81\x87\x02\x13\x06\x81\x83"
  "\x02\x12\x04\x83\x04\x17\x25\x0a\x02\x01\x21\x02\x04\x04\x6d\x61"
  "\x70\x04\x16\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e"
  "\x65\x78\x74\x2d\x63\x68\x61\x72\x0b\x04\x0c\x73\x74\x72\x69\x6e"
  "\x67\x2d\x68\x65\x61\x64\x04\x21\x0c\x81\x83\x02\x20\x0a\x81\x83"
  "\x02\x1f\x08\x83\x04\x1e\x06\x81\x81\x02\x1d\x04\x82\x02\x0b\x19"
  "\x0c\x02\x03\x03\x0a\x6c\x69\x73\x74\x2d\x63\x6f\x70\x79\x03\x24"
  "\x08\x81\x83\x02\x23\x06\x81\x83\x02\x22\x04\x83\x04\x07\x10\x0d"
  "\x02\x03\x03\x0f\x76\x65\x72\x73\x69\x6f\x6e\x2d\x73\x74\x72\x69"
  "\x6e\x67\x0e\x03\x27\x08\x81\x83\x02\x26\x06\x81\x83\x02\x25\x04"
  "\x83\x04\x07\x10\x0f\x02\x02\x20\x03\x03\x0e\x03\x05\x0e\x73\x74"
  "\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x03\x0c\x73\x74\x72"
  "\x69\x6e\x67\x2d\x63\x6f\x70\x79\x06\x2d\x0e\x81\x85\x02\x2c\x0c"
  "\x81\x85\x02\x2b\x0a\x81\x87\x02\x2a\x08\x81\x83\x02\x29\x06\x81"
  "\x83\x02\x28\x04\x83\x04\x0d\x1e\x10\x02\x08\x02\x2e\x01\x03\x0f"
  "\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x05\x03"
  "\x36\x14\xfd\xff\x03\x35\x12\x81\x85\x02\x34\x10\xfd\xff\x03\x33"
  "\x0e\xfd\xff\x03\x32\x0c\x81\x85\x02\x31\x0a\x81\x85\x02\x30\x08"
  "\x81\x83\x02\x2f\x06\x81\x83\x02\x2e\x04\x83\x04\x13\x1f\x02\x09"
  "\x02\x04\x13\x66\x69\x6e\x64\x2d\x6d\x61\x74\x63\x68\x69\x6e\x67"
  "\x2d\x69\x74\x65\x6d\x04\x09\x03\x39\x08\x81\x85\x02\x38\x06\x81"
  "\x83\x02\x37\x04\x83\x04\x07\x11\x02\x0a\x01\x21\x0e\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x04\x0b\x08\x0f\x73\x75"
  "\x62\x73\x74\x72\x69\x6e\x67\x2d\x63\x69\x3d\x3f\x03\x3e\x0c\x81"
  "\x8d\x02\x3d\x0a\x81\x8f\x02\x3c\x08\x81\x87\x02\x3b\x06\x81\x85"
  "\x02\x3a\x04\x84\x06\x0b\x17\x0b\x0a\x0b\x04\x04\x04\x10\x04\x0f"
  "\x04\x0d\x04\x0c\x04\x0a\x04\x08\x0b\x09\x0e\x24\x67\x65\x74\x2d"
  "\x73\x75\x62\x73\x79\x73\x74\x65\x6d\x2d\x69\x64\x65\x6e\x74\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x73\x74\x72\x69\x6e\x67\x1d"
  "\x67\x65\x74\x2d\x73\x75\x62\x73\x79\x73\x74\x65\x6d\x2d\x76\x65"
  "\x72\x73\x69\x6f\x6e\x2d\x73\x74\x72\x69\x6e\x67\x16\x67\x65\x74"
  "\x2d\x73\x75\x62\x73\x79\x73\x74\x65\x6d\x2d\x76\x65\x72\x73\x69"
  "\x6f\x6e\x14\x67\x65\x74\x2d\x73\x75\x62\x73\x79\x73\x74\x65\x6d"
  "\x2d\x6e\x61\x6d\x65\x73\x21\x72\x65\x6d\x6f\x76\x65\x2d\x73\x75"
  "\x62\x73\x79\x73\x74\x65\x6d\x2d\x69\x64\x65\x6e\x74\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x21\x0b\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02"
  "\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
system_so_data_9a02e818dbbc507c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_system_so_data_9a02e818dbbc507c [0]))), (sizeof (prog_system_so_data_9a02e818dbbc507c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("system.so", system_so_data_9a02e818dbbc507c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("system.so", "367947d844250a9a")
