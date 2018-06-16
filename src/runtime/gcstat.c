/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:33-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_11 17
#define LABEL_1_13 19
#define LABEL_1_14 21
#define LABEL_1_17 23
#define LABEL_1_18 25
#define LABEL_1_16 27
#define LABEL_1_20 29
#define LABEL_1_21 31
#define LABEL_1_22 33
#define LABEL_1_23 35
#define ENVIRONMENT_LABEL_1_3 65
#define DEBUGGING_LABEL_1_2 64
#define OBJECT_1_5 63
#define OBJECT_1_4 62
#define OBJECT_1_3 61
#define OBJECT_1_2 60
#define OBJECT_1_1 59
#define OBJECT_1_0 58
#define EXECUTE_CACHE_1_19 37
#define EXECUTE_CACHE_1_15 39
#define EXECUTE_CACHE_1_12 41
#define FREE_REFERENCE_1_7 44
#define FREE_REFERENCE_1_6 45
#define FREE_REFERENCE_1_5 46
#define FREE_REFERENCE_1_4 47
#define FREE_REFERENCE_1_3 48
#define FREE_REFERENCE_1_2 49
#define FREE_REFERENCE_1_1 50
#define FREE_REFERENCE_1_0 51
#define FREE_ASSIGNMENT_1_4 53
#define FREE_ASSIGNMENT_1_3 54
#define FREE_ASSIGNMENT_1_2 55
#define FREE_ASSIGNMENT_1_1 56
#define FREE_ASSIGNMENT_1_0 57
#define FREE_REFERENCES_LABEL_1_0 36
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_10;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_1_17);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_1_18);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_1_20);
      goto label_21;

    case 14:
      current_block = (Rpc - LABEL_1_21);
      goto label_22;

    case 15:
      current_block = (Rpc - LABEL_1_22);
      goto label_23;

    case 16:
      current_block = (Rpc - LABEL_1_23);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_26)
DEFLABEL (initialize_packageB_10)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_57;
  Wrd5 = Wrd9;

DEFLABEL (label_56)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd11.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_53)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_52;
  Wrd24 = Wrd28;

DEFLABEL (label_51)
  (Wrd33.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_50;
  Wrd39 = Wrd43;

DEFLABEL (label_49)
  (Wrd48.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd49.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_48;
  Wrd54 = Wrd58;

DEFLABEL (label_47)
  (Wrd63.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (Wrd64.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (Wrd68.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd76.Obj) = ((Wrd68.pObj) [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd77.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd68.pObj) [0]) = (Wrd65.Obj);

DEFLABEL (label_44)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd83.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd83.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd8.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd18.Obj) = ((Wrd10.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd10.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_41)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_40;
  Wrd8 = Wrd12;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_38;
  Wrd14 = Wrd18;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_36;
  Wrd5 = Wrd9;

DEFLABEL (label_35)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd11.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_32)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_7]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_31;
  Wrd23 = Wrd27;

DEFLABEL (label_30)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd29.pObj) [0]) = (Wrd23.Obj);

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_1_5]);
  goto pop_return;

DEFLABEL (label_29)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_23])), (Wrd29.pObj), (Wrd23.Obj));

DEFLABEL (label_24)
  goto label_27;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_22])), (Wrd24.pObj));

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_34)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_21])), (Wrd11.pObj), (Wrd5.Obj));

DEFLABEL (label_22)
  goto label_32;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_20])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_18])), (Wrd15.pObj));

DEFLABEL (label_20)
  (Wrd14.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_17])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  if ((Wrd18.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_13])), (Wrd10.pObj), (Wrd5.Obj));

DEFLABEL (label_18)
  goto label_41;

DEFLABEL (label_46)
  if ((Wrd76.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_10])), (Wrd68.pObj), (Wrd65.Obj));

DEFLABEL (label_17)
  goto label_44;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd55.pObj));

DEFLABEL (label_16)
  (Wrd54.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd40.pObj));

DEFLABEL (label_15)
  (Wrd39.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd25.pObj));

DEFLABEL (label_14)
  (Wrd24.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_55)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_6])), (Wrd11.pObj), (Wrd5.Obj));

DEFLABEL (label_13)
  goto label_53;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_8 9
#define LABEL_2_11 11
#define LABEL_2_12 13
#define LABEL_2_14 15
#define ENVIRONMENT_LABEL_2_3 30
#define DEBUGGING_LABEL_2_2 29
#define OBJECT_2_0 28
#define EXECUTE_CACHE_2_13 17
#define EXECUTE_CACHE_2_10 19
#define EXECUTE_CACHE_2_9 21
#define EXECUTE_CACHE_2_7 23
#define FREE_ASSIGNMENT_2_1 26
#define FREE_ASSIGNMENT_2_0 27
#define FREE_REFERENCES_LABEL_2_0 16
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_2_4);
      goto recorder_gc_start_4;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (recorder_gc_start_9)
DEFLABEL (recorder_gc_start_4)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_13)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_2_0]);
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_14])), (Wrd6.pObj), Rvl);

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_11])), (Wrd6.pObj), Rvl);

DEFLABEL (label_6)
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_8 9
#define LABEL_3_10 11
#define LABEL_3_14 13
#define LABEL_3_15 15
#define LABEL_3_13 17
#define LABEL_3_17 19
#define LABEL_3_18 21
#define ENVIRONMENT_LABEL_3_3 39
#define DEBUGGING_LABEL_3_2 38
#define EXECUTE_CACHE_3_19 23
#define EXECUTE_CACHE_3_16 25
#define EXECUTE_CACHE_3_12 27
#define EXECUTE_CACHE_3_11 29
#define EXECUTE_CACHE_3_9 31
#define EXECUTE_CACHE_3_7 33
#define FREE_REFERENCE_3_1 36
#define FREE_REFERENCE_3_0 37
#define FREE_REFERENCES_LABEL_3_0 22
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_3_4);
      goto recorder_gc_finish_8;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_3_14);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_3_15);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto label_12;

    case 9:
      current_block = (Rpc - LABEL_3_18);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (recorder_gc_finish_15)
DEFLABEL (recorder_gc_finish_8)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_23;
  Wrd9 = Wrd13;

DEFLABEL (label_22)
  Wrd8 = Wrd9;
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_21;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_21;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd23.Lng) = ((Wrd25.Lng) - (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_21;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_19;
  Wrd7 = Wrd11;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd13.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_17;
  Wrd15 = Wrd19;

DEFLABEL (label_16)
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_18])), (Wrd16.pObj));

DEFLABEL (label_13)
  (Wrd15.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_17])), (Wrd8.pObj));

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_14])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_22;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 9
#define DEBUGGING_LABEL_4_2 8
#define FREE_REFERENCE_4_0 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_4_4);
      goto gc_timestamp_0;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_timestamp_4)
DEFLABEL (gc_timestamp_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_9 13
#define LABEL_5_10 15
#define LABEL_5_11 17
#define LABEL_5_13 19
#define LABEL_5_14 21
#define LABEL_5_15 23
#define LABEL_5_17 25
#define ENVIRONMENT_LABEL_5_3 48
#define DEBUGGING_LABEL_5_2 47
#define OBJECT_5_4 46
#define OBJECT_5_3 45
#define OBJECT_5_2 44
#define OBJECT_5_1 43
#define OBJECT_5_0 42
#define EXECUTE_CACHE_5_18 27
#define EXECUTE_CACHE_5_16 29
#define EXECUTE_CACHE_5_12 31
#define FREE_REFERENCE_5_0 34
#define FREE_ASSIGNMENT_5_5 36
#define FREE_ASSIGNMENT_5_4 37
#define FREE_ASSIGNMENT_5_3 38
#define FREE_ASSIGNMENT_5_2 39
#define FREE_ASSIGNMENT_5_1 40
#define FREE_ASSIGNMENT_5_0 41
#define FREE_REFERENCES_LABEL_5_0 26
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd69;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_5_4);
      goto statistics_resetB_5;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_5_10);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_5_13);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_5_14);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_5_17);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (statistics_resetB_17)
DEFLABEL (statistics_resetB_5)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_41;
  Wrd6 = Wrd10;

DEFLABEL (label_40)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_39;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd12.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_38)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_37;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd25.Lng) = ((Wrd26.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_37;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));

DEFLABEL (label_36)
  (Wrd30.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd31.pObj) [0]) = (Wrd27.Obj);

DEFLABEL (label_33)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_1]));
  (Wrd44.Obj) = (current_block [OBJECT_5_2]);
  (Wrd51.Obj) = ((Wrd43.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  ((Wrd43.pObj) [0]) = (Wrd44.Obj);

DEFLABEL (label_30)
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_2]));
  (Wrd56.Obj) = (current_block [OBJECT_5_3]);
  (Wrd63.Obj) = ((Wrd55.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd55.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_27)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_24)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_4]));
  (Wrd19.Obj) = (current_block [OBJECT_5_3]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd18.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_21)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_18)
  (Wrd18.Obj) = (current_block [OBJECT_5_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (label_20)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_17])), (Wrd6.pObj), Rvl);

DEFLABEL (label_15)
  goto label_18;

DEFLABEL (label_23)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_14])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_14)
  goto label_21;

DEFLABEL (label_26)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_13])), (Wrd6.pObj), Rvl);

DEFLABEL (label_13)
  goto label_24;

DEFLABEL (label_29)
  if ((Wrd63.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_10])), (Wrd55.pObj), (Wrd56.Obj));

DEFLABEL (label_12)
  goto label_27;

DEFLABEL (label_32)
  if ((Wrd51.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_9])), (Wrd43.pObj), (Wrd44.Obj));

DEFLABEL (label_11)
  goto label_30;

DEFLABEL (label_35)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_8])), (Wrd31.pObj), (Wrd27.Obj));

DEFLABEL (label_10)
  goto label_33;

DEFLABEL (label_37)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_9)
  (Wrd23.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd7.pObj));

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto gc_statistic_timestamp_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistic_timestamp_3)
DEFLABEL (gc_statistic_timestamp_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

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

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 7
#define DEBUGGING_LABEL_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto gc_statistic_heap_left_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistic_heap_left_3)
DEFLABEL (gc_statistic_heap_left_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

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

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 7
#define DEBUGGING_LABEL_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto gc_statistic_this_gc_start_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistic_this_gc_start_3)
DEFLABEL (gc_statistic_this_gc_start_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

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

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto gc_statistic_this_gc_end_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistic_this_gc_end_3)
DEFLABEL (gc_statistic_this_gc_end_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto gc_statistic_last_gc_start_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistic_last_gc_start_3)
DEFLABEL (gc_statistic_last_gc_start_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto gc_statistic_last_gc_end_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistic_last_gc_end_3)
DEFLABEL (gc_statistic_last_gc_end_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto gc_statistic_this_gc_start_clock_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistic_this_gc_start_clock_3)
DEFLABEL (gc_statistic_this_gc_start_clock_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
gcstat_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto gc_statistic_this_gc_end_clock_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistic_this_gc_end_clock_3)
DEFLABEL (gc_statistic_this_gc_end_clock_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
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
gcstat_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto gc_statistic_last_gc_start_clock_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistic_last_gc_start_clock_3)
DEFLABEL (gc_statistic_last_gc_start_clock_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
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
gcstat_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto gc_statistic_last_gc_end_clock_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistic_last_gc_end_clock_3)
DEFLABEL (gc_statistic_last_gc_end_clock_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define ENVIRONMENT_LABEL_16_3 17
#define DEBUGGING_LABEL_16_2 16
#define OBJECT_16_3 15
#define OBJECT_16_2 14
#define OBJECT_16_1 13
#define OBJECT_16_0 12
#define FREE_REFERENCE_16_0 11
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto gc_statisticP_4;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statisticP_10)
DEFLABEL (gc_statisticP_4)
  INTERRUPT_CHECK (26, LABEL_16_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
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
  Rvl = (current_block [OBJECT_16_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_16_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_7 7
#define LABEL_17_8 9
#define LABEL_17_9 11
#define LABEL_17_10 13
#define LABEL_17_5 15
#define LABEL_17_12 17
#define LABEL_17_13 19
#define LABEL_17_14 21
#define LABEL_17_15 23
#define LABEL_17_16 25
#define LABEL_17_17 27
#define LABEL_17_18 29
#define LABEL_17_19 31
#define LABEL_17_20 33
#define LABEL_17_21 35
#define LABEL_17_22 37
#define LABEL_17_23 39
#define LABEL_17_24 41
#define LABEL_17_25 43
#define LABEL_17_26 45
#define ENVIRONMENT_LABEL_17_3 70
#define DEBUGGING_LABEL_17_2 69
#define OBJECT_17_1 68
#define OBJECT_17_0 67
#define EXECUTE_CACHE_17_28 47
#define EXECUTE_CACHE_17_27 49
#define EXECUTE_CACHE_17_11 51
#define FREE_REFERENCE_17_5 54
#define FREE_REFERENCE_17_4 55
#define FREE_REFERENCE_17_3 56
#define FREE_REFERENCE_17_2 57
#define FREE_REFERENCE_17_1 58
#define FREE_REFERENCE_17_0 59
#define FREE_ASSIGNMENT_17_5 61
#define FREE_ASSIGNMENT_17_4 62
#define FREE_ASSIGNMENT_17_3 63
#define FREE_ASSIGNMENT_17_2 64
#define FREE_ASSIGNMENT_17_1 65
#define FREE_ASSIGNMENT_17_0 66
#define FREE_REFERENCES_LABEL_17_0 46
#define NUMBER_OF_LINKER_SECTIONS_17_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd90;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd78;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd68;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
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
      goto statistics_flip_9;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_17_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_17_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_17_12);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_17_13);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_17_14);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_17_15);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_17_16);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_17_17);
      goto label_21;

    case 13:
      current_block = (Rpc - LABEL_17_18);
      goto label_22;

    case 14:
      current_block = (Rpc - LABEL_17_19);
      goto label_23;

    case 15:
      current_block = (Rpc - LABEL_17_20);
      goto label_24;

    case 16:
      current_block = (Rpc - LABEL_17_21);
      goto label_25;

    case 17:
      current_block = (Rpc - LABEL_17_22);
      goto label_26;

    case 18:
      current_block = (Rpc - LABEL_17_23);
      goto label_27;

    case 19:
      current_block = (Rpc - LABEL_17_24);
      goto label_28;

    case 20:
      current_block = (Rpc - LABEL_17_25);
      goto label_29;

    case 21:
      current_block = (Rpc - LABEL_17_26);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (statistics_flip_31)
DEFLABEL (statistics_flip_9)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_75;
  Wrd8 = Wrd12;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_73;
  Wrd14 = Wrd18;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_71;
  Wrd22 = Wrd26;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_3]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_69;
  Wrd28 = Wrd32;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd34.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_4]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_67;
  Wrd37 = Wrd41;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_4]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_65;
  Wrd6 = Wrd10;

DEFLABEL (label_64)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_63;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_62)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_4]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_61;
  Wrd20 = Wrd24;

DEFLABEL (label_60)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_59;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_58)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_57;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd39.Lng) = ((Wrd40.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd39.Lng)))
    goto label_57;
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));

DEFLABEL (label_56)
  (Wrd41.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd45.pObj) [0]) = (Wrd42.Obj);

DEFLABEL (label_53)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_5]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_52;
  Wrd57 = Wrd61;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.Obj) = (Rsp [3]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 26))
    goto label_50;
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 26))
    goto label_50;
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  (Wrd73.Lng) = ((Wrd75.Lng) - (Wrd77.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd73.Lng)))
    goto label_50;
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd73.Lng));

DEFLABEL (label_49)
  (Wrd78.Obj) = (* (Rsp++));
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd85.uLng) == 26))
    goto label_48;
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd86.uLng) == 26))
    goto label_48;
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  (Wrd87.Lng) = ((Wrd88.Lng) + (Wrd89.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd87.Lng)))
    goto label_48;
  (Wrd84.Obj) = (LONG_TO_FIXNUM (Wrd87.Lng));

DEFLABEL (label_47)
  (Wrd90.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_1]));
  (Wrd98.Obj) = ((Wrd90.pObj) [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd99.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd90.pObj) [0]) = (Wrd84.Obj);

DEFLABEL (label_44)
  (Wrd102.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_2]));
  (Wrd103.Obj) = (Rsp [1]);
  (Wrd110.Obj) = ((Wrd102.pObj) [0]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if ((Wrd111.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd102.pObj) [0]) = (Wrd103.Obj);

DEFLABEL (label_41)
  (Wrd114.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_3]));
  (Wrd115.Obj) = (Rsp [2]);
  (Wrd122.Obj) = ((Wrd114.pObj) [0]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if ((Wrd123.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd114.pObj) [0]) = (Wrd115.Obj);

DEFLABEL (label_38)
  (Wrd126.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_4]));
  (Wrd127.Obj) = (Rsp [4]);
  (Wrd134.Obj) = ((Wrd126.pObj) [0]);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if ((Wrd135.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  ((Wrd126.pObj) [0]) = (Wrd127.Obj);

DEFLABEL (label_35)
  (Wrd138.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_5]));
  (Wrd139.Obj) = (Rsp [5]);
  (Wrd146.Obj) = ((Wrd138.pObj) [0]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if ((Wrd147.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd138.pObj) [0]) = (Wrd139.Obj);

DEFLABEL (label_32)
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_26]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (Wrd153.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd153.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_27]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_26);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd5.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_28]));

DEFLABEL (label_34)
  if ((Wrd146.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_25])), (Wrd138.pObj), (Wrd139.Obj));

DEFLABEL (label_29)
  goto label_32;

DEFLABEL (label_37)
  if ((Wrd134.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_36;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_24])), (Wrd126.pObj), (Wrd127.Obj));

DEFLABEL (label_28)
  goto label_35;

DEFLABEL (label_40)
  if ((Wrd122.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_23])), (Wrd114.pObj), (Wrd115.Obj));

DEFLABEL (label_27)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd110.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_22])), (Wrd102.pObj), (Wrd103.Obj));

DEFLABEL (label_26)
  goto label_41;

DEFLABEL (label_46)
  if ((Wrd98.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_21])), (Wrd90.pObj), (Wrd84.Obj));

DEFLABEL (label_25)
  goto label_44;

DEFLABEL (label_48)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_20]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_24)
  (Wrd84.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_23)
  (Wrd68.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_18])), (Wrd58.pObj));

DEFLABEL (label_22)
  (Wrd57.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_55)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_17])), (Wrd45.pObj), (Wrd42.Obj));

DEFLABEL (label_21)
  goto label_53;

DEFLABEL (label_57)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_20)
  (Wrd37.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_19)
  (Wrd26.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_14])), (Wrd21.pObj));

DEFLABEL (label_18)
  (Wrd20.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_12])), (Wrd7.pObj));

DEFLABEL (label_16)
  (Wrd6.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_10])), (Wrd38.pObj));

DEFLABEL (label_15)
  (Wrd37.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_9])), (Wrd29.pObj));

DEFLABEL (label_14)
  (Wrd28.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_8])), (Wrd23.pObj));

DEFLABEL (label_13)
  (Wrd22.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_7])), (Wrd15.pObj));

DEFLABEL (label_12)
  (Wrd14.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_6])), (Wrd9.pObj));

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_74;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 10
#define DEBUGGING_LABEL_18_2 9
#define OBJECT_18_2 8
#define OBJECT_18_1 7
#define OBJECT_18_0 6
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_18_4);
      goto gc_statistic_meter_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistic_meter_5)
DEFLABEL (gc_statistic_meter_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_6;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd23.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_18_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 5
#define DEBUGGING_LABEL_19_2 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto default_record_statisticB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_record_statisticB_3)
DEFLABEL (default_record_statisticB_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 12
#define DEBUGGING_LABEL_20_2 11
#define EXECUTE_CACHE_20_6 7
#define FREE_REFERENCE_20_0 10
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto gctime_0;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gctime_4)
DEFLABEL (gctime_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 13
#define DEBUGGING_LABEL_21_2 12
#define OBJECT_21_0 11
#define EXECUTE_CACHE_21_6 7
#define FREE_ASSIGNMENT_21_0 10
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto reset_recorderB_0;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_recorderB_4)
DEFLABEL (reset_recorderB_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_0]));
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;

DEFLABEL (label_6)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (label_7)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_6;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_6 7
#define FREE_ASSIGNMENT_22_0 10
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_22_4);
      goto record_statisticB_0;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_statisticB_4)
DEFLABEL (record_statisticB_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_22_0]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;

DEFLABEL (label_6)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (label_7)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_6;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_22_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_8 9
#define ENVIRONMENT_LABEL_23_3 17
#define DEBUGGING_LABEL_23_2 16
#define OBJECT_23_0 15
#define EXECUTE_CACHE_23_6 11
#define FREE_REFERENCE_23_0 14
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_23_4);
      goto gc_statistics_3;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistics_8)
DEFLABEL (gc_statistics_3)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_23_0]))
    goto label_10;
  Rvl = Rvl;

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_15;
  Wrd9 = Wrd13;

DEFLABEL (label_14)
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_12;
  Wrd17 = Wrd21;

DEFLABEL (label_11)
  (Wrd27.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_8])), (Wrd18.pObj));

DEFLABEL (label_6)
  (Wrd17.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_23_0]);
  goto label_9;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_7])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_5 3
#define LABEL_24_4 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define LABEL_24_9 11
#define ENVIRONMENT_LABEL_24_3 23
#define DEBUGGING_LABEL_24_2 22
#define OBJECT_24_0 21
#define EXECUTE_CACHE_24_11 13
#define EXECUTE_CACHE_24_10 15
#define EXECUTE_CACHE_24_8 17
#define FREE_REFERENCE_24_0 20
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_24_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_24_4);
      goto gc_history_mode_6;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_history_mode_10)
DEFLABEL (gc_history_mode_6)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_24_0])))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_9);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_6])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_5);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_6 5
#define LABEL_25_8 7
#define LABEL_25_5 9
#define LABEL_25_11 11
#define LABEL_25_10 13
#define LABEL_25_12 15
#define LABEL_25_13 17
#define LABEL_25_14 19
#define ENVIRONMENT_LABEL_25_3 35
#define DEBUGGING_LABEL_25_2 34
#define OBJECT_25_3 33
#define OBJECT_25_2 32
#define OBJECT_25_1 31
#define OBJECT_25_0 30
#define EXECUTE_CACHE_25_9 21
#define EXECUTE_CACHE_25_7 23
#define FREE_REFERENCE_25_1 26
#define FREE_REFERENCE_25_0 27
#define FREE_ASSIGNMENT_25_0 29
#define FREE_REFERENCES_LABEL_25_0 20
#define NUMBER_OF_LINKER_SECTIONS_25_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_25_4);
      goto set_history_modeB_8;

    case 1:
      current_block = (Rpc - LABEL_25_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_25_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_25_12);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_25_13);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_25_14);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_history_modeB_16)
DEFLABEL (set_history_modeB_8)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_29;
  Wrd8 = Wrd12;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_8);

DEFLABEL (label_27)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_25)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_24;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  Wrd14 = Wrd18;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_0]));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd34.Obj) = ((Wrd26.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  ((Wrd26.pObj) [0]) = (Wrd27.Obj);

DEFLABEL (label_17)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  if ((Wrd34.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_14])), (Wrd26.pObj), (Wrd27.Obj));

DEFLABEL (label_14)
  goto label_17;

DEFLABEL (label_22)
  if ((Wrd18.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_21;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_25_13])), (Wrd15.pObj));

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_24)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_6])), (Wrd9.pObj));

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define LABEL_26_8 11
#define LABEL_26_9 13
#define LABEL_26_10 15
#define LABEL_26_11 17
#define ENVIRONMENT_LABEL_26_3 28
#define DEBUGGING_LABEL_26_2 27
#define FREE_REFERENCE_26_3 19
#define FREE_REFERENCE_26_2 20
#define FREE_REFERENCE_26_1 21
#define FREE_REFERENCE_26_0 22
#define FREE_ASSIGNMENT_26_2 24
#define FREE_ASSIGNMENT_26_1 25
#define FREE_ASSIGNMENT_26_0 26
#define FREE_REFERENCES_LABEL_26_0 18
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_26_4);
      goto none_install_historyB_2;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_26_8);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_26_9);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_26_10);
      goto label_9;

    case 7:
      current_block = (Rpc - LABEL_26_11);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (none_install_historyB_12)
DEFLABEL (none_install_historyB_2)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_30;
  Wrd5 = Wrd9;

DEFLABEL (label_29)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_26_0]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd11.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_26)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_25;
  Wrd23 = Wrd27;

DEFLABEL (label_24)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_26_1]));
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd29.pObj) [0]) = (Wrd23.Obj);

DEFLABEL (label_21)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_2]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_20;
  Wrd41 = Wrd45;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_3]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  Wrd47 = Wrd51;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_26_2]));
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd67.Obj) = ((Wrd59.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd59.pObj) [0]) = (Wrd60.Obj);

DEFLABEL (label_13)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  if ((Wrd67.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_26_11])), (Wrd59.pObj), (Wrd60.Obj));

DEFLABEL (label_10)
  goto label_13;

DEFLABEL (label_18)
  if ((Wrd51.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_26_10])), (Wrd48.pObj));

DEFLABEL (label_9)
  (Wrd47.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_9])), (Wrd42.pObj));

DEFLABEL (label_8)
  (Wrd41.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_23)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_26_8])), (Wrd29.pObj), (Wrd23.Obj));

DEFLABEL (label_7)
  goto label_21;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_7])), (Wrd24.pObj));

DEFLABEL (label_6)
  (Wrd23.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_28)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_26_6])), (Wrd11.pObj), (Wrd5.Obj));

DEFLABEL (label_5)
  goto label_26;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define ENVIRONMENT_LABEL_27_3 14
#define DEBUGGING_LABEL_27_2 13
#define OBJECT_27_0 12
#define FREE_REFERENCE_27_0 9
#define FREE_ASSIGNMENT_27_0 11
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_27_4);
      goto none_reset_historyB_2;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (none_reset_historyB_7)
DEFLABEL (none_reset_historyB_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  Rsp = (& (Rsp [1]));
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_0]));
  (Wrd18.Obj) = (current_block [OBJECT_27_0]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_27_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

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
gcstat_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto none_record_in_historyB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (none_record_in_historyB_3)
DEFLABEL (none_record_in_historyB_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  Rvl = (current_block [OBJECT_28_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 6
#define DEBUGGING_LABEL_29_2 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto none_get_history_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (none_get_history_3)
DEFLABEL (none_get_history_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  Rvl = (current_block [OBJECT_29_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_7 7
#define LABEL_30_9 9
#define LABEL_30_11 11
#define LABEL_30_10 13
#define ENVIRONMENT_LABEL_30_3 25
#define DEBUGGING_LABEL_30_2 24
#define OBJECT_30_0 23
#define EXECUTE_CACHE_30_13 15
#define EXECUTE_CACHE_30_12 17
#define EXECUTE_CACHE_30_8 19
#define EXECUTE_CACHE_30_6 21
#define FREE_REFERENCES_LABEL_30_0 14
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_30_4);
      goto copy_to_size_6;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_30_11);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_to_size_11)
DEFLABEL (copy_to_size_6)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_16;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_16;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd22.Lng) < (Wrd24.Lng))
    goto label_13;

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (label_13)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_15;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_15;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd21.Lng) - (Wrd23.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_15;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_10);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (label_15)
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_7 9
#define LABEL_31_8 11
#define LABEL_31_9 13
#define LABEL_31_10 15
#define LABEL_31_11 17
#define ENVIRONMENT_LABEL_31_3 28
#define DEBUGGING_LABEL_31_2 27
#define FREE_REFERENCE_31_3 19
#define FREE_REFERENCE_31_2 20
#define FREE_REFERENCE_31_1 21
#define FREE_REFERENCE_31_0 22
#define FREE_ASSIGNMENT_31_2 24
#define FREE_ASSIGNMENT_31_1 25
#define FREE_ASSIGNMENT_31_0 26
#define FREE_REFERENCES_LABEL_31_0 18
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_31_4);
      goto bounded_install_historyB_2;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_31_8);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_31_9);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_31_10);
      goto label_9;

    case 7:
      current_block = (Rpc - LABEL_31_11);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bounded_install_historyB_12)
DEFLABEL (bounded_install_historyB_2)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_30;
  Wrd5 = Wrd9;

DEFLABEL (label_29)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_0]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd11.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_26)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_25;
  Wrd23 = Wrd27;

DEFLABEL (label_24)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_1]));
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd29.pObj) [0]) = (Wrd23.Obj);

DEFLABEL (label_21)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_2]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_20;
  Wrd41 = Wrd45;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_3]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  Wrd47 = Wrd51;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_2]));
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd67.Obj) = ((Wrd59.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd59.pObj) [0]) = (Wrd60.Obj);

DEFLABEL (label_13)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  if ((Wrd67.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_11])), (Wrd59.pObj), (Wrd60.Obj));

DEFLABEL (label_10)
  goto label_13;

DEFLABEL (label_18)
  if ((Wrd51.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_31_10])), (Wrd48.pObj));

DEFLABEL (label_9)
  (Wrd47.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_9])), (Wrd42.pObj));

DEFLABEL (label_8)
  (Wrd41.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_23)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_8])), (Wrd29.pObj), (Wrd23.Obj));

DEFLABEL (label_7)
  goto label_21;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_7])), (Wrd24.pObj));

DEFLABEL (label_6)
  (Wrd23.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_28)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_6])), (Wrd11.pObj), (Wrd5.Obj));

DEFLABEL (label_5)
  goto label_26;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_7 5
#define LABEL_32_5 7
#define LABEL_32_9 9
#define LABEL_32_10 11
#define LABEL_32_6 13
#define LABEL_32_11 15
#define ENVIRONMENT_LABEL_32_3 27
#define DEBUGGING_LABEL_32_2 26
#define OBJECT_32_0 25
#define EXECUTE_CACHE_32_8 17
#define FREE_REFERENCE_32_2 20
#define FREE_REFERENCE_32_1 21
#define FREE_REFERENCE_32_0 22
#define FREE_ASSIGNMENT_32_0 24
#define FREE_REFERENCES_LABEL_32_0 16
#define NUMBER_OF_LINKER_SECTIONS_32_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_32_4);
      goto bounded_reset_historyB_4;

    case 1:
      current_block = (Rpc - LABEL_32_7);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_32_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_32_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_32_6);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_32_11);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bounded_reset_historyB_11)
DEFLABEL (bounded_reset_historyB_4)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_21;
  Wrd11 = Wrd15;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  Wrd6 = Wrd10;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_0]));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_14;

DEFLABEL (label_13)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_12)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_13;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_10])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_8)
  goto label_12;

DEFLABEL (label_17)
  if ((Wrd10.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_32_9])), (Wrd7.pObj));

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_11])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_7])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_7 9
#define LABEL_33_8 11
#define LABEL_33_9 13
#define LABEL_33_10 15
#define ENVIRONMENT_LABEL_33_3 23
#define DEBUGGING_LABEL_33_2 22
#define OBJECT_33_1 21
#define OBJECT_33_0 20
#define FREE_REFERENCE_33_0 17
#define FREE_ASSIGNMENT_33_0 19
#define FREE_REFERENCES_LABEL_33_0 16
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd54;
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
      current_block = (Rpc - LABEL_33_4);
      goto bounded_record_in_historyB_4;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_33_8);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_33_9);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_33_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bounded_record_in_historyB_13)
DEFLABEL (bounded_record_in_historyB_4)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_27;
  Wrd6 = Wrd10;

DEFLABEL (label_26)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_25;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd53.Obj) = (Rsp [0]);
  ((Wrd52.pObj) [0]) = (Wrd53.Obj);

DEFLABEL (label_24)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_23;
  Wrd13 = Wrd17;

DEFLABEL (label_22)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_21;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  Wrd26 = Wrd30;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_0]));
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd46.Obj) = ((Wrd38.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_16;

DEFLABEL (label_15)
  ((Wrd38.pObj) [0]) = (Wrd39.Obj);

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  if ((Wrd46.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_15;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_10])), (Wrd38.pObj), (Wrd39.Obj));

DEFLABEL (label_10)
  goto label_14;

DEFLABEL (label_19)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_33_9])), (Wrd27.pObj));

DEFLABEL (label_9)
  (Wrd26.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_21)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_8)
  (Wrd19.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_7])), (Wrd14.pObj));

DEFLABEL (label_7)
  (Wrd13.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 2);

DEFLABEL (label_11)
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_5])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define LABEL_34_7 9
#define LABEL_34_8 11
#define LABEL_34_9 13
#define LABEL_34_10 15
#define LABEL_34_12 17
#define LABEL_34_11 19
#define LABEL_34_13 21
#define ENVIRONMENT_LABEL_34_3 28
#define DEBUGGING_LABEL_34_2 27
#define OBJECT_34_2 26
#define OBJECT_34_1 25
#define OBJECT_34_0 24
#define FREE_REFERENCE_34_0 23
#define FREE_REFERENCES_LABEL_34_0 22
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_34_4);
      goto bounded_get_history_11;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto loop_9;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_34_9);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_34_10);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_34_12);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_34_11);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_34_13);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bounded_get_history_21)
DEFLABEL (bounded_get_history_11)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_26;
  Wrd6 = Wrd10;

DEFLABEL (label_25)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_24;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_23)
  goto loop_9;

DEFLABEL (label_24)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_5])), (Wrd7.pObj));

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_25;

DEFLABEL (loop_22)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_34_7);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_36;
  Wrd6 = Wrd10;

DEFLABEL (label_35)
  (Wrd12.Obj) = (Rsp [0]);
  if (! ((Wrd12.Obj) == (Wrd6.Obj)))
    goto label_27;
  Rvl = (current_block [OBJECT_34_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_34;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_33)
  if ((Wrd13.Obj) == (current_block [OBJECT_34_1]))
    goto label_30;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_29;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_28)
  goto loop_9;

DEFLABEL (label_29)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_32;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd35.Obj);
  goto label_28;

DEFLABEL (label_32)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_18)
  (Wrd35.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (label_16)
  (Wrd13.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_8])), (Wrd7.pObj));

DEFLABEL (label_15)
  (Wrd6.Obj) = Rvl;
  goto label_35;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_34_11);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_38;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_37)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_7 9
#define LABEL_35_8 11
#define LABEL_35_9 13
#define LABEL_35_10 15
#define LABEL_35_11 17
#define ENVIRONMENT_LABEL_35_3 28
#define DEBUGGING_LABEL_35_2 27
#define FREE_REFERENCE_35_3 19
#define FREE_REFERENCE_35_2 20
#define FREE_REFERENCE_35_1 21
#define FREE_REFERENCE_35_0 22
#define FREE_ASSIGNMENT_35_2 24
#define FREE_ASSIGNMENT_35_1 25
#define FREE_ASSIGNMENT_35_0 26
#define FREE_REFERENCES_LABEL_35_0 18
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_35_4);
      goto unbounded_install_historyB_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_35_8);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_35_9);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_35_10);
      goto label_9;

    case 7:
      current_block = (Rpc - LABEL_35_11);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unbounded_install_historyB_12)
DEFLABEL (unbounded_install_historyB_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_30;
  Wrd5 = Wrd9;

DEFLABEL (label_29)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_0]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd11.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_26)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_1]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_25;
  Wrd23 = Wrd27;

DEFLABEL (label_24)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_1]));
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd29.pObj) [0]) = (Wrd23.Obj);

DEFLABEL (label_21)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_2]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_20;
  Wrd41 = Wrd45;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_3]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  Wrd47 = Wrd51;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_2]));
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd67.Obj) = ((Wrd59.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd59.pObj) [0]) = (Wrd60.Obj);

DEFLABEL (label_13)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  if ((Wrd67.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_11])), (Wrd59.pObj), (Wrd60.Obj));

DEFLABEL (label_10)
  goto label_13;

DEFLABEL (label_18)
  if ((Wrd51.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_35_10])), (Wrd48.pObj));

DEFLABEL (label_9)
  (Wrd47.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_9])), (Wrd42.pObj));

DEFLABEL (label_8)
  (Wrd41.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_23)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_8])), (Wrd29.pObj), (Wrd23.Obj));

DEFLABEL (label_7)
  goto label_21;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_7])), (Wrd24.pObj));

DEFLABEL (label_6)
  (Wrd23.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_28)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_6])), (Wrd11.pObj), (Wrd5.Obj));

DEFLABEL (label_5)
  goto label_26;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define ENVIRONMENT_LABEL_36_3 13
#define DEBUGGING_LABEL_36_2 12
#define FREE_REFERENCE_36_0 9
#define FREE_ASSIGNMENT_36_0 11
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_36_4);
      goto unbounded_reset_historyB_2;

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

DEFLABEL (unbounded_reset_historyB_7)
DEFLABEL (unbounded_reset_historyB_2)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_36_0]));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_36_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_36_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_7 9
#define ENVIRONMENT_LABEL_37_3 15
#define DEBUGGING_LABEL_37_2 14
#define FREE_REFERENCE_37_0 11
#define FREE_ASSIGNMENT_37_0 13
#define FREE_REFERENCES_LABEL_37_0 10
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
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
      goto unbounded_record_in_historyB_3;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unbounded_record_in_historyB_9)
DEFLABEL (unbounded_record_in_historyB_3)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_17;
  Wrd6 = Wrd10;

DEFLABEL (label_16)
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  Wrd16 = Wrd20;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_37_0]));
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd36.Obj) = ((Wrd28.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd28.pObj) [0]) = (Wrd29.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd36.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_37_7])), (Wrd28.pObj), (Wrd29.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd20.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_37_6])), (Wrd17.pObj));

DEFLABEL (label_6)
  (Wrd16.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_5])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 12
#define DEBUGGING_LABEL_38_2 11
#define EXECUTE_CACHE_38_6 7
#define FREE_REFERENCE_38_0 10
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcstat_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_38_4);
      goto unbounded_get_history_0;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unbounded_get_history_4)
DEFLABEL (unbounded_get_history_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_18 17
#define LABEL_14 19
#define TAG_15 8
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_19 25
#define LABEL_20 27
#define LABEL_21 29
#define ENVIRONMENT_LABEL_3 55
#define DEBUGGING_LABEL_2 54
#define PURIFICATION_ROOT 53
#define OBJECT_13 52
#define OBJECT_12 51
#define OBJECT_11 50
#define OBJECT_10 49
#define OBJECT_9 48
#define OBJECT_8 47
#define OBJECT_7 46
#define OBJECT_6 45
#define OBJECT_5 44
#define OBJECT_4 43
#define OBJECT_3 42
#define OBJECT_2 41
#define OBJECT_1 40
#define OBJECT_0 39
#define FREE_REFERENCE_0 31
#define GLOBAL_EXECUTE_CACHE_12 33
#define GLOBAL_EXECUTE_CACHE_8 35
#define GLOBAL_EXECUTE_CACHE_5 37
#define FREE_REFERENCES_LABEL_0 30
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
gcstat_so_b79b3563552b59dd (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
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
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_17;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_18;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto make_gc_statistic_26;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_20;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_19;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto expression_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_22)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_20])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_29)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_28)
  {
    static const short sections [] =
      {
	0,
	2,
	2,
	2,
	2,
	1,
	2,
	3,
	2,
	1,
	0,
	0,
	2,
	2,
	3,
	2,
	2,
	2,
	2,
	2,
	0,
	0,
	3,
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
	3,
	1,
	2,
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 38)
      goto label_27;
    blocks = (current_block [OBJECT_13]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_19])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_27)
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
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_33;
  Wrd11 = Wrd15;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0xb0b, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_31;
  Wrd11 = Wrd15;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_11]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_24)
  (Wrd11.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_23)
  (Wrd11.Obj) = Rvl;
  goto label_32;

DEFLABEL (make_gc_statistic_26)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (make_gc_statistic_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd19.Obj) = (MAKE_OBJECT (0, 11));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (Wrd10.Obj) = (Rsp [8]);
  (Wrd11.Obj) = (Rsp [9]);
  (Wrd12.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd7.pObj) = (& (Rhp [-12]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [11]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_gcstat_so_b79b3563552b59dd [38] =
  {
    { "gcstat_so_code_1", 17, gcstat_so_code_1 },
    { "gcstat_so_code_2", 7, gcstat_so_code_2 },
    { "gcstat_so_code_3", 10, gcstat_so_code_3 },
    { "gcstat_so_code_4", 2, gcstat_so_code_4 },
    { "gcstat_so_code_5", 12, gcstat_so_code_5 },
    { "gcstat_so_code_6", 1, gcstat_so_code_6 },
    { "gcstat_so_code_7", 1, gcstat_so_code_7 },
    { "gcstat_so_code_8", 1, gcstat_so_code_8 },
    { "gcstat_so_code_9", 1, gcstat_so_code_9 },
    { "gcstat_so_code_10", 1, gcstat_so_code_10 },
    { "gcstat_so_code_11", 1, gcstat_so_code_11 },
    { "gcstat_so_code_12", 1, gcstat_so_code_12 },
    { "gcstat_so_code_13", 1, gcstat_so_code_13 },
    { "gcstat_so_code_14", 1, gcstat_so_code_14 },
    { "gcstat_so_code_15", 1, gcstat_so_code_15 },
    { "gcstat_so_code_16", 4, gcstat_so_code_16 },
    { "gcstat_so_code_17", 22, gcstat_so_code_17 },
    { "gcstat_so_code_18", 2, gcstat_so_code_18 },
    { "gcstat_so_code_19", 1, gcstat_so_code_19 },
    { "gcstat_so_code_20", 2, gcstat_so_code_20 },
    { "gcstat_so_code_21", 2, gcstat_so_code_21 },
    { "gcstat_so_code_22", 2, gcstat_so_code_22 },
    { "gcstat_so_code_23", 4, gcstat_so_code_23 },
    { "gcstat_so_code_24", 5, gcstat_so_code_24 },
    { "gcstat_so_code_25", 9, gcstat_so_code_25 },
    { "gcstat_so_code_26", 8, gcstat_so_code_26 },
    { "gcstat_so_code_27", 3, gcstat_so_code_27 },
    { "gcstat_so_code_28", 1, gcstat_so_code_28 },
    { "gcstat_so_code_29", 1, gcstat_so_code_29 },
    { "gcstat_so_code_30", 6, gcstat_so_code_30 },
    { "gcstat_so_code_31", 8, gcstat_so_code_31 },
    { "gcstat_so_code_32", 7, gcstat_so_code_32 },
    { "gcstat_so_code_33", 7, gcstat_so_code_33 },
    { "gcstat_so_code_34", 10, gcstat_so_code_34 },
    { "gcstat_so_code_35", 8, gcstat_so_code_35 },
    { "gcstat_so_code_36", 3, gcstat_so_code_36 },
    { "gcstat_so_code_37", 4, gcstat_so_code_37 },
    { "gcstat_so_code_38", 2, gcstat_so_code_38 }
  };

int
decl_gcstat_so_b79b3563552b59dd (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_gcstat_so_b79b3563552b59dd);
  return (0);
}

DECLARE_COMPILED_CODE ("gcstat.so", 14, decl_gcstat_so_b79b3563552b59dd, gcstat_so_b79b3563552b59dd)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_gcstat_so_data_b79b3563552b59dd [4399] =
  "\x5a\x50\xa1\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x80\x0d\x0d"
  "\x08\x0d\x0d\xb9\x0d\xba\x0d\xbb\x0d\x0d\x25\x0d\xbc\x0d\xbd\x0d"
  "\xbe\x0d\xbf\x0d\x1c\x0d\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x1d\x0d\x1c"
  "\x0d\x1c\x25\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x83\x88\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x84\x88\xb3\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88"
  "\x08\x06\x80\x81\xc1\x1c\xb3\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x25\xb3\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xc2\x1c\x81\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x1b\xb3"
  "\x1b\x1b\x1b\x1b\x1b\x25\x1b\x1b\x1b\x1b\xb3\x1b\x24\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\xb1\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x06\x0d\x1c\x25\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x25\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x0c\x1b\x1b\x25\xb2\x1b\x24\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x25\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x25\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x08\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\x08\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x1b\x25\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x24\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x1b\x25\x0d\x1c\x1b\x0d\x24\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xc2\x1b\x25\x1b\x24\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x08\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x25\x0d\x1c\x0d\x1c\x0d\x1c\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x25\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x25\x1b\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xb8\x17\x1c\x88\x1b"
  "\x1b\xb0\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x02\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b"
  "\x2a\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1b\x2a\x1b"
  "\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\xb5\x1b\x1b\x1b"
  "\xb6\x1b\x1b\x1b\x1b\x1b\xb7\xb2\x1b\x0d\x1b\x1b\x1b\x1b\x0d\x1b"
  "\x1b\x1b\x1b\x0d\xb4\xb1\x0d\x1b\x0d\x17\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\xc3\x0d\x1c\x0c\xb3"
  "\x0d\x1b\x0d\x1b\x1b\x1b\x0d\x1b\x1b\x08\x14\x08\x1b\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\xb3\x1b\x1b\x0d\x17\x1b\x2a\x1b\x2a\x1e\x1e"
  "\x1e\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x17\x28\x0d\x28"
  "\x0d\x28\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x67\x63\x73\x74\x61\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x02\x05\x6e\x6f\x6e\x65\x08\x62\x6f\x75\x6e\x64\x65\x64\x0a\x75"
  "\x6e\x62\x6f\x75\x6e\x64\x65\x64\x17\x68\x6f\x6f\x6b\x2f\x72\x65"
  "\x63\x6f\x72\x64\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x21\x0e"
  "\x68\x69\x73\x74\x6f\x72\x79\x2d\x6d\x6f\x64\x65\x73\x0a\x74\x69"
  "\x6d\x65\x73\x74\x61\x6d\x70\x0e\x68\x6f\x6f\x6b\x2f\x67\x63\x2d"
  "\x73\x74\x61\x72\x74\x0f\x68\x6f\x6f\x6b\x2f\x67\x63\x2d\x66\x69"
  "\x6e\x69\x73\x68\x06\x1a\x64\x65\x66\x61\x75\x6c\x74\x2f\x72\x65"
  "\x63\x6f\x72\x64\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x21\x1b"
  "\x75\x6e\x62\x6f\x75\x6e\x64\x65\x64\x3a\x69\x6e\x73\x74\x61\x6c"
  "\x6c\x2d\x68\x69\x73\x74\x6f\x72\x79\x21\x19\x62\x6f\x75\x6e\x64"
  "\x65\x64\x3a\x69\x6e\x73\x74\x61\x6c\x6c\x2d\x68\x69\x73\x74\x6f"
  "\x72\x79\x21\x16\x6e\x6f\x6e\x65\x3a\x69\x6e\x73\x74\x61\x6c\x6c"
  "\x2d\x68\x69\x73\x74\x6f\x72\x79\x21\x12\x73\x74\x61\x74\x69\x73"
  "\x74\x69\x63\x73\x2d\x72\x65\x73\x65\x74\x21\x09\x14\x65\x76\x65"
  "\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x6f\x72\x65"
  "\x12\x72\x65\x63\x6f\x72\x64\x65\x72\x2f\x67\x63\x2d\x73\x74\x61"
  "\x72\x74\x0a\x13\x72\x65\x63\x6f\x72\x64\x65\x72\x2f\x67\x63\x2d"
  "\x66\x69\x6e\x69\x73\x68\x0b\x09\x03\x12\x73\x65\x74\x2d\x68\x69"
  "\x73\x74\x6f\x72\x79\x2d\x6d\x6f\x64\x65\x21\x0c\x02\x09\x04\x14"
  "\x61\x64\x64\x2d\x65\x76\x65\x6e\x74\x2d\x72\x65\x63\x65\x69\x76"
  "\x65\x72\x21\x04\x1f\x24\x81\x81\x02\x1e\x22\x81\x81\x02\x1d\x20"
  "\x81\x81\x02\x1c\x1e\x81\x81\x02\x1b\x1c\x81\x81\x02\x1a\x1a\x81"
  "\x85\x02\x19\x18\x81\x83\x02\x18\x16\x81\x81\x02\x17\x14\x81\x81"
  "\x02\x16\x12\x81\x81\x02\x15\x10\x81\x81\x02\x14\x0e\x81\x83\x02"
  "\x13\x0c\x81\x83\x02\x12\x0a\x81\x81\x02\x11\x08\x81\x81\x02\x10"
  "\x06\x81\x81\x02\x0f\x04\x82\x02\x23\x42\x0d\x02\x02\x14\x74\x68"
  "\x69\x73\x2d\x67\x63\x2d\x73\x74\x61\x72\x74\x2d\x63\x6c\x6f\x63"
  "\x6b\x0e\x0e\x74\x68\x69\x73\x2d\x67\x63\x2d\x73\x74\x61\x72\x74"
  "\x0f\x03\x02\x12\x6e\x65\x61\x72\x65\x73\x74\x2d\x63\x6d\x64\x6c"
  "\x2f\x70\x6f\x72\x74\x10\x02\x10\x72\x65\x61\x6c\x2d\x74\x69\x6d"
  "\x65\x2d\x63\x6c\x6f\x63\x6b\x11\x03\x0e\x70\x6f\x72\x74\x2f\x67"
  "\x63\x2d\x73\x74\x61\x72\x74\x02\x13\x70\x72\x6f\x63\x65\x73\x73"
  "\x2d\x74\x69\x6d\x65\x2d\x63\x6c\x6f\x63\x6b\x12\x05\x26\x10\x81"
  "\x81\x02\x25\x0e\x81\x81\x02\x24\x0c\x81\x81\x02\x23\x0a\x81\x81"
  "\x02\x22\x08\x81\x83\x02\x21\x06\x81\x81\x02\x20\x04\x82\x02\x0f"
  "\x1f\x13\x02\x0f\x0e\x03\x02\x12\x02\x10\x02\x11\x03\x0f\x70\x6f"
  "\x72\x74\x2f\x67\x63\x2d\x66\x69\x6e\x69\x73\x68\x03\x17\x69\x6e"
  "\x63\x72\x65\x6d\x65\x6e\x74\x2d\x6e\x6f\x6e\x2d\x72\x75\x6e\x74"
  "\x69\x6d\x65\x21\x07\x10\x73\x74\x61\x74\x69\x73\x74\x69\x63\x73"
  "\x2d\x66\x6c\x69\x70\x10\x07\x30\x16\x81\x8b\x02\x2f\x14\x81\x89"
  "\x02\x2e\x12\x81\x85\x02\x2d\x10\x81\x87\x02\x2c\x0e\x81\x87\x02"
  "\x2b\x0c\x81\x83\x02\x2a\x0a\x81\x85\x02\x29\x08\x81\x87\x02\x28"
  "\x06\x81\x85\x02\x27\x04\x84\x06\x15\x28\x14\x02\x02\x32\x06\x81"
  "\x81\x02\x31\x04\x82\x02\x05\x0a\x15\x02\x04\x63\x64\x72\x16\x0e"
  "\x74\x6f\x74\x61\x6c\x2d\x67\x63\x2d\x74\x69\x6d\x65\x17\x14\x6c"
  "\x61\x73\x74\x2d\x67\x63\x2d\x73\x74\x61\x72\x74\x2d\x63\x6c\x6f"
  "\x63\x6b\x18\x12\x6c\x61\x73\x74\x2d\x67\x63\x2d\x65\x6e\x64\x2d"
  "\x63\x6c\x6f\x63\x6b\x19\x0e\x6c\x61\x73\x74\x2d\x67\x63\x2d\x73"
  "\x74\x61\x72\x74\x1a\x0c\x6c\x61\x73\x74\x2d\x67\x63\x2d\x65\x6e"
  "\x64\x1b\x07\x02\x02\x11\x02\x12\x03\x10\x72\x65\x73\x65\x74\x2d"
  "\x72\x65\x63\x6f\x72\x64\x65\x72\x21\x12\x04\x3e\x1a\x81\x81\x02"
  "\x3d\x18\x81\x81\x02\x3c\x16\x81\x81\x02\x3b\x14\x81\x81\x02\x3a"
  "\x12\x81\x81\x02\x39\x10\x81\x81\x02\x38\x0e\x81\x81\x02\x37\x0c"
  "\x81\x81\x02\x36\x0a\x81\x81\x02\x35\x08\x81\x81\x02\x34\x06\x81"
  "\x81\x02\x33\x04\x82\x02\x19\x31\x11\x02\x0c\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x72\x65\x66\x1c\x3f\x04\x83\x04\x03\x1d\x02\x08\x1c"
  "\x40\x04\x83\x04\x03\x1e\x02\x09\x1c\x41\x04\x83\x04\x03\x1f\x02"
  "\x0a\x1c\x42\x04\x83\x04\x03\x20\x02\x0b\x1c\x43\x04\x83\x04\x03"
  "\x21\x02\x0c\x1c\x44\x04\x83\x04\x03\x22\x02\x0d\x1c\x08\x45\x04"
  "\x83\x04\x03\x23\x02\x0e\x1c\x09\x46\x04\x83\x04\x03\x24\x02\x0f"
  "\x1c\x0a\x47\x04\x83\x04\x03\x25\x02\x10\x1c\x0b\x48\x04\x83\x04"
  "\x03\x26\x02\x11\x1c\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x27\x02\x4c\x0a\x81"
  "\x85\x02\x4b\x08\x81\x83\x02\x4a\x06\x81\x83\x02\x49\x04\x83\x04"
  "\x09\x12\x28\x02\x12\x04\x63\x61\x72\x29\x16\x17\x1a\x1b\x18\x19"
  "\x07\x19\x18\x1b\x1a\x17\x07\x0c\x12\x6d\x61\x6b\x65\x2d\x67\x63"
  "\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x2a\x03\x12\x72\x65\x63"
  "\x6f\x72\x64\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x21\x2b\x03"
  "\x04\x62\x2e\x81\x8d\x02\x61\x2c\x81\x8d\x02\x60\x2a\x81\x8d\x02"
  "\x5f\x28\x81\x8d\x02\x5e\x26\x81\x8d\x02\x5d\x24\x81\x8d\x02\x5c"
  "\x22\x81\x8d\x02\x5b\x20\x81\x8f\x02\x5a\x1e\x81\x8d\x02\x59\x1c"
  "\x81\x8d\x02\x58\x1a\x81\x8f\x02\x57\x18\x81\x8f\x02\x56\x16\x81"
  "\x8f\x02\x55\x14\x81\x8d\x02\x54\x12\x81\x8d\x02\x53\x10\x81\x8b"
  "\x02\x52\x0e\x81\x9f\x02\x51\x0c\x81\x97\x02\x50\x0a\x81\x95\x02"
  "\x4f\x08\x81\x8f\x02\x4e\x06\x81\x8d\x02\x4d\x04\x87\x0c\x2d\x47"
  "\x2c\x02\x13\x29\x1c\x64\x06\x81\x83\x02\x63\x04\x83\x04\x05\x0b"
  "\x1c\x02\x14\x65\x04\x83\x04\x03\x2d\x02\x15\x17\x02\x03\x1d\x69"
  "\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x74\x69\x6d\x65\x2f\x74\x69\x63"
  "\x6b\x73\x2d\x3e\x73\x65\x63\x6f\x6e\x64\x73\x02\x67\x06\x81\x81"
  "\x02\x66\x04\x82\x02\x05\x0d\x2e\x02\x16\x0f\x6c\x61\x73\x74\x2d"
  "\x73\x74\x61\x74\x69\x73\x74\x69\x63\x2f\x02\x03\x0f\x72\x65\x73"
  "\x65\x74\x2d\x68\x69\x73\x74\x6f\x72\x79\x21\x30\x02\x69\x06\x81"
  "\x83\x02\x68\x04\x83\x04\x05\x0e\x31\x02\x17\x2f\x02\x03\x13\x72"
  "\x65\x63\x6f\x72\x64\x2d\x69\x6e\x2d\x68\x69\x73\x74\x6f\x72\x79"
  "\x21\x32\x02\x6b\x06\x81\x83\x02\x6a\x04\x83\x04\x05\x0d\x33\x02"
  "\x18\x2f\x02\x02\x0c\x67\x65\x74\x2d\x68\x69\x73\x74\x6f\x72\x79"
  "\x34\x02\x6f\x0a\x81\x83\x02\x6e\x08\x81\x83\x02\x6d\x06\x81\x81"
  "\x02\x6c\x04\x82\x02\x09\x12\x35\x02\x19\x08\x0d\x68\x69\x73\x74"
  "\x6f\x72\x79\x2d\x6d\x6f\x64\x65\x36\x02\x02\x34\x03\x0c\x03\x30"
  "\x04\x74\x0c\x81\x83\x02\x73\x0a\x81\x87\x02\x72\x08\x81\x83\x02"
  "\x71\x06\x83\x02\x70\x04\x81\x85\x02\x0b\x18\x37\x02\x1a\x29\x16"
  "\x0e\x42\x61\x64\x20\x6d\x6f\x64\x65\x20\x6e\x61\x6d\x65\x0c\x36"
  "\x02\x36\x03\x04\x05\x61\x73\x73\x71\x05\x06\x65\x72\x72\x6f\x72"
  "\x03\x7d\x14\x81\x85\x02\x7c\x12\x81\x83\x02\x7b\x10\x81\x85\x02"
  "\x7a\x0e\x81\x85\x02\x79\x0c\x81\x87\x02\x78\x0a\x81\x83\x02\x77"
  "\x08\x81\x85\x02\x76\x06\x81\x85\x02\x75\x04\x83\x04\x13\x24\x38"
  "\x02\x1b\x30\x32\x34\x04\x14\x6e\x6f\x6e\x65\x3a\x72\x65\x73\x65"
  "\x74\x2d\x68\x69\x73\x74\x6f\x72\x79\x21\x39\x18\x6e\x6f\x6e\x65"
  "\x3a\x72\x65\x63\x6f\x72\x64\x2d\x69\x6e\x2d\x68\x69\x73\x74\x6f"
  "\x72\x79\x21\x3a\x11\x6e\x6f\x6e\x65\x3a\x67\x65\x74\x2d\x68\x69"
  "\x73\x74\x6f\x72\x79\x3b\x34\x05\x85\x01\x12\x81\x85\x02\x84\x01"
  "\x10\x81\x83\x02\x83\x01\x0e\x81\x81\x02\x82\x01\x0c\x81\x81\x02"
  "\x81\x01\x0a\x81\x81\x02\x80\x01\x08\x81\x81\x02\x7f\x06\x81\x81"
  "\x02\x7e\x04\x82\x02\x11\x1d\x3c\x02\x1c\x08\x68\x69\x73\x74\x6f"
  "\x72\x79\x3d\x02\x3d\x02\x88\x01\x08\x81\x83\x02\x87\x01\x06\x81"
  "\x81\x02\x86\x01\x04\x83\x04\x07\x0f\x3e\x02\x1d\x05\x64\x6f\x6e"
  "\x65\x89\x01\x04\x83\x04\x03\x3f\x02\x1e\x8a\x01\x04\x82\x02\x03"
  "\x40\x02\x1f\x03\x07\x6c\x65\x6e\x67\x74\x68\x04\x0a\x6c\x69\x73"
  "\x74\x2d\x68\x65\x61\x64\x04\x0a\x6d\x61\x6b\x65\x2d\x6c\x69\x73"
  "\x74\x04\x07\x61\x70\x70\x65\x6e\x64\x05\x90\x01\x0e\x81\x87\x02"
  "\x8f\x01\x0c\x81\x8b\x02\x8e\x01\x0a\x81\x87\x02\x8d\x01\x08\x81"
  "\x87\x02\x8c\x01\x06\x81\x85\x02\x8b\x01\x04\x84\x06\x0d\x1a\x41"
  "\x02\x20\x30\x32\x34\x04\x17\x62\x6f\x75\x6e\x64\x65\x64\x3a\x72"
  "\x65\x73\x65\x74\x2d\x68\x69\x73\x74\x6f\x72\x79\x21\x42\x1b\x62"
  "\x6f\x75\x6e\x64\x65\x64\x3a\x72\x65\x63\x6f\x72\x64\x2d\x69\x6e"
  "\x2d\x68\x69\x73\x74\x6f\x72\x79\x21\x43\x14\x62\x6f\x75\x6e\x64"
  "\x65\x64\x3a\x67\x65\x74\x2d\x68\x69\x73\x74\x6f\x72\x79\x44\x34"
  "\x05\x98\x01\x12\x81\x85\x02\x97\x01\x10\x81\x83\x02\x96\x01\x0e"
  "\x81\x81\x02\x95\x01\x0c\x81\x81\x02\x94\x01\x0a\x81\x81\x02\x93"
  "\x01\x08\x81\x81\x02\x92\x01\x06\x81\x81\x02\x91\x01\x04\x82\x02"
  "\x11\x1d\x45\x02\x21\x06\x61\x70\x70\x6c\x79\x3d\x02\x0d\x68\x69"
  "\x73\x74\x6f\x72\x79\x2d\x73\x69\x7a\x65\x46\x3d\x0e\x63\x69\x72"
  "\x63\x75\x6c\x61\x72\x2d\x6c\x69\x73\x74\x04\x04\x0d\x63\x6f\x70"
  "\x79\x2d\x74\x6f\x2d\x73\x69\x7a\x65\x47\x02\x9f\x01\x10\x81\x87"
  "\x02\x9e\x01\x0e\x81\x85\x02\x9d\x01\x0c\x81\x85\x02\x9c\x01\x0a"
  "\x81\x83\x02\x9b\x01\x08\x81\x83\x02\x9a\x01\x06\x81\x87\x02\x99"
  "\x01\x04\x83\x04\x0f\x1c\x48\x02\x22\x16\x09\x73\x65\x74\x2d\x63"
  "\x61\x72\x21\x3d\x02\x3d\x02\xa6\x01\x10\x81\x85\x02\xa5\x01\x0e"
  "\x81\x83\x02\xa4\x01\x0c\x81\x83\x02\xa3\x01\x0a\x81\x83\x02\xa2"
  "\x01\x08\x81\x83\x02\xa1\x01\x06\x81\x83\x02\xa0\x01\x04\x83\x04"
  "\x0f\x18\x49\x02\x23\x29\x16\x3d\x02\xb0\x01\x16\x81\x85\x02\xaf"
  "\x01\x14\x81\x83\x02\xae\x01\x12\x81\x85\x02\xad\x01\x10\x81\x83"
  "\x02\xac\x01\x0e\x81\x83\x02\xab\x01\x0c\x81\x83\x02\xaa\x01\x0a"
  "\x81\x83\x02\xa9\x01\x08\x81\x81\x02\xa8\x01\x06\x81\x81\x02\xa7"
  "\x01\x04\x82\x02\x15\x1d\x29\x02\x24\x30\x32\x34\x04\x19\x75\x6e"
  "\x62\x6f\x75\x6e\x64\x65\x64\x3a\x72\x65\x73\x65\x74\x2d\x68\x69"
  "\x73\x74\x6f\x72\x79\x21\x16\x1d\x75\x6e\x62\x6f\x75\x6e\x64\x65"
  "\x64\x3a\x72\x65\x63\x6f\x72\x64\x2d\x69\x6e\x2d\x68\x69\x73\x74"
  "\x6f\x72\x79\x21\x4a\x16\x75\x6e\x62\x6f\x75\x6e\x64\x65\x64\x3a"
  "\x67\x65\x74\x2d\x68\x69\x73\x74\x6f\x72\x79\x4b\x34\x05\xb8\x01"
  "\x12\x81\x85\x02\xb7\x01\x10\x81\x83\x02\xb6\x01\x0e\x81\x81\x02"
  "\xb5\x01\x0c\x81\x81\x02\xb4\x01\x0a\x81\x81\x02\xb3\x01\x08\x81"
  "\x81\x02\xb2\x01\x06\x81\x81\x02\xb1\x01\x04\x82\x02\x11\x1d\x4c"
  "\x02\x25\x3d\x02\x3d\x02\xbb\x01\x08\x81\x85\x02\xba\x01\x06\x81"
  "\x83\x02\xb9\x01\x04\x83\x04\x07\x0e\x4d\x02\x26\x3d\x02\x3d\x02"
  "\xbf\x01\x0a\x81\x85\x02\xbe\x01\x08\x81\x83\x02\xbd\x01\x06\x81"
  "\x83\x02\xbc\x01\x04\x83\x04\x09\x10\x4e\x02\x27\x3d\x02\x03\x08"
  "\x72\x65\x76\x65\x72\x73\x65\x02\xc1\x01\x06\x81\x81\x02\xc0\x01"
  "\x04\x82\x02\x05\x0d\x27\x4f\x4f\x27\x04\x4e\x04\x4d\x04\x4c\x04"
  "\x29\x04\x49\x04\x48\x04\x45\x04\x41\x04\x09\x40\x04\x3f\x04\x3e"
  "\x04\x3c\x04\x38\x04\x37\x06\x35\x04\x33\x04\x31\x04\x2e\x04\x2d"
  "\x04\x1c\x04\x2c\x04\x28\x04\x21\x4b\x4a\x16\x44\x43\x42\x47\x46"
  "\x3b\x3a\x39\x0c\x10\x67\x63\x2d\x68\x69\x73\x74\x6f\x72\x79\x2d"
  "\x6d\x6f\x64\x65\x36\x34\x32\x30\x0e\x67\x63\x2d\x73\x74\x61\x74"
  "\x69\x73\x74\x69\x63\x73\x2b\x12\x3d\x2f\x07\x67\x63\x74\x69\x6d"
  "\x65\x13\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x2f\x6d"
  "\x65\x74\x65\x72\x10\x0e\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74"
  "\x69\x63\x3f\x21\x2a\x1f\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74"
  "\x69\x63\x2f\x6c\x61\x73\x74\x2d\x67\x63\x2d\x65\x6e\x64\x2d\x63"
  "\x6c\x6f\x63\x6b\x21\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69"
  "\x63\x2f\x6c\x61\x73\x74\x2d\x67\x63\x2d\x73\x74\x61\x72\x74\x2d"
  "\x63\x6c\x6f\x63\x6b\x1f\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74"
  "\x69\x63\x2f\x74\x68\x69\x73\x2d\x67\x63\x2d\x65\x6e\x64\x2d\x63"
  "\x6c\x6f\x63\x6b\x21\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69"
  "\x63\x2f\x74\x68\x69\x73\x2d\x67\x63\x2d\x73\x74\x61\x72\x74\x2d"
  "\x63\x6c\x6f\x63\x6b\x19\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74"
  "\x69\x63\x2f\x6c\x61\x73\x74\x2d\x67\x63\x2d\x65\x6e\x64\x1b\x67"
  "\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x2f\x6c\x61\x73\x74"
  "\x2d\x67\x63\x2d\x73\x74\x61\x72\x74\x19\x67\x63\x2d\x73\x74\x61"
  "\x74\x69\x73\x74\x69\x63\x2f\x74\x68\x69\x73\x2d\x67\x63\x2d\x65"
  "\x6e\x64\x1b\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x2f"
  "\x74\x68\x69\x73\x2d\x67\x63\x2d\x73\x74\x61\x72\x74\x17\x67\x63"
  "\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x2f\x68\x65\x61\x70\x2d"
  "\x6c\x65\x66\x74\x17\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69"
  "\x63\x2f\x74\x69\x6d\x65\x73\x74\x61\x6d\x70\x0b\x26\x04\x25\x04"
  "\x24\x04\x23\x04\x22\x04\x21\x04\x20\x04\x1f\x04\x1e\x04\x1d\x04"
  "\x0b\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x11\x72\x74\x64\x3a\x67\x63\x2d\x73\x74\x61\x74\x69\x73"
  "\x74\x69\x63\x4f\x0d\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69"
  "\x63\x0a\x68\x65\x61\x70\x2d\x6c\x65\x66\x74\x0f\x0c\x74\x68\x69"
  "\x73\x2d\x67\x63\x2d\x65\x6e\x64\x1a\x1b\x0e\x12\x74\x68\x69\x73"
  "\x2d\x67\x63\x2d\x65\x6e\x64\x2d\x63\x6c\x6f\x63\x6b\x18\x19\x0a"
  "\x09\x0d\x67\x63\x2d\x74\x69\x6d\x65\x73\x74\x61\x6d\x70\x19\x18"
  "\x0e\x0f\x1b\x1a\x17\x0b\x0a\x14\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x0e\x11\x04\x15\x04"
  "\x14\x04\x13\x04\x0d\x04\x0e\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d\x72"
  "\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f"
  "\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68"
  "\x2d\x74\x61\x67\x04\x4f\x02\x0e\x1e\x80\x80\x04\x0d\x1c\x81\x81"
  "\x02\x0c\x1a\x81\x81\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02"
  "\x09\x14\x81\x97\x02\x08\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06"
  "\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08"
  "\x81\x87\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x1d\x38";

SCHEME_OBJECT *
gcstat_so_data_b79b3563552b59dd (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_gcstat_so_data_b79b3563552b59dd [0]))), (sizeof (prog_gcstat_so_data_b79b3563552b59dd)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_21]));
}

DECLARE_COMPILED_DATA_NS ("gcstat.so", gcstat_so_data_b79b3563552b59dd)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("gcstat.so", "3912a90505ab831d")
